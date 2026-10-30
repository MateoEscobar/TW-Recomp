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

// Function: sub_00327B38
// Address: 0x327b38 - 0x327b88
void sub_00327B38_0x327b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327B38_0x327b38");
#endif

    switch (ctx->pc) {
        case 0x327b58u: goto label_327b58;
        default: break;
    }

    ctx->pc = 0x327b38u;

    // 0x327b38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x327b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x327b3c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x327b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x327b40: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x327b40u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x327b44: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x327b44u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x327b48: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x327B48u;
    {
        const bool branch_taken_0x327b48 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x327B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B48u;
        // 0x327b4c: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b48) {
            ctx->pc = 0x327B80u;
            goto label_327b80;
        }
    }
    ctx->pc = 0x327B50u;
    // 0x327b50: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x327b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x327b54: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x327b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_327b58:
    // 0x327b58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x327b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327b5c: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x327B5Cu;
    {
        const bool branch_taken_0x327b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x327b5c) {
            ctx->pc = 0x327B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327B5Cu;
            // 0x327b60: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327B78u;
            goto label_327b78;
        }
    }
    ctx->pc = 0x327B64u;
    // 0x327b64: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x327B64u;
    {
        const bool branch_taken_0x327b64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x327B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B64u;
        // 0x327b68: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b64) {
            ctx->pc = 0x327B74u;
            goto label_327b74;
        }
    }
    ctx->pc = 0x327B6Cu;
    // 0x327b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x327B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B6Cu;
        // 0x327b70: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327B74u;
label_327b74:
    // 0x327b74: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x327b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_327b78:
    // 0x327b78: 0x4c1fff7  bgez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x327B78u;
    {
        const bool branch_taken_0x327b78 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x327B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B78u;
        // 0x327b7c: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b78) {
            ctx->pc = 0x327B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327b58;
        }
    }
    ctx->pc = 0x327B80u;
label_327b80:
    // 0x327b80: 0x3e00008  jr          $ra
    ctx->pc = 0x327B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B80u;
        // 0x327b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327B88u;
}
