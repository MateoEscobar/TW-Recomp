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

// Function: sub_0032CCD0
// Address: 0x32ccd0 - 0x32cd10
void sub_0032CCD0_0x32ccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CCD0_0x32ccd0");
#endif

    switch (ctx->pc) {
        case 0x32ccf4u: goto label_32ccf4;
        case 0x32ccfcu: goto label_32ccfc;
        default: break;
    }

    ctx->pc = 0x32ccd0u;

    // 0x32ccd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ccd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32ccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32ccd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ccdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ccdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cce0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32cce4: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32CCE4u;
    {
        const bool branch_taken_0x32cce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x32cce4) {
            ctx->pc = 0x32CCF4u;
            goto label_32ccf4;
        }
    }
    ctx->pc = 0x32CCECu;
    // 0x32ccec: 0xc0cb31e  jal         func_32CC78
    ctx->pc = 0x32CCECu;
    SET_GPR_U32(ctx, 31, 0x32CCF4u);
    ctx->pc = 0x32CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC78u, 0x32CCECu, 0x32CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCF4u;
label_32ccf4:
    // 0x32ccf4: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32CCF4u;
    SET_GPR_U32(ctx, 31, 0x32CCFCu);
    ctx->pc = 0x32CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CCF4u;
    // 0x32ccf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32CCF4u, 0x32CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCFCu;
label_32ccfc:
    // 0x32ccfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32ccfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cd00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cd04: 0x3e00008  jr          $ra
    ctx->pc = 0x32CD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD04u;
        // 0x32cd08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CD0Cu;
    // 0x32cd0c: 0x0  nop
    ctx->pc = 0x32cd0cu;
    // NOP
    ctx->pc = 0x32cd10u;
}
