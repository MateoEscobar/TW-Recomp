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

// Function: sub_00415DE8
// Address: 0x415de8 - 0x415e70
void sub_00415DE8_0x415de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415DE8_0x415de8");
#endif

    switch (ctx->pc) {
        case 0x415de8u: goto label_415de8;
        case 0x415decu: goto label_415dec;
        case 0x415df0u: goto label_415df0;
        case 0x415df4u: goto label_415df4;
        case 0x415df8u: goto label_415df8;
        case 0x415dfcu: goto label_415dfc;
        case 0x415e00u: goto label_415e00;
        case 0x415e04u: goto label_415e04;
        case 0x415e08u: goto label_415e08;
        case 0x415e0cu: goto label_415e0c;
        case 0x415e10u: goto label_415e10;
        case 0x415e14u: goto label_415e14;
        case 0x415e18u: goto label_415e18;
        case 0x415e1cu: goto label_415e1c;
        case 0x415e20u: goto label_415e20;
        case 0x415e24u: goto label_415e24;
        case 0x415e28u: goto label_415e28;
        case 0x415e2cu: goto label_415e2c;
        case 0x415e30u: goto label_415e30;
        case 0x415e34u: goto label_415e34;
        case 0x415e38u: goto label_415e38;
        case 0x415e3cu: goto label_415e3c;
        case 0x415e40u: goto label_415e40;
        case 0x415e44u: goto label_415e44;
        case 0x415e48u: goto label_415e48;
        case 0x415e4cu: goto label_415e4c;
        case 0x415e50u: goto label_415e50;
        case 0x415e54u: goto label_415e54;
        case 0x415e58u: goto label_415e58;
        case 0x415e5cu: goto label_415e5c;
        case 0x415e60u: goto label_415e60;
        case 0x415e64u: goto label_415e64;
        case 0x415e68u: goto label_415e68;
        case 0x415e6cu: goto label_415e6c;
        default: break;
    }

    ctx->pc = 0x415de8u;

label_415de8:
    // 0x415de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x415de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_415dec:
    // 0x415dec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x415decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_415df0:
    // 0x415df0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_415df4:
    // 0x415df4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x415df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415df8:
    // 0x415df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_415dfc:
    // 0x415dfc: 0x10000010  b           . + 4 + (0x10 << 2)
label_415e00:
    if (ctx->pc == 0x415E00u) {
        ctx->pc = 0x415E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415DFCu;
        // 0x415e00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415E04u;
        goto label_415e04;
    }
    ctx->pc = 0x415DFCu;
    {
        const bool branch_taken_0x415dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415DFCu;
        // 0x415e00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415dfc) {
            ctx->pc = 0x415E40u;
            goto label_415e40;
        }
    }
    ctx->pc = 0x415E04u;
label_415e04:
    // 0x415e04: 0x0  nop
    ctx->pc = 0x415e04u;
    // NOP
label_415e08:
    // 0x415e08: 0xc105774  jal         func_415DD0
label_415e0c:
    if (ctx->pc == 0x415E0Cu) {
        ctx->pc = 0x415E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E08u;
        // 0x415e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415E10u;
        goto label_415e10;
    }
    ctx->pc = 0x415E08u;
    SET_GPR_U32(ctx, 31, 0x415E10u);
    ctx->pc = 0x415E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415E08u;
    // 0x415e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x415E08u, 0x415E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415E10u;
label_415e10:
    // 0x415e10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x415e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_415e14:
    // 0x415e14: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x415e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_415e18:
    // 0x415e18: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x415e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_415e1c:
    // 0x415e1c: 0xa0f809  jalr        $a1
label_415e20:
    if (ctx->pc == 0x415E20u) {
        ctx->pc = 0x415E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E1Cu;
        // 0x415e20: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415E24u;
        goto label_415e24;
    }
    ctx->pc = 0x415E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x415E24u);
        ctx->pc = 0x415E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E1Cu;
        // 0x415e20: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415E1Cu, 0x415E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415E24u;
label_415e24:
    // 0x415e24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x415e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415e28:
    // 0x415e28: 0xc10c313  jal         func_430C4C
label_415e2c:
    if (ctx->pc == 0x415E2Cu) {
        ctx->pc = 0x415E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E28u;
        // 0x415e2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415E30u;
        goto label_415e30;
    }
    ctx->pc = 0x415E28u;
    SET_GPR_U32(ctx, 31, 0x415E30u);
    ctx->pc = 0x415E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415E28u;
    // 0x415e2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x415E28u, 0x415E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415E30u;
label_415e30:
    // 0x415e30: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_415e34:
    if (ctx->pc == 0x415E34u) {
        ctx->pc = 0x415E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E30u;
        // 0x415e34: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415E38u;
        goto label_415e38;
    }
    ctx->pc = 0x415E30u;
    {
        const bool branch_taken_0x415e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x415e30) {
            ctx->pc = 0x415E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415E30u;
            // 0x415e34: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415E40u;
            goto label_415e40;
        }
    }
    ctx->pc = 0x415E38u;
label_415e38:
    // 0x415e38: 0x10000006  b           . + 4 + (0x6 << 2)
label_415e3c:
    if (ctx->pc == 0x415E3Cu) {
        ctx->pc = 0x415E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E38u;
        // 0x415e3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415E40u;
        goto label_415e40;
    }
    ctx->pc = 0x415E38u;
    {
        const bool branch_taken_0x415e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E38u;
        // 0x415e3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415e38) {
            ctx->pc = 0x415E54u;
            goto label_415e54;
        }
    }
    ctx->pc = 0x415E40u;
label_415e40:
    // 0x415e40: 0xc10574c  jal         func_415D30
label_415e44:
    if (ctx->pc == 0x415E44u) {
        ctx->pc = 0x415E48u;
        goto label_415e48;
    }
    ctx->pc = 0x415E40u;
    SET_GPR_U32(ctx, 31, 0x415E48u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x415E40u, 0x415E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415E48u;
label_415e48:
    // 0x415e48: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x415e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_415e4c:
    // 0x415e4c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_415e50:
    if (ctx->pc == 0x415E50u) {
        ctx->pc = 0x415E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E4Cu;
        // 0x415e50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415E54u;
        goto label_415e54;
    }
    ctx->pc = 0x415E4Cu;
    {
        const bool branch_taken_0x415e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E4Cu;
        // 0x415e50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415e4c) {
            ctx->pc = 0x415E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415e08;
        }
    }
    ctx->pc = 0x415E54u;
label_415e54:
    // 0x415e54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x415e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415e58:
    // 0x415e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x415e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415e5c:
    // 0x415e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_415e60:
    // 0x415e60: 0x3e00008  jr          $ra
label_415e64:
    if (ctx->pc == 0x415E64u) {
        ctx->pc = 0x415E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E60u;
        // 0x415e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415E68u;
        goto label_415e68;
    }
    ctx->pc = 0x415E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E60u;
        // 0x415e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415E68u;
label_415e68:
    // 0x415e68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x415e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_415e6c:
    // 0x415e6c: 0x0  nop
    ctx->pc = 0x415e6cu;
    // NOP
    ctx->pc = 0x415e70u;
}
