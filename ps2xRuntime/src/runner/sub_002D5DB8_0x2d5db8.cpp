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

// Function: sub_002D5DB8
// Address: 0x2d5db8 - 0x2d5f78
void sub_002D5DB8_0x2d5db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5DB8_0x2d5db8");
#endif

    switch (ctx->pc) {
        case 0x2d5db8u: goto label_2d5db8;
        case 0x2d5dbcu: goto label_2d5dbc;
        case 0x2d5dc0u: goto label_2d5dc0;
        case 0x2d5dc4u: goto label_2d5dc4;
        case 0x2d5dc8u: goto label_2d5dc8;
        case 0x2d5dccu: goto label_2d5dcc;
        case 0x2d5dd0u: goto label_2d5dd0;
        case 0x2d5dd4u: goto label_2d5dd4;
        case 0x2d5dd8u: goto label_2d5dd8;
        case 0x2d5ddcu: goto label_2d5ddc;
        case 0x2d5de0u: goto label_2d5de0;
        case 0x2d5de4u: goto label_2d5de4;
        case 0x2d5de8u: goto label_2d5de8;
        case 0x2d5decu: goto label_2d5dec;
        case 0x2d5df0u: goto label_2d5df0;
        case 0x2d5df4u: goto label_2d5df4;
        case 0x2d5df8u: goto label_2d5df8;
        case 0x2d5dfcu: goto label_2d5dfc;
        case 0x2d5e00u: goto label_2d5e00;
        case 0x2d5e04u: goto label_2d5e04;
        case 0x2d5e08u: goto label_2d5e08;
        case 0x2d5e0cu: goto label_2d5e0c;
        case 0x2d5e10u: goto label_2d5e10;
        case 0x2d5e14u: goto label_2d5e14;
        case 0x2d5e18u: goto label_2d5e18;
        case 0x2d5e1cu: goto label_2d5e1c;
        case 0x2d5e20u: goto label_2d5e20;
        case 0x2d5e24u: goto label_2d5e24;
        case 0x2d5e28u: goto label_2d5e28;
        case 0x2d5e2cu: goto label_2d5e2c;
        case 0x2d5e30u: goto label_2d5e30;
        case 0x2d5e34u: goto label_2d5e34;
        case 0x2d5e38u: goto label_2d5e38;
        case 0x2d5e3cu: goto label_2d5e3c;
        case 0x2d5e40u: goto label_2d5e40;
        case 0x2d5e44u: goto label_2d5e44;
        case 0x2d5e48u: goto label_2d5e48;
        case 0x2d5e4cu: goto label_2d5e4c;
        case 0x2d5e50u: goto label_2d5e50;
        case 0x2d5e54u: goto label_2d5e54;
        case 0x2d5e58u: goto label_2d5e58;
        case 0x2d5e5cu: goto label_2d5e5c;
        case 0x2d5e60u: goto label_2d5e60;
        case 0x2d5e64u: goto label_2d5e64;
        case 0x2d5e68u: goto label_2d5e68;
        case 0x2d5e6cu: goto label_2d5e6c;
        case 0x2d5e70u: goto label_2d5e70;
        case 0x2d5e74u: goto label_2d5e74;
        case 0x2d5e78u: goto label_2d5e78;
        case 0x2d5e7cu: goto label_2d5e7c;
        case 0x2d5e80u: goto label_2d5e80;
        case 0x2d5e84u: goto label_2d5e84;
        case 0x2d5e88u: goto label_2d5e88;
        case 0x2d5e8cu: goto label_2d5e8c;
        case 0x2d5e90u: goto label_2d5e90;
        case 0x2d5e94u: goto label_2d5e94;
        case 0x2d5e98u: goto label_2d5e98;
        case 0x2d5e9cu: goto label_2d5e9c;
        case 0x2d5ea0u: goto label_2d5ea0;
        case 0x2d5ea4u: goto label_2d5ea4;
        case 0x2d5ea8u: goto label_2d5ea8;
        case 0x2d5eacu: goto label_2d5eac;
        case 0x2d5eb0u: goto label_2d5eb0;
        case 0x2d5eb4u: goto label_2d5eb4;
        case 0x2d5eb8u: goto label_2d5eb8;
        case 0x2d5ebcu: goto label_2d5ebc;
        case 0x2d5ec0u: goto label_2d5ec0;
        case 0x2d5ec4u: goto label_2d5ec4;
        case 0x2d5ec8u: goto label_2d5ec8;
        case 0x2d5eccu: goto label_2d5ecc;
        case 0x2d5ed0u: goto label_2d5ed0;
        case 0x2d5ed4u: goto label_2d5ed4;
        case 0x2d5ed8u: goto label_2d5ed8;
        case 0x2d5edcu: goto label_2d5edc;
        case 0x2d5ee0u: goto label_2d5ee0;
        case 0x2d5ee4u: goto label_2d5ee4;
        case 0x2d5ee8u: goto label_2d5ee8;
        case 0x2d5eecu: goto label_2d5eec;
        case 0x2d5ef0u: goto label_2d5ef0;
        case 0x2d5ef4u: goto label_2d5ef4;
        case 0x2d5ef8u: goto label_2d5ef8;
        case 0x2d5efcu: goto label_2d5efc;
        case 0x2d5f00u: goto label_2d5f00;
        case 0x2d5f04u: goto label_2d5f04;
        case 0x2d5f08u: goto label_2d5f08;
        case 0x2d5f0cu: goto label_2d5f0c;
        case 0x2d5f10u: goto label_2d5f10;
        case 0x2d5f14u: goto label_2d5f14;
        case 0x2d5f18u: goto label_2d5f18;
        case 0x2d5f1cu: goto label_2d5f1c;
        case 0x2d5f20u: goto label_2d5f20;
        case 0x2d5f24u: goto label_2d5f24;
        case 0x2d5f28u: goto label_2d5f28;
        case 0x2d5f2cu: goto label_2d5f2c;
        case 0x2d5f30u: goto label_2d5f30;
        case 0x2d5f34u: goto label_2d5f34;
        case 0x2d5f38u: goto label_2d5f38;
        case 0x2d5f3cu: goto label_2d5f3c;
        case 0x2d5f40u: goto label_2d5f40;
        case 0x2d5f44u: goto label_2d5f44;
        case 0x2d5f48u: goto label_2d5f48;
        case 0x2d5f4cu: goto label_2d5f4c;
        case 0x2d5f50u: goto label_2d5f50;
        case 0x2d5f54u: goto label_2d5f54;
        case 0x2d5f58u: goto label_2d5f58;
        case 0x2d5f5cu: goto label_2d5f5c;
        case 0x2d5f60u: goto label_2d5f60;
        case 0x2d5f64u: goto label_2d5f64;
        case 0x2d5f68u: goto label_2d5f68;
        case 0x2d5f6cu: goto label_2d5f6c;
        case 0x2d5f70u: goto label_2d5f70;
        case 0x2d5f74u: goto label_2d5f74;
        default: break;
    }

    ctx->pc = 0x2d5db8u;

label_2d5db8:
    // 0x2d5db8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d5db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2d5dbc:
    // 0x2d5dbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d5dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2d5dc0:
    // 0x2d5dc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d5dc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5dc4:
    // 0x2d5dc4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d5dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2d5dc8:
    // 0x2d5dc8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d5dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2d5dcc:
    // 0x2d5dcc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d5dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2d5dd0:
    // 0x2d5dd0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d5dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2d5dd4:
    // 0x2d5dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d5dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d5dd8:
    // 0x2d5dd8: 0xc0b584c  jal         func_2D6130
label_2d5ddc:
    if (ctx->pc == 0x2D5DDCu) {
        ctx->pc = 0x2D5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DD8u;
        // 0x2d5ddc: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DE0u;
        goto label_2d5de0;
    }
    ctx->pc = 0x2D5DD8u;
    SET_GPR_U32(ctx, 31, 0x2D5DE0u);
    ctx->pc = 0x2D5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5DD8u;
    // 0x2d5ddc: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6130u, 0x2D5DD8u, 0x2D5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5DE0u;
label_2d5de0:
    // 0x2d5de0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d5de4:
    // 0x2d5de4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2d5de4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5de8:
    // 0x2d5de8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2d5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2d5dec:
    // 0x2d5dec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d5decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d5df0:
    // 0x2d5df0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d5df4:
    // 0x2d5df4: 0x40f809  jalr        $v0
label_2d5df8:
    if (ctx->pc == 0x2D5DF8u) {
        ctx->pc = 0x2D5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DF4u;
        // 0x2d5df8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DFCu;
        goto label_2d5dfc;
    }
    ctx->pc = 0x2D5DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5DFCu);
        ctx->pc = 0x2D5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DF4u;
        // 0x2d5df8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5DF4u, 0x2D5DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5DFCu;
label_2d5dfc:
    // 0x2d5dfc: 0xde8300e0  ld          $v1, 0xE0($s4)
    ctx->pc = 0x2d5dfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 224)));
label_2d5e00:
    // 0x2d5e00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d5e04:
    // 0x2d5e04: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2d5e04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_2d5e08:
    // 0x2d5e08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d5e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e0c:
    // 0x2d5e0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d5e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2d5e10:
    // 0x2d5e10: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x2d5e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_2d5e14:
    // 0x2d5e14: 0xa292019e  sb          $s2, 0x19E($s4)
    ctx->pc = 0x2d5e14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 414), (uint8_t)GPR_U32(ctx, 18));
label_2d5e18:
    // 0x2d5e18: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2d5e18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2d5e1c:
    // 0x2d5e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e20:
    // 0x2d5e20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d5e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e24:
    // 0x2d5e24: 0xfe8300e0  sd          $v1, 0xE0($s4)
    ctx->pc = 0x2d5e24u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 224), GPR_U64(ctx, 3));
label_2d5e28:
    // 0x2d5e28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d5e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e2c:
    // 0x2d5e2c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2d5e2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2d5e30:
    // 0x2d5e30: 0xc06ca64  jal         func_1B2990
label_2d5e34:
    if (ctx->pc == 0x2D5E34u) {
        ctx->pc = 0x2D5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E30u;
        // 0x2d5e34: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E38u;
        goto label_2d5e38;
    }
    ctx->pc = 0x2D5E30u;
    SET_GPR_U32(ctx, 31, 0x2D5E38u);
    ctx->pc = 0x2D5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E30u;
    // 0x2d5e34: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x2D5E30u, 0x2D5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E38u;
label_2d5e38:
    // 0x2d5e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e3c:
    // 0x2d5e3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d5e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e40:
    // 0x2d5e40: 0xc06ccb8  jal         func_1B32E0
label_2d5e44:
    if (ctx->pc == 0x2D5E44u) {
        ctx->pc = 0x2D5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E40u;
        // 0x2d5e44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E48u;
        goto label_2d5e48;
    }
    ctx->pc = 0x2D5E40u;
    SET_GPR_U32(ctx, 31, 0x2D5E48u);
    ctx->pc = 0x2D5E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E40u;
    // 0x2d5e44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x2D5E40u, 0x2D5E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E48u;
label_2d5e48:
    // 0x2d5e48: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2d5e48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d5e4c:
    // 0x2d5e4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d5e50:
    // 0x2d5e50: 0x5452003a  bnel        $v0, $s2, . + 4 + (0x3A << 2)
label_2d5e54:
    if (ctx->pc == 0x2D5E54u) {
        ctx->pc = 0x2D5E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E50u;
        // 0x2d5e54: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E58u;
        goto label_2d5e58;
    }
    ctx->pc = 0x2D5E50u;
    {
        const bool branch_taken_0x2d5e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d5e50) {
            ctx->pc = 0x2D5E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5E50u;
            // 0x2d5e54: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5F3Cu;
            goto label_2d5f3c;
        }
    }
    ctx->pc = 0x2D5E58u;
label_2d5e58:
    // 0x2d5e58: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x2d5e58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_2d5e5c:
    // 0x2d5e5c: 0x5c40001e  bgtzl       $v0, . + 4 + (0x1E << 2)
label_2d5e60:
    if (ctx->pc == 0x2D5E60u) {
        ctx->pc = 0x2D5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E5Cu;
        // 0x2d5e60: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E64u;
        goto label_2d5e64;
    }
    ctx->pc = 0x2D5E5Cu;
    {
        const bool branch_taken_0x2d5e5c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2d5e5c) {
            ctx->pc = 0x2D5E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5E5Cu;
            // 0x2d5e60: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5ED8u;
            goto label_2d5ed8;
        }
    }
    ctx->pc = 0x2D5E64u;
label_2d5e64:
    // 0x2d5e64: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2d5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2d5e68:
    // 0x2d5e68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d5e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e6c:
    // 0x2d5e6c: 0xc0e409a  jal         func_390268
label_2d5e70:
    if (ctx->pc == 0x2D5E70u) {
        ctx->pc = 0x2D5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E6Cu;
        // 0x2d5e70: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E74u;
        goto label_2d5e74;
    }
    ctx->pc = 0x2D5E6Cu;
    SET_GPR_U32(ctx, 31, 0x2D5E74u);
    ctx->pc = 0x2D5E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E6Cu;
    // 0x2d5e70: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D5E6Cu, 0x2D5E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E74u;
label_2d5e74:
    // 0x2d5e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e78:
    // 0x2d5e78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d5e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e7c:
    // 0x2d5e7c: 0xc0a352c  jal         func_28D4B0
label_2d5e80:
    if (ctx->pc == 0x2D5E80u) {
        ctx->pc = 0x2D5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E7Cu;
        // 0x2d5e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E84u;
        goto label_2d5e84;
    }
    ctx->pc = 0x2D5E7Cu;
    SET_GPR_U32(ctx, 31, 0x2D5E84u);
    ctx->pc = 0x2D5E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E7Cu;
    // 0x2d5e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D5E7Cu, 0x2D5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E84u;
label_2d5e84:
    // 0x2d5e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e88:
    // 0x2d5e88: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_2d5e8c:
    if (ctx->pc == 0x2D5E8Cu) {
        ctx->pc = 0x2D5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E88u;
        // 0x2d5e8c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E90u;
        goto label_2d5e90;
    }
    ctx->pc = 0x2D5E88u;
    {
        const bool branch_taken_0x2d5e88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5e88) {
            ctx->pc = 0x2D5E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5E88u;
            // 0x2d5e8c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5ED8u;
            goto label_2d5ed8;
        }
    }
    ctx->pc = 0x2D5E90u;
label_2d5e90:
    // 0x2d5e90: 0xc0a367c  jal         func_28D9F0
label_2d5e94:
    if (ctx->pc == 0x2D5E94u) {
        ctx->pc = 0x2D5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E90u;
        // 0x2d5e94: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E98u;
        goto label_2d5e98;
    }
    ctx->pc = 0x2D5E90u;
    SET_GPR_U32(ctx, 31, 0x2D5E98u);
    ctx->pc = 0x2D5E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E90u;
    // 0x2d5e94: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D5E90u, 0x2D5E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E98u;
label_2d5e98:
    // 0x2d5e98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d5e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e9c:
    // 0x2d5e9c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2d5ea0:
    if (ctx->pc == 0x2D5EA0u) {
        ctx->pc = 0x2D5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E9Cu;
        // 0x2d5ea0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EA4u;
        goto label_2d5ea4;
    }
    ctx->pc = 0x2D5E9Cu;
    {
        const bool branch_taken_0x2d5e9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E9Cu;
        // 0x2d5ea0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5e9c) {
            ctx->pc = 0x2D5ED4u;
            goto label_2d5ed4;
        }
    }
    ctx->pc = 0x2D5EA4u;
label_2d5ea4:
    // 0x2d5ea4: 0x86100092  lh          $s0, 0x92($s0)
    ctx->pc = 0x2d5ea4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2d5ea8:
    // 0x2d5ea8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2d5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2d5eac:
    // 0x2d5eac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d5eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d5eb0:
    // 0x2d5eb0: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2d5eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2d5eb4:
    // 0x2d5eb4: 0xc0884f6  jal         func_2213D8
label_2d5eb8:
    if (ctx->pc == 0x2D5EB8u) {
        ctx->pc = 0x2D5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EB4u;
        // 0x2d5eb8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EBCu;
        goto label_2d5ebc;
    }
    ctx->pc = 0x2D5EB4u;
    SET_GPR_U32(ctx, 31, 0x2D5EBCu);
    ctx->pc = 0x2D5EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5EB4u;
    // 0x2d5eb8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D5EB4u, 0x2D5EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5EBCu;
label_2d5ebc:
    // 0x2d5ebc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2d5ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d5ec0:
    // 0x2d5ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d5ec4:
    // 0x2d5ec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d5ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d5ec8:
    // 0x2d5ec8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d5ec8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2d5ecc:
    // 0x2d5ecc: 0xc0bf800  jal         func_2FE000
label_2d5ed0:
    if (ctx->pc == 0x2D5ED0u) {
        ctx->pc = 0x2D5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5ECCu;
        // 0x2d5ed0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5ED4u;
        goto label_2d5ed4;
    }
    ctx->pc = 0x2D5ECCu;
    SET_GPR_U32(ctx, 31, 0x2D5ED4u);
    ctx->pc = 0x2D5ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5ECCu;
    // 0x2d5ed0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2D5ECCu, 0x2D5ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5ED4u;
label_2d5ed4:
    // 0x2d5ed4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2d5ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2d5ed8:
    // 0x2d5ed8: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2d5ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2d5edc:
    // 0x2d5edc: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x2d5edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_2d5ee0:
    // 0x2d5ee0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2d5ee4:
    if (ctx->pc == 0x2D5EE4u) {
        ctx->pc = 0x2D5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EE0u;
        // 0x2d5ee4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EE8u;
        goto label_2d5ee8;
    }
    ctx->pc = 0x2D5EE0u;
    {
        const bool branch_taken_0x2d5ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EE0u;
        // 0x2d5ee4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ee0) {
            ctx->pc = 0x2D5EF4u;
            goto label_2d5ef4;
        }
    }
    ctx->pc = 0x2D5EE8u;
label_2d5ee8:
    // 0x2d5ee8: 0xc107444  jal         func_41D110
label_2d5eec:
    if (ctx->pc == 0x2D5EECu) {
        ctx->pc = 0x2D5EF0u;
        goto label_2d5ef0;
    }
    ctx->pc = 0x2D5EE8u;
    SET_GPR_U32(ctx, 31, 0x2D5EF0u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x2D5EE8u, 0x2D5EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5EF0u;
label_2d5ef0:
    // 0x2d5ef0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2d5ef0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2d5ef4:
    // 0x2d5ef4: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_2d5ef8:
    if (ctx->pc == 0x2D5EF8u) {
        ctx->pc = 0x2D5EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EF4u;
        // 0x2d5ef8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EFCu;
        goto label_2d5efc;
    }
    ctx->pc = 0x2D5EF4u;
    {
        const bool branch_taken_0x2d5ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5ef4) {
            ctx->pc = 0x2D5EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5EF4u;
            // 0x2d5ef8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5F3Cu;
            goto label_2d5f3c;
        }
    }
    ctx->pc = 0x2D5EFCu;
label_2d5efc:
    // 0x2d5efc: 0xc073a8e  jal         func_1CEA38
label_2d5f00:
    if (ctx->pc == 0x2D5F00u) {
        ctx->pc = 0x2D5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EFCu;
        // 0x2d5f00: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F04u;
        goto label_2d5f04;
    }
    ctx->pc = 0x2D5EFCu;
    SET_GPR_U32(ctx, 31, 0x2D5F04u);
    ctx->pc = 0x2D5F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5EFCu;
    // 0x2d5f00: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x2D5EFCu, 0x2D5F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F04u;
label_2d5f04:
    // 0x2d5f04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2d5f08:
    if (ctx->pc == 0x2D5F08u) {
        ctx->pc = 0x2D5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F04u;
        // 0x2d5f08: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F0Cu;
        goto label_2d5f0c;
    }
    ctx->pc = 0x2D5F04u;
    {
        const bool branch_taken_0x2d5f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F04u;
        // 0x2d5f08: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f04) {
            ctx->pc = 0x2D5F38u;
            goto label_2d5f38;
        }
    }
    ctx->pc = 0x2D5F0Cu;
label_2d5f0c:
    // 0x2d5f0c: 0x8e05489c  lw          $a1, 0x489C($s0)
    ctx->pc = 0x2d5f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2d5f10:
    // 0x2d5f10: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2d5f10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2d5f14:
    // 0x2d5f14: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2d5f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2d5f18:
    // 0x2d5f18: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2d5f1c:
    if (ctx->pc == 0x2D5F1Cu) {
        ctx->pc = 0x2D5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F18u;
        // 0x2d5f1c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F20u;
        goto label_2d5f20;
    }
    ctx->pc = 0x2D5F18u;
    {
        const bool branch_taken_0x2d5f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f18) {
            ctx->pc = 0x2D5F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5F18u;
            // 0x2d5f1c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5F3Cu;
            goto label_2d5f3c;
        }
    }
    ctx->pc = 0x2D5F20u;
label_2d5f20:
    // 0x2d5f20: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2d5f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2d5f24:
    // 0x2d5f24: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2d5f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_2d5f28:
    // 0x2d5f28: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2d5f28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_2d5f2c:
    // 0x2d5f2c: 0x24849250  addiu       $a0, $a0, -0x6DB0
    ctx->pc = 0x2d5f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
label_2d5f30:
    // 0x2d5f30: 0xc07387a  jal         func_1CE1E8
label_2d5f34:
    if (ctx->pc == 0x2D5F34u) {
        ctx->pc = 0x2D5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F30u;
        // 0x2d5f34: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F38u;
        goto label_2d5f38;
    }
    ctx->pc = 0x2D5F30u;
    SET_GPR_U32(ctx, 31, 0x2D5F38u);
    ctx->pc = 0x2D5F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5F30u;
    // 0x2d5f34: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x2D5F30u, 0x2D5F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F38u;
label_2d5f38:
    // 0x2d5f38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d5f3c:
    // 0x2d5f3c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2d5f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2d5f40:
    // 0x2d5f40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d5f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2d5f44:
    // 0x2d5f44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d5f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d5f48:
    // 0x2d5f48: 0xc440012c  lwc1        $f0, 0x12C($v0)
    ctx->pc = 0x2d5f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5f4c:
    // 0x2d5f4c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d5f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d5f50:
    // 0x2d5f50: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x2d5f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_2d5f54:
    // 0x2d5f54: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d5f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d5f58:
    // 0x2d5f58: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d5f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d5f5c:
    // 0x2d5f5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d5f5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d5f60:
    // 0x2d5f60: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d5f60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d5f64:
    // 0x2d5f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d5f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5f68:
    // 0x2d5f68: 0xe441012c  swc1        $f1, 0x12C($v0)
    ctx->pc = 0x2d5f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
label_2d5f6c:
    // 0x2d5f6c: 0x3e00008  jr          $ra
label_2d5f70:
    if (ctx->pc == 0x2D5F70u) {
        ctx->pc = 0x2D5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F6Cu;
        // 0x2d5f70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F74u;
        goto label_2d5f74;
    }
    ctx->pc = 0x2D5F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F6Cu;
        // 0x2d5f70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5F74u;
label_2d5f74:
    // 0x2d5f74: 0x0  nop
    ctx->pc = 0x2d5f74u;
    // NOP
    ctx->pc = 0x2d5f78u;
}
