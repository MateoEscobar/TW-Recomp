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

// Function: sub_003E1EE0
// Address: 0x3e1ee0 - 0x3e20d0
void sub_003E1EE0_0x3e1ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1EE0_0x3e1ee0");
#endif

    switch (ctx->pc) {
        case 0x3e1ee0u: goto label_3e1ee0;
        case 0x3e1ee4u: goto label_3e1ee4;
        case 0x3e1ee8u: goto label_3e1ee8;
        case 0x3e1eecu: goto label_3e1eec;
        case 0x3e1ef0u: goto label_3e1ef0;
        case 0x3e1ef4u: goto label_3e1ef4;
        case 0x3e1ef8u: goto label_3e1ef8;
        case 0x3e1efcu: goto label_3e1efc;
        case 0x3e1f00u: goto label_3e1f00;
        case 0x3e1f04u: goto label_3e1f04;
        case 0x3e1f08u: goto label_3e1f08;
        case 0x3e1f0cu: goto label_3e1f0c;
        case 0x3e1f10u: goto label_3e1f10;
        case 0x3e1f14u: goto label_3e1f14;
        case 0x3e1f18u: goto label_3e1f18;
        case 0x3e1f1cu: goto label_3e1f1c;
        case 0x3e1f20u: goto label_3e1f20;
        case 0x3e1f24u: goto label_3e1f24;
        case 0x3e1f28u: goto label_3e1f28;
        case 0x3e1f2cu: goto label_3e1f2c;
        case 0x3e1f30u: goto label_3e1f30;
        case 0x3e1f34u: goto label_3e1f34;
        case 0x3e1f38u: goto label_3e1f38;
        case 0x3e1f3cu: goto label_3e1f3c;
        case 0x3e1f40u: goto label_3e1f40;
        case 0x3e1f44u: goto label_3e1f44;
        case 0x3e1f48u: goto label_3e1f48;
        case 0x3e1f4cu: goto label_3e1f4c;
        case 0x3e1f50u: goto label_3e1f50;
        case 0x3e1f54u: goto label_3e1f54;
        case 0x3e1f58u: goto label_3e1f58;
        case 0x3e1f5cu: goto label_3e1f5c;
        case 0x3e1f60u: goto label_3e1f60;
        case 0x3e1f64u: goto label_3e1f64;
        case 0x3e1f68u: goto label_3e1f68;
        case 0x3e1f6cu: goto label_3e1f6c;
        case 0x3e1f70u: goto label_3e1f70;
        case 0x3e1f74u: goto label_3e1f74;
        case 0x3e1f78u: goto label_3e1f78;
        case 0x3e1f7cu: goto label_3e1f7c;
        case 0x3e1f80u: goto label_3e1f80;
        case 0x3e1f84u: goto label_3e1f84;
        case 0x3e1f88u: goto label_3e1f88;
        case 0x3e1f8cu: goto label_3e1f8c;
        case 0x3e1f90u: goto label_3e1f90;
        case 0x3e1f94u: goto label_3e1f94;
        case 0x3e1f98u: goto label_3e1f98;
        case 0x3e1f9cu: goto label_3e1f9c;
        case 0x3e1fa0u: goto label_3e1fa0;
        case 0x3e1fa4u: goto label_3e1fa4;
        case 0x3e1fa8u: goto label_3e1fa8;
        case 0x3e1facu: goto label_3e1fac;
        case 0x3e1fb0u: goto label_3e1fb0;
        case 0x3e1fb4u: goto label_3e1fb4;
        case 0x3e1fb8u: goto label_3e1fb8;
        case 0x3e1fbcu: goto label_3e1fbc;
        case 0x3e1fc0u: goto label_3e1fc0;
        case 0x3e1fc4u: goto label_3e1fc4;
        case 0x3e1fc8u: goto label_3e1fc8;
        case 0x3e1fccu: goto label_3e1fcc;
        case 0x3e1fd0u: goto label_3e1fd0;
        case 0x3e1fd4u: goto label_3e1fd4;
        case 0x3e1fd8u: goto label_3e1fd8;
        case 0x3e1fdcu: goto label_3e1fdc;
        case 0x3e1fe0u: goto label_3e1fe0;
        case 0x3e1fe4u: goto label_3e1fe4;
        case 0x3e1fe8u: goto label_3e1fe8;
        case 0x3e1fecu: goto label_3e1fec;
        case 0x3e1ff0u: goto label_3e1ff0;
        case 0x3e1ff4u: goto label_3e1ff4;
        case 0x3e1ff8u: goto label_3e1ff8;
        case 0x3e1ffcu: goto label_3e1ffc;
        case 0x3e2000u: goto label_3e2000;
        case 0x3e2004u: goto label_3e2004;
        case 0x3e2008u: goto label_3e2008;
        case 0x3e200cu: goto label_3e200c;
        case 0x3e2010u: goto label_3e2010;
        case 0x3e2014u: goto label_3e2014;
        case 0x3e2018u: goto label_3e2018;
        case 0x3e201cu: goto label_3e201c;
        case 0x3e2020u: goto label_3e2020;
        case 0x3e2024u: goto label_3e2024;
        case 0x3e2028u: goto label_3e2028;
        case 0x3e202cu: goto label_3e202c;
        case 0x3e2030u: goto label_3e2030;
        case 0x3e2034u: goto label_3e2034;
        case 0x3e2038u: goto label_3e2038;
        case 0x3e203cu: goto label_3e203c;
        case 0x3e2040u: goto label_3e2040;
        case 0x3e2044u: goto label_3e2044;
        case 0x3e2048u: goto label_3e2048;
        case 0x3e204cu: goto label_3e204c;
        case 0x3e2050u: goto label_3e2050;
        case 0x3e2054u: goto label_3e2054;
        case 0x3e2058u: goto label_3e2058;
        case 0x3e205cu: goto label_3e205c;
        case 0x3e2060u: goto label_3e2060;
        case 0x3e2064u: goto label_3e2064;
        case 0x3e2068u: goto label_3e2068;
        case 0x3e206cu: goto label_3e206c;
        case 0x3e2070u: goto label_3e2070;
        case 0x3e2074u: goto label_3e2074;
        case 0x3e2078u: goto label_3e2078;
        case 0x3e207cu: goto label_3e207c;
        case 0x3e2080u: goto label_3e2080;
        case 0x3e2084u: goto label_3e2084;
        case 0x3e2088u: goto label_3e2088;
        case 0x3e208cu: goto label_3e208c;
        case 0x3e2090u: goto label_3e2090;
        case 0x3e2094u: goto label_3e2094;
        case 0x3e2098u: goto label_3e2098;
        case 0x3e209cu: goto label_3e209c;
        case 0x3e20a0u: goto label_3e20a0;
        case 0x3e20a4u: goto label_3e20a4;
        case 0x3e20a8u: goto label_3e20a8;
        case 0x3e20acu: goto label_3e20ac;
        case 0x3e20b0u: goto label_3e20b0;
        case 0x3e20b4u: goto label_3e20b4;
        case 0x3e20b8u: goto label_3e20b8;
        case 0x3e20bcu: goto label_3e20bc;
        case 0x3e20c0u: goto label_3e20c0;
        case 0x3e20c4u: goto label_3e20c4;
        case 0x3e20c8u: goto label_3e20c8;
        case 0x3e20ccu: goto label_3e20cc;
        default: break;
    }

    ctx->pc = 0x3e1ee0u;

label_3e1ee0:
    // 0x3e1ee0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3e1ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3e1ee4:
    // 0x3e1ee4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3e1ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3e1ee8:
    // 0x3e1ee8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3e1ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3e1eec:
    // 0x3e1eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1ef0:
    // 0x3e1ef0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3e1ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3e1ef4:
    // 0x3e1ef4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e1ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e1ef8:
    // 0x3e1ef8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3e1ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3e1efc:
    // 0x3e1efc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3e1efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3e1f00:
    // 0x3e1f00: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x3e1f00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_3e1f04:
    // 0x3e1f04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e1f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3e1f08:
    // 0x3e1f08: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x3e1f08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3e1f0c:
    // 0x3e1f0c: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x3e1f0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3e1f10:
    // 0x3e1f10: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x3e1f10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3e1f14:
    // 0x3e1f14: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3e1f14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3e1f18:
    // 0x3e1f18: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3e1f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3e1f1c:
    // 0x3e1f1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e1f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e1f20:
    // 0x3e1f20: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e1f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e1f24:
    // 0x3e1f24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e1f28:
    // 0x3e1f28: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x3e1f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_3e1f2c:
    // 0x3e1f2c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e1f2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e1f30:
    // 0x3e1f30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3e1f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e1f34:
    // 0x3e1f34: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e1f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e1f38:
    // 0x3e1f38: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e1f3c:
    // 0x3e1f3c: 0x40f809  jalr        $v0
label_3e1f40:
    if (ctx->pc == 0x3E1F40u) {
        ctx->pc = 0x3E1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F3Cu;
        // 0x3e1f40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1F44u;
        goto label_3e1f44;
    }
    ctx->pc = 0x3E1F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E1F44u);
        ctx->pc = 0x3E1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F3Cu;
        // 0x3e1f40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1F3Cu, 0x3E1F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1F44u;
label_3e1f44:
    // 0x3e1f44: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x3e1f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_3e1f48:
    // 0x3e1f48: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3e1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3e1f4c:
    // 0x3e1f4c: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3e1f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3e1f50:
    // 0x3e1f50: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3e1f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3e1f54:
    // 0x3e1f54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e1f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1f58:
    // 0x3e1f58: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3e1f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3e1f5c:
    // 0x3e1f5c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3e1f5cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3e1f60:
    // 0x3e1f60: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x3e1f60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_3e1f64:
    // 0x3e1f64: 0x24d44638  addiu       $s4, $a2, 0x4638
    ctx->pc = 0x3e1f64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 17976));
label_3e1f68:
    // 0x3e1f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1f6c:
    // 0x3e1f6c: 0x7e450000  sq          $a1, 0x0($s2)
    ctx->pc = 0x3e1f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 5));
label_3e1f70:
    // 0x3e1f70: 0x8cc24638  lw          $v0, 0x4638($a2)
    ctx->pc = 0x3e1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17976)));
label_3e1f74:
    // 0x3e1f74: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3e1f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_3e1f78:
    // 0x3e1f78: 0xc0e858c  jal         func_3A1630
label_3e1f7c:
    if (ctx->pc == 0x3E1F7Cu) {
        ctx->pc = 0x3E1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F78u;
        // 0x3e1f7c: 0x8ce54658  lw          $a1, 0x4658($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1F80u;
        goto label_3e1f80;
    }
    ctx->pc = 0x3E1F78u;
    SET_GPR_U32(ctx, 31, 0x3E1F80u);
    ctx->pc = 0x3E1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1F78u;
    // 0x3e1f7c: 0x8ce54658  lw          $a1, 0x4658($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18008)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E1F78u, 0x3E1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1F80u;
label_3e1f80:
    // 0x3e1f80: 0xc6604678  lwc1        $f0, 0x4678($s3)
    ctx->pc = 0x3e1f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 18040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e1f84:
    // 0x3e1f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e1f88:
    // 0x3e1f88: 0xc0ea14c  jal         func_3A8530
label_3e1f8c:
    if (ctx->pc == 0x3E1F8Cu) {
        ctx->pc = 0x3E1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F88u;
        // 0x3e1f8c: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1F90u;
        goto label_3e1f90;
    }
    ctx->pc = 0x3E1F88u;
    SET_GPR_U32(ctx, 31, 0x3E1F90u);
    ctx->pc = 0x3E1F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1F88u;
    // 0x3e1f8c: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E1F88u, 0x3E1F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1F90u;
label_3e1f90:
    // 0x3e1f90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e1f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e1f94:
    // 0x3e1f94: 0xc0ea12a  jal         func_3A84A8
label_3e1f98:
    if (ctx->pc == 0x3E1F98u) {
        ctx->pc = 0x3E1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F94u;
        // 0x3e1f98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1F9Cu;
        goto label_3e1f9c;
    }
    ctx->pc = 0x3E1F94u;
    SET_GPR_U32(ctx, 31, 0x3E1F9Cu);
    ctx->pc = 0x3E1F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1F94u;
    // 0x3e1f98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E1F94u, 0x3E1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1F9Cu;
label_3e1f9c:
    // 0x3e1f9c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e1f9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e1fa0:
    // 0x3e1fa0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e1fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e1fa4:
    // 0x3e1fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e1fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e1fa8:
    // 0x3e1fa8: 0xc0ea12a  jal         func_3A84A8
label_3e1fac:
    if (ctx->pc == 0x3E1FACu) {
        ctx->pc = 0x3E1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1FA8u;
        // 0x3e1fac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1FB0u;
        goto label_3e1fb0;
    }
    ctx->pc = 0x3E1FA8u;
    SET_GPR_U32(ctx, 31, 0x3E1FB0u);
    ctx->pc = 0x3E1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1FA8u;
    // 0x3e1fac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E1FA8u, 0x3E1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1FB0u;
label_3e1fb0:
    // 0x3e1fb0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e1fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e1fb4:
    // 0x3e1fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e1fb8:
    // 0x3e1fb8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3e1fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3e1fbc:
    // 0x3e1fbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e1fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1fc0:
    // 0x3e1fc0: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3e1fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3e1fc4:
    // 0x3e1fc4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3e1fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3e1fc8:
    // 0x3e1fc8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x3e1fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_3e1fcc:
    // 0x3e1fcc: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x3e1fccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_3e1fd0:
    // 0x3e1fd0: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3e1fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3e1fd4:
    // 0x3e1fd4: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x3e1fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_3e1fd8:
    // 0x3e1fd8: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x3e1fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e1fdc:
    // 0x3e1fdc: 0x0  nop
    ctx->pc = 0x3e1fdcu;
    // NOP
label_3e1fe0:
    // 0x3e1fe0: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x3e1fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_3e1fe4:
    // 0x3e1fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e1fe8:
    // 0x3e1fe8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e1fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1fec:
    // 0x3e1fec: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e1fecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1ff0:
    // 0x3e1ff0: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3e1ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3e1ff4:
    // 0x3e1ff4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3e1ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3e1ff8:
    // 0x3e1ff8: 0xc6604678  lwc1        $f0, 0x4678($s3)
    ctx->pc = 0x3e1ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 18040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e1ffc:
    // 0x3e1ffc: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3e1ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e2000:
    // 0x3e2000: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e2000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e2004:
    // 0x3e2004: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3e2004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3e2008:
    // 0x3e2008: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x3e2008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e200c:
    // 0x3e200c: 0xc6614678  lwc1        $f1, 0x4678($s3)
    ctx->pc = 0x3e200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 18040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e2010:
    // 0x3e2010: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3e2010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3e2014:
    // 0x3e2014: 0xe60100c0  swc1        $f1, 0xC0($s0)
    ctx->pc = 0x3e2014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3e2018:
    // 0x3e2018: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3e2018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3e201c:
    // 0x3e201c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3e201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3e2020:
    // 0x3e2020: 0xae0600c4  sw          $a2, 0xC4($s0)
    ctx->pc = 0x3e2020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 6));
label_3e2024:
    // 0x3e2024: 0xc0cd4ee  jal         func_3353B8
label_3e2028:
    if (ctx->pc == 0x3E2028u) {
        ctx->pc = 0x3E2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2024u;
        // 0x3e2028: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E202Cu;
        goto label_3e202c;
    }
    ctx->pc = 0x3E2024u;
    SET_GPR_U32(ctx, 31, 0x3E202Cu);
    ctx->pc = 0x3E2028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2024u;
    // 0x3e2028: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E2024u, 0x3E202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E202Cu;
label_3e202c:
    // 0x3e202c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3e202cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3e2030:
    // 0x3e2030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2034:
    // 0x3e2034: 0x34a5002a  ori         $a1, $a1, 0x2A
    ctx->pc = 0x3e2034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42);
label_3e2038:
    // 0x3e2038: 0xc0e9404  jal         func_3A5010
label_3e203c:
    if (ctx->pc == 0x3E203Cu) {
        ctx->pc = 0x3E203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2038u;
        // 0x3e203c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2040u;
        goto label_3e2040;
    }
    ctx->pc = 0x3E2038u;
    SET_GPR_U32(ctx, 31, 0x3E2040u);
    ctx->pc = 0x3E203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2038u;
    // 0x3e203c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3E2038u, 0x3E2040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2040u;
label_3e2040:
    // 0x3e2040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e2044:
    // 0x3e2044: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e2044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e2048:
    // 0x3e2048: 0xc0cd518  jal         func_335460
label_3e204c:
    if (ctx->pc == 0x3E204Cu) {
        ctx->pc = 0x3E204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2048u;
        // 0x3e204c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2050u;
        goto label_3e2050;
    }
    ctx->pc = 0x3E2048u;
    SET_GPR_U32(ctx, 31, 0x3E2050u);
    ctx->pc = 0x3E204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2048u;
    // 0x3e204c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E2048u, 0x3E2050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2050u;
label_3e2050:
    // 0x3e2050: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e2050u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e2054:
    // 0x3e2054: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e2054u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e2058:
    // 0x3e2058: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3e2058u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3e205c:
    // 0x3e205c: 0xc0cd518  jal         func_335460
label_3e2060:
    if (ctx->pc == 0x3E2060u) {
        ctx->pc = 0x3E2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E205Cu;
        // 0x3e2060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2064u;
        goto label_3e2064;
    }
    ctx->pc = 0x3E205Cu;
    SET_GPR_U32(ctx, 31, 0x3E2064u);
    ctx->pc = 0x3E2060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E205Cu;
    // 0x3e2060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E205Cu, 0x3E2064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2064u;
label_3e2064:
    // 0x3e2064: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e2064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e2068:
    // 0x3e2068: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e2068u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e206c:
    // 0x3e206c: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x3e206cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_3e2070:
    // 0x3e2070: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e2070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e2074:
    // 0x3e2074: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e2074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e2078:
    // 0x3e2078: 0xc0cd518  jal         func_335460
label_3e207c:
    if (ctx->pc == 0x3E207Cu) {
        ctx->pc = 0x3E207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2078u;
        // 0x3e207c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2080u;
        goto label_3e2080;
    }
    ctx->pc = 0x3E2078u;
    SET_GPR_U32(ctx, 31, 0x3E2080u);
    ctx->pc = 0x3E207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2078u;
    // 0x3e207c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E2078u, 0x3E2080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2080u;
label_3e2080:
    // 0x3e2080: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x3e2080u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3e2084:
    // 0x3e2084: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x3e2084u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3e2088:
    // 0x3e2088: 0xe7b6003c  swc1        $f22, 0x3C($sp)
    ctx->pc = 0x3e2088u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3e208c:
    // 0x3e208c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3e208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3e2090:
    // 0x3e2090: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3e2090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e2094:
    // 0x3e2094: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e2094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e2098:
    // 0x3e2098: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3e2098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e209c:
    // 0x3e209c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3e209cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3e20a0:
    // 0x3e20a0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3e20a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e20a4:
    // 0x3e20a4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3e20a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e20a8:
    // 0x3e20a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3e20a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e20ac:
    // 0x3e20ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e20acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3e20b0:
    // 0x3e20b0: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x3e20b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e20b4:
    // 0x3e20b4: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x3e20b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e20b8:
    // 0x3e20b8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x3e20b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e20bc:
    // 0x3e20bc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3e20bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e20c0:
    // 0x3e20c0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e20c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e20c4:
    // 0x3e20c4: 0x3e00008  jr          $ra
label_3e20c8:
    if (ctx->pc == 0x3E20C8u) {
        ctx->pc = 0x3E20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20C4u;
        // 0x3e20c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E20CCu;
        goto label_3e20cc;
    }
    ctx->pc = 0x3E20C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20C4u;
        // 0x3e20c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E20C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E20CCu;
label_3e20cc:
    // 0x3e20cc: 0x0  nop
    ctx->pc = 0x3e20ccu;
    // NOP
    ctx->pc = 0x3e20d0u;
}
