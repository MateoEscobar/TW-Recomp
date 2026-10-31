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

// Function: sub_001CE718
// Address: 0x1ce718 - 0x1ce748
void sub_001CE718_0x1ce718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE718_0x1ce718");
#endif

    switch (ctx->pc) {
        case 0x1ce738u: goto label_1ce738;
        default: break;
    }

    ctx->pc = 0x1ce718u;

    // 0x1ce718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce71c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1ce71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1ce720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce724: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ce724u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ce728: 0x24422fd0  addiu       $v0, $v0, 0x2FD0
    ctx->pc = 0x1ce728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12240));
    // 0x1ce72c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ce72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ce730: 0xc073970  jal         func_1CE5C0
    ctx->pc = 0x1CE730u;
    SET_GPR_U32(ctx, 31, 0x1CE738u);
    ctx->pc = 0x1CE734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE730u;
    // 0x1ce734: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE5C0u, 0x1CE730u, 0x1CE738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE738u;
label_1ce738:
    // 0x1ce738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce73c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE73Cu;
        // 0x1ce740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE744u;
    // 0x1ce744: 0x0  nop
    ctx->pc = 0x1ce744u;
    // NOP
    ctx->pc = 0x1ce748u;
}
