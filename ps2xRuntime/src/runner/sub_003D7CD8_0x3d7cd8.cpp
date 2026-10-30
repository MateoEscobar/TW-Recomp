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

// Function: sub_003D7CD8
// Address: 0x3d7cd8 - 0x3d7e30
void sub_003D7CD8_0x3d7cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7CD8_0x3d7cd8");
#endif

    switch (ctx->pc) {
        case 0x3d7cd8u: goto label_3d7cd8;
        case 0x3d7cdcu: goto label_3d7cdc;
        case 0x3d7ce0u: goto label_3d7ce0;
        case 0x3d7ce4u: goto label_3d7ce4;
        case 0x3d7ce8u: goto label_3d7ce8;
        case 0x3d7cecu: goto label_3d7cec;
        case 0x3d7cf0u: goto label_3d7cf0;
        case 0x3d7cf4u: goto label_3d7cf4;
        case 0x3d7cf8u: goto label_3d7cf8;
        case 0x3d7cfcu: goto label_3d7cfc;
        case 0x3d7d00u: goto label_3d7d00;
        case 0x3d7d04u: goto label_3d7d04;
        case 0x3d7d08u: goto label_3d7d08;
        case 0x3d7d0cu: goto label_3d7d0c;
        case 0x3d7d10u: goto label_3d7d10;
        case 0x3d7d14u: goto label_3d7d14;
        case 0x3d7d18u: goto label_3d7d18;
        case 0x3d7d1cu: goto label_3d7d1c;
        case 0x3d7d20u: goto label_3d7d20;
        case 0x3d7d24u: goto label_3d7d24;
        case 0x3d7d28u: goto label_3d7d28;
        case 0x3d7d2cu: goto label_3d7d2c;
        case 0x3d7d30u: goto label_3d7d30;
        case 0x3d7d34u: goto label_3d7d34;
        case 0x3d7d38u: goto label_3d7d38;
        case 0x3d7d3cu: goto label_3d7d3c;
        case 0x3d7d40u: goto label_3d7d40;
        case 0x3d7d44u: goto label_3d7d44;
        case 0x3d7d48u: goto label_3d7d48;
        case 0x3d7d4cu: goto label_3d7d4c;
        case 0x3d7d50u: goto label_3d7d50;
        case 0x3d7d54u: goto label_3d7d54;
        case 0x3d7d58u: goto label_3d7d58;
        case 0x3d7d5cu: goto label_3d7d5c;
        case 0x3d7d60u: goto label_3d7d60;
        case 0x3d7d64u: goto label_3d7d64;
        case 0x3d7d68u: goto label_3d7d68;
        case 0x3d7d6cu: goto label_3d7d6c;
        case 0x3d7d70u: goto label_3d7d70;
        case 0x3d7d74u: goto label_3d7d74;
        case 0x3d7d78u: goto label_3d7d78;
        case 0x3d7d7cu: goto label_3d7d7c;
        case 0x3d7d80u: goto label_3d7d80;
        case 0x3d7d84u: goto label_3d7d84;
        case 0x3d7d88u: goto label_3d7d88;
        case 0x3d7d8cu: goto label_3d7d8c;
        case 0x3d7d90u: goto label_3d7d90;
        case 0x3d7d94u: goto label_3d7d94;
        case 0x3d7d98u: goto label_3d7d98;
        case 0x3d7d9cu: goto label_3d7d9c;
        case 0x3d7da0u: goto label_3d7da0;
        case 0x3d7da4u: goto label_3d7da4;
        case 0x3d7da8u: goto label_3d7da8;
        case 0x3d7dacu: goto label_3d7dac;
        case 0x3d7db0u: goto label_3d7db0;
        case 0x3d7db4u: goto label_3d7db4;
        case 0x3d7db8u: goto label_3d7db8;
        case 0x3d7dbcu: goto label_3d7dbc;
        case 0x3d7dc0u: goto label_3d7dc0;
        case 0x3d7dc4u: goto label_3d7dc4;
        case 0x3d7dc8u: goto label_3d7dc8;
        case 0x3d7dccu: goto label_3d7dcc;
        case 0x3d7dd0u: goto label_3d7dd0;
        case 0x3d7dd4u: goto label_3d7dd4;
        case 0x3d7dd8u: goto label_3d7dd8;
        case 0x3d7ddcu: goto label_3d7ddc;
        case 0x3d7de0u: goto label_3d7de0;
        case 0x3d7de4u: goto label_3d7de4;
        case 0x3d7de8u: goto label_3d7de8;
        case 0x3d7decu: goto label_3d7dec;
        case 0x3d7df0u: goto label_3d7df0;
        case 0x3d7df4u: goto label_3d7df4;
        case 0x3d7df8u: goto label_3d7df8;
        case 0x3d7dfcu: goto label_3d7dfc;
        case 0x3d7e00u: goto label_3d7e00;
        case 0x3d7e04u: goto label_3d7e04;
        case 0x3d7e08u: goto label_3d7e08;
        case 0x3d7e0cu: goto label_3d7e0c;
        case 0x3d7e10u: goto label_3d7e10;
        case 0x3d7e14u: goto label_3d7e14;
        case 0x3d7e18u: goto label_3d7e18;
        case 0x3d7e1cu: goto label_3d7e1c;
        case 0x3d7e20u: goto label_3d7e20;
        case 0x3d7e24u: goto label_3d7e24;
        case 0x3d7e28u: goto label_3d7e28;
        case 0x3d7e2cu: goto label_3d7e2c;
        default: break;
    }

    ctx->pc = 0x3d7cd8u;

label_3d7cd8:
    // 0x3d7cd8: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x3d7cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
label_3d7cdc:
    // 0x3d7cdc: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x3d7cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
label_3d7ce0:
    // 0x3d7ce0: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x3d7ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
label_3d7ce4:
    // 0x3d7ce4: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x3d7ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
label_3d7ce8:
    // 0x3d7ce8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d7ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7cec:
    // 0x3d7cec: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x3d7cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
label_3d7cf0:
    // 0x3d7cf0: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3d7cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3d7cf4:
    // 0x3d7cf4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d7cf8:
    // 0x3d7cf8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d7cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d7cfc:
    // 0x3d7cfc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7d00:
    // 0x3d7d00: 0x40f809  jalr        $v0
label_3d7d04:
    if (ctx->pc == 0x3D7D04u) {
        ctx->pc = 0x3D7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D00u;
        // 0x3d7d04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D08u;
        goto label_3d7d08;
    }
    ctx->pc = 0x3D7D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7D08u);
        ctx->pc = 0x3D7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D00u;
        // 0x3d7d04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7D00u, 0x3D7D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7D08u;
label_3d7d08:
    // 0x3d7d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d7d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7d0c:
    // 0x3d7d0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d7d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d7d10:
    // 0x3d7d10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d7d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d7d14:
    // 0x3d7d14: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d7d18:
    // 0x3d7d18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d7d1c:
    // 0x3d7d1c: 0x0  nop
    ctx->pc = 0x3d7d1cu;
    // NOP
label_3d7d20:
    // 0x3d7d20: 0x0  nop
    ctx->pc = 0x3d7d20u;
    // NOP
label_3d7d24:
    // 0x3d7d24: 0x0  nop
    ctx->pc = 0x3d7d24u;
    // NOP
label_3d7d28:
    // 0x3d7d28: 0x0  nop
    ctx->pc = 0x3d7d28u;
    // NOP
label_3d7d2c:
    // 0x3d7d2c: 0x0  nop
    ctx->pc = 0x3d7d2cu;
    // NOP
label_3d7d30:
    // 0x3d7d30: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d7d34:
    if (ctx->pc == 0x3D7D34u) {
        ctx->pc = 0x3D7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D30u;
        // 0x3d7d34: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D38u;
        goto label_3d7d38;
    }
    ctx->pc = 0x3D7D30u;
    {
        const bool branch_taken_0x3d7d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D30u;
        // 0x3d7d34: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d30) {
            ctx->pc = 0x3D7D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7d20;
        }
    }
    ctx->pc = 0x3D7D38u;
label_3d7d38:
    // 0x3d7d38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d7d3c:
    // 0x3d7d3c: 0xc138ddc  jal         func_4E3770
label_3d7d40:
    if (ctx->pc == 0x3D7D40u) {
        ctx->pc = 0x3D7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D3Cu;
        // 0x3d7d40: 0x2453b8b8  addiu       $s3, $v0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D44u;
        goto label_3d7d44;
    }
    ctx->pc = 0x3D7D3Cu;
    SET_GPR_U32(ctx, 31, 0x3D7D44u);
    ctx->pc = 0x3D7D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D3Cu;
    // 0x3d7d40: 0x2453b8b8  addiu       $s3, $v0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D7D3Cu, 0x3D7D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D44u;
label_3d7d44:
    // 0x3d7d44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d7d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d7d48:
    // 0x3d7d48: 0xc0cd4ee  jal         func_3353B8
label_3d7d4c:
    if (ctx->pc == 0x3D7D4Cu) {
        ctx->pc = 0x3D7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D48u;
        // 0x3d7d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D50u;
        goto label_3d7d50;
    }
    ctx->pc = 0x3D7D48u;
    SET_GPR_U32(ctx, 31, 0x3D7D50u);
    ctx->pc = 0x3D7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D48u;
    // 0x3d7d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D7D48u, 0x3D7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D50u;
label_3d7d50:
    // 0x3d7d50: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x3d7d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3d7d54:
    // 0x3d7d54: 0xc0e858c  jal         func_3A1630
label_3d7d58:
    if (ctx->pc == 0x3D7D58u) {
        ctx->pc = 0x3D7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D54u;
        // 0x3d7d58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D5Cu;
        goto label_3d7d5c;
    }
    ctx->pc = 0x3D7D54u;
    SET_GPR_U32(ctx, 31, 0x3D7D5Cu);
    ctx->pc = 0x3D7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D54u;
    // 0x3d7d58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D7D54u, 0x3D7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D5Cu;
label_3d7d5c:
    // 0x3d7d5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d7d60:
    // 0x3d7d60: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_3d7d64:
    if (ctx->pc == 0x3D7D64u) {
        ctx->pc = 0x3D7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D60u;
        // 0x3d7d64: 0x3c050009  lui         $a1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D68u;
        goto label_3d7d68;
    }
    ctx->pc = 0x3D7D60u;
    {
        const bool branch_taken_0x3d7d60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D60u;
        // 0x3d7d64: 0x3c050009  lui         $a1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d60) {
            ctx->pc = 0x3D7DA0u;
            goto label_3d7da0;
        }
    }
    ctx->pc = 0x3D7D68u;
label_3d7d68:
    // 0x3d7d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d7d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d7d6c:
    // 0x3d7d6c: 0xc0e9404  jal         func_3A5010
label_3d7d70:
    if (ctx->pc == 0x3D7D70u) {
        ctx->pc = 0x3D7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D6Cu;
        // 0x3d7d70: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D74u;
        goto label_3d7d74;
    }
    ctx->pc = 0x3D7D6Cu;
    SET_GPR_U32(ctx, 31, 0x3D7D74u);
    ctx->pc = 0x3D7D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D6Cu;
    // 0x3d7d70: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3D7D6Cu, 0x3D7D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D74u;
label_3d7d74:
    // 0x3d7d74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d7d78:
    // 0x3d7d78: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3d7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3d7d7c:
    // 0x3d7d7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d7d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d7d80:
    // 0x3d7d80: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_3d7d84:
    if (ctx->pc == 0x3D7D84u) {
        ctx->pc = 0x3D7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D80u;
        // 0x3d7d84: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D88u;
        goto label_3d7d88;
    }
    ctx->pc = 0x3D7D80u;
    {
        const bool branch_taken_0x3d7d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D80u;
        // 0x3d7d84: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d80) {
            ctx->pc = 0x3D7E10u;
            goto label_3d7e10;
        }
    }
    ctx->pc = 0x3D7D88u;
label_3d7d88:
    // 0x3d7d88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d7d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d7d8c:
    // 0x3d7d8c: 0xc0e9404  jal         func_3A5010
label_3d7d90:
    if (ctx->pc == 0x3D7D90u) {
        ctx->pc = 0x3D7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D8Cu;
        // 0x3d7d90: 0x3c050009  lui         $a1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D94u;
        goto label_3d7d94;
    }
    ctx->pc = 0x3D7D8Cu;
    SET_GPR_U32(ctx, 31, 0x3D7D94u);
    ctx->pc = 0x3D7D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D8Cu;
    // 0x3d7d90: 0x3c050009  lui         $a1, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3D7D8Cu, 0x3D7D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D94u;
label_3d7d94:
    // 0x3d7d94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d7d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d7d98:
    // 0x3d7d98: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3d7d9c:
    if (ctx->pc == 0x3D7D9Cu) {
        ctx->pc = 0x3D7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D98u;
        // 0x3d7d9c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DA0u;
        goto label_3d7da0;
    }
    ctx->pc = 0x3D7D98u;
    {
        const bool branch_taken_0x3d7d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D98u;
        // 0x3d7d9c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d98) {
            ctx->pc = 0x3D7E10u;
            goto label_3d7e10;
        }
    }
    ctx->pc = 0x3D7DA0u;
label_3d7da0:
    // 0x3d7da0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3d7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d7da4:
    // 0x3d7da4: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x3d7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3d7da8:
    // 0x3d7da8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3d7da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3d7dac:
    // 0x3d7dac: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3d7dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d7db0:
    // 0x3d7db0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d7db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d7db4:
    // 0x3d7db4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3d7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3d7db8:
    // 0x3d7db8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3d7db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d7dbc:
    // 0x3d7dbc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_3d7dc0:
    if (ctx->pc == 0x3D7DC0u) {
        ctx->pc = 0x3D7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DBCu;
        // 0x3d7dc0: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DC4u;
        goto label_3d7dc4;
    }
    ctx->pc = 0x3D7DBCu;
    {
        const bool branch_taken_0x3d7dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DBCu;
        // 0x3d7dc0: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7dbc) {
            ctx->pc = 0x3D7E14u;
            goto label_3d7e14;
        }
    }
    ctx->pc = 0x3D7DC4u;
label_3d7dc4:
    // 0x3d7dc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d7dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d7dc8:
    // 0x3d7dc8: 0xc0cd4ee  jal         func_3353B8
label_3d7dcc:
    if (ctx->pc == 0x3D7DCCu) {
        ctx->pc = 0x3D7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DC8u;
        // 0x3d7dcc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DD0u;
        goto label_3d7dd0;
    }
    ctx->pc = 0x3D7DC8u;
    SET_GPR_U32(ctx, 31, 0x3D7DD0u);
    ctx->pc = 0x3D7DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7DC8u;
    // 0x3d7dcc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D7DC8u, 0x3D7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7DD0u;
label_3d7dd0:
    // 0x3d7dd0: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x3d7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_3d7dd4:
    // 0x3d7dd4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3d7dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3d7dd8:
    // 0x3d7dd8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3d7dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3d7ddc:
    // 0x3d7ddc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3d7ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3d7de0:
    // 0x3d7de0: 0x26104578  addiu       $s0, $s0, 0x4578
    ctx->pc = 0x3d7de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17784));
label_3d7de4:
    // 0x3d7de4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d7de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d7de8:
    // 0x3d7de8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d7de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d7dec:
    // 0x3d7dec: 0xc0cd4ee  jal         func_3353B8
label_3d7df0:
    if (ctx->pc == 0x3D7DF0u) {
        ctx->pc = 0x3D7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DECu;
        // 0x3d7df0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DF4u;
        goto label_3d7df4;
    }
    ctx->pc = 0x3D7DECu;
    SET_GPR_U32(ctx, 31, 0x3D7DF4u);
    ctx->pc = 0x3D7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7DECu;
    // 0x3d7df0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D7DECu, 0x3D7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7DF4u;
label_3d7df4:
    // 0x3d7df4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3d7df8:
    // 0x3d7df8: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x3d7df8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d7dfc:
    // 0x3d7dfc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3d7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d7e00:
    // 0x3d7e00: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3d7e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d7e04:
    // 0x3d7e04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d7e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7e08:
    // 0x3d7e08: 0xc045c8e  jal         func_117238
label_3d7e0c:
    if (ctx->pc == 0x3D7E0Cu) {
        ctx->pc = 0x3D7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E08u;
        // 0x3d7e0c: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7E10u;
        goto label_3d7e10;
    }
    ctx->pc = 0x3D7E08u;
    SET_GPR_U32(ctx, 31, 0x3D7E10u);
    ctx->pc = 0x3D7E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7E08u;
    // 0x3d7e0c: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3D7E08u, 0x3D7E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7E10u;
label_3d7e10:
    // 0x3d7e10: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x3d7e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d7e14:
    // 0x3d7e14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d7e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e18:
    // 0x3d7e18: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x3d7e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d7e1c:
    // 0x3d7e1c: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x3d7e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d7e20:
    // 0x3d7e20: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x3d7e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d7e24:
    // 0x3d7e24: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3d7e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d7e28:
    // 0x3d7e28: 0x3e00008  jr          $ra
label_3d7e2c:
    if (ctx->pc == 0x3D7E2Cu) {
        ctx->pc = 0x3D7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E28u;
        // 0x3d7e2c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7E30u;
        goto label_fallthrough_0x3d7e28;
    }
    ctx->pc = 0x3D7E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E28u;
        // 0x3d7e2c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d7e28:
    ctx->pc = 0x3D7E30u;
}
