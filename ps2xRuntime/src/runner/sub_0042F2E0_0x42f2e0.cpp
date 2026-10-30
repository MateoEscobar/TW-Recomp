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

// Function: sub_0042F2E0
// Address: 0x42f2e0 - 0x42f330
void sub_0042F2E0_0x42f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F2E0_0x42f2e0");
#endif

    switch (ctx->pc) {
        case 0x42f304u: goto label_42f304;
        case 0x42f31cu: goto label_42f31c;
        default: break;
    }

    ctx->pc = 0x42f2e0u;

    // 0x42f2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42f2e4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x42f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x42f2e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42f2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42f2ec: 0x8c6259e0  lw          $v0, 0x59E0($v1)
    ctx->pc = 0x42f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7159E0u));
    // 0x42f2f0: 0x247059e0  addiu       $s0, $v1, 0x59E0
    ctx->pc = 0x42f2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23008));
    // 0x42f2f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42F2F4u;
    {
        const bool branch_taken_0x42f2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F2F4u;
        // 0x42f2f8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f2f4) {
            ctx->pc = 0x42F31Cu;
            goto label_42f31c;
        }
    }
    ctx->pc = 0x42F2FCu;
    // 0x42f2fc: 0xc10bcfe  jal         func_42F3F8
    ctx->pc = 0x42F2FCu;
    SET_GPR_U32(ctx, 31, 0x42F304u);
    ctx->pc = 0x42F3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F3F8u, 0x42F2FCu, 0x42F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F304u;
label_42f304:
    // 0x42f304: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42f304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x42f308: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x42f308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x42f30c: 0x24a5c308  addiu       $a1, $a1, -0x3CF8
    ctx->pc = 0x42f30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951688));
    // 0x42f310: 0x24c659f0  addiu       $a2, $a2, 0x59F0
    ctx->pc = 0x42f310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23024));
    // 0x42f314: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x42F314u;
    SET_GPR_U32(ctx, 31, 0x42F31Cu);
    ctx->pc = 0x42F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F314u;
    // 0x42f318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x42F314u, 0x42F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F31Cu;
label_42f31c:
    // 0x42f31c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42f31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42f320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42f324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42f324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f328: 0x3e00008  jr          $ra
    ctx->pc = 0x42F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F328u;
        // 0x42f32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F330u;
}
