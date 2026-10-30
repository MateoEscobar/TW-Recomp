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

// Function: sub_00415D90
// Address: 0x415d90 - 0x415dc8
void sub_00415D90_0x415d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415D90_0x415d90");
#endif

    switch (ctx->pc) {
        case 0x415db4u: goto label_415db4;
        default: break;
    }

    ctx->pc = 0x415d90u;

    // 0x415d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x415d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x415d94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x415d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x415d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x415d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415da0: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x415da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x415da4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x415DA4u;
    {
        const bool branch_taken_0x415da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x415DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415DA4u;
        // 0x415da8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415da4) {
            ctx->pc = 0x415DB4u;
            goto label_415db4;
        }
    }
    ctx->pc = 0x415DACu;
    // 0x415dac: 0xc105f7e  jal         func_417DF8
    ctx->pc = 0x415DACu;
    SET_GPR_U32(ctx, 31, 0x415DB4u);
    ctx->pc = 0x415DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415DACu;
    // 0x415db0: 0x8c44719c  lw          $a0, 0x719C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417DF8u, 0x415DACu, 0x415DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415DB4u;
label_415db4:
    // 0x415db4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x415db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x415db8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x415db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x415dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x415DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415DC0u;
        // 0x415dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415DC8u;
}
