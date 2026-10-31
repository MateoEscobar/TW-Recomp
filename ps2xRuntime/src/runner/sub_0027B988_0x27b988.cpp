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

// Function: sub_0027B988
// Address: 0x27b988 - 0x27b9e8
void sub_0027B988_0x27b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B988_0x27b988");
#endif

    switch (ctx->pc) {
        case 0x27b998u: goto label_27b998;
        default: break;
    }

    ctx->pc = 0x27b988u;

    // 0x27b988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b98c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b990: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27B990u;
    SET_GPR_U32(ctx, 31, 0x27B998u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27B990u, 0x27B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B998u;
label_27b998:
    // 0x27b998: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27b998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b99c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x27b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x27b9a0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27B9A0u;
    {
        const bool branch_taken_0x27b9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9A0u;
        // 0x27b9a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9a0) {
            ctx->pc = 0x27B9D4u;
            goto label_27b9d4;
        }
    }
    ctx->pc = 0x27B9A8u;
    // 0x27b9a8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x27b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x27b9ac: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27B9ACu;
    {
        const bool branch_taken_0x27b9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9ACu;
        // 0x27b9b0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9ac) {
            ctx->pc = 0x27B9D4u;
            goto label_27b9d4;
        }
    }
    ctx->pc = 0x27B9B4u;
    // 0x27b9b4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27B9B4u;
    {
        const bool branch_taken_0x27b9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9B4u;
        // 0x27b9b8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9b4) {
            ctx->pc = 0x27B9D4u;
            goto label_27b9d4;
        }
    }
    ctx->pc = 0x27B9BCu;
    // 0x27b9bc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B9BCu;
    {
        const bool branch_taken_0x27b9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9BCu;
        // 0x27b9c0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9bc) {
            ctx->pc = 0x27B9D4u;
            goto label_27b9d4;
        }
    }
    ctx->pc = 0x27B9C4u;
    // 0x27b9c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B9C4u;
    {
        const bool branch_taken_0x27b9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9C4u;
        // 0x27b9c8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9c4) {
            ctx->pc = 0x27B9D4u;
            goto label_27b9d4;
        }
    }
    ctx->pc = 0x27B9CCu;
    // 0x27b9cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B9CCu;
    {
        const bool branch_taken_0x27b9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9CCu;
        // 0x27b9d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9cc) {
            ctx->pc = 0x27B9DCu;
            goto label_27b9dc;
        }
    }
    ctx->pc = 0x27B9D4u;
label_27b9d4:
    // 0x27b9d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27b9dc:
    // 0x27b9dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27b9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x27B9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9E0u;
        // 0x27b9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B9E8u;
}
