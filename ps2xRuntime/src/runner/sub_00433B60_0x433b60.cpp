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

// Function: sub_00433B60
// Address: 0x433b60 - 0x433bb0
void sub_00433B60_0x433b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433B60_0x433b60");
#endif

    switch (ctx->pc) {
        case 0x433b80u: goto label_433b80;
        case 0x433b8cu: goto label_433b8c;
        case 0x433b98u: goto label_433b98;
        default: break;
    }

    ctx->pc = 0x433b60u;

    // 0x433b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x433b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x433b64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x433b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x433b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x433b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x433b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x433b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433b70: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x433b70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x433b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x433b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x433b78: 0xc10cfce  jal         func_433F38
    ctx->pc = 0x433B78u;
    SET_GPR_U32(ctx, 31, 0x433B80u);
    ctx->pc = 0x433B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433B78u;
    // 0x433b7c: 0x8e2469ec  lw          $a0, 0x69EC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F38u, 0x433B78u, 0x433B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433B80u;
label_433b80:
    // 0x433b80: 0x8e2469ec  lw          $a0, 0x69EC($s1)
    ctx->pc = 0x433b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27116)));
    // 0x433b84: 0xc10e314  jal         func_438C50
    ctx->pc = 0x433B84u;
    SET_GPR_U32(ctx, 31, 0x433B8Cu);
    ctx->pc = 0x433B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433B84u;
    // 0x433b88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x438C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x438C50u, 0x433B84u, 0x433B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433B8Cu;
label_433b8c:
    // 0x433b8c: 0x8e2469ec  lw          $a0, 0x69EC($s1)
    ctx->pc = 0x433b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27116)));
    // 0x433b90: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x433B90u;
    SET_GPR_U32(ctx, 31, 0x433B98u);
    ctx->pc = 0x433B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433B90u;
    // 0x433b94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x433B90u, 0x433B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433B98u;
label_433b98:
    // 0x433b98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x433b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433b9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x433b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x433ba0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x433ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x433ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x433ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x433ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x433BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433BA8u;
        // 0x433bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x433BB0u;
}
