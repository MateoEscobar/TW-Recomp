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

// Function: sub_00342AA0
// Address: 0x342aa0 - 0x342ae0
void sub_00342AA0_0x342aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342AA0_0x342aa0");
#endif

    switch (ctx->pc) {
        case 0x342ab8u: goto label_342ab8;
        default: break;
    }

    ctx->pc = 0x342aa0u;

    // 0x342aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x342aa4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x342aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x342aa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x342aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x342aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342ab0: 0xc0d0a8c  jal         func_342A30
    ctx->pc = 0x342AB0u;
    SET_GPR_U32(ctx, 31, 0x342AB8u);
    ctx->pc = 0x342AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AB0u;
    // 0x342ab4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A30u, 0x342AB0u, 0x342AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AB8u;
label_342ab8:
    // 0x342ab8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x342ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x342abc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342ac0: 0x24634830  addiu       $v1, $v1, 0x4830
    ctx->pc = 0x342ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18480));
    // 0x342ac4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x342ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x342ac8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x342ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x342acc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x342accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x342AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AD4u;
        // 0x342ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342ADCu;
    // 0x342adc: 0x0  nop
    ctx->pc = 0x342adcu;
    // NOP
    ctx->pc = 0x342ae0u;
}
