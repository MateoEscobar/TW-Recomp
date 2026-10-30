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

// Function: sub_002FD128
// Address: 0x2fd128 - 0x2fd158
void sub_002FD128_0x2fd128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD128_0x2fd128");
#endif

    switch (ctx->pc) {
        case 0x2fd140u: goto label_2fd140;
        default: break;
    }

    ctx->pc = 0x2fd128u;

    // 0x2fd128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fd128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fd12c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fd12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fd130: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fd130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fd134: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fd134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd138: 0xc08a200  jal         func_228800
    ctx->pc = 0x2FD138u;
    SET_GPR_U32(ctx, 31, 0x2FD140u);
    ctx->pc = 0x2FD13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD138u;
    // 0x2fd13c: 0x8c6400cc  lw          $a0, 0xCC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2FD138u, 0x2FD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD140u;
label_2fd140:
    // 0x2fd140: 0x9042011b  lbu         $v0, 0x11B($v0)
    ctx->pc = 0x2fd140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x2fd144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fd144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd148: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2fd148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2fd14c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2fd14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fd150: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD150u;
        // 0x2fd154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD158u;
}
