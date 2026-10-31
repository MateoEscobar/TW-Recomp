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

// Function: sub_001A4310
// Address: 0x1a4310 - 0x1a4348
void sub_001A4310_0x1a4310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4310_0x1a4310");
#endif

    switch (ctx->pc) {
        case 0x1a4330u: goto label_1a4330;
        default: break;
    }

    ctx->pc = 0x1a4310u;

    // 0x1a4310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4314: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a4314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4318: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4318u;
    {
        const bool branch_taken_0x1a4318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4318u;
        // 0x1a431c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4318) {
            ctx->pc = 0x1A4338u;
            goto label_1a4338;
        }
    }
    ctx->pc = 0x1A4320u;
    // 0x1a4320: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x1a4320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x1a4324: 0xa040030f  sb          $zero, 0x30F($v0)
    ctx->pc = 0x1a4324u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 783), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4328: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1A4328u;
    SET_GPR_U32(ctx, 31, 0x1A4330u);
    ctx->pc = 0x1A432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4328u;
    // 0x1a432c: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1A4328u, 0x1A4330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4330u;
label_1a4330:
    // 0x1a4330: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4330u;
    {
        const bool branch_taken_0x1a4330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4330u;
        // 0x1a4334: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4330) {
            ctx->pc = 0x1A4340u;
            goto label_1a4340;
        }
    }
    ctx->pc = 0x1A4338u;
label_1a4338:
    // 0x1a4338: 0xa04002f0  sb          $zero, 0x2F0($v0)
    ctx->pc = 0x1a4338u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 752), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a433c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a433cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4340:
    // 0x1a4340: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4340u;
        // 0x1a4344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4348u;
}
