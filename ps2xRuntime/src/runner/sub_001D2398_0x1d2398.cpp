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

// Function: sub_001D2398
// Address: 0x1d2398 - 0x1d23d0
void sub_001D2398_0x1d2398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2398_0x1d2398");
#endif

    switch (ctx->pc) {
        case 0x1d23c0u: goto label_1d23c0;
        default: break;
    }

    ctx->pc = 0x1d2398u;

    // 0x1d2398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d239c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d239cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d23a0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D23A0u;
    {
        const bool branch_taken_0x1d23a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23A0u;
        // 0x1d23a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23a0) {
            ctx->pc = 0x1D23B0u;
            goto label_1d23b0;
        }
    }
    ctx->pc = 0x1D23A8u;
    // 0x1d23a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D23A8u;
    {
        const bool branch_taken_0x1d23a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23A8u;
        // 0x1d23ac: 0xa04007b0  sb          $zero, 0x7B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1968), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23a8) {
            ctx->pc = 0x1D23C0u;
            goto label_1d23c0;
        }
    }
    ctx->pc = 0x1D23B0u;
label_1d23b0:
    // 0x1d23b0: 0x244407b0  addiu       $a0, $v0, 0x7B0
    ctx->pc = 0x1d23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x1d23b4: 0xa04007cf  sb          $zero, 0x7CF($v0)
    ctx->pc = 0x1d23b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1999), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d23b8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1D23B8u;
    SET_GPR_U32(ctx, 31, 0x1D23C0u);
    ctx->pc = 0x1D23BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23B8u;
    // 0x1d23bc: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1D23B8u, 0x1D23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23C0u;
label_1d23c0:
    // 0x1d23c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d23c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d23c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D23C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23C4u;
        // 0x1d23c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D23C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D23CCu;
    // 0x1d23cc: 0x0  nop
    ctx->pc = 0x1d23ccu;
    // NOP
    ctx->pc = 0x1d23d0u;
}
