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

// Function: sub_00370E28
// Address: 0x370e28 - 0x370e68
void sub_00370E28_0x370e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370E28_0x370e28");
#endif

    switch (ctx->pc) {
        case 0x370e3cu: goto label_370e3c;
        case 0x370e44u: goto label_370e44;
        case 0x370e50u: goto label_370e50;
        default: break;
    }

    ctx->pc = 0x370e28u;

    // 0x370e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370e2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x370e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x370e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370e34: 0xc108d8e  jal         func_423638
    ctx->pc = 0x370E34u;
    SET_GPR_U32(ctx, 31, 0x370E3Cu);
    ctx->pc = 0x370E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E34u;
    // 0x370e38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423638u, 0x370E34u, 0x370E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E3Cu;
label_370e3c:
    // 0x370e3c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x370E3Cu;
    SET_GPR_U32(ctx, 31, 0x370E44u);
    ctx->pc = 0x370E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E3Cu;
    // 0x370e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x370E3Cu, 0x370E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E44u;
label_370e44:
    // 0x370e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x370e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e48: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x370E48u;
    SET_GPR_U32(ctx, 31, 0x370E50u);
    ctx->pc = 0x370E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E48u;
    // 0x370e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x370E48u, 0x370E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E50u;
label_370e50:
    // 0x370e50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x370e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x370e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x370E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E5Cu;
        // 0x370e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370E64u;
    // 0x370e64: 0x0  nop
    ctx->pc = 0x370e64u;
    // NOP
    ctx->pc = 0x370e68u;
}
