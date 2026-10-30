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

// Function: sub_00253598
// Address: 0x253598 - 0x2535c0
void sub_00253598_0x253598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253598_0x253598");
#endif

    switch (ctx->pc) {
        case 0x2535acu: goto label_2535ac;
        default: break;
    }

    ctx->pc = 0x253598u;

    // 0x253598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25359c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2535a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2535a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2535a4: 0xc094d70  jal         func_2535C0
    ctx->pc = 0x2535A4u;
    SET_GPR_U32(ctx, 31, 0x2535ACu);
    ctx->pc = 0x2535A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2535A4u;
    // 0x2535a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535C0u, 0x2535A4u, 0x2535ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2535ACu;
label_2535ac:
    // 0x2535ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2535acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2535b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2535b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2535b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2535b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2535B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2535BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535B8u;
        // 0x2535bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2535B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2535C0u;
}
