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

// Function: sub_0030DD28
// Address: 0x30dd28 - 0x30dd90
void sub_0030DD28_0x30dd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DD28_0x30dd28");
#endif

    switch (ctx->pc) {
        case 0x30dd40u: goto label_30dd40;
        case 0x30dd74u: goto label_30dd74;
        default: break;
    }

    ctx->pc = 0x30dd28u;

    // 0x30dd28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30dd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30dd2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30dd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30dd30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30dd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30dd34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30dd38: 0xc0c36be  jal         func_30DAF8
    ctx->pc = 0x30DD38u;
    SET_GPR_U32(ctx, 31, 0x30DD40u);
    ctx->pc = 0x30DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DD38u;
    // 0x30dd3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DAF8u, 0x30DD38u, 0x30DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD40u;
label_30dd40:
    // 0x30dd40: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30dd40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dd44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30dd44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd48: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x30DD48u;
    {
        const bool branch_taken_0x30dd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x30DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD48u;
        // 0x30dd4c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd48) {
            ctx->pc = 0x30DD7Cu;
            goto label_30dd7c;
        }
    }
    ctx->pc = 0x30DD50u;
    // 0x30dd50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30dd54: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DD54u;
    {
        const bool branch_taken_0x30dd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD54u;
        // 0x30dd58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd54) {
            ctx->pc = 0x30DD64u;
            goto label_30dd64;
        }
    }
    ctx->pc = 0x30DD5Cu;
    // 0x30dd5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30DD5Cu;
    {
        const bool branch_taken_0x30dd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD5Cu;
        // 0x30dd60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd5c) {
            ctx->pc = 0x30DD7Cu;
            goto label_30dd7c;
        }
    }
    ctx->pc = 0x30DD64u;
label_30dd64:
    // 0x30dd64: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DD64u;
    {
        const bool branch_taken_0x30dd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dd64) {
            ctx->pc = 0x30DD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DD64u;
            // 0x30dd68: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DD7Cu;
            goto label_30dd7c;
        }
    }
    ctx->pc = 0x30DD6Cu;
    // 0x30dd6c: 0xc0c370a  jal         func_30DC28
    ctx->pc = 0x30DD6Cu;
    SET_GPR_U32(ctx, 31, 0x30DD74u);
    ctx->pc = 0x30DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DD6Cu;
    // 0x30dd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DC28u, 0x30DD6Cu, 0x30DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD74u;
label_30dd74:
    // 0x30dd74: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x30dd74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x30dd78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30dd78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30dd7c:
    // 0x30dd7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30dd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30dd80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30dd80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dd84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30dd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dd88: 0x3e00008  jr          $ra
    ctx->pc = 0x30DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD88u;
        // 0x30dd8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DD90u;
}
