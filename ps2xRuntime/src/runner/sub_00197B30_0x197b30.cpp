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

// Function: sub_00197B30
// Address: 0x197b30 - 0x197b78
void sub_00197B30_0x197b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197B30_0x197b30");
#endif

    switch (ctx->pc) {
        case 0x197b30u: goto label_197b30;
        case 0x197b34u: goto label_197b34;
        case 0x197b38u: goto label_197b38;
        case 0x197b3cu: goto label_197b3c;
        case 0x197b40u: goto label_197b40;
        case 0x197b44u: goto label_197b44;
        case 0x197b48u: goto label_197b48;
        case 0x197b4cu: goto label_197b4c;
        case 0x197b50u: goto label_197b50;
        case 0x197b54u: goto label_197b54;
        case 0x197b58u: goto label_197b58;
        case 0x197b5cu: goto label_197b5c;
        case 0x197b60u: goto label_197b60;
        case 0x197b64u: goto label_197b64;
        case 0x197b68u: goto label_197b68;
        case 0x197b6cu: goto label_197b6c;
        case 0x197b70u: goto label_197b70;
        case 0x197b74u: goto label_197b74;
        default: break;
    }

    ctx->pc = 0x197b30u;

label_197b30:
    // 0x197b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_197b34:
    // 0x197b34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x197b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_197b38:
    // 0x197b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_197b3c:
    // 0x197b3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x197b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197b40:
    // 0x197b40: 0x8c47cdb4  lw          $a3, -0x324C($v0)
    ctx->pc = 0x197b40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_197b44:
    // 0x197b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197b48:
    // 0x197b48: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x197b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_197b4c:
    // 0x197b4c: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x197b4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_197b50:
    // 0x197b50: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x197b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_197b54:
    // 0x197b54: 0x40f809  jalr        $v0
label_197b58:
    if (ctx->pc == 0x197B58u) {
        ctx->pc = 0x197B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B54u;
        // 0x197b58: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B5Cu;
        goto label_197b5c;
    }
    ctx->pc = 0x197B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197B5Cu);
        ctx->pc = 0x197B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B54u;
        // 0x197b58: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197B54u, 0x197B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197B5Cu;
label_197b5c:
    // 0x197b5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197b60:
    // 0x197b60: 0xc051052  jal         func_144148
label_197b64:
    if (ctx->pc == 0x197B64u) {
        ctx->pc = 0x197B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B60u;
        // 0x197b64: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B68u;
        goto label_197b68;
    }
    ctx->pc = 0x197B60u;
    SET_GPR_U32(ctx, 31, 0x197B68u);
    ctx->pc = 0x197B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B60u;
    // 0x197b64: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144148u, 0x197B60u, 0x197B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B68u;
label_197b68:
    // 0x197b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197b6c:
    // 0x197b6c: 0x3e00008  jr          $ra
label_197b70:
    if (ctx->pc == 0x197B70u) {
        ctx->pc = 0x197B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B6Cu;
        // 0x197b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B74u;
        goto label_197b74;
    }
    ctx->pc = 0x197B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B6Cu;
        // 0x197b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197B74u;
label_197b74:
    // 0x197b74: 0x0  nop
    ctx->pc = 0x197b74u;
    // NOP
    ctx->pc = 0x197b78u;
}
