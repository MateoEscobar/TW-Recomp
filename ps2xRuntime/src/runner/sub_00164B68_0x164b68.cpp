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

// Function: sub_00164B68
// Address: 0x164b68 - 0x164bb8
void sub_00164B68_0x164b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164B68_0x164b68");
#endif

    switch (ctx->pc) {
        case 0x164b68u: goto label_164b68;
        case 0x164b6cu: goto label_164b6c;
        case 0x164b70u: goto label_164b70;
        case 0x164b74u: goto label_164b74;
        case 0x164b78u: goto label_164b78;
        case 0x164b7cu: goto label_164b7c;
        case 0x164b80u: goto label_164b80;
        case 0x164b84u: goto label_164b84;
        case 0x164b88u: goto label_164b88;
        case 0x164b8cu: goto label_164b8c;
        case 0x164b90u: goto label_164b90;
        case 0x164b94u: goto label_164b94;
        case 0x164b98u: goto label_164b98;
        case 0x164b9cu: goto label_164b9c;
        case 0x164ba0u: goto label_164ba0;
        case 0x164ba4u: goto label_164ba4;
        case 0x164ba8u: goto label_164ba8;
        case 0x164bacu: goto label_164bac;
        case 0x164bb0u: goto label_164bb0;
        case 0x164bb4u: goto label_164bb4;
        default: break;
    }

    ctx->pc = 0x164b68u;

label_164b68:
    // 0x164b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_164b6c:
    // 0x164b6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x164b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_164b70:
    // 0x164b70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_164b74:
    // 0x164b74: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_164b78:
    if (ctx->pc == 0x164B78u) {
        ctx->pc = 0x164B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B74u;
        // 0x164b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B7Cu;
        goto label_164b7c;
    }
    ctx->pc = 0x164B74u;
    {
        const bool branch_taken_0x164b74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B74u;
        // 0x164b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b74) {
            ctx->pc = 0x164BA0u;
            goto label_164ba0;
        }
    }
    ctx->pc = 0x164B7Cu;
label_164b7c:
    // 0x164b7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x164b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_164b80:
    // 0x164b80: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x164b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_164b84:
    // 0x164b84: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x164b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_164b88:
    // 0x164b88: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x164b88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_164b8c:
    // 0x164b8c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x164b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_164b90:
    // 0x164b90: 0x40f809  jalr        $v0
label_164b94:
    if (ctx->pc == 0x164B94u) {
        ctx->pc = 0x164B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B90u;
        // 0x164b94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B98u;
        goto label_164b98;
    }
    ctx->pc = 0x164B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164B98u);
        ctx->pc = 0x164B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B90u;
        // 0x164b94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B90u, 0x164B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164B98u;
label_164b98:
    // 0x164b98: 0x10000002  b           . + 4 + (0x2 << 2)
label_164b9c:
    if (ctx->pc == 0x164B9Cu) {
        ctx->pc = 0x164B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B98u;
        // 0x164b9c: 0xae020158  sw          $v0, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164BA0u;
        goto label_164ba0;
    }
    ctx->pc = 0x164B98u;
    {
        const bool branch_taken_0x164b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B98u;
        // 0x164b9c: 0xae020158  sw          $v0, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b98) {
            ctx->pc = 0x164BA4u;
            goto label_164ba4;
        }
    }
    ctx->pc = 0x164BA0u;
label_164ba0:
    // 0x164ba0: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x164ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_164ba4:
    // 0x164ba4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x164ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_164ba8:
    // 0x164ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164bac:
    // 0x164bac: 0x3e00008  jr          $ra
label_164bb0:
    if (ctx->pc == 0x164BB0u) {
        ctx->pc = 0x164BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BACu;
        // 0x164bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164BB4u;
        goto label_164bb4;
    }
    ctx->pc = 0x164BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BACu;
        // 0x164bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164BB4u;
label_164bb4:
    // 0x164bb4: 0x0  nop
    ctx->pc = 0x164bb4u;
    // NOP
    ctx->pc = 0x164bb8u;
}
