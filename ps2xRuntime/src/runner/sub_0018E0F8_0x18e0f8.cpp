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

// Function: sub_0018E0F8
// Address: 0x18e0f8 - 0x18e148
void sub_0018E0F8_0x18e0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E0F8_0x18e0f8");
#endif

    switch (ctx->pc) {
        case 0x18e118u: goto label_18e118;
        case 0x18e128u: goto label_18e128;
        default: break;
    }

    ctx->pc = 0x18e0f8u;

    // 0x18e0f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18e0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e0fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18e100: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18e100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18e104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e108: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x18e108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18e10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e110: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e114: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e114u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
label_18e118:
    // 0x18e118: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18e118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e11c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e120: 0xc062f52  jal         func_18BD48
    ctx->pc = 0x18E120u;
    SET_GPR_U32(ctx, 31, 0x18E128u);
    ctx->pc = 0x18E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E120u;
    // 0x18e124: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD48u, 0x18E120u, 0x18E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E128u;
label_18e128:
    // 0x18e128: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x18e128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18e12c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E12Cu;
    {
        const bool branch_taken_0x18e12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e12c) {
            ctx->pc = 0x18E130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E12Cu;
            // 0x18e130: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e118;
        }
    }
    ctx->pc = 0x18E134u;
    // 0x18e134: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18e134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e140: 0x3e00008  jr          $ra
    ctx->pc = 0x18E140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E140u;
        // 0x18e144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E148u;
}
