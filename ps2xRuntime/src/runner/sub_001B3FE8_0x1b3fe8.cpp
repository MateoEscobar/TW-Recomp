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

// Function: sub_001B3FE8
// Address: 0x1b3fe8 - 0x1b4038
void sub_001B3FE8_0x1b3fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3FE8_0x1b3fe8");
#endif

    switch (ctx->pc) {
        case 0x1b4028u: goto label_1b4028;
        default: break;
    }

    ctx->pc = 0x1b3fe8u;

    // 0x1b3fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3fec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b3fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3ff4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b3ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b3ff8: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b3ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b3ffc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b3ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4000: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b4000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b4004: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1b4004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b4008: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1b4008u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1b400c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b400cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b4010: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1b4010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4014: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b4014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1b4018: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b4018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b401c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1b401cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b4020: 0xc06cba6  jal         func_1B2E98
    ctx->pc = 0x1B4020u;
    SET_GPR_U32(ctx, 31, 0x1B4028u);
    ctx->pc = 0x1B4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4020u;
    // 0x1b4024: 0x34c600ff  ori         $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2E98u, 0x1B4020u, 0x1B4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4028u;
label_1b4028:
    // 0x1b4028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b402c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B402Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B402Cu;
        // 0x1b4030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B402Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4034u;
    // 0x1b4034: 0x0  nop
    ctx->pc = 0x1b4034u;
    // NOP
    ctx->pc = 0x1b4038u;
}
