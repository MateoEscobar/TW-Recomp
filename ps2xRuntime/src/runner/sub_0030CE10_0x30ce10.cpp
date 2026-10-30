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

// Function: sub_0030CE10
// Address: 0x30ce10 - 0x30ceb8
void sub_0030CE10_0x30ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CE10_0x30ce10");
#endif

    switch (ctx->pc) {
        case 0x30ce40u: goto label_30ce40;
        case 0x30ce48u: goto label_30ce48;
        case 0x30ce58u: goto label_30ce58;
        case 0x30ce6cu: goto label_30ce6c;
        case 0x30ce7cu: goto label_30ce7c;
        case 0x30ce8cu: goto label_30ce8c;
        default: break;
    }

    ctx->pc = 0x30ce10u;

    // 0x30ce10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30ce14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30ce18: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30ce1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30ce1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce20: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30ce24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30ce24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30ce2c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30ce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30ce30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ce30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ce34: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30ce38: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x30ce38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30ce3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30ce3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30ce40:
    // 0x30ce40: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30CE40u;
    SET_GPR_U32(ctx, 31, 0x30CE48u);
    ctx->pc = 0x30CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE40u;
    // 0x30ce44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30CE40u, 0x30CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE48u;
label_30ce48:
    // 0x30ce48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30ce48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30ce4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ce4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce50: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30CE50u;
    SET_GPR_U32(ctx, 31, 0x30CE58u);
    ctx->pc = 0x30CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE50u;
    // 0x30ce54: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30CE50u, 0x30CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE58u;
label_30ce58:
    // 0x30ce58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30ce58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce5c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x30CE5Cu;
    {
        const bool branch_taken_0x30ce5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE5Cu;
        // 0x30ce60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce5c) {
            ctx->pc = 0x30CE8Cu;
            goto label_30ce8c;
        }
    }
    ctx->pc = 0x30CE64u;
    // 0x30ce64: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x30CE64u;
    SET_GPR_U32(ctx, 31, 0x30CE6Cu);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x30CE64u, 0x30CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE6Cu;
label_30ce6c:
    // 0x30ce6c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CE6Cu;
    {
        const bool branch_taken_0x30ce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE6Cu;
        // 0x30ce70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce6c) {
            ctx->pc = 0x30CE8Cu;
            goto label_30ce8c;
        }
    }
    ctx->pc = 0x30CE74u;
    // 0x30ce74: 0xc088edc  jal         func_223B70
    ctx->pc = 0x30CE74u;
    SET_GPR_U32(ctx, 31, 0x30CE7Cu);
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x30CE74u, 0x30CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE7Cu;
label_30ce7c:
    // 0x30ce7c: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CE7Cu;
    {
        const bool branch_taken_0x30ce7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE7Cu;
        // 0x30ce80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce7c) {
            ctx->pc = 0x30CE8Cu;
            goto label_30ce8c;
        }
    }
    ctx->pc = 0x30CE84u;
    // 0x30ce84: 0xc0c33ae  jal         func_30CEB8
    ctx->pc = 0x30CE84u;
    SET_GPR_U32(ctx, 31, 0x30CE8Cu);
    ctx->pc = 0x30CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE84u;
    // 0x30ce88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CEB8u, 0x30CE84u, 0x30CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE8Cu;
label_30ce8c:
    // 0x30ce8c: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x30ce8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30ce90: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30CE90u;
    {
        const bool branch_taken_0x30ce90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE90u;
        // 0x30ce94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce90) {
            ctx->pc = 0x30CE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ce40;
        }
    }
    ctx->pc = 0x30CE98u;
    // 0x30ce98: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30ce98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ce9c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30ce9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30cea0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30cea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30cea4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30cea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30cea8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30cea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ceac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ceb0: 0x3e00008  jr          $ra
    ctx->pc = 0x30CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEB0u;
        // 0x30ceb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CEB8u;
}
