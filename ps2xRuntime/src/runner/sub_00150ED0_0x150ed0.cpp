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

// Function: sub_00150ED0
// Address: 0x150ed0 - 0x150f18
void sub_00150ED0_0x150ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150ED0_0x150ed0");
#endif

    switch (ctx->pc) {
        case 0x150ee0u: goto label_150ee0;
        case 0x150ee8u: goto label_150ee8;
        case 0x150ef0u: goto label_150ef0;
        case 0x150ef8u: goto label_150ef8;
        case 0x150f00u: goto label_150f00;
        default: break;
    }

    ctx->pc = 0x150ed0u;

    // 0x150ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150ed8: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150ED8u;
    SET_GPR_U32(ctx, 31, 0x150EE0u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150ED8u, 0x150EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EE0u;
label_150ee0:
    // 0x150ee0: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150EE0u;
    SET_GPR_U32(ctx, 31, 0x150EE8u);
    ctx->pc = 0x150EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150EE0u;
    // 0x150ee4: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150EE0u, 0x150EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EE8u;
label_150ee8:
    // 0x150ee8: 0xc053722  jal         func_14DC88
    ctx->pc = 0x150EE8u;
    SET_GPR_U32(ctx, 31, 0x150EF0u);
    ctx->pc = 0x150EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150EE8u;
    // 0x150eec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x150EE8u, 0x150EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EF0u;
label_150ef0:
    // 0x150ef0: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150EF0u;
    SET_GPR_U32(ctx, 31, 0x150EF8u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150EF0u, 0x150EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EF8u;
label_150ef8:
    // 0x150ef8: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150EF8u;
    SET_GPR_U32(ctx, 31, 0x150F00u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150EF8u, 0x150F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F00u;
label_150f00:
    // 0x150f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150f04: 0x3e00008  jr          $ra
    ctx->pc = 0x150F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F04u;
        // 0x150f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150F0Cu;
    // 0x150f0c: 0x0  nop
    ctx->pc = 0x150f0cu;
    // NOP
    // 0x150f10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150f14: 0x0  nop
    ctx->pc = 0x150f14u;
    // NOP
    ctx->pc = 0x150f18u;
}
