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

// Function: sub_002A3D90
// Address: 0x2a3d90 - 0x2a3e50
void sub_002A3D90_0x2a3d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3D90_0x2a3d90");
#endif

    switch (ctx->pc) {
        case 0x2a3d90u: goto label_2a3d90;
        case 0x2a3d94u: goto label_2a3d94;
        case 0x2a3d98u: goto label_2a3d98;
        case 0x2a3d9cu: goto label_2a3d9c;
        case 0x2a3da0u: goto label_2a3da0;
        case 0x2a3da4u: goto label_2a3da4;
        case 0x2a3da8u: goto label_2a3da8;
        case 0x2a3dacu: goto label_2a3dac;
        case 0x2a3db0u: goto label_2a3db0;
        case 0x2a3db4u: goto label_2a3db4;
        case 0x2a3db8u: goto label_2a3db8;
        case 0x2a3dbcu: goto label_2a3dbc;
        case 0x2a3dc0u: goto label_2a3dc0;
        case 0x2a3dc4u: goto label_2a3dc4;
        case 0x2a3dc8u: goto label_2a3dc8;
        case 0x2a3dccu: goto label_2a3dcc;
        case 0x2a3dd0u: goto label_2a3dd0;
        case 0x2a3dd4u: goto label_2a3dd4;
        case 0x2a3dd8u: goto label_2a3dd8;
        case 0x2a3ddcu: goto label_2a3ddc;
        case 0x2a3de0u: goto label_2a3de0;
        case 0x2a3de4u: goto label_2a3de4;
        case 0x2a3de8u: goto label_2a3de8;
        case 0x2a3decu: goto label_2a3dec;
        case 0x2a3df0u: goto label_2a3df0;
        case 0x2a3df4u: goto label_2a3df4;
        case 0x2a3df8u: goto label_2a3df8;
        case 0x2a3dfcu: goto label_2a3dfc;
        case 0x2a3e00u: goto label_2a3e00;
        case 0x2a3e04u: goto label_2a3e04;
        case 0x2a3e08u: goto label_2a3e08;
        case 0x2a3e0cu: goto label_2a3e0c;
        case 0x2a3e10u: goto label_2a3e10;
        case 0x2a3e14u: goto label_2a3e14;
        case 0x2a3e18u: goto label_2a3e18;
        case 0x2a3e1cu: goto label_2a3e1c;
        case 0x2a3e20u: goto label_2a3e20;
        case 0x2a3e24u: goto label_2a3e24;
        case 0x2a3e28u: goto label_2a3e28;
        case 0x2a3e2cu: goto label_2a3e2c;
        case 0x2a3e30u: goto label_2a3e30;
        case 0x2a3e34u: goto label_2a3e34;
        case 0x2a3e38u: goto label_2a3e38;
        case 0x2a3e3cu: goto label_2a3e3c;
        case 0x2a3e40u: goto label_2a3e40;
        case 0x2a3e44u: goto label_2a3e44;
        case 0x2a3e48u: goto label_2a3e48;
        case 0x2a3e4cu: goto label_2a3e4c;
        default: break;
    }

    ctx->pc = 0x2a3d90u;

label_2a3d90:
    // 0x2a3d90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a3d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a3d94:
    // 0x2a3d94: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a3d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2a3d98:
    // 0x2a3d98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a3d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2a3d9c:
    // 0x2a3d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3da0:
    // 0x2a3da0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a3da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a3da4:
    // 0x2a3da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a3da8:
    // 0x2a3da8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a3da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a3dac:
    // 0x2a3dac: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_2a3db0:
    if (ctx->pc == 0x2A3DB0u) {
        ctx->pc = 0x2A3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DACu;
        // 0x2a3db0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3DB4u;
        goto label_2a3db4;
    }
    ctx->pc = 0x2A3DACu;
    {
        const bool branch_taken_0x2a3dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DACu;
        // 0x2a3db0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3dac) {
            ctx->pc = 0x2A3E38u;
            goto label_2a3e38;
        }
    }
    ctx->pc = 0x2A3DB4u;
label_2a3db4:
    // 0x2a3db4: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x2a3db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2a3db8:
    // 0x2a3db8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a3dbc:
    // 0x2a3dbc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2a3dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2a3dc0:
    // 0x2a3dc0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2a3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2a3dc4:
    // 0x2a3dc4: 0x40f809  jalr        $v0
label_2a3dc8:
    if (ctx->pc == 0x2A3DC8u) {
        ctx->pc = 0x2A3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DC4u;
        // 0x2a3dc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3DCCu;
        goto label_2a3dcc;
    }
    ctx->pc = 0x2A3DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3DCCu);
        ctx->pc = 0x2A3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DC4u;
        // 0x2a3dc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3DC4u, 0x2A3DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3DCCu;
label_2a3dcc:
    // 0x2a3dcc: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_2a3dd0:
    if (ctx->pc == 0x2A3DD0u) {
        ctx->pc = 0x2A3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DCCu;
        // 0x2a3dd0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3DD4u;
        goto label_2a3dd4;
    }
    ctx->pc = 0x2A3DCCu;
    {
        const bool branch_taken_0x2a3dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3dcc) {
            ctx->pc = 0x2A3DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3DCCu;
            // 0x2a3dd0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3E3Cu;
            goto label_2a3e3c;
        }
    }
    ctx->pc = 0x2A3DD4u;
label_2a3dd4:
    // 0x2a3dd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3dd8:
    // 0x2a3dd8: 0x8e502b04  lw          $s0, 0x2B04($s2)
    ctx->pc = 0x2a3dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2a3ddc:
    // 0x2a3ddc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2a3ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3de0:
    // 0x2a3de0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2a3de0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3de4:
    // 0x2a3de4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a3de8:
    // 0x2a3de8: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x2a3de8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_2a3dec:
    // 0x2a3dec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a3decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a3df0:
    // 0x2a3df0: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x2a3df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2a3df4:
    // 0x2a3df4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a3df8:
    // 0x2a3df8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2a3df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2a3dfc:
    // 0x2a3dfc: 0x40f809  jalr        $v0
label_2a3e00:
    if (ctx->pc == 0x2A3E00u) {
        ctx->pc = 0x2A3E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DFCu;
        // 0x2a3e00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3E04u;
        goto label_2a3e04;
    }
    ctx->pc = 0x2A3DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3E04u);
        ctx->pc = 0x2A3E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DFCu;
        // 0x2a3e00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3DFCu, 0x2A3E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3E04u;
label_2a3e04:
    // 0x2a3e04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2a3e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2a3e08:
    // 0x2a3e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3e0c:
    // 0x2a3e0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a3e10:
    // 0x2a3e10: 0x40f809  jalr        $v0
label_2a3e14:
    if (ctx->pc == 0x2A3E14u) {
        ctx->pc = 0x2A3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E10u;
        // 0x2a3e14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3E18u;
        goto label_2a3e18;
    }
    ctx->pc = 0x2A3E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3E18u);
        ctx->pc = 0x2A3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E10u;
        // 0x2a3e14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3E10u, 0x2A3E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3E18u;
label_2a3e18:
    // 0x2a3e18: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x2a3e18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2a3e1c:
    // 0x2a3e1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a3e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3e20:
    // 0x2a3e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3e24:
    // 0x2a3e24: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a3e28:
    // 0x2a3e28: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2a3e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2a3e2c:
    // 0x2a3e2c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2a3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2a3e30:
    // 0x2a3e30: 0x60f809  jalr        $v1
label_2a3e34:
    if (ctx->pc == 0x2A3E34u) {
        ctx->pc = 0x2A3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E30u;
        // 0x2a3e34: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3E38u;
        goto label_2a3e38;
    }
    ctx->pc = 0x2A3E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A3E38u);
        ctx->pc = 0x2A3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E30u;
        // 0x2a3e34: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3E30u, 0x2A3E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3E38u;
label_2a3e38:
    // 0x2a3e38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a3e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3e3c:
    // 0x2a3e3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a3e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a3e40:
    // 0x2a3e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a3e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a3e44:
    // 0x2a3e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3e48:
    // 0x2a3e48: 0x3e00008  jr          $ra
label_2a3e4c:
    if (ctx->pc == 0x2A3E4Cu) {
        ctx->pc = 0x2A3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E48u;
        // 0x2a3e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3E50u;
        goto label_fallthrough_0x2a3e48;
    }
    ctx->pc = 0x2A3E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E48u;
        // 0x2a3e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a3e48:
    ctx->pc = 0x2A3E50u;
}
