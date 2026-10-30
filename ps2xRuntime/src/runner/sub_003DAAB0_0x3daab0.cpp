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

// Function: sub_003DAAB0
// Address: 0x3daab0 - 0x3dab08
void sub_003DAAB0_0x3daab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAAB0_0x3daab0");
#endif

    switch (ctx->pc) {
        case 0x3daab0u: goto label_3daab0;
        case 0x3daab4u: goto label_3daab4;
        case 0x3daab8u: goto label_3daab8;
        case 0x3daabcu: goto label_3daabc;
        case 0x3daac0u: goto label_3daac0;
        case 0x3daac4u: goto label_3daac4;
        case 0x3daac8u: goto label_3daac8;
        case 0x3daaccu: goto label_3daacc;
        case 0x3daad0u: goto label_3daad0;
        case 0x3daad4u: goto label_3daad4;
        case 0x3daad8u: goto label_3daad8;
        case 0x3daadcu: goto label_3daadc;
        case 0x3daae0u: goto label_3daae0;
        case 0x3daae4u: goto label_3daae4;
        case 0x3daae8u: goto label_3daae8;
        case 0x3daaecu: goto label_3daaec;
        case 0x3daaf0u: goto label_3daaf0;
        case 0x3daaf4u: goto label_3daaf4;
        case 0x3daaf8u: goto label_3daaf8;
        case 0x3daafcu: goto label_3daafc;
        case 0x3dab00u: goto label_3dab00;
        case 0x3dab04u: goto label_3dab04;
        default: break;
    }

    ctx->pc = 0x3daab0u;

label_3daab0:
    // 0x3daab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3daab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3daab4:
    // 0x3daab4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3daab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3daab8:
    // 0x3daab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3daab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3daabc:
    // 0x3daabc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3daabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3daac0:
    // 0x3daac0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3daac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3daac4:
    // 0x3daac4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3daac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3daac8:
    // 0x3daac8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3daac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3daacc:
    // 0x3daacc: 0x40f809  jalr        $v0
label_3daad0:
    if (ctx->pc == 0x3DAAD0u) {
        ctx->pc = 0x3DAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAACCu;
        // 0x3daad0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAAD4u;
        goto label_3daad4;
    }
    ctx->pc = 0x3DAACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DAAD4u);
        ctx->pc = 0x3DAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAACCu;
        // 0x3daad0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAACCu, 0x3DAAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DAAD4u;
label_3daad4:
    // 0x3daad4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3daad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3daad8:
    // 0x3daad8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3daad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3daadc:
    // 0x3daadc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3daae0:
    if (ctx->pc == 0x3DAAE0u) {
        ctx->pc = 0x3DAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAADCu;
        // 0x3daae0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAAE4u;
        goto label_3daae4;
    }
    ctx->pc = 0x3DAADCu;
    {
        const bool branch_taken_0x3daadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAADCu;
        // 0x3daae0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daadc) {
            ctx->pc = 0x3DAAF4u;
            goto label_3daaf4;
        }
    }
    ctx->pc = 0x3DAAE4u;
label_3daae4:
    // 0x3daae4: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3daae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3daae8:
    // 0x3daae8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3daae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3daaec:
    // 0x3daaec: 0xc045c82  jal         func_117208
label_3daaf0:
    if (ctx->pc == 0x3DAAF0u) {
        ctx->pc = 0x3DAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAAECu;
        // 0x3daaf0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAAF4u;
        goto label_3daaf4;
    }
    ctx->pc = 0x3DAAECu;
    SET_GPR_U32(ctx, 31, 0x3DAAF4u);
    ctx->pc = 0x3DAAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAAECu;
    // 0x3daaf0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117208u, 0x3DAAECu, 0x3DAAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAAF4u;
label_3daaf4:
    // 0x3daaf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3daaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3daaf8:
    // 0x3daaf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3daaf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3daafc:
    // 0x3daafc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3daafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3dab00:
    // 0x3dab00: 0x3e00008  jr          $ra
label_3dab04:
    if (ctx->pc == 0x3DAB04u) {
        ctx->pc = 0x3DAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB00u;
        // 0x3dab04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAB08u;
        goto label_fallthrough_0x3dab00;
    }
    ctx->pc = 0x3DAB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB00u;
        // 0x3dab04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dab00:
    ctx->pc = 0x3DAB08u;
}
