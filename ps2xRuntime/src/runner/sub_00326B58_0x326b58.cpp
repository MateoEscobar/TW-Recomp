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

// Function: sub_00326B58
// Address: 0x326b58 - 0x326bb0
void sub_00326B58_0x326b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326B58_0x326b58");
#endif

    switch (ctx->pc) {
        case 0x326b74u: goto label_326b74;
        case 0x326b9cu: goto label_326b9c;
        default: break;
    }

    ctx->pc = 0x326b58u;

    // 0x326b58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x326b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x326b5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x326b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x326b60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x326b64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x326b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326b6c: 0xc0c9aaa  jal         func_326AA8
    ctx->pc = 0x326B6Cu;
    SET_GPR_U32(ctx, 31, 0x326B74u);
    ctx->pc = 0x326B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326B6Cu;
    // 0x326b70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326AA8u, 0x326B6Cu, 0x326B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B74u;
label_326b74:
    // 0x326b74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x326b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x326b78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x326b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326b7c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x326B7Cu;
    {
        const bool branch_taken_0x326b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x326b7c) {
            ctx->pc = 0x326B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326B7Cu;
            // 0x326b80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326BA0u;
            goto label_326ba0;
        }
    }
    ctx->pc = 0x326B84u;
    // 0x326b84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x326b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x326b88: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x326B88u;
    {
        const bool branch_taken_0x326b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x326B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B88u;
        // 0x326b8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b88) {
            ctx->pc = 0x326BA0u;
            goto label_326ba0;
        }
    }
    ctx->pc = 0x326B90u;
    // 0x326b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326b94: 0xc0c9a8e  jal         func_326A38
    ctx->pc = 0x326B94u;
    SET_GPR_U32(ctx, 31, 0x326B9Cu);
    ctx->pc = 0x326B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326B94u;
    // 0x326b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326A38u, 0x326B94u, 0x326B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B9Cu;
label_326b9c:
    // 0x326b9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x326b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_326ba0:
    // 0x326ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x326BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BA8u;
        // 0x326bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326BB0u;
}
