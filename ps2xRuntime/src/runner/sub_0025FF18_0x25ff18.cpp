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

// Function: sub_0025FF18
// Address: 0x25ff18 - 0x25ff50
void sub_0025FF18_0x25ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FF18_0x25ff18");
#endif

    switch (ctx->pc) {
        case 0x25ff2cu: goto label_25ff2c;
        case 0x25ff40u: goto label_25ff40;
        default: break;
    }

    ctx->pc = 0x25ff18u;

    // 0x25ff18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ff18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ff1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25ff20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ff24: 0xc097a52  jal         func_25E948
    ctx->pc = 0x25FF24u;
    SET_GPR_U32(ctx, 31, 0x25FF2Cu);
    ctx->pc = 0x25FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF24u;
    // 0x25ff28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E948u, 0x25FF24u, 0x25FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF2Cu;
label_25ff2c:
    // 0x25ff2c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25ff30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ff34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25ff34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ff38: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FF38u;
    SET_GPR_U32(ctx, 31, 0x25FF40u);
    ctx->pc = 0x25FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF38u;
    // 0x25ff3c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FF38u, 0x25FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF40u;
label_25ff40:
    // 0x25ff40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25ff40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ff44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ff44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ff48: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF48u;
        // 0x25ff4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FF50u;
}
