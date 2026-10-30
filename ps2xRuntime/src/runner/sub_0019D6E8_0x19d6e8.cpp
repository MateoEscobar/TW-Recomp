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

// Function: sub_0019D6E8
// Address: 0x19d6e8 - 0x19d728
void sub_0019D6E8_0x19d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D6E8_0x19d6e8");
#endif

    switch (ctx->pc) {
        case 0x19d6fcu: goto label_19d6fc;
        default: break;
    }

    ctx->pc = 0x19d6e8u;

    // 0x19d6e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d6ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19d6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19d6f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d6f4: 0xc06717a  jal         func_19C5E8
    ctx->pc = 0x19D6F4u;
    SET_GPR_U32(ctx, 31, 0x19D6FCu);
    ctx->pc = 0x19D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D6F4u;
    // 0x19d6f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5E8u, 0x19D6F4u, 0x19D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6FCu;
label_19d6fc:
    // 0x19d6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d700: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x19d700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x19d704: 0xae0232f4  sw          $v0, 0x32F4($s0)
    ctx->pc = 0x19d704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13044), GPR_U32(ctx, 2));
    // 0x19d708: 0x24639228  addiu       $v1, $v1, -0x6DD8
    ctx->pc = 0x19d708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939176));
    // 0x19d70c: 0xae03330c  sw          $v1, 0x330C($s0)
    ctx->pc = 0x19d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13068), GPR_U32(ctx, 3));
    // 0x19d710: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d714: 0xae0032f0  sw          $zero, 0x32F0($s0)
    ctx->pc = 0x19d714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13040), GPR_U32(ctx, 0));
    // 0x19d718: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19d718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d720: 0x3e00008  jr          $ra
    ctx->pc = 0x19D720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D720u;
        // 0x19d724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D728u;
}
