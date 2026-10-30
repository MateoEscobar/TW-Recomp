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

// Function: sub_003DCCC8
// Address: 0x3dccc8 - 0x3dcd68
void sub_003DCCC8_0x3dccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCCC8_0x3dccc8");
#endif

    switch (ctx->pc) {
        case 0x3dccc8u: goto label_3dccc8;
        case 0x3dccccu: goto label_3dcccc;
        case 0x3dccd0u: goto label_3dccd0;
        case 0x3dccd4u: goto label_3dccd4;
        case 0x3dccd8u: goto label_3dccd8;
        case 0x3dccdcu: goto label_3dccdc;
        case 0x3dcce0u: goto label_3dcce0;
        case 0x3dcce4u: goto label_3dcce4;
        case 0x3dcce8u: goto label_3dcce8;
        case 0x3dccecu: goto label_3dccec;
        case 0x3dccf0u: goto label_3dccf0;
        case 0x3dccf4u: goto label_3dccf4;
        case 0x3dccf8u: goto label_3dccf8;
        case 0x3dccfcu: goto label_3dccfc;
        case 0x3dcd00u: goto label_3dcd00;
        case 0x3dcd04u: goto label_3dcd04;
        case 0x3dcd08u: goto label_3dcd08;
        case 0x3dcd0cu: goto label_3dcd0c;
        case 0x3dcd10u: goto label_3dcd10;
        case 0x3dcd14u: goto label_3dcd14;
        case 0x3dcd18u: goto label_3dcd18;
        case 0x3dcd1cu: goto label_3dcd1c;
        case 0x3dcd20u: goto label_3dcd20;
        case 0x3dcd24u: goto label_3dcd24;
        case 0x3dcd28u: goto label_3dcd28;
        case 0x3dcd2cu: goto label_3dcd2c;
        case 0x3dcd30u: goto label_3dcd30;
        case 0x3dcd34u: goto label_3dcd34;
        case 0x3dcd38u: goto label_3dcd38;
        case 0x3dcd3cu: goto label_3dcd3c;
        case 0x3dcd40u: goto label_3dcd40;
        case 0x3dcd44u: goto label_3dcd44;
        case 0x3dcd48u: goto label_3dcd48;
        case 0x3dcd4cu: goto label_3dcd4c;
        case 0x3dcd50u: goto label_3dcd50;
        case 0x3dcd54u: goto label_3dcd54;
        case 0x3dcd58u: goto label_3dcd58;
        case 0x3dcd5cu: goto label_3dcd5c;
        case 0x3dcd60u: goto label_3dcd60;
        case 0x3dcd64u: goto label_3dcd64;
        default: break;
    }

    ctx->pc = 0x3dccc8u;

label_3dccc8:
    // 0x3dccc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dccc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dcccc:
    // 0x3dcccc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3dccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3dccd0:
    // 0x3dccd0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3dccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3dccd4:
    // 0x3dccd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dccd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dccd8:
    // 0x3dccd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dccdc:
    // 0x3dccdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dccdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dcce0:
    // 0x3dcce0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dcce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dcce4:
    // 0x3dcce4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dcce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dcce8:
    // 0x3dcce8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dcce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dccec:
    // 0x3dccec: 0x40f809  jalr        $v0
label_3dccf0:
    if (ctx->pc == 0x3DCCF0u) {
        ctx->pc = 0x3DCCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCCECu;
        // 0x3dccf0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCCF4u;
        goto label_3dccf4;
    }
    ctx->pc = 0x3DCCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DCCF4u);
        ctx->pc = 0x3DCCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCCECu;
        // 0x3dccf0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCCECu, 0x3DCCF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DCCF4u;
label_3dccf4:
    // 0x3dccf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dccf8:
    // 0x3dccf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dccfc:
    // 0x3dccfc: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dcd00:
    // 0x3dcd00: 0xc0e858c  jal         func_3A1630
label_3dcd04:
    if (ctx->pc == 0x3DCD04u) {
        ctx->pc = 0x3DCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD00u;
        // 0x3dcd04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCD08u;
        goto label_3dcd08;
    }
    ctx->pc = 0x3DCD00u;
    SET_GPR_U32(ctx, 31, 0x3DCD08u);
    ctx->pc = 0x3DCD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCD00u;
    // 0x3dcd04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DCD00u, 0x3DCD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCD08u;
label_3dcd08:
    // 0x3dcd08: 0xc0ea14c  jal         func_3A8530
label_3dcd0c:
    if (ctx->pc == 0x3DCD0Cu) {
        ctx->pc = 0x3DCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD08u;
        // 0x3dcd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCD10u;
        goto label_3dcd10;
    }
    ctx->pc = 0x3DCD08u;
    SET_GPR_U32(ctx, 31, 0x3DCD10u);
    ctx->pc = 0x3DCD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCD08u;
    // 0x3dcd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DCD08u, 0x3DCD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCD10u;
label_3dcd10:
    // 0x3dcd10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dcd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcd14:
    // 0x3dcd14: 0xc0ea12a  jal         func_3A84A8
label_3dcd18:
    if (ctx->pc == 0x3DCD18u) {
        ctx->pc = 0x3DCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD14u;
        // 0x3dcd18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCD1Cu;
        goto label_3dcd1c;
    }
    ctx->pc = 0x3DCD14u;
    SET_GPR_U32(ctx, 31, 0x3DCD1Cu);
    ctx->pc = 0x3DCD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCD14u;
    // 0x3dcd18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCD14u, 0x3DCD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCD1Cu;
label_3dcd1c:
    // 0x3dcd1c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dcd1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcd20:
    // 0x3dcd20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dcd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dcd24:
    // 0x3dcd24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dcd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcd28:
    // 0x3dcd28: 0xc0ea12a  jal         func_3A84A8
label_3dcd2c:
    if (ctx->pc == 0x3DCD2Cu) {
        ctx->pc = 0x3DCD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD28u;
        // 0x3dcd2c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCD30u;
        goto label_3dcd30;
    }
    ctx->pc = 0x3DCD28u;
    SET_GPR_U32(ctx, 31, 0x3DCD30u);
    ctx->pc = 0x3DCD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCD28u;
    // 0x3dcd2c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCD28u, 0x3DCD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCD30u;
label_3dcd30:
    // 0x3dcd30: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dcd30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcd34:
    // 0x3dcd34: 0x3c052295  lui         $a1, 0x2295
    ctx->pc = 0x3dcd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8853 << 16));
label_3dcd38:
    // 0x3dcd38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dcd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dcd3c:
    // 0x3dcd3c: 0x34a5785e  ori         $a1, $a1, 0x785E
    ctx->pc = 0x3dcd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30814);
label_3dcd40:
    // 0x3dcd40: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3dcd40u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3dcd44:
    // 0x3dcd44: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3dcd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcd48:
    // 0x3dcd48: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dcd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dcd4c:
    // 0x3dcd4c: 0xc045cb2  jal         func_1172C8
label_3dcd50:
    if (ctx->pc == 0x3DCD50u) {
        ctx->pc = 0x3DCD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD4Cu;
        // 0x3dcd50: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCD54u;
        goto label_3dcd54;
    }
    ctx->pc = 0x3DCD4Cu;
    SET_GPR_U32(ctx, 31, 0x3DCD54u);
    ctx->pc = 0x3DCD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCD4Cu;
    // 0x3dcd50: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3DCD4Cu, 0x3DCD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCD54u;
label_3dcd54:
    // 0x3dcd54: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dcd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dcd58:
    // 0x3dcd58: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dcd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dcd5c:
    // 0x3dcd5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dcd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dcd60:
    // 0x3dcd60: 0x3e00008  jr          $ra
label_3dcd64:
    if (ctx->pc == 0x3DCD64u) {
        ctx->pc = 0x3DCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD60u;
        // 0x3dcd64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCD68u;
        goto label_fallthrough_0x3dcd60;
    }
    ctx->pc = 0x3DCD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD60u;
        // 0x3dcd64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dcd60:
    ctx->pc = 0x3DCD68u;
}
