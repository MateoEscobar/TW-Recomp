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

// Function: sub_003EE9D8
// Address: 0x3ee9d8 - 0x3eeaa8
void sub_003EE9D8_0x3ee9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE9D8_0x3ee9d8");
#endif

    switch (ctx->pc) {
        case 0x3ee9d8u: goto label_3ee9d8;
        case 0x3ee9dcu: goto label_3ee9dc;
        case 0x3ee9e0u: goto label_3ee9e0;
        case 0x3ee9e4u: goto label_3ee9e4;
        case 0x3ee9e8u: goto label_3ee9e8;
        case 0x3ee9ecu: goto label_3ee9ec;
        case 0x3ee9f0u: goto label_3ee9f0;
        case 0x3ee9f4u: goto label_3ee9f4;
        case 0x3ee9f8u: goto label_3ee9f8;
        case 0x3ee9fcu: goto label_3ee9fc;
        case 0x3eea00u: goto label_3eea00;
        case 0x3eea04u: goto label_3eea04;
        case 0x3eea08u: goto label_3eea08;
        case 0x3eea0cu: goto label_3eea0c;
        case 0x3eea10u: goto label_3eea10;
        case 0x3eea14u: goto label_3eea14;
        case 0x3eea18u: goto label_3eea18;
        case 0x3eea1cu: goto label_3eea1c;
        case 0x3eea20u: goto label_3eea20;
        case 0x3eea24u: goto label_3eea24;
        case 0x3eea28u: goto label_3eea28;
        case 0x3eea2cu: goto label_3eea2c;
        case 0x3eea30u: goto label_3eea30;
        case 0x3eea34u: goto label_3eea34;
        case 0x3eea38u: goto label_3eea38;
        case 0x3eea3cu: goto label_3eea3c;
        case 0x3eea40u: goto label_3eea40;
        case 0x3eea44u: goto label_3eea44;
        case 0x3eea48u: goto label_3eea48;
        case 0x3eea4cu: goto label_3eea4c;
        case 0x3eea50u: goto label_3eea50;
        case 0x3eea54u: goto label_3eea54;
        case 0x3eea58u: goto label_3eea58;
        case 0x3eea5cu: goto label_3eea5c;
        case 0x3eea60u: goto label_3eea60;
        case 0x3eea64u: goto label_3eea64;
        case 0x3eea68u: goto label_3eea68;
        case 0x3eea6cu: goto label_3eea6c;
        case 0x3eea70u: goto label_3eea70;
        case 0x3eea74u: goto label_3eea74;
        case 0x3eea78u: goto label_3eea78;
        case 0x3eea7cu: goto label_3eea7c;
        case 0x3eea80u: goto label_3eea80;
        case 0x3eea84u: goto label_3eea84;
        case 0x3eea88u: goto label_3eea88;
        case 0x3eea8cu: goto label_3eea8c;
        case 0x3eea90u: goto label_3eea90;
        case 0x3eea94u: goto label_3eea94;
        case 0x3eea98u: goto label_3eea98;
        case 0x3eea9cu: goto label_3eea9c;
        case 0x3eeaa0u: goto label_3eeaa0;
        case 0x3eeaa4u: goto label_3eeaa4;
        default: break;
    }

    ctx->pc = 0x3ee9d8u;

label_3ee9d8:
    // 0x3ee9d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ee9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ee9dc:
    // 0x3ee9dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3ee9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3ee9e0:
    // 0x3ee9e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3ee9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3ee9e4:
    // 0x3ee9e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ee9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ee9e8:
    // 0x3ee9e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ee9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3ee9ec:
    // 0x3ee9ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ee9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ee9f0:
    // 0x3ee9f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ee9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ee9f4:
    // 0x3ee9f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ee9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ee9f8:
    // 0x3ee9f8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ee9f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ee9fc:
    // 0x3ee9fc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ee9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eea00:
    // 0x3eea00: 0x40f809  jalr        $v0
label_3eea04:
    if (ctx->pc == 0x3EEA04u) {
        ctx->pc = 0x3EEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA00u;
        // 0x3eea04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEA08u;
        goto label_3eea08;
    }
    ctx->pc = 0x3EEA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EEA08u);
        ctx->pc = 0x3EEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA00u;
        // 0x3eea04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEA00u, 0x3EEA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EEA08u;
label_3eea08:
    // 0x3eea08: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3eea08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_3eea0c:
    // 0x3eea0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3eea0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eea10:
    // 0x3eea10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3eea10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3eea14:
    // 0x3eea14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eea14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eea18:
    // 0x3eea18: 0xc0ea14c  jal         func_3A8530
label_3eea1c:
    if (ctx->pc == 0x3EEA1Cu) {
        ctx->pc = 0x3EEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA18u;
        // 0x3eea1c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEA20u;
        goto label_3eea20;
    }
    ctx->pc = 0x3EEA18u;
    SET_GPR_U32(ctx, 31, 0x3EEA20u);
    ctx->pc = 0x3EEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEA18u;
    // 0x3eea1c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EEA18u, 0x3EEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEA20u;
label_3eea20:
    // 0x3eea20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eea20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eea24:
    // 0x3eea24: 0xc0ea12a  jal         func_3A84A8
label_3eea28:
    if (ctx->pc == 0x3EEA28u) {
        ctx->pc = 0x3EEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA24u;
        // 0x3eea28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEA2Cu;
        goto label_3eea2c;
    }
    ctx->pc = 0x3EEA24u;
    SET_GPR_U32(ctx, 31, 0x3EEA2Cu);
    ctx->pc = 0x3EEA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEA24u;
    // 0x3eea28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EEA24u, 0x3EEA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEA2Cu;
label_3eea2c:
    // 0x3eea2c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eea2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eea30:
    // 0x3eea30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eea30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eea34:
    // 0x3eea34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eea34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eea38:
    // 0x3eea38: 0xc0ea12a  jal         func_3A84A8
label_3eea3c:
    if (ctx->pc == 0x3EEA3Cu) {
        ctx->pc = 0x3EEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA38u;
        // 0x3eea3c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEA40u;
        goto label_3eea40;
    }
    ctx->pc = 0x3EEA38u;
    SET_GPR_U32(ctx, 31, 0x3EEA40u);
    ctx->pc = 0x3EEA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEA38u;
    // 0x3eea3c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EEA38u, 0x3EEA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEA40u;
label_3eea40:
    // 0x3eea40: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eea40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eea44:
    // 0x3eea44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eea44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eea48:
    // 0x3eea48: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3eea48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3eea4c:
    // 0x3eea4c: 0xc0e858c  jal         func_3A1630
label_3eea50:
    if (ctx->pc == 0x3EEA50u) {
        ctx->pc = 0x3EEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA4Cu;
        // 0x3eea50: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEA54u;
        goto label_3eea54;
    }
    ctx->pc = 0x3EEA4Cu;
    SET_GPR_U32(ctx, 31, 0x3EEA54u);
    ctx->pc = 0x3EEA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEA4Cu;
    // 0x3eea50: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EEA4Cu, 0x3EEA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEA54u;
label_3eea54:
    // 0x3eea54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eea58:
    // 0x3eea58: 0xc0e9132  jal         func_3A44C8
label_3eea5c:
    if (ctx->pc == 0x3EEA5Cu) {
        ctx->pc = 0x3EEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA58u;
        // 0x3eea5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEA60u;
        goto label_3eea60;
    }
    ctx->pc = 0x3EEA58u;
    SET_GPR_U32(ctx, 31, 0x3EEA60u);
    ctx->pc = 0x3EEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEA58u;
    // 0x3eea5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EEA58u, 0x3EEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEA60u;
label_3eea60:
    // 0x3eea60: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3eea60u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3eea64:
    // 0x3eea64: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x3eea64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3eea68:
    // 0x3eea68: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3eea68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eea6c:
    // 0x3eea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eea70:
    // 0x3eea70: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x3eea70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
label_3eea74:
    // 0x3eea74: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3eea74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3eea78:
    // 0x3eea78: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3eea78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3eea7c:
    // 0x3eea7c: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3eea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3eea80:
    // 0x3eea80: 0xc0e9bb2  jal         func_3A6EC8
label_3eea84:
    if (ctx->pc == 0x3EEA84u) {
        ctx->pc = 0x3EEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA80u;
        // 0x3eea84: 0xae470000  sw          $a3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEA88u;
        goto label_3eea88;
    }
    ctx->pc = 0x3EEA80u;
    SET_GPR_U32(ctx, 31, 0x3EEA88u);
    ctx->pc = 0x3EEA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEA80u;
    // 0x3eea84: 0xae470000  sw          $a3, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3EEA80u, 0x3EEA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEA88u;
label_3eea88:
    // 0x3eea88: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3eea88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3eea8c:
    // 0x3eea8c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3eea8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eea90:
    // 0x3eea90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3eea90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eea94:
    // 0x3eea94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3eea94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eea98:
    // 0x3eea98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3eea98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3eea9c:
    // 0x3eea9c: 0x3e00008  jr          $ra
label_3eeaa0:
    if (ctx->pc == 0x3EEAA0u) {
        ctx->pc = 0x3EEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA9Cu;
        // 0x3eeaa0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEAA4u;
        goto label_3eeaa4;
    }
    ctx->pc = 0x3EEA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA9Cu;
        // 0x3eeaa0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEAA4u;
label_3eeaa4:
    // 0x3eeaa4: 0x0  nop
    ctx->pc = 0x3eeaa4u;
    // NOP
    ctx->pc = 0x3eeaa8u;
}
