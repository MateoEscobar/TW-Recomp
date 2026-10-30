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

// Function: sub_00113560
// Address: 0x113560 - 0x113590
void sub_00113560_0x113560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113560_0x113560");
#endif

    switch (ctx->pc) {
        case 0x113580u: goto label_113580;
        default: break;
    }

    ctx->pc = 0x113560u;

    // 0x113560: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x113560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113564: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x113564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x113568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11356c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x11356cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x113570: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x113570u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113578: 0xc04413a  jal         func_1104E8
    ctx->pc = 0x113578u;
    SET_GPR_U32(ctx, 31, 0x113580u);
    ctx->pc = 0x11357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113578u;
    // 0x11357c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E8u, 0x113578u, 0x113580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113580u;
label_113580:
    // 0x113580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113584: 0x3e00008  jr          $ra
    ctx->pc = 0x113584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113584u;
        // 0x113588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11358Cu;
    // 0x11358c: 0x0  nop
    ctx->pc = 0x11358cu;
    // NOP
    ctx->pc = 0x113590u;
}
