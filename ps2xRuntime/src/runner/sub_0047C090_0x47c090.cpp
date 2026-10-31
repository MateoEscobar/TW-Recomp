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

// Function: sub_0047C090
// Address: 0x47c090 - 0x47c0f8
void sub_0047C090_0x47c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C090_0x47c090");
#endif

    ctx->pc = 0x47c090u;

    // 0x47c090: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47c090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x47c094: 0x8f838920  lw          $v1, -0x76E0($gp)
    ctx->pc = 0x47c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x47c098: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x47c098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c09c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x47c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x47c0a0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x47c0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47c0a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x47c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47c0a8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x47C0A8u;
    {
        const bool branch_taken_0x47c0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C0A8u;
        // 0x47c0ac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c0a8) {
            ctx->pc = 0x47C0ECu;
            goto label_47c0ec;
        }
    }
    ctx->pc = 0x47C0B0u;
    // 0x47c0b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x47c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x47c0b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x47c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x47c0b8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x47C0B8u;
    {
        const bool branch_taken_0x47c0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x47c0b8) {
            ctx->pc = 0x47C0ECu;
            goto label_47c0ec;
        }
    }
    ctx->pc = 0x47C0C0u;
    // 0x47c0c0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x47c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x47c0c4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47C0C4u;
    {
        const bool branch_taken_0x47c0c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x47c0c4) {
            ctx->pc = 0x47C0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47C0C4u;
            // 0x47c0c8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47C0D4u;
            goto label_47c0d4;
        }
    }
    ctx->pc = 0x47C0CCu;
    // 0x47c0cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x47C0CCu;
    {
        const bool branch_taken_0x47c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C0CCu;
        // 0x47c0d0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c0cc) {
            ctx->pc = 0x47C0D8u;
            goto label_47c0d8;
        }
    }
    ctx->pc = 0x47C0D4u;
label_47c0d4:
    // 0x47c0d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x47c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_47c0d8:
    // 0x47c0d8: 0x8f828920  lw          $v0, -0x76E0($gp)
    ctx->pc = 0x47c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x47c0dc: 0x24e3ad18  addiu       $v1, $a3, -0x52E8
    ctx->pc = 0x47c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946072));
    // 0x47c0e0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x47c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x47c0e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47c0e8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x47c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_47c0ec:
    // 0x47c0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x47C0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C0ECu;
        // 0x47c0f0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C0F4u;
    // 0x47c0f4: 0x0  nop
    ctx->pc = 0x47c0f4u;
    // NOP
    ctx->pc = 0x47c0f8u;
}
