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

// Function: sub_001C2D18
// Address: 0x1c2d18 - 0x1c2d50
void sub_001C2D18_0x1c2d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2D18_0x1c2d18");
#endif

    switch (ctx->pc) {
        case 0x1c2d38u: goto label_1c2d38;
        default: break;
    }

    ctx->pc = 0x1c2d18u;

    // 0x1c2d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2d1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2d24: 0x8c830440  lw          $v1, 0x440($a0)
    ctx->pc = 0x1c2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1088)));
    // 0x1c2d28: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2D28u;
    {
        const bool branch_taken_0x1c2d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2d28) {
            ctx->pc = 0x1C2D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2D28u;
            // 0x1c2d2c: 0xe48c0414  swc1        $f12, 0x414($a0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1044), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D40u;
            goto label_1c2d40;
        }
    }
    ctx->pc = 0x1C2D30u;
    // 0x1c2d30: 0xc070a64  jal         func_1C2990
    ctx->pc = 0x1C2D30u;
    SET_GPR_U32(ctx, 31, 0x1C2D38u);
    ctx->pc = 0x1C2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D30u;
    // 0x1c2d34: 0x24840650  addiu       $a0, $a0, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2990u, 0x1C2D30u, 0x1C2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D38u;
label_1c2d38:
    // 0x1c2d38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2D38u;
    {
        const bool branch_taken_0x1c2d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D38u;
        // 0x1c2d3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d38) {
            ctx->pc = 0x1C2D44u;
            goto label_1c2d44;
        }
    }
    ctx->pc = 0x1C2D40u;
label_1c2d40:
    // 0x1c2d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2d44:
    // 0x1c2d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D44u;
        // 0x1c2d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2D4Cu;
    // 0x1c2d4c: 0x0  nop
    ctx->pc = 0x1c2d4cu;
    // NOP
    ctx->pc = 0x1c2d50u;
}
