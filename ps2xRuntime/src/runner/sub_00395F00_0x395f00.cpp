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

// Function: sub_00395F00
// Address: 0x395f00 - 0x395f38
void sub_00395F00_0x395f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395F00_0x395f00");
#endif

    switch (ctx->pc) {
        case 0x395f28u: goto label_395f28;
        default: break;
    }

    ctx->pc = 0x395f00u;

    // 0x395f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x395f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395f08: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395F08u;
    {
        const bool branch_taken_0x395f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x395F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F08u;
        // 0x395f0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f08) {
            ctx->pc = 0x395F18u;
            goto label_395f18;
        }
    }
    ctx->pc = 0x395F10u;
    // 0x395f10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x395F10u;
    {
        const bool branch_taken_0x395f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F10u;
        // 0x395f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f10) {
            ctx->pc = 0x395F2Cu;
            goto label_395f2c;
        }
    }
    ctx->pc = 0x395F18u;
label_395f18:
    // 0x395f18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x395f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x395f1c: 0x94850112  lhu         $a1, 0x112($a0)
    ctx->pc = 0x395f1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
    // 0x395f20: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x395F20u;
    SET_GPR_U32(ctx, 31, 0x395F28u);
    ctx->pc = 0x395F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F20u;
    // 0x395f24: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x395F20u, 0x395F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F28u;
label_395f28:
    // 0x395f28: 0x94420062  lhu         $v0, 0x62($v0)
    ctx->pc = 0x395f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
label_395f2c:
    // 0x395f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395f30: 0x3e00008  jr          $ra
    ctx->pc = 0x395F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F30u;
        // 0x395f34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395F38u;
}
