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

// Function: sub_0021B1F0
// Address: 0x21b1f0 - 0x21b228
void sub_0021B1F0_0x21b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B1F0_0x21b1f0");
#endif

    switch (ctx->pc) {
        case 0x21b21cu: goto label_21b21c;
        default: break;
    }

    ctx->pc = 0x21b1f0u;

    // 0x21b1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b1f4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21B1F4u;
    {
        const bool branch_taken_0x21b1f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1F4u;
        // 0x21b1f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1f4) {
            ctx->pc = 0x21B21Cu;
            goto label_21b21c;
        }
    }
    ctx->pc = 0x21B1FCu;
    // 0x21b1fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21b200: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21B200u;
    {
        const bool branch_taken_0x21b200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B200u;
        // 0x21b204: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b200) {
            ctx->pc = 0x21B220u;
            goto label_21b220;
        }
    }
    ctx->pc = 0x21B208u;
    // 0x21b208: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21b208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x21b20c: 0x8c850180  lw          $a1, 0x180($a0)
    ctx->pc = 0x21b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x21b210: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21b210u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x21b214: 0xc0440c6  jal         func_110318
    ctx->pc = 0x21B214u;
    SET_GPR_U32(ctx, 31, 0x21B21Cu);
    ctx->pc = 0x21B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B214u;
    // 0x21b218: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x21B214u, 0x21B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B21Cu;
label_21b21c:
    // 0x21b21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21b220:
    // 0x21b220: 0x3e00008  jr          $ra
    ctx->pc = 0x21B220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B220u;
        // 0x21b224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B228u;
}
