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

// Function: sub_002BBF30
// Address: 0x2bbf30 - 0x2bbfa0
void sub_002BBF30_0x2bbf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBF30_0x2bbf30");
#endif

    switch (ctx->pc) {
        case 0x2bbf58u: goto label_2bbf58;
        case 0x2bbf68u: goto label_2bbf68;
        case 0x2bbf78u: goto label_2bbf78;
        case 0x2bbf8cu: goto label_2bbf8c;
        default: break;
    }

    ctx->pc = 0x2bbf30u;

    // 0x2bbf30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bbf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bbf34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bbf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bbf38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bbf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bbf3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bbf3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bbf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bbf44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf48: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bbf4c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bbf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bbf50: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BBF50u;
    SET_GPR_U32(ctx, 31, 0x2BBF58u);
    ctx->pc = 0x2BBF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF50u;
    // 0x2bbf54: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BBF50u, 0x2BBF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF58u;
label_2bbf58:
    // 0x2bbf58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bbf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf60: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2BBF60u;
    SET_GPR_U32(ctx, 31, 0x2BBF68u);
    ctx->pc = 0x2BBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF60u;
    // 0x2bbf64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BBF60u, 0x2BBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF68u;
label_2bbf68:
    // 0x2bbf68: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BBF68u;
    {
        const bool branch_taken_0x2bbf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf68) {
            ctx->pc = 0x2BBF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBF68u;
            // 0x2bbf6c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBF84u;
            goto label_2bbf84;
        }
    }
    ctx->pc = 0x2BBF70u;
    // 0x2bbf70: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2BBF70u;
    SET_GPR_U32(ctx, 31, 0x2BBF78u);
    ctx->pc = 0x2BBF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF70u;
    // 0x2bbf74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2BBF70u, 0x2BBF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF78u;
label_2bbf78:
    // 0x2bbf78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBF78u;
    {
        const bool branch_taken_0x2bbf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF78u;
        // 0x2bbf7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf78) {
            ctx->pc = 0x2BBF90u;
            goto label_2bbf90;
        }
    }
    ctx->pc = 0x2BBF80u;
    // 0x2bbf80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bbf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbf84:
    // 0x2bbf84: 0xc08c6d8  jal         func_231B60
    ctx->pc = 0x2BBF84u;
    SET_GPR_U32(ctx, 31, 0x2BBF8Cu);
    ctx->pc = 0x2BBF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF84u;
    // 0x2bbf88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B60u, 0x2BBF84u, 0x2BBF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF8Cu;
label_2bbf8c:
    // 0x2bbf8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bbf8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bbf90:
    // 0x2bbf90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bbf90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbf94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bbf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF98u;
        // 0x2bbf9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBFA0u;
}
