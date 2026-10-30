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

// Function: sub_003EAC30
// Address: 0x3eac30 - 0x3eacc8
void sub_003EAC30_0x3eac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAC30_0x3eac30");
#endif

    switch (ctx->pc) {
        case 0x3eac30u: goto label_3eac30;
        case 0x3eac34u: goto label_3eac34;
        case 0x3eac38u: goto label_3eac38;
        case 0x3eac3cu: goto label_3eac3c;
        case 0x3eac40u: goto label_3eac40;
        case 0x3eac44u: goto label_3eac44;
        case 0x3eac48u: goto label_3eac48;
        case 0x3eac4cu: goto label_3eac4c;
        case 0x3eac50u: goto label_3eac50;
        case 0x3eac54u: goto label_3eac54;
        case 0x3eac58u: goto label_3eac58;
        case 0x3eac5cu: goto label_3eac5c;
        case 0x3eac60u: goto label_3eac60;
        case 0x3eac64u: goto label_3eac64;
        case 0x3eac68u: goto label_3eac68;
        case 0x3eac6cu: goto label_3eac6c;
        case 0x3eac70u: goto label_3eac70;
        case 0x3eac74u: goto label_3eac74;
        case 0x3eac78u: goto label_3eac78;
        case 0x3eac7cu: goto label_3eac7c;
        case 0x3eac80u: goto label_3eac80;
        case 0x3eac84u: goto label_3eac84;
        case 0x3eac88u: goto label_3eac88;
        case 0x3eac8cu: goto label_3eac8c;
        case 0x3eac90u: goto label_3eac90;
        case 0x3eac94u: goto label_3eac94;
        case 0x3eac98u: goto label_3eac98;
        case 0x3eac9cu: goto label_3eac9c;
        case 0x3eaca0u: goto label_3eaca0;
        case 0x3eaca4u: goto label_3eaca4;
        case 0x3eaca8u: goto label_3eaca8;
        case 0x3eacacu: goto label_3eacac;
        case 0x3eacb0u: goto label_3eacb0;
        case 0x3eacb4u: goto label_3eacb4;
        case 0x3eacb8u: goto label_3eacb8;
        case 0x3eacbcu: goto label_3eacbc;
        case 0x3eacc0u: goto label_3eacc0;
        case 0x3eacc4u: goto label_3eacc4;
        default: break;
    }

    ctx->pc = 0x3eac30u;

label_3eac30:
    // 0x3eac30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3eac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3eac34:
    // 0x3eac34: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3eac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3eac38:
    // 0x3eac38: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3eac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3eac3c:
    // 0x3eac3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eac3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eac40:
    // 0x3eac40: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3eac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3eac44:
    // 0x3eac44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eac44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eac48:
    // 0x3eac48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3eac48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3eac4c:
    // 0x3eac4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eac50:
    // 0x3eac50: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eac50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eac54:
    // 0x3eac54: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eac58:
    // 0x3eac58: 0x40f809  jalr        $v0
label_3eac5c:
    if (ctx->pc == 0x3EAC5Cu) {
        ctx->pc = 0x3EAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC58u;
        // 0x3eac5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC60u;
        goto label_3eac60;
    }
    ctx->pc = 0x3EAC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAC60u);
        ctx->pc = 0x3EAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC58u;
        // 0x3eac5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAC58u, 0x3EAC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAC60u;
label_3eac60:
    // 0x3eac60: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3eac60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3eac64:
    // 0x3eac64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3eac64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eac68:
    // 0x3eac68: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3eac68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3eac6c:
    // 0x3eac6c: 0xc0ea14c  jal         func_3A8530
label_3eac70:
    if (ctx->pc == 0x3EAC70u) {
        ctx->pc = 0x3EAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC6Cu;
        // 0x3eac70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC74u;
        goto label_3eac74;
    }
    ctx->pc = 0x3EAC6Cu;
    SET_GPR_U32(ctx, 31, 0x3EAC74u);
    ctx->pc = 0x3EAC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAC6Cu;
    // 0x3eac70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EAC6Cu, 0x3EAC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAC74u;
label_3eac74:
    // 0x3eac74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eac78:
    // 0x3eac78: 0xc0ea12a  jal         func_3A84A8
label_3eac7c:
    if (ctx->pc == 0x3EAC7Cu) {
        ctx->pc = 0x3EAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC78u;
        // 0x3eac7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC80u;
        goto label_3eac80;
    }
    ctx->pc = 0x3EAC78u;
    SET_GPR_U32(ctx, 31, 0x3EAC80u);
    ctx->pc = 0x3EAC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAC78u;
    // 0x3eac7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EAC78u, 0x3EAC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAC80u;
label_3eac80:
    // 0x3eac80: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eac80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eac84:
    // 0x3eac84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eac84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eac88:
    // 0x3eac88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3eac88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eac8c:
    // 0x3eac8c: 0xc0ea12a  jal         func_3A84A8
label_3eac90:
    if (ctx->pc == 0x3EAC90u) {
        ctx->pc = 0x3EAC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC8Cu;
        // 0x3eac90: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC94u;
        goto label_3eac94;
    }
    ctx->pc = 0x3EAC8Cu;
    SET_GPR_U32(ctx, 31, 0x3EAC94u);
    ctx->pc = 0x3EAC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAC8Cu;
    // 0x3eac90: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EAC8Cu, 0x3EAC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAC94u;
label_3eac94:
    // 0x3eac94: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eac94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eac98:
    // 0x3eac98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eac9c:
    // 0x3eac9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3eac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3eaca0:
    // 0x3eaca0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3eaca0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3eaca4:
    // 0x3eaca4: 0xc0e858c  jal         func_3A1630
label_3eaca8:
    if (ctx->pc == 0x3EACA8u) {
        ctx->pc = 0x3EACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACA4u;
        // 0x3eaca8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EACACu;
        goto label_3eacac;
    }
    ctx->pc = 0x3EACA4u;
    SET_GPR_U32(ctx, 31, 0x3EACACu);
    ctx->pc = 0x3EACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EACA4u;
    // 0x3eaca8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EACA4u, 0x3EACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EACACu;
label_3eacac:
    // 0x3eacac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3eacacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3eacb0:
    // 0x3eacb0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3eacb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eacb4:
    // 0x3eacb4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3eacb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eacb8:
    // 0x3eacb8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3eacb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eacbc:
    // 0x3eacbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3eacbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3eacc0:
    // 0x3eacc0: 0x3e00008  jr          $ra
label_3eacc4:
    if (ctx->pc == 0x3EACC4u) {
        ctx->pc = 0x3EACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACC0u;
        // 0x3eacc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EACC8u;
        goto label_fallthrough_0x3eacc0;
    }
    ctx->pc = 0x3EACC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACC0u;
        // 0x3eacc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EACC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eacc0:
    ctx->pc = 0x3EACC8u;
}
