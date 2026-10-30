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

// Function: sub_004F5E18
// Address: 0x4f5e18 - 0x4f5ee0
void sub_004F5E18_0x4f5e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5E18_0x4f5e18");
#endif

    switch (ctx->pc) {
        case 0x4f5e18u: goto label_4f5e18;
        case 0x4f5e1cu: goto label_4f5e1c;
        case 0x4f5e20u: goto label_4f5e20;
        case 0x4f5e24u: goto label_4f5e24;
        case 0x4f5e28u: goto label_4f5e28;
        case 0x4f5e2cu: goto label_4f5e2c;
        case 0x4f5e30u: goto label_4f5e30;
        case 0x4f5e34u: goto label_4f5e34;
        case 0x4f5e38u: goto label_4f5e38;
        case 0x4f5e3cu: goto label_4f5e3c;
        case 0x4f5e40u: goto label_4f5e40;
        case 0x4f5e44u: goto label_4f5e44;
        case 0x4f5e48u: goto label_4f5e48;
        case 0x4f5e4cu: goto label_4f5e4c;
        case 0x4f5e50u: goto label_4f5e50;
        case 0x4f5e54u: goto label_4f5e54;
        case 0x4f5e58u: goto label_4f5e58;
        case 0x4f5e5cu: goto label_4f5e5c;
        case 0x4f5e60u: goto label_4f5e60;
        case 0x4f5e64u: goto label_4f5e64;
        case 0x4f5e68u: goto label_4f5e68;
        case 0x4f5e6cu: goto label_4f5e6c;
        case 0x4f5e70u: goto label_4f5e70;
        case 0x4f5e74u: goto label_4f5e74;
        case 0x4f5e78u: goto label_4f5e78;
        case 0x4f5e7cu: goto label_4f5e7c;
        case 0x4f5e80u: goto label_4f5e80;
        case 0x4f5e84u: goto label_4f5e84;
        case 0x4f5e88u: goto label_4f5e88;
        case 0x4f5e8cu: goto label_4f5e8c;
        case 0x4f5e90u: goto label_4f5e90;
        case 0x4f5e94u: goto label_4f5e94;
        case 0x4f5e98u: goto label_4f5e98;
        case 0x4f5e9cu: goto label_4f5e9c;
        case 0x4f5ea0u: goto label_4f5ea0;
        case 0x4f5ea4u: goto label_4f5ea4;
        case 0x4f5ea8u: goto label_4f5ea8;
        case 0x4f5eacu: goto label_4f5eac;
        case 0x4f5eb0u: goto label_4f5eb0;
        case 0x4f5eb4u: goto label_4f5eb4;
        case 0x4f5eb8u: goto label_4f5eb8;
        case 0x4f5ebcu: goto label_4f5ebc;
        case 0x4f5ec0u: goto label_4f5ec0;
        case 0x4f5ec4u: goto label_4f5ec4;
        case 0x4f5ec8u: goto label_4f5ec8;
        case 0x4f5eccu: goto label_4f5ecc;
        case 0x4f5ed0u: goto label_4f5ed0;
        case 0x4f5ed4u: goto label_4f5ed4;
        case 0x4f5ed8u: goto label_4f5ed8;
        case 0x4f5edcu: goto label_4f5edc;
        default: break;
    }

    ctx->pc = 0x4f5e18u;

label_4f5e18:
    // 0x4f5e18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f5e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f5e1c:
    // 0x4f5e1c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f5e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f5e20:
    // 0x4f5e20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f5e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f5e24:
    // 0x4f5e24: 0x24425d28  addiu       $v0, $v0, 0x5D28
    ctx->pc = 0x4f5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23848));
label_4f5e28:
    // 0x4f5e28: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4f5e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4f5e2c:
    // 0x4f5e2c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x4f5e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_4f5e30:
    // 0x4f5e30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f5e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5e34:
    // 0x4f5e34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4f5e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4f5e38:
    // 0x4f5e38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4f5e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4f5e3c:
    // 0x4f5e3c: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x4f5e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_4f5e40:
    // 0x4f5e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f5e44:
    // 0x4f5e44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f5e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f5e48:
    // 0x4f5e48: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f5e48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f5e4c:
    // 0x4f5e4c: 0x261091c0  addiu       $s0, $s0, -0x6E40
    ctx->pc = 0x4f5e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939072));
label_4f5e50:
    // 0x4f5e50: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f5e50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f5e54:
    // 0x4f5e54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f5e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f5e58:
    // 0x4f5e58: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f5e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f5e5c:
    // 0x4f5e5c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x4f5e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4f5e60:
    // 0x4f5e60: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f5e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f5e64:
    // 0x4f5e64: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4f5e64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4f5e68:
    // 0x4f5e68: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4f5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4f5e6c:
    // 0x4f5e6c: 0x40f809  jalr        $v0
label_4f5e70:
    if (ctx->pc == 0x4F5E70u) {
        ctx->pc = 0x4F5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5E6Cu;
        // 0x4f5e70: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5E74u;
        goto label_4f5e74;
    }
    ctx->pc = 0x4F5E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F5E74u);
        ctx->pc = 0x4F5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5E6Cu;
        // 0x4f5e70: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5E6Cu, 0x4F5E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5E74u;
label_4f5e74:
    // 0x4f5e74: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f5e74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f5e78:
    // 0x4f5e78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f5e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f5e7c:
    // 0x4f5e7c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x4f5e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_4f5e80:
    // 0x4f5e80: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x4f5e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_4f5e84:
    // 0x4f5e84: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4f5e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f5e88:
    // 0x4f5e88: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f5e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f5e8c:
    // 0x4f5e8c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f5e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f5e90:
    // 0x4f5e90: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f5e94:
    // 0x4f5e94: 0x60f809  jalr        $v1
label_4f5e98:
    if (ctx->pc == 0x4F5E98u) {
        ctx->pc = 0x4F5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5E94u;
        // 0x4f5e98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5E9Cu;
        goto label_4f5e9c;
    }
    ctx->pc = 0x4F5E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F5E9Cu);
        ctx->pc = 0x4F5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5E94u;
        // 0x4f5e98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5E94u, 0x4F5E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5E9Cu;
label_4f5e9c:
    // 0x4f5e9c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f5ea0:
    // 0x4f5ea0: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x4f5ea0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_4f5ea4:
    // 0x4f5ea4: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x4f5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_4f5ea8:
    // 0x4f5ea8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x4f5ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_4f5eac:
    // 0x4f5eac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f5eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f5eb0:
    // 0x4f5eb0: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x4f5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_4f5eb4:
    // 0x4f5eb4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4f5eb8:
    if (ctx->pc == 0x4F5EB8u) {
        ctx->pc = 0x4F5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5EB4u;
        // 0x4f5eb8: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5EBCu;
        goto label_4f5ebc;
    }
    ctx->pc = 0x4F5EB4u;
    {
        const bool branch_taken_0x4f5eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5EB4u;
        // 0x4f5eb8: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5eb4) {
            ctx->pc = 0x4F5EC4u;
            goto label_4f5ec4;
        }
    }
    ctx->pc = 0x4F5EBCu;
label_4f5ebc:
    // 0x4f5ebc: 0xc10b208  jal         func_42C820
label_4f5ec0:
    if (ctx->pc == 0x4F5EC0u) {
        ctx->pc = 0x4F5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5EBCu;
        // 0x4f5ec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5EC4u;
        goto label_4f5ec4;
    }
    ctx->pc = 0x4F5EBCu;
    SET_GPR_U32(ctx, 31, 0x4F5EC4u);
    ctx->pc = 0x4F5EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5EBCu;
    // 0x4f5ec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F5EBCu, 0x4F5EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5EC4u;
label_4f5ec4:
    // 0x4f5ec4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4f5ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f5ec8:
    // 0x4f5ec8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4f5ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f5ecc:
    // 0x4f5ecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f5eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f5ed0:
    // 0x4f5ed0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4f5ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5ed4:
    // 0x4f5ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5ed8:
    // 0x4f5ed8: 0x3e00008  jr          $ra
label_4f5edc:
    if (ctx->pc == 0x4F5EDCu) {
        ctx->pc = 0x4F5EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5ED8u;
        // 0x4f5edc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5EE0u;
        goto label_fallthrough_0x4f5ed8;
    }
    ctx->pc = 0x4F5ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5ED8u;
        // 0x4f5edc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f5ed8:
    ctx->pc = 0x4F5EE0u;
}
