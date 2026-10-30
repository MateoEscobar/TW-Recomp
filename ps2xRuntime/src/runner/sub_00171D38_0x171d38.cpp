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

// Function: sub_00171D38
// Address: 0x171d38 - 0x171f58
void sub_00171D38_0x171d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171D38_0x171d38");
#endif

    switch (ctx->pc) {
        case 0x171d38u: goto label_171d38;
        case 0x171d3cu: goto label_171d3c;
        case 0x171d40u: goto label_171d40;
        case 0x171d44u: goto label_171d44;
        case 0x171d48u: goto label_171d48;
        case 0x171d4cu: goto label_171d4c;
        case 0x171d50u: goto label_171d50;
        case 0x171d54u: goto label_171d54;
        case 0x171d58u: goto label_171d58;
        case 0x171d5cu: goto label_171d5c;
        case 0x171d60u: goto label_171d60;
        case 0x171d64u: goto label_171d64;
        case 0x171d68u: goto label_171d68;
        case 0x171d6cu: goto label_171d6c;
        case 0x171d70u: goto label_171d70;
        case 0x171d74u: goto label_171d74;
        case 0x171d78u: goto label_171d78;
        case 0x171d7cu: goto label_171d7c;
        case 0x171d80u: goto label_171d80;
        case 0x171d84u: goto label_171d84;
        case 0x171d88u: goto label_171d88;
        case 0x171d8cu: goto label_171d8c;
        case 0x171d90u: goto label_171d90;
        case 0x171d94u: goto label_171d94;
        case 0x171d98u: goto label_171d98;
        case 0x171d9cu: goto label_171d9c;
        case 0x171da0u: goto label_171da0;
        case 0x171da4u: goto label_171da4;
        case 0x171da8u: goto label_171da8;
        case 0x171dacu: goto label_171dac;
        case 0x171db0u: goto label_171db0;
        case 0x171db4u: goto label_171db4;
        case 0x171db8u: goto label_171db8;
        case 0x171dbcu: goto label_171dbc;
        case 0x171dc0u: goto label_171dc0;
        case 0x171dc4u: goto label_171dc4;
        case 0x171dc8u: goto label_171dc8;
        case 0x171dccu: goto label_171dcc;
        case 0x171dd0u: goto label_171dd0;
        case 0x171dd4u: goto label_171dd4;
        case 0x171dd8u: goto label_171dd8;
        case 0x171ddcu: goto label_171ddc;
        case 0x171de0u: goto label_171de0;
        case 0x171de4u: goto label_171de4;
        case 0x171de8u: goto label_171de8;
        case 0x171decu: goto label_171dec;
        case 0x171df0u: goto label_171df0;
        case 0x171df4u: goto label_171df4;
        case 0x171df8u: goto label_171df8;
        case 0x171dfcu: goto label_171dfc;
        case 0x171e00u: goto label_171e00;
        case 0x171e04u: goto label_171e04;
        case 0x171e08u: goto label_171e08;
        case 0x171e0cu: goto label_171e0c;
        case 0x171e10u: goto label_171e10;
        case 0x171e14u: goto label_171e14;
        case 0x171e18u: goto label_171e18;
        case 0x171e1cu: goto label_171e1c;
        case 0x171e20u: goto label_171e20;
        case 0x171e24u: goto label_171e24;
        case 0x171e28u: goto label_171e28;
        case 0x171e2cu: goto label_171e2c;
        case 0x171e30u: goto label_171e30;
        case 0x171e34u: goto label_171e34;
        case 0x171e38u: goto label_171e38;
        case 0x171e3cu: goto label_171e3c;
        case 0x171e40u: goto label_171e40;
        case 0x171e44u: goto label_171e44;
        case 0x171e48u: goto label_171e48;
        case 0x171e4cu: goto label_171e4c;
        case 0x171e50u: goto label_171e50;
        case 0x171e54u: goto label_171e54;
        case 0x171e58u: goto label_171e58;
        case 0x171e5cu: goto label_171e5c;
        case 0x171e60u: goto label_171e60;
        case 0x171e64u: goto label_171e64;
        case 0x171e68u: goto label_171e68;
        case 0x171e6cu: goto label_171e6c;
        case 0x171e70u: goto label_171e70;
        case 0x171e74u: goto label_171e74;
        case 0x171e78u: goto label_171e78;
        case 0x171e7cu: goto label_171e7c;
        case 0x171e80u: goto label_171e80;
        case 0x171e84u: goto label_171e84;
        case 0x171e88u: goto label_171e88;
        case 0x171e8cu: goto label_171e8c;
        case 0x171e90u: goto label_171e90;
        case 0x171e94u: goto label_171e94;
        case 0x171e98u: goto label_171e98;
        case 0x171e9cu: goto label_171e9c;
        case 0x171ea0u: goto label_171ea0;
        case 0x171ea4u: goto label_171ea4;
        case 0x171ea8u: goto label_171ea8;
        case 0x171eacu: goto label_171eac;
        case 0x171eb0u: goto label_171eb0;
        case 0x171eb4u: goto label_171eb4;
        case 0x171eb8u: goto label_171eb8;
        case 0x171ebcu: goto label_171ebc;
        case 0x171ec0u: goto label_171ec0;
        case 0x171ec4u: goto label_171ec4;
        case 0x171ec8u: goto label_171ec8;
        case 0x171eccu: goto label_171ecc;
        case 0x171ed0u: goto label_171ed0;
        case 0x171ed4u: goto label_171ed4;
        case 0x171ed8u: goto label_171ed8;
        case 0x171edcu: goto label_171edc;
        case 0x171ee0u: goto label_171ee0;
        case 0x171ee4u: goto label_171ee4;
        case 0x171ee8u: goto label_171ee8;
        case 0x171eecu: goto label_171eec;
        case 0x171ef0u: goto label_171ef0;
        case 0x171ef4u: goto label_171ef4;
        case 0x171ef8u: goto label_171ef8;
        case 0x171efcu: goto label_171efc;
        case 0x171f00u: goto label_171f00;
        case 0x171f04u: goto label_171f04;
        case 0x171f08u: goto label_171f08;
        case 0x171f0cu: goto label_171f0c;
        case 0x171f10u: goto label_171f10;
        case 0x171f14u: goto label_171f14;
        case 0x171f18u: goto label_171f18;
        case 0x171f1cu: goto label_171f1c;
        case 0x171f20u: goto label_171f20;
        case 0x171f24u: goto label_171f24;
        case 0x171f28u: goto label_171f28;
        case 0x171f2cu: goto label_171f2c;
        case 0x171f30u: goto label_171f30;
        case 0x171f34u: goto label_171f34;
        case 0x171f38u: goto label_171f38;
        case 0x171f3cu: goto label_171f3c;
        case 0x171f40u: goto label_171f40;
        case 0x171f44u: goto label_171f44;
        case 0x171f48u: goto label_171f48;
        case 0x171f4cu: goto label_171f4c;
        case 0x171f50u: goto label_171f50;
        case 0x171f54u: goto label_171f54;
        default: break;
    }

    ctx->pc = 0x171d38u;

label_171d38:
    // 0x171d38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x171d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_171d3c:
    // 0x171d3c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x171d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_171d40:
    // 0x171d40: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x171d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_171d44:
    // 0x171d44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171d48:
    // 0x171d48: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x171d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_171d4c:
    // 0x171d4c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x171d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_171d50:
    // 0x171d50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x171d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_171d54:
    // 0x171d54: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x171d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_171d58:
    // 0x171d58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_171d5c:
    // 0x171d5c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x171d5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_171d60:
    // 0x171d60: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x171d60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_171d64:
    // 0x171d64: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x171d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_171d68:
    // 0x171d68: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_171d6c:
    if (ctx->pc == 0x171D6Cu) {
        ctx->pc = 0x171D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D68u;
        // 0x171d6c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D70u;
        goto label_171d70;
    }
    ctx->pc = 0x171D68u;
    {
        const bool branch_taken_0x171d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D68u;
        // 0x171d6c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d68) {
            ctx->pc = 0x171F30u;
            goto label_171f30;
        }
    }
    ctx->pc = 0x171D70u;
label_171d70:
    // 0x171d70: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x171d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_171d74:
    // 0x171d74: 0x5440006f  bnel        $v0, $zero, . + 4 + (0x6F << 2)
label_171d78:
    if (ctx->pc == 0x171D78u) {
        ctx->pc = 0x171D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D74u;
        // 0x171d78: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D7Cu;
        goto label_171d7c;
    }
    ctx->pc = 0x171D74u;
    {
        const bool branch_taken_0x171d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171d74) {
            ctx->pc = 0x171D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171D74u;
            // 0x171d78: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171F34u;
            goto label_171f34;
        }
    }
    ctx->pc = 0x171D7Cu;
label_171d7c:
    // 0x171d7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x171d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_171d80:
    // 0x171d80: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x171d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_171d84:
    // 0x171d84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x171d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_171d88:
    // 0x171d88: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x171d88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_171d8c:
    // 0x171d8c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x171d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_171d90:
    // 0x171d90: 0x40f809  jalr        $v0
label_171d94:
    if (ctx->pc == 0x171D94u) {
        ctx->pc = 0x171D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D90u;
        // 0x171d94: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D98u;
        goto label_171d98;
    }
    ctx->pc = 0x171D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171D98u);
        ctx->pc = 0x171D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D90u;
        // 0x171d94: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D90u, 0x171D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171D98u;
label_171d98:
    // 0x171d98: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_171d9c:
    if (ctx->pc == 0x171D9Cu) {
        ctx->pc = 0x171D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D98u;
        // 0x171d9c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DA0u;
        goto label_171da0;
    }
    ctx->pc = 0x171D98u;
    {
        const bool branch_taken_0x171d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D98u;
        // 0x171d9c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d98) {
            ctx->pc = 0x171F30u;
            goto label_171f30;
        }
    }
    ctx->pc = 0x171DA0u;
label_171da0:
    // 0x171da0: 0x8e330008  lw          $s3, 0x8($s1)
    ctx->pc = 0x171da0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_171da4:
    // 0x171da4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x171da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171da8:
    // 0x171da8: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x171da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
label_171dac:
    // 0x171dac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x171dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_171db0:
    // 0x171db0: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x171db0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_171db4:
    // 0x171db4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x171db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_171db8:
    // 0x171db8: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x171db8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_171dbc:
    // 0x171dbc: 0x0  nop
    ctx->pc = 0x171dbcu;
    // NOP
label_171dc0:
    // 0x171dc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x171dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171dc4:
    // 0x171dc4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x171dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_171dc8:
    // 0x171dc8: 0x92020058  lbu         $v0, 0x58($s0)
    ctx->pc = 0x171dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_171dcc:
    // 0x171dcc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x171dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_171dd0:
    // 0x171dd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_171dd4:
    if (ctx->pc == 0x171DD4u) {
        ctx->pc = 0x171DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DD0u;
        // 0x171dd4: 0x26130060  addiu       $s3, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DD8u;
        goto label_171dd8;
    }
    ctx->pc = 0x171DD0u;
    {
        const bool branch_taken_0x171dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DD0u;
        // 0x171dd4: 0x26130060  addiu       $s3, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171dd0) {
            ctx->pc = 0x171DF8u;
            goto label_171df8;
        }
    }
    ctx->pc = 0x171DD8u;
label_171dd8:
    // 0x171dd8: 0xc05c582  jal         func_171608
label_171ddc:
    if (ctx->pc == 0x171DDCu) {
        ctx->pc = 0x171DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DD8u;
        // 0x171ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DE0u;
        goto label_171de0;
    }
    ctx->pc = 0x171DD8u;
    SET_GPR_U32(ctx, 31, 0x171DE0u);
    ctx->pc = 0x171DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DD8u;
    // 0x171ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171608u, 0x171DD8u, 0x171DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DE0u;
label_171de0:
    // 0x171de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171de4:
    // 0x171de4: 0xc05c6c6  jal         func_171B18
label_171de8:
    if (ctx->pc == 0x171DE8u) {
        ctx->pc = 0x171DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DE4u;
        // 0x171de8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DECu;
        goto label_171dec;
    }
    ctx->pc = 0x171DE4u;
    SET_GPR_U32(ctx, 31, 0x171DECu);
    ctx->pc = 0x171DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DE4u;
    // 0x171de8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B18u, 0x171DE4u, 0x171DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DECu;
label_171dec:
    // 0x171dec: 0x92020058  lbu         $v0, 0x58($s0)
    ctx->pc = 0x171decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_171df0:
    // 0x171df0: 0x304200ef  andi        $v0, $v0, 0xEF
    ctx->pc = 0x171df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
label_171df4:
    // 0x171df4: 0xa2020058  sb          $v0, 0x58($s0)
    ctx->pc = 0x171df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
label_171df8:
    // 0x171df8: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x171df8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_171dfc:
    // 0x171dfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_171e00:
    if (ctx->pc == 0x171E00u) {
        ctx->pc = 0x171E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DFCu;
        // 0x171e00: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E04u;
        goto label_171e04;
    }
    ctx->pc = 0x171DFCu;
    {
        const bool branch_taken_0x171dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DFCu;
        // 0x171e00: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171dfc) {
            ctx->pc = 0x171E20u;
            goto label_171e20;
        }
    }
    ctx->pc = 0x171E04u;
label_171e04:
    // 0x171e04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x171e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_171e08:
    // 0x171e08: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_171e0c:
    if (ctx->pc == 0x171E0Cu) {
        ctx->pc = 0x171E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E08u;
        // 0x171e0c: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E10u;
        goto label_171e10;
    }
    ctx->pc = 0x171E08u;
    {
        const bool branch_taken_0x171e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E08u;
        // 0x171e0c: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e08) {
            ctx->pc = 0x171E94u;
            goto label_171e94;
        }
    }
    ctx->pc = 0x171E10u;
label_171e10:
    // 0x171e10: 0x92020058  lbu         $v0, 0x58($s0)
    ctx->pc = 0x171e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_171e14:
    // 0x171e14: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x171e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_171e18:
    // 0x171e18: 0x1000003c  b           . + 4 + (0x3C << 2)
label_171e1c:
    if (ctx->pc == 0x171E1Cu) {
        ctx->pc = 0x171E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E18u;
        // 0x171e1c: 0xa2020058  sb          $v0, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E20u;
        goto label_171e20;
    }
    ctx->pc = 0x171E18u;
    {
        const bool branch_taken_0x171e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E18u;
        // 0x171e1c: 0xa2020058  sb          $v0, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e18) {
            ctx->pc = 0x171F0Cu;
            goto label_171f0c;
        }
    }
    ctx->pc = 0x171E20u;
label_171e20:
    // 0x171e20: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x171e20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_171e24:
    // 0x171e24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x171e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171e28:
    // 0x171e28: 0xc047e6c  jal         func_11F9B0
label_171e2c:
    if (ctx->pc == 0x171E2Cu) {
        ctx->pc = 0x171E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E28u;
        // 0x171e2c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E30u;
        goto label_171e30;
    }
    ctx->pc = 0x171E28u;
    SET_GPR_U32(ctx, 31, 0x171E30u);
    ctx->pc = 0x171E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E28u;
    // 0x171e2c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x171E28u, 0x171E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E30u;
label_171e30:
    // 0x171e30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x171e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_171e34:
    // 0x171e34: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x171e34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_171e38:
    // 0x171e38: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x171e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_171e3c:
    // 0x171e3c: 0xa0f809  jalr        $a1
label_171e40:
    if (ctx->pc == 0x171E40u) {
        ctx->pc = 0x171E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E3Cu;
        // 0x171e40: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E44u;
        goto label_171e44;
    }
    ctx->pc = 0x171E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x171E44u);
        ctx->pc = 0x171E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E3Cu;
        // 0x171e40: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171E3Cu, 0x171E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171E44u;
label_171e44:
    // 0x171e44: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171e44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_171e48:
    // 0x171e48: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x171e48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_171e4c:
    // 0x171e4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x171e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_171e50:
    // 0x171e50: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x171e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_171e54:
    // 0x171e54: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x171e54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_171e58:
    // 0x171e58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x171e58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_171e5c:
    // 0x171e5c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x171e5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_171e60:
    // 0x171e60: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x171e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_171e64:
    // 0x171e64: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x171e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_171e68:
    // 0x171e68: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x171e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171e6c:
    // 0x171e6c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x171e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171e70:
    // 0x171e70: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x171e70u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_171e74:
    // 0x171e74: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x171e74u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_171e78:
    // 0x171e78: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x171e78u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_171e7c:
    // 0x171e7c: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x171e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_171e80:
    // 0x171e80: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x171e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171e84:
    // 0x171e84: 0x0  nop
    ctx->pc = 0x171e84u;
    // NOP
label_171e88:
    // 0x171e88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_171e8c:
    if (ctx->pc == 0x171E8Cu) {
        ctx->pc = 0x171E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E88u;
        // 0x171e8c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E90u;
        goto label_171e90;
    }
    ctx->pc = 0x171E88u;
    {
        const bool branch_taken_0x171e88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E88u;
        // 0x171e8c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e88) {
            ctx->pc = 0x171E94u;
            goto label_171e94;
        }
    }
    ctx->pc = 0x171E90u;
label_171e90:
    // 0x171e90: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x171e90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
label_171e94:
    // 0x171e94: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x171e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_171e98:
    // 0x171e98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171e9c:
    // 0x171e9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x171e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_171ea0:
    // 0x171ea0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_171ea4:
    if (ctx->pc == 0x171EA4u) {
        ctx->pc = 0x171EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EA0u;
        // 0x171ea4: 0xa2020054  sb          $v0, 0x54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EA8u;
        goto label_171ea8;
    }
    ctx->pc = 0x171EA0u;
    {
        const bool branch_taken_0x171ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EA0u;
        // 0x171ea4: 0xa2020054  sb          $v0, 0x54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ea0) {
            ctx->pc = 0x171EC8u;
            goto label_171ec8;
        }
    }
    ctx->pc = 0x171EA8u;
label_171ea8:
    // 0x171ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171eac:
    // 0x171eac: 0xc05c6c6  jal         func_171B18
label_171eb0:
    if (ctx->pc == 0x171EB0u) {
        ctx->pc = 0x171EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EACu;
        // 0x171eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EB4u;
        goto label_171eb4;
    }
    ctx->pc = 0x171EACu;
    SET_GPR_U32(ctx, 31, 0x171EB4u);
    ctx->pc = 0x171EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EACu;
    // 0x171eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B18u, 0x171EACu, 0x171EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EB4u;
label_171eb4:
    // 0x171eb4: 0x26a4b8a8  addiu       $a0, $s5, -0x4758
    ctx->pc = 0x171eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949032));
label_171eb8:
    // 0x171eb8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x171eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_171ebc:
    // 0x171ebc: 0xc0cd4fc  jal         func_3353F0
label_171ec0:
    if (ctx->pc == 0x171EC0u) {
        ctx->pc = 0x171EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EBCu;
        // 0x171ec0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EC4u;
        goto label_171ec4;
    }
    ctx->pc = 0x171EBCu;
    SET_GPR_U32(ctx, 31, 0x171EC4u);
    ctx->pc = 0x171EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EBCu;
    // 0x171ec0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x171EBCu, 0x171EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EC4u;
label_171ec4:
    // 0x171ec4: 0xa2020054  sb          $v0, 0x54($s0)
    ctx->pc = 0x171ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
label_171ec8:
    // 0x171ec8: 0x9602004e  lhu         $v0, 0x4E($s0)
    ctx->pc = 0x171ec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
label_171ecc:
    // 0x171ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171ed0:
    // 0x171ed0: 0x9603004c  lhu         $v1, 0x4C($s0)
    ctx->pc = 0x171ed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
label_171ed4:
    // 0x171ed4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x171ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_171ed8:
    // 0x171ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171edc:
    // 0x171edc: 0x0  nop
    ctx->pc = 0x171edcu;
    // NOP
label_171ee0:
    // 0x171ee0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_171ee4:
    // 0x171ee4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x171ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171ee8:
    // 0x171ee8: 0x0  nop
    ctx->pc = 0x171ee8u;
    // NOP
label_171eec:
    // 0x171eec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x171eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_171ef0:
    // 0x171ef0: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x171ef0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_171ef4:
    // 0x171ef4: 0xc0cda80  jal         func_336A00
label_171ef8:
    if (ctx->pc == 0x171EF8u) {
        ctx->pc = 0x171EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EF4u;
        // 0x171ef8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EFCu;
        goto label_171efc;
    }
    ctx->pc = 0x171EF4u;
    SET_GPR_U32(ctx, 31, 0x171EFCu);
    ctx->pc = 0x171EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EF4u;
    // 0x171ef8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x171EF4u, 0x171EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EFCu;
label_171efc:
    // 0x171efc: 0x9602004e  lhu         $v0, 0x4E($s0)
    ctx->pc = 0x171efcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
label_171f00:
    // 0x171f00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_171f04:
    if (ctx->pc == 0x171F04u) {
        ctx->pc = 0x171F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F00u;
        // 0x171f04: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F08u;
        goto label_171f08;
    }
    ctx->pc = 0x171F00u;
    {
        const bool branch_taken_0x171f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F00u;
        // 0x171f04: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f00) {
            ctx->pc = 0x171F0Cu;
            goto label_171f0c;
        }
    }
    ctx->pc = 0x171F08u;
label_171f08:
    // 0x171f08: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x171f08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
label_171f0c:
    // 0x171f0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x171f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_171f10:
    // 0x171f10: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x171f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_171f14:
    // 0x171f14: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_171f18:
    if (ctx->pc == 0x171F18u) {
        ctx->pc = 0x171F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F14u;
        // 0x171f18: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F1Cu;
        goto label_171f1c;
    }
    ctx->pc = 0x171F14u;
    {
        const bool branch_taken_0x171f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F14u;
        // 0x171f18: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f14) {
            ctx->pc = 0x171DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171dc8;
        }
    }
    ctx->pc = 0x171F1Cu;
label_171f1c:
    // 0x171f1c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x171f1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_171f20:
    // 0x171f20: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x171f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_171f24:
    // 0x171f24: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
label_171f28:
    if (ctx->pc == 0x171F28u) {
        ctx->pc = 0x171F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F24u;
        // 0x171f28: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F2Cu;
        goto label_171f2c;
    }
    ctx->pc = 0x171F24u;
    {
        const bool branch_taken_0x171f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F24u;
        // 0x171f28: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f24) {
            ctx->pc = 0x171DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171dc0;
        }
    }
    ctx->pc = 0x171F2Cu;
label_171f2c:
    // 0x171f2c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x171f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_171f30:
    // 0x171f30: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x171f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_171f34:
    // 0x171f34: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x171f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_171f38:
    // 0x171f38: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x171f38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_171f3c:
    // 0x171f3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x171f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_171f40:
    // 0x171f40: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x171f40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_171f44:
    // 0x171f44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_171f48:
    // 0x171f48: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x171f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_171f4c:
    // 0x171f4c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x171f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_171f50:
    // 0x171f50: 0x3e00008  jr          $ra
label_171f54:
    if (ctx->pc == 0x171F54u) {
        ctx->pc = 0x171F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F50u;
        // 0x171f54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F58u;
        goto label_fallthrough_0x171f50;
    }
    ctx->pc = 0x171F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F50u;
        // 0x171f54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x171f50:
    ctx->pc = 0x171F58u;
}
