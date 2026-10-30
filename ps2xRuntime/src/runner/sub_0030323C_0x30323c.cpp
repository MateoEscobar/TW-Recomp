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

// Function: sub_0030323C
// Address: 0x30323c - 0x303260
void sub_0030323C_0x30323c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030323C_0x30323c");
#endif

    switch (ctx->pc) {
        case 0x303248u: goto label_303248;
        case 0x30324cu: goto label_30324c;
        default: break;
    }

    ctx->pc = 0x30323cu;

    // 0x30323c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x30323cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303240: 0xc0a4b60  jal         func_292D80
    ctx->pc = 0x303240u;
    SET_GPR_U32(ctx, 31, 0x303248u);
    ctx->pc = 0x303244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303240u;
    // 0x303244: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D80u, 0x303240u, 0x303248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303248u;
label_303248:
    // 0x303248: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x303248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30324c:
    // 0x30324c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30324cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303254: 0x3e00008  jr          $ra
    ctx->pc = 0x303254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303254u;
        // 0x303258: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30325Cu;
    // 0x30325c: 0x0  nop
    ctx->pc = 0x30325cu;
    // NOP
    ctx->pc = 0x303260u;
}
