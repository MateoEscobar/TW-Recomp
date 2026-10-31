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

// Function: sub_002D70E0
// Address: 0x2d70e0 - 0x2d7130
void sub_002D70E0_0x2d70e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D70E0_0x2d70e0");
#endif

    switch (ctx->pc) {
        case 0x2d7120u: goto label_2d7120;
        default: break;
    }

    ctx->pc = 0x2d70e0u;

    // 0x2d70e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d70e4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2d70e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2d70e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d70e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d70ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D70ECu;
    {
        const bool branch_taken_0x2d70ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d70ec) {
            ctx->pc = 0x2D70F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D70ECu;
            // 0x2d70f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D70F4u;
            goto label_2d70f4;
        }
    }
    ctx->pc = 0x2D70F4u;
label_2d70f4:
    // 0x2d70f4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d70f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d70f8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2d70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2d70fc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2d70fcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2d7100: 0x2010  mfhi        $a0
    ctx->pc = 0x2d7100u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2d7104: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7104u;
    {
        const bool branch_taken_0x2d7104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7104u;
        // 0x2d7108: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7104) {
            ctx->pc = 0x2D7124u;
            goto label_2d7124;
        }
    }
    ctx->pc = 0x2D710Cu;
    // 0x2d710c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2d710cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d7110: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2d7110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2d7114: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d7114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d7118: 0xc08c734  jal         func_231CD0
    ctx->pc = 0x2D7118u;
    SET_GPR_U32(ctx, 31, 0x2D7120u);
    ctx->pc = 0x2D711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7118u;
    // 0x2d711c: 0x240505dc  addiu       $a1, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CD0u, 0x2D7118u, 0x2D7120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7120u;
label_2d7120:
    // 0x2d7120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7124:
    // 0x2d7124: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7124u;
        // 0x2d7128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D712Cu;
    // 0x2d712c: 0x0  nop
    ctx->pc = 0x2d712cu;
    // NOP
    ctx->pc = 0x2d7130u;
}
