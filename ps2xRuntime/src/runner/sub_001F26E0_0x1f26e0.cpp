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

// Function: sub_001F26E0
// Address: 0x1f26e0 - 0x1f2720
void sub_001F26E0_0x1f26e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F26E0_0x1f26e0");
#endif

    switch (ctx->pc) {
        case 0x1f26f0u: goto label_1f26f0;
        default: break;
    }

    ctx->pc = 0x1f26e0u;

    // 0x1f26e0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1f26e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f26e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26e8: 0x2448eec0  addiu       $t0, $v0, -0x1140
    ctx->pc = 0x1f26e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x1f26ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f26ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f26f0:
    // 0x1f26f0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1f26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1f26f4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1f26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f26f8: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x1f26f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1f26fc: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1f26fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f2700: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x1f2700u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f2704: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f2704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1f2708: 0x2cc30017  sltiu       $v1, $a2, 0x17
    ctx->pc = 0x1f2708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1f270c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F270Cu;
    {
        const bool branch_taken_0x1f270c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F270Cu;
        // 0x1f2710: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f270c) {
            ctx->pc = 0x1F26F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f26f0;
        }
    }
    ctx->pc = 0x1F2714u;
    // 0x1f2714: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F271Cu;
    // 0x1f271c: 0x0  nop
    ctx->pc = 0x1f271cu;
    // NOP
    ctx->pc = 0x1f2720u;
}
