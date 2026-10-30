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

// Function: sub_003434A8
// Address: 0x3434a8 - 0x3434e0
void sub_003434A8_0x3434a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003434A8_0x3434a8");
#endif

    switch (ctx->pc) {
        case 0x3434c0u: goto label_3434c0;
        default: break;
    }

    ctx->pc = 0x3434a8u;

    // 0x3434a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3434a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3434ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3434acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3434b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3434b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3434b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3434b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3434b8: 0xc0d0a8c  jal         func_342A30
    ctx->pc = 0x3434B8u;
    SET_GPR_U32(ctx, 31, 0x3434C0u);
    ctx->pc = 0x3434BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434B8u;
    // 0x3434bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A30u, 0x3434B8u, 0x3434C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434C0u;
label_3434c0:
    // 0x3434c0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x3434c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x3434c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3434c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3434c8: 0x246347b0  addiu       $v1, $v1, 0x47B0
    ctx->pc = 0x3434c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18352));
    // 0x3434cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3434ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3434d0: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x3434d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x3434d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3434d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3434d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3434D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3434DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434D8u;
        // 0x3434dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3434D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3434E0u;
}
