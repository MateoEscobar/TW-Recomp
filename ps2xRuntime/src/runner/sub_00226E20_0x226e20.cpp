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

// Function: sub_00226E20
// Address: 0x226e20 - 0x226e60
void sub_00226E20_0x226e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226E20_0x226e20");
#endif

    switch (ctx->pc) {
        case 0x226e48u: goto label_226e48;
        default: break;
    }

    ctx->pc = 0x226e20u;

    // 0x226e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226e24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e30: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x226e30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x226e34: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x226e34u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x226e38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x226E38u;
    {
        const bool branch_taken_0x226e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226e38) {
            ctx->pc = 0x226E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226E38u;
            // 0x226e3c: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226E4Cu;
            goto label_226e4c;
        }
    }
    ctx->pc = 0x226E40u;
    // 0x226e40: 0xc089bba  jal         func_226EE8
    ctx->pc = 0x226E40u;
    SET_GPR_U32(ctx, 31, 0x226E48u);
    ctx->pc = 0x226EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EE8u, 0x226E40u, 0x226E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E48u;
label_226e48:
    // 0x226e48: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x226e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_226e4c:
    // 0x226e4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226e54: 0x3e00008  jr          $ra
    ctx->pc = 0x226E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E54u;
        // 0x226e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226E5Cu;
    // 0x226e5c: 0x0  nop
    ctx->pc = 0x226e5cu;
    // NOP
    ctx->pc = 0x226e60u;
}
