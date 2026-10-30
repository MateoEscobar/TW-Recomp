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

// Function: sub_001E3D98
// Address: 0x1e3d98 - 0x1e3e58
void sub_001E3D98_0x1e3d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3D98_0x1e3d98");
#endif

    switch (ctx->pc) {
        case 0x1e3d98u: goto label_1e3d98;
        case 0x1e3d9cu: goto label_1e3d9c;
        case 0x1e3da0u: goto label_1e3da0;
        case 0x1e3da4u: goto label_1e3da4;
        case 0x1e3da8u: goto label_1e3da8;
        case 0x1e3dacu: goto label_1e3dac;
        case 0x1e3db0u: goto label_1e3db0;
        case 0x1e3db4u: goto label_1e3db4;
        case 0x1e3db8u: goto label_1e3db8;
        case 0x1e3dbcu: goto label_1e3dbc;
        case 0x1e3dc0u: goto label_1e3dc0;
        case 0x1e3dc4u: goto label_1e3dc4;
        case 0x1e3dc8u: goto label_1e3dc8;
        case 0x1e3dccu: goto label_1e3dcc;
        case 0x1e3dd0u: goto label_1e3dd0;
        case 0x1e3dd4u: goto label_1e3dd4;
        case 0x1e3dd8u: goto label_1e3dd8;
        case 0x1e3ddcu: goto label_1e3ddc;
        case 0x1e3de0u: goto label_1e3de0;
        case 0x1e3de4u: goto label_1e3de4;
        case 0x1e3de8u: goto label_1e3de8;
        case 0x1e3decu: goto label_1e3dec;
        case 0x1e3df0u: goto label_1e3df0;
        case 0x1e3df4u: goto label_1e3df4;
        case 0x1e3df8u: goto label_1e3df8;
        case 0x1e3dfcu: goto label_1e3dfc;
        case 0x1e3e00u: goto label_1e3e00;
        case 0x1e3e04u: goto label_1e3e04;
        case 0x1e3e08u: goto label_1e3e08;
        case 0x1e3e0cu: goto label_1e3e0c;
        case 0x1e3e10u: goto label_1e3e10;
        case 0x1e3e14u: goto label_1e3e14;
        case 0x1e3e18u: goto label_1e3e18;
        case 0x1e3e1cu: goto label_1e3e1c;
        case 0x1e3e20u: goto label_1e3e20;
        case 0x1e3e24u: goto label_1e3e24;
        case 0x1e3e28u: goto label_1e3e28;
        case 0x1e3e2cu: goto label_1e3e2c;
        case 0x1e3e30u: goto label_1e3e30;
        case 0x1e3e34u: goto label_1e3e34;
        case 0x1e3e38u: goto label_1e3e38;
        case 0x1e3e3cu: goto label_1e3e3c;
        case 0x1e3e40u: goto label_1e3e40;
        case 0x1e3e44u: goto label_1e3e44;
        case 0x1e3e48u: goto label_1e3e48;
        case 0x1e3e4cu: goto label_1e3e4c;
        case 0x1e3e50u: goto label_1e3e50;
        case 0x1e3e54u: goto label_1e3e54;
        default: break;
    }

    ctx->pc = 0x1e3d98u;

label_1e3d98:
    // 0x1e3d98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e3d9c:
    // 0x1e3d9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e3d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e3da0:
    // 0x1e3da0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e3da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e3da4:
    // 0x1e3da4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e3da8:
    // 0x1e3da8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e3da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e3dac:
    // 0x1e3dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e3db0:
    // 0x1e3db0: 0xc078d76  jal         func_1E35D8
label_1e3db4:
    if (ctx->pc == 0x1E3DB4u) {
        ctx->pc = 0x1E3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DB0u;
        // 0x1e3db4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3DB8u;
        goto label_1e3db8;
    }
    ctx->pc = 0x1E3DB0u;
    SET_GPR_U32(ctx, 31, 0x1E3DB8u);
    ctx->pc = 0x1E3DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DB0u;
    // 0x1e3db4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E35D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E35D8u, 0x1E3DB0u, 0x1E3DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DB8u;
label_1e3db8:
    // 0x1e3db8: 0x8e250140  lw          $a1, 0x140($s1)
    ctx->pc = 0x1e3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_1e3dbc:
    // 0x1e3dbc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_1e3dc0:
    if (ctx->pc == 0x1E3DC0u) {
        ctx->pc = 0x1E3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DBCu;
        // 0x1e3dc0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3DC4u;
        goto label_1e3dc4;
    }
    ctx->pc = 0x1E3DBCu;
    {
        const bool branch_taken_0x1e3dbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DBCu;
        // 0x1e3dc0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dbc) {
            ctx->pc = 0x1E3DF4u;
            goto label_1e3df4;
        }
    }
    ctx->pc = 0x1E3DC4u;
label_1e3dc4:
    // 0x1e3dc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3dc8:
    // 0x1e3dc8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1e3dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1e3dcc:
    // 0x1e3dcc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1e3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1e3dd0:
    // 0x1e3dd0: 0x60f809  jalr        $v1
label_1e3dd4:
    if (ctx->pc == 0x1E3DD4u) {
        ctx->pc = 0x1E3DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DD0u;
        // 0x1e3dd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3DD8u;
        goto label_1e3dd8;
    }
    ctx->pc = 0x1E3DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3DD8u);
        ctx->pc = 0x1E3DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DD0u;
        // 0x1e3dd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3DD0u, 0x1E3DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3DD8u;
label_1e3dd8:
    // 0x1e3dd8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1e3dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1e3ddc:
    // 0x1e3ddc: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x1e3ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_1e3de0:
    // 0x1e3de0: 0x24a56778  addiu       $a1, $a1, 0x6778
    ctx->pc = 0x1e3de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26488));
label_1e3de4:
    // 0x1e3de4: 0xc13a4ae  jal         func_4E92B8
label_1e3de8:
    if (ctx->pc == 0x1E3DE8u) {
        ctx->pc = 0x1E3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DE4u;
        // 0x1e3de8: 0x240600e8  addiu       $a2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3DECu;
        goto label_1e3dec;
    }
    ctx->pc = 0x1E3DE4u;
    SET_GPR_U32(ctx, 31, 0x1E3DECu);
    ctx->pc = 0x1E3DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DE4u;
    // 0x1e3de8: 0x240600e8  addiu       $a2, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E92B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E92B8u, 0x1E3DE4u, 0x1E3DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DECu;
label_1e3dec:
    // 0x1e3dec: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x1e3decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_1e3df0:
    // 0x1e3df0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1e3df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3df4:
    // 0x1e3df4: 0x26323960  addiu       $s2, $s1, 0x3960
    ctx->pc = 0x1e3df4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 14688));
label_1e3df8:
    // 0x1e3df8: 0x26133810  addiu       $s3, $s0, 0x3810
    ctx->pc = 0x1e3df8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 14352));
label_1e3dfc:
    // 0x1e3dfc: 0x26310150  addiu       $s1, $s1, 0x150
    ctx->pc = 0x1e3dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_1e3e00:
    // 0x1e3e00: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1e3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1e3e04:
    // 0x1e3e04: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1e3e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1e3e08:
    // 0x1e3e08: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1e3e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1e3e0c:
    // 0x1e3e0c: 0x60f809  jalr        $v1
label_1e3e10:
    if (ctx->pc == 0x1E3E10u) {
        ctx->pc = 0x1E3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E0Cu;
        // 0x1e3e10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E14u;
        goto label_1e3e14;
    }
    ctx->pc = 0x1E3E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3E14u);
        ctx->pc = 0x1E3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E0Cu;
        // 0x1e3e10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E0Cu, 0x1E3E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3E14u;
label_1e3e14:
    // 0x1e3e14: 0x26310270  addiu       $s1, $s1, 0x270
    ctx->pc = 0x1e3e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_1e3e18:
    // 0x1e3e18: 0x8e023960  lw          $v0, 0x3960($s0)
    ctx->pc = 0x1e3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14688)));
label_1e3e1c:
    // 0x1e3e1c: 0x26100270  addiu       $s0, $s0, 0x270
    ctx->pc = 0x1e3e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
label_1e3e20:
    // 0x1e3e20: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1e3e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1e3e24:
    // 0x1e3e24: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1e3e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1e3e28:
    // 0x1e3e28: 0x60f809  jalr        $v1
label_1e3e2c:
    if (ctx->pc == 0x1E3E2Cu) {
        ctx->pc = 0x1E3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E28u;
        // 0x1e3e2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E30u;
        goto label_1e3e30;
    }
    ctx->pc = 0x1E3E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3E30u);
        ctx->pc = 0x1E3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E28u;
        // 0x1e3e2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E28u, 0x1E3E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3E30u;
label_1e3e30:
    // 0x1e3e30: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1e3e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1e3e34:
    // 0x1e3e34: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1e3e38:
    if (ctx->pc == 0x1E3E38u) {
        ctx->pc = 0x1E3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E34u;
        // 0x1e3e38: 0x26520270  addiu       $s2, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E3Cu;
        goto label_1e3e3c;
    }
    ctx->pc = 0x1E3E34u;
    {
        const bool branch_taken_0x1e3e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E34u;
        // 0x1e3e38: 0x26520270  addiu       $s2, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e34) {
            ctx->pc = 0x1E3E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3e00;
        }
    }
    ctx->pc = 0x1E3E3Cu;
label_1e3e3c:
    // 0x1e3e3c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e3e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e3e40:
    // 0x1e3e40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e3e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3e44:
    // 0x1e3e44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3e48:
    // 0x1e3e48: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e3e48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3e4c:
    // 0x1e3e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3e50:
    // 0x1e3e50: 0x3e00008  jr          $ra
label_1e3e54:
    if (ctx->pc == 0x1E3E54u) {
        ctx->pc = 0x1E3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E50u;
        // 0x1e3e54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E58u;
        goto label_fallthrough_0x1e3e50;
    }
    ctx->pc = 0x1E3E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E50u;
        // 0x1e3e54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3e50:
    ctx->pc = 0x1E3E58u;
}
