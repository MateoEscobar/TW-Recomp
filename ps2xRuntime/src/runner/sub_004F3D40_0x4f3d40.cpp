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

// Function: sub_004F3D40
// Address: 0x4f3d40 - 0x4f3e08
void sub_004F3D40_0x4f3d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3D40_0x4f3d40");
#endif

    switch (ctx->pc) {
        case 0x4f3d40u: goto label_4f3d40;
        case 0x4f3d44u: goto label_4f3d44;
        case 0x4f3d48u: goto label_4f3d48;
        case 0x4f3d4cu: goto label_4f3d4c;
        case 0x4f3d50u: goto label_4f3d50;
        case 0x4f3d54u: goto label_4f3d54;
        case 0x4f3d58u: goto label_4f3d58;
        case 0x4f3d5cu: goto label_4f3d5c;
        case 0x4f3d60u: goto label_4f3d60;
        case 0x4f3d64u: goto label_4f3d64;
        case 0x4f3d68u: goto label_4f3d68;
        case 0x4f3d6cu: goto label_4f3d6c;
        case 0x4f3d70u: goto label_4f3d70;
        case 0x4f3d74u: goto label_4f3d74;
        case 0x4f3d78u: goto label_4f3d78;
        case 0x4f3d7cu: goto label_4f3d7c;
        case 0x4f3d80u: goto label_4f3d80;
        case 0x4f3d84u: goto label_4f3d84;
        case 0x4f3d88u: goto label_4f3d88;
        case 0x4f3d8cu: goto label_4f3d8c;
        case 0x4f3d90u: goto label_4f3d90;
        case 0x4f3d94u: goto label_4f3d94;
        case 0x4f3d98u: goto label_4f3d98;
        case 0x4f3d9cu: goto label_4f3d9c;
        case 0x4f3da0u: goto label_4f3da0;
        case 0x4f3da4u: goto label_4f3da4;
        case 0x4f3da8u: goto label_4f3da8;
        case 0x4f3dacu: goto label_4f3dac;
        case 0x4f3db0u: goto label_4f3db0;
        case 0x4f3db4u: goto label_4f3db4;
        case 0x4f3db8u: goto label_4f3db8;
        case 0x4f3dbcu: goto label_4f3dbc;
        case 0x4f3dc0u: goto label_4f3dc0;
        case 0x4f3dc4u: goto label_4f3dc4;
        case 0x4f3dc8u: goto label_4f3dc8;
        case 0x4f3dccu: goto label_4f3dcc;
        case 0x4f3dd0u: goto label_4f3dd0;
        case 0x4f3dd4u: goto label_4f3dd4;
        case 0x4f3dd8u: goto label_4f3dd8;
        case 0x4f3ddcu: goto label_4f3ddc;
        case 0x4f3de0u: goto label_4f3de0;
        case 0x4f3de4u: goto label_4f3de4;
        case 0x4f3de8u: goto label_4f3de8;
        case 0x4f3decu: goto label_4f3dec;
        case 0x4f3df0u: goto label_4f3df0;
        case 0x4f3df4u: goto label_4f3df4;
        case 0x4f3df8u: goto label_4f3df8;
        case 0x4f3dfcu: goto label_4f3dfc;
        case 0x4f3e00u: goto label_4f3e00;
        case 0x4f3e04u: goto label_4f3e04;
        default: break;
    }

    ctx->pc = 0x4f3d40u;

label_4f3d40:
    // 0x4f3d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f3d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f3d44:
    // 0x4f3d44: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f3d48:
    // 0x4f3d48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f3d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f3d4c:
    // 0x4f3d4c: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x4f3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_4f3d50:
    // 0x4f3d50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4f3d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4f3d54:
    // 0x4f3d54: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x4f3d54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_4f3d58:
    // 0x4f3d58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f3d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3d5c:
    // 0x4f3d5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4f3d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4f3d60:
    // 0x4f3d60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4f3d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4f3d64:
    // 0x4f3d64: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x4f3d64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_4f3d68:
    // 0x4f3d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f3d6c:
    // 0x4f3d6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f3d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3d70:
    // 0x4f3d70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f3d70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f3d74:
    // 0x4f3d74: 0x26101158  addiu       $s0, $s0, 0x1158
    ctx->pc = 0x4f3d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4440));
label_4f3d78:
    // 0x4f3d78: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f3d78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f3d7c:
    // 0x4f3d7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f3d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3d80:
    // 0x4f3d80: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f3d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f3d84:
    // 0x4f3d84: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x4f3d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4f3d88:
    // 0x4f3d88: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f3d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f3d8c:
    // 0x4f3d8c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4f3d8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4f3d90:
    // 0x4f3d90: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4f3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4f3d94:
    // 0x4f3d94: 0x40f809  jalr        $v0
label_4f3d98:
    if (ctx->pc == 0x4F3D98u) {
        ctx->pc = 0x4F3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3D94u;
        // 0x4f3d98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3D9Cu;
        goto label_4f3d9c;
    }
    ctx->pc = 0x4F3D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F3D9Cu);
        ctx->pc = 0x4F3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3D94u;
        // 0x4f3d98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3D94u, 0x4F3D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3D9Cu;
label_4f3d9c:
    // 0x4f3d9c: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f3d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f3da0:
    // 0x4f3da0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f3da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3da4:
    // 0x4f3da4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x4f3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_4f3da8:
    // 0x4f3da8: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x4f3da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_4f3dac:
    // 0x4f3dac: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4f3dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f3db0:
    // 0x4f3db0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f3db4:
    // 0x4f3db4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f3db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f3db8:
    // 0x4f3db8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f3dbc:
    // 0x4f3dbc: 0x60f809  jalr        $v1
label_4f3dc0:
    if (ctx->pc == 0x4F3DC0u) {
        ctx->pc = 0x4F3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3DBCu;
        // 0x4f3dc0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3DC4u;
        goto label_4f3dc4;
    }
    ctx->pc = 0x4F3DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F3DC4u);
        ctx->pc = 0x4F3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3DBCu;
        // 0x4f3dc0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3DBCu, 0x4F3DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3DC4u;
label_4f3dc4:
    // 0x4f3dc4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f3dc8:
    // 0x4f3dc8: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x4f3dc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_4f3dcc:
    // 0x4f3dcc: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x4f3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_4f3dd0:
    // 0x4f3dd0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x4f3dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_4f3dd4:
    // 0x4f3dd4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f3dd8:
    // 0x4f3dd8: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x4f3dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_4f3ddc:
    // 0x4f3ddc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4f3de0:
    if (ctx->pc == 0x4F3DE0u) {
        ctx->pc = 0x4F3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3DDCu;
        // 0x4f3de0: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3DE4u;
        goto label_4f3de4;
    }
    ctx->pc = 0x4F3DDCu;
    {
        const bool branch_taken_0x4f3ddc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3DDCu;
        // 0x4f3de0: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3ddc) {
            ctx->pc = 0x4F3DECu;
            goto label_4f3dec;
        }
    }
    ctx->pc = 0x4F3DE4u;
label_4f3de4:
    // 0x4f3de4: 0xc10b208  jal         func_42C820
label_4f3de8:
    if (ctx->pc == 0x4F3DE8u) {
        ctx->pc = 0x4F3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3DE4u;
        // 0x4f3de8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3DECu;
        goto label_4f3dec;
    }
    ctx->pc = 0x4F3DE4u;
    SET_GPR_U32(ctx, 31, 0x4F3DECu);
    ctx->pc = 0x4F3DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3DE4u;
    // 0x4f3de8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F3DE4u, 0x4F3DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3DECu;
label_4f3dec:
    // 0x4f3dec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4f3decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f3df0:
    // 0x4f3df0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4f3df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f3df4:
    // 0x4f3df4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f3df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3df8:
    // 0x4f3df8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4f3df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3dfc:
    // 0x4f3dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3e00:
    // 0x4f3e00: 0x3e00008  jr          $ra
label_4f3e04:
    if (ctx->pc == 0x4F3E04u) {
        ctx->pc = 0x4F3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3E00u;
        // 0x4f3e04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3E08u;
        goto label_fallthrough_0x4f3e00;
    }
    ctx->pc = 0x4F3E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3E00u;
        // 0x4f3e04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f3e00:
    ctx->pc = 0x4F3E08u;
}
