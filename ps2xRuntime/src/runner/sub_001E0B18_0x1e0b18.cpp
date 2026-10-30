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

// Function: sub_001E0B18
// Address: 0x1e0b18 - 0x1e0b58
void sub_001E0B18_0x1e0b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0B18_0x1e0b18");
#endif

    switch (ctx->pc) {
        case 0x1e0b18u: goto label_1e0b18;
        case 0x1e0b1cu: goto label_1e0b1c;
        case 0x1e0b20u: goto label_1e0b20;
        case 0x1e0b24u: goto label_1e0b24;
        case 0x1e0b28u: goto label_1e0b28;
        case 0x1e0b2cu: goto label_1e0b2c;
        case 0x1e0b30u: goto label_1e0b30;
        case 0x1e0b34u: goto label_1e0b34;
        case 0x1e0b38u: goto label_1e0b38;
        case 0x1e0b3cu: goto label_1e0b3c;
        case 0x1e0b40u: goto label_1e0b40;
        case 0x1e0b44u: goto label_1e0b44;
        case 0x1e0b48u: goto label_1e0b48;
        case 0x1e0b4cu: goto label_1e0b4c;
        case 0x1e0b50u: goto label_1e0b50;
        case 0x1e0b54u: goto label_1e0b54;
        default: break;
    }

    ctx->pc = 0x1e0b18u;

label_1e0b18:
    // 0x1e0b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e0b1c:
    // 0x1e0b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0b20:
    // 0x1e0b20: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1e0b20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0b24:
    // 0x1e0b24: 0x8c870060  lw          $a3, 0x60($a0)
    ctx->pc = 0x1e0b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_1e0b28:
    // 0x1e0b28: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_1e0b2c:
    if (ctx->pc == 0x1E0B2Cu) {
        ctx->pc = 0x1E0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B28u;
        // 0x1e0b2c: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B30u;
        goto label_1e0b30;
    }
    ctx->pc = 0x1E0B28u;
    {
        const bool branch_taken_0x1e0b28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B28u;
        // 0x1e0b2c: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b28) {
            ctx->pc = 0x1E0B4Cu;
            goto label_1e0b4c;
        }
    }
    ctx->pc = 0x1E0B30u;
label_1e0b30:
    // 0x1e0b30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1e0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e0b34:
    // 0x1e0b34: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x1e0b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1e0b38:
    // 0x1e0b38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0b3c:
    // 0x1e0b3c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e0b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e0b40:
    // 0x1e0b40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e0b44:
    // 0x1e0b44: 0x60f809  jalr        $v1
label_1e0b48:
    if (ctx->pc == 0x1E0B48u) {
        ctx->pc = 0x1E0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B44u;
        // 0x1e0b48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B4Cu;
        goto label_1e0b4c;
    }
    ctx->pc = 0x1E0B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0B4Cu);
        ctx->pc = 0x1E0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B44u;
        // 0x1e0b48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B44u, 0x1E0B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0B4Cu;
label_1e0b4c:
    // 0x1e0b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0b50:
    // 0x1e0b50: 0x3e00008  jr          $ra
label_1e0b54:
    if (ctx->pc == 0x1E0B54u) {
        ctx->pc = 0x1E0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B50u;
        // 0x1e0b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B58u;
        goto label_fallthrough_0x1e0b50;
    }
    ctx->pc = 0x1E0B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B50u;
        // 0x1e0b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0b50:
    ctx->pc = 0x1E0B58u;
}
