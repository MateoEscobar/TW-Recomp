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

// Function: sub_004150E0
// Address: 0x4150e0 - 0x415118
void sub_004150E0_0x4150e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004150E0_0x4150e0");
#endif

    switch (ctx->pc) {
        case 0x415104u: goto label_415104;
        default: break;
    }

    ctx->pc = 0x4150e0u;

    // 0x4150e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4150e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4150e4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4150e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4150e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4150e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4150ec: 0x24a59308  addiu       $a1, $a1, -0x6CF8
    ctx->pc = 0x4150ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939400));
    // 0x4150f0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x4150f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x4150f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4150f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4150f8: 0x8e04483c  lw          $a0, 0x483C($s0)
    ctx->pc = 0x4150f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51483Cu));
    // 0x4150fc: 0xc13d836  jal         func_4F60D8
    ctx->pc = 0x4150FCu;
    SET_GPR_U32(ctx, 31, 0x415104u);
    ctx->pc = 0x415100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4150FCu;
    // 0x415100: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F60D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F60D8u, 0x4150FCu, 0x415104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415104u;
label_415104:
    // 0x415104: 0xae00483c  sw          $zero, 0x483C($s0)
    ctx->pc = 0x415104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18492), GPR_U32(ctx, 0));
    // 0x415108: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x415108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41510c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41510cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415110: 0x3e00008  jr          $ra
    ctx->pc = 0x415110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415110u;
        // 0x415114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415118u;
}
