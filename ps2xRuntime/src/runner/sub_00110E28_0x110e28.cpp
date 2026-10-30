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

// Function: sub_00110E28
// Address: 0x110e28 - 0x110e58
void sub_00110E28_0x110e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110E28_0x110e28");
#endif

    switch (ctx->pc) {
        case 0x110e48u: goto label_110e48;
        default: break;
    }

    ctx->pc = 0x110e28u;

    // 0x110e28: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x110e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x110e2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110e30: 0x34424280  ori         $v0, $v0, 0x4280
    ctx->pc = 0x110e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17024);
    // 0x110e34: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x110e34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x110e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110e3c: 0xa5603  sra         $t2, $t2, 24
    ctx->pc = 0x110e3cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 24));
    // 0x110e40: 0xc04335a  jal         func_10CD68
    ctx->pc = 0x110E40u;
    SET_GPR_U32(ctx, 31, 0x110E48u);
    ctx->pc = 0x110E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E40u;
    // 0x110e44: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD68u, 0x110E40u, 0x110E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E48u;
label_110e48:
    // 0x110e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x110E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E4Cu;
        // 0x110e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110E54u;
    // 0x110e54: 0x0  nop
    ctx->pc = 0x110e54u;
    // NOP
    ctx->pc = 0x110e58u;
}
