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

// Function: sub_00419FC8
// Address: 0x419fc8 - 0x41a008
void sub_00419FC8_0x419fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419FC8_0x419fc8");
#endif

    switch (ctx->pc) {
        case 0x419fe8u: goto label_419fe8;
        default: break;
    }

    ctx->pc = 0x419fc8u;

    // 0x419fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x419fcc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x419fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x419fd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x419fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x419fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419fd8: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x419FD8u;
    {
        const bool branch_taken_0x419fd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x419FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419FD8u;
        // 0x419fdc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419fd8) {
            ctx->pc = 0x419FF4u;
            goto label_419ff4;
        }
    }
    ctx->pc = 0x419FE0u;
    // 0x419fe0: 0xc106802  jal         func_41A008
    ctx->pc = 0x419FE0u;
    SET_GPR_U32(ctx, 31, 0x419FE8u);
    ctx->pc = 0x419FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419FE0u;
    // 0x419fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x419FE0u, 0x419FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419FE8u;
label_419fe8:
    // 0x419fe8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x419fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x419fec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x419FECu;
    {
        const bool branch_taken_0x419fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419FECu;
        // 0x419ff0: 0xae02040c  sw          $v0, 0x40C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419fec) {
            ctx->pc = 0x419FF8u;
            goto label_419ff8;
        }
    }
    ctx->pc = 0x419FF4u;
label_419ff4:
    // 0x419ff4: 0xae05040c  sw          $a1, 0x40C($s0)
    ctx->pc = 0x419ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 5));
label_419ff8:
    // 0x419ff8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x419ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a000: 0x3e00008  jr          $ra
    ctx->pc = 0x41A000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A000u;
        // 0x41a004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A008u;
}
