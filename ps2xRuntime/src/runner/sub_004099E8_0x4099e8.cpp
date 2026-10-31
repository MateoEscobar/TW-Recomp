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

// Function: sub_004099E8
// Address: 0x4099e8 - 0x409aa8
void sub_004099E8_0x4099e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004099E8_0x4099e8");
#endif

    switch (ctx->pc) {
        case 0x409a0cu: goto label_409a0c;
        case 0x409a20u: goto label_409a20;
        case 0x409a2cu: goto label_409a2c;
        case 0x409a40u: goto label_409a40;
        case 0x409a54u: goto label_409a54;
        case 0x409a60u: goto label_409a60;
        case 0x409a6cu: goto label_409a6c;
        case 0x409a80u: goto label_409a80;
        case 0x409a90u: goto label_409a90;
        default: break;
    }

    ctx->pc = 0x4099e8u;

    // 0x4099e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4099e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4099ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4099ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4099f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4099f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4099f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4099f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4099f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4099f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4099fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4099fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409a04: 0xc1030ea  jal         func_40C3A8
    ctx->pc = 0x409A04u;
    SET_GPR_U32(ctx, 31, 0x409A0Cu);
    ctx->pc = 0x409A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409A04u;
    // 0x409a08: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C3A8u, 0x409A04u, 0x409A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409A0Cu;
label_409a0c:
    // 0x409a0c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x409A0Cu;
    {
        const bool branch_taken_0x409a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x409a0c) {
            ctx->pc = 0x409A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409A0Cu;
            // 0x409a10: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409A48u;
            goto label_409a48;
        }
    }
    ctx->pc = 0x409A14u;
    // 0x409a14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x409a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409a18: 0xc1029dc  jal         func_40A770
    ctx->pc = 0x409A18u;
    SET_GPR_U32(ctx, 31, 0x409A20u);
    ctx->pc = 0x409A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409A18u;
    // 0x409a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A770u, 0x409A18u, 0x409A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409A20u;
label_409a20:
    // 0x409a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409a24: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x409A24u;
    SET_GPR_U32(ctx, 31, 0x409A2Cu);
    ctx->pc = 0x409A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409A24u;
    // 0x409a28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x409A24u, 0x409A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409A2Cu;
label_409a2c:
    // 0x409a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x409a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x409a30: 0x50430018  beql        $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x409A30u;
    {
        const bool branch_taken_0x409a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x409a30) {
            ctx->pc = 0x409A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409A30u;
            // 0x409a34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409A94u;
            goto label_409a94;
        }
    }
    ctx->pc = 0x409A38u;
    // 0x409a38: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x409A38u;
    SET_GPR_U32(ctx, 31, 0x409A40u);
    ctx->pc = 0x409A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409A38u;
    // 0x409a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x409A38u, 0x409A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409A40u;
label_409a40:
    // 0x409a40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x409a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409a44: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x409a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_409a48:
    // 0x409a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409a4c: 0xc102866  jal         func_40A198
    ctx->pc = 0x409A4Cu;
    SET_GPR_U32(ctx, 31, 0x409A54u);
    ctx->pc = 0x409A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409A4Cu;
    // 0x409a50: 0x24a57fa8  addiu       $a1, $a1, 0x7FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x409A4Cu, 0x409A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409A54u;
label_409a54:
    // 0x409a54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x409a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409a58: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x409A58u;
    SET_GPR_U32(ctx, 31, 0x409A60u);
    ctx->pc = 0x409A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409A58u;
    // 0x409a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x409A58u, 0x409A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409A60u;
label_409a60:
    // 0x409a60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x409a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409a64: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x409A64u;
    SET_GPR_U32(ctx, 31, 0x409A6Cu);
    ctx->pc = 0x409A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409A64u;
    // 0x409a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x409A64u, 0x409A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409A6Cu;
label_409a6c:
    // 0x409a6c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x409a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x409a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409a74: 0x24a59940  addiu       $a1, $a1, -0x66C0
    ctx->pc = 0x409a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940992));
    // 0x409a78: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x409A78u;
    SET_GPR_U32(ctx, 31, 0x409A80u);
    ctx->pc = 0x409A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409A78u;
    // 0x409a7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x409A78u, 0x409A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409A80u;
label_409a80:
    // 0x409a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409a84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x409a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x409a88: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x409A88u;
    SET_GPR_U32(ctx, 31, 0x409A90u);
    ctx->pc = 0x409A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409A88u;
    // 0x409a8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x409A88u, 0x409A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409A90u;
label_409a90:
    // 0x409a90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x409a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_409a94:
    // 0x409a94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x409a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409a98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x409a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x409AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409AA0u;
        // 0x409aa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409AA8u;
}
