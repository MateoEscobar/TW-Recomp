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

// Function: sub_003DABB8
// Address: 0x3dabb8 - 0x3dac58
void sub_003DABB8_0x3dabb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DABB8_0x3dabb8");
#endif

    switch (ctx->pc) {
        case 0x3dabb8u: goto label_3dabb8;
        case 0x3dabbcu: goto label_3dabbc;
        case 0x3dabc0u: goto label_3dabc0;
        case 0x3dabc4u: goto label_3dabc4;
        case 0x3dabc8u: goto label_3dabc8;
        case 0x3dabccu: goto label_3dabcc;
        case 0x3dabd0u: goto label_3dabd0;
        case 0x3dabd4u: goto label_3dabd4;
        case 0x3dabd8u: goto label_3dabd8;
        case 0x3dabdcu: goto label_3dabdc;
        case 0x3dabe0u: goto label_3dabe0;
        case 0x3dabe4u: goto label_3dabe4;
        case 0x3dabe8u: goto label_3dabe8;
        case 0x3dabecu: goto label_3dabec;
        case 0x3dabf0u: goto label_3dabf0;
        case 0x3dabf4u: goto label_3dabf4;
        case 0x3dabf8u: goto label_3dabf8;
        case 0x3dabfcu: goto label_3dabfc;
        case 0x3dac00u: goto label_3dac00;
        case 0x3dac04u: goto label_3dac04;
        case 0x3dac08u: goto label_3dac08;
        case 0x3dac0cu: goto label_3dac0c;
        case 0x3dac10u: goto label_3dac10;
        case 0x3dac14u: goto label_3dac14;
        case 0x3dac18u: goto label_3dac18;
        case 0x3dac1cu: goto label_3dac1c;
        case 0x3dac20u: goto label_3dac20;
        case 0x3dac24u: goto label_3dac24;
        case 0x3dac28u: goto label_3dac28;
        case 0x3dac2cu: goto label_3dac2c;
        case 0x3dac30u: goto label_3dac30;
        case 0x3dac34u: goto label_3dac34;
        case 0x3dac38u: goto label_3dac38;
        case 0x3dac3cu: goto label_3dac3c;
        case 0x3dac40u: goto label_3dac40;
        case 0x3dac44u: goto label_3dac44;
        case 0x3dac48u: goto label_3dac48;
        case 0x3dac4cu: goto label_3dac4c;
        case 0x3dac50u: goto label_3dac50;
        case 0x3dac54u: goto label_3dac54;
        default: break;
    }

    ctx->pc = 0x3dabb8u;

label_3dabb8:
    // 0x3dabb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dabb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dabbc:
    // 0x3dabbc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3dabbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3dabc0:
    // 0x3dabc0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3dabc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3dabc4:
    // 0x3dabc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dabc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dabc8:
    // 0x3dabc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dabc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dabcc:
    // 0x3dabcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dabccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dabd0:
    // 0x3dabd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dabd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dabd4:
    // 0x3dabd4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dabd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dabd8:
    // 0x3dabd8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dabdc:
    // 0x3dabdc: 0x40f809  jalr        $v0
label_3dabe0:
    if (ctx->pc == 0x3DABE0u) {
        ctx->pc = 0x3DABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABDCu;
        // 0x3dabe0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DABE4u;
        goto label_3dabe4;
    }
    ctx->pc = 0x3DABDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DABE4u);
        ctx->pc = 0x3DABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABDCu;
        // 0x3dabe0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DABDCu, 0x3DABE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DABE4u;
label_3dabe4:
    // 0x3dabe4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dabe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dabe8:
    // 0x3dabe8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dabe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dabec:
    // 0x3dabec: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dabecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dabf0:
    // 0x3dabf0: 0xc0e858c  jal         func_3A1630
label_3dabf4:
    if (ctx->pc == 0x3DABF4u) {
        ctx->pc = 0x3DABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABF0u;
        // 0x3dabf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DABF8u;
        goto label_3dabf8;
    }
    ctx->pc = 0x3DABF0u;
    SET_GPR_U32(ctx, 31, 0x3DABF8u);
    ctx->pc = 0x3DABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DABF0u;
    // 0x3dabf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DABF0u, 0x3DABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DABF8u;
label_3dabf8:
    // 0x3dabf8: 0xc0ea14c  jal         func_3A8530
label_3dabfc:
    if (ctx->pc == 0x3DABFCu) {
        ctx->pc = 0x3DABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABF8u;
        // 0x3dabfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAC00u;
        goto label_3dac00;
    }
    ctx->pc = 0x3DABF8u;
    SET_GPR_U32(ctx, 31, 0x3DAC00u);
    ctx->pc = 0x3DABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DABF8u;
    // 0x3dabfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DABF8u, 0x3DAC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAC00u;
label_3dac00:
    // 0x3dac00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dac00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dac04:
    // 0x3dac04: 0xc0ea12a  jal         func_3A84A8
label_3dac08:
    if (ctx->pc == 0x3DAC08u) {
        ctx->pc = 0x3DAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC04u;
        // 0x3dac08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAC0Cu;
        goto label_3dac0c;
    }
    ctx->pc = 0x3DAC04u;
    SET_GPR_U32(ctx, 31, 0x3DAC0Cu);
    ctx->pc = 0x3DAC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAC04u;
    // 0x3dac08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DAC04u, 0x3DAC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAC0Cu;
label_3dac0c:
    // 0x3dac0c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dac0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dac10:
    // 0x3dac10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dac10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dac14:
    // 0x3dac14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dac14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dac18:
    // 0x3dac18: 0xc0ea12a  jal         func_3A84A8
label_3dac1c:
    if (ctx->pc == 0x3DAC1Cu) {
        ctx->pc = 0x3DAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC18u;
        // 0x3dac1c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAC20u;
        goto label_3dac20;
    }
    ctx->pc = 0x3DAC18u;
    SET_GPR_U32(ctx, 31, 0x3DAC20u);
    ctx->pc = 0x3DAC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAC18u;
    // 0x3dac1c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DAC18u, 0x3DAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAC20u;
label_3dac20:
    // 0x3dac20: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dac20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dac24:
    // 0x3dac24: 0x3c05b5a9  lui         $a1, 0xB5A9
    ctx->pc = 0x3dac24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46505 << 16));
label_3dac28:
    // 0x3dac28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dac2c:
    // 0x3dac2c: 0x34a58173  ori         $a1, $a1, 0x8173
    ctx->pc = 0x3dac2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33139);
label_3dac30:
    // 0x3dac30: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3dac30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3dac34:
    // 0x3dac34: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3dac34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dac38:
    // 0x3dac38: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dac3c:
    // 0x3dac3c: 0xc045cb2  jal         func_1172C8
label_3dac40:
    if (ctx->pc == 0x3DAC40u) {
        ctx->pc = 0x3DAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC3Cu;
        // 0x3dac40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAC44u;
        goto label_3dac44;
    }
    ctx->pc = 0x3DAC3Cu;
    SET_GPR_U32(ctx, 31, 0x3DAC44u);
    ctx->pc = 0x3DAC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAC3Cu;
    // 0x3dac40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3DAC3Cu, 0x3DAC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAC44u;
label_3dac44:
    // 0x3dac44: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dac44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dac48:
    // 0x3dac48: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dac48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dac4c:
    // 0x3dac4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dac4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dac50:
    // 0x3dac50: 0x3e00008  jr          $ra
label_3dac54:
    if (ctx->pc == 0x3DAC54u) {
        ctx->pc = 0x3DAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC50u;
        // 0x3dac54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAC58u;
        goto label_fallthrough_0x3dac50;
    }
    ctx->pc = 0x3DAC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC50u;
        // 0x3dac54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dac50:
    ctx->pc = 0x3DAC58u;
}
