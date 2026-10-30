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

// Function: sub_003A0A28
// Address: 0x3a0a28 - 0x3a0a68
void sub_003A0A28_0x3a0a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0A28_0x3a0a28");
#endif

    switch (ctx->pc) {
        case 0x3a0a28u: goto label_3a0a28;
        case 0x3a0a2cu: goto label_3a0a2c;
        case 0x3a0a30u: goto label_3a0a30;
        case 0x3a0a34u: goto label_3a0a34;
        case 0x3a0a38u: goto label_3a0a38;
        case 0x3a0a3cu: goto label_3a0a3c;
        case 0x3a0a40u: goto label_3a0a40;
        case 0x3a0a44u: goto label_3a0a44;
        case 0x3a0a48u: goto label_3a0a48;
        case 0x3a0a4cu: goto label_3a0a4c;
        case 0x3a0a50u: goto label_3a0a50;
        case 0x3a0a54u: goto label_3a0a54;
        case 0x3a0a58u: goto label_3a0a58;
        case 0x3a0a5cu: goto label_3a0a5c;
        case 0x3a0a60u: goto label_3a0a60;
        case 0x3a0a64u: goto label_3a0a64;
        default: break;
    }

    ctx->pc = 0x3a0a28u;

label_3a0a28:
    // 0x3a0a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a0a2c:
    // 0x3a0a2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a0a30:
    // 0x3a0a30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a0a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a0a34:
    // 0x3a0a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a0a38:
    // 0x3a0a38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0a3c:
    // 0x3a0a3c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x3a0a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_3a0a40:
    // 0x3a0a40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3a0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a0a44:
    // 0x3a0a44: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3a0a44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3a0a48:
    // 0x3a0a48: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3a0a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3a0a4c:
    // 0x3a0a4c: 0x40f809  jalr        $v0
label_3a0a50:
    if (ctx->pc == 0x3A0A50u) {
        ctx->pc = 0x3A0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A4Cu;
        // 0x3a0a50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0A54u;
        goto label_3a0a54;
    }
    ctx->pc = 0x3A0A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A0A54u);
        ctx->pc = 0x3A0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A4Cu;
        // 0x3a0a50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0A4Cu, 0x3A0A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A0A54u;
label_3a0a54:
    // 0x3a0a54: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x3a0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_3a0a58:
    // 0x3a0a58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a0a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a0a5c:
    // 0x3a0a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0a60:
    // 0x3a0a60: 0x3e00008  jr          $ra
label_3a0a64:
    if (ctx->pc == 0x3A0A64u) {
        ctx->pc = 0x3A0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A60u;
        // 0x3a0a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0A68u;
        goto label_fallthrough_0x3a0a60;
    }
    ctx->pc = 0x3A0A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A60u;
        // 0x3a0a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a0a60:
    ctx->pc = 0x3A0A68u;
}
