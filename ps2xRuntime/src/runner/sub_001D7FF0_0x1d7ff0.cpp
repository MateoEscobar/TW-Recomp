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

// Function: sub_001D7FF0
// Address: 0x1d7ff0 - 0x1d8050
void sub_001D7FF0_0x1d7ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7FF0_0x1d7ff0");
#endif

    switch (ctx->pc) {
        case 0x1d801cu: goto label_1d801c;
        case 0x1d8040u: goto label_1d8040;
        default: break;
    }

    ctx->pc = 0x1d7ff0u;

    // 0x1d7ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7ff4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1d7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x1d7ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7ffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8000: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8000u;
    {
        const bool branch_taken_0x1d8000 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8000u;
        // 0x1d8004: 0xac430840  sw          $v1, 0x840($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8000) {
            ctx->pc = 0x1D8024u;
            goto label_1d8024;
        }
    }
    ctx->pc = 0x1D8008u;
    // 0x1d8008: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d800c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d800cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8010: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1d8010u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d8014: 0xc1062aa  jal         func_418AA8
    ctx->pc = 0x1D8014u;
    SET_GPR_U32(ctx, 31, 0x1D801Cu);
    ctx->pc = 0x1D8018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8014u;
    // 0x1d8018: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AA8u, 0x1D8014u, 0x1D801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D801Cu;
label_1d801c:
    // 0x1d801c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D801Cu;
    {
        const bool branch_taken_0x1d801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D801Cu;
        // 0x1d8020: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d801c) {
            ctx->pc = 0x1D8044u;
            goto label_1d8044;
        }
    }
    ctx->pc = 0x1D8024u;
label_1d8024:
    // 0x1d8024: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8024u;
    {
        const bool branch_taken_0x1d8024 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8024u;
        // 0x1d8028: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8024) {
            ctx->pc = 0x1D8044u;
            goto label_1d8044;
        }
    }
    ctx->pc = 0x1D802Cu;
    // 0x1d802c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d802cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d8030: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d8030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8034: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1d8034u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d8038: 0xc1062aa  jal         func_418AA8
    ctx->pc = 0x1D8038u;
    SET_GPR_U32(ctx, 31, 0x1D8040u);
    ctx->pc = 0x1D803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8038u;
    // 0x1d803c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AA8u, 0x1D8038u, 0x1D8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8040u;
label_1d8040:
    // 0x1d8040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8044:
    // 0x1d8044: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8044u;
        // 0x1d8048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D804Cu;
    // 0x1d804c: 0x0  nop
    ctx->pc = 0x1d804cu;
    // NOP
    ctx->pc = 0x1d8050u;
}
