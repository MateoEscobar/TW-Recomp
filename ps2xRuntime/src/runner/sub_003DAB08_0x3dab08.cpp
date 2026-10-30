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

// Function: sub_003DAB08
// Address: 0x3dab08 - 0x3daba8
void sub_003DAB08_0x3dab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAB08_0x3dab08");
#endif

    switch (ctx->pc) {
        case 0x3dab08u: goto label_3dab08;
        case 0x3dab0cu: goto label_3dab0c;
        case 0x3dab10u: goto label_3dab10;
        case 0x3dab14u: goto label_3dab14;
        case 0x3dab18u: goto label_3dab18;
        case 0x3dab1cu: goto label_3dab1c;
        case 0x3dab20u: goto label_3dab20;
        case 0x3dab24u: goto label_3dab24;
        case 0x3dab28u: goto label_3dab28;
        case 0x3dab2cu: goto label_3dab2c;
        case 0x3dab30u: goto label_3dab30;
        case 0x3dab34u: goto label_3dab34;
        case 0x3dab38u: goto label_3dab38;
        case 0x3dab3cu: goto label_3dab3c;
        case 0x3dab40u: goto label_3dab40;
        case 0x3dab44u: goto label_3dab44;
        case 0x3dab48u: goto label_3dab48;
        case 0x3dab4cu: goto label_3dab4c;
        case 0x3dab50u: goto label_3dab50;
        case 0x3dab54u: goto label_3dab54;
        case 0x3dab58u: goto label_3dab58;
        case 0x3dab5cu: goto label_3dab5c;
        case 0x3dab60u: goto label_3dab60;
        case 0x3dab64u: goto label_3dab64;
        case 0x3dab68u: goto label_3dab68;
        case 0x3dab6cu: goto label_3dab6c;
        case 0x3dab70u: goto label_3dab70;
        case 0x3dab74u: goto label_3dab74;
        case 0x3dab78u: goto label_3dab78;
        case 0x3dab7cu: goto label_3dab7c;
        case 0x3dab80u: goto label_3dab80;
        case 0x3dab84u: goto label_3dab84;
        case 0x3dab88u: goto label_3dab88;
        case 0x3dab8cu: goto label_3dab8c;
        case 0x3dab90u: goto label_3dab90;
        case 0x3dab94u: goto label_3dab94;
        case 0x3dab98u: goto label_3dab98;
        case 0x3dab9cu: goto label_3dab9c;
        case 0x3daba0u: goto label_3daba0;
        case 0x3daba4u: goto label_3daba4;
        default: break;
    }

    ctx->pc = 0x3dab08u;

label_3dab08:
    // 0x3dab08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dab0c:
    // 0x3dab0c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3dab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3dab10:
    // 0x3dab10: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3dab10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3dab14:
    // 0x3dab14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dab14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dab18:
    // 0x3dab18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dab1c:
    // 0x3dab1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dab1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dab20:
    // 0x3dab20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dab24:
    // 0x3dab24: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dab24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dab28:
    // 0x3dab28: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dab2c:
    // 0x3dab2c: 0x40f809  jalr        $v0
label_3dab30:
    if (ctx->pc == 0x3DAB30u) {
        ctx->pc = 0x3DAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB2Cu;
        // 0x3dab30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAB34u;
        goto label_3dab34;
    }
    ctx->pc = 0x3DAB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DAB34u);
        ctx->pc = 0x3DAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB2Cu;
        // 0x3dab30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAB2Cu, 0x3DAB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DAB34u;
label_3dab34:
    // 0x3dab34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dab34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dab38:
    // 0x3dab38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dab38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dab3c:
    // 0x3dab3c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dab40:
    // 0x3dab40: 0xc0e858c  jal         func_3A1630
label_3dab44:
    if (ctx->pc == 0x3DAB44u) {
        ctx->pc = 0x3DAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB40u;
        // 0x3dab44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAB48u;
        goto label_3dab48;
    }
    ctx->pc = 0x3DAB40u;
    SET_GPR_U32(ctx, 31, 0x3DAB48u);
    ctx->pc = 0x3DAB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAB40u;
    // 0x3dab44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DAB40u, 0x3DAB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAB48u;
label_3dab48:
    // 0x3dab48: 0xc0ea14c  jal         func_3A8530
label_3dab4c:
    if (ctx->pc == 0x3DAB4Cu) {
        ctx->pc = 0x3DAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB48u;
        // 0x3dab4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAB50u;
        goto label_3dab50;
    }
    ctx->pc = 0x3DAB48u;
    SET_GPR_U32(ctx, 31, 0x3DAB50u);
    ctx->pc = 0x3DAB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAB48u;
    // 0x3dab4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DAB48u, 0x3DAB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAB50u;
label_3dab50:
    // 0x3dab50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dab50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dab54:
    // 0x3dab54: 0xc0ea12a  jal         func_3A84A8
label_3dab58:
    if (ctx->pc == 0x3DAB58u) {
        ctx->pc = 0x3DAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB54u;
        // 0x3dab58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAB5Cu;
        goto label_3dab5c;
    }
    ctx->pc = 0x3DAB54u;
    SET_GPR_U32(ctx, 31, 0x3DAB5Cu);
    ctx->pc = 0x3DAB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAB54u;
    // 0x3dab58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DAB54u, 0x3DAB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAB5Cu;
label_3dab5c:
    // 0x3dab5c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dab5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dab60:
    // 0x3dab60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dab60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dab64:
    // 0x3dab64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dab68:
    // 0x3dab68: 0xc0ea12a  jal         func_3A84A8
label_3dab6c:
    if (ctx->pc == 0x3DAB6Cu) {
        ctx->pc = 0x3DAB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB68u;
        // 0x3dab6c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAB70u;
        goto label_3dab70;
    }
    ctx->pc = 0x3DAB68u;
    SET_GPR_U32(ctx, 31, 0x3DAB70u);
    ctx->pc = 0x3DAB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAB68u;
    // 0x3dab6c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DAB68u, 0x3DAB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAB70u;
label_3dab70:
    // 0x3dab70: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dab70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dab74:
    // 0x3dab74: 0x3c052295  lui         $a1, 0x2295
    ctx->pc = 0x3dab74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8853 << 16));
label_3dab78:
    // 0x3dab78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dab78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dab7c:
    // 0x3dab7c: 0x34a5785e  ori         $a1, $a1, 0x785E
    ctx->pc = 0x3dab7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30814);
label_3dab80:
    // 0x3dab80: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3dab80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3dab84:
    // 0x3dab84: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3dab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dab88:
    // 0x3dab88: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dab88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dab8c:
    // 0x3dab8c: 0xc045cb2  jal         func_1172C8
label_3dab90:
    if (ctx->pc == 0x3DAB90u) {
        ctx->pc = 0x3DAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB8Cu;
        // 0x3dab90: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAB94u;
        goto label_3dab94;
    }
    ctx->pc = 0x3DAB8Cu;
    SET_GPR_U32(ctx, 31, 0x3DAB94u);
    ctx->pc = 0x3DAB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAB8Cu;
    // 0x3dab90: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3DAB8Cu, 0x3DAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAB94u;
label_3dab94:
    // 0x3dab94: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dab94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dab98:
    // 0x3dab98: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dab98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dab9c:
    // 0x3dab9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dab9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3daba0:
    // 0x3daba0: 0x3e00008  jr          $ra
label_3daba4:
    if (ctx->pc == 0x3DABA4u) {
        ctx->pc = 0x3DABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABA0u;
        // 0x3daba4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DABA8u;
        goto label_fallthrough_0x3daba0;
    }
    ctx->pc = 0x3DABA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABA0u;
        // 0x3daba4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DABA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3daba0:
    ctx->pc = 0x3DABA8u;
}
