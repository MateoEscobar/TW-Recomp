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

// Function: sub_00323CD8
// Address: 0x323cd8 - 0x323d38
void sub_00323CD8_0x323cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323CD8_0x323cd8");
#endif

    switch (ctx->pc) {
        case 0x323d1cu: goto label_323d1c;
        default: break;
    }

    ctx->pc = 0x323cd8u;

    // 0x323cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323cdc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x323cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323ce0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323ce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323cec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x323cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323cf0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x323cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x323cf4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x323cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x323cf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323cfc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x323cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x323d00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x323d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323d04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x323d08: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323D08u;
    {
        const bool branch_taken_0x323d08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x323d08) {
            ctx->pc = 0x323D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323D08u;
            // 0x323d0c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323D20u;
            goto label_323d20;
        }
    }
    ctx->pc = 0x323D10u;
    // 0x323d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323d14: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x323D14u;
    SET_GPR_U32(ctx, 31, 0x323D1Cu);
    ctx->pc = 0x323D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D14u;
    // 0x323d18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x323D14u, 0x323D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D1Cu;
label_323d1c:
    // 0x323d1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323d20:
    // 0x323d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323d24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x323d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x323d28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323d2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323d30: 0x3e00008  jr          $ra
    ctx->pc = 0x323D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D30u;
        // 0x323d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323D38u;
}
