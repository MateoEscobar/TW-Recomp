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

// Function: sub_00385898
// Address: 0x385898 - 0x3858b8
void sub_00385898_0x385898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385898_0x385898");
#endif

    switch (ctx->pc) {
        case 0x38589cu: goto label_38589c;
        default: break;
    }

    ctx->pc = 0x385898u;

    // 0x385898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x385898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38589c:
    // 0x38589c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x38589cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3858a0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3858a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3858a4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3858a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3858a8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3858a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3858ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3858acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3858b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3858B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3858B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3858B0u;
        // 0x3858b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3858B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3858B8u;
}
