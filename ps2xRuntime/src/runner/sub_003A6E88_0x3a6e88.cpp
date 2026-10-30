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

// Function: sub_003A6E88
// Address: 0x3a6e88 - 0x3a6ec8
void sub_003A6E88_0x3a6e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6E88_0x3a6e88");
#endif

    switch (ctx->pc) {
        case 0x3a6eb8u: goto label_3a6eb8;
        default: break;
    }

    ctx->pc = 0x3a6e88u;

    // 0x3a6e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a6e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a6e8c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3a6e8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a6e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a6e94: 0x3c067265  lui         $a2, 0x7265
    ctx->pc = 0x3a6e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29285 << 16));
    // 0x3a6e98: 0x3c075040  lui         $a3, 0x5040
    ctx->pc = 0x3a6e98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20544 << 16));
    // 0x3a6e9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a6e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ea0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3a6ea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a6ea4: 0x34c65aff  ori         $a2, $a2, 0x5AFF
    ctx->pc = 0x3a6ea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23295);
    // 0x3a6ea8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3a6ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a6eac: 0x34e739ff  ori         $a3, $a3, 0x39FF
    ctx->pc = 0x3a6eacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)14847);
    // 0x3a6eb0: 0xc0e9a84  jal         func_3A6A10
    ctx->pc = 0x3A6EB0u;
    SET_GPR_U32(ctx, 31, 0x3A6EB8u);
    ctx->pc = 0x3A6EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6EB0u;
    // 0x3a6eb4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A10u, 0x3A6EB0u, 0x3A6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6EB8u;
label_3a6eb8:
    // 0x3a6eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a6eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6ebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a6ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6EC0u;
        // 0x3a6ec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6EC8u;
}
