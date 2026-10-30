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

// Function: sub_00101BF0
// Address: 0x101bf0 - 0x101c20
void sub_00101BF0_0x101bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101BF0_0x101bf0");
#endif

    switch (ctx->pc) {
        case 0x101c00u: goto label_101c00;
        default: break;
    }

    ctx->pc = 0x101bf0u;

    // 0x101bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101bf8: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x101BF8u;
    SET_GPR_U32(ctx, 31, 0x101C00u);
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x101BF8u, 0x101C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C00u;
label_101c00:
    // 0x101c00: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x101C00u;
    {
        const bool branch_taken_0x101c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101c00) {
            ctx->pc = 0x101C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101C00u;
            // 0x101c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101C14u;
            goto label_101c14;
        }
    }
    ctx->pc = 0x101C08u;
    // 0x101c08: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x101c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x101c0c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x101c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x101c10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x101c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101c14:
    // 0x101c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101c18: 0x3e00008  jr          $ra
    ctx->pc = 0x101C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C18u;
        // 0x101c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101C20u;
}
