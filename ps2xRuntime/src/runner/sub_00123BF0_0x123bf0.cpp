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

// Function: sub_00123BF0
// Address: 0x123bf0 - 0x123ea0
void sub_00123BF0_0x123bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123BF0_0x123bf0");
#endif

    switch (ctx->pc) {
        case 0x123bf0u: goto label_123bf0;
        case 0x123bf4u: goto label_123bf4;
        case 0x123bf8u: goto label_123bf8;
        case 0x123bfcu: goto label_123bfc;
        case 0x123c00u: goto label_123c00;
        case 0x123c04u: goto label_123c04;
        case 0x123c08u: goto label_123c08;
        case 0x123c0cu: goto label_123c0c;
        case 0x123c10u: goto label_123c10;
        case 0x123c14u: goto label_123c14;
        case 0x123c18u: goto label_123c18;
        case 0x123c1cu: goto label_123c1c;
        case 0x123c20u: goto label_123c20;
        case 0x123c24u: goto label_123c24;
        case 0x123c28u: goto label_123c28;
        case 0x123c2cu: goto label_123c2c;
        case 0x123c30u: goto label_123c30;
        case 0x123c34u: goto label_123c34;
        case 0x123c38u: goto label_123c38;
        case 0x123c3cu: goto label_123c3c;
        case 0x123c40u: goto label_123c40;
        case 0x123c44u: goto label_123c44;
        case 0x123c48u: goto label_123c48;
        case 0x123c4cu: goto label_123c4c;
        case 0x123c50u: goto label_123c50;
        case 0x123c54u: goto label_123c54;
        case 0x123c58u: goto label_123c58;
        case 0x123c5cu: goto label_123c5c;
        case 0x123c60u: goto label_123c60;
        case 0x123c64u: goto label_123c64;
        case 0x123c68u: goto label_123c68;
        case 0x123c6cu: goto label_123c6c;
        case 0x123c70u: goto label_123c70;
        case 0x123c74u: goto label_123c74;
        case 0x123c78u: goto label_123c78;
        case 0x123c7cu: goto label_123c7c;
        case 0x123c80u: goto label_123c80;
        case 0x123c84u: goto label_123c84;
        case 0x123c88u: goto label_123c88;
        case 0x123c8cu: goto label_123c8c;
        case 0x123c90u: goto label_123c90;
        case 0x123c94u: goto label_123c94;
        case 0x123c98u: goto label_123c98;
        case 0x123c9cu: goto label_123c9c;
        case 0x123ca0u: goto label_123ca0;
        case 0x123ca4u: goto label_123ca4;
        case 0x123ca8u: goto label_123ca8;
        case 0x123cacu: goto label_123cac;
        case 0x123cb0u: goto label_123cb0;
        case 0x123cb4u: goto label_123cb4;
        case 0x123cb8u: goto label_123cb8;
        case 0x123cbcu: goto label_123cbc;
        case 0x123cc0u: goto label_123cc0;
        case 0x123cc4u: goto label_123cc4;
        case 0x123cc8u: goto label_123cc8;
        case 0x123cccu: goto label_123ccc;
        case 0x123cd0u: goto label_123cd0;
        case 0x123cd4u: goto label_123cd4;
        case 0x123cd8u: goto label_123cd8;
        case 0x123cdcu: goto label_123cdc;
        case 0x123ce0u: goto label_123ce0;
        case 0x123ce4u: goto label_123ce4;
        case 0x123ce8u: goto label_123ce8;
        case 0x123cecu: goto label_123cec;
        case 0x123cf0u: goto label_123cf0;
        case 0x123cf4u: goto label_123cf4;
        case 0x123cf8u: goto label_123cf8;
        case 0x123cfcu: goto label_123cfc;
        case 0x123d00u: goto label_123d00;
        case 0x123d04u: goto label_123d04;
        case 0x123d08u: goto label_123d08;
        case 0x123d0cu: goto label_123d0c;
        case 0x123d10u: goto label_123d10;
        case 0x123d14u: goto label_123d14;
        case 0x123d18u: goto label_123d18;
        case 0x123d1cu: goto label_123d1c;
        case 0x123d20u: goto label_123d20;
        case 0x123d24u: goto label_123d24;
        case 0x123d28u: goto label_123d28;
        case 0x123d2cu: goto label_123d2c;
        case 0x123d30u: goto label_123d30;
        case 0x123d34u: goto label_123d34;
        case 0x123d38u: goto label_123d38;
        case 0x123d3cu: goto label_123d3c;
        case 0x123d40u: goto label_123d40;
        case 0x123d44u: goto label_123d44;
        case 0x123d48u: goto label_123d48;
        case 0x123d4cu: goto label_123d4c;
        case 0x123d50u: goto label_123d50;
        case 0x123d54u: goto label_123d54;
        case 0x123d58u: goto label_123d58;
        case 0x123d5cu: goto label_123d5c;
        case 0x123d60u: goto label_123d60;
        case 0x123d64u: goto label_123d64;
        case 0x123d68u: goto label_123d68;
        case 0x123d6cu: goto label_123d6c;
        case 0x123d70u: goto label_123d70;
        case 0x123d74u: goto label_123d74;
        case 0x123d78u: goto label_123d78;
        case 0x123d7cu: goto label_123d7c;
        case 0x123d80u: goto label_123d80;
        case 0x123d84u: goto label_123d84;
        case 0x123d88u: goto label_123d88;
        case 0x123d8cu: goto label_123d8c;
        case 0x123d90u: goto label_123d90;
        case 0x123d94u: goto label_123d94;
        case 0x123d98u: goto label_123d98;
        case 0x123d9cu: goto label_123d9c;
        case 0x123da0u: goto label_123da0;
        case 0x123da4u: goto label_123da4;
        case 0x123da8u: goto label_123da8;
        case 0x123dacu: goto label_123dac;
        case 0x123db0u: goto label_123db0;
        case 0x123db4u: goto label_123db4;
        case 0x123db8u: goto label_123db8;
        case 0x123dbcu: goto label_123dbc;
        case 0x123dc0u: goto label_123dc0;
        case 0x123dc4u: goto label_123dc4;
        case 0x123dc8u: goto label_123dc8;
        case 0x123dccu: goto label_123dcc;
        case 0x123dd0u: goto label_123dd0;
        case 0x123dd4u: goto label_123dd4;
        case 0x123dd8u: goto label_123dd8;
        case 0x123ddcu: goto label_123ddc;
        case 0x123de0u: goto label_123de0;
        case 0x123de4u: goto label_123de4;
        case 0x123de8u: goto label_123de8;
        case 0x123decu: goto label_123dec;
        case 0x123df0u: goto label_123df0;
        case 0x123df4u: goto label_123df4;
        case 0x123df8u: goto label_123df8;
        case 0x123dfcu: goto label_123dfc;
        case 0x123e00u: goto label_123e00;
        case 0x123e04u: goto label_123e04;
        case 0x123e08u: goto label_123e08;
        case 0x123e0cu: goto label_123e0c;
        case 0x123e10u: goto label_123e10;
        case 0x123e14u: goto label_123e14;
        case 0x123e18u: goto label_123e18;
        case 0x123e1cu: goto label_123e1c;
        case 0x123e20u: goto label_123e20;
        case 0x123e24u: goto label_123e24;
        case 0x123e28u: goto label_123e28;
        case 0x123e2cu: goto label_123e2c;
        case 0x123e30u: goto label_123e30;
        case 0x123e34u: goto label_123e34;
        case 0x123e38u: goto label_123e38;
        case 0x123e3cu: goto label_123e3c;
        case 0x123e40u: goto label_123e40;
        case 0x123e44u: goto label_123e44;
        case 0x123e48u: goto label_123e48;
        case 0x123e4cu: goto label_123e4c;
        case 0x123e50u: goto label_123e50;
        case 0x123e54u: goto label_123e54;
        case 0x123e58u: goto label_123e58;
        case 0x123e5cu: goto label_123e5c;
        case 0x123e60u: goto label_123e60;
        case 0x123e64u: goto label_123e64;
        case 0x123e68u: goto label_123e68;
        case 0x123e6cu: goto label_123e6c;
        case 0x123e70u: goto label_123e70;
        case 0x123e74u: goto label_123e74;
        case 0x123e78u: goto label_123e78;
        case 0x123e7cu: goto label_123e7c;
        case 0x123e80u: goto label_123e80;
        case 0x123e84u: goto label_123e84;
        case 0x123e88u: goto label_123e88;
        case 0x123e8cu: goto label_123e8c;
        case 0x123e90u: goto label_123e90;
        case 0x123e94u: goto label_123e94;
        case 0x123e98u: goto label_123e98;
        case 0x123e9cu: goto label_123e9c;
        default: break;
    }

    ctx->pc = 0x123bf0u;

label_123bf0:
    // 0x123bf0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x123bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_123bf4:
    // 0x123bf4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x123bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_123bf8:
    // 0x123bf8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x123bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_123bfc:
    // 0x123bfc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x123bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_123c00:
    // 0x123c00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x123c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123c04:
    // 0x123c04: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x123c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_123c08:
    // 0x123c08: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x123c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_123c0c:
    // 0x123c0c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x123c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_123c10:
    // 0x123c10: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x123c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_123c14:
    // 0x123c14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x123c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_123c18:
    // 0x123c18: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x123c18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_123c1c:
    // 0x123c1c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x123c1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_123c20:
    // 0x123c20: 0xe68c01a0  swc1        $f12, 0x1A0($s4)
    ctx->pc = 0x123c20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 416), bits); }
label_123c24:
    // 0x123c24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x123c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_123c28:
    // 0x123c28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x123c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_123c2c:
    // 0x123c2c: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x123c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_123c30:
    // 0x123c30: 0xc48001d8  lwc1        $f0, 0x1D8($a0)
    ctx->pc = 0x123c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123c34:
    // 0x123c34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x123c34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123c38:
    // 0x123c38: 0x0  nop
    ctx->pc = 0x123c38u;
    // NOP
label_123c3c:
    // 0x123c3c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_123c40:
    if (ctx->pc == 0x123C40u) {
        ctx->pc = 0x123C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C3Cu;
        // 0x123c40: 0x968301fe  lhu         $v1, 0x1FE($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 510)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C44u;
        goto label_123c44;
    }
    ctx->pc = 0x123C3Cu;
    {
        const bool branch_taken_0x123c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x123c3c) {
            ctx->pc = 0x123C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123C3Cu;
            // 0x123c40: 0x968301fe  lhu         $v1, 0x1FE($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 510)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123C70u;
            goto label_123c70;
        }
    }
    ctx->pc = 0x123C44u;
label_123c44:
    // 0x123c44: 0xc48001dc  lwc1        $f0, 0x1DC($a0)
    ctx->pc = 0x123c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123c48:
    // 0x123c48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x123c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_123c4c:
    // 0x123c4c: 0x0  nop
    ctx->pc = 0x123c4cu;
    // NOP
label_123c50:
    // 0x123c50: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x123c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123c54:
    // 0x123c54: 0x0  nop
    ctx->pc = 0x123c54u;
    // NOP
label_123c58:
    // 0x123c58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_123c5c:
    if (ctx->pc == 0x123C5Cu) {
        ctx->pc = 0x123C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C58u;
        // 0x123c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C60u;
        goto label_123c60;
    }
    ctx->pc = 0x123C58u;
    {
        const bool branch_taken_0x123c58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C58u;
        // 0x123c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c58) {
            ctx->pc = 0x123C6Cu;
            goto label_123c6c;
        }
    }
    ctx->pc = 0x123C60u;
label_123c60:
    // 0x123c60: 0xc063416  jal         func_18D058
label_123c64:
    if (ctx->pc == 0x123C64u) {
        ctx->pc = 0x123C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C60u;
        // 0x123c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C68u;
        goto label_123c68;
    }
    ctx->pc = 0x123C60u;
    SET_GPR_U32(ctx, 31, 0x123C68u);
    ctx->pc = 0x123C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C60u;
    // 0x123c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D058u, 0x123C60u, 0x123C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C68u;
label_123c68:
    // 0x123c68: 0xa68001fe  sh          $zero, 0x1FE($s4)
    ctx->pc = 0x123c68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 510), (uint16_t)GPR_U32(ctx, 0));
label_123c6c:
    // 0x123c6c: 0x968301fe  lhu         $v1, 0x1FE($s4)
    ctx->pc = 0x123c6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 510)));
label_123c70:
    // 0x123c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123c74:
    // 0x123c74: 0x5462007c  bnel        $v1, $v0, . + 4 + (0x7C << 2)
label_123c78:
    if (ctx->pc == 0x123C78u) {
        ctx->pc = 0x123C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C74u;
        // 0x123c78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C7Cu;
        goto label_123c7c;
    }
    ctx->pc = 0x123C74u;
    {
        const bool branch_taken_0x123c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x123c74) {
            ctx->pc = 0x123C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123C74u;
            // 0x123c78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123C7Cu;
label_123c7c:
    // 0x123c7c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x123c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_123c80:
    // 0x123c80: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x123c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_123c84:
    // 0x123c84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x123c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_123c88:
    // 0x123c88: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x123c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_123c8c:
    // 0x123c8c: 0xc68001a0  lwc1        $f0, 0x1A0($s4)
    ctx->pc = 0x123c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123c90:
    // 0x123c90: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x123c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_123c94:
    // 0x123c94: 0xc69401ec  lwc1        $f20, 0x1EC($s4)
    ctx->pc = 0x123c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_123c98:
    // 0x123c98: 0x26930180  addiu       $s3, $s4, 0x180
    ctx->pc = 0x123c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
label_123c9c:
    // 0x123c9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x123c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_123ca0:
    // 0x123ca0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x123ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_123ca4:
    // 0x123ca4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x123ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_123ca8:
    // 0x123ca8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x123ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_123cac:
    // 0x123cac: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x123cacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_123cb0:
    // 0x123cb0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x123cb0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_123cb4:
    // 0x123cb4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x123cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_123cb8:
    // 0x123cb8: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x123cb8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_123cbc:
    // 0x123cbc: 0xc12e310  jal         func_4B8C40
label_123cc0:
    if (ctx->pc == 0x123CC0u) {
        ctx->pc = 0x123CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CBCu;
        // 0x123cc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CC4u;
        goto label_123cc4;
    }
    ctx->pc = 0x123CBCu;
    SET_GPR_U32(ctx, 31, 0x123CC4u);
    ctx->pc = 0x123CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CBCu;
    // 0x123cc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x123CBCu, 0x123CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CC4u;
label_123cc4:
    // 0x123cc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x123cc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_123cc8:
    // 0x123cc8: 0xc12e29c  jal         func_4B8A70
label_123ccc:
    if (ctx->pc == 0x123CCCu) {
        ctx->pc = 0x123CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CC8u;
        // 0x123ccc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CD0u;
        goto label_123cd0;
    }
    ctx->pc = 0x123CC8u;
    SET_GPR_U32(ctx, 31, 0x123CD0u);
    ctx->pc = 0x123CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CC8u;
    // 0x123ccc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x123CC8u, 0x123CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CD0u;
label_123cd0:
    // 0x123cd0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x123cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_123cd4:
    // 0x123cd4: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x123cd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_123cd8:
    // 0x123cd8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123cd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_123cdc:
    // 0x123cdc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x123cdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_123ce0:
    // 0x123ce0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x123ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_123ce4:
    // 0x123ce4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x123ce4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_123ce8:
    // 0x123ce8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x123ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_123cec:
    // 0x123cec: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x123cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_123cf0:
    // 0x123cf0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x123cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123cf4:
    // 0x123cf4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x123cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_123cf8:
    // 0x123cf8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x123cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123cfc:
    // 0x123cfc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x123cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_123d00:
    // 0x123d00: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x123d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_123d04:
    // 0x123d04: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x123d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_123d08:
    // 0x123d08: 0x247201c0  addiu       $s2, $v1, 0x1C0
    ctx->pc = 0x123d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_123d0c:
    // 0x123d0c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x123d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_123d10:
    // 0x123d10: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x123d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_123d14:
    // 0x123d14: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x123d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_123d18:
    // 0x123d18: 0x847001c0  lh          $s0, 0x1C0($v1)
    ctx->pc = 0x123d18u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_123d1c:
    // 0x123d1c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x123d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_123d20:
    // 0x123d20: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x123d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_123d24:
    // 0x123d24: 0x40f809  jalr        $v0
label_123d28:
    if (ctx->pc == 0x123D28u) {
        ctx->pc = 0x123D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D24u;
        // 0x123d28: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D2Cu;
        goto label_123d2c;
    }
    ctx->pc = 0x123D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123D2Cu);
        ctx->pc = 0x123D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D24u;
        // 0x123d28: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123D24u, 0x123D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123D2Cu;
label_123d2c:
    // 0x123d2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x123d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_123d30:
    // 0x123d30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x123d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123d34:
    // 0x123d34: 0xc136d44  jal         func_4DB510
label_123d38:
    if (ctx->pc == 0x123D38u) {
        ctx->pc = 0x123D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D34u;
        // 0x123d38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D3Cu;
        goto label_123d3c;
    }
    ctx->pc = 0x123D34u;
    SET_GPR_U32(ctx, 31, 0x123D3Cu);
    ctx->pc = 0x123D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D34u;
    // 0x123d38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x123D34u, 0x123D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D3Cu;
label_123d3c:
    // 0x123d3c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x123d3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_123d40:
    // 0x123d40: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x123d40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_123d44:
    // 0x123d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123d48:
    // 0x123d48: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x123d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_123d4c:
    // 0x123d4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x123d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_123d50:
    // 0x123d50: 0x40f809  jalr        $v0
label_123d54:
    if (ctx->pc == 0x123D54u) {
        ctx->pc = 0x123D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D50u;
        // 0x123d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D58u;
        goto label_123d58;
    }
    ctx->pc = 0x123D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123D58u);
        ctx->pc = 0x123D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D50u;
        // 0x123d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123D50u, 0x123D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123D58u;
label_123d58:
    // 0x123d58: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x123d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_123d5c:
    // 0x123d5c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x123d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_123d60:
    // 0x123d60: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x123d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_123d64:
    // 0x123d64: 0x40f809  jalr        $v0
label_123d68:
    if (ctx->pc == 0x123D68u) {
        ctx->pc = 0x123D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D64u;
        // 0x123d68: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D6Cu;
        goto label_123d6c;
    }
    ctx->pc = 0x123D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123D6Cu);
        ctx->pc = 0x123D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D64u;
        // 0x123d68: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123D64u, 0x123D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123D6Cu;
label_123d6c:
    // 0x123d6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123d70:
    // 0x123d70: 0xc0cd8ec  jal         func_3363B0
label_123d74:
    if (ctx->pc == 0x123D74u) {
        ctx->pc = 0x123D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D70u;
        // 0x123d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D78u;
        goto label_123d78;
    }
    ctx->pc = 0x123D70u;
    SET_GPR_U32(ctx, 31, 0x123D78u);
    ctx->pc = 0x123D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D70u;
    // 0x123d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x123D70u, 0x123D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D78u;
label_123d78:
    // 0x123d78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x123d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_123d7c:
    // 0x123d7c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x123d7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_123d80:
    // 0x123d80: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x123d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_123d84:
    // 0x123d84: 0x40f809  jalr        $v0
label_123d88:
    if (ctx->pc == 0x123D88u) {
        ctx->pc = 0x123D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D84u;
        // 0x123d88: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D8Cu;
        goto label_123d8c;
    }
    ctx->pc = 0x123D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123D8Cu);
        ctx->pc = 0x123D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D84u;
        // 0x123d88: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123D84u, 0x123D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123D8Cu;
label_123d8c:
    // 0x123d8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123d90:
    // 0x123d90: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x123d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_123d94:
    // 0x123d94: 0xc136afa  jal         func_4DABE8
label_123d98:
    if (ctx->pc == 0x123D98u) {
        ctx->pc = 0x123D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D94u;
        // 0x123d98: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D9Cu;
        goto label_123d9c;
    }
    ctx->pc = 0x123D94u;
    SET_GPR_U32(ctx, 31, 0x123D9Cu);
    ctx->pc = 0x123D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D94u;
    // 0x123d98: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x123D94u, 0x123D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D9Cu;
label_123d9c:
    // 0x123d9c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x123d9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_123da0:
    // 0x123da0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123da0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_123da4:
    // 0x123da4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x123da4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_123da8:
    // 0x123da8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x123da8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_123dac:
    // 0x123dac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x123dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_123db0:
    // 0x123db0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x123db0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_123db4:
    // 0x123db4: 0x4a0003bf  vwaitq
    ctx->pc = 0x123db4u;
    // VWAITQ (Q already resolved in this runtime)
label_123db8:
    // 0x123db8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x123db8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_123dbc:
    // 0x123dbc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x123dbcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_123dc0:
    // 0x123dc0: 0xc68101a0  lwc1        $f1, 0x1A0($s4)
    ctx->pc = 0x123dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123dc4:
    // 0x123dc4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x123dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_123dc8:
    // 0x123dc8: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x123dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_123dcc:
    // 0x123dcc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x123dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_123dd0:
    // 0x123dd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x123dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_123dd4:
    // 0x123dd4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x123dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_123dd8:
    // 0x123dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123ddc:
    // 0x123ddc: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x123ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_123de0:
    // 0x123de0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x123de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_123de4:
    // 0x123de4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x123de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_123de8:
    // 0x123de8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x123de8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_123dec:
    // 0x123dec: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x123decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_123df0:
    // 0x123df0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x123df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_123df4:
    // 0x123df4: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x123df4u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
label_123df8:
    // 0x123df8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x123df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123dfc:
    // 0x123dfc: 0x0  nop
    ctx->pc = 0x123dfcu;
    // NOP
label_123e00:
    // 0x123e00: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_123e04:
    if (ctx->pc == 0x123E04u) {
        ctx->pc = 0x123E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E00u;
        // 0x123e04: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E08u;
        goto label_123e08;
    }
    ctx->pc = 0x123E00u;
    {
        const bool branch_taken_0x123e00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x123e00) {
            ctx->pc = 0x123E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123E00u;
            // 0x123e04: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123E1Cu;
            goto label_123e1c;
        }
    }
    ctx->pc = 0x123E08u;
label_123e08:
    // 0x123e08: 0x460c1834  c.lt.s      $f3, $f12
    ctx->pc = 0x123e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123e0c:
    // 0x123e0c: 0x0  nop
    ctx->pc = 0x123e0cu;
    // NOP
label_123e10:
    // 0x123e10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_123e14:
    if (ctx->pc == 0x123E14u) {
        ctx->pc = 0x123E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E10u;
        // 0x123e14: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E18u;
        goto label_123e18;
    }
    ctx->pc = 0x123E10u;
    {
        const bool branch_taken_0x123e10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x123e10) {
            ctx->pc = 0x123E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123E10u;
            // 0x123e14: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x123E18u;
            goto label_123e18;
        }
    }
    ctx->pc = 0x123E18u;
label_123e18:
    // 0x123e18: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x123e18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_123e1c:
    // 0x123e1c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x123e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_123e20:
    // 0x123e20: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x123e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_123e24:
    // 0x123e24: 0x863001b8  lh          $s0, 0x1B8($s1)
    ctx->pc = 0x123e24u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 440)));
label_123e28:
    // 0x123e28: 0x263101b8  addiu       $s1, $s1, 0x1B8
    ctx->pc = 0x123e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
label_123e2c:
    // 0x123e2c: 0xc136b24  jal         func_4DAC90
label_123e30:
    if (ctx->pc == 0x123E30u) {
        ctx->pc = 0x123E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E2Cu;
        // 0x123e30: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E34u;
        goto label_123e34;
    }
    ctx->pc = 0x123E2Cu;
    SET_GPR_U32(ctx, 31, 0x123E34u);
    ctx->pc = 0x123E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E2Cu;
    // 0x123e30: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x123E2Cu, 0x123E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E34u;
label_123e34:
    // 0x123e34: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x123e34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_123e38:
    // 0x123e38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x123e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_123e3c:
    // 0x123e3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x123e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_123e40:
    // 0x123e40: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x123e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_123e44:
    // 0x123e44: 0xc136afa  jal         func_4DABE8
label_123e48:
    if (ctx->pc == 0x123E48u) {
        ctx->pc = 0x123E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E44u;
        // 0x123e48: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E4Cu;
        goto label_123e4c;
    }
    ctx->pc = 0x123E44u;
    SET_GPR_U32(ctx, 31, 0x123E4Cu);
    ctx->pc = 0x123E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E44u;
    // 0x123e48: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x123E44u, 0x123E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E4Cu;
label_123e4c:
    // 0x123e4c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x123e4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_123e50:
    // 0x123e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123e54:
    // 0x123e54: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x123e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_123e58:
    // 0x123e58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x123e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_123e5c:
    // 0x123e5c: 0x40f809  jalr        $v0
label_123e60:
    if (ctx->pc == 0x123E60u) {
        ctx->pc = 0x123E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E5Cu;
        // 0x123e60: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E64u;
        goto label_123e64;
    }
    ctx->pc = 0x123E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123E64u);
        ctx->pc = 0x123E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E5Cu;
        // 0x123e60: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123E5Cu, 0x123E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123E64u;
label_123e64:
    // 0x123e64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x123e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_123e68:
    // 0x123e68: 0xc04828c  jal         func_120A30
label_123e6c:
    if (ctx->pc == 0x123E6Cu) {
        ctx->pc = 0x123E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E68u;
        // 0x123e6c: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E70u;
        goto label_123e70;
    }
    ctx->pc = 0x123E68u;
    SET_GPR_U32(ctx, 31, 0x123E70u);
    ctx->pc = 0x123E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E68u;
    // 0x123e6c: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x123E68u, 0x123E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E70u;
label_123e70:
    // 0x123e70: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x123e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_123e74:
    // 0x123e74: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x123e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_123e78:
    // 0x123e78: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x123e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_123e7c:
    // 0x123e7c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x123e7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_123e80:
    // 0x123e80: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x123e80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_123e84:
    // 0x123e84: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x123e84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_123e88:
    // 0x123e88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x123e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_123e8c:
    // 0x123e8c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x123e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_123e90:
    // 0x123e90: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x123e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_123e94:
    // 0x123e94: 0x3e00008  jr          $ra
label_123e98:
    if (ctx->pc == 0x123E98u) {
        ctx->pc = 0x123E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E94u;
        // 0x123e98: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E9Cu;
        goto label_123e9c;
    }
    ctx->pc = 0x123E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E94u;
        // 0x123e98: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123E9Cu;
label_123e9c:
    // 0x123e9c: 0x0  nop
    ctx->pc = 0x123e9cu;
    // NOP
    ctx->pc = 0x123ea0u;
}
