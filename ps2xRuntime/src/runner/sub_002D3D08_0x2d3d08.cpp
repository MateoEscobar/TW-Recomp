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

// Function: sub_002D3D08
// Address: 0x2d3d08 - 0x2d3d58
void sub_002D3D08_0x2d3d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3D08_0x2d3d08");
#endif

    switch (ctx->pc) {
        case 0x2d3d28u: goto label_2d3d28;
        case 0x2d3d34u: goto label_2d3d34;
        default: break;
    }

    ctx->pc = 0x2d3d08u;

    // 0x2d3d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d3d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d3d0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d3d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d3d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3d18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d3d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3d20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3d24: 0x24500468  addiu       $s0, $v0, 0x468
    ctx->pc = 0x2d3d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1128));
label_2d3d28:
    // 0x2d3d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d2c: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2D3D2Cu;
    SET_GPR_U32(ctx, 31, 0x2D3D34u);
    ctx->pc = 0x2D3D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D2Cu;
    // 0x2d3d30: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2D3D2Cu, 0x2D3D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D34u;
label_2d3d34:
    // 0x2d3d34: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x2d3d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d3d38: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D3D38u;
    {
        const bool branch_taken_0x2d3d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D38u;
        // 0x2d3d3c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d38) {
            ctx->pc = 0x2D3D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3d28;
        }
    }
    ctx->pc = 0x2D3D40u;
    // 0x2d3d40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d3d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D4Cu;
        // 0x2d3d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3D54u;
    // 0x2d3d54: 0x0  nop
    ctx->pc = 0x2d3d54u;
    // NOP
    ctx->pc = 0x2d3d58u;
}
