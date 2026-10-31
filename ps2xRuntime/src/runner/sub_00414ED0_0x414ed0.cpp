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

// Function: sub_00414ED0
// Address: 0x414ed0 - 0x414f08
void sub_00414ED0_0x414ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414ED0_0x414ed0");
#endif

    switch (ctx->pc) {
        case 0x414ef4u: goto label_414ef4;
        default: break;
    }

    ctx->pc = 0x414ed0u;

    // 0x414ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x414ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x414ed4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x414ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x414ed8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x414ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x414edc: 0x24a59210  addiu       $a1, $a1, -0x6DF0
    ctx->pc = 0x414edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939152));
    // 0x414ee0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x414ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x414ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x414ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x414ee8: 0x8e044834  lw          $a0, 0x4834($s0)
    ctx->pc = 0x414ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x514834u));
    // 0x414eec: 0xc13d760  jal         func_4F5D80
    ctx->pc = 0x414EECu;
    SET_GPR_U32(ctx, 31, 0x414EF4u);
    ctx->pc = 0x414EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414EECu;
    // 0x414ef0: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5D80u, 0x414EECu, 0x414EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414EF4u;
label_414ef4:
    // 0x414ef4: 0xae004834  sw          $zero, 0x4834($s0)
    ctx->pc = 0x414ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18484), GPR_U32(ctx, 0));
    // 0x414ef8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x414ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414f00: 0x3e00008  jr          $ra
    ctx->pc = 0x414F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414F00u;
        // 0x414f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414F08u;
}
