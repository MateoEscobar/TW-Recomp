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

// Function: sub_004239B0
// Address: 0x4239b0 - 0x4239e0
void sub_004239B0_0x4239b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004239B0_0x4239b0");
#endif

    switch (ctx->pc) {
        case 0x4239d4u: goto label_4239d4;
        default: break;
    }

    ctx->pc = 0x4239b0u;

    // 0x4239b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4239b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4239b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4239b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4239b8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x4239b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4239bc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4239bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4239c0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x4239c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x4239c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4239c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4239c8: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x4239c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x4239cc: 0xc109256  jal         func_424958
    ctx->pc = 0x4239CCu;
    SET_GPR_U32(ctx, 31, 0x4239D4u);
    ctx->pc = 0x4239D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4239CCu;
    // 0x4239d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424958u, 0x4239CCu, 0x4239D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4239D4u;
label_4239d4:
    // 0x4239d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4239d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4239d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4239D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4239DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4239D8u;
        // 0x4239dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4239D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4239E0u;
}
