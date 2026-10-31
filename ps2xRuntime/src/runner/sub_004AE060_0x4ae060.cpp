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

// Function: sub_004AE060
// Address: 0x4ae060 - 0x4ae0b8
void sub_004AE060_0x4ae060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE060_0x4ae060");
#endif

    switch (ctx->pc) {
        case 0x4ae084u: goto label_4ae084;
        case 0x4ae0a0u: goto label_4ae0a0;
        default: break;
    }

    ctx->pc = 0x4ae060u;

    // 0x4ae060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae064: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4ae064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4ae068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae06c: 0x8c625ac0  lw          $v0, 0x5AC0($v1)
    ctx->pc = 0x4ae06cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715AC0u));
    // 0x4ae070: 0x24705ac0  addiu       $s0, $v1, 0x5AC0
    ctx->pc = 0x4ae070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23232));
    // 0x4ae074: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4AE074u;
    {
        const bool branch_taken_0x4ae074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE074u;
        // 0x4ae078: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae074) {
            ctx->pc = 0x4AE0A0u;
            goto label_4ae0a0;
        }
    }
    ctx->pc = 0x4AE07Cu;
    // 0x4ae07c: 0xc12ba88  jal         func_4AEA20
    ctx->pc = 0x4AE07Cu;
    SET_GPR_U32(ctx, 31, 0x4AE084u);
    ctx->pc = 0x4AEA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEA20u, 0x4AE07Cu, 0x4AE084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE084u;
label_4ae084:
    // 0x4ae084: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4ae084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4ae088: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4ae088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4ae08c: 0x24a504d8  addiu       $a1, $a1, 0x4D8
    ctx->pc = 0x4ae08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1240));
    // 0x4ae090: 0x24c604f8  addiu       $a2, $a2, 0x4F8
    ctx->pc = 0x4ae090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1272));
    // 0x4ae094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ae094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae098: 0xc10bbee  jal         func_42EFB8
    ctx->pc = 0x4AE098u;
    SET_GPR_U32(ctx, 31, 0x4AE0A0u);
    ctx->pc = 0x4AE09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE098u;
    // 0x4ae09c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFB8u, 0x4AE098u, 0x4AE0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE0A0u;
label_4ae0a0:
    // 0x4ae0a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ae0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ae0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae0a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae0a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE0ACu;
        // 0x4ae0b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE0B4u;
    // 0x4ae0b4: 0x0  nop
    ctx->pc = 0x4ae0b4u;
    // NOP
    ctx->pc = 0x4ae0b8u;
}
