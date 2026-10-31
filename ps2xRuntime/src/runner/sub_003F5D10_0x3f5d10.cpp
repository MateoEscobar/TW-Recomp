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

// Function: sub_003F5D10
// Address: 0x3f5d10 - 0x3f5ec0
void sub_003F5D10_0x3f5d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5D10_0x3f5d10");
#endif

    switch (ctx->pc) {
        case 0x3f5d10u: goto label_3f5d10;
        case 0x3f5d14u: goto label_3f5d14;
        case 0x3f5d18u: goto label_3f5d18;
        case 0x3f5d1cu: goto label_3f5d1c;
        case 0x3f5d20u: goto label_3f5d20;
        case 0x3f5d24u: goto label_3f5d24;
        case 0x3f5d28u: goto label_3f5d28;
        case 0x3f5d2cu: goto label_3f5d2c;
        case 0x3f5d30u: goto label_3f5d30;
        case 0x3f5d34u: goto label_3f5d34;
        case 0x3f5d38u: goto label_3f5d38;
        case 0x3f5d3cu: goto label_3f5d3c;
        case 0x3f5d40u: goto label_3f5d40;
        case 0x3f5d44u: goto label_3f5d44;
        case 0x3f5d48u: goto label_3f5d48;
        case 0x3f5d4cu: goto label_3f5d4c;
        case 0x3f5d50u: goto label_3f5d50;
        case 0x3f5d54u: goto label_3f5d54;
        case 0x3f5d58u: goto label_3f5d58;
        case 0x3f5d5cu: goto label_3f5d5c;
        case 0x3f5d60u: goto label_3f5d60;
        case 0x3f5d64u: goto label_3f5d64;
        case 0x3f5d68u: goto label_3f5d68;
        case 0x3f5d6cu: goto label_3f5d6c;
        case 0x3f5d70u: goto label_3f5d70;
        case 0x3f5d74u: goto label_3f5d74;
        case 0x3f5d78u: goto label_3f5d78;
        case 0x3f5d7cu: goto label_3f5d7c;
        case 0x3f5d80u: goto label_3f5d80;
        case 0x3f5d84u: goto label_3f5d84;
        case 0x3f5d88u: goto label_3f5d88;
        case 0x3f5d8cu: goto label_3f5d8c;
        case 0x3f5d90u: goto label_3f5d90;
        case 0x3f5d94u: goto label_3f5d94;
        case 0x3f5d98u: goto label_3f5d98;
        case 0x3f5d9cu: goto label_3f5d9c;
        case 0x3f5da0u: goto label_3f5da0;
        case 0x3f5da4u: goto label_3f5da4;
        case 0x3f5da8u: goto label_3f5da8;
        case 0x3f5dacu: goto label_3f5dac;
        case 0x3f5db0u: goto label_3f5db0;
        case 0x3f5db4u: goto label_3f5db4;
        case 0x3f5db8u: goto label_3f5db8;
        case 0x3f5dbcu: goto label_3f5dbc;
        case 0x3f5dc0u: goto label_3f5dc0;
        case 0x3f5dc4u: goto label_3f5dc4;
        case 0x3f5dc8u: goto label_3f5dc8;
        case 0x3f5dccu: goto label_3f5dcc;
        case 0x3f5dd0u: goto label_3f5dd0;
        case 0x3f5dd4u: goto label_3f5dd4;
        case 0x3f5dd8u: goto label_3f5dd8;
        case 0x3f5ddcu: goto label_3f5ddc;
        case 0x3f5de0u: goto label_3f5de0;
        case 0x3f5de4u: goto label_3f5de4;
        case 0x3f5de8u: goto label_3f5de8;
        case 0x3f5decu: goto label_3f5dec;
        case 0x3f5df0u: goto label_3f5df0;
        case 0x3f5df4u: goto label_3f5df4;
        case 0x3f5df8u: goto label_3f5df8;
        case 0x3f5dfcu: goto label_3f5dfc;
        case 0x3f5e00u: goto label_3f5e00;
        case 0x3f5e04u: goto label_3f5e04;
        case 0x3f5e08u: goto label_3f5e08;
        case 0x3f5e0cu: goto label_3f5e0c;
        case 0x3f5e10u: goto label_3f5e10;
        case 0x3f5e14u: goto label_3f5e14;
        case 0x3f5e18u: goto label_3f5e18;
        case 0x3f5e1cu: goto label_3f5e1c;
        case 0x3f5e20u: goto label_3f5e20;
        case 0x3f5e24u: goto label_3f5e24;
        case 0x3f5e28u: goto label_3f5e28;
        case 0x3f5e2cu: goto label_3f5e2c;
        case 0x3f5e30u: goto label_3f5e30;
        case 0x3f5e34u: goto label_3f5e34;
        case 0x3f5e38u: goto label_3f5e38;
        case 0x3f5e3cu: goto label_3f5e3c;
        case 0x3f5e40u: goto label_3f5e40;
        case 0x3f5e44u: goto label_3f5e44;
        case 0x3f5e48u: goto label_3f5e48;
        case 0x3f5e4cu: goto label_3f5e4c;
        case 0x3f5e50u: goto label_3f5e50;
        case 0x3f5e54u: goto label_3f5e54;
        case 0x3f5e58u: goto label_3f5e58;
        case 0x3f5e5cu: goto label_3f5e5c;
        case 0x3f5e60u: goto label_3f5e60;
        case 0x3f5e64u: goto label_3f5e64;
        case 0x3f5e68u: goto label_3f5e68;
        case 0x3f5e6cu: goto label_3f5e6c;
        case 0x3f5e70u: goto label_3f5e70;
        case 0x3f5e74u: goto label_3f5e74;
        case 0x3f5e78u: goto label_3f5e78;
        case 0x3f5e7cu: goto label_3f5e7c;
        case 0x3f5e80u: goto label_3f5e80;
        case 0x3f5e84u: goto label_3f5e84;
        case 0x3f5e88u: goto label_3f5e88;
        case 0x3f5e8cu: goto label_3f5e8c;
        case 0x3f5e90u: goto label_3f5e90;
        case 0x3f5e94u: goto label_3f5e94;
        case 0x3f5e98u: goto label_3f5e98;
        case 0x3f5e9cu: goto label_3f5e9c;
        case 0x3f5ea0u: goto label_3f5ea0;
        case 0x3f5ea4u: goto label_3f5ea4;
        case 0x3f5ea8u: goto label_3f5ea8;
        case 0x3f5eacu: goto label_3f5eac;
        case 0x3f5eb0u: goto label_3f5eb0;
        case 0x3f5eb4u: goto label_3f5eb4;
        case 0x3f5eb8u: goto label_3f5eb8;
        case 0x3f5ebcu: goto label_3f5ebc;
        default: break;
    }

    ctx->pc = 0x3f5d10u;

label_3f5d10:
    // 0x3f5d10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f5d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3f5d14:
    // 0x3f5d14: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3f5d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3f5d18:
    // 0x3f5d18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3f5d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3f5d1c:
    // 0x3f5d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f5d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d20:
    // 0x3f5d20: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3f5d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3f5d24:
    // 0x3f5d24: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3f5d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3f5d28:
    // 0x3f5d28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f5d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d2c:
    // 0x3f5d2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f5d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f5d30:
    // 0x3f5d30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f5d34:
    // 0x3f5d34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f5d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5d38:
    // 0x3f5d38: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f5d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f5d3c:
    // 0x3f5d3c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f5d40:
    // 0x3f5d40: 0x40f809  jalr        $v0
label_3f5d44:
    if (ctx->pc == 0x3F5D44u) {
        ctx->pc = 0x3F5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D40u;
        // 0x3f5d44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5D48u;
        goto label_3f5d48;
    }
    ctx->pc = 0x3F5D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F5D48u);
        ctx->pc = 0x3F5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D40u;
        // 0x3f5d44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5D40u, 0x3F5D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5D48u;
label_3f5d48:
    // 0x3f5d48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f5d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d4c:
    // 0x3f5d4c: 0xc0ea146  jal         func_3A8518
label_3f5d50:
    if (ctx->pc == 0x3F5D50u) {
        ctx->pc = 0x3F5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D4Cu;
        // 0x3f5d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5D54u;
        goto label_3f5d54;
    }
    ctx->pc = 0x3F5D4Cu;
    SET_GPR_U32(ctx, 31, 0x3F5D54u);
    ctx->pc = 0x3F5D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D4Cu;
    // 0x3f5d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F5D4Cu, 0x3F5D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D54u;
label_3f5d54:
    // 0x3f5d54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d58:
    // 0x3f5d58: 0xc0ea146  jal         func_3A8518
label_3f5d5c:
    if (ctx->pc == 0x3F5D5Cu) {
        ctx->pc = 0x3F5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D58u;
        // 0x3f5d5c: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5D60u;
        goto label_3f5d60;
    }
    ctx->pc = 0x3F5D58u;
    SET_GPR_U32(ctx, 31, 0x3F5D60u);
    ctx->pc = 0x3F5D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D58u;
    // 0x3f5d5c: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F5D58u, 0x3F5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D60u;
label_3f5d60:
    // 0x3f5d60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3f5d60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d64:
    // 0x3f5d64: 0xc0ea146  jal         func_3A8518
label_3f5d68:
    if (ctx->pc == 0x3F5D68u) {
        ctx->pc = 0x3F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D64u;
        // 0x3f5d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5D6Cu;
        goto label_3f5d6c;
    }
    ctx->pc = 0x3F5D64u;
    SET_GPR_U32(ctx, 31, 0x3F5D6Cu);
    ctx->pc = 0x3F5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D64u;
    // 0x3f5d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F5D64u, 0x3F5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D6Cu;
label_3f5d6c:
    // 0x3f5d6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f5d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d70:
    // 0x3f5d70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f5d70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d74:
    // 0x3f5d74: 0xc0ea12a  jal         func_3A84A8
label_3f5d78:
    if (ctx->pc == 0x3F5D78u) {
        ctx->pc = 0x3F5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D74u;
        // 0x3f5d78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5D7Cu;
        goto label_3f5d7c;
    }
    ctx->pc = 0x3F5D74u;
    SET_GPR_U32(ctx, 31, 0x3F5D7Cu);
    ctx->pc = 0x3F5D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D74u;
    // 0x3f5d78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F5D74u, 0x3F5D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D7Cu;
label_3f5d7c:
    // 0x3f5d7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f5d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f5d80:
    // 0x3f5d80: 0xc0ea12a  jal         func_3A84A8
label_3f5d84:
    if (ctx->pc == 0x3F5D84u) {
        ctx->pc = 0x3F5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D80u;
        // 0x3f5d84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5D88u;
        goto label_3f5d88;
    }
    ctx->pc = 0x3F5D80u;
    SET_GPR_U32(ctx, 31, 0x3F5D88u);
    ctx->pc = 0x3F5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D80u;
    // 0x3f5d84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F5D80u, 0x3F5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D88u;
label_3f5d88:
    // 0x3f5d88: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f5d88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f5d8c:
    // 0x3f5d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d90:
    // 0x3f5d90: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3f5d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3f5d94:
    // 0x3f5d94: 0xc0e858c  jal         func_3A1630
label_3f5d98:
    if (ctx->pc == 0x3F5D98u) {
        ctx->pc = 0x3F5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D94u;
        // 0x3f5d98: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5D9Cu;
        goto label_3f5d9c;
    }
    ctx->pc = 0x3F5D94u;
    SET_GPR_U32(ctx, 31, 0x3F5D9Cu);
    ctx->pc = 0x3F5D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D94u;
    // 0x3f5d98: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F5D94u, 0x3F5D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D9Cu;
label_3f5d9c:
    // 0x3f5d9c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f5d9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f5da0:
    // 0x3f5da0: 0x24040405  addiu       $a0, $zero, 0x405
    ctx->pc = 0x3f5da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
label_3f5da4:
    // 0x3f5da4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f5da4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f5da8:
    // 0x3f5da8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f5da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f5dac:
    // 0x3f5dac: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3f5dacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3f5db0:
    // 0x3f5db0: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3f5db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3f5db4:
    // 0x3f5db4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5db8:
    // 0x3f5db8: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3f5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3f5dbc:
    // 0x3f5dbc: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3f5dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3f5dc0:
    // 0x3f5dc0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3f5dc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3f5dc4:
    // 0x3f5dc4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3f5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3f5dc8:
    // 0x3f5dc8: 0x60f809  jalr        $v1
label_3f5dcc:
    if (ctx->pc == 0x3F5DCCu) {
        ctx->pc = 0x3F5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5DC8u;
        // 0x3f5dcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5DD0u;
        goto label_3f5dd0;
    }
    ctx->pc = 0x3F5DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F5DD0u);
        ctx->pc = 0x3F5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5DC8u;
        // 0x3f5dcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5DC8u, 0x3F5DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5DD0u;
label_3f5dd0:
    // 0x3f5dd0: 0xae1300d8  sw          $s3, 0xD8($s0)
    ctx->pc = 0x3f5dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 19));
label_3f5dd4:
    // 0x3f5dd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f5dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f5dd8:
    // 0x3f5dd8: 0xae1400dc  sw          $s4, 0xDC($s0)
    ctx->pc = 0x3f5dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 20));
label_3f5ddc:
    // 0x3f5ddc: 0xc0e91da  jal         func_3A4768
label_3f5de0:
    if (ctx->pc == 0x3F5DE0u) {
        ctx->pc = 0x3F5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5DDCu;
        // 0x3f5de0: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5DE4u;
        goto label_3f5de4;
    }
    ctx->pc = 0x3F5DDCu;
    SET_GPR_U32(ctx, 31, 0x3F5DE4u);
    ctx->pc = 0x3F5DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5DDCu;
    // 0x3f5de0: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3F5DDCu, 0x3F5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5DE4u;
label_3f5de4:
    // 0x3f5de4: 0xc0e91da  jal         func_3A4768
label_3f5de8:
    if (ctx->pc == 0x3F5DE8u) {
        ctx->pc = 0x3F5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5DE4u;
        // 0x3f5de8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5DECu;
        goto label_3f5dec;
    }
    ctx->pc = 0x3F5DE4u;
    SET_GPR_U32(ctx, 31, 0x3F5DECu);
    ctx->pc = 0x3F5DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5DE4u;
    // 0x3f5de8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3F5DE4u, 0x3F5DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5DECu;
label_3f5dec:
    // 0x3f5dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f5decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f5df0:
    // 0x3f5df0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f5df4:
    // 0x3f5df4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x3f5df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_3f5df8:
    // 0x3f5df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5dfc:
    // 0x3f5dfc: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x3f5dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_3f5e00:
    // 0x3f5e00: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3f5e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f5e04:
    // 0x3f5e04: 0xc0e8e26  jal         func_3A3898
label_3f5e08:
    if (ctx->pc == 0x3F5E08u) {
        ctx->pc = 0x3F5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E04u;
        // 0x3f5e08: 0xa222002c  sb          $v0, 0x2C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5E0Cu;
        goto label_3f5e0c;
    }
    ctx->pc = 0x3F5E04u;
    SET_GPR_U32(ctx, 31, 0x3F5E0Cu);
    ctx->pc = 0x3F5E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E04u;
    // 0x3f5e08: 0xa222002c  sb          $v0, 0x2C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F5E04u, 0x3F5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E0Cu;
label_3f5e0c:
    // 0x3f5e0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3f5e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3f5e10:
    // 0x3f5e10: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x3f5e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_3f5e14:
    // 0x3f5e14: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x3f5e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_3f5e18:
    // 0x3f5e18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f5e1c:
    // 0x3f5e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5e20:
    // 0x3f5e20: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x3f5e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_3f5e24:
    // 0x3f5e24: 0x8cc2bd30  lw          $v0, -0x42D0($a2)
    ctx->pc = 0x3f5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950192)));
label_3f5e28:
    // 0x3f5e28: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3f5e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_3f5e2c:
    // 0x3f5e2c: 0x8cc3bd30  lw          $v1, -0x42D0($a2)
    ctx->pc = 0x3f5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950192)));
label_3f5e30:
    // 0x3f5e30: 0xc0fd320  jal         func_3F4C80
label_3f5e34:
    if (ctx->pc == 0x3F5E34u) {
        ctx->pc = 0x3F5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E30u;
        // 0x3f5e34: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5E38u;
        goto label_3f5e38;
    }
    ctx->pc = 0x3F5E30u;
    SET_GPR_U32(ctx, 31, 0x3F5E38u);
    ctx->pc = 0x3F5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E30u;
    // 0x3f5e34: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4C80u, 0x3F5E30u, 0x3F5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E38u;
label_3f5e38:
    // 0x3f5e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5e3c:
    // 0x3f5e3c: 0xc0ea16a  jal         func_3A85A8
label_3f5e40:
    if (ctx->pc == 0x3F5E40u) {
        ctx->pc = 0x3F5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E3Cu;
        // 0x3f5e40: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5E44u;
        goto label_3f5e44;
    }
    ctx->pc = 0x3F5E3Cu;
    SET_GPR_U32(ctx, 31, 0x3F5E44u);
    ctx->pc = 0x3F5E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E3Cu;
    // 0x3f5e40: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3F5E3Cu, 0x3F5E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E44u;
label_3f5e44:
    // 0x3f5e44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5e48:
    // 0x3f5e48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f5e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5e4c:
    // 0x3f5e4c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x3f5e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3f5e50:
    // 0x3f5e50: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3f5e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3f5e54:
    // 0x3f5e54: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3f5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3f5e58:
    // 0x3f5e58: 0x60f809  jalr        $v1
label_3f5e5c:
    if (ctx->pc == 0x3F5E5Cu) {
        ctx->pc = 0x3F5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E58u;
        // 0x3f5e5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5E60u;
        goto label_3f5e60;
    }
    ctx->pc = 0x3F5E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F5E60u);
        ctx->pc = 0x3F5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E58u;
        // 0x3f5e5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5E58u, 0x3F5E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5E60u;
label_3f5e60:
    // 0x3f5e60: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3f5e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3f5e64:
    // 0x3f5e64: 0xc0e9290  jal         func_3A4A40
label_3f5e68:
    if (ctx->pc == 0x3F5E68u) {
        ctx->pc = 0x3F5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E64u;
        // 0x3f5e68: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5E6Cu;
        goto label_3f5e6c;
    }
    ctx->pc = 0x3F5E64u;
    SET_GPR_U32(ctx, 31, 0x3F5E6Cu);
    ctx->pc = 0x3F5E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E64u;
    // 0x3f5e68: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3F5E64u, 0x3F5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E6Cu;
label_3f5e6c:
    // 0x3f5e6c: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3f5e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3f5e70:
    // 0x3f5e70: 0xc0e9290  jal         func_3A4A40
label_3f5e74:
    if (ctx->pc == 0x3F5E74u) {
        ctx->pc = 0x3F5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E70u;
        // 0x3f5e74: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5E78u;
        goto label_3f5e78;
    }
    ctx->pc = 0x3F5E70u;
    SET_GPR_U32(ctx, 31, 0x3F5E78u);
    ctx->pc = 0x3F5E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E70u;
    // 0x3f5e74: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3F5E70u, 0x3F5E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E78u;
label_3f5e78:
    // 0x3f5e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5e7c:
    // 0x3f5e7c: 0xc0e8dee  jal         func_3A37B8
label_3f5e80:
    if (ctx->pc == 0x3F5E80u) {
        ctx->pc = 0x3F5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E7Cu;
        // 0x3f5e80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5E84u;
        goto label_3f5e84;
    }
    ctx->pc = 0x3F5E7Cu;
    SET_GPR_U32(ctx, 31, 0x3F5E84u);
    ctx->pc = 0x3F5E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E7Cu;
    // 0x3f5e80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3F5E7Cu, 0x3F5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E84u;
label_3f5e84:
    // 0x3f5e84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f5e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5e88:
    // 0x3f5e88: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3f5e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3f5e8c:
    // 0x3f5e8c: 0xc0e92a6  jal         func_3A4A98
label_3f5e90:
    if (ctx->pc == 0x3F5E90u) {
        ctx->pc = 0x3F5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E8Cu;
        // 0x3f5e90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5E94u;
        goto label_3f5e94;
    }
    ctx->pc = 0x3F5E8Cu;
    SET_GPR_U32(ctx, 31, 0x3F5E94u);
    ctx->pc = 0x3F5E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E8Cu;
    // 0x3f5e90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3F5E8Cu, 0x3F5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E94u;
label_3f5e94:
    // 0x3f5e94: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3f5e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3f5e98:
    // 0x3f5e98: 0xc0e92a6  jal         func_3A4A98
label_3f5e9c:
    if (ctx->pc == 0x3F5E9Cu) {
        ctx->pc = 0x3F5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E98u;
        // 0x3f5e9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5EA0u;
        goto label_3f5ea0;
    }
    ctx->pc = 0x3F5E98u;
    SET_GPR_U32(ctx, 31, 0x3F5EA0u);
    ctx->pc = 0x3F5E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E98u;
    // 0x3f5e9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3F5E98u, 0x3F5EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5EA0u;
label_3f5ea0:
    // 0x3f5ea0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3f5ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f5ea4:
    // 0x3f5ea4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3f5ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f5ea8:
    // 0x3f5ea8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3f5ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f5eac:
    // 0x3f5eac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3f5eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f5eb0:
    // 0x3f5eb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f5eb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f5eb4:
    // 0x3f5eb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f5eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f5eb8:
    // 0x3f5eb8: 0x3e00008  jr          $ra
label_3f5ebc:
    if (ctx->pc == 0x3F5EBCu) {
        ctx->pc = 0x3F5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5EB8u;
        // 0x3f5ebc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5EC0u;
        goto label_fallthrough_0x3f5eb8;
    }
    ctx->pc = 0x3F5EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5EB8u;
        // 0x3f5ebc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f5eb8:
    ctx->pc = 0x3F5EC0u;
}
