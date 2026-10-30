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

// Function: sub_002E8DA8
// Address: 0x2e8da8 - 0x2e8ee0
void sub_002E8DA8_0x2e8da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8DA8_0x2e8da8");
#endif

    switch (ctx->pc) {
        case 0x2e8da8u: goto label_2e8da8;
        case 0x2e8dacu: goto label_2e8dac;
        case 0x2e8db0u: goto label_2e8db0;
        case 0x2e8db4u: goto label_2e8db4;
        case 0x2e8db8u: goto label_2e8db8;
        case 0x2e8dbcu: goto label_2e8dbc;
        case 0x2e8dc0u: goto label_2e8dc0;
        case 0x2e8dc4u: goto label_2e8dc4;
        case 0x2e8dc8u: goto label_2e8dc8;
        case 0x2e8dccu: goto label_2e8dcc;
        case 0x2e8dd0u: goto label_2e8dd0;
        case 0x2e8dd4u: goto label_2e8dd4;
        case 0x2e8dd8u: goto label_2e8dd8;
        case 0x2e8ddcu: goto label_2e8ddc;
        case 0x2e8de0u: goto label_2e8de0;
        case 0x2e8de4u: goto label_2e8de4;
        case 0x2e8de8u: goto label_2e8de8;
        case 0x2e8decu: goto label_2e8dec;
        case 0x2e8df0u: goto label_2e8df0;
        case 0x2e8df4u: goto label_2e8df4;
        case 0x2e8df8u: goto label_2e8df8;
        case 0x2e8dfcu: goto label_2e8dfc;
        case 0x2e8e00u: goto label_2e8e00;
        case 0x2e8e04u: goto label_2e8e04;
        case 0x2e8e08u: goto label_2e8e08;
        case 0x2e8e0cu: goto label_2e8e0c;
        case 0x2e8e10u: goto label_2e8e10;
        case 0x2e8e14u: goto label_2e8e14;
        case 0x2e8e18u: goto label_2e8e18;
        case 0x2e8e1cu: goto label_2e8e1c;
        case 0x2e8e20u: goto label_2e8e20;
        case 0x2e8e24u: goto label_2e8e24;
        case 0x2e8e28u: goto label_2e8e28;
        case 0x2e8e2cu: goto label_2e8e2c;
        case 0x2e8e30u: goto label_2e8e30;
        case 0x2e8e34u: goto label_2e8e34;
        case 0x2e8e38u: goto label_2e8e38;
        case 0x2e8e3cu: goto label_2e8e3c;
        case 0x2e8e40u: goto label_2e8e40;
        case 0x2e8e44u: goto label_2e8e44;
        case 0x2e8e48u: goto label_2e8e48;
        case 0x2e8e4cu: goto label_2e8e4c;
        case 0x2e8e50u: goto label_2e8e50;
        case 0x2e8e54u: goto label_2e8e54;
        case 0x2e8e58u: goto label_2e8e58;
        case 0x2e8e5cu: goto label_2e8e5c;
        case 0x2e8e60u: goto label_2e8e60;
        case 0x2e8e64u: goto label_2e8e64;
        case 0x2e8e68u: goto label_2e8e68;
        case 0x2e8e6cu: goto label_2e8e6c;
        case 0x2e8e70u: goto label_2e8e70;
        case 0x2e8e74u: goto label_2e8e74;
        case 0x2e8e78u: goto label_2e8e78;
        case 0x2e8e7cu: goto label_2e8e7c;
        case 0x2e8e80u: goto label_2e8e80;
        case 0x2e8e84u: goto label_2e8e84;
        case 0x2e8e88u: goto label_2e8e88;
        case 0x2e8e8cu: goto label_2e8e8c;
        case 0x2e8e90u: goto label_2e8e90;
        case 0x2e8e94u: goto label_2e8e94;
        case 0x2e8e98u: goto label_2e8e98;
        case 0x2e8e9cu: goto label_2e8e9c;
        case 0x2e8ea0u: goto label_2e8ea0;
        case 0x2e8ea4u: goto label_2e8ea4;
        case 0x2e8ea8u: goto label_2e8ea8;
        case 0x2e8eacu: goto label_2e8eac;
        case 0x2e8eb0u: goto label_2e8eb0;
        case 0x2e8eb4u: goto label_2e8eb4;
        case 0x2e8eb8u: goto label_2e8eb8;
        case 0x2e8ebcu: goto label_2e8ebc;
        case 0x2e8ec0u: goto label_2e8ec0;
        case 0x2e8ec4u: goto label_2e8ec4;
        case 0x2e8ec8u: goto label_2e8ec8;
        case 0x2e8eccu: goto label_2e8ecc;
        case 0x2e8ed0u: goto label_2e8ed0;
        case 0x2e8ed4u: goto label_2e8ed4;
        case 0x2e8ed8u: goto label_2e8ed8;
        case 0x2e8edcu: goto label_2e8edc;
        default: break;
    }

    ctx->pc = 0x2e8da8u;

label_2e8da8:
    // 0x2e8da8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e8da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2e8dac:
    // 0x2e8dac: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e8dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2e8db0:
    // 0x2e8db0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e8db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2e8db4:
    // 0x2e8db4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8db8:
    // 0x2e8db8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2e8db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2e8dbc:
    // 0x2e8dbc: 0x26540024  addiu       $s4, $s2, 0x24
    ctx->pc = 0x2e8dbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_2e8dc0:
    // 0x2e8dc0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2e8dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2e8dc4:
    // 0x2e8dc4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2e8dc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8dc8:
    // 0x2e8dc8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2e8dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2e8dcc:
    // 0x2e8dcc: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2e8dccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e8dd0:
    // 0x2e8dd0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2e8dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2e8dd4:
    // 0x2e8dd4: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x2e8dd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e8dd8:
    // 0x2e8dd8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e8dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2e8ddc:
    // 0x2e8ddc: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x2e8ddcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_2e8de0:
    // 0x2e8de0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e8de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2e8de4:
    // 0x2e8de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e8de8:
    // 0x2e8de8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e8de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2e8dec:
    // 0x2e8dec: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e8df0:
    if (ctx->pc == 0x2E8DF0u) {
        ctx->pc = 0x2E8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DECu;
        // 0x2e8df0: 0x92510042  lbu         $s1, 0x42($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8DF4u;
        goto label_2e8df4;
    }
    ctx->pc = 0x2E8DECu;
    {
        const bool branch_taken_0x2e8dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DECu;
        // 0x2e8df0: 0x92510042  lbu         $s1, 0x42($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8dec) {
            ctx->pc = 0x2E8E00u;
            goto label_2e8e00;
        }
    }
    ctx->pc = 0x2E8DF4u;
label_2e8df4:
    // 0x2e8df4: 0x0  nop
    ctx->pc = 0x2e8df4u;
    // NOP
label_2e8df8:
    // 0x2e8df8: 0x56750023  bnel        $s3, $s5, . + 4 + (0x23 << 2)
label_2e8dfc:
    if (ctx->pc == 0x2E8DFCu) {
        ctx->pc = 0x2E8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DF8u;
        // 0x2e8dfc: 0xa2510042  sb          $s1, 0x42($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 66), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E00u;
        goto label_2e8e00;
    }
    ctx->pc = 0x2E8DF8u;
    {
        const bool branch_taken_0x2e8df8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        if (branch_taken_0x2e8df8) {
            ctx->pc = 0x2E8DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8DF8u;
            // 0x2e8dfc: 0xa2510042  sb          $s1, 0x42($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 66), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8E88u;
            goto label_2e8e88;
        }
    }
    ctx->pc = 0x2E8E00u;
label_2e8e00:
    // 0x2e8e00: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2e8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e8e04:
    // 0x2e8e04: 0x30710007  andi        $s1, $v1, 0x7
    ctx->pc = 0x2e8e04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_2e8e08:
    // 0x2e8e08: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2e8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2e8e0c:
    // 0x2e8e0c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e8e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e8e10:
    // 0x2e8e10: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2e8e10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8e14:
    // 0x2e8e14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e8e18:
    // 0x2e8e18: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
label_2e8e1c:
    if (ctx->pc == 0x2E8E1Cu) {
        ctx->pc = 0x2E8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E18u;
        // 0x2e8e1c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E20u;
        goto label_2e8e20;
    }
    ctx->pc = 0x2E8E18u;
    {
        const bool branch_taken_0x2e8e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E18u;
        // 0x2e8e1c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e18) {
            ctx->pc = 0x2E8E78u;
            goto label_2e8e78;
        }
    }
    ctx->pc = 0x2E8E20u;
label_2e8e20:
    // 0x2e8e20: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x2e8e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_2e8e24:
    // 0x2e8e24: 0xc0e44cc  jal         func_391330
label_2e8e28:
    if (ctx->pc == 0x2E8E28u) {
        ctx->pc = 0x2E8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E24u;
        // 0x2e8e28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E2Cu;
        goto label_2e8e2c;
    }
    ctx->pc = 0x2E8E24u;
    SET_GPR_U32(ctx, 31, 0x2E8E2Cu);
    ctx->pc = 0x2E8E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E24u;
    // 0x2e8e28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2E8E24u, 0x2E8E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E2Cu;
label_2e8e2c:
    // 0x2e8e2c: 0x8043005a  lb          $v1, 0x5A($v0)
    ctx->pc = 0x2e8e2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
label_2e8e30:
    // 0x2e8e30: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2e8e30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2e8e34:
    // 0x2e8e34: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_2e8e38:
    if (ctx->pc == 0x2E8E38u) {
        ctx->pc = 0x2E8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E34u;
        // 0x2e8e38: 0x92420042  lbu         $v0, 0x42($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E3Cu;
        goto label_2e8e3c;
    }
    ctx->pc = 0x2E8E34u;
    {
        const bool branch_taken_0x2e8e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8e34) {
            ctx->pc = 0x2E8E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8E34u;
            // 0x2e8e38: 0x92420042  lbu         $v0, 0x42($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8E7Cu;
            goto label_2e8e7c;
        }
    }
    ctx->pc = 0x2E8E3Cu;
label_2e8e3c:
    // 0x2e8e3c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8e40:
    // 0x2e8e40: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2e8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2e8e44:
    // 0x2e8e44: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2e8e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2e8e48:
    // 0x2e8e48: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2e8e4c:
    if (ctx->pc == 0x2E8E4Cu) {
        ctx->pc = 0x2E8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E48u;
        // 0x2e8e4c: 0x92420042  lbu         $v0, 0x42($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E50u;
        goto label_2e8e50;
    }
    ctx->pc = 0x2E8E48u;
    {
        const bool branch_taken_0x2e8e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8e48) {
            ctx->pc = 0x2E8E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8E48u;
            // 0x2e8e4c: 0x92420042  lbu         $v0, 0x42($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8E7Cu;
            goto label_2e8e7c;
        }
    }
    ctx->pc = 0x2E8E50u;
label_2e8e50:
    // 0x2e8e50: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2e8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2e8e54:
    // 0x2e8e54: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2e8e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2e8e58:
    // 0x2e8e58: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2e8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2e8e5c:
    // 0x2e8e5c: 0x40f809  jalr        $v0
label_2e8e60:
    if (ctx->pc == 0x2E8E60u) {
        ctx->pc = 0x2E8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E5Cu;
        // 0x2e8e60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E64u;
        goto label_2e8e64;
    }
    ctx->pc = 0x2E8E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E8E64u);
        ctx->pc = 0x2E8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E5Cu;
        // 0x2e8e60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8E5Cu, 0x2E8E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8E64u;
label_2e8e64:
    // 0x2e8e64: 0x54570005  bnel        $v0, $s7, . + 4 + (0x5 << 2)
label_2e8e68:
    if (ctx->pc == 0x2E8E68u) {
        ctx->pc = 0x2E8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E64u;
        // 0x2e8e68: 0x92420042  lbu         $v0, 0x42($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E6Cu;
        goto label_2e8e6c;
    }
    ctx->pc = 0x2E8E64u;
    {
        const bool branch_taken_0x2e8e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x2e8e64) {
            ctx->pc = 0x2E8E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8E64u;
            // 0x2e8e68: 0x92420042  lbu         $v0, 0x42($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8E7Cu;
            goto label_2e8e7c;
        }
    }
    ctx->pc = 0x2E8E6Cu;
label_2e8e6c:
    // 0x2e8e6c: 0xc0c29a0  jal         func_30A680
label_2e8e70:
    if (ctx->pc == 0x2E8E70u) {
        ctx->pc = 0x2E8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E6Cu;
        // 0x2e8e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E74u;
        goto label_2e8e74;
    }
    ctx->pc = 0x2E8E6Cu;
    SET_GPR_U32(ctx, 31, 0x2E8E74u);
    ctx->pc = 0x2E8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E6Cu;
    // 0x2e8e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A680u, 0x2E8E6Cu, 0x2E8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E74u;
label_2e8e74:
    // 0x2e8e74: 0x2a2980a  movz        $s3, $s5, $v0
    ctx->pc = 0x2e8e74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 21));
label_2e8e78:
    // 0x2e8e78: 0x92420042  lbu         $v0, 0x42($s2)
    ctx->pc = 0x2e8e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
label_2e8e7c:
    // 0x2e8e7c: 0x1622ffde  bne         $s1, $v0, . + 4 + (-0x22 << 2)
label_2e8e80:
    if (ctx->pc == 0x2E8E80u) {
        ctx->pc = 0x2E8E84u;
        goto label_2e8e84;
    }
    ctx->pc = 0x2E8E7Cu;
    {
        const bool branch_taken_0x2e8e7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8e7c) {
            ctx->pc = 0x2E8DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8df8;
        }
    }
    ctx->pc = 0x2E8E84u;
label_2e8e84:
    // 0x2e8e84: 0xa2510042  sb          $s1, 0x42($s2)
    ctx->pc = 0x2e8e84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 66), (uint8_t)GPR_U32(ctx, 17));
label_2e8e88:
    // 0x2e8e88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e8e8c:
    // 0x2e8e8c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2e8e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2e8e90:
    // 0x2e8e90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2e8e94:
    // 0x2e8e94: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2e8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2e8e98:
    // 0x2e8e98: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2e8e98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8e9c:
    // 0x2e8e9c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_2e8ea0:
    if (ctx->pc == 0x2E8EA0u) {
        ctx->pc = 0x2E8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E9Cu;
        // 0x2e8ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EA4u;
        goto label_2e8ea4;
    }
    ctx->pc = 0x2E8E9Cu;
    {
        const bool branch_taken_0x2e8e9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E9Cu;
        // 0x2e8ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e9c) {
            ctx->pc = 0x2E8EB0u;
            goto label_2e8eb0;
        }
    }
    ctx->pc = 0x2E8EA4u;
label_2e8ea4:
    // 0x2e8ea4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e8ea8:
    // 0x2e8ea8: 0xc0e4546  jal         func_391518
label_2e8eac:
    if (ctx->pc == 0x2E8EACu) {
        ctx->pc = 0x2E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EA8u;
        // 0x2e8eac: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EB0u;
        goto label_2e8eb0;
    }
    ctx->pc = 0x2E8EA8u;
    SET_GPR_U32(ctx, 31, 0x2E8EB0u);
    ctx->pc = 0x2E8EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EA8u;
    // 0x2e8eac: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391518u, 0x2E8EA8u, 0x2E8EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EB0u;
label_2e8eb0:
    // 0x2e8eb0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e8eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e8eb4:
    // 0x2e8eb4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e8eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e8eb8:
    // 0x2e8eb8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e8eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e8ebc:
    // 0x2e8ebc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e8ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e8ec0:
    // 0x2e8ec0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e8ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e8ec4:
    // 0x2e8ec4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2e8ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e8ec8:
    // 0x2e8ec8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2e8ec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e8ecc:
    // 0x2e8ecc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2e8eccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8ed0:
    // 0x2e8ed0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2e8ed0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8ed4:
    // 0x2e8ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8ed8:
    // 0x2e8ed8: 0x3e00008  jr          $ra
label_2e8edc:
    if (ctx->pc == 0x2E8EDCu) {
        ctx->pc = 0x2E8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8ED8u;
        // 0x2e8edc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EE0u;
        goto label_fallthrough_0x2e8ed8;
    }
    ctx->pc = 0x2E8ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8ED8u;
        // 0x2e8edc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e8ed8:
    ctx->pc = 0x2E8EE0u;
}
