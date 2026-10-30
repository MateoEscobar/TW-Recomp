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

// Function: sub_00389E08
// Address: 0x389e08 - 0x389f40
void sub_00389E08_0x389e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389E08_0x389e08");
#endif

    switch (ctx->pc) {
        case 0x389e08u: goto label_389e08;
        case 0x389e0cu: goto label_389e0c;
        case 0x389e10u: goto label_389e10;
        case 0x389e14u: goto label_389e14;
        case 0x389e18u: goto label_389e18;
        case 0x389e1cu: goto label_389e1c;
        case 0x389e20u: goto label_389e20;
        case 0x389e24u: goto label_389e24;
        case 0x389e28u: goto label_389e28;
        case 0x389e2cu: goto label_389e2c;
        case 0x389e30u: goto label_389e30;
        case 0x389e34u: goto label_389e34;
        case 0x389e38u: goto label_389e38;
        case 0x389e3cu: goto label_389e3c;
        case 0x389e40u: goto label_389e40;
        case 0x389e44u: goto label_389e44;
        case 0x389e48u: goto label_389e48;
        case 0x389e4cu: goto label_389e4c;
        case 0x389e50u: goto label_389e50;
        case 0x389e54u: goto label_389e54;
        case 0x389e58u: goto label_389e58;
        case 0x389e5cu: goto label_389e5c;
        case 0x389e60u: goto label_389e60;
        case 0x389e64u: goto label_389e64;
        case 0x389e68u: goto label_389e68;
        case 0x389e6cu: goto label_389e6c;
        case 0x389e70u: goto label_389e70;
        case 0x389e74u: goto label_389e74;
        case 0x389e78u: goto label_389e78;
        case 0x389e7cu: goto label_389e7c;
        case 0x389e80u: goto label_389e80;
        case 0x389e84u: goto label_389e84;
        case 0x389e88u: goto label_389e88;
        case 0x389e8cu: goto label_389e8c;
        case 0x389e90u: goto label_389e90;
        case 0x389e94u: goto label_389e94;
        case 0x389e98u: goto label_389e98;
        case 0x389e9cu: goto label_389e9c;
        case 0x389ea0u: goto label_389ea0;
        case 0x389ea4u: goto label_389ea4;
        case 0x389ea8u: goto label_389ea8;
        case 0x389eacu: goto label_389eac;
        case 0x389eb0u: goto label_389eb0;
        case 0x389eb4u: goto label_389eb4;
        case 0x389eb8u: goto label_389eb8;
        case 0x389ebcu: goto label_389ebc;
        case 0x389ec0u: goto label_389ec0;
        case 0x389ec4u: goto label_389ec4;
        case 0x389ec8u: goto label_389ec8;
        case 0x389eccu: goto label_389ecc;
        case 0x389ed0u: goto label_389ed0;
        case 0x389ed4u: goto label_389ed4;
        case 0x389ed8u: goto label_389ed8;
        case 0x389edcu: goto label_389edc;
        case 0x389ee0u: goto label_389ee0;
        case 0x389ee4u: goto label_389ee4;
        case 0x389ee8u: goto label_389ee8;
        case 0x389eecu: goto label_389eec;
        case 0x389ef0u: goto label_389ef0;
        case 0x389ef4u: goto label_389ef4;
        case 0x389ef8u: goto label_389ef8;
        case 0x389efcu: goto label_389efc;
        case 0x389f00u: goto label_389f00;
        case 0x389f04u: goto label_389f04;
        case 0x389f08u: goto label_389f08;
        case 0x389f0cu: goto label_389f0c;
        case 0x389f10u: goto label_389f10;
        case 0x389f14u: goto label_389f14;
        case 0x389f18u: goto label_389f18;
        case 0x389f1cu: goto label_389f1c;
        case 0x389f20u: goto label_389f20;
        case 0x389f24u: goto label_389f24;
        case 0x389f28u: goto label_389f28;
        case 0x389f2cu: goto label_389f2c;
        case 0x389f30u: goto label_389f30;
        case 0x389f34u: goto label_389f34;
        case 0x389f38u: goto label_389f38;
        case 0x389f3cu: goto label_389f3c;
        default: break;
    }

    ctx->pc = 0x389e08u;

label_389e08:
    // 0x389e08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x389e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_389e0c:
    // 0x389e0c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x389e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_389e10:
    // 0x389e10: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x389e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_389e14:
    // 0x389e14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x389e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_389e18:
    // 0x389e18: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x389e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_389e1c:
    // 0x389e1c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_389e20:
    if (ctx->pc == 0x389E20u) {
        ctx->pc = 0x389E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E1Cu;
        // 0x389e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E24u;
        goto label_389e24;
    }
    ctx->pc = 0x389E1Cu;
    {
        const bool branch_taken_0x389e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E1Cu;
        // 0x389e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389e1c) {
            ctx->pc = 0x389F28u;
            goto label_389f28;
        }
    }
    ctx->pc = 0x389E24u;
label_389e24:
    // 0x389e24: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x389e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_389e28:
    // 0x389e28: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x389e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
label_389e2c:
    // 0x389e2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x389e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_389e30:
    // 0x389e30: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x389e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_389e34:
    // 0x389e34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x389e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_389e38:
    // 0x389e38: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x389e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_389e3c:
    // 0x389e3c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x389e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_389e40:
    // 0x389e40: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x389e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_389e44:
    // 0x389e44: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x389e44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_389e48:
    // 0x389e48: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x389e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_389e4c:
    // 0x389e4c: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x389e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_389e50:
    // 0x389e50: 0x40f809  jalr        $v0
label_389e54:
    if (ctx->pc == 0x389E54u) {
        ctx->pc = 0x389E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E50u;
        // 0x389e54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E58u;
        goto label_389e58;
    }
    ctx->pc = 0x389E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389E58u);
        ctx->pc = 0x389E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E50u;
        // 0x389e54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389E50u, 0x389E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389E58u;
label_389e58:
    // 0x389e58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_389e5c:
    // 0x389e5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x389e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_389e60:
    // 0x389e60: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x389e60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_389e64:
    // 0x389e64: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x389e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_389e68:
    // 0x389e68: 0x40f809  jalr        $v0
label_389e6c:
    if (ctx->pc == 0x389E6Cu) {
        ctx->pc = 0x389E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E68u;
        // 0x389e6c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E70u;
        goto label_389e70;
    }
    ctx->pc = 0x389E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389E70u);
        ctx->pc = 0x389E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E68u;
        // 0x389e6c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389E68u, 0x389E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389E70u;
label_389e70:
    // 0x389e70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x389e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_389e74:
    // 0x389e74: 0xc0cd940  jal         func_336500
label_389e78:
    if (ctx->pc == 0x389E78u) {
        ctx->pc = 0x389E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E74u;
        // 0x389e78: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E7Cu;
        goto label_389e7c;
    }
    ctx->pc = 0x389E74u;
    SET_GPR_U32(ctx, 31, 0x389E7Cu);
    ctx->pc = 0x389E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389E74u;
    // 0x389e78: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x389E74u, 0x389E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389E7Cu;
label_389e7c:
    // 0x389e7c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x389e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_389e80:
    // 0x389e80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x389e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_389e84:
    // 0x389e84: 0x3c013feb  lui         $at, 0x3FEB
    ctx->pc = 0x389e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16363 << 16));
label_389e88:
    // 0x389e88: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x389e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
label_389e8c:
    // 0x389e8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x389e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_389e90:
    // 0x389e90: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x389e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_389e94:
    // 0x389e94: 0x3c013cbc  lui         $at, 0x3CBC
    ctx->pc = 0x389e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15548 << 16));
label_389e98:
    // 0x389e98: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x389e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
label_389e9c:
    // 0x389e9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x389e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_389ea0:
    // 0x389ea0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x389ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389ea4:
    // 0x389ea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x389ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_389ea8:
    // 0x389ea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x389ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_389eac:
    // 0x389eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389eb0:
    // 0x389eb0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x389eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_389eb4:
    // 0x389eb4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x389eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_389eb8:
    // 0x389eb8: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x389eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_389ebc:
    // 0x389ebc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x389ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_389ec0:
    // 0x389ec0: 0xc0e1c74  jal         func_3871D0
label_389ec4:
    if (ctx->pc == 0x389EC4u) {
        ctx->pc = 0x389EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389EC0u;
        // 0x389ec4: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x389EC8u;
        goto label_389ec8;
    }
    ctx->pc = 0x389EC0u;
    SET_GPR_U32(ctx, 31, 0x389EC8u);
    ctx->pc = 0x389EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389EC0u;
    // 0x389ec4: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3871D0u, 0x389EC0u, 0x389EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389EC8u;
label_389ec8:
    // 0x389ec8: 0xc0e8b48  jal         func_3A2D20
label_389ecc:
    if (ctx->pc == 0x389ECCu) {
        ctx->pc = 0x389ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389EC8u;
        // 0x389ecc: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389ED0u;
        goto label_389ed0;
    }
    ctx->pc = 0x389EC8u;
    SET_GPR_U32(ctx, 31, 0x389ED0u);
    ctx->pc = 0x389ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389EC8u;
    // 0x389ecc: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x389EC8u, 0x389ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389ED0u;
label_389ed0:
    // 0x389ed0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x389ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_389ed4:
    // 0x389ed4: 0xc0e8b58  jal         func_3A2D60
label_389ed8:
    if (ctx->pc == 0x389ED8u) {
        ctx->pc = 0x389ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389ED4u;
        // 0x389ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389EDCu;
        goto label_389edc;
    }
    ctx->pc = 0x389ED4u;
    SET_GPR_U32(ctx, 31, 0x389EDCu);
    ctx->pc = 0x389ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389ED4u;
    // 0x389ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x389ED4u, 0x389EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389EDCu;
label_389edc:
    // 0x389edc: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x389edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_389ee0:
    // 0x389ee0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x389ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_389ee4:
    // 0x389ee4: 0xc0e8b58  jal         func_3A2D60
label_389ee8:
    if (ctx->pc == 0x389EE8u) {
        ctx->pc = 0x389EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389EE4u;
        // 0x389ee8: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389EECu;
        goto label_389eec;
    }
    ctx->pc = 0x389EE4u;
    SET_GPR_U32(ctx, 31, 0x389EECu);
    ctx->pc = 0x389EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389EE4u;
    // 0x389ee8: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x389EE4u, 0x389EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389EECu;
label_389eec:
    // 0x389eec: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x389eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_389ef0:
    // 0x389ef0: 0xc0e8b68  jal         func_3A2DA0
label_389ef4:
    if (ctx->pc == 0x389EF4u) {
        ctx->pc = 0x389EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389EF0u;
        // 0x389ef4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389EF8u;
        goto label_389ef8;
    }
    ctx->pc = 0x389EF0u;
    SET_GPR_U32(ctx, 31, 0x389EF8u);
    ctx->pc = 0x389EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389EF0u;
    // 0x389ef4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x389EF0u, 0x389EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389EF8u;
label_389ef8:
    // 0x389ef8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x389ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_389efc:
    // 0x389efc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x389efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_389f00:
    // 0x389f00: 0x8ca271b4  lw          $v0, 0x71B4($a1)
    ctx->pc = 0x389f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 29108)));
label_389f04:
    // 0x389f04: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x389f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_389f08:
    // 0x389f08: 0xc0e4060  jal         func_390180
label_389f0c:
    if (ctx->pc == 0x389F0Cu) {
        ctx->pc = 0x389F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F08u;
        // 0x389f0c: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F10u;
        goto label_389f10;
    }
    ctx->pc = 0x389F08u;
    SET_GPR_U32(ctx, 31, 0x389F10u);
    ctx->pc = 0x389F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F08u;
    // 0x389f0c: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x389F08u, 0x389F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F10u;
label_389f10:
    // 0x389f10: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x389f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_389f14:
    // 0x389f14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x389f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_389f18:
    // 0x389f18: 0xc0e8b80  jal         func_3A2E00
label_389f1c:
    if (ctx->pc == 0x389F1Cu) {
        ctx->pc = 0x389F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F18u;
        // 0x389f1c: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F20u;
        goto label_389f20;
    }
    ctx->pc = 0x389F18u;
    SET_GPR_U32(ctx, 31, 0x389F20u);
    ctx->pc = 0x389F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F18u;
    // 0x389f1c: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x389F18u, 0x389F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F20u;
label_389f20:
    // 0x389f20: 0xc0e8b50  jal         func_3A2D40
label_389f24:
    if (ctx->pc == 0x389F24u) {
        ctx->pc = 0x389F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F20u;
        // 0x389f24: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F28u;
        goto label_389f28;
    }
    ctx->pc = 0x389F20u;
    SET_GPR_U32(ctx, 31, 0x389F28u);
    ctx->pc = 0x389F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F20u;
    // 0x389f24: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x389F20u, 0x389F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F28u;
label_389f28:
    // 0x389f28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x389f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_389f2c:
    // 0x389f2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x389f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_389f30:
    // 0x389f30: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x389f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_389f34:
    // 0x389f34: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x389f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_389f38:
    // 0x389f38: 0x3e00008  jr          $ra
label_389f3c:
    if (ctx->pc == 0x389F3Cu) {
        ctx->pc = 0x389F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F38u;
        // 0x389f3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F40u;
        goto label_fallthrough_0x389f38;
    }
    ctx->pc = 0x389F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F38u;
        // 0x389f3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389f38:
    ctx->pc = 0x389F40u;
}
