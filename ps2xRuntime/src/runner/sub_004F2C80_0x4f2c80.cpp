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

// Function: sub_004F2C80
// Address: 0x4f2c80 - 0x4f2d48
void sub_004F2C80_0x4f2c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2C80_0x4f2c80");
#endif

    switch (ctx->pc) {
        case 0x4f2c80u: goto label_4f2c80;
        case 0x4f2c84u: goto label_4f2c84;
        case 0x4f2c88u: goto label_4f2c88;
        case 0x4f2c8cu: goto label_4f2c8c;
        case 0x4f2c90u: goto label_4f2c90;
        case 0x4f2c94u: goto label_4f2c94;
        case 0x4f2c98u: goto label_4f2c98;
        case 0x4f2c9cu: goto label_4f2c9c;
        case 0x4f2ca0u: goto label_4f2ca0;
        case 0x4f2ca4u: goto label_4f2ca4;
        case 0x4f2ca8u: goto label_4f2ca8;
        case 0x4f2cacu: goto label_4f2cac;
        case 0x4f2cb0u: goto label_4f2cb0;
        case 0x4f2cb4u: goto label_4f2cb4;
        case 0x4f2cb8u: goto label_4f2cb8;
        case 0x4f2cbcu: goto label_4f2cbc;
        case 0x4f2cc0u: goto label_4f2cc0;
        case 0x4f2cc4u: goto label_4f2cc4;
        case 0x4f2cc8u: goto label_4f2cc8;
        case 0x4f2cccu: goto label_4f2ccc;
        case 0x4f2cd0u: goto label_4f2cd0;
        case 0x4f2cd4u: goto label_4f2cd4;
        case 0x4f2cd8u: goto label_4f2cd8;
        case 0x4f2cdcu: goto label_4f2cdc;
        case 0x4f2ce0u: goto label_4f2ce0;
        case 0x4f2ce4u: goto label_4f2ce4;
        case 0x4f2ce8u: goto label_4f2ce8;
        case 0x4f2cecu: goto label_4f2cec;
        case 0x4f2cf0u: goto label_4f2cf0;
        case 0x4f2cf4u: goto label_4f2cf4;
        case 0x4f2cf8u: goto label_4f2cf8;
        case 0x4f2cfcu: goto label_4f2cfc;
        case 0x4f2d00u: goto label_4f2d00;
        case 0x4f2d04u: goto label_4f2d04;
        case 0x4f2d08u: goto label_4f2d08;
        case 0x4f2d0cu: goto label_4f2d0c;
        case 0x4f2d10u: goto label_4f2d10;
        case 0x4f2d14u: goto label_4f2d14;
        case 0x4f2d18u: goto label_4f2d18;
        case 0x4f2d1cu: goto label_4f2d1c;
        case 0x4f2d20u: goto label_4f2d20;
        case 0x4f2d24u: goto label_4f2d24;
        case 0x4f2d28u: goto label_4f2d28;
        case 0x4f2d2cu: goto label_4f2d2c;
        case 0x4f2d30u: goto label_4f2d30;
        case 0x4f2d34u: goto label_4f2d34;
        case 0x4f2d38u: goto label_4f2d38;
        case 0x4f2d3cu: goto label_4f2d3c;
        case 0x4f2d40u: goto label_4f2d40;
        case 0x4f2d44u: goto label_4f2d44;
        default: break;
    }

    ctx->pc = 0x4f2c80u;

label_4f2c80:
    // 0x4f2c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f2c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f2c84:
    // 0x4f2c84: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f2c88:
    // 0x4f2c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f2c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f2c8c:
    // 0x4f2c8c: 0x244250d8  addiu       $v0, $v0, 0x50D8
    ctx->pc = 0x4f2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20696));
label_4f2c90:
    // 0x4f2c90: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4f2c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4f2c94:
    // 0x4f2c94: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x4f2c94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_4f2c98:
    // 0x4f2c98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f2c98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2c9c:
    // 0x4f2c9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4f2c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4f2ca0:
    // 0x4f2ca0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4f2ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4f2ca4:
    // 0x4f2ca4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x4f2ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_4f2ca8:
    // 0x4f2ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f2cac:
    // 0x4f2cac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f2cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f2cb0:
    // 0x4f2cb0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f2cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f2cb4:
    // 0x4f2cb4: 0x26100b78  addiu       $s0, $s0, 0xB78
    ctx->pc = 0x4f2cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2936));
label_4f2cb8:
    // 0x4f2cb8: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f2cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f2cbc:
    // 0x4f2cbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f2cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2cc0:
    // 0x4f2cc0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f2cc4:
    // 0x4f2cc4: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x4f2cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4f2cc8:
    // 0x4f2cc8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f2ccc:
    // 0x4f2ccc: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4f2cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4f2cd0:
    // 0x4f2cd0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4f2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4f2cd4:
    // 0x4f2cd4: 0x40f809  jalr        $v0
label_4f2cd8:
    if (ctx->pc == 0x4F2CD8u) {
        ctx->pc = 0x4F2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2CD4u;
        // 0x4f2cd8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2CDCu;
        goto label_4f2cdc;
    }
    ctx->pc = 0x4F2CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F2CDCu);
        ctx->pc = 0x4F2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2CD4u;
        // 0x4f2cd8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2CD4u, 0x4F2CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2CDCu;
label_4f2cdc:
    // 0x4f2cdc: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f2cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f2ce0:
    // 0x4f2ce0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f2ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2ce4:
    // 0x4f2ce4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x4f2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_4f2ce8:
    // 0x4f2ce8: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x4f2ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_4f2cec:
    // 0x4f2cec: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4f2cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f2cf0:
    // 0x4f2cf0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f2cf4:
    // 0x4f2cf4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f2cf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f2cf8:
    // 0x4f2cf8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f2cfc:
    // 0x4f2cfc: 0x60f809  jalr        $v1
label_4f2d00:
    if (ctx->pc == 0x4F2D00u) {
        ctx->pc = 0x4F2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2CFCu;
        // 0x4f2d00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2D04u;
        goto label_4f2d04;
    }
    ctx->pc = 0x4F2CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F2D04u);
        ctx->pc = 0x4F2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2CFCu;
        // 0x4f2d00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2CFCu, 0x4F2D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2D04u;
label_4f2d04:
    // 0x4f2d04: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f2d08:
    // 0x4f2d08: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x4f2d08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_4f2d0c:
    // 0x4f2d0c: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x4f2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_4f2d10:
    // 0x4f2d10: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x4f2d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_4f2d14:
    // 0x4f2d14: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f2d14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f2d18:
    // 0x4f2d18: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x4f2d18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_4f2d1c:
    // 0x4f2d1c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4f2d20:
    if (ctx->pc == 0x4F2D20u) {
        ctx->pc = 0x4F2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2D1Cu;
        // 0x4f2d20: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2D24u;
        goto label_4f2d24;
    }
    ctx->pc = 0x4F2D1Cu;
    {
        const bool branch_taken_0x4f2d1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2D1Cu;
        // 0x4f2d20: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2d1c) {
            ctx->pc = 0x4F2D2Cu;
            goto label_4f2d2c;
        }
    }
    ctx->pc = 0x4F2D24u;
label_4f2d24:
    // 0x4f2d24: 0xc10b208  jal         func_42C820
label_4f2d28:
    if (ctx->pc == 0x4F2D28u) {
        ctx->pc = 0x4F2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2D24u;
        // 0x4f2d28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2D2Cu;
        goto label_4f2d2c;
    }
    ctx->pc = 0x4F2D24u;
    SET_GPR_U32(ctx, 31, 0x4F2D2Cu);
    ctx->pc = 0x4F2D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2D24u;
    // 0x4f2d28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F2D24u, 0x4F2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2D2Cu;
label_4f2d2c:
    // 0x4f2d2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4f2d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f2d30:
    // 0x4f2d30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4f2d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f2d34:
    // 0x4f2d34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f2d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f2d38:
    // 0x4f2d38: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4f2d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2d3c:
    // 0x4f2d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f2d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2d40:
    // 0x4f2d40: 0x3e00008  jr          $ra
label_4f2d44:
    if (ctx->pc == 0x4F2D44u) {
        ctx->pc = 0x4F2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2D40u;
        // 0x4f2d44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2D48u;
        goto label_fallthrough_0x4f2d40;
    }
    ctx->pc = 0x4F2D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2D40u;
        // 0x4f2d44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f2d40:
    ctx->pc = 0x4F2D48u;
}
