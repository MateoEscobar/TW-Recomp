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

// Function: sub_00166FC8
// Address: 0x166fc8 - 0x166ff8
void sub_00166FC8_0x166fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166FC8_0x166fc8");
#endif

    switch (ctx->pc) {
        case 0x166fe4u: goto label_166fe4;
        default: break;
    }

    ctx->pc = 0x166fc8u;

    // 0x166fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x166fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x166fcc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x166fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166fd4: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x166fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x166fd8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x166fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x166fdc: 0xc10c4de  jal         func_431378
    ctx->pc = 0x166FDCu;
    SET_GPR_U32(ctx, 31, 0x166FE4u);
    ctx->pc = 0x166FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FDCu;
    // 0x166fe0: 0xa040002b  sb          $zero, 0x2B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x166FDCu, 0x166FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FE4u;
label_166fe4:
    // 0x166fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x166FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FE8u;
        // 0x166fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166FF0u;
    // 0x166ff0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x166ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x166ff4: 0x0  nop
    ctx->pc = 0x166ff4u;
    // NOP
    ctx->pc = 0x166ff8u;
}
