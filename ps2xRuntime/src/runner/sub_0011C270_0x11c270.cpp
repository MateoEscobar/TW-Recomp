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

// Function: sub_0011C270
// Address: 0x11c270 - 0x11c2f0
void sub_0011C270_0x11c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C270_0x11c270");
#endif

    switch (ctx->pc) {
        case 0x11c298u: goto label_11c298;
        case 0x11c2a8u: goto label_11c2a8;
        case 0x11c2c4u: goto label_11c2c4;
        case 0x11c2dcu: goto label_11c2dc;
        default: break;
    }

    ctx->pc = 0x11c270u;

    // 0x11c270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c274: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c278: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11c278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11c27c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c280: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c284: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C284u;
    {
        const bool branch_taken_0x11c284 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C284u;
        // 0x11c288: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c284) {
            ctx->pc = 0x11C2A0u;
            goto label_11c2a0;
        }
    }
    ctx->pc = 0x11C28Cu;
    // 0x11c28c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x11c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x11c290: 0xc136b48  jal         func_4DAD20
    ctx->pc = 0x11C290u;
    SET_GPR_U32(ctx, 31, 0x11C298u);
    ctx->pc = 0x11C294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C290u;
    // 0x11c294: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD20u, 0x11C290u, 0x11C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C298u;
label_11c298:
    // 0x11c298: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11C298u;
    {
        const bool branch_taken_0x11c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C298u;
        // 0x11c29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c298) {
            ctx->pc = 0x11C2E0u;
            goto label_11c2e0;
        }
    }
    ctx->pc = 0x11C2A0u;
label_11c2a0:
    // 0x11c2a0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x11C2A0u;
    SET_GPR_U32(ctx, 31, 0x11C2A8u);
    ctx->pc = 0x11C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2A0u;
    // 0x11c2a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11C2A0u, 0x11C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2A8u;
label_11c2a8:
    // 0x11c2a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2ac: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x11C2ACu;
    {
        const bool branch_taken_0x11c2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2ACu;
        // 0x11c2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2ac) {
            ctx->pc = 0x11C2E0u;
            goto label_11c2e0;
        }
    }
    ctx->pc = 0x11C2B4u;
    // 0x11c2b4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C2B4u;
    {
        const bool branch_taken_0x11c2b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2B4u;
        // 0x11c2b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2b4) {
            ctx->pc = 0x11C2CCu;
            goto label_11c2cc;
        }
    }
    ctx->pc = 0x11C2BCu;
    // 0x11c2bc: 0xc0488ac  jal         func_1222B0
    ctx->pc = 0x11C2BCu;
    SET_GPR_U32(ctx, 31, 0x11C2C4u);
    ctx->pc = 0x11C2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2BCu;
    // 0x11c2c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x11C2BCu, 0x11C2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2C4u;
label_11c2c4:
    // 0x11c2c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11C2C4u;
    {
        const bool branch_taken_0x11c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2C4u;
        // 0x11c2c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2c4) {
            ctx->pc = 0x11C2E4u;
            goto label_11c2e4;
        }
    }
    ctx->pc = 0x11C2CCu;
label_11c2cc:
    // 0x11c2cc: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C2CCu;
    {
        const bool branch_taken_0x11c2cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2CCu;
        // 0x11c2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2cc) {
            ctx->pc = 0x11C2E0u;
            goto label_11c2e0;
        }
    }
    ctx->pc = 0x11C2D4u;
    // 0x11c2d4: 0xc04890e  jal         func_122438
    ctx->pc = 0x11C2D4u;
    SET_GPR_U32(ctx, 31, 0x11C2DCu);
    ctx->pc = 0x11C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2D4u;
    // 0x11c2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x11C2D4u, 0x11C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2DCu;
label_11c2dc:
    // 0x11c2dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11c2e0:
    // 0x11c2e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11c2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11c2e4:
    // 0x11c2e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x11C2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2E8u;
        // 0x11c2ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C2F0u;
}
