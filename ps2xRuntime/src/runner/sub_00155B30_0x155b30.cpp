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

// Function: sub_00155B30
// Address: 0x155b30 - 0x155b98
void sub_00155B30_0x155b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155B30_0x155b30");
#endif

    switch (ctx->pc) {
        case 0x155b30u: goto label_155b30;
        case 0x155b34u: goto label_155b34;
        case 0x155b38u: goto label_155b38;
        case 0x155b3cu: goto label_155b3c;
        case 0x155b40u: goto label_155b40;
        case 0x155b44u: goto label_155b44;
        case 0x155b48u: goto label_155b48;
        case 0x155b4cu: goto label_155b4c;
        case 0x155b50u: goto label_155b50;
        case 0x155b54u: goto label_155b54;
        case 0x155b58u: goto label_155b58;
        case 0x155b5cu: goto label_155b5c;
        case 0x155b60u: goto label_155b60;
        case 0x155b64u: goto label_155b64;
        case 0x155b68u: goto label_155b68;
        case 0x155b6cu: goto label_155b6c;
        case 0x155b70u: goto label_155b70;
        case 0x155b74u: goto label_155b74;
        case 0x155b78u: goto label_155b78;
        case 0x155b7cu: goto label_155b7c;
        case 0x155b80u: goto label_155b80;
        case 0x155b84u: goto label_155b84;
        case 0x155b88u: goto label_155b88;
        case 0x155b8cu: goto label_155b8c;
        case 0x155b90u: goto label_155b90;
        case 0x155b94u: goto label_155b94;
        default: break;
    }

    ctx->pc = 0x155b30u;

label_155b30:
    // 0x155b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_155b34:
    // 0x155b34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x155b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_155b38:
    // 0x155b38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x155b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_155b3c:
    // 0x155b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155b40:
    // 0x155b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155b44:
    // 0x155b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155b48:
    // 0x155b48: 0xc0e8b20  jal         func_3A2C80
label_155b4c:
    if (ctx->pc == 0x155B4Cu) {
        ctx->pc = 0x155B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B48u;
        // 0x155b4c: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B50u;
        goto label_155b50;
    }
    ctx->pc = 0x155B48u;
    SET_GPR_U32(ctx, 31, 0x155B50u);
    ctx->pc = 0x155B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B48u;
    // 0x155b4c: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x155B48u, 0x155B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B50u;
label_155b50:
    // 0x155b50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x155b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_155b54:
    // 0x155b54: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x155b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_155b58:
    // 0x155b58: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x155b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_155b5c:
    // 0x155b5c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x155b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_155b60:
    // 0x155b60: 0xc043ec8  jal         func_10FB20
label_155b64:
    if (ctx->pc == 0x155B64u) {
        ctx->pc = 0x155B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B60u;
        // 0x155b64: 0xae050008  sw          $a1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B68u;
        goto label_155b68;
    }
    ctx->pc = 0x155B60u;
    SET_GPR_U32(ctx, 31, 0x155B68u);
    ctx->pc = 0x155B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B60u;
    // 0x155b64: 0xae050008  sw          $a1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB20u, 0x155B60u, 0x155B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B68u;
label_155b68:
    // 0x155b68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x155b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_155b6c:
    // 0x155b6c: 0x8c45ebec  lw          $a1, -0x1414($v0)
    ctx->pc = 0x155b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962156)));
label_155b70:
    // 0x155b70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x155b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_155b74:
    // 0x155b74: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x155b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_155b78:
    // 0x155b78: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x155b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_155b7c:
    // 0x155b7c: 0x40f809  jalr        $v0
label_155b80:
    if (ctx->pc == 0x155B80u) {
        ctx->pc = 0x155B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B7Cu;
        // 0x155b80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B84u;
        goto label_155b84;
    }
    ctx->pc = 0x155B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155B84u);
        ctx->pc = 0x155B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B7Cu;
        // 0x155b80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155B7Cu, 0x155B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155B84u;
label_155b84:
    // 0x155b84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x155b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155b88:
    // 0x155b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155b8c:
    // 0x155b8c: 0x3e00008  jr          $ra
label_155b90:
    if (ctx->pc == 0x155B90u) {
        ctx->pc = 0x155B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B8Cu;
        // 0x155b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B94u;
        goto label_155b94;
    }
    ctx->pc = 0x155B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B8Cu;
        // 0x155b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155B94u;
label_155b94:
    // 0x155b94: 0x0  nop
    ctx->pc = 0x155b94u;
    // NOP
    ctx->pc = 0x155b98u;
}
