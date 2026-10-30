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

// Function: sub_00114088
// Address: 0x114088 - 0x1140d0
void sub_00114088_0x114088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114088_0x114088");
#endif

    switch (ctx->pc) {
        case 0x1140a4u: goto label_1140a4;
        case 0x1140b8u: goto label_1140b8;
        default: break;
    }

    ctx->pc = 0x114088u;

    // 0x114088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11408c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114090: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114090u;
    {
        const bool branch_taken_0x114090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x114094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114090u;
        // 0x114094: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114090) {
            ctx->pc = 0x1140ACu;
            goto label_1140ac;
        }
    }
    ctx->pc = 0x114098u;
    // 0x114098: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x114098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11409c: 0xc043ec8  jal         func_10FB20
    ctx->pc = 0x11409Cu;
    SET_GPR_U32(ctx, 31, 0x1140A4u);
    ctx->pc = 0x1140A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11409Cu;
    // 0x1140a0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB20u, 0x11409Cu, 0x1140A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140A4u;
label_1140a4:
    // 0x1140a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1140A4u;
    {
        const bool branch_taken_0x1140a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140A4u;
        // 0x1140a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140a4) {
            ctx->pc = 0x1140BCu;
            goto label_1140bc;
        }
    }
    ctx->pc = 0x1140ACu;
label_1140ac:
    // 0x1140ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1140acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1140b0: 0xc043eda  jal         func_10FB68
    ctx->pc = 0x1140B0u;
    SET_GPR_U32(ctx, 31, 0x1140B8u);
    ctx->pc = 0x1140B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140B0u;
    // 0x1140b4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB68u, 0x1140B0u, 0x1140B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140B8u;
label_1140b8:
    // 0x1140b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1140b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1140bc:
    // 0x1140bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1140BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1140C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140BCu;
        // 0x1140c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1140BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1140C4u;
    // 0x1140c4: 0x0  nop
    ctx->pc = 0x1140c4u;
    // NOP
    // 0x1140c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1140c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1140cc: 0x0  nop
    ctx->pc = 0x1140ccu;
    // NOP
    ctx->pc = 0x1140d0u;
}
