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

// Function: sub_0041EF98
// Address: 0x41ef98 - 0x41efd0
void sub_0041EF98_0x41ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EF98_0x41ef98");
#endif

    switch (ctx->pc) {
        case 0x41efc4u: goto label_41efc4;
        default: break;
    }

    ctx->pc = 0x41ef98u;

    // 0x41ef98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41ef9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x41ef9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41efa0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x41efa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41efa4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41efa8: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x41efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x41efac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41efacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41efb0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x41efb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41efb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41efb8: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x41efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x41efbc: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x41EFBCu;
    SET_GPR_U32(ctx, 31, 0x41EFC4u);
    ctx->pc = 0x41EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EFBCu;
    // 0x41efc0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x41EFBCu, 0x41EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EFC4u;
label_41efc4:
    // 0x41efc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41efc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41efc8: 0x3e00008  jr          $ra
    ctx->pc = 0x41EFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EFC8u;
        // 0x41efcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EFD0u;
}
