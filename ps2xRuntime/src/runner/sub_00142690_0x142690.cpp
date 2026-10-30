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

// Function: sub_00142690
// Address: 0x142690 - 0x1426c0
void sub_00142690_0x142690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142690_0x142690");
#endif

    switch (ctx->pc) {
        case 0x1426b4u: goto label_1426b4;
        default: break;
    }

    ctx->pc = 0x142690u;

    // 0x142690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142694: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x142694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14269c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14269cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1426a0: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1426a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1426a4: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1426a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1426a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1426a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1426ac: 0xc04828c  jal         func_120A30
    ctx->pc = 0x1426ACu;
    SET_GPR_U32(ctx, 31, 0x1426B4u);
    ctx->pc = 0x1426B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1426ACu;
    // 0x1426b0: 0xac43033c  sw          $v1, 0x33C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 828), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x1426ACu, 0x1426B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426B4u;
label_1426b4:
    // 0x1426b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1426b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1426b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1426B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1426BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1426B8u;
        // 0x1426bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1426B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1426C0u;
}
