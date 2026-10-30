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

// Function: sub_003F6D70
// Address: 0x3f6d70 - 0x3f6f08
void sub_003F6D70_0x3f6d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6D70_0x3f6d70");
#endif

    switch (ctx->pc) {
        case 0x3f6d70u: goto label_3f6d70;
        case 0x3f6d74u: goto label_3f6d74;
        case 0x3f6d78u: goto label_3f6d78;
        case 0x3f6d7cu: goto label_3f6d7c;
        case 0x3f6d80u: goto label_3f6d80;
        case 0x3f6d84u: goto label_3f6d84;
        case 0x3f6d88u: goto label_3f6d88;
        case 0x3f6d8cu: goto label_3f6d8c;
        case 0x3f6d90u: goto label_3f6d90;
        case 0x3f6d94u: goto label_3f6d94;
        case 0x3f6d98u: goto label_3f6d98;
        case 0x3f6d9cu: goto label_3f6d9c;
        case 0x3f6da0u: goto label_3f6da0;
        case 0x3f6da4u: goto label_3f6da4;
        case 0x3f6da8u: goto label_3f6da8;
        case 0x3f6dacu: goto label_3f6dac;
        case 0x3f6db0u: goto label_3f6db0;
        case 0x3f6db4u: goto label_3f6db4;
        case 0x3f6db8u: goto label_3f6db8;
        case 0x3f6dbcu: goto label_3f6dbc;
        case 0x3f6dc0u: goto label_3f6dc0;
        case 0x3f6dc4u: goto label_3f6dc4;
        case 0x3f6dc8u: goto label_3f6dc8;
        case 0x3f6dccu: goto label_3f6dcc;
        case 0x3f6dd0u: goto label_3f6dd0;
        case 0x3f6dd4u: goto label_3f6dd4;
        case 0x3f6dd8u: goto label_3f6dd8;
        case 0x3f6ddcu: goto label_3f6ddc;
        case 0x3f6de0u: goto label_3f6de0;
        case 0x3f6de4u: goto label_3f6de4;
        case 0x3f6de8u: goto label_3f6de8;
        case 0x3f6decu: goto label_3f6dec;
        case 0x3f6df0u: goto label_3f6df0;
        case 0x3f6df4u: goto label_3f6df4;
        case 0x3f6df8u: goto label_3f6df8;
        case 0x3f6dfcu: goto label_3f6dfc;
        case 0x3f6e00u: goto label_3f6e00;
        case 0x3f6e04u: goto label_3f6e04;
        case 0x3f6e08u: goto label_3f6e08;
        case 0x3f6e0cu: goto label_3f6e0c;
        case 0x3f6e10u: goto label_3f6e10;
        case 0x3f6e14u: goto label_3f6e14;
        case 0x3f6e18u: goto label_3f6e18;
        case 0x3f6e1cu: goto label_3f6e1c;
        case 0x3f6e20u: goto label_3f6e20;
        case 0x3f6e24u: goto label_3f6e24;
        case 0x3f6e28u: goto label_3f6e28;
        case 0x3f6e2cu: goto label_3f6e2c;
        case 0x3f6e30u: goto label_3f6e30;
        case 0x3f6e34u: goto label_3f6e34;
        case 0x3f6e38u: goto label_3f6e38;
        case 0x3f6e3cu: goto label_3f6e3c;
        case 0x3f6e40u: goto label_3f6e40;
        case 0x3f6e44u: goto label_3f6e44;
        case 0x3f6e48u: goto label_3f6e48;
        case 0x3f6e4cu: goto label_3f6e4c;
        case 0x3f6e50u: goto label_3f6e50;
        case 0x3f6e54u: goto label_3f6e54;
        case 0x3f6e58u: goto label_3f6e58;
        case 0x3f6e5cu: goto label_3f6e5c;
        case 0x3f6e60u: goto label_3f6e60;
        case 0x3f6e64u: goto label_3f6e64;
        case 0x3f6e68u: goto label_3f6e68;
        case 0x3f6e6cu: goto label_3f6e6c;
        case 0x3f6e70u: goto label_3f6e70;
        case 0x3f6e74u: goto label_3f6e74;
        case 0x3f6e78u: goto label_3f6e78;
        case 0x3f6e7cu: goto label_3f6e7c;
        case 0x3f6e80u: goto label_3f6e80;
        case 0x3f6e84u: goto label_3f6e84;
        case 0x3f6e88u: goto label_3f6e88;
        case 0x3f6e8cu: goto label_3f6e8c;
        case 0x3f6e90u: goto label_3f6e90;
        case 0x3f6e94u: goto label_3f6e94;
        case 0x3f6e98u: goto label_3f6e98;
        case 0x3f6e9cu: goto label_3f6e9c;
        case 0x3f6ea0u: goto label_3f6ea0;
        case 0x3f6ea4u: goto label_3f6ea4;
        case 0x3f6ea8u: goto label_3f6ea8;
        case 0x3f6eacu: goto label_3f6eac;
        case 0x3f6eb0u: goto label_3f6eb0;
        case 0x3f6eb4u: goto label_3f6eb4;
        case 0x3f6eb8u: goto label_3f6eb8;
        case 0x3f6ebcu: goto label_3f6ebc;
        case 0x3f6ec0u: goto label_3f6ec0;
        case 0x3f6ec4u: goto label_3f6ec4;
        case 0x3f6ec8u: goto label_3f6ec8;
        case 0x3f6eccu: goto label_3f6ecc;
        case 0x3f6ed0u: goto label_3f6ed0;
        case 0x3f6ed4u: goto label_3f6ed4;
        case 0x3f6ed8u: goto label_3f6ed8;
        case 0x3f6edcu: goto label_3f6edc;
        case 0x3f6ee0u: goto label_3f6ee0;
        case 0x3f6ee4u: goto label_3f6ee4;
        case 0x3f6ee8u: goto label_3f6ee8;
        case 0x3f6eecu: goto label_3f6eec;
        case 0x3f6ef0u: goto label_3f6ef0;
        case 0x3f6ef4u: goto label_3f6ef4;
        case 0x3f6ef8u: goto label_3f6ef8;
        case 0x3f6efcu: goto label_3f6efc;
        case 0x3f6f00u: goto label_3f6f00;
        case 0x3f6f04u: goto label_3f6f04;
        default: break;
    }

    ctx->pc = 0x3f6d70u;

label_3f6d70:
    // 0x3f6d70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3f6d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3f6d74:
    // 0x3f6d74: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3f6d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3f6d78:
    // 0x3f6d78: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3f6d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3f6d7c:
    // 0x3f6d7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f6d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f6d80:
    // 0x3f6d80: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3f6d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3f6d84:
    // 0x3f6d84: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3f6d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3f6d88:
    // 0x3f6d88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f6d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6d8c:
    // 0x3f6d8c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3f6d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f6d90:
    // 0x3f6d90: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f6d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f6d94:
    // 0x3f6d94: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f6d98:
    // 0x3f6d98: 0x40f809  jalr        $v0
label_3f6d9c:
    if (ctx->pc == 0x3F6D9Cu) {
        ctx->pc = 0x3F6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D98u;
        // 0x3f6d9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6DA0u;
        goto label_3f6da0;
    }
    ctx->pc = 0x3F6D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F6DA0u);
        ctx->pc = 0x3F6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D98u;
        // 0x3f6d9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6D98u, 0x3F6DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F6DA0u;
label_3f6da0:
    // 0x3f6da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f6da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f6da4:
    // 0x3f6da4: 0xc0ea14c  jal         func_3A8530
label_3f6da8:
    if (ctx->pc == 0x3F6DA8u) {
        ctx->pc = 0x3F6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6DA4u;
        // 0x3f6da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6DACu;
        goto label_3f6dac;
    }
    ctx->pc = 0x3F6DA4u;
    SET_GPR_U32(ctx, 31, 0x3F6DACu);
    ctx->pc = 0x3F6DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6DA4u;
    // 0x3f6da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F6DA4u, 0x3F6DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6DACu;
label_3f6dac:
    // 0x3f6dac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f6dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f6db0:
    // 0x3f6db0: 0xc0ea12a  jal         func_3A84A8
label_3f6db4:
    if (ctx->pc == 0x3F6DB4u) {
        ctx->pc = 0x3F6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6DB0u;
        // 0x3f6db4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6DB8u;
        goto label_3f6db8;
    }
    ctx->pc = 0x3F6DB0u;
    SET_GPR_U32(ctx, 31, 0x3F6DB8u);
    ctx->pc = 0x3F6DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6DB0u;
    // 0x3f6db4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F6DB0u, 0x3F6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6DB8u;
label_3f6db8:
    // 0x3f6db8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f6db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f6dbc:
    // 0x3f6dbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f6dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f6dc0:
    // 0x3f6dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f6dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f6dc4:
    // 0x3f6dc4: 0xc0ea12a  jal         func_3A84A8
label_3f6dc8:
    if (ctx->pc == 0x3F6DC8u) {
        ctx->pc = 0x3F6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6DC4u;
        // 0x3f6dc8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6DCCu;
        goto label_3f6dcc;
    }
    ctx->pc = 0x3F6DC4u;
    SET_GPR_U32(ctx, 31, 0x3F6DCCu);
    ctx->pc = 0x3F6DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6DC4u;
    // 0x3f6dc8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F6DC4u, 0x3F6DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6DCCu;
label_3f6dcc:
    // 0x3f6dcc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f6dccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f6dd0:
    // 0x3f6dd0: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3f6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3f6dd4:
    // 0x3f6dd4: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3f6dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3f6dd8:
    // 0x3f6dd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f6ddc:
    // 0x3f6ddc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f6ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f6de0:
    // 0x3f6de0: 0xc0e858c  jal         func_3A1630
label_3f6de4:
    if (ctx->pc == 0x3F6DE4u) {
        ctx->pc = 0x3F6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6DE0u;
        // 0x3f6de4: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6DE8u;
        goto label_3f6de8;
    }
    ctx->pc = 0x3F6DE0u;
    SET_GPR_U32(ctx, 31, 0x3F6DE8u);
    ctx->pc = 0x3F6DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6DE0u;
    // 0x3f6de4: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F6DE0u, 0x3F6DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6DE8u;
label_3f6de8:
    // 0x3f6de8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3f6de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3f6dec:
    // 0x3f6dec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f6decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6df0:
    // 0x3f6df0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f6df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f6df4:
    // 0x3f6df4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f6df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f6df8:
    // 0x3f6df8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f6df8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f6dfc:
    // 0x3f6dfc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3f6dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3f6e00:
    // 0x3f6e00: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x3f6e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3f6e04:
    // 0x3f6e04: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3f6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3f6e08:
    // 0x3f6e08: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3f6e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3f6e0c:
    // 0x3f6e0c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3f6e0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f6e10:
    // 0x3f6e10: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3f6e10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f6e14:
    // 0x3f6e14: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f6e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f6e18:
    // 0x3f6e18: 0x7e440010  sq          $a0, 0x10($s2)
    ctx->pc = 0x3f6e18u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 4));
label_3f6e1c:
    // 0x3f6e1c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3f6e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3f6e20:
    // 0x3f6e20: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3f6e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3f6e24:
    // 0x3f6e24: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f6e24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f6e28:
    // 0x3f6e28: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f6e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f6e2c:
    // 0x3f6e2c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f6e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f6e30:
    // 0x3f6e30: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f6e30u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f6e34:
    // 0x3f6e34: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f6e34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f6e38:
    // 0x3f6e38: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f6e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f6e3c:
    // 0x3f6e3c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f6e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f6e40:
    // 0x3f6e40: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f6e40u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f6e44:
    // 0x3f6e44: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f6e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f6e48:
    // 0x3f6e48: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f6e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f6e4c:
    // 0x3f6e4c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f6e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f6e50:
    // 0x3f6e50: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f6e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f6e54:
    // 0x3f6e54: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f6e54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f6e58:
    // 0x3f6e58: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f6e58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f6e5c:
    // 0x3f6e5c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f6e5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f6e60:
    // 0x3f6e60: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f6e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f6e64:
    // 0x3f6e64: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f6e64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f6e68:
    // 0x3f6e68: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f6e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f6e6c:
    // 0x3f6e6c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f6e70:
    // 0x3f6e70: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3f6e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3f6e74:
    // 0x3f6e74: 0x3463ff40  ori         $v1, $v1, 0xFF40
    ctx->pc = 0x3f6e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65344);
label_3f6e78:
    // 0x3f6e78: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3f6e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3f6e7c:
    // 0x3f6e7c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f6e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f6e80:
    // 0x3f6e80: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3f6e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3f6e84:
    // 0x3f6e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f6e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6e88:
    // 0x3f6e88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f6e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6e8c:
    // 0x3f6e8c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3f6e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_3f6e90:
    // 0x3f6e90: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f6e94:
    // 0x3f6e94: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3f6e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3f6e98:
    // 0x3f6e98: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x3f6e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_3f6e9c:
    // 0x3f6e9c: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x3f6e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
label_3f6ea0:
    // 0x3f6ea0: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x3f6ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
label_3f6ea4:
    // 0x3f6ea4: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x3f6ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_3f6ea8:
    // 0x3f6ea8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f6ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f6eac:
    // 0x3f6eac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f6eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f6eb0:
    // 0x3f6eb0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3f6eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3f6eb4:
    // 0x3f6eb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f6eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f6eb8:
    // 0x3f6eb8: 0x3c013ea3  lui         $at, 0x3EA3
    ctx->pc = 0x3f6eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16035 << 16));
label_3f6ebc:
    // 0x3f6ebc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3f6ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3f6ec0:
    // 0x3f6ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f6ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6ec4:
    // 0x3f6ec4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3f6ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3f6ec8:
    // 0x3f6ec8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3f6ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3f6ecc:
    // 0x3f6ecc: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x3f6eccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3f6ed0:
    // 0x3f6ed0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3f6ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3f6ed4:
    // 0x3f6ed4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3f6ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3f6ed8:
    // 0x3f6ed8: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3f6ed8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f6edc:
    // 0x3f6edc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3f6edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f6ee0:
    // 0x3f6ee0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3f6ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3f6ee4:
    // 0x3f6ee4: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3f6ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3f6ee8:
    // 0x3f6ee8: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x3f6ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_3f6eec:
    // 0x3f6eec: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3f6eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3f6ef0:
    // 0x3f6ef0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3f6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3f6ef4:
    // 0x3f6ef4: 0x3442071e  ori         $v0, $v0, 0x71E
    ctx->pc = 0x3f6ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1822);
label_3f6ef8:
    // 0x3f6ef8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x3f6ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_3f6efc:
    // 0x3f6efc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3f6efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3f6f00:
    // 0x3f6f00: 0x3e00008  jr          $ra
label_3f6f04:
    if (ctx->pc == 0x3F6F04u) {
        ctx->pc = 0x3F6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F00u;
        // 0x3f6f04: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F08u;
        goto label_fallthrough_0x3f6f00;
    }
    ctx->pc = 0x3F6F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F00u;
        // 0x3f6f04: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f6f00:
    ctx->pc = 0x3F6F08u;
}
