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

// Function: sub_00414F08
// Address: 0x414f08 - 0x414f40
void sub_00414F08_0x414f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414F08_0x414f08");
#endif

    switch (ctx->pc) {
        case 0x414f1cu: goto label_414f1c;
        default: break;
    }

    ctx->pc = 0x414f08u;

    // 0x414f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x414f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x414f0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x414f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x414f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x414f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x414f14: 0xc1049f0  jal         func_4127C0
    ctx->pc = 0x414F14u;
    SET_GPR_U32(ctx, 31, 0x414F1Cu);
    ctx->pc = 0x414F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414F14u;
    // 0x414f18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4127C0u, 0x414F14u, 0x414F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414F1Cu;
label_414f1c:
    // 0x414f1c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x414f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x414f20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x414f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414f24: 0x24635d88  addiu       $v1, $v1, 0x5D88
    ctx->pc = 0x414f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23944));
    // 0x414f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414f2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x414f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x414f30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x414f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414f34: 0x3e00008  jr          $ra
    ctx->pc = 0x414F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414F34u;
        // 0x414f38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414F3Cu;
    // 0x414f3c: 0x0  nop
    ctx->pc = 0x414f3cu;
    // NOP
    ctx->pc = 0x414f40u;
}
