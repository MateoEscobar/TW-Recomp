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

// Function: sub_00106CC8
// Address: 0x106cc8 - 0x106e18
void sub_00106CC8_0x106cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106CC8_0x106cc8");
#endif

    switch (ctx->pc) {
        case 0x106cc8u: goto label_106cc8;
        case 0x106cccu: goto label_106ccc;
        case 0x106cd0u: goto label_106cd0;
        case 0x106cd4u: goto label_106cd4;
        case 0x106cd8u: goto label_106cd8;
        case 0x106cdcu: goto label_106cdc;
        case 0x106ce0u: goto label_106ce0;
        case 0x106ce4u: goto label_106ce4;
        case 0x106ce8u: goto label_106ce8;
        case 0x106cecu: goto label_106cec;
        case 0x106cf0u: goto label_106cf0;
        case 0x106cf4u: goto label_106cf4;
        case 0x106cf8u: goto label_106cf8;
        case 0x106cfcu: goto label_106cfc;
        case 0x106d00u: goto label_106d00;
        case 0x106d04u: goto label_106d04;
        case 0x106d08u: goto label_106d08;
        case 0x106d0cu: goto label_106d0c;
        case 0x106d10u: goto label_106d10;
        case 0x106d14u: goto label_106d14;
        case 0x106d18u: goto label_106d18;
        case 0x106d1cu: goto label_106d1c;
        case 0x106d20u: goto label_106d20;
        case 0x106d24u: goto label_106d24;
        case 0x106d28u: goto label_106d28;
        case 0x106d2cu: goto label_106d2c;
        case 0x106d30u: goto label_106d30;
        case 0x106d34u: goto label_106d34;
        case 0x106d38u: goto label_106d38;
        case 0x106d3cu: goto label_106d3c;
        case 0x106d40u: goto label_106d40;
        case 0x106d44u: goto label_106d44;
        case 0x106d48u: goto label_106d48;
        case 0x106d4cu: goto label_106d4c;
        case 0x106d50u: goto label_106d50;
        case 0x106d54u: goto label_106d54;
        case 0x106d58u: goto label_106d58;
        case 0x106d5cu: goto label_106d5c;
        case 0x106d60u: goto label_106d60;
        case 0x106d64u: goto label_106d64;
        case 0x106d68u: goto label_106d68;
        case 0x106d6cu: goto label_106d6c;
        case 0x106d70u: goto label_106d70;
        case 0x106d74u: goto label_106d74;
        case 0x106d78u: goto label_106d78;
        case 0x106d7cu: goto label_106d7c;
        case 0x106d80u: goto label_106d80;
        case 0x106d84u: goto label_106d84;
        case 0x106d88u: goto label_106d88;
        case 0x106d8cu: goto label_106d8c;
        case 0x106d90u: goto label_106d90;
        case 0x106d94u: goto label_106d94;
        case 0x106d98u: goto label_106d98;
        case 0x106d9cu: goto label_106d9c;
        case 0x106da0u: goto label_106da0;
        case 0x106da4u: goto label_106da4;
        case 0x106da8u: goto label_106da8;
        case 0x106dacu: goto label_106dac;
        case 0x106db0u: goto label_106db0;
        case 0x106db4u: goto label_106db4;
        case 0x106db8u: goto label_106db8;
        case 0x106dbcu: goto label_106dbc;
        case 0x106dc0u: goto label_106dc0;
        case 0x106dc4u: goto label_106dc4;
        case 0x106dc8u: goto label_106dc8;
        case 0x106dccu: goto label_106dcc;
        case 0x106dd0u: goto label_106dd0;
        case 0x106dd4u: goto label_106dd4;
        case 0x106dd8u: goto label_106dd8;
        case 0x106ddcu: goto label_106ddc;
        case 0x106de0u: goto label_106de0;
        case 0x106de4u: goto label_106de4;
        case 0x106de8u: goto label_106de8;
        case 0x106decu: goto label_106dec;
        case 0x106df0u: goto label_106df0;
        case 0x106df4u: goto label_106df4;
        case 0x106df8u: goto label_106df8;
        case 0x106dfcu: goto label_106dfc;
        case 0x106e00u: goto label_106e00;
        case 0x106e04u: goto label_106e04;
        case 0x106e08u: goto label_106e08;
        case 0x106e0cu: goto label_106e0c;
        case 0x106e10u: goto label_106e10;
        case 0x106e14u: goto label_106e14;
        default: break;
    }

    ctx->pc = 0x106cc8u;

label_106cc8:
    // 0x106cc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x106cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_106ccc:
    // 0x106ccc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x106cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_106cd0:
    // 0x106cd0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x106cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_106cd4:
    // 0x106cd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x106cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106cd8:
    // 0x106cd8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x106cd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_106cdc:
    // 0x106cdc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x106cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_106ce0:
    // 0x106ce0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x106ce0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_106ce4:
    // 0x106ce4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x106ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_106ce8:
    // 0x106ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106cec:
    // 0x106cec: 0xc05d45e  jal         func_175178
label_106cf0:
    if (ctx->pc == 0x106CF0u) {
        ctx->pc = 0x106CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CECu;
        // 0x106cf0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106CF4u;
        goto label_106cf4;
    }
    ctx->pc = 0x106CECu;
    SET_GPR_U32(ctx, 31, 0x106CF4u);
    ctx->pc = 0x106CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106CECu;
    // 0x106cf0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x106CECu, 0x106CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106CF4u;
label_106cf4:
    // 0x106cf4: 0xc05d462  jal         func_175188
label_106cf8:
    if (ctx->pc == 0x106CF8u) {
        ctx->pc = 0x106CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CF4u;
        // 0x106cf8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106CFCu;
        goto label_106cfc;
    }
    ctx->pc = 0x106CF4u;
    SET_GPR_U32(ctx, 31, 0x106CFCu);
    ctx->pc = 0x106CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106CF4u;
    // 0x106cf8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x106CF4u, 0x106CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106CFCu;
label_106cfc:
    // 0x106cfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_106d00:
    // 0x106d00: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x106d00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_106d04:
    // 0x106d04: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x106d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_106d08:
    // 0x106d08: 0xa0f809  jalr        $a1
label_106d0c:
    if (ctx->pc == 0x106D0Cu) {
        ctx->pc = 0x106D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D08u;
        // 0x106d0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106D10u;
        goto label_106d10;
    }
    ctx->pc = 0x106D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x106D10u);
        ctx->pc = 0x106D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D08u;
        // 0x106d0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D08u, 0x106D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106D10u;
label_106d10:
    // 0x106d10: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x106d10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106d14:
    // 0x106d14: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x106d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_106d18:
    // 0x106d18: 0xc05d470  jal         func_1751C0
label_106d1c:
    if (ctx->pc == 0x106D1Cu) {
        ctx->pc = 0x106D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D18u;
        // 0x106d1c: 0x3265ffff  andi        $a1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x106D20u;
        goto label_106d20;
    }
    ctx->pc = 0x106D18u;
    SET_GPR_U32(ctx, 31, 0x106D20u);
    ctx->pc = 0x106D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D18u;
    // 0x106d1c: 0x3265ffff  andi        $a1, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1751C0u, 0x106D18u, 0x106D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D20u;
label_106d20:
    // 0x106d20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_106d24:
    // 0x106d24: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x106d24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_106d28:
    // 0x106d28: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x106d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_106d2c:
    // 0x106d2c: 0xa0f809  jalr        $a1
label_106d30:
    if (ctx->pc == 0x106D30u) {
        ctx->pc = 0x106D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D2Cu;
        // 0x106d30: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106D34u;
        goto label_106d34;
    }
    ctx->pc = 0x106D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x106D34u);
        ctx->pc = 0x106D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D2Cu;
        // 0x106d30: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D2Cu, 0x106D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106D34u;
label_106d34:
    // 0x106d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_106d38:
    // 0x106d38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106d3c:
    // 0x106d3c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x106d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_106d40:
    // 0x106d40: 0xc0420dc  jal         func_108370
label_106d44:
    if (ctx->pc == 0x106D44u) {
        ctx->pc = 0x106D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D40u;
        // 0x106d44: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106D48u;
        goto label_106d48;
    }
    ctx->pc = 0x106D40u;
    SET_GPR_U32(ctx, 31, 0x106D48u);
    ctx->pc = 0x106D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D40u;
    // 0x106d44: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x106D40u, 0x106D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D48u;
label_106d48:
    // 0x106d48: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x106d48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_106d4c:
    // 0x106d4c: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x106d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_106d50:
    // 0x106d50: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x106d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_106d54:
    // 0x106d54: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x106d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_106d58:
    // 0x106d58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x106d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_106d5c:
    // 0x106d5c: 0x0  nop
    ctx->pc = 0x106d5cu;
    // NOP
label_106d60:
    // 0x106d60: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_106d64:
    if (ctx->pc == 0x106D64u) {
        ctx->pc = 0x106D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D60u;
        // 0x106d64: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x106D68u;
        goto label_106d68;
    }
    ctx->pc = 0x106D60u;
    {
        const bool branch_taken_0x106d60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x106D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D60u;
        // 0x106d64: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d60) {
            ctx->pc = 0x106D7Cu;
            goto label_106d7c;
        }
    }
    ctx->pc = 0x106D68u;
label_106d68:
    // 0x106d68: 0xc05d45e  jal         func_175178
label_106d6c:
    if (ctx->pc == 0x106D6Cu) {
        ctx->pc = 0x106D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D68u;
        // 0x106d6c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106D70u;
        goto label_106d70;
    }
    ctx->pc = 0x106D68u;
    SET_GPR_U32(ctx, 31, 0x106D70u);
    ctx->pc = 0x106D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D68u;
    // 0x106d6c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x106D68u, 0x106D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D70u;
label_106d70:
    // 0x106d70: 0x2c42000d  sltiu       $v0, $v0, 0xD
    ctx->pc = 0x106d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_106d74:
    // 0x106d74: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_106d78:
    if (ctx->pc == 0x106D78u) {
        ctx->pc = 0x106D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D74u;
        // 0x106d78: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106D7Cu;
        goto label_106d7c;
    }
    ctx->pc = 0x106D74u;
    {
        const bool branch_taken_0x106d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106d74) {
            ctx->pc = 0x106D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106D74u;
            // 0x106d78: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106DF0u;
            goto label_106df0;
        }
    }
    ctx->pc = 0x106D7Cu;
label_106d7c:
    // 0x106d7c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_106d80:
    if (ctx->pc == 0x106D80u) {
        ctx->pc = 0x106D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D7Cu;
        // 0x106d80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106D84u;
        goto label_106d84;
    }
    ctx->pc = 0x106D7Cu;
    {
        const bool branch_taken_0x106d7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D7Cu;
        // 0x106d80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d7c) {
            ctx->pc = 0x106DA8u;
            goto label_106da8;
        }
    }
    ctx->pc = 0x106D84u;
label_106d84:
    // 0x106d84: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x106d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_106d88:
    // 0x106d88: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x106d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_106d8c:
    // 0x106d8c: 0xc05d470  jal         func_1751C0
label_106d90:
    if (ctx->pc == 0x106D90u) {
        ctx->pc = 0x106D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D8Cu;
        // 0x106d90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106D94u;
        goto label_106d94;
    }
    ctx->pc = 0x106D8Cu;
    SET_GPR_U32(ctx, 31, 0x106D94u);
    ctx->pc = 0x106D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D8Cu;
    // 0x106d90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1751C0u, 0x106D8Cu, 0x106D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D94u;
label_106d94:
    // 0x106d94: 0xc041590  jal         func_105640
label_106d98:
    if (ctx->pc == 0x106D98u) {
        ctx->pc = 0x106D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D94u;
        // 0x106d98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106D9Cu;
        goto label_106d9c;
    }
    ctx->pc = 0x106D94u;
    SET_GPR_U32(ctx, 31, 0x106D9Cu);
    ctx->pc = 0x106D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D94u;
    // 0x106d98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105640u, 0x106D94u, 0x106D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D9Cu;
label_106d9c:
    // 0x106d9c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x106d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_106da0:
    // 0x106da0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_106da4:
    if (ctx->pc == 0x106DA4u) {
        ctx->pc = 0x106DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DA0u;
        // 0x106da4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106DA8u;
        goto label_106da8;
    }
    ctx->pc = 0x106DA0u;
    {
        const bool branch_taken_0x106da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106da0) {
            ctx->pc = 0x106DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106DA0u;
            // 0x106da4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106d88;
        }
    }
    ctx->pc = 0x106DA8u;
label_106da8:
    // 0x106da8: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_106dac:
    if (ctx->pc == 0x106DACu) {
        ctx->pc = 0x106DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DA8u;
        // 0x106dac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106DB0u;
        goto label_106db0;
    }
    ctx->pc = 0x106DA8u;
    {
        const bool branch_taken_0x106da8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DA8u;
        // 0x106dac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106da8) {
            ctx->pc = 0x106DE0u;
            goto label_106de0;
        }
    }
    ctx->pc = 0x106DB0u;
label_106db0:
    // 0x106db0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x106db0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_106db4:
    // 0x106db4: 0x0  nop
    ctx->pc = 0x106db4u;
    // NOP
label_106db8:
    // 0x106db8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x106db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_106dbc:
    // 0x106dbc: 0xc05d45e  jal         func_175178
label_106dc0:
    if (ctx->pc == 0x106DC0u) {
        ctx->pc = 0x106DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DBCu;
        // 0x106dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106DC4u;
        goto label_106dc4;
    }
    ctx->pc = 0x106DBCu;
    SET_GPR_U32(ctx, 31, 0x106DC4u);
    ctx->pc = 0x106DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106DBCu;
    // 0x106dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x106DBCu, 0x106DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106DC4u;
label_106dc4:
    // 0x106dc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_106dc8:
    // 0x106dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106dcc:
    // 0x106dcc: 0xc05d460  jal         func_175180
label_106dd0:
    if (ctx->pc == 0x106DD0u) {
        ctx->pc = 0x106DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DCCu;
        // 0x106dd0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x106DD4u;
        goto label_106dd4;
    }
    ctx->pc = 0x106DCCu;
    SET_GPR_U32(ctx, 31, 0x106DD4u);
    ctx->pc = 0x106DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106DCCu;
    // 0x106dd0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175180u, 0x106DCCu, 0x106DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106DD4u;
label_106dd4:
    // 0x106dd4: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x106dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_106dd8:
    // 0x106dd8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_106ddc:
    if (ctx->pc == 0x106DDCu) {
        ctx->pc = 0x106DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DD8u;
        // 0x106ddc: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106DE0u;
        goto label_106de0;
    }
    ctx->pc = 0x106DD8u;
    {
        const bool branch_taken_0x106dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106dd8) {
            ctx->pc = 0x106DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106DD8u;
            // 0x106ddc: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106db8;
        }
    }
    ctx->pc = 0x106DE0u;
label_106de0:
    // 0x106de0: 0xc041590  jal         func_105640
label_106de4:
    if (ctx->pc == 0x106DE4u) {
        ctx->pc = 0x106DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DE0u;
        // 0x106de4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106DE8u;
        goto label_106de8;
    }
    ctx->pc = 0x106DE0u;
    SET_GPR_U32(ctx, 31, 0x106DE8u);
    ctx->pc = 0x106DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106DE0u;
    // 0x106de4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105640u, 0x106DE0u, 0x106DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106DE8u;
label_106de8:
    // 0x106de8: 0x10000004  b           . + 4 + (0x4 << 2)
label_106dec:
    if (ctx->pc == 0x106DECu) {
        ctx->pc = 0x106DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DE8u;
        // 0x106dec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106DF0u;
        goto label_106df0;
    }
    ctx->pc = 0x106DE8u;
    {
        const bool branch_taken_0x106de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DE8u;
        // 0x106dec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106de8) {
            ctx->pc = 0x106DFCu;
            goto label_106dfc;
        }
    }
    ctx->pc = 0x106DF0u;
label_106df0:
    // 0x106df0: 0xc05d4e0  jal         func_175380
label_106df4:
    if (ctx->pc == 0x106DF4u) {
        ctx->pc = 0x106DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DF0u;
        // 0x106df4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106DF8u;
        goto label_106df8;
    }
    ctx->pc = 0x106DF0u;
    SET_GPR_U32(ctx, 31, 0x106DF8u);
    ctx->pc = 0x106DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106DF0u;
    // 0x106df4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x106DF0u, 0x106DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106DF8u;
label_106df8:
    // 0x106df8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x106df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_106dfc:
    // 0x106dfc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x106dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_106e00:
    // 0x106e00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x106e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_106e04:
    // 0x106e04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x106e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_106e08:
    // 0x106e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106e0c:
    // 0x106e0c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x106e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_106e10:
    // 0x106e10: 0x3e00008  jr          $ra
label_106e14:
    if (ctx->pc == 0x106E14u) {
        ctx->pc = 0x106E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E10u;
        // 0x106e14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E18u;
        goto label_fallthrough_0x106e10;
    }
    ctx->pc = 0x106E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E10u;
        // 0x106e14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106e10:
    ctx->pc = 0x106E18u;
}
