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

// Function: sub_004DEBE8
// Address: 0x4debe8 - 0x4dec50
void sub_004DEBE8_0x4debe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DEBE8_0x4debe8");
#endif

    switch (ctx->pc) {
        case 0x4dec00u: goto label_4dec00;
        default: break;
    }

    ctx->pc = 0x4debe8u;

    // 0x4debe8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4debe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4debec: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4debecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4debf0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4DEBF0u;
    {
        const bool branch_taken_0x4debf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEBF0u;
        // 0x4debf4: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4debf0) {
            ctx->pc = 0x4DEC1Cu;
            goto label_4dec1c;
        }
    }
    ctx->pc = 0x4DEBF8u;
    // 0x4debf8: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4debf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4debfc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4debfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4dec00:
    // 0x4dec00: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4dec00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4dec04: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DEC04u;
    {
        const bool branch_taken_0x4dec04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dec04) {
            ctx->pc = 0x4DEC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DEC04u;
            // 0x4dec08: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DEC14u;
            goto label_4dec14;
        }
    }
    ctx->pc = 0x4DEC0Cu;
    // 0x4dec0c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4dec0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dec10: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4dec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4dec14:
    // 0x4dec14: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DEC14u;
    {
        const bool branch_taken_0x4dec14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dec14) {
            ctx->pc = 0x4DEC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DEC14u;
            // 0x4dec18: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DEC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dec00;
        }
    }
    ctx->pc = 0x4DEC1Cu;
label_4dec1c:
    // 0x4dec1c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4dec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4dec20: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4dec20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4dec24: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DEC24u;
    {
        const bool branch_taken_0x4dec24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4DEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEC24u;
        // 0x4dec28: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dec24) {
            ctx->pc = 0x4DEC40u;
            goto label_4dec40;
        }
    }
    ctx->pc = 0x4DEC2Cu;
    // 0x4dec2c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dec30: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4dec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4dec34: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4dec34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4dec38: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4DEC38u;
    {
        const bool branch_taken_0x4dec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dec38) {
            ctx->pc = 0x4DEC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DEC38u;
            // 0x4dec3c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DEC44u;
            goto label_4dec44;
        }
    }
    ctx->pc = 0x4DEC40u;
label_4dec40:
    // 0x4dec40: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4dec40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4dec44:
    // 0x4dec44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4dec44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dec48: 0x3e00008  jr          $ra
    ctx->pc = 0x4DEC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEC48u;
        // 0x4dec4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DEC50u;
}
