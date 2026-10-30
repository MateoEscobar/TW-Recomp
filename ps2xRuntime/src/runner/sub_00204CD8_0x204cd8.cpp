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

// Function: sub_00204CD8
// Address: 0x204cd8 - 0x204d18
void sub_00204CD8_0x204cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204CD8_0x204cd8");
#endif

    switch (ctx->pc) {
        case 0x204cfcu: goto label_204cfc;
        default: break;
    }

    ctx->pc = 0x204cd8u;

    // 0x204cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204cdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x204cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x204ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ce8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x204ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x204cec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x204CECu;
    {
        const bool branch_taken_0x204cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204cec) {
            ctx->pc = 0x204CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204CECu;
            // 0x204cf0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204D0Cu;
            goto label_204d0c;
        }
    }
    ctx->pc = 0x204CF4u;
    // 0x204cf4: 0xc081314  jal         func_204C50
    ctx->pc = 0x204CF4u;
    SET_GPR_U32(ctx, 31, 0x204CFCu);
    ctx->pc = 0x204C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204C50u, 0x204CF4u, 0x204CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CFCu;
label_204cfc:
    // 0x204cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d00: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x204d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x204d04: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x204d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x204d08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x204d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204d0c:
    // 0x204d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204d10: 0x3e00008  jr          $ra
    ctx->pc = 0x204D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D10u;
        // 0x204d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204D18u;
}
