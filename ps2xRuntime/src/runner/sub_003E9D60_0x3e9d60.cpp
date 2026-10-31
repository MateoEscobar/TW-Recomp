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

// Function: sub_003E9D60
// Address: 0x3e9d60 - 0x3e9e60
void sub_003E9D60_0x3e9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9D60_0x3e9d60");
#endif

    switch (ctx->pc) {
        case 0x3e9d60u: goto label_3e9d60;
        case 0x3e9d64u: goto label_3e9d64;
        case 0x3e9d68u: goto label_3e9d68;
        case 0x3e9d6cu: goto label_3e9d6c;
        case 0x3e9d70u: goto label_3e9d70;
        case 0x3e9d74u: goto label_3e9d74;
        case 0x3e9d78u: goto label_3e9d78;
        case 0x3e9d7cu: goto label_3e9d7c;
        case 0x3e9d80u: goto label_3e9d80;
        case 0x3e9d84u: goto label_3e9d84;
        case 0x3e9d88u: goto label_3e9d88;
        case 0x3e9d8cu: goto label_3e9d8c;
        case 0x3e9d90u: goto label_3e9d90;
        case 0x3e9d94u: goto label_3e9d94;
        case 0x3e9d98u: goto label_3e9d98;
        case 0x3e9d9cu: goto label_3e9d9c;
        case 0x3e9da0u: goto label_3e9da0;
        case 0x3e9da4u: goto label_3e9da4;
        case 0x3e9da8u: goto label_3e9da8;
        case 0x3e9dacu: goto label_3e9dac;
        case 0x3e9db0u: goto label_3e9db0;
        case 0x3e9db4u: goto label_3e9db4;
        case 0x3e9db8u: goto label_3e9db8;
        case 0x3e9dbcu: goto label_3e9dbc;
        case 0x3e9dc0u: goto label_3e9dc0;
        case 0x3e9dc4u: goto label_3e9dc4;
        case 0x3e9dc8u: goto label_3e9dc8;
        case 0x3e9dccu: goto label_3e9dcc;
        case 0x3e9dd0u: goto label_3e9dd0;
        case 0x3e9dd4u: goto label_3e9dd4;
        case 0x3e9dd8u: goto label_3e9dd8;
        case 0x3e9ddcu: goto label_3e9ddc;
        case 0x3e9de0u: goto label_3e9de0;
        case 0x3e9de4u: goto label_3e9de4;
        case 0x3e9de8u: goto label_3e9de8;
        case 0x3e9decu: goto label_3e9dec;
        case 0x3e9df0u: goto label_3e9df0;
        case 0x3e9df4u: goto label_3e9df4;
        case 0x3e9df8u: goto label_3e9df8;
        case 0x3e9dfcu: goto label_3e9dfc;
        case 0x3e9e00u: goto label_3e9e00;
        case 0x3e9e04u: goto label_3e9e04;
        case 0x3e9e08u: goto label_3e9e08;
        case 0x3e9e0cu: goto label_3e9e0c;
        case 0x3e9e10u: goto label_3e9e10;
        case 0x3e9e14u: goto label_3e9e14;
        case 0x3e9e18u: goto label_3e9e18;
        case 0x3e9e1cu: goto label_3e9e1c;
        case 0x3e9e20u: goto label_3e9e20;
        case 0x3e9e24u: goto label_3e9e24;
        case 0x3e9e28u: goto label_3e9e28;
        case 0x3e9e2cu: goto label_3e9e2c;
        case 0x3e9e30u: goto label_3e9e30;
        case 0x3e9e34u: goto label_3e9e34;
        case 0x3e9e38u: goto label_3e9e38;
        case 0x3e9e3cu: goto label_3e9e3c;
        case 0x3e9e40u: goto label_3e9e40;
        case 0x3e9e44u: goto label_3e9e44;
        case 0x3e9e48u: goto label_3e9e48;
        case 0x3e9e4cu: goto label_3e9e4c;
        case 0x3e9e50u: goto label_3e9e50;
        case 0x3e9e54u: goto label_3e9e54;
        case 0x3e9e58u: goto label_3e9e58;
        case 0x3e9e5cu: goto label_3e9e5c;
        default: break;
    }

    ctx->pc = 0x3e9d60u;

label_3e9d60:
    // 0x3e9d60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e9d64:
    // 0x3e9d64: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e9d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e9d68:
    // 0x3e9d68: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e9d6c:
    // 0x3e9d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e9d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9d70:
    // 0x3e9d70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e9d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e9d74:
    // 0x3e9d74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e9d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e9d78:
    // 0x3e9d78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e9d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e9d7c:
    // 0x3e9d7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e9d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e9d80:
    // 0x3e9d80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e9d84:
    // 0x3e9d84: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e9d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e9d88:
    // 0x3e9d88: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e9d8c:
    // 0x3e9d8c: 0x40f809  jalr        $v0
label_3e9d90:
    if (ctx->pc == 0x3E9D90u) {
        ctx->pc = 0x3E9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D8Cu;
        // 0x3e9d90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D94u;
        goto label_3e9d94;
    }
    ctx->pc = 0x3E9D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9D94u);
        ctx->pc = 0x3E9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D8Cu;
        // 0x3e9d90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9D8Cu, 0x3E9D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9D94u;
label_3e9d94:
    // 0x3e9d94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e9d94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9d98:
    // 0x3e9d98: 0xc0ea14c  jal         func_3A8530
label_3e9d9c:
    if (ctx->pc == 0x3E9D9Cu) {
        ctx->pc = 0x3E9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D98u;
        // 0x3e9d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DA0u;
        goto label_3e9da0;
    }
    ctx->pc = 0x3E9D98u;
    SET_GPR_U32(ctx, 31, 0x3E9DA0u);
    ctx->pc = 0x3E9D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D98u;
    // 0x3e9d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E9D98u, 0x3E9DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DA0u;
label_3e9da0:
    // 0x3e9da0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e9da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e9da4:
    // 0x3e9da4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e9da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9da8:
    // 0x3e9da8: 0xc0ea12a  jal         func_3A84A8
label_3e9dac:
    if (ctx->pc == 0x3E9DACu) {
        ctx->pc = 0x3E9DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DA8u;
        // 0x3e9dac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DB0u;
        goto label_3e9db0;
    }
    ctx->pc = 0x3E9DA8u;
    SET_GPR_U32(ctx, 31, 0x3E9DB0u);
    ctx->pc = 0x3E9DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9DA8u;
    // 0x3e9dac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E9DA8u, 0x3E9DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DB0u;
label_3e9db0:
    // 0x3e9db0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e9db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e9db4:
    // 0x3e9db4: 0xc0ea12a  jal         func_3A84A8
label_3e9db8:
    if (ctx->pc == 0x3E9DB8u) {
        ctx->pc = 0x3E9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DB4u;
        // 0x3e9db8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DBCu;
        goto label_3e9dbc;
    }
    ctx->pc = 0x3E9DB4u;
    SET_GPR_U32(ctx, 31, 0x3E9DBCu);
    ctx->pc = 0x3E9DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9DB4u;
    // 0x3e9db8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E9DB4u, 0x3E9DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DBCu;
label_3e9dbc:
    // 0x3e9dbc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3e9dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3e9dc0:
    // 0x3e9dc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e9dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e9dc4:
    // 0x3e9dc4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e9dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e9dc8:
    // 0x3e9dc8: 0xc0e862e  jal         func_3A18B8
label_3e9dcc:
    if (ctx->pc == 0x3E9DCCu) {
        ctx->pc = 0x3E9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DC8u;
        // 0x3e9dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DD0u;
        goto label_3e9dd0;
    }
    ctx->pc = 0x3E9DC8u;
    SET_GPR_U32(ctx, 31, 0x3E9DD0u);
    ctx->pc = 0x3E9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9DC8u;
    // 0x3e9dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3E9DC8u, 0x3E9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DD0u;
label_3e9dd0:
    // 0x3e9dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e9dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e9dd4:
    // 0x3e9dd4: 0xc0e896c  jal         func_3A25B0
label_3e9dd8:
    if (ctx->pc == 0x3E9DD8u) {
        ctx->pc = 0x3E9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DD4u;
        // 0x3e9dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DDCu;
        goto label_3e9ddc;
    }
    ctx->pc = 0x3E9DD4u;
    SET_GPR_U32(ctx, 31, 0x3E9DDCu);
    ctx->pc = 0x3E9DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9DD4u;
    // 0x3e9dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3E9DD4u, 0x3E9DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DDCu;
label_3e9ddc:
    // 0x3e9ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e9ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e9de0:
    // 0x3e9de0: 0xc0e9132  jal         func_3A44C8
label_3e9de4:
    if (ctx->pc == 0x3E9DE4u) {
        ctx->pc = 0x3E9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DE0u;
        // 0x3e9de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DE8u;
        goto label_3e9de8;
    }
    ctx->pc = 0x3E9DE0u;
    SET_GPR_U32(ctx, 31, 0x3E9DE8u);
    ctx->pc = 0x3E9DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9DE0u;
    // 0x3e9de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3E9DE0u, 0x3E9DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DE8u;
label_3e9de8:
    // 0x3e9de8: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3e9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3e9dec:
    // 0x3e9dec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3e9decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3e9df0:
    // 0x3e9df0: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3e9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3e9df4:
    // 0x3e9df4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3e9df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e9df8:
    // 0x3e9df8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3e9df8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9dfc:
    // 0x3e9dfc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3e9dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e9e00:
    // 0x3e9e00: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x3e9e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_3e9e04:
    // 0x3e9e04: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e9e04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e9e08:
    // 0x3e9e08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e9e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e9e0c:
    // 0x3e9e0c: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x3e9e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
label_3e9e10:
    // 0x3e9e10: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3e9e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9e14:
    // 0x3e9e14: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3e9e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3e9e18:
    // 0x3e9e18: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3e9e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3e9e1c:
    // 0x3e9e1c: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x3e9e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_3e9e20:
    // 0x3e9e20: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x3e9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_3e9e24:
    // 0x3e9e24: 0x40f809  jalr        $v0
label_3e9e28:
    if (ctx->pc == 0x3E9E28u) {
        ctx->pc = 0x3E9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E24u;
        // 0x3e9e28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E2Cu;
        goto label_3e9e2c;
    }
    ctx->pc = 0x3E9E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9E2Cu);
        ctx->pc = 0x3E9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E24u;
        // 0x3e9e28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9E24u, 0x3E9E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9E2Cu;
label_3e9e2c:
    // 0x3e9e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e9e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e9e30:
    // 0x3e9e30: 0xc0e858c  jal         func_3A1630
label_3e9e34:
    if (ctx->pc == 0x3E9E34u) {
        ctx->pc = 0x3E9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E30u;
        // 0x3e9e34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E38u;
        goto label_3e9e38;
    }
    ctx->pc = 0x3E9E30u;
    SET_GPR_U32(ctx, 31, 0x3E9E38u);
    ctx->pc = 0x3E9E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9E30u;
    // 0x3e9e34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E9E30u, 0x3E9E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9E38u;
label_3e9e38:
    // 0x3e9e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9e3c:
    // 0x3e9e3c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3e9e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3e9e40:
    // 0x3e9e40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3e9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3e9e44:
    // 0x3e9e44: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e9e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e9e48:
    // 0x3e9e48: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e9e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e9e4c:
    // 0x3e9e4c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e9e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e9e50:
    // 0x3e9e50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e9e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e9e54:
    // 0x3e9e54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e9e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e9e58:
    // 0x3e9e58: 0x3e00008  jr          $ra
label_3e9e5c:
    if (ctx->pc == 0x3E9E5Cu) {
        ctx->pc = 0x3E9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E58u;
        // 0x3e9e5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E60u;
        goto label_fallthrough_0x3e9e58;
    }
    ctx->pc = 0x3E9E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E58u;
        // 0x3e9e5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9e58:
    ctx->pc = 0x3E9E60u;
}
