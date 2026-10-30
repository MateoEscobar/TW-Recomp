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

// Function: sub_004B6DF8
// Address: 0x4b6df8 - 0x4b6e38
void sub_004B6DF8_0x4b6df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6DF8_0x4b6df8");
#endif

    switch (ctx->pc) {
        case 0x4b6e20u: goto label_4b6e20;
        default: break;
    }

    ctx->pc = 0x4b6df8u;

    // 0x4b6df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b6df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b6dfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b6dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b6e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b6e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b6e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b6e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b6e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b6e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6e0c: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x4b6e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x4b6e10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b6e14: 0x3442240c  ori         $v0, $v0, 0x240C
    ctx->pc = 0x4b6e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9228);
    // 0x4b6e18: 0xc12c23a  jal         func_4B08E8
    ctx->pc = 0x4B6E18u;
    SET_GPR_U32(ctx, 31, 0x4B6E20u);
    ctx->pc = 0x4B6E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6E18u;
    // 0x4b6e1c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B08E8u, 0x4B6E18u, 0x4B6E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6E20u;
label_4b6e20:
    // 0x4b6e20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b6e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b6e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b6e28: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x4b6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x4b6e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b6e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6e30: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6E30u;
        // 0x4b6e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B6E38u;
}
