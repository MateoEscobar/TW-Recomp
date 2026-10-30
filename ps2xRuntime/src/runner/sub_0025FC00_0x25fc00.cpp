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

// Function: sub_0025FC00
// Address: 0x25fc00 - 0x25fc30
void sub_0025FC00_0x25fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FC00_0x25fc00");
#endif

    switch (ctx->pc) {
        case 0x25fc18u: goto label_25fc18;
        default: break;
    }

    ctx->pc = 0x25fc00u;

    // 0x25fc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fc04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25fc04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fc0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25fc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25fc10: 0xc0974e4  jal         func_25D390
    ctx->pc = 0x25FC10u;
    SET_GPR_U32(ctx, 31, 0x25FC18u);
    ctx->pc = 0x25FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC10u;
    // 0x25fc14: 0x8c5000d4  lw          $s0, 0xD4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D390u, 0x25FC10u, 0x25FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC18u;
label_25fc18:
    // 0x25fc18: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x25fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x25fc1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fc20: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x25fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x25fc24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25fc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fc28: 0x3e00008  jr          $ra
    ctx->pc = 0x25FC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC28u;
        // 0x25fc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FC30u;
}
