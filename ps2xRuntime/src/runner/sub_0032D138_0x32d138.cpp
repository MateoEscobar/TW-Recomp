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

// Function: sub_0032D138
// Address: 0x32d138 - 0x32d180
void sub_0032D138_0x32d138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D138_0x32d138");
#endif

    switch (ctx->pc) {
        case 0x32d158u: goto label_32d158;
        case 0x32d168u: goto label_32d168;
        default: break;
    }

    ctx->pc = 0x32d138u;

    // 0x32d138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d13c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32d13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32d140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32d144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d14c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x32d14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d150: 0xc0cbf6a  jal         func_32FDA8
    ctx->pc = 0x32D150u;
    SET_GPR_U32(ctx, 31, 0x32D158u);
    ctx->pc = 0x32D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D150u;
    // 0x32d154: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDA8u, 0x32D150u, 0x32D158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D158u;
label_32d158:
    // 0x32d158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d15c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32d15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d160: 0xc0cb3fe  jal         func_32CFF8
    ctx->pc = 0x32D160u;
    SET_GPR_U32(ctx, 31, 0x32D168u);
    ctx->pc = 0x32D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D160u;
    // 0x32d164: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFF8u, 0x32D160u, 0x32D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D168u;
label_32d168:
    // 0x32d168: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32d168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d16c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32d16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d174: 0x3e00008  jr          $ra
    ctx->pc = 0x32D174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D174u;
        // 0x32d178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D17Cu;
    // 0x32d17c: 0x0  nop
    ctx->pc = 0x32d17cu;
    // NOP
    ctx->pc = 0x32d180u;
}
