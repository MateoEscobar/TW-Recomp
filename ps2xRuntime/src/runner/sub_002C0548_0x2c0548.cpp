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

// Function: sub_002C0548
// Address: 0x2c0548 - 0x2c0580
void sub_002C0548_0x2c0548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0548_0x2c0548");
#endif

    switch (ctx->pc) {
        case 0x2c0574u: goto label_2c0574;
        default: break;
    }

    ctx->pc = 0x2c0548u;

    // 0x2c0548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c054c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0554: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2c0554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c0558: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c055c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C055Cu;
    {
        const bool branch_taken_0x2c055c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C055Cu;
        // 0x2c0560: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c055c) {
            ctx->pc = 0x2C0578u;
            goto label_2c0578;
        }
    }
    ctx->pc = 0x2C0564u;
    // 0x2c0564: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c0564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2c0568: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2c0568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c056c: 0xc1070a8  jal         func_41C2A0
    ctx->pc = 0x2C056Cu;
    SET_GPR_U32(ctx, 31, 0x2C0574u);
    ctx->pc = 0x2C0570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C056Cu;
    // 0x2c0570: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2A0u, 0x2C056Cu, 0x2C0574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0574u;
label_2c0574:
    // 0x2c0574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c0578:
    // 0x2c0578: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0578u;
        // 0x2c057c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0580u;
}
