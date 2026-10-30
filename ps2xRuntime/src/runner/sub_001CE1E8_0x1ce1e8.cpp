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

// Function: sub_001CE1E8
// Address: 0x1ce1e8 - 0x1ce218
void sub_001CE1E8_0x1ce1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE1E8_0x1ce1e8");
#endif

    switch (ctx->pc) {
        case 0x1ce20cu: goto label_1ce20c;
        default: break;
    }

    ctx->pc = 0x1ce1e8u;

    // 0x1ce1e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce1ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1ce1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1ce1f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce1f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ce1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ce1f8: 0x24422fd0  addiu       $v0, $v0, 0x2FD0
    ctx->pc = 0x1ce1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12240));
    // 0x1ce1fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ce1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce200: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ce200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ce204: 0xc0738f0  jal         func_1CE3C0
    ctx->pc = 0x1CE204u;
    SET_GPR_U32(ctx, 31, 0x1CE20Cu);
    ctx->pc = 0x1CE208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE204u;
    // 0x1ce208: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE3C0u, 0x1CE204u, 0x1CE20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE20Cu;
label_1ce20c:
    // 0x1ce20c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce210: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE210u;
        // 0x1ce214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE218u;
}
