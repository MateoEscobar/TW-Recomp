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

// Function: sub_00217EC8
// Address: 0x217ec8 - 0x217f08
void sub_00217EC8_0x217ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217EC8_0x217ec8");
#endif

    switch (ctx->pc) {
        case 0x217ee0u: goto label_217ee0;
        case 0x217eecu: goto label_217eec;
        default: break;
    }

    ctx->pc = 0x217ec8u;

    // 0x217ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217ecc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x217eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x217ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217ed4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ed8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x217ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x217edc: 0x0  nop
    ctx->pc = 0x217edcu;
    // NOP
label_217ee0:
    // 0x217ee0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x217ee0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x217ee4: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x217EE4u;
    SET_GPR_U32(ctx, 31, 0x217EECu);
    ctx->pc = 0x217EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EE4u;
    // 0x217ee8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x217EE4u, 0x217EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EECu;
label_217eec:
    // 0x217eec: 0x2e03003c  sltiu       $v1, $s0, 0x3C
    ctx->pc = 0x217eecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x217ef0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x217EF0u;
    {
        const bool branch_taken_0x217ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x217EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EF0u;
        // 0x217ef4: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ef0) {
            ctx->pc = 0x217EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217ee0;
        }
    }
    ctx->pc = 0x217EF8u;
    // 0x217ef8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x217ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217f00: 0x3e00008  jr          $ra
    ctx->pc = 0x217F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F00u;
        // 0x217f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217F08u;
}
