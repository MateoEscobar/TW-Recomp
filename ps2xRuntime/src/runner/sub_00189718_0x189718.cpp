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

// Function: sub_00189718
// Address: 0x189718 - 0x189750
void sub_00189718_0x189718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189718_0x189718");
#endif

    switch (ctx->pc) {
        case 0x18972cu: goto label_18972c;
        case 0x189734u: goto label_189734;
        case 0x18973cu: goto label_18973c;
        default: break;
    }

    ctx->pc = 0x189718u;

    // 0x189718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18971c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x189720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189724: 0xc06258a  jal         func_189628
    ctx->pc = 0x189724u;
    SET_GPR_U32(ctx, 31, 0x18972Cu);
    ctx->pc = 0x189728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189724u;
    // 0x189728: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x189724u, 0x18972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18972Cu;
label_18972c:
    // 0x18972c: 0xc0625b0  jal         func_1896C0
    ctx->pc = 0x18972Cu;
    SET_GPR_U32(ctx, 31, 0x189734u);
    ctx->pc = 0x189730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18972Cu;
    // 0x189730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1896C0u, 0x18972Cu, 0x189734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189734u;
label_189734:
    // 0x189734: 0xc062ac8  jal         func_18AB20
    ctx->pc = 0x189734u;
    SET_GPR_U32(ctx, 31, 0x18973Cu);
    ctx->pc = 0x189738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189734u;
    // 0x189738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AB20u, 0x189734u, 0x18973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18973Cu;
label_18973c:
    // 0x18973c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18973cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189748: 0x3e00008  jr          $ra
    ctx->pc = 0x189748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189748u;
        // 0x18974c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189750u;
}
