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

// Function: sub_004614F8
// Address: 0x4614f8 - 0x461540
void sub_004614F8_0x4614f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004614F8_0x4614f8");
#endif

    switch (ctx->pc) {
        case 0x461528u: goto label_461528;
        default: break;
    }

    ctx->pc = 0x4614f8u;

    // 0x4614f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4614f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4614fc: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4614fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x461500: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x461500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x461504: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x461504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
    // 0x461508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x461508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46150c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46150cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461510: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x461510u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51D818u));
    // 0x461514: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x461514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x461518: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x461518u;
    {
        const bool branch_taken_0x461518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461518u;
        // 0x46151c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461518) {
            ctx->pc = 0x461528u;
            goto label_461528;
        }
    }
    ctx->pc = 0x461520u;
    // 0x461520: 0xc118666  jal         func_461998
    ctx->pc = 0x461520u;
    SET_GPR_U32(ctx, 31, 0x461528u);
    ctx->pc = 0x461524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461520u;
    // 0x461524: 0x2464000c  addiu       $a0, $v1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461998u, 0x461520u, 0x461528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461528u;
label_461528:
    // 0x461528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x461528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46152c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46152cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x461530: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x461530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x461534: 0x3e00008  jr          $ra
    ctx->pc = 0x461534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461534u;
        // 0x461538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46153Cu;
    // 0x46153c: 0x0  nop
    ctx->pc = 0x46153cu;
    // NOP
    ctx->pc = 0x461540u;
}
