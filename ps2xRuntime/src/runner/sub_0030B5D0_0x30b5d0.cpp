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

// Function: sub_0030B5D0
// Address: 0x30b5d0 - 0x30b638
void sub_0030B5D0_0x30b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B5D0_0x30b5d0");
#endif

    switch (ctx->pc) {
        case 0x30b5e8u: goto label_30b5e8;
        case 0x30b61cu: goto label_30b61c;
        default: break;
    }

    ctx->pc = 0x30b5d0u;

    // 0x30b5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30b5d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30b5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30b5d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b5dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b5e0: 0xc0c2c5a  jal         func_30B168
    ctx->pc = 0x30B5E0u;
    SET_GPR_U32(ctx, 31, 0x30B5E8u);
    ctx->pc = 0x30B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5E0u;
    // 0x30b5e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B168u, 0x30B5E0u, 0x30B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5E8u;
label_30b5e8:
    // 0x30b5e8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30b5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b5ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30b5ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b5f0: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x30B5F0u;
    {
        const bool branch_taken_0x30b5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x30B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5F0u;
        // 0x30b5f4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5f0) {
            ctx->pc = 0x30B624u;
            goto label_30b624;
        }
    }
    ctx->pc = 0x30B5F8u;
    // 0x30b5f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b5fc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B5FCu;
    {
        const bool branch_taken_0x30b5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5FCu;
        // 0x30b600: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5fc) {
            ctx->pc = 0x30B60Cu;
            goto label_30b60c;
        }
    }
    ctx->pc = 0x30B604u;
    // 0x30b604: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30B604u;
    {
        const bool branch_taken_0x30b604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B604u;
        // 0x30b608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b604) {
            ctx->pc = 0x30B624u;
            goto label_30b624;
        }
    }
    ctx->pc = 0x30B60Cu;
label_30b60c:
    // 0x30b60c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B60Cu;
    {
        const bool branch_taken_0x30b60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b60c) {
            ctx->pc = 0x30B610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B60Cu;
            // 0x30b610: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B624u;
            goto label_30b624;
        }
    }
    ctx->pc = 0x30B614u;
    // 0x30b614: 0xc0c2cee  jal         func_30B3B8
    ctx->pc = 0x30B614u;
    SET_GPR_U32(ctx, 31, 0x30B61Cu);
    ctx->pc = 0x30B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B614u;
    // 0x30b618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B3B8u, 0x30B614u, 0x30B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B61Cu;
label_30b61c:
    // 0x30b61c: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x30b61cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x30b620: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30b620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b624:
    // 0x30b624: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30b624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b630: 0x3e00008  jr          $ra
    ctx->pc = 0x30B630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B630u;
        // 0x30b634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B638u;
}
