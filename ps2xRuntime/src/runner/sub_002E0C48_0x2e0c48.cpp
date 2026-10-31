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

// Function: sub_002E0C48
// Address: 0x2e0c48 - 0x2e0ce0
void sub_002E0C48_0x2e0c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0C48_0x2e0c48");
#endif

    switch (ctx->pc) {
        case 0x2e0c48u: goto label_2e0c48;
        case 0x2e0c4cu: goto label_2e0c4c;
        case 0x2e0c50u: goto label_2e0c50;
        case 0x2e0c54u: goto label_2e0c54;
        case 0x2e0c58u: goto label_2e0c58;
        case 0x2e0c5cu: goto label_2e0c5c;
        case 0x2e0c60u: goto label_2e0c60;
        case 0x2e0c64u: goto label_2e0c64;
        case 0x2e0c68u: goto label_2e0c68;
        case 0x2e0c6cu: goto label_2e0c6c;
        case 0x2e0c70u: goto label_2e0c70;
        case 0x2e0c74u: goto label_2e0c74;
        case 0x2e0c78u: goto label_2e0c78;
        case 0x2e0c7cu: goto label_2e0c7c;
        case 0x2e0c80u: goto label_2e0c80;
        case 0x2e0c84u: goto label_2e0c84;
        case 0x2e0c88u: goto label_2e0c88;
        case 0x2e0c8cu: goto label_2e0c8c;
        case 0x2e0c90u: goto label_2e0c90;
        case 0x2e0c94u: goto label_2e0c94;
        case 0x2e0c98u: goto label_2e0c98;
        case 0x2e0c9cu: goto label_2e0c9c;
        case 0x2e0ca0u: goto label_2e0ca0;
        case 0x2e0ca4u: goto label_2e0ca4;
        case 0x2e0ca8u: goto label_2e0ca8;
        case 0x2e0cacu: goto label_2e0cac;
        case 0x2e0cb0u: goto label_2e0cb0;
        case 0x2e0cb4u: goto label_2e0cb4;
        case 0x2e0cb8u: goto label_2e0cb8;
        case 0x2e0cbcu: goto label_2e0cbc;
        case 0x2e0cc0u: goto label_2e0cc0;
        case 0x2e0cc4u: goto label_2e0cc4;
        case 0x2e0cc8u: goto label_2e0cc8;
        case 0x2e0cccu: goto label_2e0ccc;
        case 0x2e0cd0u: goto label_2e0cd0;
        case 0x2e0cd4u: goto label_2e0cd4;
        case 0x2e0cd8u: goto label_2e0cd8;
        case 0x2e0cdcu: goto label_2e0cdc;
        default: break;
    }

    ctx->pc = 0x2e0c48u;

label_2e0c48:
    // 0x2e0c48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e0c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2e0c4c:
    // 0x2e0c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0c50:
    // 0x2e0c50: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e0c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2e0c54:
    // 0x2e0c54: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e0c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2e0c58:
    // 0x2e0c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e0c5c:
    // 0x2e0c5c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e0c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e0c60:
    // 0x2e0c60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e0c64:
    // 0x2e0c64: 0x9204005a  lbu         $a0, 0x5A($s0)
    ctx->pc = 0x2e0c64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_2e0c68:
    // 0x2e0c68: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
label_2e0c6c:
    if (ctx->pc == 0x2E0C6Cu) {
        ctx->pc = 0x2E0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C68u;
        // 0x2e0c6c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0C70u;
        goto label_2e0c70;
    }
    ctx->pc = 0x2E0C68u;
    {
        const bool branch_taken_0x2e0c68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C68u;
        // 0x2e0c6c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c68) {
            ctx->pc = 0x2E0CC8u;
            goto label_2e0cc8;
        }
    }
    ctx->pc = 0x2E0C70u;
label_2e0c70:
    // 0x2e0c70: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e0c74:
    // 0x2e0c74: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x2e0c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
label_2e0c78:
    // 0x2e0c78: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e0c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2e0c7c:
    // 0x2e0c7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e0c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e0c80:
    // 0x2e0c80: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x2e0c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2e0c84:
    // 0x2e0c84: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e0c88:
    // 0x2e0c88: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2e0c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2e0c8c:
    // 0x2e0c8c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2e0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2e0c90:
    // 0x2e0c90: 0x40f809  jalr        $v0
label_2e0c94:
    if (ctx->pc == 0x2E0C94u) {
        ctx->pc = 0x2E0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C90u;
        // 0x2e0c94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0C98u;
        goto label_2e0c98;
    }
    ctx->pc = 0x2E0C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E0C98u);
        ctx->pc = 0x2E0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C90u;
        // 0x2e0c94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0C90u, 0x2E0C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0C98u;
label_2e0c98:
    // 0x2e0c98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e0c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0c9c:
    // 0x2e0c9c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2e0c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e0ca0:
    // 0x2e0ca0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e0ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e0ca4:
    // 0x2e0ca4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e0ca8:
    // 0x2e0ca8: 0x8cb0020c  lw          $s0, 0x20C($a1)
    ctx->pc = 0x2e0ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_2e0cac:
    // 0x2e0cac: 0x40f809  jalr        $v0
label_2e0cb0:
    if (ctx->pc == 0x2E0CB0u) {
        ctx->pc = 0x2E0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CACu;
        // 0x2e0cb0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0CB4u;
        goto label_2e0cb4;
    }
    ctx->pc = 0x2E0CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E0CB4u);
        ctx->pc = 0x2E0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CACu;
        // 0x2e0cb0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0CACu, 0x2E0CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0CB4u;
label_2e0cb4:
    // 0x2e0cb4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2e0cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2e0cb8:
    // 0x2e0cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0cbc:
    // 0x2e0cbc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2e0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e0cc0:
    // 0x2e0cc0: 0xc059308  jal         func_164C20
label_2e0cc4:
    if (ctx->pc == 0x2E0CC4u) {
        ctx->pc = 0x2E0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CC0u;
        // 0x2e0cc4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0CC8u;
        goto label_2e0cc8;
    }
    ctx->pc = 0x2E0CC0u;
    SET_GPR_U32(ctx, 31, 0x2E0CC8u);
    ctx->pc = 0x2E0CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0CC0u;
    // 0x2e0cc4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C20u, 0x2E0CC0u, 0x2E0CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CC8u;
label_2e0cc8:
    // 0x2e0cc8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e0cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e0ccc:
    // 0x2e0ccc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e0cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e0cd0:
    // 0x2e0cd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e0cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e0cd4:
    // 0x2e0cd4: 0x3e00008  jr          $ra
label_2e0cd8:
    if (ctx->pc == 0x2E0CD8u) {
        ctx->pc = 0x2E0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CD4u;
        // 0x2e0cd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0CDCu;
        goto label_2e0cdc;
    }
    ctx->pc = 0x2E0CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CD4u;
        // 0x2e0cd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0CDCu;
label_2e0cdc:
    // 0x2e0cdc: 0x0  nop
    ctx->pc = 0x2e0cdcu;
    // NOP
    ctx->pc = 0x2e0ce0u;
}
