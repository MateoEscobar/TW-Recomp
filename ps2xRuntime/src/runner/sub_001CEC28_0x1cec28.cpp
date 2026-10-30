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

// Function: sub_001CEC28
// Address: 0x1cec28 - 0x1cec78
void sub_001CEC28_0x1cec28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEC28_0x1cec28");
#endif

    switch (ctx->pc) {
        case 0x1cec54u: goto label_1cec54;
        case 0x1cec60u: goto label_1cec60;
        default: break;
    }

    ctx->pc = 0x1cec28u;

    // 0x1cec28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cec28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cec2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cec30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cec34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cec34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec38: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CEC38u;
    {
        const bool branch_taken_0x1cec38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC38u;
        // 0x1cec3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec38) {
            ctx->pc = 0x1CEC60u;
            goto label_1cec60;
        }
    }
    ctx->pc = 0x1CEC40u;
    // 0x1cec40: 0x26300230  addiu       $s0, $s1, 0x230
    ctx->pc = 0x1cec40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x1cec44: 0xa22002c5  sb          $zero, 0x2C5($s1)
    ctx->pc = 0x1cec44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 709), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cec48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec4c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1CEC4Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC54u);
    ctx->pc = 0x1CEC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC4Cu;
    // 0x1cec50: 0x24060095  addiu       $a2, $zero, 0x95 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1CEC4Cu, 0x1CEC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC54u;
label_1cec54:
    // 0x1cec54: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1cec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1cec58: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1CEC58u;
    SET_GPR_U32(ctx, 31, 0x1CEC60u);
    ctx->pc = 0x1CEC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC58u;
    // 0x1cec5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1CEC58u, 0x1CEC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC60u;
label_1cec60:
    // 0x1cec60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cec60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cec64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cec64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cec68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cec6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC6Cu;
        // 0x1cec70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEC74u;
    // 0x1cec74: 0x0  nop
    ctx->pc = 0x1cec74u;
    // NOP
    ctx->pc = 0x1cec78u;
}
