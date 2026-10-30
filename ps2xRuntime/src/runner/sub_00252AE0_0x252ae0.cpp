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

// Function: sub_00252AE0
// Address: 0x252ae0 - 0x252b08
void sub_00252AE0_0x252ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252AE0_0x252ae0");
#endif

    switch (ctx->pc) {
        case 0x252af8u: goto label_252af8;
        default: break;
    }

    ctx->pc = 0x252ae0u;

    // 0x252ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x252ae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252ae8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x252ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x252aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252af0: 0xc094904  jal         func_252410
    ctx->pc = 0x252AF0u;
    SET_GPR_U32(ctx, 31, 0x252AF8u);
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x252AF0u, 0x252AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AF8u;
label_252af8:
    // 0x252af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252afc: 0x3e00008  jr          $ra
    ctx->pc = 0x252AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AFCu;
        // 0x252b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252B04u;
    // 0x252b04: 0x0  nop
    ctx->pc = 0x252b04u;
    // NOP
    ctx->pc = 0x252b08u;
}
