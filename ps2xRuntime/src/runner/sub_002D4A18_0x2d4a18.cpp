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

// Function: sub_002D4A18
// Address: 0x2d4a18 - 0x2d4a58
void sub_002D4A18_0x2d4a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4A18_0x2d4a18");
#endif

    switch (ctx->pc) {
        case 0x2d4a18u: goto label_2d4a18;
        case 0x2d4a1cu: goto label_2d4a1c;
        case 0x2d4a20u: goto label_2d4a20;
        case 0x2d4a24u: goto label_2d4a24;
        case 0x2d4a28u: goto label_2d4a28;
        case 0x2d4a2cu: goto label_2d4a2c;
        case 0x2d4a30u: goto label_2d4a30;
        case 0x2d4a34u: goto label_2d4a34;
        case 0x2d4a38u: goto label_2d4a38;
        case 0x2d4a3cu: goto label_2d4a3c;
        case 0x2d4a40u: goto label_2d4a40;
        case 0x2d4a44u: goto label_2d4a44;
        case 0x2d4a48u: goto label_2d4a48;
        case 0x2d4a4cu: goto label_2d4a4c;
        case 0x2d4a50u: goto label_2d4a50;
        case 0x2d4a54u: goto label_2d4a54;
        default: break;
    }

    ctx->pc = 0x2d4a18u;

label_2d4a18:
    // 0x2d4a18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d4a1c:
    // 0x2d4a1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d4a20:
    // 0x2d4a20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d4a24:
    // 0x2d4a24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d4a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d4a28:
    // 0x2d4a28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d4a2c:
    // 0x2d4a2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d4a2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d4a30:
    // 0x2d4a30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d4a34:
    // 0x2d4a34: 0x40f809  jalr        $v0
label_2d4a38:
    if (ctx->pc == 0x2D4A38u) {
        ctx->pc = 0x2D4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A34u;
        // 0x2d4a38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4A3Cu;
        goto label_2d4a3c;
    }
    ctx->pc = 0x2D4A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D4A3Cu);
        ctx->pc = 0x2D4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A34u;
        // 0x2d4a38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4A34u, 0x2D4A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D4A3Cu;
label_2d4a3c:
    // 0x2d4a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d4a40:
    // 0x2d4a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4a44:
    // 0x2d4a44: 0xc08e1a4  jal         func_238690
label_2d4a48:
    if (ctx->pc == 0x2D4A48u) {
        ctx->pc = 0x2D4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A44u;
        // 0x2d4a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4A4Cu;
        goto label_2d4a4c;
    }
    ctx->pc = 0x2D4A44u;
    SET_GPR_U32(ctx, 31, 0x2D4A4Cu);
    ctx->pc = 0x2D4A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4A44u;
    // 0x2d4a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2D4A44u, 0x2D4A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A4Cu;
label_2d4a4c:
    // 0x2d4a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4a50:
    // 0x2d4a50: 0x3e00008  jr          $ra
label_2d4a54:
    if (ctx->pc == 0x2D4A54u) {
        ctx->pc = 0x2D4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A50u;
        // 0x2d4a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4A58u;
        goto label_fallthrough_0x2d4a50;
    }
    ctx->pc = 0x2D4A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A50u;
        // 0x2d4a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d4a50:
    ctx->pc = 0x2D4A58u;
}
