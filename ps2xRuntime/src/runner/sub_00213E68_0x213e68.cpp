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

// Function: sub_00213E68
// Address: 0x213e68 - 0x214138
void sub_00213E68_0x213e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213E68_0x213e68");
#endif

    switch (ctx->pc) {
        case 0x213e68u: goto label_213e68;
        case 0x213e6cu: goto label_213e6c;
        case 0x213e70u: goto label_213e70;
        case 0x213e74u: goto label_213e74;
        case 0x213e78u: goto label_213e78;
        case 0x213e7cu: goto label_213e7c;
        case 0x213e80u: goto label_213e80;
        case 0x213e84u: goto label_213e84;
        case 0x213e88u: goto label_213e88;
        case 0x213e8cu: goto label_213e8c;
        case 0x213e90u: goto label_213e90;
        case 0x213e94u: goto label_213e94;
        case 0x213e98u: goto label_213e98;
        case 0x213e9cu: goto label_213e9c;
        case 0x213ea0u: goto label_213ea0;
        case 0x213ea4u: goto label_213ea4;
        case 0x213ea8u: goto label_213ea8;
        case 0x213eacu: goto label_213eac;
        case 0x213eb0u: goto label_213eb0;
        case 0x213eb4u: goto label_213eb4;
        case 0x213eb8u: goto label_213eb8;
        case 0x213ebcu: goto label_213ebc;
        case 0x213ec0u: goto label_213ec0;
        case 0x213ec4u: goto label_213ec4;
        case 0x213ec8u: goto label_213ec8;
        case 0x213eccu: goto label_213ecc;
        case 0x213ed0u: goto label_213ed0;
        case 0x213ed4u: goto label_213ed4;
        case 0x213ed8u: goto label_213ed8;
        case 0x213edcu: goto label_213edc;
        case 0x213ee0u: goto label_213ee0;
        case 0x213ee4u: goto label_213ee4;
        case 0x213ee8u: goto label_213ee8;
        case 0x213eecu: goto label_213eec;
        case 0x213ef0u: goto label_213ef0;
        case 0x213ef4u: goto label_213ef4;
        case 0x213ef8u: goto label_213ef8;
        case 0x213efcu: goto label_213efc;
        case 0x213f00u: goto label_213f00;
        case 0x213f04u: goto label_213f04;
        case 0x213f08u: goto label_213f08;
        case 0x213f0cu: goto label_213f0c;
        case 0x213f10u: goto label_213f10;
        case 0x213f14u: goto label_213f14;
        case 0x213f18u: goto label_213f18;
        case 0x213f1cu: goto label_213f1c;
        case 0x213f20u: goto label_213f20;
        case 0x213f24u: goto label_213f24;
        case 0x213f28u: goto label_213f28;
        case 0x213f2cu: goto label_213f2c;
        case 0x213f30u: goto label_213f30;
        case 0x213f34u: goto label_213f34;
        case 0x213f38u: goto label_213f38;
        case 0x213f3cu: goto label_213f3c;
        case 0x213f40u: goto label_213f40;
        case 0x213f44u: goto label_213f44;
        case 0x213f48u: goto label_213f48;
        case 0x213f4cu: goto label_213f4c;
        case 0x213f50u: goto label_213f50;
        case 0x213f54u: goto label_213f54;
        case 0x213f58u: goto label_213f58;
        case 0x213f5cu: goto label_213f5c;
        case 0x213f60u: goto label_213f60;
        case 0x213f64u: goto label_213f64;
        case 0x213f68u: goto label_213f68;
        case 0x213f6cu: goto label_213f6c;
        case 0x213f70u: goto label_213f70;
        case 0x213f74u: goto label_213f74;
        case 0x213f78u: goto label_213f78;
        case 0x213f7cu: goto label_213f7c;
        case 0x213f80u: goto label_213f80;
        case 0x213f84u: goto label_213f84;
        case 0x213f88u: goto label_213f88;
        case 0x213f8cu: goto label_213f8c;
        case 0x213f90u: goto label_213f90;
        case 0x213f94u: goto label_213f94;
        case 0x213f98u: goto label_213f98;
        case 0x213f9cu: goto label_213f9c;
        case 0x213fa0u: goto label_213fa0;
        case 0x213fa4u: goto label_213fa4;
        case 0x213fa8u: goto label_213fa8;
        case 0x213facu: goto label_213fac;
        case 0x213fb0u: goto label_213fb0;
        case 0x213fb4u: goto label_213fb4;
        case 0x213fb8u: goto label_213fb8;
        case 0x213fbcu: goto label_213fbc;
        case 0x213fc0u: goto label_213fc0;
        case 0x213fc4u: goto label_213fc4;
        case 0x213fc8u: goto label_213fc8;
        case 0x213fccu: goto label_213fcc;
        case 0x213fd0u: goto label_213fd0;
        case 0x213fd4u: goto label_213fd4;
        case 0x213fd8u: goto label_213fd8;
        case 0x213fdcu: goto label_213fdc;
        case 0x213fe0u: goto label_213fe0;
        case 0x213fe4u: goto label_213fe4;
        case 0x213fe8u: goto label_213fe8;
        case 0x213fecu: goto label_213fec;
        case 0x213ff0u: goto label_213ff0;
        case 0x213ff4u: goto label_213ff4;
        case 0x213ff8u: goto label_213ff8;
        case 0x213ffcu: goto label_213ffc;
        case 0x214000u: goto label_214000;
        case 0x214004u: goto label_214004;
        case 0x214008u: goto label_214008;
        case 0x21400cu: goto label_21400c;
        case 0x214010u: goto label_214010;
        case 0x214014u: goto label_214014;
        case 0x214018u: goto label_214018;
        case 0x21401cu: goto label_21401c;
        case 0x214020u: goto label_214020;
        case 0x214024u: goto label_214024;
        case 0x214028u: goto label_214028;
        case 0x21402cu: goto label_21402c;
        case 0x214030u: goto label_214030;
        case 0x214034u: goto label_214034;
        case 0x214038u: goto label_214038;
        case 0x21403cu: goto label_21403c;
        case 0x214040u: goto label_214040;
        case 0x214044u: goto label_214044;
        case 0x214048u: goto label_214048;
        case 0x21404cu: goto label_21404c;
        case 0x214050u: goto label_214050;
        case 0x214054u: goto label_214054;
        case 0x214058u: goto label_214058;
        case 0x21405cu: goto label_21405c;
        case 0x214060u: goto label_214060;
        case 0x214064u: goto label_214064;
        case 0x214068u: goto label_214068;
        case 0x21406cu: goto label_21406c;
        case 0x214070u: goto label_214070;
        case 0x214074u: goto label_214074;
        case 0x214078u: goto label_214078;
        case 0x21407cu: goto label_21407c;
        case 0x214080u: goto label_214080;
        case 0x214084u: goto label_214084;
        case 0x214088u: goto label_214088;
        case 0x21408cu: goto label_21408c;
        case 0x214090u: goto label_214090;
        case 0x214094u: goto label_214094;
        case 0x214098u: goto label_214098;
        case 0x21409cu: goto label_21409c;
        case 0x2140a0u: goto label_2140a0;
        case 0x2140a4u: goto label_2140a4;
        case 0x2140a8u: goto label_2140a8;
        case 0x2140acu: goto label_2140ac;
        case 0x2140b0u: goto label_2140b0;
        case 0x2140b4u: goto label_2140b4;
        case 0x2140b8u: goto label_2140b8;
        case 0x2140bcu: goto label_2140bc;
        case 0x2140c0u: goto label_2140c0;
        case 0x2140c4u: goto label_2140c4;
        case 0x2140c8u: goto label_2140c8;
        case 0x2140ccu: goto label_2140cc;
        case 0x2140d0u: goto label_2140d0;
        case 0x2140d4u: goto label_2140d4;
        case 0x2140d8u: goto label_2140d8;
        case 0x2140dcu: goto label_2140dc;
        case 0x2140e0u: goto label_2140e0;
        case 0x2140e4u: goto label_2140e4;
        case 0x2140e8u: goto label_2140e8;
        case 0x2140ecu: goto label_2140ec;
        case 0x2140f0u: goto label_2140f0;
        case 0x2140f4u: goto label_2140f4;
        case 0x2140f8u: goto label_2140f8;
        case 0x2140fcu: goto label_2140fc;
        case 0x214100u: goto label_214100;
        case 0x214104u: goto label_214104;
        case 0x214108u: goto label_214108;
        case 0x21410cu: goto label_21410c;
        case 0x214110u: goto label_214110;
        case 0x214114u: goto label_214114;
        case 0x214118u: goto label_214118;
        case 0x21411cu: goto label_21411c;
        case 0x214120u: goto label_214120;
        case 0x214124u: goto label_214124;
        case 0x214128u: goto label_214128;
        case 0x21412cu: goto label_21412c;
        case 0x214130u: goto label_214130;
        case 0x214134u: goto label_214134;
        default: break;
    }

    ctx->pc = 0x213e68u;

label_213e68:
    // 0x213e68: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x213e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_213e6c:
    // 0x213e6c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x213e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_213e70:
    // 0x213e70: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x213e70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_213e74:
    // 0x213e74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x213e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_213e78:
    // 0x213e78: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x213e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_213e7c:
    // 0x213e7c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x213e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_213e80:
    // 0x213e80: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x213e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_213e84:
    // 0x213e84: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x213e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_213e88:
    // 0x213e88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x213e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_213e8c:
    // 0x213e8c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x213e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_213e90:
    // 0x213e90: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x213e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_213e94:
    // 0x213e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x213e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_213e98:
    // 0x213e98: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x213e98u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_213e9c:
    // 0x213e9c: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x213e9cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_213ea0:
    // 0x213ea0: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x213ea0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_213ea4:
    // 0x213ea4: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x213ea4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_213ea8:
    // 0x213ea8: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x213ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_213eac:
    // 0x213eac: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
label_213eb0:
    if (ctx->pc == 0x213EB0u) {
        ctx->pc = 0x213EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EACu;
        // 0x213eb0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x213EB4u;
        goto label_213eb4;
    }
    ctx->pc = 0x213EACu;
    {
        const bool branch_taken_0x213eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EACu;
        // 0x213eb0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213eac) {
            ctx->pc = 0x213F28u;
            goto label_213f28;
        }
    }
    ctx->pc = 0x213EB4u;
label_213eb4:
    // 0x213eb4: 0x8e2340f4  lw          $v1, 0x40F4($s1)
    ctx->pc = 0x213eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16628)));
label_213eb8:
    // 0x213eb8: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x213eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_213ebc:
    // 0x213ebc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x213ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_213ec0:
    // 0x213ec0: 0x3c013e15  lui         $at, 0x3E15
    ctx->pc = 0x213ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15893 << 16));
label_213ec4:
    // 0x213ec4: 0x34218106  ori         $at, $at, 0x8106
    ctx->pc = 0x213ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33030);
label_213ec8:
    // 0x213ec8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_213ecc:
    // 0x213ecc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x213eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_213ed0:
    // 0x213ed0: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x213ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
label_213ed4:
    // 0x213ed4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x213ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_213ed8:
    // 0x213ed8: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x213ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213edc:
    // 0x213edc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x213edcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_213ee0:
    // 0x213ee0: 0x0  nop
    ctx->pc = 0x213ee0u;
    // NOP
label_213ee4:
    // 0x213ee4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_213ee8:
    if (ctx->pc == 0x213EE8u) {
        ctx->pc = 0x213EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EE4u;
        // 0x213ee8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213EECu;
        goto label_213eec;
    }
    ctx->pc = 0x213EE4u;
    {
        const bool branch_taken_0x213ee4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EE4u;
        // 0x213ee8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ee4) {
            ctx->pc = 0x213EF8u;
            goto label_213ef8;
        }
    }
    ctx->pc = 0x213EECu;
label_213eec:
    // 0x213eec: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x213eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_213ef0:
    // 0x213ef0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_213ef4:
    if (ctx->pc == 0x213EF4u) {
        ctx->pc = 0x213EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EF0u;
        // 0x213ef4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213EF8u;
        goto label_213ef8;
    }
    ctx->pc = 0x213EF0u;
    {
        const bool branch_taken_0x213ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x213EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EF0u;
        // 0x213ef4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ef0) {
            ctx->pc = 0x213F18u;
            goto label_213f18;
        }
    }
    ctx->pc = 0x213EF8u;
label_213ef8:
    // 0x213ef8: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x213ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213efc:
    // 0x213efc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x213efcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_213f00:
    // 0x213f00: 0x0  nop
    ctx->pc = 0x213f00u;
    // NOP
label_213f04:
    // 0x213f04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_213f08:
    if (ctx->pc == 0x213F08u) {
        ctx->pc = 0x213F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F04u;
        // 0x213f08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213F0Cu;
        goto label_213f0c;
    }
    ctx->pc = 0x213F04u;
    {
        const bool branch_taken_0x213f04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F04u;
        // 0x213f08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f04) {
            ctx->pc = 0x213F20u;
            goto label_213f20;
        }
    }
    ctx->pc = 0x213F0Cu;
label_213f0c:
    // 0x213f0c: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x213f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_213f10:
    // 0x213f10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_213f14:
    if (ctx->pc == 0x213F14u) {
        ctx->pc = 0x213F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F10u;
        // 0x213f14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213F18u;
        goto label_213f18;
    }
    ctx->pc = 0x213F10u;
    {
        const bool branch_taken_0x213f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F10u;
        // 0x213f14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f10) {
            ctx->pc = 0x213F20u;
            goto label_213f20;
        }
    }
    ctx->pc = 0x213F18u;
label_213f18:
    // 0x213f18: 0x10000003  b           . + 4 + (0x3 << 2)
label_213f1c:
    if (ctx->pc == 0x213F1Cu) {
        ctx->pc = 0x213F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F18u;
        // 0x213f1c: 0xc45700a4  lwc1        $f23, 0xA4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x213F20u;
        goto label_213f20;
    }
    ctx->pc = 0x213F18u;
    {
        const bool branch_taken_0x213f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F18u;
        // 0x213f1c: 0xc45700a4  lwc1        $f23, 0xA4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f18) {
            ctx->pc = 0x213F28u;
            goto label_213f28;
        }
    }
    ctx->pc = 0x213F20u;
label_213f20:
    // 0x213f20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x213f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_213f24:
    // 0x213f24: 0xc45700a0  lwc1        $f23, 0xA0($v0)
    ctx->pc = 0x213f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_213f28:
    // 0x213f28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x213f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_213f2c:
    // 0x213f2c: 0xc107458  jal         func_41D160
label_213f30:
    if (ctx->pc == 0x213F30u) {
        ctx->pc = 0x213F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F2Cu;
        // 0x213f30: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213F34u;
        goto label_213f34;
    }
    ctx->pc = 0x213F2Cu;
    SET_GPR_U32(ctx, 31, 0x213F34u);
    ctx->pc = 0x213F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F2Cu;
    // 0x213f30: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x213F2Cu, 0x213F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F34u;
label_213f34:
    // 0x213f34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_213f38:
    if (ctx->pc == 0x213F38u) {
        ctx->pc = 0x213F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F34u;
        // 0x213f38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213F3Cu;
        goto label_213f3c;
    }
    ctx->pc = 0x213F34u;
    {
        const bool branch_taken_0x213f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F34u;
        // 0x213f38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f34) {
            ctx->pc = 0x213F44u;
            goto label_213f44;
        }
    }
    ctx->pc = 0x213F3Cu;
label_213f3c:
    // 0x213f3c: 0xc44000c4  lwc1        $f0, 0xC4($v0)
    ctx->pc = 0x213f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213f40:
    // 0x213f40: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x213f40u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_213f44:
    // 0x213f44: 0x8e22413c  lw          $v0, 0x413C($s1)
    ctx->pc = 0x213f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16700)));
label_213f48:
    // 0x213f48: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x213f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_213f4c:
    // 0x213f4c: 0x18400069  blez        $v0, . + 4 + (0x69 << 2)
label_213f50:
    if (ctx->pc == 0x213F50u) {
        ctx->pc = 0x213F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F4Cu;
        // 0x213f50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213F54u;
        goto label_213f54;
    }
    ctx->pc = 0x213F4Cu;
    {
        const bool branch_taken_0x213f4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F4Cu;
        // 0x213f50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f4c) {
            ctx->pc = 0x2140F4u;
            goto label_2140f4;
        }
    }
    ctx->pc = 0x213F54u;
label_213f54:
    // 0x213f54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x213f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_213f58:
    // 0x213f58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_213f5c:
    // 0x213f5c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x213f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_213f60:
    // 0x213f60: 0x2454fa40  addiu       $s4, $v0, -0x5C0
    ctx->pc = 0x213f60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965824));
label_213f64:
    // 0x213f64: 0x24130240  addiu       $s3, $zero, 0x240
    ctx->pc = 0x213f64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_213f68:
    // 0x213f68: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x213f68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_213f6c:
    // 0x213f6c: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x213f6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_213f70:
    // 0x213f70: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x213f70u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_213f74:
    // 0x213f74: 0x26304150  addiu       $s0, $s1, 0x4150
    ctx->pc = 0x213f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16720));
label_213f78:
    // 0x213f78: 0x8e2240f4  lw          $v0, 0x40F4($s1)
    ctx->pc = 0x213f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16628)));
label_213f7c:
    // 0x213f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213f80:
    // 0x213f80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213f84:
    // 0x213f84: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x213f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_213f88:
    // 0x213f88: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x213f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_213f8c:
    // 0x213f8c: 0xc4540210  lwc1        $f20, 0x210($v0)
    ctx->pc = 0x213f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_213f90:
    // 0x213f90: 0xc45601f0  lwc1        $f22, 0x1F0($v0)
    ctx->pc = 0x213f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_213f94:
    // 0x213f94: 0xc4550220  lwc1        $f21, 0x220($v0)
    ctx->pc = 0x213f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_213f98:
    // 0x213f98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213f98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_213f9c:
    // 0x213f9c: 0xc068848  jal         func_1A2120
label_213fa0:
    if (ctx->pc == 0x213FA0u) {
        ctx->pc = 0x213FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F9Cu;
        // 0x213fa0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x213FA4u;
        goto label_213fa4;
    }
    ctx->pc = 0x213F9Cu;
    SET_GPR_U32(ctx, 31, 0x213FA4u);
    ctx->pc = 0x213FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F9Cu;
    // 0x213fa0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x213F9Cu, 0x213FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FA4u;
label_213fa4:
    // 0x213fa4: 0x255001a  div         $zero, $s2, $s5
    ctx->pc = 0x213fa4u;
    { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_213fa8:
    // 0x213fa8: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
label_213fac:
    if (ctx->pc == 0x213FACu) {
        ctx->pc = 0x213FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FA8u;
        // 0x213fac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x213FB0u;
        goto label_213fb0;
    }
    ctx->pc = 0x213FA8u;
    {
        const bool branch_taken_0x213fa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x213fa8) {
            ctx->pc = 0x213FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213FA8u;
            // 0x213fac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x213FB0u;
            goto label_213fb0;
        }
    }
    ctx->pc = 0x213FB0u;
label_213fb0:
    // 0x213fb0: 0x1010  mfhi        $v0
    ctx->pc = 0x213fb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_213fb4:
    // 0x213fb4: 0x1457000e  bne         $v0, $s7, . + 4 + (0xE << 2)
label_213fb8:
    if (ctx->pc == 0x213FB8u) {
        ctx->pc = 0x213FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FB4u;
        // 0x213fb8: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x213FBCu;
        goto label_213fbc;
    }
    ctx->pc = 0x213FB4u;
    {
        const bool branch_taken_0x213fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x213FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FB4u;
        // 0x213fb8: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fb4) {
            ctx->pc = 0x213FF0u;
            goto label_213ff0;
        }
    }
    ctx->pc = 0x213FBCu;
label_213fbc:
    // 0x213fbc: 0x8e2240f4  lw          $v0, 0x40F4($s1)
    ctx->pc = 0x213fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16628)));
label_213fc0:
    // 0x213fc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x213fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_213fc4:
    // 0x213fc4: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x213fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_213fc8:
    // 0x213fc8: 0xc6cc00a8  lwc1        $f12, 0xA8($s6)
    ctx->pc = 0x213fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_213fcc:
    // 0x213fcc: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x213fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_213fd0:
    // 0x213fd0: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x213fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_213fd4:
    // 0x213fd4: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x213fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_213fd8:
    // 0x213fd8: 0xc4550230  lwc1        $f21, 0x230($v0)
    ctx->pc = 0x213fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_213fdc:
    // 0x213fdc: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x213fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_213fe0:
    // 0x213fe0: 0xa0f809  jalr        $a1
label_213fe4:
    if (ctx->pc == 0x213FE4u) {
        ctx->pc = 0x213FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FE0u;
        // 0x213fe4: 0xc4540214  lwc1        $f20, 0x214($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x213FE8u;
        goto label_213fe8;
    }
    ctx->pc = 0x213FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x213FE8u);
        ctx->pc = 0x213FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FE0u;
        // 0x213fe4: 0xc4540214  lwc1        $f20, 0x214($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213FE0u, 0x213FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x213FE8u;
label_213fe8:
    // 0x213fe8: 0x10000007  b           . + 4 + (0x7 << 2)
label_213fec:
    if (ctx->pc == 0x213FECu) {
        ctx->pc = 0x213FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FE8u;
        // 0x213fec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213FF0u;
        goto label_213ff0;
    }
    ctx->pc = 0x213FE8u;
    {
        const bool branch_taken_0x213fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FE8u;
        // 0x213fec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fe8) {
            ctx->pc = 0x214008u;
            goto label_214008;
        }
    }
    ctx->pc = 0x213FF0u;
label_213ff0:
    // 0x213ff0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_213ff4:
    if (ctx->pc == 0x213FF4u) {
        ctx->pc = 0x213FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FF0u;
        // 0x213ff4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213FF8u;
        goto label_213ff8;
    }
    ctx->pc = 0x213FF0u;
    {
        const bool branch_taken_0x213ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FF0u;
        // 0x213ff4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ff0) {
            ctx->pc = 0x214008u;
            goto label_214008;
        }
    }
    ctx->pc = 0x213FF8u;
label_213ff8:
    // 0x213ff8: 0x8e2240f4  lw          $v0, 0x40F4($s1)
    ctx->pc = 0x213ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16628)));
label_213ffc:
    // 0x213ffc: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x213ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_214000:
    // 0x214000: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x214000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_214004:
    // 0x214004: 0xc4560200  lwc1        $f22, 0x200($v0)
    ctx->pc = 0x214004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_214008:
    // 0x214008: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x214008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21400c:
    // 0x21400c: 0xc46c00a8  lwc1        $f12, 0xA8($v1)
    ctx->pc = 0x21400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_214010:
    // 0x214010: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x214010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_214014:
    // 0x214014: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x214014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_214018:
    // 0x214018: 0x60f809  jalr        $v1
label_21401c:
    if (ctx->pc == 0x21401Cu) {
        ctx->pc = 0x21401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214018u;
        // 0x21401c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214020u;
        goto label_214020;
    }
    ctx->pc = 0x214018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x214020u);
        ctx->pc = 0x21401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214018u;
        // 0x21401c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214018u, 0x214020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214020u;
label_214020:
    // 0x214020: 0x8e2240f4  lw          $v0, 0x40F4($s1)
    ctx->pc = 0x214020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16628)));
label_214024:
    // 0x214024: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x214024u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_214028:
    // 0x214028: 0x0  nop
    ctx->pc = 0x214028u;
    // NOP
label_21402c:
    // 0x21402c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21402cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_214030:
    // 0x214030: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x214030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_214034:
    // 0x214034: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_214038:
    // 0x214038: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x214038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_21403c:
    // 0x21403c: 0xe7b9000c  swc1        $f25, 0xC($sp)
    ctx->pc = 0x21403cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_214040:
    // 0x214040: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x214040u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_214044:
    // 0x214044: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x214044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214048:
    // 0x214048: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x214048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21404c:
    // 0x21404c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21404cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_214050:
    // 0x214050: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x214050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_214054:
    // 0x214054: 0x4601b040  add.s       $f1, $f22, $f1
    ctx->pc = 0x214054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_214058:
    // 0x214058: 0xc44001f8  lwc1        $f0, 0x1F8($v0)
    ctx->pc = 0x214058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21405c:
    // 0x21405c: 0x7a2340e0  lq          $v1, 0x40E0($s1)
    ctx->pc = 0x21405cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16608)));
label_214060:
    // 0x214060: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x214060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_214064:
    // 0x214064: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x214064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_214068:
    // 0x214068: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x214068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_21406c:
    // 0x21406c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x21406cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_214070:
    // 0x214070: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x214070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_214074:
    // 0x214074: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x214074u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_214078:
    // 0x214078: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x214078u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21407c:
    // 0x21407c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21407cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_214080:
    // 0x214080: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x214080u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_214084:
    // 0x214084: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x214084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_214088:
    // 0x214088: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x214088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_21408c:
    // 0x21408c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x21408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214090:
    // 0x214090: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x214090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214094:
    // 0x214094: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x214094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_214098:
    // 0x214098: 0x46180840  add.s       $f1, $f1, $f24
    ctx->pc = 0x214098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
label_21409c:
    // 0x21409c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x21409cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2140a0:
    // 0x2140a0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2140a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2140a4:
    // 0x2140a4: 0x84e40008  lh          $a0, 0x8($a3)
    ctx->pc = 0x2140a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_2140a8:
    // 0x2140a8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2140a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2140ac:
    // 0x2140ac: 0x40f809  jalr        $v0
label_2140b0:
    if (ctx->pc == 0x2140B0u) {
        ctx->pc = 0x2140B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140ACu;
        // 0x2140b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2140B4u;
        goto label_2140b4;
    }
    ctx->pc = 0x2140ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2140B4u);
        ctx->pc = 0x2140B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140ACu;
        // 0x2140b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2140ACu, 0x2140B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2140B4u;
label_2140b4:
    // 0x2140b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2140b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2140b8:
    // 0x2140b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2140b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2140bc:
    // 0x2140bc: 0xc46c0050  lwc1        $f12, 0x50($v1)
    ctx->pc = 0x2140bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2140c0:
    // 0x2140c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2140c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2140c4:
    // 0x2140c4: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x2140c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_2140c8:
    // 0x2140c8: 0xc068848  jal         func_1A2120
label_2140cc:
    if (ctx->pc == 0x2140CCu) {
        ctx->pc = 0x2140CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140C8u;
        // 0x2140cc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2140D0u;
        goto label_2140d0;
    }
    ctx->pc = 0x2140C8u;
    SET_GPR_U32(ctx, 31, 0x2140D0u);
    ctx->pc = 0x2140CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140C8u;
    // 0x2140cc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x2140C8u, 0x2140D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140D0u;
label_2140d0:
    // 0x2140d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2140d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2140d4:
    // 0x2140d4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2140d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2140d8:
    // 0x2140d8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2140d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2140dc:
    // 0x2140dc: 0x60f809  jalr        $v1
label_2140e0:
    if (ctx->pc == 0x2140E0u) {
        ctx->pc = 0x2140E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140DCu;
        // 0x2140e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2140E4u;
        goto label_2140e4;
    }
    ctx->pc = 0x2140DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2140E4u);
        ctx->pc = 0x2140E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140DCu;
        // 0x2140e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2140DCu, 0x2140E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2140E4u;
label_2140e4:
    // 0x2140e4: 0x8e22413c  lw          $v0, 0x413C($s1)
    ctx->pc = 0x2140e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16700)));
label_2140e8:
    // 0x2140e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2140e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2140ec:
    // 0x2140ec: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
label_2140f0:
    if (ctx->pc == 0x2140F0u) {
        ctx->pc = 0x2140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140ECu;
        // 0x2140f0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2140F4u;
        goto label_2140f4;
    }
    ctx->pc = 0x2140ECu;
    {
        const bool branch_taken_0x2140ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140ECu;
        // 0x2140f0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140ec) {
            ctx->pc = 0x213F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213f78;
        }
    }
    ctx->pc = 0x2140F4u;
label_2140f4:
    // 0x2140f4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2140f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2140f8:
    // 0x2140f8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2140f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2140fc:
    // 0x2140fc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2140fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_214100:
    // 0x214100: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x214100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_214104:
    // 0x214104: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x214104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_214108:
    // 0x214108: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x214108u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21410c:
    // 0x21410c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x21410cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_214110:
    // 0x214110: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x214110u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_214114:
    // 0x214114: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x214114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_214118:
    // 0x214118: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x214118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_21411c:
    // 0x21411c: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x21411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_214120:
    // 0x214120: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x214120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_214124:
    // 0x214124: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x214124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_214128:
    // 0x214128: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x214128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21412c:
    // 0x21412c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x21412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_214130:
    // 0x214130: 0x3e00008  jr          $ra
label_214134:
    if (ctx->pc == 0x214134u) {
        ctx->pc = 0x214134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214130u;
        // 0x214134: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214138u;
        goto label_fallthrough_0x214130;
    }
    ctx->pc = 0x214130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214130u;
        // 0x214134: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x214130:
    ctx->pc = 0x214138u;
}
