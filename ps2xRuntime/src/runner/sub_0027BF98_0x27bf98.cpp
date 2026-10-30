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

// Function: sub_0027BF98
// Address: 0x27bf98 - 0x27bff0
void sub_0027BF98_0x27bf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BF98_0x27bf98");
#endif

    switch (ctx->pc) {
        case 0x27bfb0u: goto label_27bfb0;
        case 0x27bfc8u: goto label_27bfc8;
        default: break;
    }

    ctx->pc = 0x27bf98u;

    // 0x27bf98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27bf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27bf9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27bf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27bfa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27bfa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bfa8: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BFA8u;
    SET_GPR_U32(ctx, 31, 0x27BFB0u);
    ctx->pc = 0x27BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BFA8u;
    // 0x27bfac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BFA8u, 0x27BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFB0u;
label_27bfb0:
    // 0x27bfb0: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x27bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x27bfb4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27BFB4u;
    {
        const bool branch_taken_0x27bfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFB4u;
        // 0x27bfb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfb4) {
            ctx->pc = 0x27BFD4u;
            goto label_27bfd4;
        }
    }
    ctx->pc = 0x27BFBCu;
    // 0x27bfbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bfc0: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BFC0u;
    SET_GPR_U32(ctx, 31, 0x27BFC8u);
    ctx->pc = 0x27BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BFC0u;
    // 0x27bfc4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BFC0u, 0x27BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFC8u;
label_27bfc8:
    // 0x27bfc8: 0x8e03098c  lw          $v1, 0x98C($s0)
    ctx->pc = 0x27bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2444)));
    // 0x27bfcc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BFCCu;
    {
        const bool branch_taken_0x27bfcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFCCu;
        // 0x27bfd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfcc) {
            ctx->pc = 0x27BFDCu;
            goto label_27bfdc;
        }
    }
    ctx->pc = 0x27BFD4u;
label_27bfd4:
    // 0x27bfd4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27bfd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bfd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27bfd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bfdc:
    // 0x27bfdc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27bfdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bfe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27bfe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bfe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x27BFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFE8u;
        // 0x27bfec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BFF0u;
}
