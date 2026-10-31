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

// Function: sub_004F3C28
// Address: 0x4f3c28 - 0x4f3c70
void sub_004F3C28_0x4f3c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3C28_0x4f3c28");
#endif

    switch (ctx->pc) {
        case 0x4f3c28u: goto label_4f3c28;
        case 0x4f3c2cu: goto label_4f3c2c;
        case 0x4f3c30u: goto label_4f3c30;
        case 0x4f3c34u: goto label_4f3c34;
        case 0x4f3c38u: goto label_4f3c38;
        case 0x4f3c3cu: goto label_4f3c3c;
        case 0x4f3c40u: goto label_4f3c40;
        case 0x4f3c44u: goto label_4f3c44;
        case 0x4f3c48u: goto label_4f3c48;
        case 0x4f3c4cu: goto label_4f3c4c;
        case 0x4f3c50u: goto label_4f3c50;
        case 0x4f3c54u: goto label_4f3c54;
        case 0x4f3c58u: goto label_4f3c58;
        case 0x4f3c5cu: goto label_4f3c5c;
        case 0x4f3c60u: goto label_4f3c60;
        case 0x4f3c64u: goto label_4f3c64;
        case 0x4f3c68u: goto label_4f3c68;
        case 0x4f3c6cu: goto label_4f3c6c;
        default: break;
    }

    ctx->pc = 0x4f3c28u;

label_4f3c28:
    // 0x4f3c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f3c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f3c2c:
    // 0x4f3c2c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4f3c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3c30:
    // 0x4f3c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f3c34:
    // 0x4f3c34: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4f3c38:
    if (ctx->pc == 0x4F3C38u) {
        ctx->pc = 0x4F3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C34u;
        // 0x4f3c38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3C3Cu;
        goto label_4f3c3c;
    }
    ctx->pc = 0x4F3C34u;
    {
        const bool branch_taken_0x4f3c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C34u;
        // 0x4f3c38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3c34) {
            ctx->pc = 0x4F3C60u;
            goto label_4f3c60;
        }
    }
    ctx->pc = 0x4F3C3Cu;
label_4f3c3c:
    // 0x4f3c3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f3c40:
    // 0x4f3c40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4f3c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3c44:
    // 0x4f3c44: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f3c44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f3c48:
    // 0x4f3c48: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4f3c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f3c4c:
    // 0x4f3c4c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f3c50:
    // 0x4f3c50: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f3c50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f3c54:
    // 0x4f3c54: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f3c58:
    // 0x4f3c58: 0x60f809  jalr        $v1
label_4f3c5c:
    if (ctx->pc == 0x4F3C5Cu) {
        ctx->pc = 0x4F3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C58u;
        // 0x4f3c5c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3C60u;
        goto label_4f3c60;
    }
    ctx->pc = 0x4F3C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F3C60u);
        ctx->pc = 0x4F3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C58u;
        // 0x4f3c5c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3C58u, 0x4F3C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3C60u;
label_4f3c60:
    // 0x4f3c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3c64:
    // 0x4f3c64: 0x3e00008  jr          $ra
label_4f3c68:
    if (ctx->pc == 0x4F3C68u) {
        ctx->pc = 0x4F3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C64u;
        // 0x4f3c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3C6Cu;
        goto label_4f3c6c;
    }
    ctx->pc = 0x4F3C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C64u;
        // 0x4f3c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3C6Cu;
label_4f3c6c:
    // 0x4f3c6c: 0x0  nop
    ctx->pc = 0x4f3c6cu;
    // NOP
    ctx->pc = 0x4f3c70u;
}
