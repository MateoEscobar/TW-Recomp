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

// Function: sub_0032F5A0
// Address: 0x32f5a0 - 0x32f5f0
void sub_0032F5A0_0x32f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F5A0_0x32f5a0");
#endif

    switch (ctx->pc) {
        case 0x32f5b0u: goto label_32f5b0;
        case 0x32f5dcu: goto label_32f5dc;
        default: break;
    }

    ctx->pc = 0x32f5a0u;

    // 0x32f5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32f5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32f5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f5a8: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x32F5A8u;
    SET_GPR_U32(ctx, 31, 0x32F5B0u);
    ctx->pc = 0x32F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F5A8u;
    // 0x32f5ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x32F5A8u, 0x32F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F5B0u;
label_32f5b0:
    // 0x32f5b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32f5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f5b4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x32F5B4u;
    {
        const bool branch_taken_0x32f5b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5B4u;
        // 0x32f5b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f5b4) {
            ctx->pc = 0x32F5C8u;
            goto label_32f5c8;
        }
    }
    ctx->pc = 0x32F5BCu;
    // 0x32f5bc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x32f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x32f5c0: 0x24465ec8  addiu       $a2, $v0, 0x5EC8
    ctx->pc = 0x32f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24264));
    // 0x32f5c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_32f5c8:
    // 0x32f5c8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32f5cc: 0x8c4369ec  lw          $v1, 0x69EC($v0)
    ctx->pc = 0x32f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27116)));
    // 0x32f5d0: 0x24a55ed8  addiu       $a1, $a1, 0x5ED8
    ctx->pc = 0x32f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24280));
    // 0x32f5d4: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x32F5D4u;
    SET_GPR_U32(ctx, 31, 0x32F5DCu);
    ctx->pc = 0x32F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F5D4u;
    // 0x32f5d8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x32F5D4u, 0x32F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F5DCu;
label_32f5dc:
    // 0x32f5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f5e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32f5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x32F5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5E4u;
        // 0x32f5e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F5ECu;
    // 0x32f5ec: 0x0  nop
    ctx->pc = 0x32f5ecu;
    // NOP
    ctx->pc = 0x32f5f0u;
}
