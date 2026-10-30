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

// Function: sub_004ED7B8
// Address: 0x4ed7b8 - 0x4ed7f0
void sub_004ED7B8_0x4ed7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED7B8_0x4ed7b8");
#endif

    switch (ctx->pc) {
        case 0x4ed7c8u: goto label_4ed7c8;
        default: break;
    }

    ctx->pc = 0x4ed7b8u;

    // 0x4ed7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ed7bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed7c0: 0xc0e130e  jal         func_384C38
    ctx->pc = 0x4ED7C0u;
    SET_GPR_U32(ctx, 31, 0x4ED7C8u);
    ctx->pc = 0x4ED7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED7C0u;
    // 0x4ed7c4: 0x248400e8  addiu       $a0, $a0, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C38u, 0x4ED7C0u, 0x4ED7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED7C8u;
label_4ed7c8:
    // 0x4ed7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED7CCu;
        // 0x4ed7d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED7D4u;
    // 0x4ed7d4: 0x0  nop
    ctx->pc = 0x4ed7d4u;
    // NOP
    // 0x4ed7d8: 0x0  nop
    ctx->pc = 0x4ed7d8u;
    // NOP
    // 0x4ed7dc: 0x0  nop
    ctx->pc = 0x4ed7dcu;
    // NOP
    // 0x4ed7e0: 0x0  nop
    ctx->pc = 0x4ed7e0u;
    // NOP
    // 0x4ed7e4: 0x0  nop
    ctx->pc = 0x4ed7e4u;
    // NOP
    // 0x4ed7e8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x4ed7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x4ed7ec: 0x0  nop
    ctx->pc = 0x4ed7ecu;
    // NOP
    ctx->pc = 0x4ed7f0u;
}
