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

// Function: sub_001D2018
// Address: 0x1d2018 - 0x1d2070
void sub_001D2018_0x1d2018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2018_0x1d2018");
#endif

    ctx->pc = 0x1d2018u;

    // 0x1d2018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d201c: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D201Cu;
    {
        const bool branch_taken_0x1d201c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D201Cu;
        // 0x1d2020: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d201c) {
            ctx->pc = 0x1D203Cu;
            goto label_1d203c;
        }
    }
    ctx->pc = 0x1D2024u;
    // 0x1d2024: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d2028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d202c: 0x8c43ec8c  lw          $v1, -0x1374($v0)
    ctx->pc = 0x1d202cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50EC8Cu));
    // 0x1d2030: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x1d2030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1d2034: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2034u;
        // 0x1d2038: 0xac600cb0  sw          $zero, 0xCB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D203Cu;
label_1d203c:
    // 0x1d203c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D203Cu;
    {
        const bool branch_taken_0x1d203c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D203Cu;
        // 0x1d2040: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d203c) {
            ctx->pc = 0x1D204Cu;
            goto label_1d204c;
        }
    }
    ctx->pc = 0x1D2044u;
    // 0x1d2044: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2044u;
    {
        const bool branch_taken_0x1d2044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d2044) {
            ctx->pc = 0x1D2068u;
            goto label_1d2068;
        }
    }
    ctx->pc = 0x1D204Cu;
label_1d204c:
    // 0x1d204c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d204cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d2050: 0x8c62ec8c  lw          $v0, -0x1374($v1)
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50EC8Cu));
    // 0x1d2054: 0xac400cb0  sw          $zero, 0xCB0($v0)
    ctx->pc = 0x1d2054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3248), GPR_U32(ctx, 0));
    // 0x1d2058: 0xac4007a8  sw          $zero, 0x7A8($v0)
    ctx->pc = 0x1d2058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1960), GPR_U32(ctx, 0));
    // 0x1d205c: 0xac4007a4  sw          $zero, 0x7A4($v0)
    ctx->pc = 0x1d205cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1956), GPR_U32(ctx, 0));
    // 0x1d2060: 0xac4007a0  sw          $zero, 0x7A0($v0)
    ctx->pc = 0x1d2060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1952), GPR_U32(ctx, 0));
    // 0x1d2064: 0xac4007ac  sw          $zero, 0x7AC($v0)
    ctx->pc = 0x1d2064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1964), GPR_U32(ctx, 0));
label_1d2068:
    // 0x1d2068: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2070u;
}
