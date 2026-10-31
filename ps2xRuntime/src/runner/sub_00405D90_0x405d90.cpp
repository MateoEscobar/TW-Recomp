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

// Function: sub_00405D90
// Address: 0x405d90 - 0x405e78
void sub_00405D90_0x405d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00405D90_0x405d90");
#endif

    switch (ctx->pc) {
        case 0x405d90u: goto label_405d90;
        case 0x405d94u: goto label_405d94;
        case 0x405d98u: goto label_405d98;
        case 0x405d9cu: goto label_405d9c;
        case 0x405da0u: goto label_405da0;
        case 0x405da4u: goto label_405da4;
        case 0x405da8u: goto label_405da8;
        case 0x405dacu: goto label_405dac;
        case 0x405db0u: goto label_405db0;
        case 0x405db4u: goto label_405db4;
        case 0x405db8u: goto label_405db8;
        case 0x405dbcu: goto label_405dbc;
        case 0x405dc0u: goto label_405dc0;
        case 0x405dc4u: goto label_405dc4;
        case 0x405dc8u: goto label_405dc8;
        case 0x405dccu: goto label_405dcc;
        case 0x405dd0u: goto label_405dd0;
        case 0x405dd4u: goto label_405dd4;
        case 0x405dd8u: goto label_405dd8;
        case 0x405ddcu: goto label_405ddc;
        case 0x405de0u: goto label_405de0;
        case 0x405de4u: goto label_405de4;
        case 0x405de8u: goto label_405de8;
        case 0x405decu: goto label_405dec;
        case 0x405df0u: goto label_405df0;
        case 0x405df4u: goto label_405df4;
        case 0x405df8u: goto label_405df8;
        case 0x405dfcu: goto label_405dfc;
        case 0x405e00u: goto label_405e00;
        case 0x405e04u: goto label_405e04;
        case 0x405e08u: goto label_405e08;
        case 0x405e0cu: goto label_405e0c;
        case 0x405e10u: goto label_405e10;
        case 0x405e14u: goto label_405e14;
        case 0x405e18u: goto label_405e18;
        case 0x405e1cu: goto label_405e1c;
        case 0x405e20u: goto label_405e20;
        case 0x405e24u: goto label_405e24;
        case 0x405e28u: goto label_405e28;
        case 0x405e2cu: goto label_405e2c;
        case 0x405e30u: goto label_405e30;
        case 0x405e34u: goto label_405e34;
        case 0x405e38u: goto label_405e38;
        case 0x405e3cu: goto label_405e3c;
        case 0x405e40u: goto label_405e40;
        case 0x405e44u: goto label_405e44;
        case 0x405e48u: goto label_405e48;
        case 0x405e4cu: goto label_405e4c;
        case 0x405e50u: goto label_405e50;
        case 0x405e54u: goto label_405e54;
        case 0x405e58u: goto label_405e58;
        case 0x405e5cu: goto label_405e5c;
        case 0x405e60u: goto label_405e60;
        case 0x405e64u: goto label_405e64;
        case 0x405e68u: goto label_405e68;
        case 0x405e6cu: goto label_405e6c;
        case 0x405e70u: goto label_405e70;
        case 0x405e74u: goto label_405e74;
        default: break;
    }

    ctx->pc = 0x405d90u;

label_405d90:
    // 0x405d90: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x405d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_405d94:
    // 0x405d94: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x405d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_405d98:
    // 0x405d98: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x405d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_405d9c:
    // 0x405d9c: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x405d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_405da0:
    // 0x405da0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x405da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_405da4:
    // 0x405da4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x405da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_405da8:
    // 0x405da8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x405da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_405dac:
    // 0x405dac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x405dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_405db0:
    // 0x405db0: 0x40f809  jalr        $v0
label_405db4:
    if (ctx->pc == 0x405DB4u) {
        ctx->pc = 0x405DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405DB0u;
        // 0x405db4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405DB8u;
        goto label_405db8;
    }
    ctx->pc = 0x405DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405DB8u);
        ctx->pc = 0x405DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405DB0u;
        // 0x405db4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405DB0u, 0x405DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405DB8u;
label_405db8:
    // 0x405db8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x405db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405dbc:
    // 0x405dbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x405dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_405dc0:
    // 0x405dc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x405dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_405dc4:
    // 0x405dc4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x405dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_405dc8:
    // 0x405dc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x405dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_405dcc:
    // 0x405dcc: 0x0  nop
    ctx->pc = 0x405dccu;
    // NOP
label_405dd0:
    // 0x405dd0: 0x0  nop
    ctx->pc = 0x405dd0u;
    // NOP
label_405dd4:
    // 0x405dd4: 0x0  nop
    ctx->pc = 0x405dd4u;
    // NOP
label_405dd8:
    // 0x405dd8: 0x0  nop
    ctx->pc = 0x405dd8u;
    // NOP
label_405ddc:
    // 0x405ddc: 0x0  nop
    ctx->pc = 0x405ddcu;
    // NOP
label_405de0:
    // 0x405de0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_405de4:
    if (ctx->pc == 0x405DE4u) {
        ctx->pc = 0x405DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405DE0u;
        // 0x405de4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405DE8u;
        goto label_405de8;
    }
    ctx->pc = 0x405DE0u;
    {
        const bool branch_taken_0x405de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x405DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405DE0u;
        // 0x405de4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405de0) {
            ctx->pc = 0x405DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_405dd0;
        }
    }
    ctx->pc = 0x405DE8u;
label_405de8:
    // 0x405de8: 0xc138ddc  jal         func_4E3770
label_405dec:
    if (ctx->pc == 0x405DECu) {
        ctx->pc = 0x405DF0u;
        goto label_405df0;
    }
    ctx->pc = 0x405DE8u;
    SET_GPR_U32(ctx, 31, 0x405DF0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x405DE8u, 0x405DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405DF0u;
label_405df0:
    // 0x405df0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x405df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_405df4:
    // 0x405df4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x405df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_405df8:
    // 0x405df8: 0xc0cd4ee  jal         func_3353B8
label_405dfc:
    if (ctx->pc == 0x405DFCu) {
        ctx->pc = 0x405DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405DF8u;
        // 0x405dfc: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405E00u;
        goto label_405e00;
    }
    ctx->pc = 0x405DF8u;
    SET_GPR_U32(ctx, 31, 0x405E00u);
    ctx->pc = 0x405DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405DF8u;
    // 0x405dfc: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x405DF8u, 0x405E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405E00u;
label_405e00:
    // 0x405e00: 0x2445000a  addiu       $a1, $v0, 0xA
    ctx->pc = 0x405e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_405e04:
    // 0x405e04: 0xc0e858c  jal         func_3A1630
label_405e08:
    if (ctx->pc == 0x405E08u) {
        ctx->pc = 0x405E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E04u;
        // 0x405e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405E0Cu;
        goto label_405e0c;
    }
    ctx->pc = 0x405E04u;
    SET_GPR_U32(ctx, 31, 0x405E0Cu);
    ctx->pc = 0x405E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405E04u;
    // 0x405e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x405E04u, 0x405E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405E0Cu;
label_405e0c:
    // 0x405e0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x405e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_405e10:
    // 0x405e10: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_405e14:
    if (ctx->pc == 0x405E14u) {
        ctx->pc = 0x405E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E10u;
        // 0x405e14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405E18u;
        goto label_405e18;
    }
    ctx->pc = 0x405E10u;
    {
        const bool branch_taken_0x405e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x405e10) {
            ctx->pc = 0x405E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405E10u;
            // 0x405e14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405E24u;
            goto label_405e24;
        }
    }
    ctx->pc = 0x405E18u;
label_405e18:
    // 0x405e18: 0x3c02f45c  lui         $v0, 0xF45C
    ctx->pc = 0x405e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62556 << 16));
label_405e1c:
    // 0x405e1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_405e20:
    if (ctx->pc == 0x405E20u) {
        ctx->pc = 0x405E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E1Cu;
        // 0x405e20: 0x34421cff  ori         $v0, $v0, 0x1CFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x405E24u;
        goto label_405e24;
    }
    ctx->pc = 0x405E1Cu;
    {
        const bool branch_taken_0x405e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E1Cu;
        // 0x405e20: 0x34421cff  ori         $v0, $v0, 0x1CFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7423);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405e1c) {
            ctx->pc = 0x405E34u;
            goto label_405e34;
        }
    }
    ctx->pc = 0x405E24u;
label_405e24:
    // 0x405e24: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_405e28:
    if (ctx->pc == 0x405E28u) {
        ctx->pc = 0x405E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E24u;
        // 0x405e28: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405E2Cu;
        goto label_405e2c;
    }
    ctx->pc = 0x405E24u;
    {
        const bool branch_taken_0x405e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x405e24) {
            ctx->pc = 0x405E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405E24u;
            // 0x405e28: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405E4Cu;
            goto label_405e4c;
        }
    }
    ctx->pc = 0x405E2Cu;
label_405e2c:
    // 0x405e2c: 0x3c02f4ba  lui         $v0, 0xF4BA
    ctx->pc = 0x405e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62650 << 16));
label_405e30:
    // 0x405e30: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x405e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
label_405e34:
    // 0x405e34: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x405e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_405e38:
    // 0x405e38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x405e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_405e3c:
    // 0x405e3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x405e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_405e40:
    // 0x405e40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x405e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_405e44:
    // 0x405e44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x405e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_405e48:
    // 0x405e48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x405e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_405e4c:
    // 0x405e4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x405e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_405e50:
    // 0x405e50: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_405e54:
    if (ctx->pc == 0x405E54u) {
        ctx->pc = 0x405E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E50u;
        // 0x405e54: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405E58u;
        goto label_405e58;
    }
    ctx->pc = 0x405E50u;
    {
        const bool branch_taken_0x405e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x405e50) {
            ctx->pc = 0x405E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405E50u;
            // 0x405e54: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405E58u;
            goto label_405e58;
        }
    }
    ctx->pc = 0x405E58u;
label_405e58:
    // 0x405e58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x405e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_405e5c:
    // 0x405e5c: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x405e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_405e60:
    // 0x405e60: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x405e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_405e64:
    // 0x405e64: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x405e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_405e68:
    // 0x405e68: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x405e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_405e6c:
    // 0x405e6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x405e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_405e70:
    // 0x405e70: 0x3e00008  jr          $ra
label_405e74:
    if (ctx->pc == 0x405E74u) {
        ctx->pc = 0x405E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E70u;
        // 0x405e74: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405E78u;
        goto label_fallthrough_0x405e70;
    }
    ctx->pc = 0x405E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E70u;
        // 0x405e74: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x405e70:
    ctx->pc = 0x405E78u;
}
