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

// Function: sub_00126370
// Address: 0x126370 - 0x1263e8
void sub_00126370_0x126370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126370_0x126370");
#endif

    switch (ctx->pc) {
        case 0x126390u: goto label_126390;
        case 0x126398u: goto label_126398;
        case 0x1263b0u: goto label_1263b0;
        default: break;
    }

    ctx->pc = 0x126370u;

    // 0x126370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126374: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x126374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x126378: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12637c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126380: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x126380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126388: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x126388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x12638c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126390:
    // 0x126390: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x126390u;
    SET_GPR_U32(ctx, 31, 0x126398u);
    ctx->pc = 0x126394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126390u;
    // 0x126394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x126390u, 0x126398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126398u;
label_126398:
    // 0x126398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12639c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12639cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1263A0u;
    {
        const bool branch_taken_0x1263a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263A0u;
        // 0x1263a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263a0) {
            ctx->pc = 0x1263B8u;
            goto label_1263b8;
        }
    }
    ctx->pc = 0x1263A8u;
    // 0x1263a8: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x1263A8u;
    SET_GPR_U32(ctx, 31, 0x1263B0u);
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1263A8u, 0x1263B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263B0u;
label_1263b0:
    // 0x1263b0: 0xa0400478  sb          $zero, 0x478($v0)
    ctx->pc = 0x1263b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1144), (uint8_t)GPR_U32(ctx, 0));
    // 0x1263b4: 0xac400424  sw          $zero, 0x424($v0)
    ctx->pc = 0x1263b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1060), GPR_U32(ctx, 0));
label_1263b8:
    // 0x1263b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1263b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1263bc: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1263bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1263c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1263C0u;
    {
        const bool branch_taken_0x1263c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263C0u;
        // 0x1263c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263c0) {
            ctx->pc = 0x1263CCu;
            goto label_1263cc;
        }
    }
    ctx->pc = 0x1263C8u;
    // 0x1263c8: 0xa04001b4  sb          $zero, 0x1B4($v0)
    ctx->pc = 0x1263c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 436), (uint8_t)GPR_U32(ctx, 0));
label_1263cc:
    // 0x1263cc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1263CCu;
    {
        const bool branch_taken_0x1263cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1263D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263CCu;
        // 0x1263d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263cc) {
            ctx->pc = 0x126390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126390;
        }
    }
    ctx->pc = 0x1263D4u;
    // 0x1263d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1263d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1263d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1263d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1263dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1263dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1263e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1263E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1263E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263E0u;
        // 0x1263e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1263E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1263E8u;
}
