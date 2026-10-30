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

// Function: sub_003C0DF0
// Address: 0x3c0df0 - 0x3c0ec0
void sub_003C0DF0_0x3c0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0DF0_0x3c0df0");
#endif

    switch (ctx->pc) {
        case 0x3c0df0u: goto label_3c0df0;
        case 0x3c0df4u: goto label_3c0df4;
        case 0x3c0df8u: goto label_3c0df8;
        case 0x3c0dfcu: goto label_3c0dfc;
        case 0x3c0e00u: goto label_3c0e00;
        case 0x3c0e04u: goto label_3c0e04;
        case 0x3c0e08u: goto label_3c0e08;
        case 0x3c0e0cu: goto label_3c0e0c;
        case 0x3c0e10u: goto label_3c0e10;
        case 0x3c0e14u: goto label_3c0e14;
        case 0x3c0e18u: goto label_3c0e18;
        case 0x3c0e1cu: goto label_3c0e1c;
        case 0x3c0e20u: goto label_3c0e20;
        case 0x3c0e24u: goto label_3c0e24;
        case 0x3c0e28u: goto label_3c0e28;
        case 0x3c0e2cu: goto label_3c0e2c;
        case 0x3c0e30u: goto label_3c0e30;
        case 0x3c0e34u: goto label_3c0e34;
        case 0x3c0e38u: goto label_3c0e38;
        case 0x3c0e3cu: goto label_3c0e3c;
        case 0x3c0e40u: goto label_3c0e40;
        case 0x3c0e44u: goto label_3c0e44;
        case 0x3c0e48u: goto label_3c0e48;
        case 0x3c0e4cu: goto label_3c0e4c;
        case 0x3c0e50u: goto label_3c0e50;
        case 0x3c0e54u: goto label_3c0e54;
        case 0x3c0e58u: goto label_3c0e58;
        case 0x3c0e5cu: goto label_3c0e5c;
        case 0x3c0e60u: goto label_3c0e60;
        case 0x3c0e64u: goto label_3c0e64;
        case 0x3c0e68u: goto label_3c0e68;
        case 0x3c0e6cu: goto label_3c0e6c;
        case 0x3c0e70u: goto label_3c0e70;
        case 0x3c0e74u: goto label_3c0e74;
        case 0x3c0e78u: goto label_3c0e78;
        case 0x3c0e7cu: goto label_3c0e7c;
        case 0x3c0e80u: goto label_3c0e80;
        case 0x3c0e84u: goto label_3c0e84;
        case 0x3c0e88u: goto label_3c0e88;
        case 0x3c0e8cu: goto label_3c0e8c;
        case 0x3c0e90u: goto label_3c0e90;
        case 0x3c0e94u: goto label_3c0e94;
        case 0x3c0e98u: goto label_3c0e98;
        case 0x3c0e9cu: goto label_3c0e9c;
        case 0x3c0ea0u: goto label_3c0ea0;
        case 0x3c0ea4u: goto label_3c0ea4;
        case 0x3c0ea8u: goto label_3c0ea8;
        case 0x3c0eacu: goto label_3c0eac;
        case 0x3c0eb0u: goto label_3c0eb0;
        case 0x3c0eb4u: goto label_3c0eb4;
        case 0x3c0eb8u: goto label_3c0eb8;
        case 0x3c0ebcu: goto label_3c0ebc;
        default: break;
    }

    ctx->pc = 0x3c0df0u;

label_3c0df0:
    // 0x3c0df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3c0df4:
    // 0x3c0df4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c0df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3c0df8:
    // 0x3c0df8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c0df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3c0dfc:
    // 0x3c0dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c0dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e00:
    // 0x3c0e00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c0e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3c0e04:
    // 0x3c0e04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c0e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e08:
    // 0x3c0e08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c0e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c0e0c:
    // 0x3c0e0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c0e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c0e10:
    // 0x3c0e10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c0e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0e14:
    // 0x3c0e14: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c0e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c0e18:
    // 0x3c0e18: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c0e1c:
    // 0x3c0e1c: 0x40f809  jalr        $v0
label_3c0e20:
    if (ctx->pc == 0x3C0E20u) {
        ctx->pc = 0x3C0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E1Cu;
        // 0x3c0e20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0E24u;
        goto label_3c0e24;
    }
    ctx->pc = 0x3C0E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0E24u);
        ctx->pc = 0x3C0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E1Cu;
        // 0x3c0e20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0E1Cu, 0x3C0E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0E24u;
label_3c0e24:
    // 0x3c0e24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c0e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e28:
    // 0x3c0e28: 0xc0ea14c  jal         func_3A8530
label_3c0e2c:
    if (ctx->pc == 0x3C0E2Cu) {
        ctx->pc = 0x3C0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E28u;
        // 0x3c0e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0E30u;
        goto label_3c0e30;
    }
    ctx->pc = 0x3C0E28u;
    SET_GPR_U32(ctx, 31, 0x3C0E30u);
    ctx->pc = 0x3C0E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0E28u;
    // 0x3c0e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C0E28u, 0x3C0E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0E30u;
label_3c0e30:
    // 0x3c0e30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c0e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e34:
    // 0x3c0e34: 0xc0ea12a  jal         func_3A84A8
label_3c0e38:
    if (ctx->pc == 0x3C0E38u) {
        ctx->pc = 0x3C0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E34u;
        // 0x3c0e38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0E3Cu;
        goto label_3c0e3c;
    }
    ctx->pc = 0x3C0E34u;
    SET_GPR_U32(ctx, 31, 0x3C0E3Cu);
    ctx->pc = 0x3C0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0E34u;
    // 0x3c0e38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C0E34u, 0x3C0E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0E3Cu;
label_3c0e3c:
    // 0x3c0e3c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3c0e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c0e40:
    // 0x3c0e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c0e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e44:
    // 0x3c0e44: 0xc0ea12a  jal         func_3A84A8
label_3c0e48:
    if (ctx->pc == 0x3C0E48u) {
        ctx->pc = 0x3C0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E44u;
        // 0x3c0e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0E4Cu;
        goto label_3c0e4c;
    }
    ctx->pc = 0x3C0E44u;
    SET_GPR_U32(ctx, 31, 0x3C0E4Cu);
    ctx->pc = 0x3C0E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0E44u;
    // 0x3c0e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C0E44u, 0x3C0E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0E4Cu;
label_3c0e4c:
    // 0x3c0e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0e50:
    // 0x3c0e50: 0x3c056a49  lui         $a1, 0x6A49
    ctx->pc = 0x3c0e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27209 << 16));
label_3c0e54:
    // 0x3c0e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e58:
    // 0x3c0e58: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3c0e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3c0e5c:
    // 0x3c0e5c: 0xc0e9132  jal         func_3A44C8
label_3c0e60:
    if (ctx->pc == 0x3C0E60u) {
        ctx->pc = 0x3C0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E5Cu;
        // 0x3c0e60: 0x34a53d24  ori         $a1, $a1, 0x3D24 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15652);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0E64u;
        goto label_3c0e64;
    }
    ctx->pc = 0x3C0E5Cu;
    SET_GPR_U32(ctx, 31, 0x3C0E64u);
    ctx->pc = 0x3C0E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0E5Cu;
    // 0x3c0e60: 0x34a53d24  ori         $a1, $a1, 0x3D24 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15652);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3C0E5Cu, 0x3C0E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0E64u;
label_3c0e64:
    // 0x3c0e64: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3c0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3c0e68:
    // 0x3c0e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e6c:
    // 0x3c0e6c: 0xc0e858c  jal         func_3A1630
label_3c0e70:
    if (ctx->pc == 0x3C0E70u) {
        ctx->pc = 0x3C0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E6Cu;
        // 0x3c0e70: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0E74u;
        goto label_3c0e74;
    }
    ctx->pc = 0x3C0E6Cu;
    SET_GPR_U32(ctx, 31, 0x3C0E74u);
    ctx->pc = 0x3C0E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0E6Cu;
    // 0x3c0e70: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C0E6Cu, 0x3C0E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0E74u;
label_3c0e74:
    // 0x3c0e74: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c0e74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c0e78:
    // 0x3c0e78: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3c0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3c0e7c:
    // 0x3c0e7c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c0e7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c0e80:
    // 0x3c0e80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c0e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e84:
    // 0x3c0e84: 0x24842ae8  addiu       $a0, $a0, 0x2AE8
    ctx->pc = 0x3c0e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10984));
label_3c0e88:
    // 0x3c0e88: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3c0e88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3c0e8c:
    // 0x3c0e8c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3c0e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3c0e90:
    // 0x3c0e90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3c0e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e94:
    // 0x3c0e94: 0xc0e94fc  jal         func_3A53F0
label_3c0e98:
    if (ctx->pc == 0x3C0E98u) {
        ctx->pc = 0x3C0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E94u;
        // 0x3c0e98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0E9Cu;
        goto label_3c0e9c;
    }
    ctx->pc = 0x3C0E94u;
    SET_GPR_U32(ctx, 31, 0x3C0E9Cu);
    ctx->pc = 0x3C0E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0E94u;
    // 0x3c0e98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3C0E94u, 0x3C0E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0E9Cu;
label_3c0e9c:
    // 0x3c0e9c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3c0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3c0ea0:
    // 0x3c0ea0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c0ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c0ea4:
    // 0x3c0ea4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c0ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c0ea8:
    // 0x3c0ea8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c0ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c0eac:
    // 0x3c0eac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c0eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c0eb0:
    // 0x3c0eb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c0eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0eb4:
    // 0x3c0eb4: 0x3e00008  jr          $ra
label_3c0eb8:
    if (ctx->pc == 0x3C0EB8u) {
        ctx->pc = 0x3C0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0EB4u;
        // 0x3c0eb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0EBCu;
        goto label_3c0ebc;
    }
    ctx->pc = 0x3C0EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0EB4u;
        // 0x3c0eb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0EBCu;
label_3c0ebc:
    // 0x3c0ebc: 0x0  nop
    ctx->pc = 0x3c0ebcu;
    // NOP
    ctx->pc = 0x3c0ec0u;
}
