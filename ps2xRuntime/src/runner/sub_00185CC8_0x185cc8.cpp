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

// Function: sub_00185CC8
// Address: 0x185cc8 - 0x185d20
void sub_00185CC8_0x185cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185CC8_0x185cc8");
#endif

    switch (ctx->pc) {
        case 0x185ce0u: goto label_185ce0;
        case 0x185cf4u: goto label_185cf4;
        default: break;
    }

    ctx->pc = 0x185cc8u;

    // 0x185cc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185ccc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x185cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x185cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185cd4: 0x2490189c  addiu       $s0, $a0, 0x189C
    ctx->pc = 0x185cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 6300));
    // 0x185cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185cdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x185cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185ce0:
    // 0x185ce0: 0x92020040  lbu         $v0, 0x40($s0)
    ctx->pc = 0x185ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x185ce4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x185CE4u;
    {
        const bool branch_taken_0x185ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185ce4) {
            ctx->pc = 0x185CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185CE4u;
            // 0x185ce8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185CF8u;
            goto label_185cf8;
        }
    }
    ctx->pc = 0x185CECu;
    // 0x185cec: 0xc065c42  jal         func_197108
    ctx->pc = 0x185CECu;
    SET_GPR_U32(ctx, 31, 0x185CF4u);
    ctx->pc = 0x185CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185CECu;
    // 0x185cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197108u, 0x185CECu, 0x185CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185CF4u;
label_185cf4:
    // 0x185cf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x185cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_185cf8:
    // 0x185cf8: 0x2e2200ff  sltiu       $v0, $s1, 0xFF
    ctx->pc = 0x185cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x185cfc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x185CFCu;
    {
        const bool branch_taken_0x185cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CFCu;
        // 0x185d00: 0x26100078  addiu       $s0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cfc) {
            ctx->pc = 0x185CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185ce0;
        }
    }
    ctx->pc = 0x185D04u;
    // 0x185d04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x185d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185d14: 0x3e00008  jr          $ra
    ctx->pc = 0x185D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D14u;
        // 0x185d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185D1Cu;
    // 0x185d1c: 0x0  nop
    ctx->pc = 0x185d1cu;
    // NOP
    ctx->pc = 0x185d20u;
}
