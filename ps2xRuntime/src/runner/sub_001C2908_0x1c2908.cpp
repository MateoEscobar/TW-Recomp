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

// Function: sub_001C2908
// Address: 0x1c2908 - 0x1c2940
void sub_001C2908_0x1c2908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2908_0x1c2908");
#endif

    switch (ctx->pc) {
        case 0x1c291cu: goto label_1c291c;
        default: break;
    }

    ctx->pc = 0x1c2908u;

    // 0x1c2908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c290c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c2910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2914: 0xc070734  jal         func_1C1CD0
    ctx->pc = 0x1C2914u;
    SET_GPR_U32(ctx, 31, 0x1C291Cu);
    ctx->pc = 0x1C2918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2914u;
    // 0x1c2918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CD0u, 0x1C2914u, 0x1C291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C291Cu;
label_1c291c:
    // 0x1c291c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c291cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c2920: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c2920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2924: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c2924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c2928: 0xae0003f8  sw          $zero, 0x3F8($s0)
    ctx->pc = 0x1c2928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 0));
    // 0x1c292c: 0xae0303f4  sw          $v1, 0x3F4($s0)
    ctx->pc = 0x1c292cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1012), GPR_U32(ctx, 3));
    // 0x1c2930: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2938: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2938u;
        // 0x1c293c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2940u;
}
