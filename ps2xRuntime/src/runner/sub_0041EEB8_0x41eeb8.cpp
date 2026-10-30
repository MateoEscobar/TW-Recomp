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

// Function: sub_0041EEB8
// Address: 0x41eeb8 - 0x41ef00
void sub_0041EEB8_0x41eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EEB8_0x41eeb8");
#endif

    switch (ctx->pc) {
        case 0x41eef4u: goto label_41eef4;
        default: break;
    }

    ctx->pc = 0x41eeb8u;

    // 0x41eeb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41eebc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x41eebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x41eec0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x41eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x41eec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41eec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41eec8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x41eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x41eecc: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x41eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x41eed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x41eed4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x41eed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x41eed8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x41eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x41eedc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41eedcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41eee0: 0x8cc2489c  lw          $v0, 0x489C($a2)
    ctx->pc = 0x41eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41eee4: 0xac600e20  sw          $zero, 0xE20($v1)
    ctx->pc = 0x41eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3616), GPR_U32(ctx, 0));
    // 0x41eee8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x41eee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41eeec: 0xc107a76  jal         func_41E9D8
    ctx->pc = 0x41EEECu;
    SET_GPR_U32(ctx, 31, 0x41EEF4u);
    ctx->pc = 0x41EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EEECu;
    // 0x41eef0: 0x24440480  addiu       $a0, $v0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E9D8u, 0x41EEECu, 0x41EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EEF4u;
label_41eef4:
    // 0x41eef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41eef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41eef8: 0x3e00008  jr          $ra
    ctx->pc = 0x41EEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EEF8u;
        // 0x41eefc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EF00u;
}
