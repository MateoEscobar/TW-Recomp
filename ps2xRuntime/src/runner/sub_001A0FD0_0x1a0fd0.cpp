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

// Function: sub_001A0FD0
// Address: 0x1a0fd0 - 0x1a1008
void sub_001A0FD0_0x1a0fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0FD0_0x1a0fd0");
#endif

    switch (ctx->pc) {
        case 0x1a0ff4u: goto label_1a0ff4;
        default: break;
    }

    ctx->pc = 0x1a0fd0u;

    // 0x1a0fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0fd4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a0fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1a0fd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a0fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a0fdc: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x1a0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x1a0fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fe8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1a0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1a0fec: 0xc068402  jal         func_1A1008
    ctx->pc = 0x1A0FECu;
    SET_GPR_U32(ctx, 31, 0x1A0FF4u);
    ctx->pc = 0x1A0FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FECu;
    // 0x1a0ff0: 0x312900ff  andi        $t1, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1008u, 0x1A0FECu, 0x1A0FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FF4u;
label_1a0ff4:
    // 0x1a0ff4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a0ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ffc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1000: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1000u;
        // 0x1a1004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1008u;
}
