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

// Function: sub_0014C968
// Address: 0x14c968 - 0x14c9c0
void sub_0014C968_0x14c968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C968_0x14c968");
#endif

    switch (ctx->pc) {
        case 0x14c988u: goto label_14c988;
        case 0x14c9a4u: goto label_14c9a4;
        default: break;
    }

    ctx->pc = 0x14c968u;

    // 0x14c968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c96c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14c96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14c970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c974: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14c974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14c97c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x14c97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14c980: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x14C980u;
    SET_GPR_U32(ctx, 31, 0x14C988u);
    ctx->pc = 0x14C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C980u;
    // 0x14c984: 0x8e110040  lw          $s1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x14C980u, 0x14C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C988u;
label_14c988:
    // 0x14c988: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C988u;
    {
        const bool branch_taken_0x14c988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C988u;
        // 0x14c98c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c988) {
            ctx->pc = 0x14C9ACu;
            goto label_14c9ac;
        }
    }
    ctx->pc = 0x14C990u;
    // 0x14c990: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x14c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x14c994: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C994u;
    {
        const bool branch_taken_0x14c994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C994u;
        // 0x14c998: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c994) {
            ctx->pc = 0x14C9ACu;
            goto label_14c9ac;
        }
    }
    ctx->pc = 0x14C99Cu;
    // 0x14c99c: 0xc0541da  jal         func_150768
    ctx->pc = 0x14C99Cu;
    SET_GPR_U32(ctx, 31, 0x14C9A4u);
    ctx->pc = 0x14C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C99Cu;
    // 0x14c9a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150768u, 0x14C99Cu, 0x14C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9A4u;
label_14c9a4:
    // 0x14c9a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14C9A4u;
    {
        const bool branch_taken_0x14c9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9A4u;
        // 0x14c9a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9a4) {
            ctx->pc = 0x14C9B0u;
            goto label_14c9b0;
        }
    }
    ctx->pc = 0x14C9ACu;
label_14c9ac:
    // 0x14c9ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14c9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14c9b0:
    // 0x14c9b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x14C9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9B8u;
        // 0x14c9bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C9C0u;
}
