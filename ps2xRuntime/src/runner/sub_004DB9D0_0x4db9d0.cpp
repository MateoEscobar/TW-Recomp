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

// Function: sub_004DB9D0
// Address: 0x4db9d0 - 0x4dba30
void sub_004DB9D0_0x4db9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB9D0_0x4db9d0");
#endif

    switch (ctx->pc) {
        case 0x4db9f0u: goto label_4db9f0;
        case 0x4db9fcu: goto label_4db9fc;
        default: break;
    }

    ctx->pc = 0x4db9d0u;

    // 0x4db9d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4db9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4db9d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4db9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4db9d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4db9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4db9dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db9e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4db9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4db9e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4db9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db9e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db9ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4db9ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db9f0:
    // 0x4db9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db9f4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DB9F4u;
    SET_GPR_U32(ctx, 31, 0x4DB9FCu);
    ctx->pc = 0x4DB9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB9F4u;
    // 0x4db9f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DB9F4u, 0x4DB9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB9FCu;
label_4db9fc:
    // 0x4db9fc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4db9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4dba00: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4dba00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4dba04: 0x2e440002  sltiu       $a0, $s2, 0x2
    ctx->pc = 0x4dba04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4dba08: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4DBA08u;
    {
        const bool branch_taken_0x4dba08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBA08u;
        // 0x4dba0c: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dba08) {
            ctx->pc = 0x4DB9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4db9f0;
        }
    }
    ctx->pc = 0x4DBA10u;
    // 0x4dba10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4dba10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dba14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4dba14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4dba18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4dba18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dba1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4dba1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dba20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dba20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dba24: 0x3e00008  jr          $ra
    ctx->pc = 0x4DBA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBA24u;
        // 0x4dba28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DBA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DBA2Cu;
    // 0x4dba2c: 0x0  nop
    ctx->pc = 0x4dba2cu;
    // NOP
    ctx->pc = 0x4dba30u;
}
