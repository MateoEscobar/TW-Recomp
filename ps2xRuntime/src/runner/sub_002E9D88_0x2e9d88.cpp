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

// Function: sub_002E9D88
// Address: 0x2e9d88 - 0x2e9e88
void sub_002E9D88_0x2e9d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9D88_0x2e9d88");
#endif

    switch (ctx->pc) {
        case 0x2e9d88u: goto label_2e9d88;
        case 0x2e9d8cu: goto label_2e9d8c;
        case 0x2e9d90u: goto label_2e9d90;
        case 0x2e9d94u: goto label_2e9d94;
        case 0x2e9d98u: goto label_2e9d98;
        case 0x2e9d9cu: goto label_2e9d9c;
        case 0x2e9da0u: goto label_2e9da0;
        case 0x2e9da4u: goto label_2e9da4;
        case 0x2e9da8u: goto label_2e9da8;
        case 0x2e9dacu: goto label_2e9dac;
        case 0x2e9db0u: goto label_2e9db0;
        case 0x2e9db4u: goto label_2e9db4;
        case 0x2e9db8u: goto label_2e9db8;
        case 0x2e9dbcu: goto label_2e9dbc;
        case 0x2e9dc0u: goto label_2e9dc0;
        case 0x2e9dc4u: goto label_2e9dc4;
        case 0x2e9dc8u: goto label_2e9dc8;
        case 0x2e9dccu: goto label_2e9dcc;
        case 0x2e9dd0u: goto label_2e9dd0;
        case 0x2e9dd4u: goto label_2e9dd4;
        case 0x2e9dd8u: goto label_2e9dd8;
        case 0x2e9ddcu: goto label_2e9ddc;
        case 0x2e9de0u: goto label_2e9de0;
        case 0x2e9de4u: goto label_2e9de4;
        case 0x2e9de8u: goto label_2e9de8;
        case 0x2e9decu: goto label_2e9dec;
        case 0x2e9df0u: goto label_2e9df0;
        case 0x2e9df4u: goto label_2e9df4;
        case 0x2e9df8u: goto label_2e9df8;
        case 0x2e9dfcu: goto label_2e9dfc;
        case 0x2e9e00u: goto label_2e9e00;
        case 0x2e9e04u: goto label_2e9e04;
        case 0x2e9e08u: goto label_2e9e08;
        case 0x2e9e0cu: goto label_2e9e0c;
        case 0x2e9e10u: goto label_2e9e10;
        case 0x2e9e14u: goto label_2e9e14;
        case 0x2e9e18u: goto label_2e9e18;
        case 0x2e9e1cu: goto label_2e9e1c;
        case 0x2e9e20u: goto label_2e9e20;
        case 0x2e9e24u: goto label_2e9e24;
        case 0x2e9e28u: goto label_2e9e28;
        case 0x2e9e2cu: goto label_2e9e2c;
        case 0x2e9e30u: goto label_2e9e30;
        case 0x2e9e34u: goto label_2e9e34;
        case 0x2e9e38u: goto label_2e9e38;
        case 0x2e9e3cu: goto label_2e9e3c;
        case 0x2e9e40u: goto label_2e9e40;
        case 0x2e9e44u: goto label_2e9e44;
        case 0x2e9e48u: goto label_2e9e48;
        case 0x2e9e4cu: goto label_2e9e4c;
        case 0x2e9e50u: goto label_2e9e50;
        case 0x2e9e54u: goto label_2e9e54;
        case 0x2e9e58u: goto label_2e9e58;
        case 0x2e9e5cu: goto label_2e9e5c;
        case 0x2e9e60u: goto label_2e9e60;
        case 0x2e9e64u: goto label_2e9e64;
        case 0x2e9e68u: goto label_2e9e68;
        case 0x2e9e6cu: goto label_2e9e6c;
        case 0x2e9e70u: goto label_2e9e70;
        case 0x2e9e74u: goto label_2e9e74;
        case 0x2e9e78u: goto label_2e9e78;
        case 0x2e9e7cu: goto label_2e9e7c;
        case 0x2e9e80u: goto label_2e9e80;
        case 0x2e9e84u: goto label_2e9e84;
        default: break;
    }

    ctx->pc = 0x2e9d88u;

label_2e9d88:
    // 0x2e9d88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e9d8c:
    // 0x2e9d8c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2e9d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2e9d90:
    // 0x2e9d90: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e9d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2e9d94:
    // 0x2e9d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e9d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e9d98:
    // 0x2e9d98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e9d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2e9d9c:
    // 0x2e9d9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9da0:
    // 0x2e9da0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e9da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2e9da4:
    // 0x2e9da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e9da8:
    // 0x2e9da8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e9da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e9dac:
    // 0x2e9dac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e9dacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9db0:
    // 0x2e9db0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e9db4:
    // 0x2e9db4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9db8:
    // 0x2e9db8: 0xa0600265  sb          $zero, 0x265($v1)
    ctx->pc = 0x2e9db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 0));
label_2e9dbc:
    // 0x2e9dbc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2e9dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e9dc0:
    // 0x2e9dc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9dc4:
    // 0x2e9dc4: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2e9dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
label_2e9dc8:
    // 0x2e9dc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e9dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9dcc:
    // 0x2e9dcc: 0xc0a22c6  jal         func_288B18
label_2e9dd0:
    if (ctx->pc == 0x2E9DD0u) {
        ctx->pc = 0x2E9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DCCu;
        // 0x2e9dd0: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9DD4u;
        goto label_2e9dd4;
    }
    ctx->pc = 0x2E9DCCu;
    SET_GPR_U32(ctx, 31, 0x2E9DD4u);
    ctx->pc = 0x2E9DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DCCu;
    // 0x2e9dd0: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2E9DCCu, 0x2E9DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DD4u;
label_2e9dd4:
    // 0x2e9dd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e9dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9dd8:
    // 0x2e9dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9ddc:
    // 0x2e9ddc: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x2e9ddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
label_2e9de0:
    // 0x2e9de0: 0xc088ade  jal         func_222B78
label_2e9de4:
    if (ctx->pc == 0x2E9DE4u) {
        ctx->pc = 0x2E9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DE0u;
        // 0x2e9de4: 0xa202002f  sb          $v0, 0x2F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9DE8u;
        goto label_2e9de8;
    }
    ctx->pc = 0x2E9DE0u;
    SET_GPR_U32(ctx, 31, 0x2E9DE8u);
    ctx->pc = 0x2E9DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DE0u;
    // 0x2e9de4: 0xa202002f  sb          $v0, 0x2F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x2E9DE0u, 0x2E9DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DE8u;
label_2e9de8:
    // 0x2e9de8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2e9de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e9dec:
    // 0x2e9dec: 0x92020025  lbu         $v0, 0x25($s0)
    ctx->pc = 0x2e9decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
label_2e9df0:
    // 0x2e9df0: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
label_2e9df4:
    if (ctx->pc == 0x2E9DF4u) {
        ctx->pc = 0x2E9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DF0u;
        // 0x2e9df4: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9DF8u;
        goto label_2e9df8;
    }
    ctx->pc = 0x2E9DF0u;
    {
        const bool branch_taken_0x2e9df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DF0u;
        // 0x2e9df4: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9df0) {
            ctx->pc = 0x2E9E08u;
            goto label_2e9e08;
        }
    }
    ctx->pc = 0x2E9DF8u;
label_2e9df8:
    // 0x2e9df8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e9df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9dfc:
    // 0x2e9dfc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e9dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e9e00:
    // 0x2e9e00: 0xc0a447a  jal         func_2911E8
label_2e9e04:
    if (ctx->pc == 0x2E9E04u) {
        ctx->pc = 0x2E9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E00u;
        // 0x2e9e04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9E08u;
        goto label_2e9e08;
    }
    ctx->pc = 0x2E9E00u;
    SET_GPR_U32(ctx, 31, 0x2E9E08u);
    ctx->pc = 0x2E9E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E00u;
    // 0x2e9e04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E8u, 0x2E9E00u, 0x2E9E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9E08u;
label_2e9e08:
    // 0x2e9e08: 0xc0baac2  jal         func_2EAB08
label_2e9e0c:
    if (ctx->pc == 0x2E9E0Cu) {
        ctx->pc = 0x2E9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E08u;
        // 0x2e9e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9E10u;
        goto label_2e9e10;
    }
    ctx->pc = 0x2E9E08u;
    SET_GPR_U32(ctx, 31, 0x2E9E10u);
    ctx->pc = 0x2E9E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E08u;
    // 0x2e9e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB08u, 0x2E9E08u, 0x2E9E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9E10u;
label_2e9e10:
    // 0x2e9e10: 0x54520018  bnel        $v0, $s2, . + 4 + (0x18 << 2)
label_2e9e14:
    if (ctx->pc == 0x2E9E14u) {
        ctx->pc = 0x2E9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E10u;
        // 0x2e9e14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9E18u;
        goto label_2e9e18;
    }
    ctx->pc = 0x2E9E10u;
    {
        const bool branch_taken_0x2e9e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e9e10) {
            ctx->pc = 0x2E9E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9E10u;
            // 0x2e9e14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9E74u;
            goto label_2e9e74;
        }
    }
    ctx->pc = 0x2E9E18u;
label_2e9e18:
    // 0x2e9e18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9e1c:
    // 0x2e9e1c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2e9e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_2e9e20:
    // 0x2e9e20: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2e9e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2e9e24:
    // 0x2e9e24: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x2e9e24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2e9e28:
    // 0x2e9e28: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2e9e28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
label_2e9e2c:
    // 0x2e9e2c: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2e9e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_2e9e30:
    // 0x2e9e30: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x2e9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2e9e34:
    // 0x2e9e34: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2e9e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2e9e38:
    // 0x2e9e38: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2e9e38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2e9e3c:
    // 0x2e9e3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9e40:
    // 0x2e9e40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e9e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e9e44:
    // 0x2e9e44: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2e9e44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2e9e48:
    // 0x2e9e48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9e4c:
    // 0x2e9e4c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2e9e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2e9e50:
    // 0x2e9e50: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2e9e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2e9e54:
    // 0x2e9e54: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2e9e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_2e9e58:
    // 0x2e9e58: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e9e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2e9e5c:
    // 0x2e9e5c: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2e9e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2e9e60:
    // 0x2e9e60: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2e9e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2e9e64:
    // 0x2e9e64: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2e9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2e9e68:
    // 0x2e9e68: 0x40f809  jalr        $v0
label_2e9e6c:
    if (ctx->pc == 0x2E9E6Cu) {
        ctx->pc = 0x2E9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E68u;
        // 0x2e9e6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9E70u;
        goto label_2e9e70;
    }
    ctx->pc = 0x2E9E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E9E70u);
        ctx->pc = 0x2E9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E68u;
        // 0x2e9e6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9E68u, 0x2E9E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E9E70u;
label_2e9e70:
    // 0x2e9e70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e9e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e9e74:
    // 0x2e9e74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e9e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e9e78:
    // 0x2e9e78: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e9e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e9e7c:
    // 0x2e9e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9e80:
    // 0x2e9e80: 0x3e00008  jr          $ra
label_2e9e84:
    if (ctx->pc == 0x2E9E84u) {
        ctx->pc = 0x2E9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E80u;
        // 0x2e9e84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9E88u;
        goto label_fallthrough_0x2e9e80;
    }
    ctx->pc = 0x2E9E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E80u;
        // 0x2e9e84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e9e80:
    ctx->pc = 0x2E9E88u;
}
