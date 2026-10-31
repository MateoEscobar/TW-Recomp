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

// Function: sub_0013BA68
// Address: 0x13ba68 - 0x13bad0
void sub_0013BA68_0x13ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BA68_0x13ba68");
#endif

    switch (ctx->pc) {
        case 0x13ba98u: goto label_13ba98;
        case 0x13bab0u: goto label_13bab0;
        default: break;
    }

    ctx->pc = 0x13ba68u;

    // 0x13ba68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13ba68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13ba6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13ba70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13ba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13ba74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13ba74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ba7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ba7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x13ba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x13ba84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13ba84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ba8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13ba8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba90: 0xc048892  jal         func_122248
    ctx->pc = 0x13BA90u;
    SET_GPR_U32(ctx, 31, 0x13BA98u);
    ctx->pc = 0x13BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA90u;
    // 0x13ba94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x13BA90u, 0x13BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA98u;
label_13ba98:
    // 0x13ba98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BA98u;
    {
        const bool branch_taken_0x13ba98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA98u;
        // 0x13ba9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba98) {
            ctx->pc = 0x13BAB0u;
            goto label_13bab0;
        }
    }
    ctx->pc = 0x13BAA0u;
    // 0x13baa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13baa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13baa4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13baa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13baa8: 0xc04843e  jal         func_1210F8
    ctx->pc = 0x13BAA8u;
    SET_GPR_U32(ctx, 31, 0x13BAB0u);
    ctx->pc = 0x13BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BAA8u;
    // 0x13baac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1210F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1210F8u, 0x13BAA8u, 0x13BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAB0u;
label_13bab0:
    // 0x13bab0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13bab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bab4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13bab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13babc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13babcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bac4: 0x3e00008  jr          $ra
    ctx->pc = 0x13BAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAC4u;
        // 0x13bac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BACCu;
    // 0x13bacc: 0x0  nop
    ctx->pc = 0x13baccu;
    // NOP
    ctx->pc = 0x13bad0u;
}
