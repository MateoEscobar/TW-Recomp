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

// Function: sub_001233E8
// Address: 0x1233e8 - 0x123428
void sub_001233E8_0x1233e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001233E8_0x1233e8");
#endif

    switch (ctx->pc) {
        case 0x123408u: goto label_123408;
        case 0x123418u: goto label_123418;
        default: break;
    }

    ctx->pc = 0x1233e8u;

    // 0x1233e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1233e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1233ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1233ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1233f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1233f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1233f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1233f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233f8: 0x24509198  addiu       $s0, $v0, -0x6E68
    ctx->pc = 0x1233f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939032));
    // 0x1233fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1233fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123400: 0xc136b98  jal         func_4DAE60
    ctx->pc = 0x123400u;
    SET_GPR_U32(ctx, 31, 0x123408u);
    ctx->pc = 0x123404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123400u;
    // 0x123404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE60u, 0x123400u, 0x123408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123408u;
label_123408:
    // 0x123408: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123408u;
    {
        const bool branch_taken_0x123408 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123408u;
        // 0x12340c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123408) {
            ctx->pc = 0x123418u;
            goto label_123418;
        }
    }
    ctx->pc = 0x123410u;
    // 0x123410: 0xc136c18  jal         func_4DB060
    ctx->pc = 0x123410u;
    SET_GPR_U32(ctx, 31, 0x123418u);
    ctx->pc = 0x123414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123410u;
    // 0x123414: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB060u, 0x123410u, 0x123418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123418u;
label_123418:
    // 0x123418: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x123418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12341c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12341cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123420: 0x3e00008  jr          $ra
    ctx->pc = 0x123420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123420u;
        // 0x123424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123428u;
}
