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

// Function: sub_004B0888
// Address: 0x4b0888 - 0x4b08e8
void sub_004B0888_0x4b0888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0888_0x4b0888");
#endif

    switch (ctx->pc) {
        case 0x4b08b8u: goto label_4b08b8;
        default: break;
    }

    ctx->pc = 0x4b0888u;

    // 0x4b0888: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4b0888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b088c: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x4b088cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x4b0890: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B0890u;
    {
        const bool branch_taken_0x4b0890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0890u;
        // 0x4b0894: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0890) {
            ctx->pc = 0x4B08E0u;
            goto label_4b08e0;
        }
    }
    ctx->pc = 0x4B0898u;
    // 0x4b0898: 0x8c622288  lw          $v0, 0x2288($v1)
    ctx->pc = 0x4b0898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8840)));
    // 0x4b089c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B089Cu;
    {
        const bool branch_taken_0x4b089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B089Cu;
        // 0x4b08a0: 0x24652288  addiu       $a1, $v1, 0x2288 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b089c) {
            ctx->pc = 0x4B08D4u;
            goto label_4b08d4;
        }
    }
    ctx->pc = 0x4B08A4u;
    // 0x4b08a4: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B08A4u;
    {
        const bool branch_taken_0x4b08a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4b08a4) {
            ctx->pc = 0x4B08A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B08A4u;
            // 0x4b08a8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B08B8u;
            goto label_4b08b8;
        }
    }
    ctx->pc = 0x4B08ACu;
    // 0x4b08ac: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x4b08acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x4b08b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B08B0u;
    {
        const bool branch_taken_0x4b08b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B08B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B08B0u;
        // 0x4b08b4: 0xac622288  sw          $v0, 0x2288($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b08b0) {
            ctx->pc = 0x4B08D4u;
            goto label_4b08d4;
        }
    }
    ctx->pc = 0x4B08B8u;
label_4b08b8:
    // 0x4b08b8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4b08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x4b08bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B08BCu;
    {
        const bool branch_taken_0x4b08bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B08BCu;
        // 0x4b08c0: 0x24650034  addiu       $a1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b08bc) {
            ctx->pc = 0x4B08D4u;
            goto label_4b08d4;
        }
    }
    ctx->pc = 0x4B08C4u;
    // 0x4b08c4: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4B08C4u;
    {
        const bool branch_taken_0x4b08c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4b08c4) {
            ctx->pc = 0x4B08C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B08C4u;
            // 0x4b08c8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B08B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b08b8;
        }
    }
    ctx->pc = 0x4B08CCu;
    // 0x4b08cc: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x4b08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x4b08d0: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x4b08d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_4b08d4:
    // 0x4b08d4: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x4b08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x4b08d8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4b08d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b08dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4b08e0:
    // 0x4b08e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B08E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B08E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B08E8u;
}
