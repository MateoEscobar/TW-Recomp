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

// Function: sub_00108BA8
// Address: 0x108ba8 - 0x108bd0
void sub_00108BA8_0x108ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108BA8_0x108ba8");
#endif

    switch (ctx->pc) {
        case 0x108bc0u: goto label_108bc0;
        default: break;
    }

    ctx->pc = 0x108ba8u;

    // 0x108ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108bb0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x108bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108bb4: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x108bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108bb8: 0xc041128  jal         func_1044A0
    ctx->pc = 0x108BB8u;
    SET_GPR_U32(ctx, 31, 0x108BC0u);
    ctx->pc = 0x108BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BB8u;
    // 0x108bbc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x108BB8u, 0x108BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BC0u;
label_108bc0:
    // 0x108bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x108BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BC4u;
        // 0x108bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108BCCu;
    // 0x108bcc: 0x0  nop
    ctx->pc = 0x108bccu;
    // NOP
    ctx->pc = 0x108bd0u;
}
