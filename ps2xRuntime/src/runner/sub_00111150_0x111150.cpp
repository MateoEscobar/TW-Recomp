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

// Function: sub_00111150
// Address: 0x111150 - 0x111178
void sub_00111150_0x111150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111150_0x111150");
#endif

    switch (ctx->pc) {
        case 0x111168u: goto label_111168;
        default: break;
    }

    ctx->pc = 0x111150u;

    // 0x111150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111158: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x111158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11115c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11115cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111160: 0xc044c62  jal         func_113188
    ctx->pc = 0x111160u;
    SET_GPR_U32(ctx, 31, 0x111168u);
    ctx->pc = 0x111164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111160u;
    // 0x111164: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113188u, 0x111160u, 0x111168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111168u;
label_111168:
    // 0x111168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11116c: 0x3e00008  jr          $ra
    ctx->pc = 0x11116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11116Cu;
        // 0x111170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11116Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111174u;
    // 0x111174: 0x0  nop
    ctx->pc = 0x111174u;
    // NOP
    ctx->pc = 0x111178u;
}
