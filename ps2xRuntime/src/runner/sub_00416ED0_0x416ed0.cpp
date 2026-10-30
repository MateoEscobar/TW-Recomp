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

// Function: sub_00416ED0
// Address: 0x416ed0 - 0x416f08
void sub_00416ED0_0x416ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416ED0_0x416ed0");
#endif

    switch (ctx->pc) {
        case 0x416ee4u: goto label_416ee4;
        case 0x416eecu: goto label_416eec;
        default: break;
    }

    ctx->pc = 0x416ed0u;

    // 0x416ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x416ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x416ed4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x416ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x416ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x416ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x416edc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x416EDCu;
    SET_GPR_U32(ctx, 31, 0x416EE4u);
    ctx->pc = 0x416EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416EDCu;
    // 0x416ee0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x416EDCu, 0x416EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416EE4u;
label_416ee4:
    // 0x416ee4: 0xc105e98  jal         func_417A60
    ctx->pc = 0x416EE4u;
    SET_GPR_U32(ctx, 31, 0x416EECu);
    ctx->pc = 0x416EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416EE4u;
    // 0x416ee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x416EE4u, 0x416EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416EECu;
label_416eec:
    // 0x416eec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x416EECu;
    {
        const bool branch_taken_0x416eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x416eec) {
            ctx->pc = 0x416EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x416EECu;
            // 0x416ef0: 0x8c4200dc  lw          $v0, 0xDC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x416EFCu;
            goto label_416efc;
        }
    }
    ctx->pc = 0x416EF4u;
    // 0x416ef4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x416ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x416ef8: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x416ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
label_416efc:
    // 0x416efc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x416efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x416f00: 0x3e00008  jr          $ra
    ctx->pc = 0x416F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416F00u;
        // 0x416f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416F08u;
}
