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

// Function: sub_003BFBF0
// Address: 0x3bfbf0 - 0x3bfcc8
void sub_003BFBF0_0x3bfbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFBF0_0x3bfbf0");
#endif

    switch (ctx->pc) {
        case 0x3bfbf0u: goto label_3bfbf0;
        case 0x3bfbf4u: goto label_3bfbf4;
        case 0x3bfbf8u: goto label_3bfbf8;
        case 0x3bfbfcu: goto label_3bfbfc;
        case 0x3bfc00u: goto label_3bfc00;
        case 0x3bfc04u: goto label_3bfc04;
        case 0x3bfc08u: goto label_3bfc08;
        case 0x3bfc0cu: goto label_3bfc0c;
        case 0x3bfc10u: goto label_3bfc10;
        case 0x3bfc14u: goto label_3bfc14;
        case 0x3bfc18u: goto label_3bfc18;
        case 0x3bfc1cu: goto label_3bfc1c;
        case 0x3bfc20u: goto label_3bfc20;
        case 0x3bfc24u: goto label_3bfc24;
        case 0x3bfc28u: goto label_3bfc28;
        case 0x3bfc2cu: goto label_3bfc2c;
        case 0x3bfc30u: goto label_3bfc30;
        case 0x3bfc34u: goto label_3bfc34;
        case 0x3bfc38u: goto label_3bfc38;
        case 0x3bfc3cu: goto label_3bfc3c;
        case 0x3bfc40u: goto label_3bfc40;
        case 0x3bfc44u: goto label_3bfc44;
        case 0x3bfc48u: goto label_3bfc48;
        case 0x3bfc4cu: goto label_3bfc4c;
        case 0x3bfc50u: goto label_3bfc50;
        case 0x3bfc54u: goto label_3bfc54;
        case 0x3bfc58u: goto label_3bfc58;
        case 0x3bfc5cu: goto label_3bfc5c;
        case 0x3bfc60u: goto label_3bfc60;
        case 0x3bfc64u: goto label_3bfc64;
        case 0x3bfc68u: goto label_3bfc68;
        case 0x3bfc6cu: goto label_3bfc6c;
        case 0x3bfc70u: goto label_3bfc70;
        case 0x3bfc74u: goto label_3bfc74;
        case 0x3bfc78u: goto label_3bfc78;
        case 0x3bfc7cu: goto label_3bfc7c;
        case 0x3bfc80u: goto label_3bfc80;
        case 0x3bfc84u: goto label_3bfc84;
        case 0x3bfc88u: goto label_3bfc88;
        case 0x3bfc8cu: goto label_3bfc8c;
        case 0x3bfc90u: goto label_3bfc90;
        case 0x3bfc94u: goto label_3bfc94;
        case 0x3bfc98u: goto label_3bfc98;
        case 0x3bfc9cu: goto label_3bfc9c;
        case 0x3bfca0u: goto label_3bfca0;
        case 0x3bfca4u: goto label_3bfca4;
        case 0x3bfca8u: goto label_3bfca8;
        case 0x3bfcacu: goto label_3bfcac;
        case 0x3bfcb0u: goto label_3bfcb0;
        case 0x3bfcb4u: goto label_3bfcb4;
        case 0x3bfcb8u: goto label_3bfcb8;
        case 0x3bfcbcu: goto label_3bfcbc;
        case 0x3bfcc0u: goto label_3bfcc0;
        case 0x3bfcc4u: goto label_3bfcc4;
        default: break;
    }

    ctx->pc = 0x3bfbf0u;

label_3bfbf0:
    // 0x3bfbf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3bfbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3bfbf4:
    // 0x3bfbf4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3bfbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3bfbf8:
    // 0x3bfbf8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3bfbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3bfbfc:
    // 0x3bfbfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bfbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bfc00:
    // 0x3bfc00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3bfc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3bfc04:
    // 0x3bfc04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bfc04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bfc08:
    // 0x3bfc08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bfc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3bfc0c:
    // 0x3bfc0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bfc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bfc10:
    // 0x3bfc10: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3bfc10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bfc14:
    // 0x3bfc14: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bfc18:
    // 0x3bfc18: 0x40f809  jalr        $v0
label_3bfc1c:
    if (ctx->pc == 0x3BFC1Cu) {
        ctx->pc = 0x3BFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC18u;
        // 0x3bfc1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFC20u;
        goto label_3bfc20;
    }
    ctx->pc = 0x3BFC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BFC20u);
        ctx->pc = 0x3BFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC18u;
        // 0x3bfc1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFC18u, 0x3BFC20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFC20u;
label_3bfc20:
    // 0x3bfc20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3bfc20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bfc24:
    // 0x3bfc24: 0xc0ea14c  jal         func_3A8530
label_3bfc28:
    if (ctx->pc == 0x3BFC28u) {
        ctx->pc = 0x3BFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC24u;
        // 0x3bfc28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFC2Cu;
        goto label_3bfc2c;
    }
    ctx->pc = 0x3BFC24u;
    SET_GPR_U32(ctx, 31, 0x3BFC2Cu);
    ctx->pc = 0x3BFC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFC24u;
    // 0x3bfc28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3BFC24u, 0x3BFC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFC2Cu;
label_3bfc2c:
    // 0x3bfc2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bfc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bfc30:
    // 0x3bfc30: 0xc0ea12a  jal         func_3A84A8
label_3bfc34:
    if (ctx->pc == 0x3BFC34u) {
        ctx->pc = 0x3BFC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC30u;
        // 0x3bfc34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFC38u;
        goto label_3bfc38;
    }
    ctx->pc = 0x3BFC30u;
    SET_GPR_U32(ctx, 31, 0x3BFC38u);
    ctx->pc = 0x3BFC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFC30u;
    // 0x3bfc34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3BFC30u, 0x3BFC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFC38u;
label_3bfc38:
    // 0x3bfc38: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3bfc38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bfc3c:
    // 0x3bfc3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bfc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bfc40:
    // 0x3bfc40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bfc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bfc44:
    // 0x3bfc44: 0xc0ea12a  jal         func_3A84A8
label_3bfc48:
    if (ctx->pc == 0x3BFC48u) {
        ctx->pc = 0x3BFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC44u;
        // 0x3bfc48: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFC4Cu;
        goto label_3bfc4c;
    }
    ctx->pc = 0x3BFC44u;
    SET_GPR_U32(ctx, 31, 0x3BFC4Cu);
    ctx->pc = 0x3BFC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFC44u;
    // 0x3bfc48: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3BFC44u, 0x3BFC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFC4Cu;
label_3bfc4c:
    // 0x3bfc4c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3bfc4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bfc50:
    // 0x3bfc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bfc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bfc54:
    // 0x3bfc54: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3bfc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3bfc58:
    // 0x3bfc58: 0xc0e858c  jal         func_3A1630
label_3bfc5c:
    if (ctx->pc == 0x3BFC5Cu) {
        ctx->pc = 0x3BFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC58u;
        // 0x3bfc5c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFC60u;
        goto label_3bfc60;
    }
    ctx->pc = 0x3BFC58u;
    SET_GPR_U32(ctx, 31, 0x3BFC60u);
    ctx->pc = 0x3BFC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFC58u;
    // 0x3bfc5c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3BFC58u, 0x3BFC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFC60u;
label_3bfc60:
    // 0x3bfc60: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x3bfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_3bfc64:
    // 0x3bfc64: 0x3c052e05  lui         $a1, 0x2E05
    ctx->pc = 0x3bfc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11781 << 16));
label_3bfc68:
    // 0x3bfc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bfc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bfc6c:
    // 0x3bfc6c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3bfc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3bfc70:
    // 0x3bfc70: 0xc0e9132  jal         func_3A44C8
label_3bfc74:
    if (ctx->pc == 0x3BFC74u) {
        ctx->pc = 0x3BFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC70u;
        // 0x3bfc74: 0x34a55fc5  ori         $a1, $a1, 0x5FC5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24517);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFC78u;
        goto label_3bfc78;
    }
    ctx->pc = 0x3BFC70u;
    SET_GPR_U32(ctx, 31, 0x3BFC78u);
    ctx->pc = 0x3BFC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFC70u;
    // 0x3bfc74: 0x34a55fc5  ori         $a1, $a1, 0x5FC5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24517);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3BFC70u, 0x3BFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFC78u;
label_3bfc78:
    // 0x3bfc78: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3bfc78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bfc7c:
    // 0x3bfc7c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3bfc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3bfc80:
    // 0x3bfc80: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3bfc80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bfc84:
    // 0x3bfc84: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3bfc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3bfc88:
    // 0x3bfc88: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3bfc88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3bfc8c:
    // 0x3bfc8c: 0x7e040030  sq          $a0, 0x30($s0)
    ctx->pc = 0x3bfc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 4));
label_3bfc90:
    // 0x3bfc90: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x3bfc90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
label_3bfc94:
    // 0x3bfc94: 0xae450010  sw          $a1, 0x10($s2)
    ctx->pc = 0x3bfc94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 5));
label_3bfc98:
    // 0x3bfc98: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3bfc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bfc9c:
    // 0x3bfc9c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3bfc9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bfca0:
    // 0x3bfca0: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3bfca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3bfca4:
    // 0x3bfca4: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3bfca4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3bfca8:
    // 0x3bfca8: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x3bfca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_3bfcac:
    // 0x3bfcac: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3bfcacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3bfcb0:
    // 0x3bfcb0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3bfcb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bfcb4:
    // 0x3bfcb4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3bfcb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bfcb8:
    // 0x3bfcb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bfcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3bfcbc:
    // 0x3bfcbc: 0x3e00008  jr          $ra
label_3bfcc0:
    if (ctx->pc == 0x3BFCC0u) {
        ctx->pc = 0x3BFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFCBCu;
        // 0x3bfcc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFCC4u;
        goto label_3bfcc4;
    }
    ctx->pc = 0x3BFCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFCBCu;
        // 0x3bfcc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFCC4u;
label_3bfcc4:
    // 0x3bfcc4: 0x0  nop
    ctx->pc = 0x3bfcc4u;
    // NOP
    ctx->pc = 0x3bfcc8u;
}
