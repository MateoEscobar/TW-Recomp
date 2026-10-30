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

// Function: sub_004AEEC0
// Address: 0x4aeec0 - 0x4aef18
void sub_004AEEC0_0x4aeec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEEC0_0x4aeec0");
#endif

    switch (ctx->pc) {
        case 0x4aeee4u: goto label_4aeee4;
        case 0x4aef00u: goto label_4aef00;
        default: break;
    }

    ctx->pc = 0x4aeec0u;

    // 0x4aeec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aeec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aeec4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4aeec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4aeec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aeec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aeecc: 0x8c625ab0  lw          $v0, 0x5AB0($v1)
    ctx->pc = 0x4aeeccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715AB0u));
    // 0x4aeed0: 0x24705ab0  addiu       $s0, $v1, 0x5AB0
    ctx->pc = 0x4aeed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23216));
    // 0x4aeed4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4AEED4u;
    {
        const bool branch_taken_0x4aeed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEED4u;
        // 0x4aeed8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeed4) {
            ctx->pc = 0x4AEF00u;
            goto label_4aef00;
        }
    }
    ctx->pc = 0x4AEEDCu;
    // 0x4aeedc: 0xc12c1ee  jal         func_4B07B8
    ctx->pc = 0x4AEEDCu;
    SET_GPR_U32(ctx, 31, 0x4AEEE4u);
    ctx->pc = 0x4B07B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B07B8u, 0x4AEEDCu, 0x4AEEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEEE4u;
label_4aeee4:
    // 0x4aeee4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4aeee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4aeee8: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4aeee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4aeeec: 0x24a50538  addiu       $a1, $a1, 0x538
    ctx->pc = 0x4aeeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1336));
    // 0x4aeef0: 0x24c60530  addiu       $a2, $a2, 0x530
    ctx->pc = 0x4aeef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1328));
    // 0x4aeef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aeef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeef8: 0xc10bbee  jal         func_42EFB8
    ctx->pc = 0x4AEEF8u;
    SET_GPR_U32(ctx, 31, 0x4AEF00u);
    ctx->pc = 0x4AEEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEEF8u;
    // 0x4aeefc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFB8u, 0x4AEEF8u, 0x4AEF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEF00u;
label_4aef00:
    // 0x4aef00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aef00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aef04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4aef04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aef08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aef08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEF0Cu;
        // 0x4aef10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEF14u;
    // 0x4aef14: 0x0  nop
    ctx->pc = 0x4aef14u;
    // NOP
    ctx->pc = 0x4aef18u;
}
