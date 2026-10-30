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

// Function: sub_0027BEA8
// Address: 0x27bea8 - 0x27bf08
void sub_0027BEA8_0x27bea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BEA8_0x27bea8");
#endif

    switch (ctx->pc) {
        case 0x27bec8u: goto label_27bec8;
        case 0x27bedcu: goto label_27bedc;
        default: break;
    }

    ctx->pc = 0x27bea8u;

    // 0x27bea8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27bea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27beac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27beacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27beb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27beb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27beb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27beb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27beb8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x27beb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x27bebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bec0: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BEC0u;
    SET_GPR_U32(ctx, 31, 0x27BEC8u);
    ctx->pc = 0x27BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BEC0u;
    // 0x27bec4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BEC0u, 0x27BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BEC8u;
label_27bec8:
    // 0x27bec8: 0x8e030988  lw          $v1, 0x988($s0)
    ctx->pc = 0x27bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2440)));
    // 0x27becc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27BECCu;
    {
        const bool branch_taken_0x27becc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BECCu;
        // 0x27bed0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27becc) {
            ctx->pc = 0x27BEE8u;
            goto label_27bee8;
        }
    }
    ctx->pc = 0x27BED4u;
    // 0x27bed4: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BED4u;
    SET_GPR_U32(ctx, 31, 0x27BEDCu);
    ctx->pc = 0x27BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BED4u;
    // 0x27bed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BED4u, 0x27BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BEDCu;
label_27bedc:
    // 0x27bedc: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x27bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x27bee0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BEE0u;
    {
        const bool branch_taken_0x27bee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEE0u;
        // 0x27bee4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bee0) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27BEE8u;
label_27bee8:
    // 0x27bee8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x27bee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27beec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27beecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bef0:
    // 0x27bef0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27bef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bef4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27bef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bef8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27bef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27befc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27befcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bf00: 0x3e00008  jr          $ra
    ctx->pc = 0x27BF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF00u;
        // 0x27bf04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BF08u;
}
