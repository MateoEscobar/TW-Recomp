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

// Function: sub_003D4DD0
// Address: 0x3d4dd0 - 0x3d4f60
void sub_003D4DD0_0x3d4dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4DD0_0x3d4dd0");
#endif

    switch (ctx->pc) {
        case 0x3d4dd0u: goto label_3d4dd0;
        case 0x3d4dd4u: goto label_3d4dd4;
        case 0x3d4dd8u: goto label_3d4dd8;
        case 0x3d4ddcu: goto label_3d4ddc;
        case 0x3d4de0u: goto label_3d4de0;
        case 0x3d4de4u: goto label_3d4de4;
        case 0x3d4de8u: goto label_3d4de8;
        case 0x3d4decu: goto label_3d4dec;
        case 0x3d4df0u: goto label_3d4df0;
        case 0x3d4df4u: goto label_3d4df4;
        case 0x3d4df8u: goto label_3d4df8;
        case 0x3d4dfcu: goto label_3d4dfc;
        case 0x3d4e00u: goto label_3d4e00;
        case 0x3d4e04u: goto label_3d4e04;
        case 0x3d4e08u: goto label_3d4e08;
        case 0x3d4e0cu: goto label_3d4e0c;
        case 0x3d4e10u: goto label_3d4e10;
        case 0x3d4e14u: goto label_3d4e14;
        case 0x3d4e18u: goto label_3d4e18;
        case 0x3d4e1cu: goto label_3d4e1c;
        case 0x3d4e20u: goto label_3d4e20;
        case 0x3d4e24u: goto label_3d4e24;
        case 0x3d4e28u: goto label_3d4e28;
        case 0x3d4e2cu: goto label_3d4e2c;
        case 0x3d4e30u: goto label_3d4e30;
        case 0x3d4e34u: goto label_3d4e34;
        case 0x3d4e38u: goto label_3d4e38;
        case 0x3d4e3cu: goto label_3d4e3c;
        case 0x3d4e40u: goto label_3d4e40;
        case 0x3d4e44u: goto label_3d4e44;
        case 0x3d4e48u: goto label_3d4e48;
        case 0x3d4e4cu: goto label_3d4e4c;
        case 0x3d4e50u: goto label_3d4e50;
        case 0x3d4e54u: goto label_3d4e54;
        case 0x3d4e58u: goto label_3d4e58;
        case 0x3d4e5cu: goto label_3d4e5c;
        case 0x3d4e60u: goto label_3d4e60;
        case 0x3d4e64u: goto label_3d4e64;
        case 0x3d4e68u: goto label_3d4e68;
        case 0x3d4e6cu: goto label_3d4e6c;
        case 0x3d4e70u: goto label_3d4e70;
        case 0x3d4e74u: goto label_3d4e74;
        case 0x3d4e78u: goto label_3d4e78;
        case 0x3d4e7cu: goto label_3d4e7c;
        case 0x3d4e80u: goto label_3d4e80;
        case 0x3d4e84u: goto label_3d4e84;
        case 0x3d4e88u: goto label_3d4e88;
        case 0x3d4e8cu: goto label_3d4e8c;
        case 0x3d4e90u: goto label_3d4e90;
        case 0x3d4e94u: goto label_3d4e94;
        case 0x3d4e98u: goto label_3d4e98;
        case 0x3d4e9cu: goto label_3d4e9c;
        case 0x3d4ea0u: goto label_3d4ea0;
        case 0x3d4ea4u: goto label_3d4ea4;
        case 0x3d4ea8u: goto label_3d4ea8;
        case 0x3d4eacu: goto label_3d4eac;
        case 0x3d4eb0u: goto label_3d4eb0;
        case 0x3d4eb4u: goto label_3d4eb4;
        case 0x3d4eb8u: goto label_3d4eb8;
        case 0x3d4ebcu: goto label_3d4ebc;
        case 0x3d4ec0u: goto label_3d4ec0;
        case 0x3d4ec4u: goto label_3d4ec4;
        case 0x3d4ec8u: goto label_3d4ec8;
        case 0x3d4eccu: goto label_3d4ecc;
        case 0x3d4ed0u: goto label_3d4ed0;
        case 0x3d4ed4u: goto label_3d4ed4;
        case 0x3d4ed8u: goto label_3d4ed8;
        case 0x3d4edcu: goto label_3d4edc;
        case 0x3d4ee0u: goto label_3d4ee0;
        case 0x3d4ee4u: goto label_3d4ee4;
        case 0x3d4ee8u: goto label_3d4ee8;
        case 0x3d4eecu: goto label_3d4eec;
        case 0x3d4ef0u: goto label_3d4ef0;
        case 0x3d4ef4u: goto label_3d4ef4;
        case 0x3d4ef8u: goto label_3d4ef8;
        case 0x3d4efcu: goto label_3d4efc;
        case 0x3d4f00u: goto label_3d4f00;
        case 0x3d4f04u: goto label_3d4f04;
        case 0x3d4f08u: goto label_3d4f08;
        case 0x3d4f0cu: goto label_3d4f0c;
        case 0x3d4f10u: goto label_3d4f10;
        case 0x3d4f14u: goto label_3d4f14;
        case 0x3d4f18u: goto label_3d4f18;
        case 0x3d4f1cu: goto label_3d4f1c;
        case 0x3d4f20u: goto label_3d4f20;
        case 0x3d4f24u: goto label_3d4f24;
        case 0x3d4f28u: goto label_3d4f28;
        case 0x3d4f2cu: goto label_3d4f2c;
        case 0x3d4f30u: goto label_3d4f30;
        case 0x3d4f34u: goto label_3d4f34;
        case 0x3d4f38u: goto label_3d4f38;
        case 0x3d4f3cu: goto label_3d4f3c;
        case 0x3d4f40u: goto label_3d4f40;
        case 0x3d4f44u: goto label_3d4f44;
        case 0x3d4f48u: goto label_3d4f48;
        case 0x3d4f4cu: goto label_3d4f4c;
        case 0x3d4f50u: goto label_3d4f50;
        case 0x3d4f54u: goto label_3d4f54;
        case 0x3d4f58u: goto label_3d4f58;
        case 0x3d4f5cu: goto label_3d4f5c;
        default: break;
    }

    ctx->pc = 0x3d4dd0u;

label_3d4dd0:
    // 0x3d4dd0: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3d4dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3d4dd4:
    // 0x3d4dd4: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x3d4dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
label_3d4dd8:
    // 0x3d4dd8: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x3d4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_3d4ddc:
    // 0x3d4ddc: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x3d4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
label_3d4de0:
    // 0x3d4de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d4de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4de4:
    // 0x3d4de4: 0xffbf0490  sd          $ra, 0x490($sp)
    ctx->pc = 0x3d4de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 31));
label_3d4de8:
    // 0x3d4de8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d4de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d4dec:
    // 0x3d4dec: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d4decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d4df0:
    // 0x3d4df0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d4df4:
    // 0x3d4df4: 0x40f809  jalr        $v0
label_3d4df8:
    if (ctx->pc == 0x3D4DF8u) {
        ctx->pc = 0x3D4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DF4u;
        // 0x3d4df8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4DFCu;
        goto label_3d4dfc;
    }
    ctx->pc = 0x3D4DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4DFCu);
        ctx->pc = 0x3D4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DF4u;
        // 0x3d4df8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4DF4u, 0x3D4DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4DFCu;
label_3d4dfc:
    // 0x3d4dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d4dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4e00:
    // 0x3d4e00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d4e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d4e04:
    // 0x3d4e04: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3d4e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3d4e08:
    // 0x3d4e08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d4e0c:
    // 0x3d4e0c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d4e10:
    // 0x3d4e10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d4e14:
    // 0x3d4e14: 0x0  nop
    ctx->pc = 0x3d4e14u;
    // NOP
label_3d4e18:
    // 0x3d4e18: 0x0  nop
    ctx->pc = 0x3d4e18u;
    // NOP
label_3d4e1c:
    // 0x3d4e1c: 0x0  nop
    ctx->pc = 0x3d4e1cu;
    // NOP
label_3d4e20:
    // 0x3d4e20: 0x0  nop
    ctx->pc = 0x3d4e20u;
    // NOP
label_3d4e24:
    // 0x3d4e24: 0x0  nop
    ctx->pc = 0x3d4e24u;
    // NOP
label_3d4e28:
    // 0x3d4e28: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d4e2c:
    if (ctx->pc == 0x3D4E2Cu) {
        ctx->pc = 0x3D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E28u;
        // 0x3d4e2c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4E30u;
        goto label_3d4e30;
    }
    ctx->pc = 0x3D4E28u;
    {
        const bool branch_taken_0x3d4e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E28u;
        // 0x3d4e2c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4e28) {
            ctx->pc = 0x3D4E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4e18;
        }
    }
    ctx->pc = 0x3D4E30u;
label_3d4e30:
    // 0x3d4e30: 0xc138ddc  jal         func_4E3770
label_3d4e34:
    if (ctx->pc == 0x3D4E34u) {
        ctx->pc = 0x3D4E38u;
        goto label_3d4e38;
    }
    ctx->pc = 0x3D4E30u;
    SET_GPR_U32(ctx, 31, 0x3D4E38u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D4E30u, 0x3D4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4E38u;
label_3d4e38:
    // 0x3d4e38: 0xc0e8fc0  jal         func_3A3F00
label_3d4e3c:
    if (ctx->pc == 0x3D4E3Cu) {
        ctx->pc = 0x3D4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E38u;
        // 0x3d4e3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4E40u;
        goto label_3d4e40;
    }
    ctx->pc = 0x3D4E38u;
    SET_GPR_U32(ctx, 31, 0x3D4E40u);
    ctx->pc = 0x3D4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4E38u;
    // 0x3d4e3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F00u, 0x3D4E38u, 0x3D4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4E40u;
label_3d4e40:
    // 0x3d4e40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d4e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4e44:
    // 0x3d4e44: 0xc0e90ca  jal         func_3A4328
label_3d4e48:
    if (ctx->pc == 0x3D4E48u) {
        ctx->pc = 0x3D4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E44u;
        // 0x3d4e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4E4Cu;
        goto label_3d4e4c;
    }
    ctx->pc = 0x3D4E44u;
    SET_GPR_U32(ctx, 31, 0x3D4E4Cu);
    ctx->pc = 0x3D4E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4E44u;
    // 0x3d4e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D4E44u, 0x3D4E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4E4Cu;
label_3d4e4c:
    // 0x3d4e4c: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3d4e4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d4e50:
    // 0x3d4e50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d4e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d4e54:
    // 0x3d4e54: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3d4e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3d4e58:
    // 0x3d4e58: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3d4e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d4e5c:
    // 0x3d4e5c: 0xc0e8fcc  jal         func_3A3F30
label_3d4e60:
    if (ctx->pc == 0x3D4E60u) {
        ctx->pc = 0x3D4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E5Cu;
        // 0x3d4e60: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4E64u;
        goto label_3d4e64;
    }
    ctx->pc = 0x3D4E5Cu;
    SET_GPR_U32(ctx, 31, 0x3D4E64u);
    ctx->pc = 0x3D4E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4E5Cu;
    // 0x3d4e60: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F30u, 0x3D4E5Cu, 0x3D4E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4E64u;
label_3d4e64:
    // 0x3d4e64: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3d4e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d4e68:
    // 0x3d4e68: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3d4e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d4e6c:
    // 0x3d4e6c: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3d4e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d4e70:
    // 0x3d4e70: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3d4e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d4e74:
    // 0x3d4e74: 0xc136afa  jal         func_4DABE8
label_3d4e78:
    if (ctx->pc == 0x3D4E78u) {
        ctx->pc = 0x3D4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E74u;
        // 0x3d4e78: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4E7Cu;
        goto label_3d4e7c;
    }
    ctx->pc = 0x3D4E74u;
    SET_GPR_U32(ctx, 31, 0x3D4E7Cu);
    ctx->pc = 0x3D4E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4E74u;
    // 0x3d4e78: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3D4E74u, 0x3D4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4E7Cu;
label_3d4e7c:
    // 0x3d4e7c: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3d4e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d4e80:
    // 0x3d4e80: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x3d4e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3d4e84:
    // 0x3d4e84: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d4e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d4e88:
    // 0x3d4e88: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3d4e88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d4e8c:
    // 0x3d4e8c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3d4e8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d4e90:
    // 0x3d4e90: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3d4e90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d4e94:
    // 0x3d4e94: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3d4e94u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3d4e98:
    // 0x3d4e98: 0x4a0003bf  vwaitq
    ctx->pc = 0x3d4e98u;
    // VWAITQ (Q already resolved in this runtime)
label_3d4e9c:
    // 0x3d4e9c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3d4e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3d4ea0:
    // 0x3d4ea0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3d4ea0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3d4ea4:
    // 0x3d4ea4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3d4ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3d4ea8:
    // 0x3d4ea8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d4ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d4eac:
    // 0x3d4eac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d4eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d4eb0:
    // 0x3d4eb0: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d4eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d4eb4:
    // 0x3d4eb4: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3d4eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d4eb8:
    // 0x3d4eb8: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3d4eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3d4ebc:
    // 0x3d4ebc: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x3d4ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_3d4ec0:
    // 0x3d4ec0: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3d4ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3d4ec4:
    // 0x3d4ec4: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3d4ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3d4ec8:
    // 0x3d4ec8: 0xc136b24  jal         func_4DAC90
label_3d4ecc:
    if (ctx->pc == 0x3D4ECCu) {
        ctx->pc = 0x3D4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4EC8u;
        // 0x3d4ecc: 0x7fa30440  sq          $v1, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4ED0u;
        goto label_3d4ed0;
    }
    ctx->pc = 0x3D4EC8u;
    SET_GPR_U32(ctx, 31, 0x3D4ED0u);
    ctx->pc = 0x3D4ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4EC8u;
    // 0x3d4ecc: 0x7fa30440  sq          $v1, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D4EC8u, 0x3D4ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4ED0u;
label_3d4ed0:
    // 0x3d4ed0: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3d4ed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d4ed4:
    // 0x3d4ed4: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x3d4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3d4ed8:
    // 0x3d4ed8: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3d4ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d4edc:
    // 0x3d4edc: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d4edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d4ee0:
    // 0x3d4ee0: 0xc136afa  jal         func_4DABE8
label_3d4ee4:
    if (ctx->pc == 0x3D4EE4u) {
        ctx->pc = 0x3D4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4EE0u;
        // 0x3d4ee4: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4EE8u;
        goto label_3d4ee8;
    }
    ctx->pc = 0x3D4EE0u;
    SET_GPR_U32(ctx, 31, 0x3D4EE8u);
    ctx->pc = 0x3D4EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4EE0u;
    // 0x3d4ee4: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3D4EE0u, 0x3D4EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4EE8u;
label_3d4ee8:
    // 0x3d4ee8: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3d4ee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d4eec:
    // 0x3d4eec: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x3d4eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_3d4ef0:
    // 0x3d4ef0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3d4ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3d4ef4:
    // 0x3d4ef4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d4ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d4ef8:
    // 0x3d4ef8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d4ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d4efc:
    // 0x3d4efc: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d4efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d4f00:
    // 0x3d4f00: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3d4f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d4f04:
    // 0x3d4f04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d4f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d4f08:
    // 0x3d4f08: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3d4f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d4f0c:
    // 0x3d4f0c: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3d4f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3d4f10:
    // 0x3d4f10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d4f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d4f14:
    // 0x3d4f14: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x3d4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_3d4f18:
    // 0x3d4f18: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3d4f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3d4f1c:
    // 0x3d4f1c: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3d4f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3d4f20:
    // 0x3d4f20: 0x922200b0  lbu         $v0, 0xB0($s1)
    ctx->pc = 0x3d4f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 176)));
label_3d4f24:
    // 0x3d4f24: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3d4f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3d4f28:
    // 0x3d4f28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3d4f2c:
    if (ctx->pc == 0x3D4F2Cu) {
        ctx->pc = 0x3D4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F28u;
        // 0x3d4f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F30u;
        goto label_3d4f30;
    }
    ctx->pc = 0x3D4F28u;
    {
        const bool branch_taken_0x3d4f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F28u;
        // 0x3d4f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4f28) {
            ctx->pc = 0x3D4F48u;
            goto label_3d4f48;
        }
    }
    ctx->pc = 0x3D4F30u;
label_3d4f30:
    // 0x3d4f30: 0x9623006e  lhu         $v1, 0x6E($s1)
    ctx->pc = 0x3d4f30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
label_3d4f34:
    // 0x3d4f34: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3d4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3d4f38:
    // 0x3d4f38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d4f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d4f3c:
    // 0x3d4f3c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3d4f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3d4f40:
    // 0x3d4f40: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3d4f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3d4f44:
    // 0x3d4f44: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3d4f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3d4f48:
    // 0x3d4f48: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x3d4f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d4f4c:
    // 0x3d4f4c: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x3d4f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d4f50:
    // 0x3d4f50: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x3d4f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d4f54:
    // 0x3d4f54: 0xdfbf0490  ld          $ra, 0x490($sp)
    ctx->pc = 0x3d4f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d4f58:
    // 0x3d4f58: 0x3e00008  jr          $ra
label_3d4f5c:
    if (ctx->pc == 0x3D4F5Cu) {
        ctx->pc = 0x3D4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F58u;
        // 0x3d4f5c: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F60u;
        goto label_fallthrough_0x3d4f58;
    }
    ctx->pc = 0x3D4F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F58u;
        // 0x3d4f5c: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d4f58:
    ctx->pc = 0x3D4F60u;
}
