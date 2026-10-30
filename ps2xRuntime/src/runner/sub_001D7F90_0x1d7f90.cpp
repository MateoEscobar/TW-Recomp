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

// Function: sub_001D7F90
// Address: 0x1d7f90 - 0x1d7ff0
void sub_001D7F90_0x1d7f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7F90_0x1d7f90");
#endif

    switch (ctx->pc) {
        case 0x1d7fbcu: goto label_1d7fbc;
        case 0x1d7fe0u: goto label_1d7fe0;
        default: break;
    }

    ctx->pc = 0x1d7f90u;

    // 0x1d7f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f94: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1d7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x1d7f98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7fa0: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7FA0u;
    {
        const bool branch_taken_0x1d7fa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FA0u;
        // 0x1d7fa4: 0xac430840  sw          $v1, 0x840($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fa0) {
            ctx->pc = 0x1D7FC4u;
            goto label_1d7fc4;
        }
    }
    ctx->pc = 0x1D7FA8u;
    // 0x1d7fa8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d7fac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d7facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fb0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1d7fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d7fb4: 0xc1062a2  jal         func_418A88
    ctx->pc = 0x1D7FB4u;
    SET_GPR_U32(ctx, 31, 0x1D7FBCu);
    ctx->pc = 0x1D7FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FB4u;
    // 0x1d7fb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418A88u, 0x1D7FB4u, 0x1D7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FBCu;
label_1d7fbc:
    // 0x1d7fbc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7FBCu;
    {
        const bool branch_taken_0x1d7fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FBCu;
        // 0x1d7fc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fbc) {
            ctx->pc = 0x1D7FE4u;
            goto label_1d7fe4;
        }
    }
    ctx->pc = 0x1D7FC4u;
label_1d7fc4:
    // 0x1d7fc4: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7FC4u;
    {
        const bool branch_taken_0x1d7fc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FC4u;
        // 0x1d7fc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fc4) {
            ctx->pc = 0x1D7FE4u;
            goto label_1d7fe4;
        }
    }
    ctx->pc = 0x1D7FCCu;
    // 0x1d7fcc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d7fd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d7fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fd4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1d7fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d7fd8: 0xc1062a2  jal         func_418A88
    ctx->pc = 0x1D7FD8u;
    SET_GPR_U32(ctx, 31, 0x1D7FE0u);
    ctx->pc = 0x1D7FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FD8u;
    // 0x1d7fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418A88u, 0x1D7FD8u, 0x1D7FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FE0u;
label_1d7fe0:
    // 0x1d7fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7fe4:
    // 0x1d7fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FE4u;
        // 0x1d7fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FECu;
    // 0x1d7fec: 0x0  nop
    ctx->pc = 0x1d7fecu;
    // NOP
    ctx->pc = 0x1d7ff0u;
}
