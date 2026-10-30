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

// Function: sub_00387EE0
// Address: 0x387ee0 - 0x387f18
void sub_00387EE0_0x387ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387EE0_0x387ee0");
#endif

    switch (ctx->pc) {
        case 0x387f04u: goto label_387f04;
        default: break;
    }

    ctx->pc = 0x387ee0u;

    // 0x387ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x387ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x387ee4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x387ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x387ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ef0: 0x8e05130c  lw          $a1, 0x130C($s0)
    ctx->pc = 0x387ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4876)));
    // 0x387ef4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x387EF4u;
    {
        const bool branch_taken_0x387ef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EF4u;
        // 0x387ef8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ef4) {
            ctx->pc = 0x387F08u;
            goto label_387f08;
        }
    }
    ctx->pc = 0x387EFCu;
    // 0x387efc: 0xc0cf3fe  jal         func_33CFF8
    ctx->pc = 0x387EFCu;
    SET_GPR_U32(ctx, 31, 0x387F04u);
    ctx->pc = 0x387F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387EFCu;
    // 0x387f00: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CFF8u, 0x387EFCu, 0x387F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F04u;
label_387f04:
    // 0x387f04: 0xae00130c  sw          $zero, 0x130C($s0)
    ctx->pc = 0x387f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4876), GPR_U32(ctx, 0));
label_387f08:
    // 0x387f08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x387f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387f10: 0x3e00008  jr          $ra
    ctx->pc = 0x387F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F10u;
        // 0x387f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387F18u;
}
