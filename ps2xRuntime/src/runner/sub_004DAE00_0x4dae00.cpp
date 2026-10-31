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

// Function: sub_004DAE00
// Address: 0x4dae00 - 0x4dae60
void sub_004DAE00_0x4dae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAE00_0x4dae00");
#endif

    switch (ctx->pc) {
        case 0x4dae20u: goto label_4dae20;
        case 0x4dae2cu: goto label_4dae2c;
        default: break;
    }

    ctx->pc = 0x4dae00u;

    // 0x4dae00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4dae04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4dae04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4dae08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4dae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4dae0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dae0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dae10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4dae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4dae14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4dae14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dae18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dae1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4dae1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dae20:
    // 0x4dae20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dae20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dae24: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DAE24u;
    SET_GPR_U32(ctx, 31, 0x4DAE2Cu);
    ctx->pc = 0x4DAE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAE24u;
    // 0x4dae28: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DAE24u, 0x4DAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DAE2Cu;
label_4dae2c:
    // 0x4dae2c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4dae2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4dae30: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4dae30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4dae34: 0x2e440010  sltiu       $a0, $s2, 0x10
    ctx->pc = 0x4dae34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4dae38: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4DAE38u;
    {
        const bool branch_taken_0x4dae38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAE38u;
        // 0x4dae3c: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dae38) {
            ctx->pc = 0x4DAE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dae20;
        }
    }
    ctx->pc = 0x4DAE40u;
    // 0x4dae40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4dae40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dae44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4dae44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4dae48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4dae48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dae4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4dae4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dae50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dae54: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAE54u;
        // 0x4dae58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAE5Cu;
    // 0x4dae5c: 0x0  nop
    ctx->pc = 0x4dae5cu;
    // NOP
    ctx->pc = 0x4dae60u;
}
