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

// Function: sub_0042E3C0
// Address: 0x42e3c0 - 0x42e408
void sub_0042E3C0_0x42e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E3C0_0x42e3c0");
#endif

    switch (ctx->pc) {
        case 0x42e3d8u: goto label_42e3d8;
        default: break;
    }

    ctx->pc = 0x42e3c0u;

    // 0x42e3c0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x42e3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42e3c4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x42E3C4u;
    {
        const bool branch_taken_0x42e3c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E3C4u;
        // 0x42e3c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e3c4) {
            ctx->pc = 0x42E400u;
            goto label_42e400;
        }
    }
    ctx->pc = 0x42E3CCu;
    // 0x42e3cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x42E3CCu;
    {
        const bool branch_taken_0x42e3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E3CCu;
        // 0x42e3d0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e3cc) {
            ctx->pc = 0x42E3E0u;
            goto label_42e3e0;
        }
    }
    ctx->pc = 0x42E3D4u;
    // 0x42e3d4: 0x0  nop
    ctx->pc = 0x42e3d4u;
    // NOP
label_42e3d8:
    // 0x42e3d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x42e3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e3dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x42e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_42e3e0:
    // 0x42e3e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42E3E0u;
    {
        const bool branch_taken_0x42e3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E3E0u;
        // 0x42e3e4: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e3e0) {
            ctx->pc = 0x42E3F0u;
            goto label_42e3f0;
        }
    }
    ctx->pc = 0x42E3E8u;
    // 0x42e3e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x42e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42e3ec: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x42e3ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_42e3f0:
    // 0x42e3f0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x42e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x42e3f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x42e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x42e3f8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x42E3F8u;
    {
        const bool branch_taken_0x42e3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E3F8u;
        // 0x42e3fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e3f8) {
            ctx->pc = 0x42E3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e3d8;
        }
    }
    ctx->pc = 0x42E400u;
label_42e400:
    // 0x42e400: 0x3e00008  jr          $ra
    ctx->pc = 0x42E400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E400u;
        // 0x42e404: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42E400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42E408u;
}
