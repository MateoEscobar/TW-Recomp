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

// Function: sub_0028F9E8
// Address: 0x28f9e8 - 0x28fa18
void sub_0028F9E8_0x28f9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F9E8_0x28f9e8");
#endif

    switch (ctx->pc) {
        case 0x28f9fcu: goto label_28f9fc;
        case 0x28fa04u: goto label_28fa04;
        default: break;
    }

    ctx->pc = 0x28f9e8u;

    // 0x28f9e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f9ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28f9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28f9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f9f4: 0xc0a3bd2  jal         func_28EF48
    ctx->pc = 0x28F9F4u;
    SET_GPR_U32(ctx, 31, 0x28F9FCu);
    ctx->pc = 0x28F9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F9F4u;
    // 0x28f9f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF48u, 0x28F9F4u, 0x28F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9FCu;
label_28f9fc:
    // 0x28f9fc: 0xc13782a  jal         func_4DE0A8
    ctx->pc = 0x28F9FCu;
    SET_GPR_U32(ctx, 31, 0x28FA04u);
    ctx->pc = 0x28FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F9FCu;
    // 0x28fa00: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x28F9FCu, 0x28FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA04u;
label_28fa04:
    // 0x28fa04: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x28fa04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x28fa08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28fa08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fa0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fa10: 0x3e00008  jr          $ra
    ctx->pc = 0x28FA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA10u;
        // 0x28fa14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FA18u;
}
