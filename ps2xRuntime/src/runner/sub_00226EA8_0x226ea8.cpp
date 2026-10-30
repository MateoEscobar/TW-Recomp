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

// Function: sub_00226EA8
// Address: 0x226ea8 - 0x226ee8
void sub_00226EA8_0x226ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226EA8_0x226ea8");
#endif

    switch (ctx->pc) {
        case 0x226ed0u: goto label_226ed0;
        case 0x226ed8u: goto label_226ed8;
        default: break;
    }

    ctx->pc = 0x226ea8u;

    // 0x226ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226eac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eb8: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x226eb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x226ebc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x226ebcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x226ec0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226EC0u;
    {
        const bool branch_taken_0x226ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226ec0) {
            ctx->pc = 0x226ED0u;
            goto label_226ed0;
        }
    }
    ctx->pc = 0x226EC8u;
    // 0x226ec8: 0xc089bba  jal         func_226EE8
    ctx->pc = 0x226EC8u;
    SET_GPR_U32(ctx, 31, 0x226ED0u);
    ctx->pc = 0x226EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EE8u, 0x226EC8u, 0x226ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226ED0u;
label_226ed0:
    // 0x226ed0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x226ED0u;
    SET_GPR_U32(ctx, 31, 0x226ED8u);
    ctx->pc = 0x226ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226ED0u;
    // 0x226ed4: 0x260400c8  addiu       $a0, $s0, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x226ED0u, 0x226ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226ED8u;
label_226ed8:
    // 0x226ed8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x226EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EE0u;
        // 0x226ee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226EE8u;
}
