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

// Function: sub_0046AAC8
// Address: 0x46aac8 - 0x46aaf8
void sub_0046AAC8_0x46aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AAC8_0x46aac8");
#endif

    switch (ctx->pc) {
        case 0x46aadcu: goto label_46aadc;
        default: break;
    }

    ctx->pc = 0x46aac8u;

    // 0x46aac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46aac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46aacc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46aaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46aad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46aad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46aad4: 0xc11a8fc  jal         func_46A3F0
    ctx->pc = 0x46AAD4u;
    SET_GPR_U32(ctx, 31, 0x46AADCu);
    ctx->pc = 0x46AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46AAD4u;
    // 0x46aad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A3F0u, 0x46AAD4u, 0x46AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AADCu;
label_46aadc:
    // 0x46aadc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46aadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46aae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46aae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46aae4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46aae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46aae8: 0x3e00008  jr          $ra
    ctx->pc = 0x46AAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AAE8u;
        // 0x46aaec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AAF0u;
    // 0x46aaf0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46aaf4: 0x0  nop
    ctx->pc = 0x46aaf4u;
    // NOP
    ctx->pc = 0x46aaf8u;
}
