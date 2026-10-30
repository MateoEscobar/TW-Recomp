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

// Function: sub_004DF1C0
// Address: 0x4df1c0 - 0x4df228
void sub_004DF1C0_0x4df1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF1C0_0x4df1c0");
#endif

    switch (ctx->pc) {
        case 0x4df1d8u: goto label_4df1d8;
        default: break;
    }

    ctx->pc = 0x4df1c0u;

    // 0x4df1c0: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4df1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4df1c4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4df1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4df1c8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4DF1C8u;
    {
        const bool branch_taken_0x4df1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF1C8u;
        // 0x4df1cc: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df1c8) {
            ctx->pc = 0x4DF1F4u;
            goto label_4df1f4;
        }
    }
    ctx->pc = 0x4DF1D0u;
    // 0x4df1d0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4df1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df1d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4df1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4df1d8:
    // 0x4df1d8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4df1d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4df1dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DF1DCu;
    {
        const bool branch_taken_0x4df1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df1dc) {
            ctx->pc = 0x4DF1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF1DCu;
            // 0x4df1e0: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF1ECu;
            goto label_4df1ec;
        }
    }
    ctx->pc = 0x4DF1E4u;
    // 0x4df1e4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4df1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df1e8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4df1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4df1ec:
    // 0x4df1ec: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DF1ECu;
    {
        const bool branch_taken_0x4df1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df1ec) {
            ctx->pc = 0x4DF1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF1ECu;
            // 0x4df1f0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4df1d8;
        }
    }
    ctx->pc = 0x4DF1F4u;
label_4df1f4:
    // 0x4df1f4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4df1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4df1f8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4df1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4df1fc: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DF1FCu;
    {
        const bool branch_taken_0x4df1fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4DF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF1FCu;
        // 0x4df200: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df1fc) {
            ctx->pc = 0x4DF218u;
            goto label_4df218;
        }
    }
    ctx->pc = 0x4DF204u;
    // 0x4df204: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4df204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df208: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4df208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4df20c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4df20cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4df210: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4DF210u;
    {
        const bool branch_taken_0x4df210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df210) {
            ctx->pc = 0x4DF214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF210u;
            // 0x4df214: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF21Cu;
            goto label_4df21c;
        }
    }
    ctx->pc = 0x4DF218u;
label_4df218:
    // 0x4df218: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4df218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4df21c:
    // 0x4df21c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4df21cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df220: 0x3e00008  jr          $ra
    ctx->pc = 0x4DF220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF220u;
        // 0x4df224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DF228u;
}
