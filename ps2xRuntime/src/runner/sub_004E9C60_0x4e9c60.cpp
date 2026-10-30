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

// Function: sub_004E9C60
// Address: 0x4e9c60 - 0x4e9ca8
void sub_004E9C60_0x4e9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9C60_0x4e9c60");
#endif

    switch (ctx->pc) {
        case 0x4e9c60u: goto label_4e9c60;
        case 0x4e9c64u: goto label_4e9c64;
        case 0x4e9c68u: goto label_4e9c68;
        case 0x4e9c6cu: goto label_4e9c6c;
        case 0x4e9c70u: goto label_4e9c70;
        case 0x4e9c74u: goto label_4e9c74;
        case 0x4e9c78u: goto label_4e9c78;
        case 0x4e9c7cu: goto label_4e9c7c;
        case 0x4e9c80u: goto label_4e9c80;
        case 0x4e9c84u: goto label_4e9c84;
        case 0x4e9c88u: goto label_4e9c88;
        case 0x4e9c8cu: goto label_4e9c8c;
        case 0x4e9c90u: goto label_4e9c90;
        case 0x4e9c94u: goto label_4e9c94;
        case 0x4e9c98u: goto label_4e9c98;
        case 0x4e9c9cu: goto label_4e9c9c;
        case 0x4e9ca0u: goto label_4e9ca0;
        case 0x4e9ca4u: goto label_4e9ca4;
        default: break;
    }

    ctx->pc = 0x4e9c60u;

label_4e9c60:
    // 0x4e9c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4e9c64:
    // 0x4e9c64: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4e9c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9c68:
    // 0x4e9c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9c6c:
    // 0x4e9c6c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4e9c70:
    if (ctx->pc == 0x4E9C70u) {
        ctx->pc = 0x4E9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C6Cu;
        // 0x4e9c70: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9C74u;
        goto label_4e9c74;
    }
    ctx->pc = 0x4E9C6Cu;
    {
        const bool branch_taken_0x4e9c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C6Cu;
        // 0x4e9c70: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9c6c) {
            ctx->pc = 0x4E9C98u;
            goto label_4e9c98;
        }
    }
    ctx->pc = 0x4E9C74u;
label_4e9c74:
    // 0x4e9c74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e9c78:
    // 0x4e9c78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4e9c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9c7c:
    // 0x4e9c7c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e9c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e9c80:
    // 0x4e9c80: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4e9c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4e9c84:
    // 0x4e9c84: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9c88:
    // 0x4e9c88: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9c8c:
    // 0x4e9c8c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9c90:
    // 0x4e9c90: 0x60f809  jalr        $v1
label_4e9c94:
    if (ctx->pc == 0x4E9C94u) {
        ctx->pc = 0x4E9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C90u;
        // 0x4e9c94: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9C98u;
        goto label_4e9c98;
    }
    ctx->pc = 0x4E9C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9C98u);
        ctx->pc = 0x4E9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C90u;
        // 0x4e9c94: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9C90u, 0x4E9C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9C98u;
label_4e9c98:
    // 0x4e9c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9c9c:
    // 0x4e9c9c: 0x3e00008  jr          $ra
label_4e9ca0:
    if (ctx->pc == 0x4E9CA0u) {
        ctx->pc = 0x4E9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C9Cu;
        // 0x4e9ca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9CA4u;
        goto label_4e9ca4;
    }
    ctx->pc = 0x4E9C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C9Cu;
        // 0x4e9ca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9CA4u;
label_4e9ca4:
    // 0x4e9ca4: 0x0  nop
    ctx->pc = 0x4e9ca4u;
    // NOP
    ctx->pc = 0x4e9ca8u;
}
