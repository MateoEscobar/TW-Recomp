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

// Function: sub_00185AE0
// Address: 0x185ae0 - 0x185b38
void sub_00185AE0_0x185ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185AE0_0x185ae0");
#endif

    switch (ctx->pc) {
        case 0x185af8u: goto label_185af8;
        case 0x185b0cu: goto label_185b0c;
        default: break;
    }

    ctx->pc = 0x185ae0u;

    // 0x185ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185ae4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x185ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x185ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185aec: 0x24901eb4  addiu       $s0, $a0, 0x1EB4
    ctx->pc = 0x185aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 7860));
    // 0x185af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185af4: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x185af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_185af8:
    // 0x185af8: 0x92020040  lbu         $v0, 0x40($s0)
    ctx->pc = 0x185af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x185afc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x185AFCu;
    {
        const bool branch_taken_0x185afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185afc) {
            ctx->pc = 0x185B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185AFCu;
            // 0x185b00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185B10u;
            goto label_185b10;
        }
    }
    ctx->pc = 0x185B04u;
    // 0x185b04: 0xc060a94  jal         func_182A50
    ctx->pc = 0x185B04u;
    SET_GPR_U32(ctx, 31, 0x185B0Cu);
    ctx->pc = 0x185B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B04u;
    // 0x185b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A50u, 0x185B04u, 0x185B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B0Cu;
label_185b0c:
    // 0x185b0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x185b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_185b10:
    // 0x185b10: 0x2e2200ff  sltiu       $v0, $s1, 0xFF
    ctx->pc = 0x185b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x185b14: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x185B14u;
    {
        const bool branch_taken_0x185b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B14u;
        // 0x185b18: 0x26100078  addiu       $s0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b14) {
            ctx->pc = 0x185AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185af8;
        }
    }
    ctx->pc = 0x185B1Cu;
    // 0x185b1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x185b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x185B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B2Cu;
        // 0x185b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185B34u;
    // 0x185b34: 0x0  nop
    ctx->pc = 0x185b34u;
    // NOP
    ctx->pc = 0x185b38u;
}
