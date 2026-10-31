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

// Function: sub_00250B68
// Address: 0x250b68 - 0x250bb8
void sub_00250B68_0x250b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250B68_0x250b68");
#endif

    switch (ctx->pc) {
        case 0x250b7cu: goto label_250b7c;
        default: break;
    }

    ctx->pc = 0x250b68u;

    // 0x250b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250b6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x250b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x250b70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x250b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250b74: 0xc094258  jal         func_250960
    ctx->pc = 0x250B74u;
    SET_GPR_U32(ctx, 31, 0x250B7Cu);
    ctx->pc = 0x250B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250B74u;
    // 0x250b78: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x250960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250960u, 0x250B74u, 0x250B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B7Cu;
label_250b7c:
    // 0x250b7c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x250B7Cu;
    {
        const bool branch_taken_0x250b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B7Cu;
        // 0x250b80: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b7c) {
            ctx->pc = 0x250BACu;
            goto label_250bac;
        }
    }
    ctx->pc = 0x250B84u;
    // 0x250b84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x250b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x250b88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x250b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x250b8c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x250b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x250b90: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x250b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x250b94: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x250b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x250b98: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x250B98u;
    {
        const bool branch_taken_0x250b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B98u;
        // 0x250b9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b98) {
            ctx->pc = 0x250BB0u;
            goto label_250bb0;
        }
    }
    ctx->pc = 0x250BA0u;
    // 0x250ba0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x250ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x250ba4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x250ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x250ba8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x250ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_250bac:
    // 0x250bac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_250bb0:
    // 0x250bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x250BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BB0u;
        // 0x250bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250BB8u;
}
