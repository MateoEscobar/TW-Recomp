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

// Function: sub_00335540
// Address: 0x335540 - 0x335570
void sub_00335540_0x335540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335540_0x335540");
#endif

    switch (ctx->pc) {
        case 0x335550u: goto label_335550;
        default: break;
    }

    ctx->pc = 0x335540u;

    // 0x335540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x335548: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x335548u;
    SET_GPR_U32(ctx, 31, 0x335550u);
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x335548u, 0x335550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335550u;
label_335550:
    // 0x335550: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x335550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x335554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335558: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x335558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33555c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33555cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335560: 0x0  nop
    ctx->pc = 0x335560u;
    // NOP
    // 0x335564: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x335564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x335568: 0x3e00008  jr          $ra
    ctx->pc = 0x335568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335568u;
        // 0x33556c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335570u;
}
