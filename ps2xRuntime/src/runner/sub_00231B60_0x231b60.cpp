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

// Function: sub_00231B60
// Address: 0x231b60 - 0x231bd8
void sub_00231B60_0x231b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231B60_0x231b60");
#endif

    switch (ctx->pc) {
        case 0x231b74u: goto label_231b74;
        case 0x231b84u: goto label_231b84;
        case 0x231bb8u: goto label_231bb8;
        case 0x231bc8u: goto label_231bc8;
        default: break;
    }

    ctx->pc = 0x231b60u;

    // 0x231b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x231b64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x231b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x231b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231b6c: 0xc08a148  jal         func_228520
    ctx->pc = 0x231B6Cu;
    SET_GPR_U32(ctx, 31, 0x231B74u);
    ctx->pc = 0x231B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B6Cu;
    // 0x231b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228520u, 0x231B6Cu, 0x231B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B74u;
label_231b74:
    // 0x231b74: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x231B74u;
    {
        const bool branch_taken_0x231b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b74) {
            ctx->pc = 0x231B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231B74u;
            // 0x231b78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231BCCu;
            goto label_231bcc;
        }
    }
    ctx->pc = 0x231B7Cu;
    // 0x231b7c: 0xc088e88  jal         func_223A20
    ctx->pc = 0x231B7Cu;
    SET_GPR_U32(ctx, 31, 0x231B84u);
    ctx->pc = 0x231B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B7Cu;
    // 0x231b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x231B7Cu, 0x231B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B84u;
label_231b84:
    // 0x231b84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x231B84u;
    {
        const bool branch_taken_0x231b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b84) {
            ctx->pc = 0x231BC0u;
            goto label_231bc0;
        }
    }
    ctx->pc = 0x231B8Cu;
    // 0x231b8c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x231b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x231b90: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x231b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x231b94: 0x2862025b  slti        $v0, $v1, 0x25B
    ctx->pc = 0x231b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)603) ? 1 : 0);
    // 0x231b98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x231b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x231b9c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x231B9Cu;
    {
        const bool branch_taken_0x231b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B9Cu;
        // 0x231ba0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b9c) {
            ctx->pc = 0x231BA8u;
            goto label_231ba8;
        }
    }
    ctx->pc = 0x231BA4u;
    // 0x231ba4: 0x2864025d  slti        $a0, $v1, 0x25D
    ctx->pc = 0x231ba4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)605) ? 1 : 0);
label_231ba8:
    // 0x231ba8: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x231BA8u;
    {
        const bool branch_taken_0x231ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x231ba8) {
            ctx->pc = 0x231BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231BA8u;
            // 0x231bac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231BCCu;
            goto label_231bcc;
        }
    }
    ctx->pc = 0x231BB0u;
    // 0x231bb0: 0xc097ddc  jal         func_25F770
    ctx->pc = 0x231BB0u;
    SET_GPR_U32(ctx, 31, 0x231BB8u);
    ctx->pc = 0x231BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BB0u;
    // 0x231bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x231BB0u, 0x231BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BB8u;
label_231bb8:
    // 0x231bb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231BB8u;
    {
        const bool branch_taken_0x231bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BB8u;
        // 0x231bbc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231bb8) {
            ctx->pc = 0x231BCCu;
            goto label_231bcc;
        }
    }
    ctx->pc = 0x231BC0u;
label_231bc0:
    // 0x231bc0: 0xc08a588  jal         func_229620
    ctx->pc = 0x231BC0u;
    SET_GPR_U32(ctx, 31, 0x231BC8u);
    ctx->pc = 0x231BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BC0u;
    // 0x231bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229620u, 0x231BC0u, 0x231BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BC8u;
label_231bc8:
    // 0x231bc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x231bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_231bcc:
    // 0x231bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x231BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BD0u;
        // 0x231bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231BD8u;
}
