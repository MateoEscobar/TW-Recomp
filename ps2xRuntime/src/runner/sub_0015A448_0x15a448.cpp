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

// Function: sub_0015A448
// Address: 0x15a448 - 0x15a4e0
void sub_0015A448_0x15a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A448_0x15a448");
#endif

    ctx->pc = 0x15a448u;

    // 0x15a448: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15a44c: 0x8c43c710  lw          $v1, -0x38F0($v0)
    ctx->pc = 0x15a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C710u));
    // 0x15a450: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A450u;
    {
        const bool branch_taken_0x15a450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A450u;
        // 0x15a454: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a450) {
            ctx->pc = 0x15A46Cu;
            goto label_15a46c;
        }
    }
    ctx->pc = 0x15A458u;
    // 0x15a458: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15a45c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a460: 0x2442a7a8  addiu       $v0, $v0, -0x5858
    ctx->pc = 0x15a460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944680));
    // 0x15a464: 0x3e00008  jr          $ra
    ctx->pc = 0x15A464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A464u;
        // 0x15a468: 0xac62c734  sw          $v0, -0x38CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A46Cu;
label_15a46c:
    // 0x15a46c: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
    // 0x15a470: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A470u;
    {
        const bool branch_taken_0x15a470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A470u;
        // 0x15a474: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a470) {
            ctx->pc = 0x15A484u;
            goto label_15a484;
        }
    }
    ctx->pc = 0x15A478u;
    // 0x15a478: 0x8c43c72c  lw          $v1, -0x38D4($v0)
    ctx->pc = 0x15a478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952748)));
    // 0x15a47c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A47Cu;
    {
        const bool branch_taken_0x15a47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A47Cu;
        // 0x15a480: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a47c) {
            ctx->pc = 0x15A498u;
            goto label_15a498;
        }
    }
    ctx->pc = 0x15A484u;
label_15a484:
    // 0x15a484: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15a488: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a48c: 0x2442a4a8  addiu       $v0, $v0, -0x5B58
    ctx->pc = 0x15a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943912));
    // 0x15a490: 0x3e00008  jr          $ra
    ctx->pc = 0x15A490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A490u;
        // 0x15a494: 0xac62c734  sw          $v0, -0x38CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A498u;
label_15a498:
    // 0x15a498: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a49c: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x15a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x15a4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x15A4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4A0u;
        // 0x15a4a4: 0xac62c734  sw          $v0, -0x38CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A4A8u;
    // 0x15a4a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15a4ac: 0x8c43c708  lw          $v1, -0x38F8($v0)
    ctx->pc = 0x15a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C708u));
    // 0x15a4b0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A4B0u;
    {
        const bool branch_taken_0x15a4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4B0u;
        // 0x15a4b4: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4b0) {
            ctx->pc = 0x15A4CCu;
            goto label_15a4cc;
        }
    }
    ctx->pc = 0x15A4B8u;
    // 0x15a4b8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15a4bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a4c0: 0x2442a508  addiu       $v0, $v0, -0x5AF8
    ctx->pc = 0x15a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944008));
    // 0x15a4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x15A4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4C4u;
        // 0x15a4c8: 0xac62c734  sw          $v0, -0x38CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A4CCu;
label_15a4cc:
    // 0x15a4cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a4d0: 0x2442a4e0  addiu       $v0, $v0, -0x5B20
    ctx->pc = 0x15a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943968));
    // 0x15a4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x15A4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4D4u;
        // 0x15a4d8: 0xac62c734  sw          $v0, -0x38CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A4DCu;
    // 0x15a4dc: 0x0  nop
    ctx->pc = 0x15a4dcu;
    // NOP
    ctx->pc = 0x15a4e0u;
}
