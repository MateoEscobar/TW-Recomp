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

// Function: sub_00324C48
// Address: 0x324c48 - 0x324c80
void sub_00324C48_0x324c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324C48_0x324c48");
#endif

    switch (ctx->pc) {
        case 0x324c5cu: goto label_324c5c;
        case 0x324c70u: goto label_324c70;
        default: break;
    }

    ctx->pc = 0x324c48u;

    // 0x324c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x324c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324c54: 0xc0c9192  jal         func_324648
    ctx->pc = 0x324C54u;
    SET_GPR_U32(ctx, 31, 0x324C5Cu);
    ctx->pc = 0x324C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324C54u;
    // 0x324c58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x324C54u, 0x324C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C5Cu;
label_324c5c:
    // 0x324c5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x324c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x324c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x324c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c64: 0x8c6269ec  lw          $v0, 0x69EC($v1)
    ctx->pc = 0x324c64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x324c68: 0xc10c6c2  jal         func_431B08
    ctx->pc = 0x324C68u;
    SET_GPR_U32(ctx, 31, 0x324C70u);
    ctx->pc = 0x324C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324C68u;
    // 0x324c6c: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431B08u, 0x324C68u, 0x324C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C70u;
label_324c70:
    // 0x324c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c78: 0x3e00008  jr          $ra
    ctx->pc = 0x324C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C78u;
        // 0x324c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324C80u;
}
