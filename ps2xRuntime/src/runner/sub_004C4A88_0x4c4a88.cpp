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

// Function: sub_004C4A88
// Address: 0x4c4a88 - 0x4c4b10
void sub_004C4A88_0x4c4a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4A88_0x4c4a88");
#endif

    switch (ctx->pc) {
        case 0x4c4ab4u: goto label_4c4ab4;
        default: break;
    }

    ctx->pc = 0x4c4a88u;

    // 0x4c4a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c4a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c4a8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4c4a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4a90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c4a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c4a94: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x4c4a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x4c4a98: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4c4a98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4a9c: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x4c4a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4c4aa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c4aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c4aa4: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x4c4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x4c4aa8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4c4aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4c4aac: 0xc130b7a  jal         func_4C2DE8
    ctx->pc = 0x4C4AACu;
    SET_GPR_U32(ctx, 31, 0x4C4AB4u);
    ctx->pc = 0x4C4AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4AACu;
    // 0x4c4ab0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C2DE8u, 0x4C4AACu, 0x4C4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4AB4u;
label_4c4ab4:
    // 0x4c4ab4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c4ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c4ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4AB8u;
        // 0x4c4abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4AC0u;
    // 0x4c4ac0: 0x0  nop
    ctx->pc = 0x4c4ac0u;
    // NOP
    // 0x4c4ac4: 0x0  nop
    ctx->pc = 0x4c4ac4u;
    // NOP
    // 0x4c4ac8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4c4ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4c4acc: 0x0  nop
    ctx->pc = 0x4c4accu;
    // NOP
    // 0x4c4ad0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4c4ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4c4ad4: 0x0  nop
    ctx->pc = 0x4c4ad4u;
    // NOP
    // 0x4c4ad8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4c4ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4c4adc: 0x0  nop
    ctx->pc = 0x4c4adcu;
    // NOP
    // 0x4c4ae0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4c4ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4c4ae4: 0x0  nop
    ctx->pc = 0x4c4ae4u;
    // NOP
    // 0x4c4ae8: 0x0  nop
    ctx->pc = 0x4c4ae8u;
    // NOP
    // 0x4c4aec: 0x0  nop
    ctx->pc = 0x4c4aecu;
    // NOP
    // 0x4c4af0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4c4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4c4af4: 0x0  nop
    ctx->pc = 0x4c4af4u;
    // NOP
    // 0x4c4af8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4c4af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x4c4afc: 0x0  nop
    ctx->pc = 0x4c4afcu;
    // NOP
    // 0x4c4b00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4c4b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4c4b04: 0x0  nop
    ctx->pc = 0x4c4b04u;
    // NOP
    // 0x4c4b08: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4c4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4c4b0c: 0x0  nop
    ctx->pc = 0x4c4b0cu;
    // NOP
    ctx->pc = 0x4c4b10u;
}
