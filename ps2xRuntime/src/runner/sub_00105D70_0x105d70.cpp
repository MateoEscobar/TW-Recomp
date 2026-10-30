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

// Function: sub_00105D70
// Address: 0x105d70 - 0x105e90
void sub_00105D70_0x105d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105D70_0x105d70");
#endif

    switch (ctx->pc) {
        case 0x105d70u: goto label_105d70;
        case 0x105d74u: goto label_105d74;
        case 0x105d78u: goto label_105d78;
        case 0x105d7cu: goto label_105d7c;
        case 0x105d80u: goto label_105d80;
        case 0x105d84u: goto label_105d84;
        case 0x105d88u: goto label_105d88;
        case 0x105d8cu: goto label_105d8c;
        case 0x105d90u: goto label_105d90;
        case 0x105d94u: goto label_105d94;
        case 0x105d98u: goto label_105d98;
        case 0x105d9cu: goto label_105d9c;
        case 0x105da0u: goto label_105da0;
        case 0x105da4u: goto label_105da4;
        case 0x105da8u: goto label_105da8;
        case 0x105dacu: goto label_105dac;
        case 0x105db0u: goto label_105db0;
        case 0x105db4u: goto label_105db4;
        case 0x105db8u: goto label_105db8;
        case 0x105dbcu: goto label_105dbc;
        case 0x105dc0u: goto label_105dc0;
        case 0x105dc4u: goto label_105dc4;
        case 0x105dc8u: goto label_105dc8;
        case 0x105dccu: goto label_105dcc;
        case 0x105dd0u: goto label_105dd0;
        case 0x105dd4u: goto label_105dd4;
        case 0x105dd8u: goto label_105dd8;
        case 0x105ddcu: goto label_105ddc;
        case 0x105de0u: goto label_105de0;
        case 0x105de4u: goto label_105de4;
        case 0x105de8u: goto label_105de8;
        case 0x105decu: goto label_105dec;
        case 0x105df0u: goto label_105df0;
        case 0x105df4u: goto label_105df4;
        case 0x105df8u: goto label_105df8;
        case 0x105dfcu: goto label_105dfc;
        case 0x105e00u: goto label_105e00;
        case 0x105e04u: goto label_105e04;
        case 0x105e08u: goto label_105e08;
        case 0x105e0cu: goto label_105e0c;
        case 0x105e10u: goto label_105e10;
        case 0x105e14u: goto label_105e14;
        case 0x105e18u: goto label_105e18;
        case 0x105e1cu: goto label_105e1c;
        case 0x105e20u: goto label_105e20;
        case 0x105e24u: goto label_105e24;
        case 0x105e28u: goto label_105e28;
        case 0x105e2cu: goto label_105e2c;
        case 0x105e30u: goto label_105e30;
        case 0x105e34u: goto label_105e34;
        case 0x105e38u: goto label_105e38;
        case 0x105e3cu: goto label_105e3c;
        case 0x105e40u: goto label_105e40;
        case 0x105e44u: goto label_105e44;
        case 0x105e48u: goto label_105e48;
        case 0x105e4cu: goto label_105e4c;
        case 0x105e50u: goto label_105e50;
        case 0x105e54u: goto label_105e54;
        case 0x105e58u: goto label_105e58;
        case 0x105e5cu: goto label_105e5c;
        case 0x105e60u: goto label_105e60;
        case 0x105e64u: goto label_105e64;
        case 0x105e68u: goto label_105e68;
        case 0x105e6cu: goto label_105e6c;
        case 0x105e70u: goto label_105e70;
        case 0x105e74u: goto label_105e74;
        case 0x105e78u: goto label_105e78;
        case 0x105e7cu: goto label_105e7c;
        case 0x105e80u: goto label_105e80;
        case 0x105e84u: goto label_105e84;
        case 0x105e88u: goto label_105e88;
        case 0x105e8cu: goto label_105e8c;
        default: break;
    }

    ctx->pc = 0x105d70u;

label_105d70:
    // 0x105d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x105d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_105d74:
    // 0x105d74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x105d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_105d78:
    // 0x105d78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x105d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_105d7c:
    // 0x105d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105d80:
    // 0x105d80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_105d84:
    // 0x105d84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_105d88:
    // 0x105d88: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x105d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_105d8c:
    // 0x105d8c: 0xc0e409a  jal         func_390268
label_105d90:
    if (ctx->pc == 0x105D90u) {
        ctx->pc = 0x105D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D8Cu;
        // 0x105d90: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105D94u;
        goto label_105d94;
    }
    ctx->pc = 0x105D8Cu;
    SET_GPR_U32(ctx, 31, 0x105D94u);
    ctx->pc = 0x105D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D8Cu;
    // 0x105d90: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x105D8Cu, 0x105D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D94u;
label_105d94:
    // 0x105d94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x105d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105d98:
    // 0x105d98: 0x52200029  beql        $s1, $zero, . + 4 + (0x29 << 2)
label_105d9c:
    if (ctx->pc == 0x105D9Cu) {
        ctx->pc = 0x105D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D98u;
        // 0x105d9c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105DA0u;
        goto label_105da0;
    }
    ctx->pc = 0x105D98u;
    {
        const bool branch_taken_0x105d98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x105d98) {
            ctx->pc = 0x105D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105D98u;
            // 0x105d9c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E40u;
            goto label_105e40;
        }
    }
    ctx->pc = 0x105DA0u;
label_105da0:
    // 0x105da0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x105da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_105da4:
    // 0x105da4: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x105da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
label_105da8:
    // 0x105da8: 0xc089988  jal         func_226620
label_105dac:
    if (ctx->pc == 0x105DACu) {
        ctx->pc = 0x105DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DA8u;
        // 0x105dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105DB0u;
        goto label_105db0;
    }
    ctx->pc = 0x105DA8u;
    SET_GPR_U32(ctx, 31, 0x105DB0u);
    ctx->pc = 0x105DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105DA8u;
    // 0x105dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x105DA8u, 0x105DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105DB0u;
label_105db0:
    // 0x105db0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x105db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_105db4:
    // 0x105db4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_105db8:
    if (ctx->pc == 0x105DB8u) {
        ctx->pc = 0x105DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DB4u;
        // 0x105db8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105DBCu;
        goto label_105dbc;
    }
    ctx->pc = 0x105DB4u;
    {
        const bool branch_taken_0x105db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105db4) {
            ctx->pc = 0x105DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105DB4u;
            // 0x105db8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105DCCu;
            goto label_105dcc;
        }
    }
    ctx->pc = 0x105DBCu;
label_105dbc:
    // 0x105dbc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x105dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_105dc0:
    // 0x105dc0: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_105dc4:
    if (ctx->pc == 0x105DC4u) {
        ctx->pc = 0x105DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DC0u;
        // 0x105dc4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105DC8u;
        goto label_105dc8;
    }
    ctx->pc = 0x105DC0u;
    {
        const bool branch_taken_0x105dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105dc0) {
            ctx->pc = 0x105DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105DC0u;
            // 0x105dc4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E40u;
            goto label_105e40;
        }
    }
    ctx->pc = 0x105DC8u;
label_105dc8:
    // 0x105dc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_105dcc:
    // 0x105dcc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x105dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_105dd0:
    // 0x105dd0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x105dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_105dd4:
    // 0x105dd4: 0x60f809  jalr        $v1
label_105dd8:
    if (ctx->pc == 0x105DD8u) {
        ctx->pc = 0x105DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DD4u;
        // 0x105dd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105DDCu;
        goto label_105ddc;
    }
    ctx->pc = 0x105DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105DDCu);
        ctx->pc = 0x105DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DD4u;
        // 0x105dd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105DD4u, 0x105DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105DDCu;
label_105ddc:
    // 0x105ddc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x105ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_105de0:
    // 0x105de0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_105de4:
    if (ctx->pc == 0x105DE4u) {
        ctx->pc = 0x105DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DE0u;
        // 0x105de4: 0x31827  nor         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105DE8u;
        goto label_105de8;
    }
    ctx->pc = 0x105DE0u;
    {
        const bool branch_taken_0x105de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DE0u;
        // 0x105de4: 0x31827  nor         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105de0) {
            ctx->pc = 0x105E3Cu;
            goto label_105e3c;
        }
    }
    ctx->pc = 0x105DE8u;
label_105de8:
    // 0x105de8: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x105de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_105dec:
    // 0x105dec: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x105decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_105df0:
    // 0x105df0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x105df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_105df4:
    // 0x105df4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_105df8:
    // 0x105df8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x105df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_105dfc:
    // 0x105dfc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x105dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_105e00:
    // 0x105e00: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x105e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_105e04:
    // 0x105e04: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_105e08:
    if (ctx->pc == 0x105E08u) {
        ctx->pc = 0x105E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E04u;
        // 0x105e08: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105E0Cu;
        goto label_105e0c;
    }
    ctx->pc = 0x105E04u;
    {
        const bool branch_taken_0x105e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x105e04) {
            ctx->pc = 0x105E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105E04u;
            // 0x105e08: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E40u;
            goto label_105e40;
        }
    }
    ctx->pc = 0x105E0Cu;
label_105e0c:
    // 0x105e0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x105e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_105e10:
    // 0x105e10: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x105e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_105e14:
    // 0x105e14: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x105e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_105e18:
    // 0x105e18: 0x40f809  jalr        $v0
label_105e1c:
    if (ctx->pc == 0x105E1Cu) {
        ctx->pc = 0x105E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E18u;
        // 0x105e1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105E20u;
        goto label_105e20;
    }
    ctx->pc = 0x105E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105E20u);
        ctx->pc = 0x105E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E18u;
        // 0x105e1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E18u, 0x105E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105E20u;
label_105e20:
    // 0x105e20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105e24:
    // 0x105e24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_105e28:
    if (ctx->pc == 0x105E28u) {
        ctx->pc = 0x105E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E24u;
        // 0x105e28: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105E2Cu;
        goto label_105e2c;
    }
    ctx->pc = 0x105E24u;
    {
        const bool branch_taken_0x105e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x105e24) {
            ctx->pc = 0x105E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105E24u;
            // 0x105e28: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E40u;
            goto label_105e40;
        }
    }
    ctx->pc = 0x105E2Cu;
label_105e2c:
    // 0x105e2c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x105e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_105e30:
    // 0x105e30: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x105e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_105e34:
    // 0x105e34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x105e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_105e38:
    // 0x105e38: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x105e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_105e3c:
    // 0x105e3c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x105e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_105e40:
    // 0x105e40: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x105e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_105e44:
    // 0x105e44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_105e48:
    // 0x105e48: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x105e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_105e4c:
    // 0x105e4c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x105e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_105e50:
    // 0x105e50: 0x60f809  jalr        $v1
label_105e54:
    if (ctx->pc == 0x105E54u) {
        ctx->pc = 0x105E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E50u;
        // 0x105e54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105E58u;
        goto label_105e58;
    }
    ctx->pc = 0x105E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105E58u);
        ctx->pc = 0x105E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E50u;
        // 0x105e54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E50u, 0x105E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105E58u;
label_105e58:
    // 0x105e58: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x105e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_105e5c:
    // 0x105e5c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_105e60:
    if (ctx->pc == 0x105E60u) {
        ctx->pc = 0x105E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E5Cu;
        // 0x105e60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105E64u;
        goto label_105e64;
    }
    ctx->pc = 0x105E5Cu;
    {
        const bool branch_taken_0x105e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E5Cu;
        // 0x105e60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e5c) {
            ctx->pc = 0x105E7Cu;
            goto label_105e7c;
        }
    }
    ctx->pc = 0x105E64u;
label_105e64:
    // 0x105e64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x105e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_105e68:
    // 0x105e68: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x105e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_105e6c:
    // 0x105e6c: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x105e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_105e70:
    // 0x105e70: 0x60f809  jalr        $v1
label_105e74:
    if (ctx->pc == 0x105E74u) {
        ctx->pc = 0x105E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E70u;
        // 0x105e74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105E78u;
        goto label_105e78;
    }
    ctx->pc = 0x105E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105E78u);
        ctx->pc = 0x105E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E70u;
        // 0x105e74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E70u, 0x105E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105E78u;
label_105e78:
    // 0x105e78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x105e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_105e7c:
    // 0x105e7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x105e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_105e80:
    // 0x105e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_105e84:
    // 0x105e84: 0x3e00008  jr          $ra
label_105e88:
    if (ctx->pc == 0x105E88u) {
        ctx->pc = 0x105E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E84u;
        // 0x105e88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105E8Cu;
        goto label_105e8c;
    }
    ctx->pc = 0x105E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E84u;
        // 0x105e88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105E8Cu;
label_105e8c:
    // 0x105e8c: 0x0  nop
    ctx->pc = 0x105e8cu;
    // NOP
    ctx->pc = 0x105e90u;
}
