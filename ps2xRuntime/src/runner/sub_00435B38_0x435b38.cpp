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

// Function: sub_00435B38
// Address: 0x435b38 - 0x435b70
void sub_00435B38_0x435b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435B38_0x435b38");
#endif

    switch (ctx->pc) {
        case 0x435b60u: goto label_435b60;
        default: break;
    }

    ctx->pc = 0x435b38u;

    // 0x435b38: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x435b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435b3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x435b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x435b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x435b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x435b44: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x435b44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435b48: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x435b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435b4c: 0x8c4469ec  lw          $a0, 0x69EC($v0)
    ctx->pc = 0x435b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5169ECu));
    // 0x435b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x435b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x435b54: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x435b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435b58: 0xc10d64a  jal         func_435928
    ctx->pc = 0x435B58u;
    SET_GPR_U32(ctx, 31, 0x435B60u);
    ctx->pc = 0x435B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435B58u;
    // 0x435b5c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435928u, 0x435B58u, 0x435B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435B60u;
label_435b60:
    // 0x435b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x435b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435b64: 0x3e00008  jr          $ra
    ctx->pc = 0x435B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435B64u;
        // 0x435b68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435B6Cu;
    // 0x435b6c: 0x0  nop
    ctx->pc = 0x435b6cu;
    // NOP
    ctx->pc = 0x435b70u;
}
