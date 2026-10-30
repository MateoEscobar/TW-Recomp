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

// Function: sub_0046CE38
// Address: 0x46ce38 - 0x46cea0
void sub_0046CE38_0x46ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CE38_0x46ce38");
#endif

    switch (ctx->pc) {
        case 0x46ce60u: goto label_46ce60;
        case 0x46ce78u: goto label_46ce78;
        default: break;
    }

    ctx->pc = 0x46ce38u;

    // 0x46ce38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46ce38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46ce3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x46ce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x46ce40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46ce40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46ce44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46ce44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ce48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46ce4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x46ce4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ce50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46ce50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46ce54: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x46ce54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x46ce58: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x46CE58u;
    SET_GPR_U32(ctx, 31, 0x46CE60u);
    ctx->pc = 0x46CE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CE58u;
    // 0x46ce5c: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x46CE58u, 0x46CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CE60u;
label_46ce60:
    // 0x46ce60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x46CE60u;
    {
        const bool branch_taken_0x46ce60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CE60u;
        // 0x46ce64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ce60) {
            ctx->pc = 0x46CE84u;
            goto label_46ce84;
        }
    }
    ctx->pc = 0x46CE68u;
    // 0x46ce68: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x46ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x46ce6c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46ce6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46ce70: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x46CE70u;
    SET_GPR_U32(ctx, 31, 0x46CE78u);
    ctx->pc = 0x46CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CE70u;
    // 0x46ce74: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x46CE70u, 0x46CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CE78u;
label_46ce78:
    // 0x46ce78: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x46ce78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x46ce7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x46CE7Cu;
    {
        const bool branch_taken_0x46ce7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CE7Cu;
        // 0x46ce80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ce7c) {
            ctx->pc = 0x46CE88u;
            goto label_46ce88;
        }
    }
    ctx->pc = 0x46CE84u;
label_46ce84:
    // 0x46ce84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46ce84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ce88:
    // 0x46ce88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46ce88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ce8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46ce8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ce90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46ce90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ce94: 0x3e00008  jr          $ra
    ctx->pc = 0x46CE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CE94u;
        // 0x46ce98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CE9Cu;
    // 0x46ce9c: 0x0  nop
    ctx->pc = 0x46ce9cu;
    // NOP
    ctx->pc = 0x46cea0u;
}
