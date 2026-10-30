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

// Function: sub_003287E0
// Address: 0x3287e0 - 0x328818
void sub_003287E0_0x3287e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003287E0_0x3287e0");
#endif

    ctx->pc = 0x3287e0u;

    // 0x3287e0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x3287e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3287e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3287e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3287e8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3287e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3287ec: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3287ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3287f0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3287f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3287f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3287f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3287f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3287f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3287fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3287FCu;
    {
        const bool branch_taken_0x3287fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287FCu;
        // 0x328800: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287fc) {
            ctx->pc = 0x328810u;
            goto label_328810;
        }
    }
    ctx->pc = 0x328804u;
    // 0x328804: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x328804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x328808: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x328808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32880c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x32880cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_328810:
    // 0x328810: 0x3e00008  jr          $ra
    ctx->pc = 0x328810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328818u;
}
