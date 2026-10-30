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

// Function: sub_002A6098
// Address: 0x2a6098 - 0x2a60e0
void sub_002A6098_0x2a6098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6098_0x2a6098");
#endif

    switch (ctx->pc) {
        case 0x2a60b4u: goto label_2a60b4;
        default: break;
    }

    ctx->pc = 0x2a6098u;

    // 0x2a6098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a609c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2a609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a60a0: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A60A0u;
    {
        const bool branch_taken_0x2a60a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60A0u;
        // 0x2a60a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60a0) {
            ctx->pc = 0x2A60CCu;
            goto label_2a60cc;
        }
    }
    ctx->pc = 0x2A60A8u;
    // 0x2a60a8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a60a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a60ac: 0xc0cd4e4  jal         func_335390
    ctx->pc = 0x2A60ACu;
    SET_GPR_U32(ctx, 31, 0x2A60B4u);
    ctx->pc = 0x2A60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A60ACu;
    // 0x2a60b0: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A60ACu, 0x2A60B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A60B4u;
label_2a60b4:
    // 0x2a60b4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a60b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a60b8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a60b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2a60bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A60BCu;
    {
        const bool branch_taken_0x2a60bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a60bc) {
            ctx->pc = 0x2A60C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A60BCu;
            // 0x2a60c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A60C4u;
            goto label_2a60c4;
        }
    }
    ctx->pc = 0x2A60C4u;
label_2a60c4:
    // 0x2a60c4: 0x2010  mfhi        $a0
    ctx->pc = 0x2a60c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a60c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2a60cc:
    // 0x2a60cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a60ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a60d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a60d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A60D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60D4u;
        // 0x2a60d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A60D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A60DCu;
    // 0x2a60dc: 0x0  nop
    ctx->pc = 0x2a60dcu;
    // NOP
    ctx->pc = 0x2a60e0u;
}
