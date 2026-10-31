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

// Function: sub_0030DCE8
// Address: 0x30dce8 - 0x30dd20
void sub_0030DCE8_0x30dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DCE8_0x30dce8");
#endif

    switch (ctx->pc) {
        case 0x30dcfcu: goto label_30dcfc;
        case 0x30dd04u: goto label_30dd04;
        case 0x30dd0cu: goto label_30dd0c;
        default: break;
    }

    ctx->pc = 0x30dce8u;

    // 0x30dce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30dcec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30dcf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30dcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30dcf4: 0xc0c3608  jal         func_30D820
    ctx->pc = 0x30DCF4u;
    SET_GPR_U32(ctx, 31, 0x30DCFCu);
    ctx->pc = 0x30DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DCF4u;
    // 0x30dcf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D820u, 0x30DCF4u, 0x30DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DCFCu;
label_30dcfc:
    // 0x30dcfc: 0xc05a53a  jal         func_1694E8
    ctx->pc = 0x30DCFCu;
    SET_GPR_U32(ctx, 31, 0x30DD04u);
    ctx->pc = 0x30DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DCFCu;
    // 0x30dd00: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694E8u, 0x30DCFCu, 0x30DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD04u;
label_30dd04:
    // 0x30dd04: 0xc05a55c  jal         func_169570
    ctx->pc = 0x30DD04u;
    SET_GPR_U32(ctx, 31, 0x30DD0Cu);
    ctx->pc = 0x30DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DD04u;
    // 0x30dd08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169570u, 0x30DD04u, 0x30DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD0Cu;
label_30dd0c:
    // 0x30dd0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30dd0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30dd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dd14: 0x3e00008  jr          $ra
    ctx->pc = 0x30DD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD14u;
        // 0x30dd18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DD1Cu;
    // 0x30dd1c: 0x0  nop
    ctx->pc = 0x30dd1cu;
    // NOP
    ctx->pc = 0x30dd20u;
}
