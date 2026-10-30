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

// Function: sub_00168FE0
// Address: 0x168fe0 - 0x169060
void sub_00168FE0_0x168fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168FE0_0x168fe0");
#endif

    switch (ctx->pc) {
        case 0x169014u: goto label_169014;
        default: break;
    }

    ctx->pc = 0x168fe0u;

    // 0x168fe0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x168fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x168fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168fe8: 0x8ce4002c  lw          $a0, 0x2C($a3)
    ctx->pc = 0x168fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x168fec: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x168FECu;
    {
        const bool branch_taken_0x168fec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x168FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FECu;
        // 0x168ff0: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fec) {
            ctx->pc = 0x169000u;
            goto label_169000;
        }
    }
    ctx->pc = 0x168FF4u;
    // 0x168ff4: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x168ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x168ff8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168FF8u;
    {
        const bool branch_taken_0x168ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x168ff8) {
            ctx->pc = 0x169014u;
            goto label_169014;
        }
    }
    ctx->pc = 0x169000u;
label_169000:
    // 0x169000: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169000u;
    {
        const bool branch_taken_0x169000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x169004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169000u;
        // 0x169004: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169000) {
            ctx->pc = 0x16901Cu;
            goto label_16901c;
        }
    }
    ctx->pc = 0x169008u;
    // 0x169008: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x169008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16900c: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16900Cu;
    {
        const bool branch_taken_0x16900c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x169010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16900Cu;
        // 0x169010: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16900c) {
            ctx->pc = 0x16901Cu;
            goto label_16901c;
        }
    }
    ctx->pc = 0x169014u;
label_169014:
    // 0x169014: 0x3e00008  jr          $ra
    ctx->pc = 0x169014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169014u;
        // 0x169018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16901Cu;
label_16901c:
    // 0x16901c: 0x8c46cb7c  lw          $a2, -0x3484($v0)
    ctx->pc = 0x16901cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953852)));
    // 0x169020: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x169020u;
    {
        const bool branch_taken_0x169020 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x169020) {
            ctx->pc = 0x169024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169020u;
            // 0x169024: 0x84a30030  lh          $v1, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169044u;
            goto label_169044;
        }
    }
    ctx->pc = 0x169028u;
    // 0x169028: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x169028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x16902c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x169030: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x169030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x169034: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x169034u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x169038: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x169038u;
    {
        const bool branch_taken_0x169038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169038) {
            ctx->pc = 0x169014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169014;
        }
    }
    ctx->pc = 0x169040u;
    // 0x169040: 0x84a30030  lh          $v1, 0x30($a1)
    ctx->pc = 0x169040u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_169044:
    // 0x169044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169048: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x169048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x16904c: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x16904cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x169050: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x169050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x169054: 0x3e00008  jr          $ra
    ctx->pc = 0x169054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169054u;
        // 0x169058: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16905Cu;
    // 0x16905c: 0x0  nop
    ctx->pc = 0x16905cu;
    // NOP
    ctx->pc = 0x169060u;
}
