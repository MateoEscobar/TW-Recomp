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

// Function: sub_001C1870
// Address: 0x1c1870 - 0x1c18c0
void sub_001C1870_0x1c1870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1870_0x1c1870");
#endif

    switch (ctx->pc) {
        case 0x1c1890u: goto label_1c1890;
        default: break;
    }

    ctx->pc = 0x1c1870u;

    // 0x1c1870: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x1c1870u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c1874: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c1874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c1878: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C1878u;
    {
        const bool branch_taken_0x1c1878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1878u;
        // 0x1c187c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1878) {
            ctx->pc = 0x1C18B8u;
            goto label_1c18b8;
        }
    }
    ctx->pc = 0x1C1880u;
    // 0x1c1880: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1880u;
    {
        const bool branch_taken_0x1c1880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1880u;
        // 0x1c1884: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1880) {
            ctx->pc = 0x1C18B8u;
            goto label_1c18b8;
        }
    }
    ctx->pc = 0x1C1888u;
    // 0x1c1888: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c1888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c188c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c1890:
    // 0x1c1890: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1c1890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c1894: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c1894u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1898: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1898u;
    {
        const bool branch_taken_0x1c1898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1c1898) {
            ctx->pc = 0x1C18B8u;
            goto label_1c18b8;
        }
    }
    ctx->pc = 0x1C18A0u;
    // 0x1c18a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C18A0u;
    {
        const bool branch_taken_0x1c18a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c18a0) {
            ctx->pc = 0x1C18B8u;
            goto label_1c18b8;
        }
    }
    ctx->pc = 0x1C18A8u;
    // 0x1c18a8: 0x5060fff9  beql        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C18A8u;
    {
        const bool branch_taken_0x1c18a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c18a8) {
            ctx->pc = 0x1C18ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C18A8u;
            // 0x1c18ac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1890;
        }
    }
    ctx->pc = 0x1C18B0u;
    // 0x1c18b0: 0x5444fff7  bnel        $v0, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C18B0u;
    {
        const bool branch_taken_0x1c18b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c18b0) {
            ctx->pc = 0x1C18B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C18B0u;
            // 0x1c18b4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1890;
        }
    }
    ctx->pc = 0x1C18B8u;
label_1c18b8:
    // 0x1c18b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C18B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18B8u;
        // 0x1c18bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C18B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C18C0u;
}
