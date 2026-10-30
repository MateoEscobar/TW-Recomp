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

// Function: sub_004E6AE0
// Address: 0x4e6ae0 - 0x4e6b20
void sub_004E6AE0_0x4e6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6AE0_0x4e6ae0");
#endif

    switch (ctx->pc) {
        case 0x4e6af8u: goto label_4e6af8;
        default: break;
    }

    ctx->pc = 0x4e6ae0u;

    // 0x4e6ae0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e6ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e6ae4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e6ae8: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4E6AE8u;
    {
        const bool branch_taken_0x4e6ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6ae8) {
            ctx->pc = 0x4E6AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6AE8u;
            // 0x4e6aec: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6B18u;
            goto label_4e6b18;
        }
    }
    ctx->pc = 0x4E6AF0u;
    // 0x4e6af0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e6af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e6af4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e6af8:
    // 0x4e6af8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4e6af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4e6afc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E6AFCu;
    {
        const bool branch_taken_0x4e6afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6afc) {
            ctx->pc = 0x4E6B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6AFCu;
            // 0x4e6b00: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6B0Cu;
            goto label_4e6b0c;
        }
    }
    ctx->pc = 0x4E6B04u;
    // 0x4e6b04: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4e6b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6b08: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4e6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e6b0c:
    // 0x4e6b0c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E6B0Cu;
    {
        const bool branch_taken_0x4e6b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6b0c) {
            ctx->pc = 0x4E6B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6B0Cu;
            // 0x4e6b10: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e6af8;
        }
    }
    ctx->pc = 0x4E6B14u;
    // 0x4e6b14: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e6b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e6b18:
    // 0x4e6b18: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6B18u;
        // 0x4e6b1c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6B20u;
}
