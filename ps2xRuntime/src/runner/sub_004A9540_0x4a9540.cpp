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

// Function: sub_004A9540
// Address: 0x4a9540 - 0x4a95c8
void sub_004A9540_0x4a9540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9540_0x4a9540");
#endif

    switch (ctx->pc) {
        case 0x4a9574u: goto label_4a9574;
        default: break;
    }

    ctx->pc = 0x4a9540u;

    // 0x4a9540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a9540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a9544: 0x8f838a98  lw          $v1, -0x7568($gp)
    ctx->pc = 0x4a9544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937240)));
    // 0x4a9548: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a9548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a954c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a9550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a9554: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a9554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a9558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a9558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a955c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a9560: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a9560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a9564: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9564u;
    {
        const bool branch_taken_0x4a9564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9564) {
            ctx->pc = 0x4A9574u;
            goto label_4a9574;
        }
    }
    ctx->pc = 0x4A956Cu;
    // 0x4a956c: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x4A956Cu;
    SET_GPR_U32(ctx, 31, 0x4A9574u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4A956Cu, 0x4A9574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9574u;
label_4a9574:
    // 0x4a9574: 0x8f838a9c  lw          $v1, -0x7564($gp)
    ctx->pc = 0x4a9574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937244)));
    // 0x4a9578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a9578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a957c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a957cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9580: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a9580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a9584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9588: 0xaf838a9c  sw          $v1, -0x7564($gp)
    ctx->pc = 0x4a9588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937244), GPR_U32(ctx, 3));
    // 0x4a958c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A958Cu;
        // 0x4a9590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A958Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9594u;
    // 0x4a9594: 0x0  nop
    ctx->pc = 0x4a9594u;
    // NOP
    // 0x4a9598: 0xaf85c004  sw          $a1, -0x3FFC($gp)
    ctx->pc = 0x4a9598u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950916), GPR_U32(ctx, 5));
    // 0x4a959c: 0x0  nop
    ctx->pc = 0x4a959cu;
    // NOP
    // 0x4a95a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4a95a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4a95a4: 0x0  nop
    ctx->pc = 0x4a95a4u;
    // NOP
    // 0x4a95a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4a95a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a95ac: 0x0  nop
    ctx->pc = 0x4a95acu;
    // NOP
    // 0x4a95b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4a95b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a95b4: 0x0  nop
    ctx->pc = 0x4a95b4u;
    // NOP
    // 0x4a95b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4a95b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4a95bc: 0x0  nop
    ctx->pc = 0x4a95bcu;
    // NOP
    // 0x4a95c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4a95c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4a95c4: 0x0  nop
    ctx->pc = 0x4a95c4u;
    // NOP
    ctx->pc = 0x4a95c8u;
}
