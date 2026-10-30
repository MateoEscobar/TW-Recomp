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

// Function: sub_0010F578
// Address: 0x10f578 - 0x10f5c8
void sub_0010F578_0x10f578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F578_0x10f578");
#endif

    ctx->pc = 0x10f578u;

    // 0x10f578: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10f578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10f57c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10f57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f580: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10f580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10f584: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F584u;
    {
        const bool branch_taken_0x10f584 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f584) {
            ctx->pc = 0x10F588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F584u;
            // 0x10f588: 0x84830002  lh          $v1, 0x2($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F594u;
            goto label_10f594;
        }
    }
    ctx->pc = 0x10F58Cu;
    // 0x10f58c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F58Cu;
        // 0x10f590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F594u;
label_10f594:
    // 0x10f594: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f598: 0x24428698  addiu       $v0, $v0, -0x7968
    ctx->pc = 0x10f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936216));
    // 0x10f59c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10f5a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10f5a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f5a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F5A8u;
    {
        const bool branch_taken_0x10f5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f5a8) {
            ctx->pc = 0x10F5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F5A8u;
            // 0x10f5ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F5BCu;
            goto label_10f5bc;
        }
    }
    ctx->pc = 0x10F5B0u;
    // 0x10f5b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10f5b4: 0x54650001  bnel        $v1, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x10F5B4u;
    {
        const bool branch_taken_0x10f5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x10f5b4) {
            ctx->pc = 0x10F5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F5B4u;
            // 0x10f5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F5BCu;
            goto label_10f5bc;
        }
    }
    ctx->pc = 0x10F5BCu;
label_10f5bc:
    // 0x10f5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x10F5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F5C4u;
    // 0x10f5c4: 0x0  nop
    ctx->pc = 0x10f5c4u;
    // NOP
    ctx->pc = 0x10f5c8u;
}
