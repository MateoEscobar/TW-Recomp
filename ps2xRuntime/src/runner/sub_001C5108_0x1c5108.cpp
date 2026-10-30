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

// Function: sub_001C5108
// Address: 0x1c5108 - 0x1c5158
void sub_001C5108_0x1c5108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5108_0x1c5108");
#endif

    switch (ctx->pc) {
        case 0x1c512cu: goto label_1c512c;
        case 0x1c5144u: goto label_1c5144;
        default: break;
    }

    ctx->pc = 0x1c5108u;

    // 0x1c5108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c510c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c5110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5118: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c5118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c511c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C511Cu;
    {
        const bool branch_taken_0x1c511c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c511c) {
            ctx->pc = 0x1C5120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C511Cu;
            // 0x1c5120: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5148u;
            goto label_1c5148;
        }
    }
    ctx->pc = 0x1C5124u;
    // 0x1c5124: 0xc071462  jal         func_1C5188
    ctx->pc = 0x1C5124u;
    SET_GPR_U32(ctx, 31, 0x1C512Cu);
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C5124u, 0x1C512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C512Cu;
label_1c512c:
    // 0x1c512c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c512cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5130: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c5130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c5134: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5134u;
    {
        const bool branch_taken_0x1c5134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5134) {
            ctx->pc = 0x1C5138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5134u;
            // 0x1c5138: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5148u;
            goto label_1c5148;
        }
    }
    ctx->pc = 0x1C513Cu;
    // 0x1c513c: 0xc0713fe  jal         func_1C4FF8
    ctx->pc = 0x1C513Cu;
    SET_GPR_U32(ctx, 31, 0x1C5144u);
    ctx->pc = 0x1C5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C513Cu;
    // 0x1c5140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FF8u, 0x1C513Cu, 0x1C5144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5144u;
label_1c5144:
    // 0x1c5144: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c5144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c5148:
    // 0x1c5148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c514c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C514Cu;
        // 0x1c5150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C514Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5154u;
    // 0x1c5154: 0x0  nop
    ctx->pc = 0x1c5154u;
    // NOP
    ctx->pc = 0x1c5158u;
}
