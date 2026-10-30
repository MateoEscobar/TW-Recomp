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

// Function: sub_002A309C
// Address: 0x2a309c - 0x2a30c0
void sub_002A309C_0x2a309c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A309C_0x2a309c");
#endif

    switch (ctx->pc) {
        case 0x2a30a0u: goto label_2a30a0;
        default: break;
    }

    ctx->pc = 0x2a309cu;

    // 0x2a309c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a309cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a30a0:
    // 0x2a30a0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2a30a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a30a4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2a30a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a30a8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2a30a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a30ac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2a30acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a30b0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a30b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a30b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a30b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a30b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A30B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30B8u;
        // 0x2a30bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A30B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A30C0u;
}
