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

// Function: sub_00233EF0
// Address: 0x233ef0 - 0x233f60
void sub_00233EF0_0x233ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233EF0_0x233ef0");
#endif

    switch (ctx->pc) {
        case 0x233ef0u: goto label_233ef0;
        case 0x233ef4u: goto label_233ef4;
        case 0x233ef8u: goto label_233ef8;
        case 0x233efcu: goto label_233efc;
        case 0x233f00u: goto label_233f00;
        case 0x233f04u: goto label_233f04;
        case 0x233f08u: goto label_233f08;
        case 0x233f0cu: goto label_233f0c;
        case 0x233f10u: goto label_233f10;
        case 0x233f14u: goto label_233f14;
        case 0x233f18u: goto label_233f18;
        case 0x233f1cu: goto label_233f1c;
        case 0x233f20u: goto label_233f20;
        case 0x233f24u: goto label_233f24;
        case 0x233f28u: goto label_233f28;
        case 0x233f2cu: goto label_233f2c;
        case 0x233f30u: goto label_233f30;
        case 0x233f34u: goto label_233f34;
        case 0x233f38u: goto label_233f38;
        case 0x233f3cu: goto label_233f3c;
        case 0x233f40u: goto label_233f40;
        case 0x233f44u: goto label_233f44;
        case 0x233f48u: goto label_233f48;
        case 0x233f4cu: goto label_233f4c;
        case 0x233f50u: goto label_233f50;
        case 0x233f54u: goto label_233f54;
        case 0x233f58u: goto label_233f58;
        case 0x233f5cu: goto label_233f5c;
        default: break;
    }

    ctx->pc = 0x233ef0u;

label_233ef0:
    // 0x233ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_233ef4:
    // 0x233ef4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x233ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_233ef8:
    // 0x233ef8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x233ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_233efc:
    // 0x233efc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_233f00:
    // 0x233f00: 0xc0e4060  jal         func_390180
label_233f04:
    if (ctx->pc == 0x233F04u) {
        ctx->pc = 0x233F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F00u;
        // 0x233f04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F08u;
        goto label_233f08;
    }
    ctx->pc = 0x233F00u;
    SET_GPR_U32(ctx, 31, 0x233F08u);
    ctx->pc = 0x233F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F00u;
    // 0x233f04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x233F00u, 0x233F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F08u;
label_233f08:
    // 0x233f08: 0xc08a61a  jal         func_229868
label_233f0c:
    if (ctx->pc == 0x233F0Cu) {
        ctx->pc = 0x233F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F08u;
        // 0x233f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F10u;
        goto label_233f10;
    }
    ctx->pc = 0x233F08u;
    SET_GPR_U32(ctx, 31, 0x233F10u);
    ctx->pc = 0x233F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F08u;
    // 0x233f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x233F08u, 0x233F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F10u;
label_233f10:
    // 0x233f10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233f14:
    // 0x233f14: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_233f18:
    if (ctx->pc == 0x233F18u) {
        ctx->pc = 0x233F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F14u;
        // 0x233f18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F1Cu;
        goto label_233f1c;
    }
    ctx->pc = 0x233F14u;
    {
        const bool branch_taken_0x233f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x233f14) {
            ctx->pc = 0x233F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233F14u;
            // 0x233f18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233F54u;
            goto label_233f54;
        }
    }
    ctx->pc = 0x233F1Cu;
label_233f1c:
    // 0x233f1c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x233f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_233f20:
    // 0x233f20: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x233f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
label_233f24:
    // 0x233f24: 0xc089974  jal         func_2265D0
label_233f28:
    if (ctx->pc == 0x233F28u) {
        ctx->pc = 0x233F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F24u;
        // 0x233f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F2Cu;
        goto label_233f2c;
    }
    ctx->pc = 0x233F24u;
    SET_GPR_U32(ctx, 31, 0x233F2Cu);
    ctx->pc = 0x233F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F24u;
    // 0x233f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x233F24u, 0x233F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F2Cu;
label_233f2c:
    // 0x233f2c: 0xc0899f2  jal         func_2267C8
label_233f30:
    if (ctx->pc == 0x233F30u) {
        ctx->pc = 0x233F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F2Cu;
        // 0x233f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F34u;
        goto label_233f34;
    }
    ctx->pc = 0x233F2Cu;
    SET_GPR_U32(ctx, 31, 0x233F34u);
    ctx->pc = 0x233F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F2Cu;
    // 0x233f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267C8u, 0x233F2Cu, 0x233F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F34u;
label_233f34:
    // 0x233f34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x233f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233f38:
    // 0x233f38: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x233f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_233f3c:
    // 0x233f3c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x233f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_233f40:
    // 0x233f40: 0x40f809  jalr        $v0
label_233f44:
    if (ctx->pc == 0x233F44u) {
        ctx->pc = 0x233F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F40u;
        // 0x233f44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F48u;
        goto label_233f48;
    }
    ctx->pc = 0x233F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233F48u);
        ctx->pc = 0x233F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F40u;
        // 0x233f44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233F40u, 0x233F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233F48u;
label_233f48:
    // 0x233f48: 0xc0e162e  jal         func_3858B8
label_233f4c:
    if (ctx->pc == 0x233F4Cu) {
        ctx->pc = 0x233F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F48u;
        // 0x233f4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F50u;
        goto label_233f50;
    }
    ctx->pc = 0x233F48u;
    SET_GPR_U32(ctx, 31, 0x233F50u);
    ctx->pc = 0x233F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F48u;
    // 0x233f4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3858B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3858B8u, 0x233F48u, 0x233F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F50u;
label_233f50:
    // 0x233f50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x233f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_233f54:
    // 0x233f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x233f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233f58:
    // 0x233f58: 0x3e00008  jr          $ra
label_233f5c:
    if (ctx->pc == 0x233F5Cu) {
        ctx->pc = 0x233F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F58u;
        // 0x233f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F60u;
        goto label_fallthrough_0x233f58;
    }
    ctx->pc = 0x233F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F58u;
        // 0x233f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x233f58:
    ctx->pc = 0x233F60u;
}
