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

// Function: sub_00304030
// Address: 0x304030 - 0x304070
void sub_00304030_0x304030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304030_0x304030");
#endif

    switch (ctx->pc) {
        case 0x304048u: goto label_304048;
        case 0x30405cu: goto label_30405c;
        default: break;
    }

    ctx->pc = 0x304030u;

    // 0x304030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x304034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x304038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30403c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30403cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304040: 0xc089f98  jal         func_227E60
    ctx->pc = 0x304040u;
    SET_GPR_U32(ctx, 31, 0x304048u);
    ctx->pc = 0x304044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304040u;
    // 0x304044: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x304040u, 0x304048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304048u;
label_304048:
    // 0x304048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30404c: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30404Cu;
    {
        const bool branch_taken_0x30404c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30404c) {
            ctx->pc = 0x304050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30404Cu;
            // 0x304050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304060u;
            goto label_304060;
        }
    }
    ctx->pc = 0x304054u;
    // 0x304054: 0xc0a40d2  jal         func_290348
    ctx->pc = 0x304054u;
    SET_GPR_U32(ctx, 31, 0x30405Cu);
    ctx->pc = 0x304058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304054u;
    // 0x304058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x304054u, 0x30405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30405Cu;
label_30405c:
    // 0x30405c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x30405cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_304060:
    // 0x304060: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x304060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304068: 0x3e00008  jr          $ra
    ctx->pc = 0x304068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304068u;
        // 0x30406c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304070u;
}
