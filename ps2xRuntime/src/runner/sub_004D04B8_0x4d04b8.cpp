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

// Function: sub_004D04B8
// Address: 0x4d04b8 - 0x4d04f8
void sub_004D04B8_0x4d04b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D04B8_0x4d04b8");
#endif

    switch (ctx->pc) {
        case 0x4d04e8u: goto label_4d04e8;
        default: break;
    }

    ctx->pc = 0x4d04b8u;

    // 0x4d04b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4d04bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d04bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d04c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4d04c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d04c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d04c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d04c8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4d04c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4d04cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4d04ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d04d0: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x4d04d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4d04d4: 0x24e4008c  addiu       $a0, $a3, 0x8C
    ctx->pc = 0x4d04d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 140));
    // 0x4d04d8: 0x8ce5007c  lw          $a1, 0x7C($a3)
    ctx->pc = 0x4d04d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
    // 0x4d04dc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4d04dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d04e0: 0xc1361ee  jal         func_4D87B8
    ctx->pc = 0x4D04E0u;
    SET_GPR_U32(ctx, 31, 0x4D04E8u);
    ctx->pc = 0x4D04E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D04E0u;
    // 0x4d04e4: 0xace30080  sw          $v1, 0x80($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D87B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D87B8u, 0x4D04E0u, 0x4D04E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D04E8u;
label_4d04e8:
    // 0x4d04e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d04e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d04ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4D04ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D04ECu;
        // 0x4d04f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D04ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D04F4u;
    // 0x4d04f4: 0x0  nop
    ctx->pc = 0x4d04f4u;
    // NOP
    ctx->pc = 0x4d04f8u;
}
