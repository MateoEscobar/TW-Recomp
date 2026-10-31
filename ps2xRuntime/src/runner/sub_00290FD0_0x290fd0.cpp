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

// Function: sub_00290FD0
// Address: 0x290fd0 - 0x291008
void sub_00290FD0_0x290fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290FD0_0x290fd0");
#endif

    ctx->pc = 0x290fd0u;

    // 0x290fd0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x290fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x290fd4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x290fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x290fd8: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x290fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x290fdc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x290FDCu;
    {
        const bool branch_taken_0x290fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290fdc) {
            ctx->pc = 0x290FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290FDCu;
            // 0x290fe0: 0x8c820204  lw          $v0, 0x204($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290FECu;
            goto label_290fec;
        }
    }
    ctx->pc = 0x290FE4u;
    // 0x290fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x290FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FE4u;
        // 0x290fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290FECu;
label_290fec:
    // 0x290fec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x290FECu;
    {
        const bool branch_taken_0x290fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290fec) {
            ctx->pc = 0x290FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290FECu;
            // 0x290ff0: 0xac850204  sw          $a1, 0x204($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290FF4u;
            goto label_290ff4;
        }
    }
    ctx->pc = 0x290FF4u;
label_290ff4:
    // 0x290ff4: 0x8c820204  lw          $v0, 0x204($a0)
    ctx->pc = 0x290ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x290ff8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x290ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x290ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x290FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FFCu;
        // 0x291000: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291004u;
    // 0x291004: 0x0  nop
    ctx->pc = 0x291004u;
    // NOP
    ctx->pc = 0x291008u;
}
