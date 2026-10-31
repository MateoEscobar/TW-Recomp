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

// Function: sub_00472D80
// Address: 0x472d80 - 0x472dc8
void sub_00472D80_0x472d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472D80_0x472d80");
#endif

    switch (ctx->pc) {
        case 0x472dacu: goto label_472dac;
        default: break;
    }

    ctx->pc = 0x472d80u;

    // 0x472d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x472d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x472d84: 0x8f82851c  lw          $v0, -0x7AE4($gp)
    ctx->pc = 0x472d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
    // 0x472d88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x472d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x472d8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x472d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x472d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x472d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x472d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x472d98: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x472d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x472d9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x472D9Cu;
    {
        const bool branch_taken_0x472d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x472DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472D9Cu;
        // 0x472da0: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472d9c) {
            ctx->pc = 0x472DACu;
            goto label_472dac;
        }
    }
    ctx->pc = 0x472DA4u;
    // 0x472da4: 0xc12105a  jal         func_484168
    ctx->pc = 0x472DA4u;
    SET_GPR_U32(ctx, 31, 0x472DACu);
    ctx->pc = 0x472DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472DA4u;
    // 0x472da8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x472DA4u, 0x472DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472DACu;
label_472dac:
    // 0x472dac: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x472dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x472db0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x472db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472db4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x472db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x472db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x472db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x472dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x472DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x472DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472DC0u;
        // 0x472dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472DC8u;
}
