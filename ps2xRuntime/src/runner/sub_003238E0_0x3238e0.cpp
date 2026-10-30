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

// Function: sub_003238E0
// Address: 0x3238e0 - 0x323940
void sub_003238E0_0x3238e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003238E0_0x3238e0");
#endif

    switch (ctx->pc) {
        case 0x323920u: goto label_323920;
        default: break;
    }

    ctx->pc = 0x3238e0u;

    // 0x3238e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3238e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3238e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3238e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3238e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3238e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3238ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3238ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3238f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3238f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3238f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3238f8: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x3238f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x3238fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3238fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323900: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x323900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x323904: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x323904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323908: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32390c: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32390Cu;
    {
        const bool branch_taken_0x32390c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x32390c) {
            ctx->pc = 0x323910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32390Cu;
            // 0x323910: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323924u;
            goto label_323924;
        }
    }
    ctx->pc = 0x323914u;
    // 0x323914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323918: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x323918u;
    SET_GPR_U32(ctx, 31, 0x323920u);
    ctx->pc = 0x32391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323918u;
    // 0x32391c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x323918u, 0x323920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323920u;
label_323920:
    // 0x323920: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323924:
    // 0x323924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323928: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x323928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x32392c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32392cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323930: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323934: 0x3e00008  jr          $ra
    ctx->pc = 0x323934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323934u;
        // 0x323938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32393Cu;
    // 0x32393c: 0x0  nop
    ctx->pc = 0x32393cu;
    // NOP
    ctx->pc = 0x323940u;
}
