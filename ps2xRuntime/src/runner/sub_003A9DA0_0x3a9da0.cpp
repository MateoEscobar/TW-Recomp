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

// Function: sub_003A9DA0
// Address: 0x3a9da0 - 0x3a9f20
void sub_003A9DA0_0x3a9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9DA0_0x3a9da0");
#endif

    switch (ctx->pc) {
        case 0x3a9da0u: goto label_3a9da0;
        case 0x3a9da4u: goto label_3a9da4;
        case 0x3a9da8u: goto label_3a9da8;
        case 0x3a9dacu: goto label_3a9dac;
        case 0x3a9db0u: goto label_3a9db0;
        case 0x3a9db4u: goto label_3a9db4;
        case 0x3a9db8u: goto label_3a9db8;
        case 0x3a9dbcu: goto label_3a9dbc;
        case 0x3a9dc0u: goto label_3a9dc0;
        case 0x3a9dc4u: goto label_3a9dc4;
        case 0x3a9dc8u: goto label_3a9dc8;
        case 0x3a9dccu: goto label_3a9dcc;
        case 0x3a9dd0u: goto label_3a9dd0;
        case 0x3a9dd4u: goto label_3a9dd4;
        case 0x3a9dd8u: goto label_3a9dd8;
        case 0x3a9ddcu: goto label_3a9ddc;
        case 0x3a9de0u: goto label_3a9de0;
        case 0x3a9de4u: goto label_3a9de4;
        case 0x3a9de8u: goto label_3a9de8;
        case 0x3a9decu: goto label_3a9dec;
        case 0x3a9df0u: goto label_3a9df0;
        case 0x3a9df4u: goto label_3a9df4;
        case 0x3a9df8u: goto label_3a9df8;
        case 0x3a9dfcu: goto label_3a9dfc;
        case 0x3a9e00u: goto label_3a9e00;
        case 0x3a9e04u: goto label_3a9e04;
        case 0x3a9e08u: goto label_3a9e08;
        case 0x3a9e0cu: goto label_3a9e0c;
        case 0x3a9e10u: goto label_3a9e10;
        case 0x3a9e14u: goto label_3a9e14;
        case 0x3a9e18u: goto label_3a9e18;
        case 0x3a9e1cu: goto label_3a9e1c;
        case 0x3a9e20u: goto label_3a9e20;
        case 0x3a9e24u: goto label_3a9e24;
        case 0x3a9e28u: goto label_3a9e28;
        case 0x3a9e2cu: goto label_3a9e2c;
        case 0x3a9e30u: goto label_3a9e30;
        case 0x3a9e34u: goto label_3a9e34;
        case 0x3a9e38u: goto label_3a9e38;
        case 0x3a9e3cu: goto label_3a9e3c;
        case 0x3a9e40u: goto label_3a9e40;
        case 0x3a9e44u: goto label_3a9e44;
        case 0x3a9e48u: goto label_3a9e48;
        case 0x3a9e4cu: goto label_3a9e4c;
        case 0x3a9e50u: goto label_3a9e50;
        case 0x3a9e54u: goto label_3a9e54;
        case 0x3a9e58u: goto label_3a9e58;
        case 0x3a9e5cu: goto label_3a9e5c;
        case 0x3a9e60u: goto label_3a9e60;
        case 0x3a9e64u: goto label_3a9e64;
        case 0x3a9e68u: goto label_3a9e68;
        case 0x3a9e6cu: goto label_3a9e6c;
        case 0x3a9e70u: goto label_3a9e70;
        case 0x3a9e74u: goto label_3a9e74;
        case 0x3a9e78u: goto label_3a9e78;
        case 0x3a9e7cu: goto label_3a9e7c;
        case 0x3a9e80u: goto label_3a9e80;
        case 0x3a9e84u: goto label_3a9e84;
        case 0x3a9e88u: goto label_3a9e88;
        case 0x3a9e8cu: goto label_3a9e8c;
        case 0x3a9e90u: goto label_3a9e90;
        case 0x3a9e94u: goto label_3a9e94;
        case 0x3a9e98u: goto label_3a9e98;
        case 0x3a9e9cu: goto label_3a9e9c;
        case 0x3a9ea0u: goto label_3a9ea0;
        case 0x3a9ea4u: goto label_3a9ea4;
        case 0x3a9ea8u: goto label_3a9ea8;
        case 0x3a9eacu: goto label_3a9eac;
        case 0x3a9eb0u: goto label_3a9eb0;
        case 0x3a9eb4u: goto label_3a9eb4;
        case 0x3a9eb8u: goto label_3a9eb8;
        case 0x3a9ebcu: goto label_3a9ebc;
        case 0x3a9ec0u: goto label_3a9ec0;
        case 0x3a9ec4u: goto label_3a9ec4;
        case 0x3a9ec8u: goto label_3a9ec8;
        case 0x3a9eccu: goto label_3a9ecc;
        case 0x3a9ed0u: goto label_3a9ed0;
        case 0x3a9ed4u: goto label_3a9ed4;
        case 0x3a9ed8u: goto label_3a9ed8;
        case 0x3a9edcu: goto label_3a9edc;
        case 0x3a9ee0u: goto label_3a9ee0;
        case 0x3a9ee4u: goto label_3a9ee4;
        case 0x3a9ee8u: goto label_3a9ee8;
        case 0x3a9eecu: goto label_3a9eec;
        case 0x3a9ef0u: goto label_3a9ef0;
        case 0x3a9ef4u: goto label_3a9ef4;
        case 0x3a9ef8u: goto label_3a9ef8;
        case 0x3a9efcu: goto label_3a9efc;
        case 0x3a9f00u: goto label_3a9f00;
        case 0x3a9f04u: goto label_3a9f04;
        case 0x3a9f08u: goto label_3a9f08;
        case 0x3a9f0cu: goto label_3a9f0c;
        case 0x3a9f10u: goto label_3a9f10;
        case 0x3a9f14u: goto label_3a9f14;
        case 0x3a9f18u: goto label_3a9f18;
        case 0x3a9f1cu: goto label_3a9f1c;
        default: break;
    }

    ctx->pc = 0x3a9da0u;

label_3a9da0:
    // 0x3a9da0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3a9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3a9da4:
    // 0x3a9da4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3a9da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3a9da8:
    // 0x3a9da8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3a9da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3a9dac:
    // 0x3a9dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a9dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9db0:
    // 0x3a9db0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3a9db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3a9db4:
    // 0x3a9db4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a9db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a9db8:
    // 0x3a9db8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3a9db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3a9dbc:
    // 0x3a9dbc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3a9dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3a9dc0:
    // 0x3a9dc0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3a9dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3a9dc4:
    // 0x3a9dc4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a9dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3a9dc8:
    // 0x3a9dc8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a9dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3a9dcc:
    // 0x3a9dcc: 0x26160010  addiu       $s6, $s0, 0x10
    ctx->pc = 0x3a9dccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3a9dd0:
    // 0x3a9dd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a9dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9dd4:
    // 0x3a9dd4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a9dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a9dd8:
    // 0x3a9dd8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a9ddc:
    // 0x3a9ddc: 0x40f809  jalr        $v0
label_3a9de0:
    if (ctx->pc == 0x3A9DE0u) {
        ctx->pc = 0x3A9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9DDCu;
        // 0x3a9de0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9DE4u;
        goto label_3a9de4;
    }
    ctx->pc = 0x3A9DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9DE4u);
        ctx->pc = 0x3A9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9DDCu;
        // 0x3a9de0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9DDCu, 0x3A9DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9DE4u;
label_3a9de4:
    // 0x3a9de4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3a9de4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9de8:
    // 0x3a9de8: 0xc0ea146  jal         func_3A8518
label_3a9dec:
    if (ctx->pc == 0x3A9DECu) {
        ctx->pc = 0x3A9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9DE8u;
        // 0x3a9dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9DF0u;
        goto label_3a9df0;
    }
    ctx->pc = 0x3A9DE8u;
    SET_GPR_U32(ctx, 31, 0x3A9DF0u);
    ctx->pc = 0x3A9DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9DE8u;
    // 0x3a9dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A9DE8u, 0x3A9DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9DF0u;
label_3a9df0:
    // 0x3a9df0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a9df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9df4:
    // 0x3a9df4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3a9df4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9df8:
    // 0x3a9df8: 0xc0ea12a  jal         func_3A84A8
label_3a9dfc:
    if (ctx->pc == 0x3A9DFCu) {
        ctx->pc = 0x3A9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9DF8u;
        // 0x3a9dfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E00u;
        goto label_3a9e00;
    }
    ctx->pc = 0x3A9DF8u;
    SET_GPR_U32(ctx, 31, 0x3A9E00u);
    ctx->pc = 0x3A9DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9DF8u;
    // 0x3a9dfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A9DF8u, 0x3A9E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E00u;
label_3a9e00:
    // 0x3a9e00: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a9e00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9e04:
    // 0x3a9e04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a9e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9e08:
    // 0x3a9e08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a9e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e0c:
    // 0x3a9e0c: 0xc0ea12a  jal         func_3A84A8
label_3a9e10:
    if (ctx->pc == 0x3A9E10u) {
        ctx->pc = 0x3A9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E0Cu;
        // 0x3a9e10: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E14u;
        goto label_3a9e14;
    }
    ctx->pc = 0x3A9E0Cu;
    SET_GPR_U32(ctx, 31, 0x3A9E14u);
    ctx->pc = 0x3A9E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E0Cu;
    // 0x3a9e10: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A9E0Cu, 0x3A9E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E14u;
label_3a9e14:
    // 0x3a9e14: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a9e14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9e18:
    // 0x3a9e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a9e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e1c:
    // 0x3a9e1c: 0xc0ea146  jal         func_3A8518
label_3a9e20:
    if (ctx->pc == 0x3A9E20u) {
        ctx->pc = 0x3A9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E1Cu;
        // 0x3a9e20: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E24u;
        goto label_3a9e24;
    }
    ctx->pc = 0x3A9E1Cu;
    SET_GPR_U32(ctx, 31, 0x3A9E24u);
    ctx->pc = 0x3A9E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E1Cu;
    // 0x3a9e20: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A9E1Cu, 0x3A9E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E24u;
label_3a9e24:
    // 0x3a9e24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a9e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e28:
    // 0x3a9e28: 0xc0ea14c  jal         func_3A8530
label_3a9e2c:
    if (ctx->pc == 0x3A9E2Cu) {
        ctx->pc = 0x3A9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E28u;
        // 0x3a9e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E30u;
        goto label_3a9e30;
    }
    ctx->pc = 0x3A9E28u;
    SET_GPR_U32(ctx, 31, 0x3A9E30u);
    ctx->pc = 0x3A9E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E28u;
    // 0x3a9e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3A9E28u, 0x3A9E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E30u;
label_3a9e30:
    // 0x3a9e30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a9e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e34:
    // 0x3a9e34: 0xc0ea146  jal         func_3A8518
label_3a9e38:
    if (ctx->pc == 0x3A9E38u) {
        ctx->pc = 0x3A9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E34u;
        // 0x3a9e38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E3Cu;
        goto label_3a9e3c;
    }
    ctx->pc = 0x3A9E34u;
    SET_GPR_U32(ctx, 31, 0x3A9E3Cu);
    ctx->pc = 0x3A9E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E34u;
    // 0x3a9e38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A9E34u, 0x3A9E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E3Cu;
label_3a9e3c:
    // 0x3a9e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e40:
    // 0x3a9e40: 0xc0e858c  jal         func_3A1630
label_3a9e44:
    if (ctx->pc == 0x3A9E44u) {
        ctx->pc = 0x3A9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E40u;
        // 0x3a9e44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E48u;
        goto label_3a9e48;
    }
    ctx->pc = 0x3A9E40u;
    SET_GPR_U32(ctx, 31, 0x3A9E48u);
    ctx->pc = 0x3A9E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E40u;
    // 0x3a9e44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3A9E40u, 0x3A9E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E48u;
label_3a9e48:
    // 0x3a9e48: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3a9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3a9e4c:
    // 0x3a9e4c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3a9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3a9e50:
    // 0x3a9e50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a9e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e54:
    // 0x3a9e54: 0xc0e896e  jal         func_3A25B8
label_3a9e58:
    if (ctx->pc == 0x3A9E58u) {
        ctx->pc = 0x3A9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E54u;
        // 0x3a9e58: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E5Cu;
        goto label_3a9e5c;
    }
    ctx->pc = 0x3A9E54u;
    SET_GPR_U32(ctx, 31, 0x3A9E5Cu);
    ctx->pc = 0x3A9E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E54u;
    // 0x3a9e58: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3A9E54u, 0x3A9E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E5Cu;
label_3a9e5c:
    // 0x3a9e5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a9e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e60:
    // 0x3a9e60: 0xc0e862e  jal         func_3A18B8
label_3a9e64:
    if (ctx->pc == 0x3A9E64u) {
        ctx->pc = 0x3A9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E60u;
        // 0x3a9e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E68u;
        goto label_3a9e68;
    }
    ctx->pc = 0x3A9E60u;
    SET_GPR_U32(ctx, 31, 0x3A9E68u);
    ctx->pc = 0x3A9E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E60u;
    // 0x3a9e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3A9E60u, 0x3A9E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E68u;
label_3a9e68:
    // 0x3a9e68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a9e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e6c:
    // 0x3a9e6c: 0xc0e896c  jal         func_3A25B0
label_3a9e70:
    if (ctx->pc == 0x3A9E70u) {
        ctx->pc = 0x3A9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E6Cu;
        // 0x3a9e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E74u;
        goto label_3a9e74;
    }
    ctx->pc = 0x3A9E6Cu;
    SET_GPR_U32(ctx, 31, 0x3A9E74u);
    ctx->pc = 0x3A9E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E6Cu;
    // 0x3a9e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3A9E6Cu, 0x3A9E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E74u;
label_3a9e74:
    // 0x3a9e74: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3a9e74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9e78:
    // 0x3a9e78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a9e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9e7c:
    // 0x3a9e7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a9e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e80:
    // 0x3a9e80: 0xc0e911e  jal         func_3A4478
label_3a9e84:
    if (ctx->pc == 0x3A9E84u) {
        ctx->pc = 0x3A9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E80u;
        // 0x3a9e84: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E88u;
        goto label_3a9e88;
    }
    ctx->pc = 0x3A9E80u;
    SET_GPR_U32(ctx, 31, 0x3A9E88u);
    ctx->pc = 0x3A9E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E80u;
    // 0x3a9e84: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3A9E80u, 0x3A9E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E88u;
label_3a9e88:
    // 0x3a9e88: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a9e88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9e8c:
    // 0x3a9e8c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3a9e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3a9e90:
    // 0x3a9e90: 0x24841730  addiu       $a0, $a0, 0x1730
    ctx->pc = 0x3a9e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
label_3a9e94:
    // 0x3a9e94: 0x7ec20010  sq          $v0, 0x10($s6)
    ctx->pc = 0x3a9e94u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), GPR_VEC(ctx, 2));
label_3a9e98:
    // 0x3a9e98: 0xae950014  sw          $s5, 0x14($s4)
    ctx->pc = 0x3a9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 21));
label_3a9e9c:
    // 0x3a9e9c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3a9e9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3a9ea0:
    // 0x3a9ea0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3a9ea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9ea4:
    // 0x3a9ea4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a9ea4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a9ea8:
    // 0x3a9ea8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a9ea8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a9eac:
    // 0x3a9eac: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3a9eacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a9eb0:
    // 0x3a9eb0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3a9eb0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a9eb4:
    // 0x3a9eb4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3a9eb4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a9eb8:
    // 0x3a9eb8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a9eb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a9ebc:
    // 0x3a9ebc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3a9ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9ec0:
    // 0x3a9ec0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3a9ec0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a9ec4:
    // 0x3a9ec4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a9ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a9ec8:
    // 0x3a9ec8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3a9ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a9ecc:
    // 0x3a9ecc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3a9eccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a9ed0:
    // 0x3a9ed0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3a9ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9ed4:
    // 0x3a9ed4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3a9ed4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a9ed8:
    // 0x3a9ed8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3a9ed8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a9edc:
    // 0x3a9edc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3a9edcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9ee0:
    // 0x3a9ee0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3a9ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9ee4:
    // 0x3a9ee4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3a9ee4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3a9ee8:
    // 0x3a9ee8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3a9ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3a9eec:
    // 0x3a9eec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3a9eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3a9ef0:
    // 0x3a9ef0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a9ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3a9ef4:
    // 0x3a9ef4: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x3a9ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_3a9ef8:
    // 0x3a9ef8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3a9ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3a9efc:
    // 0x3a9efc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3a9efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a9f00:
    // 0x3a9f00: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3a9f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a9f04:
    // 0x3a9f04: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3a9f04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a9f08:
    // 0x3a9f08: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3a9f08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a9f0c:
    // 0x3a9f0c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3a9f0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a9f10:
    // 0x3a9f10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a9f10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a9f14:
    // 0x3a9f14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a9f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a9f18:
    // 0x3a9f18: 0x3e00008  jr          $ra
label_3a9f1c:
    if (ctx->pc == 0x3A9F1Cu) {
        ctx->pc = 0x3A9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F18u;
        // 0x3a9f1c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9F20u;
        goto label_fallthrough_0x3a9f18;
    }
    ctx->pc = 0x3A9F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F18u;
        // 0x3a9f1c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a9f18:
    ctx->pc = 0x3A9F20u;
}
