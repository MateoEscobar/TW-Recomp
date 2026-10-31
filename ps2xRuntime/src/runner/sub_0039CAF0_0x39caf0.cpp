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

// Function: sub_0039CAF0
// Address: 0x39caf0 - 0x39cb70
void sub_0039CAF0_0x39caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CAF0_0x39caf0");
#endif

    switch (ctx->pc) {
        case 0x39caf0u: goto label_39caf0;
        case 0x39caf4u: goto label_39caf4;
        case 0x39caf8u: goto label_39caf8;
        case 0x39cafcu: goto label_39cafc;
        case 0x39cb00u: goto label_39cb00;
        case 0x39cb04u: goto label_39cb04;
        case 0x39cb08u: goto label_39cb08;
        case 0x39cb0cu: goto label_39cb0c;
        case 0x39cb10u: goto label_39cb10;
        case 0x39cb14u: goto label_39cb14;
        case 0x39cb18u: goto label_39cb18;
        case 0x39cb1cu: goto label_39cb1c;
        case 0x39cb20u: goto label_39cb20;
        case 0x39cb24u: goto label_39cb24;
        case 0x39cb28u: goto label_39cb28;
        case 0x39cb2cu: goto label_39cb2c;
        case 0x39cb30u: goto label_39cb30;
        case 0x39cb34u: goto label_39cb34;
        case 0x39cb38u: goto label_39cb38;
        case 0x39cb3cu: goto label_39cb3c;
        case 0x39cb40u: goto label_39cb40;
        case 0x39cb44u: goto label_39cb44;
        case 0x39cb48u: goto label_39cb48;
        case 0x39cb4cu: goto label_39cb4c;
        case 0x39cb50u: goto label_39cb50;
        case 0x39cb54u: goto label_39cb54;
        case 0x39cb58u: goto label_39cb58;
        case 0x39cb5cu: goto label_39cb5c;
        case 0x39cb60u: goto label_39cb60;
        case 0x39cb64u: goto label_39cb64;
        case 0x39cb68u: goto label_39cb68;
        case 0x39cb6cu: goto label_39cb6c;
        default: break;
    }

    ctx->pc = 0x39caf0u;

label_39caf0:
    // 0x39caf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39caf4:
    // 0x39caf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39caf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_39caf8:
    // 0x39caf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39caf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39cafc:
    // 0x39cafc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39cafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39cb00:
    // 0x39cb00: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x39cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_39cb04:
    // 0x39cb04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39cb08:
    // 0x39cb08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39cb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39cb0c:
    // 0x39cb0c: 0xc051252  jal         func_144948
label_39cb10:
    if (ctx->pc == 0x39CB10u) {
        ctx->pc = 0x39CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB0Cu;
        // 0x39cb10: 0x2484d800  addiu       $a0, $a0, -0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CB14u;
        goto label_39cb14;
    }
    ctx->pc = 0x39CB0Cu;
    SET_GPR_U32(ctx, 31, 0x39CB14u);
    ctx->pc = 0x39CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB0Cu;
    // 0x39cb10: 0x2484d800  addiu       $a0, $a0, -0x2800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144948u, 0x39CB0Cu, 0x39CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB14u;
label_39cb14:
    // 0x39cb14: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x39cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_39cb18:
    // 0x39cb18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39cb1c:
    // 0x39cb1c: 0xc051244  jal         func_144910
label_39cb20:
    if (ctx->pc == 0x39CB20u) {
        ctx->pc = 0x39CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB1Cu;
        // 0x39cb20: 0x24a51540  addiu       $a1, $a1, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CB24u;
        goto label_39cb24;
    }
    ctx->pc = 0x39CB1Cu;
    SET_GPR_U32(ctx, 31, 0x39CB24u);
    ctx->pc = 0x39CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB1Cu;
    // 0x39cb20: 0x24a51540  addiu       $a1, $a1, 0x1540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x39CB1Cu, 0x39CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB24u;
label_39cb24:
    // 0x39cb24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39cb28:
    // 0x39cb28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39cb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39cb2c:
    // 0x39cb2c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39cb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39cb30:
    // 0x39cb30: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39cb34:
    // 0x39cb34: 0x40f809  jalr        $v0
label_39cb38:
    if (ctx->pc == 0x39CB38u) {
        ctx->pc = 0x39CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB34u;
        // 0x39cb38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CB3Cu;
        goto label_39cb3c;
    }
    ctx->pc = 0x39CB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39CB3Cu);
        ctx->pc = 0x39CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB34u;
        // 0x39cb38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CB34u, 0x39CB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39CB3Cu;
label_39cb3c:
    // 0x39cb3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39cb40:
    // 0x39cb40: 0xc051244  jal         func_144910
label_39cb44:
    if (ctx->pc == 0x39CB44u) {
        ctx->pc = 0x39CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB40u;
        // 0x39cb44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CB48u;
        goto label_39cb48;
    }
    ctx->pc = 0x39CB40u;
    SET_GPR_U32(ctx, 31, 0x39CB48u);
    ctx->pc = 0x39CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB40u;
    // 0x39cb44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x39CB40u, 0x39CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB48u;
label_39cb48:
    // 0x39cb48: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x39cb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_39cb4c:
    // 0x39cb4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39cb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39cb50:
    // 0x39cb50: 0xc051244  jal         func_144910
label_39cb54:
    if (ctx->pc == 0x39CB54u) {
        ctx->pc = 0x39CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB50u;
        // 0x39cb54: 0x24a51558  addiu       $a1, $a1, 0x1558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CB58u;
        goto label_39cb58;
    }
    ctx->pc = 0x39CB50u;
    SET_GPR_U32(ctx, 31, 0x39CB58u);
    ctx->pc = 0x39CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB50u;
    // 0x39cb54: 0x24a51558  addiu       $a1, $a1, 0x1558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x39CB50u, 0x39CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB58u;
label_39cb58:
    // 0x39cb58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39cb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39cb5c:
    // 0x39cb5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39cb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39cb60:
    // 0x39cb60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39cb64:
    // 0x39cb64: 0x3e00008  jr          $ra
label_39cb68:
    if (ctx->pc == 0x39CB68u) {
        ctx->pc = 0x39CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB64u;
        // 0x39cb68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CB6Cu;
        goto label_39cb6c;
    }
    ctx->pc = 0x39CB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB64u;
        // 0x39cb68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CB6Cu;
label_39cb6c:
    // 0x39cb6c: 0x0  nop
    ctx->pc = 0x39cb6cu;
    // NOP
    ctx->pc = 0x39cb70u;
}
