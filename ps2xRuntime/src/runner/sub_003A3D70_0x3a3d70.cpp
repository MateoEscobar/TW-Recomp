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

// Function: sub_003A3D70
// Address: 0x3a3d70 - 0x3a3e78
void sub_003A3D70_0x3a3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3D70_0x3a3d70");
#endif

    switch (ctx->pc) {
        case 0x3a3d70u: goto label_3a3d70;
        case 0x3a3d74u: goto label_3a3d74;
        case 0x3a3d78u: goto label_3a3d78;
        case 0x3a3d7cu: goto label_3a3d7c;
        case 0x3a3d80u: goto label_3a3d80;
        case 0x3a3d84u: goto label_3a3d84;
        case 0x3a3d88u: goto label_3a3d88;
        case 0x3a3d8cu: goto label_3a3d8c;
        case 0x3a3d90u: goto label_3a3d90;
        case 0x3a3d94u: goto label_3a3d94;
        case 0x3a3d98u: goto label_3a3d98;
        case 0x3a3d9cu: goto label_3a3d9c;
        case 0x3a3da0u: goto label_3a3da0;
        case 0x3a3da4u: goto label_3a3da4;
        case 0x3a3da8u: goto label_3a3da8;
        case 0x3a3dacu: goto label_3a3dac;
        case 0x3a3db0u: goto label_3a3db0;
        case 0x3a3db4u: goto label_3a3db4;
        case 0x3a3db8u: goto label_3a3db8;
        case 0x3a3dbcu: goto label_3a3dbc;
        case 0x3a3dc0u: goto label_3a3dc0;
        case 0x3a3dc4u: goto label_3a3dc4;
        case 0x3a3dc8u: goto label_3a3dc8;
        case 0x3a3dccu: goto label_3a3dcc;
        case 0x3a3dd0u: goto label_3a3dd0;
        case 0x3a3dd4u: goto label_3a3dd4;
        case 0x3a3dd8u: goto label_3a3dd8;
        case 0x3a3ddcu: goto label_3a3ddc;
        case 0x3a3de0u: goto label_3a3de0;
        case 0x3a3de4u: goto label_3a3de4;
        case 0x3a3de8u: goto label_3a3de8;
        case 0x3a3decu: goto label_3a3dec;
        case 0x3a3df0u: goto label_3a3df0;
        case 0x3a3df4u: goto label_3a3df4;
        case 0x3a3df8u: goto label_3a3df8;
        case 0x3a3dfcu: goto label_3a3dfc;
        case 0x3a3e00u: goto label_3a3e00;
        case 0x3a3e04u: goto label_3a3e04;
        case 0x3a3e08u: goto label_3a3e08;
        case 0x3a3e0cu: goto label_3a3e0c;
        case 0x3a3e10u: goto label_3a3e10;
        case 0x3a3e14u: goto label_3a3e14;
        case 0x3a3e18u: goto label_3a3e18;
        case 0x3a3e1cu: goto label_3a3e1c;
        case 0x3a3e20u: goto label_3a3e20;
        case 0x3a3e24u: goto label_3a3e24;
        case 0x3a3e28u: goto label_3a3e28;
        case 0x3a3e2cu: goto label_3a3e2c;
        case 0x3a3e30u: goto label_3a3e30;
        case 0x3a3e34u: goto label_3a3e34;
        case 0x3a3e38u: goto label_3a3e38;
        case 0x3a3e3cu: goto label_3a3e3c;
        case 0x3a3e40u: goto label_3a3e40;
        case 0x3a3e44u: goto label_3a3e44;
        case 0x3a3e48u: goto label_3a3e48;
        case 0x3a3e4cu: goto label_3a3e4c;
        case 0x3a3e50u: goto label_3a3e50;
        case 0x3a3e54u: goto label_3a3e54;
        case 0x3a3e58u: goto label_3a3e58;
        case 0x3a3e5cu: goto label_3a3e5c;
        case 0x3a3e60u: goto label_3a3e60;
        case 0x3a3e64u: goto label_3a3e64;
        case 0x3a3e68u: goto label_3a3e68;
        case 0x3a3e6cu: goto label_3a3e6c;
        case 0x3a3e70u: goto label_3a3e70;
        case 0x3a3e74u: goto label_3a3e74;
        default: break;
    }

    ctx->pc = 0x3a3d70u;

label_3a3d70:
    // 0x3a3d70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a3d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3a3d74:
    // 0x3a3d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3d78:
    // 0x3a3d78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3a3d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3a3d7c:
    // 0x3a3d7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3a3d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3a3d80:
    // 0x3a3d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a3d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3d84:
    // 0x3a3d84: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
label_3a3d88:
    if (ctx->pc == 0x3A3D88u) {
        ctx->pc = 0x3A3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D84u;
        // 0x3a3d88: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3D8Cu;
        goto label_3a3d8c;
    }
    ctx->pc = 0x3A3D84u;
    {
        const bool branch_taken_0x3a3d84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D84u;
        // 0x3a3d88: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d84) {
            ctx->pc = 0x3A3E00u;
            goto label_3a3e00;
        }
    }
    ctx->pc = 0x3A3D8Cu;
label_3a3d8c:
    // 0x3a3d8c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x3a3d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_3a3d90:
    // 0x3a3d90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a3d94:
    if (ctx->pc == 0x3A3D94u) {
        ctx->pc = 0x3A3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D90u;
        // 0x3a3d94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3D98u;
        goto label_3a3d98;
    }
    ctx->pc = 0x3A3D90u;
    {
        const bool branch_taken_0x3a3d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D90u;
        // 0x3a3d94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d90) {
            ctx->pc = 0x3A3DA8u;
            goto label_3a3da8;
        }
    }
    ctx->pc = 0x3A3D98u;
label_3a3d98:
    // 0x3a3d98: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_3a3d9c:
    if (ctx->pc == 0x3A3D9Cu) {
        ctx->pc = 0x3A3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D98u;
        // 0x3a3d9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3DA0u;
        goto label_3a3da0;
    }
    ctx->pc = 0x3A3D98u;
    {
        const bool branch_taken_0x3a3d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D98u;
        // 0x3a3d9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d98) {
            ctx->pc = 0x3A3DC4u;
            goto label_3a3dc4;
        }
    }
    ctx->pc = 0x3A3DA0u;
label_3a3da0:
    // 0x3a3da0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3a3da4:
    if (ctx->pc == 0x3A3DA4u) {
        ctx->pc = 0x3A3DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DA0u;
        // 0x3a3da4: 0x244216c0  addiu       $v0, $v0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3DA8u;
        goto label_3a3da8;
    }
    ctx->pc = 0x3A3DA0u;
    {
        const bool branch_taken_0x3a3da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DA0u;
        // 0x3a3da4: 0x244216c0  addiu       $v0, $v0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3da0) {
            ctx->pc = 0x3A3E50u;
            goto label_3a3e50;
        }
    }
    ctx->pc = 0x3A3DA8u;
label_3a3da8:
    // 0x3a3da8: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
label_3a3dac:
    if (ctx->pc == 0x3A3DACu) {
        ctx->pc = 0x3A3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DA8u;
        // 0x3a3dac: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3DB0u;
        goto label_3a3db0;
    }
    ctx->pc = 0x3A3DA8u;
    {
        const bool branch_taken_0x3a3da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DA8u;
        // 0x3a3dac: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3da8) {
            ctx->pc = 0x3A3E0Cu;
            goto label_3a3e0c;
        }
    }
    ctx->pc = 0x3A3DB0u;
label_3a3db0:
    // 0x3a3db0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a3db4:
    // 0x3a3db4: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
label_3a3db8:
    if (ctx->pc == 0x3A3DB8u) {
        ctx->pc = 0x3A3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DB4u;
        // 0x3a3db8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3DBCu;
        goto label_3a3dbc;
    }
    ctx->pc = 0x3A3DB4u;
    {
        const bool branch_taken_0x3a3db4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DB4u;
        // 0x3a3db8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3db4) {
            ctx->pc = 0x3A3E14u;
            goto label_3a3e14;
        }
    }
    ctx->pc = 0x3A3DBCu;
label_3a3dbc:
    // 0x3a3dbc: 0x10000024  b           . + 4 + (0x24 << 2)
label_3a3dc0:
    if (ctx->pc == 0x3A3DC0u) {
        ctx->pc = 0x3A3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DBCu;
        // 0x3a3dc0: 0x244216c0  addiu       $v0, $v0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3DC4u;
        goto label_3a3dc4;
    }
    ctx->pc = 0x3A3DBCu;
    {
        const bool branch_taken_0x3a3dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DBCu;
        // 0x3a3dc0: 0x244216c0  addiu       $v0, $v0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3dbc) {
            ctx->pc = 0x3A3E50u;
            goto label_3a3e50;
        }
    }
    ctx->pc = 0x3A3DC4u;
label_3a3dc4:
    // 0x3a3dc4: 0xc047e6c  jal         func_11F9B0
label_3a3dc8:
    if (ctx->pc == 0x3A3DC8u) {
        ctx->pc = 0x3A3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DC4u;
        // 0x3a3dc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3DCCu;
        goto label_3a3dcc;
    }
    ctx->pc = 0x3A3DC4u;
    SET_GPR_U32(ctx, 31, 0x3A3DCCu);
    ctx->pc = 0x3A3DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3DC4u;
    // 0x3a3dc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A3DC4u, 0x3A3DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3DCCu;
label_3a3dcc:
    // 0x3a3dcc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3a3dd0:
    if (ctx->pc == 0x3A3DD0u) {
        ctx->pc = 0x3A3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DCCu;
        // 0x3a3dd0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3DD4u;
        goto label_3a3dd4;
    }
    ctx->pc = 0x3A3DCCu;
    {
        const bool branch_taken_0x3a3dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DCCu;
        // 0x3a3dd0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3dcc) {
            ctx->pc = 0x3A3E48u;
            goto label_3a3e48;
        }
    }
    ctx->pc = 0x3A3DD4u;
label_3a3dd4:
    // 0x3a3dd4: 0xc047e6c  jal         func_11F9B0
label_3a3dd8:
    if (ctx->pc == 0x3A3DD8u) {
        ctx->pc = 0x3A3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DD4u;
        // 0x3a3dd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3DDCu;
        goto label_3a3ddc;
    }
    ctx->pc = 0x3A3DD4u;
    SET_GPR_U32(ctx, 31, 0x3A3DDCu);
    ctx->pc = 0x3A3DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3DD4u;
    // 0x3a3dd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A3DD4u, 0x3A3DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3DDCu;
label_3a3ddc:
    // 0x3a3ddc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a3de0:
    // 0x3a3de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3de4:
    // 0x3a3de4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x3a3de4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_3a3de8:
    // 0x3a3de8: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x3a3de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3a3dec:
    // 0x3a3dec: 0xc0f809  jalr        $a2
label_3a3df0:
    if (ctx->pc == 0x3A3DF0u) {
        ctx->pc = 0x3A3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DECu;
        // 0x3a3df0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3DF4u;
        goto label_3a3df4;
    }
    ctx->pc = 0x3A3DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3A3DF4u);
        ctx->pc = 0x3A3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DECu;
        // 0x3a3df0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3DECu, 0x3A3DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A3DF4u;
label_3a3df4:
    // 0x3a3df4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3a3df4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3df8:
    // 0x3a3df8: 0x10000017  b           . + 4 + (0x17 << 2)
label_3a3dfc:
    if (ctx->pc == 0x3A3DFCu) {
        ctx->pc = 0x3A3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DF8u;
        // 0x3a3dfc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E00u;
        goto label_3a3e00;
    }
    ctx->pc = 0x3A3DF8u;
    {
        const bool branch_taken_0x3a3df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DF8u;
        // 0x3a3dfc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3df8) {
            ctx->pc = 0x3A3E58u;
            goto label_3a3e58;
        }
    }
    ctx->pc = 0x3A3E00u;
label_3a3e00:
    // 0x3a3e00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a3e04:
    // 0x3a3e04: 0x10000012  b           . + 4 + (0x12 << 2)
label_3a3e08:
    if (ctx->pc == 0x3A3E08u) {
        ctx->pc = 0x3A3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E04u;
        // 0x3a3e08: 0x24422dc0  addiu       $v0, $v0, 0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E0Cu;
        goto label_3a3e0c;
    }
    ctx->pc = 0x3A3E04u;
    {
        const bool branch_taken_0x3a3e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E04u;
        // 0x3a3e08: 0x24422dc0  addiu       $v0, $v0, 0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e04) {
            ctx->pc = 0x3A3E50u;
            goto label_3a3e50;
        }
    }
    ctx->pc = 0x3A3E0Cu;
label_3a3e0c:
    // 0x3a3e0c: 0x10000010  b           . + 4 + (0x10 << 2)
label_3a3e10:
    if (ctx->pc == 0x3A3E10u) {
        ctx->pc = 0x3A3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E0Cu;
        // 0x3a3e10: 0x24422dd0  addiu       $v0, $v0, 0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E14u;
        goto label_3a3e14;
    }
    ctx->pc = 0x3A3E0Cu;
    {
        const bool branch_taken_0x3a3e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E0Cu;
        // 0x3a3e10: 0x24422dd0  addiu       $v0, $v0, 0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e0c) {
            ctx->pc = 0x3A3E50u;
            goto label_3a3e50;
        }
    }
    ctx->pc = 0x3A3E14u;
label_3a3e14:
    // 0x3a3e14: 0xc047e6c  jal         func_11F9B0
label_3a3e18:
    if (ctx->pc == 0x3A3E18u) {
        ctx->pc = 0x3A3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E14u;
        // 0x3a3e18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E1Cu;
        goto label_3a3e1c;
    }
    ctx->pc = 0x3A3E14u;
    SET_GPR_U32(ctx, 31, 0x3A3E1Cu);
    ctx->pc = 0x3A3E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3E14u;
    // 0x3a3e18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A3E14u, 0x3A3E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3E1Cu;
label_3a3e1c:
    // 0x3a3e1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a3e20:
    if (ctx->pc == 0x3A3E20u) {
        ctx->pc = 0x3A3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E1Cu;
        // 0x3a3e20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E24u;
        goto label_3a3e24;
    }
    ctx->pc = 0x3A3E1Cu;
    {
        const bool branch_taken_0x3a3e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E1Cu;
        // 0x3a3e20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e1c) {
            ctx->pc = 0x3A3E4Cu;
            goto label_3a3e4c;
        }
    }
    ctx->pc = 0x3A3E24u;
label_3a3e24:
    // 0x3a3e24: 0xc047e6c  jal         func_11F9B0
label_3a3e28:
    if (ctx->pc == 0x3A3E28u) {
        ctx->pc = 0x3A3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E24u;
        // 0x3a3e28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E2Cu;
        goto label_3a3e2c;
    }
    ctx->pc = 0x3A3E24u;
    SET_GPR_U32(ctx, 31, 0x3A3E2Cu);
    ctx->pc = 0x3A3E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3E24u;
    // 0x3a3e28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A3E24u, 0x3A3E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3E2Cu;
label_3a3e2c:
    // 0x3a3e2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a3e30:
    // 0x3a3e30: 0x84640248  lh          $a0, 0x248($v1)
    ctx->pc = 0x3a3e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 584)));
label_3a3e34:
    // 0x3a3e34: 0x8c65024c  lw          $a1, 0x24C($v1)
    ctx->pc = 0x3a3e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 588)));
label_3a3e38:
    // 0x3a3e38: 0xa0f809  jalr        $a1
label_3a3e3c:
    if (ctx->pc == 0x3A3E3Cu) {
        ctx->pc = 0x3A3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E38u;
        // 0x3a3e3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E40u;
        goto label_3a3e40;
    }
    ctx->pc = 0x3A3E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3A3E40u);
        ctx->pc = 0x3A3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E38u;
        // 0x3a3e3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3E38u, 0x3A3E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A3E40u;
label_3a3e40:
    // 0x3a3e40: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a3e44:
    if (ctx->pc == 0x3A3E44u) {
        ctx->pc = 0x3A3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E40u;
        // 0x3a3e44: 0x78430000  lq          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E48u;
        goto label_3a3e48;
    }
    ctx->pc = 0x3A3E40u;
    {
        const bool branch_taken_0x3a3e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E40u;
        // 0x3a3e44: 0x78430000  lq          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e40) {
            ctx->pc = 0x3A3E54u;
            goto label_3a3e54;
        }
    }
    ctx->pc = 0x3A3E48u;
label_3a3e48:
    // 0x3a3e48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a3e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a3e4c:
    // 0x3a3e4c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3a3e50:
    // 0x3a3e50: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3e50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3a3e54:
    // 0x3a3e54: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a3e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3a3e58:
    // 0x3a3e58: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a3e58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3e5c:
    // 0x3a3e5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a3e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a3e60:
    // 0x3a3e60: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3a3e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a3e64:
    // 0x3a3e64: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x3a3e64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_3a3e68:
    // 0x3a3e68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3a3e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a3e6c:
    // 0x3a3e6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a3e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a3e70:
    // 0x3a3e70: 0x3e00008  jr          $ra
label_3a3e74:
    if (ctx->pc == 0x3A3E74u) {
        ctx->pc = 0x3A3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E70u;
        // 0x3a3e74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E78u;
        goto label_fallthrough_0x3a3e70;
    }
    ctx->pc = 0x3A3E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E70u;
        // 0x3a3e74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a3e70:
    ctx->pc = 0x3A3E78u;
}
