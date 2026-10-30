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

// Function: sub_00482C30
// Address: 0x482c30 - 0x482c80
void sub_00482C30_0x482c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482C30_0x482c30");
#endif

    switch (ctx->pc) {
        case 0x482c68u: goto label_482c68;
        default: break;
    }

    ctx->pc = 0x482c30u;

    // 0x482c30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x482c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x482c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x482c38: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x482c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c3c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x482c3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c40: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x482c40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c44: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x482c44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c48: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x482c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x482c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482c50: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x482c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x482c54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x482c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c58: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x482c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c5c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x482c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c60: 0xc11feb2  jal         func_47FAC8
    ctx->pc = 0x482C60u;
    SET_GPR_U32(ctx, 31, 0x482C68u);
    ctx->pc = 0x482C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482C60u;
    // 0x482c64: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FAC8u, 0x482C60u, 0x482C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482C68u;
label_482c68:
    // 0x482c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x482C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482C6Cu;
        // 0x482c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482C74u;
    // 0x482c74: 0x0  nop
    ctx->pc = 0x482c74u;
    // NOP
    // 0x482c78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x482c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x482c7c: 0x0  nop
    ctx->pc = 0x482c7cu;
    // NOP
    ctx->pc = 0x482c80u;
}
