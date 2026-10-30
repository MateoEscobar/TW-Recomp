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

// Function: sub_0028DB20
// Address: 0x28db20 - 0x28db88
void sub_0028DB20_0x28db20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DB20_0x28db20");
#endif

    switch (ctx->pc) {
        case 0x28db48u: goto label_28db48;
        case 0x28db50u: goto label_28db50;
        default: break;
    }

    ctx->pc = 0x28db20u;

    // 0x28db20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28db20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28db24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28db24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28db28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28db28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28db2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28db2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28db30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28db34: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x28db34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x28db38: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28DB38u;
    {
        const bool branch_taken_0x28db38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB38u;
        // 0x28db3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db38) {
            ctx->pc = 0x28DB6Cu;
            goto label_28db6c;
        }
    }
    ctx->pc = 0x28DB40u;
    // 0x28db40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28db40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db44: 0x0  nop
    ctx->pc = 0x28db44u;
    // NOP
label_28db48:
    // 0x28db48: 0xc0a3698  jal         func_28DA60
    ctx->pc = 0x28DB48u;
    SET_GPR_U32(ctx, 31, 0x28DB50u);
    ctx->pc = 0x28DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB48u;
    // 0x28db4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA60u, 0x28DB48u, 0x28DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB50u;
label_28db50:
    // 0x28db50: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DB50u;
    {
        const bool branch_taken_0x28db50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28db50) {
            ctx->pc = 0x28DB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DB50u;
            // 0x28db54: 0x8202002e  lb          $v0, 0x2E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DB60u;
            goto label_28db60;
        }
    }
    ctx->pc = 0x28DB58u;
    // 0x28db58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28DB58u;
    {
        const bool branch_taken_0x28db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB58u;
        // 0x28db5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db58) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28DB60u;
label_28db60:
    // 0x28db60: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x28db60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28db64: 0x1051fff8  beq         $v0, $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28DB64u;
    {
        const bool branch_taken_0x28db64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x28DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB64u;
        // 0x28db68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db64) {
            ctx->pc = 0x28DB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28db48;
        }
    }
    ctx->pc = 0x28DB6Cu;
label_28db6c:
    // 0x28db6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28db70:
    // 0x28db70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28db70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28db74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28db74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28db78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28db78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28db7c: 0x3e00008  jr          $ra
    ctx->pc = 0x28DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB7Cu;
        // 0x28db80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB84u;
    // 0x28db84: 0x0  nop
    ctx->pc = 0x28db84u;
    // NOP
    ctx->pc = 0x28db88u;
}
