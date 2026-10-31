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

// Function: sub_00210D10
// Address: 0x210d10 - 0x210dc0
void sub_00210D10_0x210d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210D10_0x210d10");
#endif

    switch (ctx->pc) {
        case 0x210d28u: goto label_210d28;
        case 0x210d58u: goto label_210d58;
        case 0x210d80u: goto label_210d80;
        case 0x210d88u: goto label_210d88;
        case 0x210da0u: goto label_210da0;
        case 0x210da8u: goto label_210da8;
        default: break;
    }

    ctx->pc = 0x210d10u;

    // 0x210d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210d14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x210d18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x210d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x210d1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210d20: 0xc0836f8  jal         func_20DBE0
    ctx->pc = 0x210D20u;
    SET_GPR_U32(ctx, 31, 0x210D28u);
    ctx->pc = 0x210D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D20u;
    // 0x210d24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DBE0u, 0x210D20u, 0x210D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D28u;
label_210d28:
    // 0x210d28: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x210d28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x210d2c: 0x26244130  addiu       $a0, $s1, 0x4130
    ctx->pc = 0x210d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16688));
    // 0x210d30: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x210d30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x210d34: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x210d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x210d38: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210D38u;
    {
        const bool branch_taken_0x210d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x210D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D38u;
        // 0x210d3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d38) {
            ctx->pc = 0x210D48u;
            goto label_210d48;
        }
    }
    ctx->pc = 0x210D40u;
    // 0x210d40: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x210d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x210d44: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x210d44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_210d48:
    // 0x210d48: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x210D48u;
    {
        const bool branch_taken_0x210d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x210d48) {
            ctx->pc = 0x210D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210D48u;
            // 0x210d4c: 0x26244230  addiu       $a0, $s1, 0x4230 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16944));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210D5Cu;
            goto label_210d5c;
        }
    }
    ctx->pc = 0x210D50u;
    // 0x210d50: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x210D50u;
    SET_GPR_U32(ctx, 31, 0x210D58u);
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x210D50u, 0x210D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D58u;
label_210d58:
    // 0x210d58: 0x26244230  addiu       $a0, $s1, 0x4230
    ctx->pc = 0x210d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16944));
label_210d5c:
    // 0x210d5c: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x210d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x210d60: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210D60u;
    {
        const bool branch_taken_0x210d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x210D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D60u;
        // 0x210d64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d60) {
            ctx->pc = 0x210D70u;
            goto label_210d70;
        }
    }
    ctx->pc = 0x210D68u;
    // 0x210d68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x210d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x210d6c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x210d6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_210d70:
    // 0x210d70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x210D70u;
    {
        const bool branch_taken_0x210d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x210d70) {
            ctx->pc = 0x210D80u;
            goto label_210d80;
        }
    }
    ctx->pc = 0x210D78u;
    // 0x210d78: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x210D78u;
    SET_GPR_U32(ctx, 31, 0x210D80u);
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x210D78u, 0x210D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D80u;
label_210d80:
    // 0x210d80: 0xc071e18  jal         func_1C7860
    ctx->pc = 0x210D80u;
    SET_GPR_U32(ctx, 31, 0x210D88u);
    ctx->pc = 0x210D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D80u;
    // 0x210d84: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7860u, 0x210D80u, 0x210D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D88u;
label_210d88:
    // 0x210d88: 0x262443a0  addiu       $a0, $s1, 0x43A0
    ctx->pc = 0x210d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17312));
    // 0x210d8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x210d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x210d90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210D90u;
    {
        const bool branch_taken_0x210d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210d90) {
            ctx->pc = 0x210DA0u;
            goto label_210da0;
        }
    }
    ctx->pc = 0x210D98u;
    // 0x210d98: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x210D98u;
    SET_GPR_U32(ctx, 31, 0x210DA0u);
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x210D98u, 0x210DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210DA0u;
label_210da0:
    // 0x210da0: 0xc08396e  jal         func_20E5B8
    ctx->pc = 0x210DA0u;
    SET_GPR_U32(ctx, 31, 0x210DA8u);
    ctx->pc = 0x210DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210DA0u;
    // 0x210da4: 0x26244590  addiu       $a0, $s1, 0x4590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5B8u, 0x210DA0u, 0x210DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210DA8u;
label_210da8:
    // 0x210da8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x210da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210dac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210db4: 0x3e00008  jr          $ra
    ctx->pc = 0x210DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DB4u;
        // 0x210db8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210DBCu;
    // 0x210dbc: 0x0  nop
    ctx->pc = 0x210dbcu;
    // NOP
    ctx->pc = 0x210dc0u;
}
