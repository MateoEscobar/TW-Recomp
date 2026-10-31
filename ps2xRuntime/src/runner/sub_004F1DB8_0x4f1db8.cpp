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

// Function: sub_004F1DB8
// Address: 0x4f1db8 - 0x4f1e98
void sub_004F1DB8_0x4f1db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1DB8_0x4f1db8");
#endif

    switch (ctx->pc) {
        case 0x4f1db8u: goto label_4f1db8;
        case 0x4f1dbcu: goto label_4f1dbc;
        case 0x4f1dc0u: goto label_4f1dc0;
        case 0x4f1dc4u: goto label_4f1dc4;
        case 0x4f1dc8u: goto label_4f1dc8;
        case 0x4f1dccu: goto label_4f1dcc;
        case 0x4f1dd0u: goto label_4f1dd0;
        case 0x4f1dd4u: goto label_4f1dd4;
        case 0x4f1dd8u: goto label_4f1dd8;
        case 0x4f1ddcu: goto label_4f1ddc;
        case 0x4f1de0u: goto label_4f1de0;
        case 0x4f1de4u: goto label_4f1de4;
        case 0x4f1de8u: goto label_4f1de8;
        case 0x4f1decu: goto label_4f1dec;
        case 0x4f1df0u: goto label_4f1df0;
        case 0x4f1df4u: goto label_4f1df4;
        case 0x4f1df8u: goto label_4f1df8;
        case 0x4f1dfcu: goto label_4f1dfc;
        case 0x4f1e00u: goto label_4f1e00;
        case 0x4f1e04u: goto label_4f1e04;
        case 0x4f1e08u: goto label_4f1e08;
        case 0x4f1e0cu: goto label_4f1e0c;
        case 0x4f1e10u: goto label_4f1e10;
        case 0x4f1e14u: goto label_4f1e14;
        case 0x4f1e18u: goto label_4f1e18;
        case 0x4f1e1cu: goto label_4f1e1c;
        case 0x4f1e20u: goto label_4f1e20;
        case 0x4f1e24u: goto label_4f1e24;
        case 0x4f1e28u: goto label_4f1e28;
        case 0x4f1e2cu: goto label_4f1e2c;
        case 0x4f1e30u: goto label_4f1e30;
        case 0x4f1e34u: goto label_4f1e34;
        case 0x4f1e38u: goto label_4f1e38;
        case 0x4f1e3cu: goto label_4f1e3c;
        case 0x4f1e40u: goto label_4f1e40;
        case 0x4f1e44u: goto label_4f1e44;
        case 0x4f1e48u: goto label_4f1e48;
        case 0x4f1e4cu: goto label_4f1e4c;
        case 0x4f1e50u: goto label_4f1e50;
        case 0x4f1e54u: goto label_4f1e54;
        case 0x4f1e58u: goto label_4f1e58;
        case 0x4f1e5cu: goto label_4f1e5c;
        case 0x4f1e60u: goto label_4f1e60;
        case 0x4f1e64u: goto label_4f1e64;
        case 0x4f1e68u: goto label_4f1e68;
        case 0x4f1e6cu: goto label_4f1e6c;
        case 0x4f1e70u: goto label_4f1e70;
        case 0x4f1e74u: goto label_4f1e74;
        case 0x4f1e78u: goto label_4f1e78;
        case 0x4f1e7cu: goto label_4f1e7c;
        case 0x4f1e80u: goto label_4f1e80;
        case 0x4f1e84u: goto label_4f1e84;
        case 0x4f1e88u: goto label_4f1e88;
        case 0x4f1e8cu: goto label_4f1e8c;
        case 0x4f1e90u: goto label_4f1e90;
        case 0x4f1e94u: goto label_4f1e94;
        default: break;
    }

    ctx->pc = 0x4f1db8u;

label_4f1db8:
    // 0x4f1db8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f1db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f1dbc:
    // 0x4f1dbc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f1dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f1dc0:
    // 0x4f1dc0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4f1dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4f1dc4:
    // 0x4f1dc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f1dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1dc8:
    // 0x4f1dc8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4f1dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4f1dcc:
    // 0x4f1dcc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4f1dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f1dd0:
    // 0x4f1dd0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4f1dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4f1dd4:
    // 0x4f1dd4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4f1dd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f1dd8:
    // 0x4f1dd8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4f1dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4f1ddc:
    // 0x4f1ddc: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_4f1de0:
    if (ctx->pc == 0x4F1DE0u) {
        ctx->pc = 0x4F1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1DDCu;
        // 0x4f1de0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1DE4u;
        goto label_4f1de4;
    }
    ctx->pc = 0x4F1DDCu;
    {
        const bool branch_taken_0x4f1ddc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1DDCu;
        // 0x4f1de0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1ddc) {
            ctx->pc = 0x4F1E6Cu;
            goto label_4f1e6c;
        }
    }
    ctx->pc = 0x4F1DE4u;
label_4f1de4:
    // 0x4f1de4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x4f1de4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_4f1de8:
    // 0x4f1de8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x4f1de8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_4f1dec:
    // 0x4f1dec: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x4f1decu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_4f1df0:
    // 0x4f1df0: 0x2610dc98  addiu       $s0, $s0, -0x2368
    ctx->pc = 0x4f1df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958232));
label_4f1df4:
    // 0x4f1df4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4f1df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f1df8:
    // 0x4f1df8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f1df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f1dfc:
    // 0x4f1dfc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f1e00:
    // 0x4f1e00: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x4f1e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_4f1e04:
    // 0x4f1e04: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f1e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f1e08:
    // 0x4f1e08: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f1e0c:
    // 0x4f1e0c: 0x60f809  jalr        $v1
label_4f1e10:
    if (ctx->pc == 0x4F1E10u) {
        ctx->pc = 0x4F1E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1E0Cu;
        // 0x4f1e10: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1E14u;
        goto label_4f1e14;
    }
    ctx->pc = 0x4F1E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1E14u);
        ctx->pc = 0x4F1E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1E0Cu;
        // 0x4f1e10: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1E0Cu, 0x4F1E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1E14u;
label_4f1e14:
    // 0x4f1e14: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4f1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_4f1e18:
    // 0x4f1e18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f1e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f1e1c:
    // 0x4f1e1c: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x4f1e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_4f1e20:
    // 0x4f1e20: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x4f1e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_4f1e24:
    // 0x4f1e24: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4f1e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f1e28:
    // 0x4f1e28: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f1e2c:
    // 0x4f1e2c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f1e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f1e30:
    // 0x4f1e30: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f1e34:
    // 0x4f1e34: 0x60f809  jalr        $v1
label_4f1e38:
    if (ctx->pc == 0x4F1E38u) {
        ctx->pc = 0x4F1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1E34u;
        // 0x4f1e38: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1E3Cu;
        goto label_4f1e3c;
    }
    ctx->pc = 0x4F1E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1E3Cu);
        ctx->pc = 0x4F1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1E34u;
        // 0x4f1e38: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1E34u, 0x4F1E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1E3Cu;
label_4f1e3c:
    // 0x4f1e3c: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x4f1e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_4f1e40:
    // 0x4f1e40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4f1e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f1e44:
    // 0x4f1e44: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x4f1e44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_4f1e48:
    // 0x4f1e48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4f1e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f1e4c:
    // 0x4f1e4c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x4f1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_4f1e50:
    // 0x4f1e50: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4f1e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f1e54:
    // 0x4f1e54: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x4f1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_4f1e58:
    // 0x4f1e58: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f1e5c:
    // 0x4f1e5c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f1e5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f1e60:
    // 0x4f1e60: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f1e64:
    // 0x4f1e64: 0x60f809  jalr        $v1
label_4f1e68:
    if (ctx->pc == 0x4F1E68u) {
        ctx->pc = 0x4F1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1E64u;
        // 0x4f1e68: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1E6Cu;
        goto label_4f1e6c;
    }
    ctx->pc = 0x4F1E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1E6Cu);
        ctx->pc = 0x4F1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1E64u;
        // 0x4f1e68: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1E64u, 0x4F1E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1E6Cu;
label_4f1e6c:
    // 0x4f1e6c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4f1e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f1e70:
    // 0x4f1e70: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4f1e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f1e74:
    // 0x4f1e74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f1e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f1e78:
    // 0x4f1e78: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4f1e78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f1e7c:
    // 0x4f1e7c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4f1e7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f1e80:
    // 0x4f1e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f1e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1e84:
    // 0x4f1e84: 0x3e00008  jr          $ra
label_4f1e88:
    if (ctx->pc == 0x4F1E88u) {
        ctx->pc = 0x4F1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1E84u;
        // 0x4f1e88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1E8Cu;
        goto label_4f1e8c;
    }
    ctx->pc = 0x4F1E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1E84u;
        // 0x4f1e88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1E8Cu;
label_4f1e8c:
    // 0x4f1e8c: 0x0  nop
    ctx->pc = 0x4f1e8cu;
    // NOP
label_4f1e90:
    // 0x4f1e90: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4f1e94:
    // 0x4f1e94: 0x0  nop
    ctx->pc = 0x4f1e94u;
    // NOP
    ctx->pc = 0x4f1e98u;
}
