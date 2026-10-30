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

// Function: sub_00280D20
// Address: 0x280d20 - 0x280ee0
void sub_00280D20_0x280d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280D20_0x280d20");
#endif

    switch (ctx->pc) {
        case 0x280d20u: goto label_280d20;
        case 0x280d24u: goto label_280d24;
        case 0x280d28u: goto label_280d28;
        case 0x280d2cu: goto label_280d2c;
        case 0x280d30u: goto label_280d30;
        case 0x280d34u: goto label_280d34;
        case 0x280d38u: goto label_280d38;
        case 0x280d3cu: goto label_280d3c;
        case 0x280d40u: goto label_280d40;
        case 0x280d44u: goto label_280d44;
        case 0x280d48u: goto label_280d48;
        case 0x280d4cu: goto label_280d4c;
        case 0x280d50u: goto label_280d50;
        case 0x280d54u: goto label_280d54;
        case 0x280d58u: goto label_280d58;
        case 0x280d5cu: goto label_280d5c;
        case 0x280d60u: goto label_280d60;
        case 0x280d64u: goto label_280d64;
        case 0x280d68u: goto label_280d68;
        case 0x280d6cu: goto label_280d6c;
        case 0x280d70u: goto label_280d70;
        case 0x280d74u: goto label_280d74;
        case 0x280d78u: goto label_280d78;
        case 0x280d7cu: goto label_280d7c;
        case 0x280d80u: goto label_280d80;
        case 0x280d84u: goto label_280d84;
        case 0x280d88u: goto label_280d88;
        case 0x280d8cu: goto label_280d8c;
        case 0x280d90u: goto label_280d90;
        case 0x280d94u: goto label_280d94;
        case 0x280d98u: goto label_280d98;
        case 0x280d9cu: goto label_280d9c;
        case 0x280da0u: goto label_280da0;
        case 0x280da4u: goto label_280da4;
        case 0x280da8u: goto label_280da8;
        case 0x280dacu: goto label_280dac;
        case 0x280db0u: goto label_280db0;
        case 0x280db4u: goto label_280db4;
        case 0x280db8u: goto label_280db8;
        case 0x280dbcu: goto label_280dbc;
        case 0x280dc0u: goto label_280dc0;
        case 0x280dc4u: goto label_280dc4;
        case 0x280dc8u: goto label_280dc8;
        case 0x280dccu: goto label_280dcc;
        case 0x280dd0u: goto label_280dd0;
        case 0x280dd4u: goto label_280dd4;
        case 0x280dd8u: goto label_280dd8;
        case 0x280ddcu: goto label_280ddc;
        case 0x280de0u: goto label_280de0;
        case 0x280de4u: goto label_280de4;
        case 0x280de8u: goto label_280de8;
        case 0x280decu: goto label_280dec;
        case 0x280df0u: goto label_280df0;
        case 0x280df4u: goto label_280df4;
        case 0x280df8u: goto label_280df8;
        case 0x280dfcu: goto label_280dfc;
        case 0x280e00u: goto label_280e00;
        case 0x280e04u: goto label_280e04;
        case 0x280e08u: goto label_280e08;
        case 0x280e0cu: goto label_280e0c;
        case 0x280e10u: goto label_280e10;
        case 0x280e14u: goto label_280e14;
        case 0x280e18u: goto label_280e18;
        case 0x280e1cu: goto label_280e1c;
        case 0x280e20u: goto label_280e20;
        case 0x280e24u: goto label_280e24;
        case 0x280e28u: goto label_280e28;
        case 0x280e2cu: goto label_280e2c;
        case 0x280e30u: goto label_280e30;
        case 0x280e34u: goto label_280e34;
        case 0x280e38u: goto label_280e38;
        case 0x280e3cu: goto label_280e3c;
        case 0x280e40u: goto label_280e40;
        case 0x280e44u: goto label_280e44;
        case 0x280e48u: goto label_280e48;
        case 0x280e4cu: goto label_280e4c;
        case 0x280e50u: goto label_280e50;
        case 0x280e54u: goto label_280e54;
        case 0x280e58u: goto label_280e58;
        case 0x280e5cu: goto label_280e5c;
        case 0x280e60u: goto label_280e60;
        case 0x280e64u: goto label_280e64;
        case 0x280e68u: goto label_280e68;
        case 0x280e6cu: goto label_280e6c;
        case 0x280e70u: goto label_280e70;
        case 0x280e74u: goto label_280e74;
        case 0x280e78u: goto label_280e78;
        case 0x280e7cu: goto label_280e7c;
        case 0x280e80u: goto label_280e80;
        case 0x280e84u: goto label_280e84;
        case 0x280e88u: goto label_280e88;
        case 0x280e8cu: goto label_280e8c;
        case 0x280e90u: goto label_280e90;
        case 0x280e94u: goto label_280e94;
        case 0x280e98u: goto label_280e98;
        case 0x280e9cu: goto label_280e9c;
        case 0x280ea0u: goto label_280ea0;
        case 0x280ea4u: goto label_280ea4;
        case 0x280ea8u: goto label_280ea8;
        case 0x280eacu: goto label_280eac;
        case 0x280eb0u: goto label_280eb0;
        case 0x280eb4u: goto label_280eb4;
        case 0x280eb8u: goto label_280eb8;
        case 0x280ebcu: goto label_280ebc;
        case 0x280ec0u: goto label_280ec0;
        case 0x280ec4u: goto label_280ec4;
        case 0x280ec8u: goto label_280ec8;
        case 0x280eccu: goto label_280ecc;
        case 0x280ed0u: goto label_280ed0;
        case 0x280ed4u: goto label_280ed4;
        case 0x280ed8u: goto label_280ed8;
        case 0x280edcu: goto label_280edc;
        default: break;
    }

    ctx->pc = 0x280d20u;

label_280d20:
    // 0x280d20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x280d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_280d24:
    // 0x280d24: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x280d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_280d28:
    // 0x280d28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x280d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_280d2c:
    // 0x280d2c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x280d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_280d30:
    // 0x280d30: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x280d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_280d34:
    // 0x280d34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x280d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_280d38:
    // 0x280d38: 0xc0874fa  jal         func_21D3E8
label_280d3c:
    if (ctx->pc == 0x280D3Cu) {
        ctx->pc = 0x280D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D38u;
        // 0x280d3c: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280D40u;
        goto label_280d40;
    }
    ctx->pc = 0x280D38u;
    SET_GPR_U32(ctx, 31, 0x280D40u);
    ctx->pc = 0x280D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280D38u;
    // 0x280d3c: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x280D38u, 0x280D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D40u;
label_280d40:
    // 0x280d40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280d44:
    // 0x280d44: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x280d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_280d48:
    // 0x280d48: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x280d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_280d4c:
    // 0x280d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280d50:
    // 0x280d50: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x280d50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_280d54:
    // 0x280d54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_280d58:
    // 0x280d58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x280d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_280d5c:
    // 0x280d5c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x280d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280d60:
    // 0x280d60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_280d64:
    // 0x280d64: 0x0  nop
    ctx->pc = 0x280d64u;
    // NOP
label_280d68:
    // 0x280d68: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_280d6c:
    if (ctx->pc == 0x280D6Cu) {
        ctx->pc = 0x280D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D68u;
        // 0x280d6c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280D70u;
        goto label_280d70;
    }
    ctx->pc = 0x280D68u;
    {
        const bool branch_taken_0x280d68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D68u;
        // 0x280d6c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d68) {
            ctx->pc = 0x280E78u;
            goto label_280e78;
        }
    }
    ctx->pc = 0x280D70u;
label_280d70:
    // 0x280d70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x280d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_280d74:
    // 0x280d74: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x280d74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_280d78:
    // 0x280d78: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x280d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_280d7c:
    // 0x280d7c: 0x60f809  jalr        $v1
label_280d80:
    if (ctx->pc == 0x280D80u) {
        ctx->pc = 0x280D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D7Cu;
        // 0x280d80: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280D84u;
        goto label_280d84;
    }
    ctx->pc = 0x280D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x280D84u);
        ctx->pc = 0x280D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D7Cu;
        // 0x280d80: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280D7Cu, 0x280D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x280D84u;
label_280d84:
    // 0x280d84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x280d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_280d88:
    // 0x280d88: 0xc0cd940  jal         func_336500
label_280d8c:
    if (ctx->pc == 0x280D8Cu) {
        ctx->pc = 0x280D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D88u;
        // 0x280d8c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280D90u;
        goto label_280d90;
    }
    ctx->pc = 0x280D88u;
    SET_GPR_U32(ctx, 31, 0x280D90u);
    ctx->pc = 0x280D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280D88u;
    // 0x280d8c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x280D88u, 0x280D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D90u;
label_280d90:
    // 0x280d90: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x280d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_280d94:
    // 0x280d94: 0xc0cd5ea  jal         func_3357A8
label_280d98:
    if (ctx->pc == 0x280D98u) {
        ctx->pc = 0x280D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D94u;
        // 0x280d98: 0xc7ad0010  lwc1        $f13, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280D9Cu;
        goto label_280d9c;
    }
    ctx->pc = 0x280D94u;
    SET_GPR_U32(ctx, 31, 0x280D9Cu);
    ctx->pc = 0x280D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280D94u;
    // 0x280d98: 0xc7ad0010  lwc1        $f13, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x280D94u, 0x280D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D9Cu;
label_280d9c:
    // 0x280d9c: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x280d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_280da0:
    // 0x280da0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x280da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_280da4:
    // 0x280da4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x280da4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_280da8:
    // 0x280da8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x280da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_280dac:
    // 0x280dac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_280db0:
    // 0x280db0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x280db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_280db4:
    // 0x280db4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x280db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280db8:
    // 0x280db8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280db8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_280dbc:
    // 0x280dbc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x280dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_280dc0:
    // 0x280dc0: 0x0  nop
    ctx->pc = 0x280dc0u;
    // NOP
label_280dc4:
    // 0x280dc4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_280dc8:
    if (ctx->pc == 0x280DC8u) {
        ctx->pc = 0x280DCCu;
        goto label_280dcc;
    }
    ctx->pc = 0x280DC4u;
    {
        const bool branch_taken_0x280dc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280dc4) {
            ctx->pc = 0x280DE0u;
            goto label_280de0;
        }
    }
    ctx->pc = 0x280DCCu;
label_280dcc:
    // 0x280dcc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x280dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_280dd0:
    // 0x280dd0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x280dd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_280dd4:
    // 0x280dd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280dd8:
    // 0x280dd8: 0x0  nop
    ctx->pc = 0x280dd8u;
    // NOP
label_280ddc:
    // 0x280ddc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280ddcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_280de0:
    // 0x280de0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x280de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_280de4:
    // 0x280de4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x280de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_280de8:
    // 0x280de8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280dec:
    // 0x280dec: 0x0  nop
    ctx->pc = 0x280decu;
    // NOP
label_280df0:
    // 0x280df0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x280df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_280df4:
    // 0x280df4: 0x0  nop
    ctx->pc = 0x280df4u;
    // NOP
label_280df8:
    // 0x280df8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_280dfc:
    if (ctx->pc == 0x280DFCu) {
        ctx->pc = 0x280E00u;
        goto label_280e00;
    }
    ctx->pc = 0x280DF8u;
    {
        const bool branch_taken_0x280df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280df8) {
            ctx->pc = 0x280E14u;
            goto label_280e14;
        }
    }
    ctx->pc = 0x280E00u;
label_280e00:
    // 0x280e00: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x280e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_280e04:
    // 0x280e04: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x280e04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_280e08:
    // 0x280e08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280e0c:
    // 0x280e0c: 0x0  nop
    ctx->pc = 0x280e0cu;
    // NOP
label_280e10:
    // 0x280e10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x280e10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_280e14:
    // 0x280e14: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x280e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_280e18:
    // 0x280e18: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x280e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_280e1c:
    // 0x280e1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280e20:
    // 0x280e20: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x280e20u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
label_280e24:
    // 0x280e24: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x280e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_280e28:
    // 0x280e28: 0x0  nop
    ctx->pc = 0x280e28u;
    // NOP
label_280e2c:
    // 0x280e2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_280e30:
    if (ctx->pc == 0x280E30u) {
        ctx->pc = 0x280E34u;
        goto label_280e34;
    }
    ctx->pc = 0x280E2Cu;
    {
        const bool branch_taken_0x280e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280e2c) {
            ctx->pc = 0x280E3Cu;
            goto label_280e3c;
        }
    }
    ctx->pc = 0x280E34u;
label_280e34:
    // 0x280e34: 0x10000010  b           . + 4 + (0x10 << 2)
label_280e38:
    if (ctx->pc == 0x280E38u) {
        ctx->pc = 0x280E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E34u;
        // 0x280e38: 0x24110100  addiu       $s1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280E3Cu;
        goto label_280e3c;
    }
    ctx->pc = 0x280E34u;
    {
        const bool branch_taken_0x280e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E34u;
        // 0x280e38: 0x24110100  addiu       $s1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e34) {
            ctx->pc = 0x280E78u;
            goto label_280e78;
        }
    }
    ctx->pc = 0x280E3Cu;
label_280e3c:
    // 0x280e3c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x280e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_280e40:
    // 0x280e40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x280e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_280e44:
    // 0x280e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280e48:
    // 0x280e48: 0x0  nop
    ctx->pc = 0x280e48u;
    // NOP
label_280e4c:
    // 0x280e4c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x280e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_280e50:
    // 0x280e50: 0x0  nop
    ctx->pc = 0x280e50u;
    // NOP
label_280e54:
    // 0x280e54: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_280e58:
    if (ctx->pc == 0x280E58u) {
        ctx->pc = 0x280E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E54u;
        // 0x280e58: 0x8e4400d4  lw          $a0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280E5Cu;
        goto label_280e5c;
    }
    ctx->pc = 0x280E54u;
    {
        const bool branch_taken_0x280e54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280e54) {
            ctx->pc = 0x280E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280E54u;
            // 0x280e58: 0x8e4400d4  lw          $a0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280E7Cu;
            goto label_280e7c;
        }
    }
    ctx->pc = 0x280E5Cu;
label_280e5c:
    // 0x280e5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x280e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280e60:
    // 0x280e60: 0x0  nop
    ctx->pc = 0x280e60u;
    // NOP
label_280e64:
    // 0x280e64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x280e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_280e68:
    // 0x280e68: 0x0  nop
    ctx->pc = 0x280e68u;
    // NOP
label_280e6c:
    // 0x280e6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_280e70:
    if (ctx->pc == 0x280E70u) {
        ctx->pc = 0x280E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E6Cu;
        // 0x280e70: 0x24110200  addiu       $s1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280E74u;
        goto label_280e74;
    }
    ctx->pc = 0x280E6Cu;
    {
        const bool branch_taken_0x280e6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E6Cu;
        // 0x280e70: 0x24110200  addiu       $s1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e6c) {
            ctx->pc = 0x280E78u;
            goto label_280e78;
        }
    }
    ctx->pc = 0x280E74u;
label_280e74:
    // 0x280e74: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x280e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_280e78:
    // 0x280e78: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x280e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_280e7c:
    // 0x280e7c: 0x8c8600b8  lw          $a2, 0xB8($a0)
    ctx->pc = 0x280e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_280e80:
    // 0x280e80: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x280e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_280e84:
    // 0x280e84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_280e88:
    if (ctx->pc == 0x280E88u) {
        ctx->pc = 0x280E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E84u;
        // 0x280e88: 0x30c20010  andi        $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280E8Cu;
        goto label_280e8c;
    }
    ctx->pc = 0x280E84u;
    {
        const bool branch_taken_0x280e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E84u;
        // 0x280e88: 0x30c20010  andi        $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e84) {
            ctx->pc = 0x280E94u;
            goto label_280e94;
        }
    }
    ctx->pc = 0x280E8Cu;
label_280e8c:
    // 0x280e8c: 0x1000000c  b           . + 4 + (0xC << 2)
label_280e90:
    if (ctx->pc == 0x280E90u) {
        ctx->pc = 0x280E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E8Cu;
        // 0x280e90: 0x36310002  ori         $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280E94u;
        goto label_280e94;
    }
    ctx->pc = 0x280E8Cu;
    {
        const bool branch_taken_0x280e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E8Cu;
        // 0x280e90: 0x36310002  ori         $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e8c) {
            ctx->pc = 0x280EC0u;
            goto label_280ec0;
        }
    }
    ctx->pc = 0x280E94u;
label_280e94:
    // 0x280e94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_280e98:
    if (ctx->pc == 0x280E98u) {
        ctx->pc = 0x280E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E94u;
        // 0x280e98: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280E9Cu;
        goto label_280e9c;
    }
    ctx->pc = 0x280E94u;
    {
        const bool branch_taken_0x280e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E94u;
        // 0x280e98: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e94) {
            ctx->pc = 0x280EA4u;
            goto label_280ea4;
        }
    }
    ctx->pc = 0x280E9Cu;
label_280e9c:
    // 0x280e9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_280ea0:
    if (ctx->pc == 0x280EA0u) {
        ctx->pc = 0x280EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E9Cu;
        // 0x280ea0: 0x36310010  ori         $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280EA4u;
        goto label_280ea4;
    }
    ctx->pc = 0x280E9Cu;
    {
        const bool branch_taken_0x280e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E9Cu;
        // 0x280ea0: 0x36310010  ori         $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e9c) {
            ctx->pc = 0x280EC0u;
            goto label_280ec0;
        }
    }
    ctx->pc = 0x280EA4u;
label_280ea4:
    // 0x280ea4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_280ea8:
    if (ctx->pc == 0x280EA8u) {
        ctx->pc = 0x280EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EA4u;
        // 0x280ea8: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280EACu;
        goto label_280eac;
    }
    ctx->pc = 0x280EA4u;
    {
        const bool branch_taken_0x280ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EA4u;
        // 0x280ea8: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ea4) {
            ctx->pc = 0x280EC0u;
            goto label_280ec0;
        }
    }
    ctx->pc = 0x280EACu;
label_280eac:
    // 0x280eac: 0xdc8300b8  ld          $v1, 0xB8($a0)
    ctx->pc = 0x280eacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 184)));
label_280eb0:
    // 0x280eb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280eb4:
    // 0x280eb4: 0x30630060  andi        $v1, $v1, 0x60
    ctx->pc = 0x280eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
label_280eb8:
    // 0x280eb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_280ebc:
    if (ctx->pc == 0x280EBCu) {
        ctx->pc = 0x280EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EB8u;
        // 0x280ebc: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280EC0u;
        goto label_280ec0;
    }
    ctx->pc = 0x280EB8u;
    {
        const bool branch_taken_0x280eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EB8u;
        // 0x280ebc: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280eb8) {
            ctx->pc = 0x280EC4u;
            goto label_280ec4;
        }
    }
    ctx->pc = 0x280EC0u;
label_280ec0:
    // 0x280ec0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x280ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_280ec4:
    // 0x280ec4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x280ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_280ec8:
    // 0x280ec8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x280ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_280ecc:
    // 0x280ecc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x280eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_280ed0:
    // 0x280ed0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x280ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_280ed4:
    // 0x280ed4: 0x3e00008  jr          $ra
label_280ed8:
    if (ctx->pc == 0x280ED8u) {
        ctx->pc = 0x280ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280ED4u;
        // 0x280ed8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280EDCu;
        goto label_280edc;
    }
    ctx->pc = 0x280ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280ED4u;
        // 0x280ed8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280EDCu;
label_280edc:
    // 0x280edc: 0x0  nop
    ctx->pc = 0x280edcu;
    // NOP
    ctx->pc = 0x280ee0u;
}
