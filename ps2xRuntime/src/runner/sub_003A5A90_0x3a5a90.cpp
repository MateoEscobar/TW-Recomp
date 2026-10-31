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

// Function: sub_003A5A90
// Address: 0x3a5a90 - 0x3a5ab8
void sub_003A5A90_0x3a5a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5A90_0x3a5a90");
#endif

    switch (ctx->pc) {
        case 0x3a5aacu: goto label_3a5aac;
        default: break;
    }

    ctx->pc = 0x3a5a90u;

    // 0x3a5a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a5a94: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3a5a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a5a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a5a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a5a9c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3a5a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5aa0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a5aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5aa4: 0xc08662e  jal         func_2198B8
    ctx->pc = 0x3A5AA4u;
    SET_GPR_U32(ctx, 31, 0x3A5AACu);
    ctx->pc = 0x3A5AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5AA4u;
    // 0x3a5aa8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2198B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2198B8u, 0x3A5AA4u, 0x3A5AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5AACu;
label_3a5aac:
    // 0x3a5aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a5aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5AB0u;
        // 0x3a5ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5AB8u;
}
