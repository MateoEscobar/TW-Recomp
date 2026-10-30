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

// Function: sub_004DAE90
// Address: 0x4dae90 - 0x4daef0
void sub_004DAE90_0x4dae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAE90_0x4dae90");
#endif

    switch (ctx->pc) {
        case 0x4daeb0u: goto label_4daeb0;
        case 0x4daebcu: goto label_4daebc;
        default: break;
    }

    ctx->pc = 0x4dae90u;

    // 0x4dae90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4dae94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4dae94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4dae98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4dae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4dae9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dae9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4daea0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4daea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4daea4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4daea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4daea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4daea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4daeac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4daeacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4daeb0:
    // 0x4daeb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4daeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4daeb4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DAEB4u;
    SET_GPR_U32(ctx, 31, 0x4DAEBCu);
    ctx->pc = 0x4DAEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAEB4u;
    // 0x4daeb8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DAEB4u, 0x4DAEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DAEBCu;
label_4daebc:
    // 0x4daebc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4daebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4daec0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4daec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4daec4: 0x2e440004  sltiu       $a0, $s2, 0x4
    ctx->pc = 0x4daec4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4daec8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4DAEC8u;
    {
        const bool branch_taken_0x4daec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAEC8u;
        // 0x4daecc: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4daec8) {
            ctx->pc = 0x4DAEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4daeb0;
        }
    }
    ctx->pc = 0x4DAED0u;
    // 0x4daed0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4daed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4daed4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4daed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4daed8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4daed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4daedc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4daedcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4daee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4daee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4daee4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAEE4u;
        // 0x4daee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAEECu;
    // 0x4daeec: 0x0  nop
    ctx->pc = 0x4daeecu;
    // NOP
    ctx->pc = 0x4daef0u;
}
