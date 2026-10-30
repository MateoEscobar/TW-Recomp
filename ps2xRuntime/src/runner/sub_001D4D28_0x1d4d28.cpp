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

// Function: sub_001D4D28
// Address: 0x1d4d28 - 0x1d4db8
void sub_001D4D28_0x1d4d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4D28_0x1d4d28");
#endif

    switch (ctx->pc) {
        case 0x1d4d28u: goto label_1d4d28;
        case 0x1d4d2cu: goto label_1d4d2c;
        case 0x1d4d30u: goto label_1d4d30;
        case 0x1d4d34u: goto label_1d4d34;
        case 0x1d4d38u: goto label_1d4d38;
        case 0x1d4d3cu: goto label_1d4d3c;
        case 0x1d4d40u: goto label_1d4d40;
        case 0x1d4d44u: goto label_1d4d44;
        case 0x1d4d48u: goto label_1d4d48;
        case 0x1d4d4cu: goto label_1d4d4c;
        case 0x1d4d50u: goto label_1d4d50;
        case 0x1d4d54u: goto label_1d4d54;
        case 0x1d4d58u: goto label_1d4d58;
        case 0x1d4d5cu: goto label_1d4d5c;
        case 0x1d4d60u: goto label_1d4d60;
        case 0x1d4d64u: goto label_1d4d64;
        case 0x1d4d68u: goto label_1d4d68;
        case 0x1d4d6cu: goto label_1d4d6c;
        case 0x1d4d70u: goto label_1d4d70;
        case 0x1d4d74u: goto label_1d4d74;
        case 0x1d4d78u: goto label_1d4d78;
        case 0x1d4d7cu: goto label_1d4d7c;
        case 0x1d4d80u: goto label_1d4d80;
        case 0x1d4d84u: goto label_1d4d84;
        case 0x1d4d88u: goto label_1d4d88;
        case 0x1d4d8cu: goto label_1d4d8c;
        case 0x1d4d90u: goto label_1d4d90;
        case 0x1d4d94u: goto label_1d4d94;
        case 0x1d4d98u: goto label_1d4d98;
        case 0x1d4d9cu: goto label_1d4d9c;
        case 0x1d4da0u: goto label_1d4da0;
        case 0x1d4da4u: goto label_1d4da4;
        case 0x1d4da8u: goto label_1d4da8;
        case 0x1d4dacu: goto label_1d4dac;
        case 0x1d4db0u: goto label_1d4db0;
        case 0x1d4db4u: goto label_1d4db4;
        default: break;
    }

    ctx->pc = 0x1d4d28u;

label_1d4d28:
    // 0x1d4d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d4d2c:
    // 0x1d4d2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d4d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d4d30:
    // 0x1d4d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d4d34:
    // 0x1d4d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d38:
    // 0x1d4d38: 0xc051800  jal         func_146000
label_1d4d3c:
    if (ctx->pc == 0x1D4D3Cu) {
        ctx->pc = 0x1D4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D38u;
        // 0x1d4d3c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D40u;
        goto label_1d4d40;
    }
    ctx->pc = 0x1D4D38u;
    SET_GPR_U32(ctx, 31, 0x1D4D40u);
    ctx->pc = 0x1D4D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D38u;
    // 0x1d4d3c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1D4D38u, 0x1D4D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D40u;
label_1d4d40:
    // 0x1d4d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4d44:
    // 0x1d4d44: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x1d4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d4d48:
    // 0x1d4d48: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1d4d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1d4d4c:
    // 0x1d4d4c: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1d4d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1d4d50:
    // 0x1d4d50: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1d4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d4d54:
    // 0x1d4d54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d4d58:
    // 0x1d4d58: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1d4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d4d5c:
    // 0x1d4d5c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d4d5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1d4d60:
    // 0x1d4d60: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1d4d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d4d64:
    // 0x1d4d64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d4d68:
    if (ctx->pc == 0x1D4D68u) {
        ctx->pc = 0x1D4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D64u;
        // 0x1d4d68: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D6Cu;
        goto label_1d4d6c;
    }
    ctx->pc = 0x1D4D64u;
    {
        const bool branch_taken_0x1d4d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D64u;
        // 0x1d4d68: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d64) {
            ctx->pc = 0x1D4D88u;
            goto label_1d4d88;
        }
    }
    ctx->pc = 0x1D4D6Cu;
label_1d4d6c:
    // 0x1d4d6c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4d70:
    // 0x1d4d70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4d74:
    // 0x1d4d74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4d78:
    // 0x1d4d78: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1d4d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1d4d7c:
    // 0x1d4d7c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1d4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1d4d80:
    // 0x1d4d80: 0x40f809  jalr        $v0
label_1d4d84:
    if (ctx->pc == 0x1D4D84u) {
        ctx->pc = 0x1D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D80u;
        // 0x1d4d84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D88u;
        goto label_1d4d88;
    }
    ctx->pc = 0x1D4D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4D88u);
        ctx->pc = 0x1D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D80u;
        // 0x1d4d84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4D80u, 0x1D4D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4D88u;
label_1d4d88:
    // 0x1d4d88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d4d8c:
    // 0x1d4d8c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1d4d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1d4d90:
    // 0x1d4d90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d4d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4d94:
    // 0x1d4d94: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1d4d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1d4d98:
    // 0x1d4d98: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d4d9c:
    // 0x1d4d9c: 0x40f809  jalr        $v0
label_1d4da0:
    if (ctx->pc == 0x1D4DA0u) {
        ctx->pc = 0x1D4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D9Cu;
        // 0x1d4da0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DA4u;
        goto label_1d4da4;
    }
    ctx->pc = 0x1D4D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4DA4u);
        ctx->pc = 0x1D4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D9Cu;
        // 0x1d4da0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4D9Cu, 0x1D4DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4DA4u;
label_1d4da4:
    // 0x1d4da4: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x1d4da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_1d4da8:
    // 0x1d4da8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d4da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4dac:
    // 0x1d4dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4db0:
    // 0x1d4db0: 0x3e00008  jr          $ra
label_1d4db4:
    if (ctx->pc == 0x1D4DB4u) {
        ctx->pc = 0x1D4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DB0u;
        // 0x1d4db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DB8u;
        goto label_fallthrough_0x1d4db0;
    }
    ctx->pc = 0x1D4DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DB0u;
        // 0x1d4db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d4db0:
    ctx->pc = 0x1D4DB8u;
}
