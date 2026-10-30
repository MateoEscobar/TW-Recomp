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

// Function: sub_00317218
// Address: 0x317218 - 0x317250
void sub_00317218_0x317218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317218_0x317218");
#endif

    switch (ctx->pc) {
        case 0x31722cu: goto label_31722c;
        default: break;
    }

    ctx->pc = 0x317218u;

    // 0x317218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31721c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x317224: 0xc0c5c42  jal         func_317108
    ctx->pc = 0x317224u;
    SET_GPR_U32(ctx, 31, 0x31722Cu);
    ctx->pc = 0x317228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317224u;
    // 0x317228: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317108u, 0x317224u, 0x31722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31722Cu;
label_31722c:
    // 0x31722c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31722cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x317230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317234: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x317234u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x317238: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x317238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31723c: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x31723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x317240: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x317240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x317244: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317248: 0x3e00008  jr          $ra
    ctx->pc = 0x317248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317248u;
        // 0x31724c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317250u;
}
