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

// Function: sub_0015C470
// Address: 0x15c470 - 0x15c4b0
void sub_0015C470_0x15c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C470_0x15c470");
#endif

    switch (ctx->pc) {
        case 0x15c484u: goto label_15c484;
        default: break;
    }

    ctx->pc = 0x15c470u;

    // 0x15c470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15c474: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15c474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15c478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15c47c: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15C47Cu;
    SET_GPR_U32(ctx, 31, 0x15C484u);
    ctx->pc = 0x15C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C47Cu;
    // 0x15c480: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15C47Cu, 0x15C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C484u;
label_15c484:
    // 0x15c484: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c488: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15c488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15c48c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x15c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x15c490: 0x246385c8  addiu       $v1, $v1, -0x7A38
    ctx->pc = 0x15c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936008));
    // 0x15c494: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x15c494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x15c498: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15c498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c49c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x15c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x15c4a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15c4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x15C4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4A8u;
        // 0x15c4ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C4B0u;
}
