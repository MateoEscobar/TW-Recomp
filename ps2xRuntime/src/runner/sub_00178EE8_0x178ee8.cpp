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

// Function: sub_00178EE8
// Address: 0x178ee8 - 0x178f38
void sub_00178EE8_0x178ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178EE8_0x178ee8");
#endif

    switch (ctx->pc) {
        case 0x178f08u: goto label_178f08;
        default: break;
    }

    ctx->pc = 0x178ee8u;

    // 0x178ee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178ef0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x178ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x178ef4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x178ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x178ef8: 0x8e30cd4c  lw          $s0, -0x32B4($s1)
    ctx->pc = 0x178ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x178efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178f00: 0xc051048  jal         func_144120
    ctx->pc = 0x178F00u;
    SET_GPR_U32(ctx, 31, 0x178F08u);
    ctx->pc = 0x178F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F00u;
    // 0x178f04: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x178F00u, 0x178F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F08u;
label_178f08:
    // 0x178f08: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x178f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x178f0c: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x178f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    // 0x178f10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x178f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178f14: 0x8c850098  lw          $a1, 0x98($a0)
    ctx->pc = 0x178f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x178f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178f1c: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x178f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x178f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178f24: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x178f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x178f28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x178f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178f2c: 0xac83009c  sw          $v1, 0x9C($a0)
    ctx->pc = 0x178f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
    // 0x178f30: 0x3e00008  jr          $ra
    ctx->pc = 0x178F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F30u;
        // 0x178f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178F38u;
}
