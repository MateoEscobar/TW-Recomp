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

// Function: sub_003E8E10
// Address: 0x3e8e10 - 0x3e8eb0
void sub_003E8E10_0x3e8e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8E10_0x3e8e10");
#endif

    switch (ctx->pc) {
        case 0x3e8e10u: goto label_3e8e10;
        case 0x3e8e14u: goto label_3e8e14;
        case 0x3e8e18u: goto label_3e8e18;
        case 0x3e8e1cu: goto label_3e8e1c;
        case 0x3e8e20u: goto label_3e8e20;
        case 0x3e8e24u: goto label_3e8e24;
        case 0x3e8e28u: goto label_3e8e28;
        case 0x3e8e2cu: goto label_3e8e2c;
        case 0x3e8e30u: goto label_3e8e30;
        case 0x3e8e34u: goto label_3e8e34;
        case 0x3e8e38u: goto label_3e8e38;
        case 0x3e8e3cu: goto label_3e8e3c;
        case 0x3e8e40u: goto label_3e8e40;
        case 0x3e8e44u: goto label_3e8e44;
        case 0x3e8e48u: goto label_3e8e48;
        case 0x3e8e4cu: goto label_3e8e4c;
        case 0x3e8e50u: goto label_3e8e50;
        case 0x3e8e54u: goto label_3e8e54;
        case 0x3e8e58u: goto label_3e8e58;
        case 0x3e8e5cu: goto label_3e8e5c;
        case 0x3e8e60u: goto label_3e8e60;
        case 0x3e8e64u: goto label_3e8e64;
        case 0x3e8e68u: goto label_3e8e68;
        case 0x3e8e6cu: goto label_3e8e6c;
        case 0x3e8e70u: goto label_3e8e70;
        case 0x3e8e74u: goto label_3e8e74;
        case 0x3e8e78u: goto label_3e8e78;
        case 0x3e8e7cu: goto label_3e8e7c;
        case 0x3e8e80u: goto label_3e8e80;
        case 0x3e8e84u: goto label_3e8e84;
        case 0x3e8e88u: goto label_3e8e88;
        case 0x3e8e8cu: goto label_3e8e8c;
        case 0x3e8e90u: goto label_3e8e90;
        case 0x3e8e94u: goto label_3e8e94;
        case 0x3e8e98u: goto label_3e8e98;
        case 0x3e8e9cu: goto label_3e8e9c;
        case 0x3e8ea0u: goto label_3e8ea0;
        case 0x3e8ea4u: goto label_3e8ea4;
        case 0x3e8ea8u: goto label_3e8ea8;
        case 0x3e8eacu: goto label_3e8eac;
        default: break;
    }

    ctx->pc = 0x3e8e10u;

label_3e8e10:
    // 0x3e8e10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e8e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e8e14:
    // 0x3e8e14: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e8e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e8e18:
    // 0x3e8e18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e8e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e8e1c:
    // 0x3e8e1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e8e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e8e20:
    // 0x3e8e20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e8e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e8e24:
    // 0x3e8e24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e8e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8e28:
    // 0x3e8e28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e8e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e8e2c:
    // 0x3e8e2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e8e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8e30:
    // 0x3e8e30: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e8e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8e34:
    // 0x3e8e34: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8e38:
    // 0x3e8e38: 0x40f809  jalr        $v0
label_3e8e3c:
    if (ctx->pc == 0x3E8E3Cu) {
        ctx->pc = 0x3E8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E38u;
        // 0x3e8e3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8E40u;
        goto label_3e8e40;
    }
    ctx->pc = 0x3E8E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8E40u);
        ctx->pc = 0x3E8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E38u;
        // 0x3e8e3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8E38u, 0x3E8E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8E40u;
label_3e8e40:
    // 0x3e8e40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e8e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8e44:
    // 0x3e8e44: 0xc0ea14c  jal         func_3A8530
label_3e8e48:
    if (ctx->pc == 0x3E8E48u) {
        ctx->pc = 0x3E8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E44u;
        // 0x3e8e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8E4Cu;
        goto label_3e8e4c;
    }
    ctx->pc = 0x3E8E44u;
    SET_GPR_U32(ctx, 31, 0x3E8E4Cu);
    ctx->pc = 0x3E8E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8E44u;
    // 0x3e8e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E8E44u, 0x3E8E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8E4Cu;
label_3e8e4c:
    // 0x3e8e4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e8e50:
    // 0x3e8e50: 0xc0ea12a  jal         func_3A84A8
label_3e8e54:
    if (ctx->pc == 0x3E8E54u) {
        ctx->pc = 0x3E8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E50u;
        // 0x3e8e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8E58u;
        goto label_3e8e58;
    }
    ctx->pc = 0x3E8E50u;
    SET_GPR_U32(ctx, 31, 0x3E8E58u);
    ctx->pc = 0x3E8E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8E50u;
    // 0x3e8e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E8E50u, 0x3E8E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8E58u;
label_3e8e58:
    // 0x3e8e58: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e8e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8e5c:
    // 0x3e8e5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e8e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e8e60:
    // 0x3e8e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8e64:
    // 0x3e8e64: 0xc0ea12a  jal         func_3A84A8
label_3e8e68:
    if (ctx->pc == 0x3E8E68u) {
        ctx->pc = 0x3E8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E64u;
        // 0x3e8e68: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8E6Cu;
        goto label_3e8e6c;
    }
    ctx->pc = 0x3E8E64u;
    SET_GPR_U32(ctx, 31, 0x3E8E6Cu);
    ctx->pc = 0x3E8E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8E64u;
    // 0x3e8e68: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E8E64u, 0x3E8E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8E6Cu;
label_3e8e6c:
    // 0x3e8e6c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e8e6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8e70:
    // 0x3e8e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e8e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e8e74:
    // 0x3e8e74: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3e8e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3e8e78:
    // 0x3e8e78: 0xc0e858c  jal         func_3A1630
label_3e8e7c:
    if (ctx->pc == 0x3E8E7Cu) {
        ctx->pc = 0x3E8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E78u;
        // 0x3e8e7c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8E80u;
        goto label_3e8e80;
    }
    ctx->pc = 0x3E8E78u;
    SET_GPR_U32(ctx, 31, 0x3E8E80u);
    ctx->pc = 0x3E8E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8E78u;
    // 0x3e8e7c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E8E78u, 0x3E8E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8E80u;
label_3e8e80:
    // 0x3e8e80: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e8e80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8e84:
    // 0x3e8e84: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3e8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3e8e88:
    // 0x3e8e88: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e8e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3e8e8c:
    // 0x3e8e8c: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3e8e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3e8e90:
    // 0x3e8e90: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3e8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3e8e94:
    // 0x3e8e94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e8e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e8e98:
    // 0x3e8e98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e8e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e8e9c:
    // 0x3e8e9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e8e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e8ea0:
    // 0x3e8ea0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e8ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e8ea4:
    // 0x3e8ea4: 0x3e00008  jr          $ra
label_3e8ea8:
    if (ctx->pc == 0x3E8EA8u) {
        ctx->pc = 0x3E8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EA4u;
        // 0x3e8ea8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8EACu;
        goto label_3e8eac;
    }
    ctx->pc = 0x3E8EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EA4u;
        // 0x3e8ea8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8EACu;
label_3e8eac:
    // 0x3e8eac: 0x0  nop
    ctx->pc = 0x3e8eacu;
    // NOP
    ctx->pc = 0x3e8eb0u;
}
