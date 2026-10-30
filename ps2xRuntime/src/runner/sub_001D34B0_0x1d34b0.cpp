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

// Function: sub_001D34B0
// Address: 0x1d34b0 - 0x1d34e8
void sub_001D34B0_0x1d34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D34B0_0x1d34b0");
#endif

    switch (ctx->pc) {
        case 0x1d34dcu: goto label_1d34dc;
        default: break;
    }

    ctx->pc = 0x1d34b0u;

    // 0x1d34b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d34b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d34b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1d34b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d34b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d34bc: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1d34bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1d34c0: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1d34c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d34c4: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x1d34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x1d34c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d34c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34cc: 0x90620060  lbu         $v0, 0x60($v1)
    ctx->pc = 0x1d34ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1d34d0: 0x24420041  addiu       $v0, $v0, 0x41
    ctx->pc = 0x1d34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 65));
    // 0x1d34d4: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D34D4u;
    SET_GPR_U32(ctx, 31, 0x1D34DCu);
    ctx->pc = 0x1D34D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34D4u;
    // 0x1d34d8: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D34D4u, 0x1D34DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34DCu;
label_1d34dc:
    // 0x1d34dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d34dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d34e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D34E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34E0u;
        // 0x1d34e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34E8u;
}
