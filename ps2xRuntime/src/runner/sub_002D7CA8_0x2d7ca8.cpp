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

// Function: sub_002D7CA8
// Address: 0x2d7ca8 - 0x2d7d10
void sub_002D7CA8_0x2d7ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7CA8_0x2d7ca8");
#endif

    switch (ctx->pc) {
        case 0x2d7d04u: goto label_2d7d04;
        default: break;
    }

    ctx->pc = 0x2d7ca8u;

    // 0x2d7ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7cac: 0x240505dc  addiu       $a1, $zero, 0x5DC
    ctx->pc = 0x2d7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x2d7cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7cb4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2d7cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2d7cb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d7cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d7cbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7cc0: 0x9083003b  lbu         $v1, 0x3B($a0)
    ctx->pc = 0x2d7cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 59)));
    // 0x2d7cc4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7CC4u;
    {
        const bool branch_taken_0x2d7cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CC4u;
        // 0x2d7cc8: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7cc4) {
            ctx->pc = 0x2D7CDCu;
            goto label_2d7cdc;
        }
    }
    ctx->pc = 0x2D7CCCu;
    // 0x2d7ccc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d7cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d7cd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d7cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d7cd4: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2d7cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2d7cd8: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x2d7cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2d7cdc:
    // 0x2d7cdc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2d7cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7ce0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D7CE0u;
    {
        const bool branch_taken_0x2d7ce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7ce0) {
            ctx->pc = 0x2D7CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7CE0u;
            // 0x2d7ce4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7CE8u;
            goto label_2d7ce8;
        }
    }
    ctx->pc = 0x2D7CE8u;
label_2d7ce8:
    // 0x2d7ce8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2d7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2d7cec: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x2d7cecu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2d7cf0: 0x1810  mfhi        $v1
    ctx->pc = 0x2d7cf0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d7cf4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7CF4u;
    {
        const bool branch_taken_0x2d7cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CF4u;
        // 0x2d7cf8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7cf4) {
            ctx->pc = 0x2D7D08u;
            goto label_2d7d08;
        }
    }
    ctx->pc = 0x2D7CFCu;
    // 0x2d7cfc: 0xc08c734  jal         func_231CD0
    ctx->pc = 0x2D7CFCu;
    SET_GPR_U32(ctx, 31, 0x2D7D04u);
    ctx->pc = 0x2D7D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CFCu;
    // 0x2d7d00: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CD0u, 0x2D7CFCu, 0x2D7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D04u;
label_2d7d04:
    // 0x2d7d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7d08:
    // 0x2d7d08: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D08u;
        // 0x2d7d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7D10u;
}
