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

// Function: sub_001A8EA8
// Address: 0x1a8ea8 - 0x1a8ed8
void sub_001A8EA8_0x1a8ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8EA8_0x1a8ea8");
#endif

    switch (ctx->pc) {
        case 0x1a8ec0u: goto label_1a8ec0;
        default: break;
    }

    ctx->pc = 0x1a8ea8u;

    // 0x1a8ea8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1a8eac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8eb0: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x1a8eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x1a8eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8eb8: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x1A8EB8u;
    SET_GPR_U32(ctx, 31, 0x1A8EC0u);
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1A8EB8u, 0x1A8EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EC0u;
label_1a8ec0:
    // 0x1a8ec0: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x1a8ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1a8ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8ec8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a8ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a8ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ECCu;
        // 0x1a8ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8ED4u;
    // 0x1a8ed4: 0x0  nop
    ctx->pc = 0x1a8ed4u;
    // NOP
    ctx->pc = 0x1a8ed8u;
}
