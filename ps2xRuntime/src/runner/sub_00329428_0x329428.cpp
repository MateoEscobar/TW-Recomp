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

// Function: sub_00329428
// Address: 0x329428 - 0x329460
void sub_00329428_0x329428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329428_0x329428");
#endif

    switch (ctx->pc) {
        case 0x329444u: goto label_329444;
        default: break;
    }

    ctx->pc = 0x329428u;

    // 0x329428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32942c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x329430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329438: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x329438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32943c: 0xc0ca4f6  jal         func_3293D8
    ctx->pc = 0x32943Cu;
    SET_GPR_U32(ctx, 31, 0x329444u);
    ctx->pc = 0x329440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32943Cu;
    // 0x329440: 0xac86001c  sw          $a2, 0x1C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3293D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3293D8u, 0x32943Cu, 0x329444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329444u;
label_329444:
    // 0x329444: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x329444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x329448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32944c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329450: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x329450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x329454: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x329454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329458: 0x3e00008  jr          $ra
    ctx->pc = 0x329458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329458u;
        // 0x32945c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329460u;
}
