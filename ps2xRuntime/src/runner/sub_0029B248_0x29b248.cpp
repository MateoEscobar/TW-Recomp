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

// Function: sub_0029B248
// Address: 0x29b248 - 0x29b268
void sub_0029B248_0x29b248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B248_0x29b248");
#endif

    switch (ctx->pc) {
        case 0x29b258u: goto label_29b258;
        default: break;
    }

    ctx->pc = 0x29b248u;

    // 0x29b248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b24c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b250: 0xc0a6c9a  jal         func_29B268
    ctx->pc = 0x29B250u;
    SET_GPR_U32(ctx, 31, 0x29B258u);
    ctx->pc = 0x29B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B250u;
    // 0x29b254: 0x80850010  lb          $a1, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B268u, 0x29B250u, 0x29B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B258u;
label_29b258:
    // 0x29b258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b25c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B25Cu;
        // 0x29b260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B264u;
    // 0x29b264: 0x0  nop
    ctx->pc = 0x29b264u;
    // NOP
    ctx->pc = 0x29b268u;
}
