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

// Function: sub_002C5AB0
// Address: 0x2c5ab0 - 0x2c5af8
void sub_002C5AB0_0x2c5ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5AB0_0x2c5ab0");
#endif

    switch (ctx->pc) {
        case 0x2c5ac0u: goto label_2c5ac0;
        default: break;
    }

    ctx->pc = 0x2c5ab0u;

    // 0x2c5ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c5ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c5ab8: 0xc08a200  jal         func_228800
    ctx->pc = 0x2C5AB8u;
    SET_GPR_U32(ctx, 31, 0x2C5AC0u);
    ctx->pc = 0x2C5ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5AB8u;
    // 0x2c5abc: 0x8ca400cc  lw          $a0, 0xCC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2C5AB8u, 0x2C5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5AC0u;
label_2c5ac0:
    // 0x2c5ac0: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2c5ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x2c5ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5ac8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5AC8u;
    {
        const bool branch_taken_0x2c5ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AC8u;
        // 0x2c5acc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ac8) {
            ctx->pc = 0x2C5AE4u;
            goto label_2c5ae4;
        }
    }
    ctx->pc = 0x2C5AD0u;
    // 0x2c5ad0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c5ad4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5AD4u;
    {
        const bool branch_taken_0x2c5ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AD4u;
        // 0x2c5ad8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ad4) {
            ctx->pc = 0x2C5AE4u;
            goto label_2c5ae4;
        }
    }
    ctx->pc = 0x2C5ADCu;
    // 0x2c5adc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5ADCu;
    {
        const bool branch_taken_0x2c5adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5ADCu;
        // 0x2c5ae0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5adc) {
            ctx->pc = 0x2C5AECu;
            goto label_2c5aec;
        }
    }
    ctx->pc = 0x2C5AE4u;
label_2c5ae4:
    // 0x2c5ae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5aec:
    // 0x2c5aec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c5aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5af0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AF0u;
        // 0x2c5af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5AF8u;
}
