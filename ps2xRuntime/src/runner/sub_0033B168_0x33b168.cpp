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

// Function: sub_0033B168
// Address: 0x33b168 - 0x33b1a0
void sub_0033B168_0x33b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B168_0x33b168");
#endif

    switch (ctx->pc) {
        case 0x33b17cu: goto label_33b17c;
        default: break;
    }

    ctx->pc = 0x33b168u;

    // 0x33b168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b16c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b174: 0xc0cec4a  jal         func_33B128
    ctx->pc = 0x33B174u;
    SET_GPR_U32(ctx, 31, 0x33B17Cu);
    ctx->pc = 0x33B178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B174u;
    // 0x33b178: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B128u, 0x33B174u, 0x33B17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B17Cu;
label_33b17c:
    // 0x33b17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b180: 0x3e00008  jr          $ra
    ctx->pc = 0x33B180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B180u;
        // 0x33b184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B188u;
    // 0x33b188: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x33b188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b18c: 0x0  nop
    ctx->pc = 0x33b18cu;
    // NOP
    // 0x33b190: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33b194: 0x0  nop
    ctx->pc = 0x33b194u;
    // NOP
    // 0x33b198: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33b198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33b19c: 0x0  nop
    ctx->pc = 0x33b19cu;
    // NOP
    ctx->pc = 0x33b1a0u;
}
