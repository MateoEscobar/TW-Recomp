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

// Function: sub_00150260
// Address: 0x150260 - 0x1502a0
void sub_00150260_0x150260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150260_0x150260");
#endif

    switch (ctx->pc) {
        case 0x150270u: goto label_150270;
        case 0x150278u: goto label_150278;
        case 0x150280u: goto label_150280;
        case 0x150288u: goto label_150288;
        case 0x150290u: goto label_150290;
        default: break;
    }

    ctx->pc = 0x150260u;

    // 0x150260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150268: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150268u;
    SET_GPR_U32(ctx, 31, 0x150270u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150268u, 0x150270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150270u;
label_150270:
    // 0x150270: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150270u;
    SET_GPR_U32(ctx, 31, 0x150278u);
    ctx->pc = 0x150274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150270u;
    // 0x150274: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150270u, 0x150278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150278u;
label_150278:
    // 0x150278: 0xc053722  jal         func_14DC88
    ctx->pc = 0x150278u;
    SET_GPR_U32(ctx, 31, 0x150280u);
    ctx->pc = 0x15027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150278u;
    // 0x15027c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x150278u, 0x150280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150280u;
label_150280:
    // 0x150280: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150280u;
    SET_GPR_U32(ctx, 31, 0x150288u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150280u, 0x150288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150288u;
label_150288:
    // 0x150288: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150288u;
    SET_GPR_U32(ctx, 31, 0x150290u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150288u, 0x150290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150290u;
label_150290:
    // 0x150290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150294: 0x3e00008  jr          $ra
    ctx->pc = 0x150294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150294u;
        // 0x150298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15029Cu;
    // 0x15029c: 0x0  nop
    ctx->pc = 0x15029cu;
    // NOP
    ctx->pc = 0x1502a0u;
}
