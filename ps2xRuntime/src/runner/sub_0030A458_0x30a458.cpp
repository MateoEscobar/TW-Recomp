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

// Function: sub_0030A458
// Address: 0x30a458 - 0x30a4f8
void sub_0030A458_0x30a458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A458_0x30a458");
#endif

    switch (ctx->pc) {
        case 0x30a490u: goto label_30a490;
        case 0x30a498u: goto label_30a498;
        case 0x30a4a0u: goto label_30a4a0;
        case 0x30a4c8u: goto label_30a4c8;
        default: break;
    }

    ctx->pc = 0x30a458u;

    // 0x30a458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a45c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a460: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30a460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30a464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a46c: 0x90820068  lbu         $v0, 0x68($a0)
    ctx->pc = 0x30a46cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x30a470: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A470u;
    {
        const bool branch_taken_0x30a470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30a470) {
            ctx->pc = 0x30A474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A470u;
            // 0x30a474: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A480u;
            goto label_30a480;
        }
    }
    ctx->pc = 0x30A478u;
    // 0x30a478: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x30A478u;
    {
        const bool branch_taken_0x30a478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A478u;
        // 0x30a47c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a478) {
            ctx->pc = 0x30A4E0u;
            goto label_30a4e0;
        }
    }
    ctx->pc = 0x30A480u;
label_30a480:
    // 0x30a480: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30a480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a484: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x30a484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30a488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a48c: 0x0  nop
    ctx->pc = 0x30a48cu;
    // NOP
label_30a490:
    // 0x30a490: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30A490u;
    SET_GPR_U32(ctx, 31, 0x30A498u);
    ctx->pc = 0x30A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A490u;
    // 0x30a494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30A490u, 0x30A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A498u;
label_30a498:
    // 0x30a498: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30A498u;
    SET_GPR_U32(ctx, 31, 0x30A4A0u);
    ctx->pc = 0x30A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A498u;
    // 0x30a49c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30A498u, 0x30A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4A0u;
label_30a4a0:
    // 0x30a4a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30a4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4a4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x30A4A4u;
    {
        const bool branch_taken_0x30a4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4A4u;
        // 0x30a4a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4a4) {
            ctx->pc = 0x30A4D0u;
            goto label_30a4d0;
        }
    }
    ctx->pc = 0x30A4ACu;
    // 0x30a4ac: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x30a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30a4b0: 0x2442ff89  addiu       $v0, $v0, -0x77
    ctx->pc = 0x30a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967177));
    // 0x30a4b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x30a4b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30a4b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A4B8u;
    {
        const bool branch_taken_0x30a4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a4b8) {
            ctx->pc = 0x30A4D0u;
            goto label_30a4d0;
        }
    }
    ctx->pc = 0x30A4C0u;
    // 0x30a4c0: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x30A4C0u;
    SET_GPR_U32(ctx, 31, 0x30A4C8u);
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x30A4C0u, 0x30A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4C8u;
label_30a4c8:
    // 0x30a4c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A4C8u;
    {
        const bool branch_taken_0x30a4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4C8u;
        // 0x30a4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4c8) {
            ctx->pc = 0x30A4E0u;
            goto label_30a4e0;
        }
    }
    ctx->pc = 0x30A4D0u;
label_30a4d0:
    // 0x30a4d0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30a4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30a4d4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30A4D4u;
    {
        const bool branch_taken_0x30a4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4D4u;
        // 0x30a4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4d4) {
            ctx->pc = 0x30A490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a490;
        }
    }
    ctx->pc = 0x30A4DCu;
    // 0x30a4dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a4e0:
    // 0x30a4e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30a4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a4e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x30A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4ECu;
        // 0x30a4f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A4F4u;
    // 0x30a4f4: 0x0  nop
    ctx->pc = 0x30a4f4u;
    // NOP
    ctx->pc = 0x30a4f8u;
}
