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

// Function: sub_001987B8
// Address: 0x1987b8 - 0x198808
void sub_001987B8_0x1987b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001987B8_0x1987b8");
#endif

    switch (ctx->pc) {
        case 0x1987e0u: goto label_1987e0;
        case 0x1987ecu: goto label_1987ec;
        default: break;
    }

    ctx->pc = 0x1987b8u;

    // 0x1987b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1987b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1987bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1987bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1987c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1987c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1987c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1987c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1987c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1987cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1987ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1987d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1987D0u;
    {
        const bool branch_taken_0x1987d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1987D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987D0u;
        // 0x1987d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987d0) {
            ctx->pc = 0x1987E4u;
            goto label_1987e4;
        }
    }
    ctx->pc = 0x1987D8u;
    // 0x1987d8: 0xc120a1c  jal         func_482870
    ctx->pc = 0x1987D8u;
    SET_GPR_U32(ctx, 31, 0x1987E0u);
    ctx->pc = 0x482870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482870u, 0x1987D8u, 0x1987E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987E0u;
label_1987e0:
    // 0x1987e0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1987e0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1987e4:
    // 0x1987e4: 0xc0661ce  jal         func_198738
    ctx->pc = 0x1987E4u;
    SET_GPR_U32(ctx, 31, 0x1987ECu);
    ctx->pc = 0x1987E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1987E4u;
    // 0x1987e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198738u, 0x1987E4u, 0x1987ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987ECu;
label_1987ec:
    // 0x1987ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1987ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1987f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1987f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1987f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1987f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1987f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1987fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1987FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987FCu;
        // 0x198800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1987FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198804u;
    // 0x198804: 0x0  nop
    ctx->pc = 0x198804u;
    // NOP
    ctx->pc = 0x198808u;
}
