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

// Function: sub_00227180
// Address: 0x227180 - 0x2271c0
void sub_00227180_0x227180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227180_0x227180");
#endif

    switch (ctx->pc) {
        case 0x227190u: goto label_227190;
        case 0x2271a0u: goto label_2271a0;
        default: break;
    }

    ctx->pc = 0x227180u;

    // 0x227180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227188: 0xc08a61a  jal         func_229868
    ctx->pc = 0x227188u;
    SET_GPR_U32(ctx, 31, 0x227190u);
    ctx->pc = 0x22718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227188u;
    // 0x22718c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x227188u, 0x227190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227190u;
label_227190:
    // 0x227190: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x227190u;
    {
        const bool branch_taken_0x227190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227190) {
            ctx->pc = 0x227194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227190u;
            // 0x227194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2271B0u;
            goto label_2271b0;
        }
    }
    ctx->pc = 0x227198u;
    // 0x227198: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x227198u;
    SET_GPR_U32(ctx, 31, 0x2271A0u);
    ctx->pc = 0x22719Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227198u;
    // 0x22719c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x227198u, 0x2271A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271A0u;
label_2271a0:
    // 0x2271a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2271a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271a4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2271A4u;
    {
        const bool branch_taken_0x2271a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2271A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271A4u;
        // 0x2271a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271a4) {
            ctx->pc = 0x2271B0u;
            goto label_2271b0;
        }
    }
    ctx->pc = 0x2271ACu;
    // 0x2271ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2271acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2271b0:
    // 0x2271b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2271b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2271b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2271B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2271B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271B4u;
        // 0x2271b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2271B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2271BCu;
    // 0x2271bc: 0x0  nop
    ctx->pc = 0x2271bcu;
    // NOP
    ctx->pc = 0x2271c0u;
}
