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

// Function: sub_00439A18
// Address: 0x439a18 - 0x439a50
void sub_00439A18_0x439a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439A18_0x439a18");
#endif

    switch (ctx->pc) {
        case 0x439a40u: goto label_439a40;
        default: break;
    }

    ctx->pc = 0x439a18u;

    // 0x439a18: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x439a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439a1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x439a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x439a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x439a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x439a24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x439a24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439a28: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x439a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439a2c: 0x8c4469ec  lw          $a0, 0x69EC($v0)
    ctx->pc = 0x439a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5169ECu));
    // 0x439a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x439a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x439a34: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x439a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439a38: 0xc10e5fa  jal         func_4397E8
    ctx->pc = 0x439A38u;
    SET_GPR_U32(ctx, 31, 0x439A40u);
    ctx->pc = 0x439A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439A38u;
    // 0x439a3c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4397E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4397E8u, 0x439A38u, 0x439A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439A40u;
label_439a40:
    // 0x439a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x439a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x439a44: 0x3e00008  jr          $ra
    ctx->pc = 0x439A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439A44u;
        // 0x439a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x439A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x439A4Cu;
    // 0x439a4c: 0x0  nop
    ctx->pc = 0x439a4cu;
    // NOP
    ctx->pc = 0x439a50u;
}
