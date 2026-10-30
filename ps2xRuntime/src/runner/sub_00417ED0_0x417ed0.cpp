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

// Function: sub_00417ED0
// Address: 0x417ed0 - 0x4180b0
void sub_00417ED0_0x417ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417ED0_0x417ed0");
#endif

    switch (ctx->pc) {
        case 0x417ed0u: goto label_417ed0;
        case 0x417ed4u: goto label_417ed4;
        case 0x417ed8u: goto label_417ed8;
        case 0x417edcu: goto label_417edc;
        case 0x417ee0u: goto label_417ee0;
        case 0x417ee4u: goto label_417ee4;
        case 0x417ee8u: goto label_417ee8;
        case 0x417eecu: goto label_417eec;
        case 0x417ef0u: goto label_417ef0;
        case 0x417ef4u: goto label_417ef4;
        case 0x417ef8u: goto label_417ef8;
        case 0x417efcu: goto label_417efc;
        case 0x417f00u: goto label_417f00;
        case 0x417f04u: goto label_417f04;
        case 0x417f08u: goto label_417f08;
        case 0x417f0cu: goto label_417f0c;
        case 0x417f10u: goto label_417f10;
        case 0x417f14u: goto label_417f14;
        case 0x417f18u: goto label_417f18;
        case 0x417f1cu: goto label_417f1c;
        case 0x417f20u: goto label_417f20;
        case 0x417f24u: goto label_417f24;
        case 0x417f28u: goto label_417f28;
        case 0x417f2cu: goto label_417f2c;
        case 0x417f30u: goto label_417f30;
        case 0x417f34u: goto label_417f34;
        case 0x417f38u: goto label_417f38;
        case 0x417f3cu: goto label_417f3c;
        case 0x417f40u: goto label_417f40;
        case 0x417f44u: goto label_417f44;
        case 0x417f48u: goto label_417f48;
        case 0x417f4cu: goto label_417f4c;
        case 0x417f50u: goto label_417f50;
        case 0x417f54u: goto label_417f54;
        case 0x417f58u: goto label_417f58;
        case 0x417f5cu: goto label_417f5c;
        case 0x417f60u: goto label_417f60;
        case 0x417f64u: goto label_417f64;
        case 0x417f68u: goto label_417f68;
        case 0x417f6cu: goto label_417f6c;
        case 0x417f70u: goto label_417f70;
        case 0x417f74u: goto label_417f74;
        case 0x417f78u: goto label_417f78;
        case 0x417f7cu: goto label_417f7c;
        case 0x417f80u: goto label_417f80;
        case 0x417f84u: goto label_417f84;
        case 0x417f88u: goto label_417f88;
        case 0x417f8cu: goto label_417f8c;
        case 0x417f90u: goto label_417f90;
        case 0x417f94u: goto label_417f94;
        case 0x417f98u: goto label_417f98;
        case 0x417f9cu: goto label_417f9c;
        case 0x417fa0u: goto label_417fa0;
        case 0x417fa4u: goto label_417fa4;
        case 0x417fa8u: goto label_417fa8;
        case 0x417facu: goto label_417fac;
        case 0x417fb0u: goto label_417fb0;
        case 0x417fb4u: goto label_417fb4;
        case 0x417fb8u: goto label_417fb8;
        case 0x417fbcu: goto label_417fbc;
        case 0x417fc0u: goto label_417fc0;
        case 0x417fc4u: goto label_417fc4;
        case 0x417fc8u: goto label_417fc8;
        case 0x417fccu: goto label_417fcc;
        case 0x417fd0u: goto label_417fd0;
        case 0x417fd4u: goto label_417fd4;
        case 0x417fd8u: goto label_417fd8;
        case 0x417fdcu: goto label_417fdc;
        case 0x417fe0u: goto label_417fe0;
        case 0x417fe4u: goto label_417fe4;
        case 0x417fe8u: goto label_417fe8;
        case 0x417fecu: goto label_417fec;
        case 0x417ff0u: goto label_417ff0;
        case 0x417ff4u: goto label_417ff4;
        case 0x417ff8u: goto label_417ff8;
        case 0x417ffcu: goto label_417ffc;
        case 0x418000u: goto label_418000;
        case 0x418004u: goto label_418004;
        case 0x418008u: goto label_418008;
        case 0x41800cu: goto label_41800c;
        case 0x418010u: goto label_418010;
        case 0x418014u: goto label_418014;
        case 0x418018u: goto label_418018;
        case 0x41801cu: goto label_41801c;
        case 0x418020u: goto label_418020;
        case 0x418024u: goto label_418024;
        case 0x418028u: goto label_418028;
        case 0x41802cu: goto label_41802c;
        case 0x418030u: goto label_418030;
        case 0x418034u: goto label_418034;
        case 0x418038u: goto label_418038;
        case 0x41803cu: goto label_41803c;
        case 0x418040u: goto label_418040;
        case 0x418044u: goto label_418044;
        case 0x418048u: goto label_418048;
        case 0x41804cu: goto label_41804c;
        case 0x418050u: goto label_418050;
        case 0x418054u: goto label_418054;
        case 0x418058u: goto label_418058;
        case 0x41805cu: goto label_41805c;
        case 0x418060u: goto label_418060;
        case 0x418064u: goto label_418064;
        case 0x418068u: goto label_418068;
        case 0x41806cu: goto label_41806c;
        case 0x418070u: goto label_418070;
        case 0x418074u: goto label_418074;
        case 0x418078u: goto label_418078;
        case 0x41807cu: goto label_41807c;
        case 0x418080u: goto label_418080;
        case 0x418084u: goto label_418084;
        case 0x418088u: goto label_418088;
        case 0x41808cu: goto label_41808c;
        case 0x418090u: goto label_418090;
        case 0x418094u: goto label_418094;
        case 0x418098u: goto label_418098;
        case 0x41809cu: goto label_41809c;
        case 0x4180a0u: goto label_4180a0;
        case 0x4180a4u: goto label_4180a4;
        case 0x4180a8u: goto label_4180a8;
        case 0x4180acu: goto label_4180ac;
        default: break;
    }

    ctx->pc = 0x417ed0u;

label_417ed0:
    // 0x417ed0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x417ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_417ed4:
    // 0x417ed4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x417ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_417ed8:
    // 0x417ed8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x417ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_417edc:
    // 0x417edc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x417edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_417ee0:
    // 0x417ee0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x417ee0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_417ee4:
    // 0x417ee4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x417ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_417ee8:
    // 0x417ee8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x417ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_417eec:
    // 0x417eec: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x417eecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_417ef0:
    // 0x417ef0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x417ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_417ef4:
    // 0x417ef4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x417ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_417ef8:
    // 0x417ef8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x417ef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_417efc:
    // 0x417efc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x417efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_417f00:
    // 0x417f00: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x417f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_417f04:
    // 0x417f04: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x417f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_417f08:
    // 0x417f08: 0x40f809  jalr        $v0
label_417f0c:
    if (ctx->pc == 0x417F0Cu) {
        ctx->pc = 0x417F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F08u;
        // 0x417f0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F10u;
        goto label_417f10;
    }
    ctx->pc = 0x417F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x417F10u);
        ctx->pc = 0x417F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F08u;
        // 0x417f0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417F08u, 0x417F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417F10u;
label_417f10:
    // 0x417f10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x417f10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417f14:
    // 0x417f14: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x417f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_417f18:
    // 0x417f18: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_417f1c:
    if (ctx->pc == 0x417F1Cu) {
        ctx->pc = 0x417F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F18u;
        // 0x417f1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F20u;
        goto label_417f20;
    }
    ctx->pc = 0x417F18u;
    {
        const bool branch_taken_0x417f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x417F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F18u;
        // 0x417f1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417f18) {
            ctx->pc = 0x417F78u;
            goto label_417f78;
        }
    }
    ctx->pc = 0x417F20u;
label_417f20:
    // 0x417f20: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x417f20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_417f24:
    // 0x417f24: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x417f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_417f28:
    // 0x417f28: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x417f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_417f2c:
    // 0x417f2c: 0xc0e44cc  jal         func_391330
label_417f30:
    if (ctx->pc == 0x417F30u) {
        ctx->pc = 0x417F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F2Cu;
        // 0x417f30: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F34u;
        goto label_417f34;
    }
    ctx->pc = 0x417F2Cu;
    SET_GPR_U32(ctx, 31, 0x417F34u);
    ctx->pc = 0x417F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417F2Cu;
    // 0x417f30: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x417F2Cu, 0x417F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417F34u;
label_417f34:
    // 0x417f34: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x417f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_417f38:
    // 0x417f38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x417f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417f3c:
    // 0x417f3c: 0xc0e45f6  jal         func_3917D8
label_417f40:
    if (ctx->pc == 0x417F40u) {
        ctx->pc = 0x417F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F3Cu;
        // 0x417f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F44u;
        goto label_417f44;
    }
    ctx->pc = 0x417F3Cu;
    SET_GPR_U32(ctx, 31, 0x417F44u);
    ctx->pc = 0x417F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417F3Cu;
    // 0x417f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917D8u, 0x417F3Cu, 0x417F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417F44u;
label_417f44:
    // 0x417f44: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x417f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_417f48:
    // 0x417f48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x417f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_417f4c:
    // 0x417f4c: 0xc136b30  jal         func_4DACC0
label_417f50:
    if (ctx->pc == 0x417F50u) {
        ctx->pc = 0x417F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F4Cu;
        // 0x417f50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F54u;
        goto label_417f54;
    }
    ctx->pc = 0x417F4Cu;
    SET_GPR_U32(ctx, 31, 0x417F54u);
    ctx->pc = 0x417F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417F4Cu;
    // 0x417f50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x417F4Cu, 0x417F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417F54u;
label_417f54:
    // 0x417f54: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x417f54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_417f58:
    // 0x417f58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x417f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_417f5c:
    // 0x417f5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x417f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_417f60:
    // 0x417f60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x417f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_417f64:
    // 0x417f64: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x417f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_417f68:
    // 0x417f68: 0xc136b18  jal         func_4DAC60
label_417f6c:
    if (ctx->pc == 0x417F6Cu) {
        ctx->pc = 0x417F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F68u;
        // 0x417f6c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F70u;
        goto label_417f70;
    }
    ctx->pc = 0x417F68u;
    SET_GPR_U32(ctx, 31, 0x417F70u);
    ctx->pc = 0x417F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417F68u;
    // 0x417f6c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x417F68u, 0x417F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417F70u;
label_417f70:
    // 0x417f70: 0x1000001c  b           . + 4 + (0x1C << 2)
label_417f74:
    if (ctx->pc == 0x417F74u) {
        ctx->pc = 0x417F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F70u;
        // 0x417f74: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F78u;
        goto label_417f78;
    }
    ctx->pc = 0x417F70u;
    {
        const bool branch_taken_0x417f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F70u;
        // 0x417f74: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417f70) {
            ctx->pc = 0x417FE4u;
            goto label_417fe4;
        }
    }
    ctx->pc = 0x417F78u;
label_417f78:
    // 0x417f78: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x417f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_417f7c:
    // 0x417f7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_417f80:
    if (ctx->pc == 0x417F80u) {
        ctx->pc = 0x417F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F7Cu;
        // 0x417f80: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F84u;
        goto label_417f84;
    }
    ctx->pc = 0x417F7Cu;
    {
        const bool branch_taken_0x417f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x417F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F7Cu;
        // 0x417f80: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x417f7c) {
            ctx->pc = 0x417F9Cu;
            goto label_417f9c;
        }
    }
    ctx->pc = 0x417F84u;
label_417f84:
    // 0x417f84: 0xc10587a  jal         func_4161E8
label_417f88:
    if (ctx->pc == 0x417F88u) {
        ctx->pc = 0x417F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F84u;
        // 0x417f88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F8Cu;
        goto label_417f8c;
    }
    ctx->pc = 0x417F84u;
    SET_GPR_U32(ctx, 31, 0x417F8Cu);
    ctx->pc = 0x417F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417F84u;
    // 0x417f88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x417F84u, 0x417F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417F8Cu;
label_417f8c:
    // 0x417f8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x417f8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_417f90:
    // 0x417f90: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x417f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_417f94:
    // 0x417f94: 0x10000013  b           . + 4 + (0x13 << 2)
label_417f98:
    if (ctx->pc == 0x417F98u) {
        ctx->pc = 0x417F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F94u;
        // 0x417f98: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417F9Cu;
        goto label_417f9c;
    }
    ctx->pc = 0x417F94u;
    {
        const bool branch_taken_0x417f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F94u;
        // 0x417f98: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417f94) {
            ctx->pc = 0x417FE4u;
            goto label_417fe4;
        }
    }
    ctx->pc = 0x417F9Cu;
label_417f9c:
    // 0x417f9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_417fa0:
    if (ctx->pc == 0x417FA0u) {
        ctx->pc = 0x417FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F9Cu;
        // 0x417fa0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417FA4u;
        goto label_417fa4;
    }
    ctx->pc = 0x417F9Cu;
    {
        const bool branch_taken_0x417f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x417FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F9Cu;
        // 0x417fa0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417f9c) {
            ctx->pc = 0x417FC0u;
            goto label_417fc0;
        }
    }
    ctx->pc = 0x417FA4u;
label_417fa4:
    // 0x417fa4: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x417fa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_417fa8:
    // 0x417fa8: 0x24444b00  addiu       $a0, $v0, 0x4B00
    ctx->pc = 0x417fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_417fac:
    // 0x417fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x417facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417fb0:
    // 0x417fb0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x417fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_417fb4:
    // 0x417fb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x417fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_417fb8:
    // 0x417fb8: 0x10000009  b           . + 4 + (0x9 << 2)
label_417fbc:
    if (ctx->pc == 0x417FBCu) {
        ctx->pc = 0x417FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417FB8u;
        // 0x417fbc: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417FC0u;
        goto label_417fc0;
    }
    ctx->pc = 0x417FB8u;
    {
        const bool branch_taken_0x417fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417FB8u;
        // 0x417fbc: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417fb8) {
            ctx->pc = 0x417FE0u;
            goto label_417fe0;
        }
    }
    ctx->pc = 0x417FC0u;
label_417fc0:
    // 0x417fc0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x417fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_417fc4:
    // 0x417fc4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x417fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_417fc8:
    // 0x417fc8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x417fc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_417fcc:
    // 0x417fcc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x417fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_417fd0:
    // 0x417fd0: 0x60f809  jalr        $v1
label_417fd4:
    if (ctx->pc == 0x417FD4u) {
        ctx->pc = 0x417FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417FD0u;
        // 0x417fd4: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417FD8u;
        goto label_417fd8;
    }
    ctx->pc = 0x417FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x417FD8u);
        ctx->pc = 0x417FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417FD0u;
        // 0x417fd4: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417FD0u, 0x417FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417FD8u;
label_417fd8:
    // 0x417fd8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x417fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417fdc:
    // 0x417fdc: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x417fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_417fe0:
    // 0x417fe0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x417fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_417fe4:
    // 0x417fe4: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x417fe4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_417fe8:
    // 0x417fe8: 0x24a24b00  addiu       $v0, $a1, 0x4B00
    ctx->pc = 0x417fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_417fec:
    // 0x417fec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x417fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_417ff0:
    // 0x417ff0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x417ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_417ff4:
    // 0x417ff4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x417ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_417ff8:
    // 0x417ff8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x417ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417ffc:
    // 0x417ffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x417ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_418000:
    // 0x418000: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x418000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_418004:
    // 0x418004: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x418004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_418008:
    // 0x418008: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x418008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_41800c:
    // 0x41800c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x41800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_418010:
    // 0x418010: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x418010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_418014:
    // 0x418014: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x418014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_418018:
    // 0x418018: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x418018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_41801c:
    // 0x41801c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x41801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_418020:
    // 0x418020: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x418020u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_418024:
    // 0x418024: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x418024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418028:
    // 0x418028: 0x0  nop
    ctx->pc = 0x418028u;
    // NOP
label_41802c:
    // 0x41802c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_418030:
    if (ctx->pc == 0x418030u) {
        ctx->pc = 0x418030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41802Cu;
        // 0x418030: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418034u;
        goto label_418034;
    }
    ctx->pc = 0x41802Cu;
    {
        const bool branch_taken_0x41802c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x418030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41802Cu;
        // 0x418030: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41802c) {
            ctx->pc = 0x418040u;
            goto label_418040;
        }
    }
    ctx->pc = 0x418034u;
label_418034:
    // 0x418034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x418034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418038:
    // 0x418038: 0x10000015  b           . + 4 + (0x15 << 2)
label_41803c:
    if (ctx->pc == 0x41803Cu) {
        ctx->pc = 0x41803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418038u;
        // 0x41803c: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418040u;
        goto label_418040;
    }
    ctx->pc = 0x418038u;
    {
        const bool branch_taken_0x418038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418038u;
        // 0x41803c: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418038) {
            ctx->pc = 0x418090u;
            goto label_418090;
        }
    }
    ctx->pc = 0x418040u;
label_418040:
    // 0x418040: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x418040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_418044:
    // 0x418044: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x418044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_418048:
    // 0x418048: 0xc136afa  jal         func_4DABE8
label_41804c:
    if (ctx->pc == 0x41804Cu) {
        ctx->pc = 0x41804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418048u;
        // 0x41804c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418050u;
        goto label_418050;
    }
    ctx->pc = 0x418048u;
    SET_GPR_U32(ctx, 31, 0x418050u);
    ctx->pc = 0x41804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418048u;
    // 0x41804c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x418048u, 0x418050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418050u;
label_418050:
    // 0x418050: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x418050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_418054:
    // 0x418054: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x418054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_418058:
    // 0x418058: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x418058u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_41805c:
    // 0x41805c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x41805cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_418060:
    // 0x418060: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x418060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_418064:
    // 0x418064: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x418064u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_418068:
    // 0x418068: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x418068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41806c:
    // 0x41806c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41806cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418070:
    // 0x418070: 0x0  nop
    ctx->pc = 0x418070u;
    // NOP
label_418074:
    // 0x418074: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x418074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418078:
    // 0x418078: 0x0  nop
    ctx->pc = 0x418078u;
    // NOP
label_41807c:
    // 0x41807c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_418080:
    if (ctx->pc == 0x418080u) {
        ctx->pc = 0x418080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41807Cu;
        // 0x418080: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x418084u;
        goto label_418084;
    }
    ctx->pc = 0x41807Cu;
    {
        const bool branch_taken_0x41807c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41807c) {
            ctx->pc = 0x418080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41807Cu;
            // 0x418080: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x418084u;
            goto label_418084;
        }
    }
    ctx->pc = 0x418084u;
label_418084:
    // 0x418084: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x418084u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_418088:
    // 0x418088: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x418088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41808c:
    // 0x41808c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x41808cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_418090:
    // 0x418090: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x418090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_418094:
    // 0x418094: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x418094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_418098:
    // 0x418098: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x418098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41809c:
    // 0x41809c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x41809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4180a0:
    // 0x4180a0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x4180a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4180a4:
    // 0x4180a4: 0x3e00008  jr          $ra
label_4180a8:
    if (ctx->pc == 0x4180A8u) {
        ctx->pc = 0x4180A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4180A4u;
        // 0x4180a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4180ACu;
        goto label_4180ac;
    }
    ctx->pc = 0x4180A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4180A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4180A4u;
        // 0x4180a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4180A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4180ACu;
label_4180ac:
    // 0x4180ac: 0x0  nop
    ctx->pc = 0x4180acu;
    // NOP
    ctx->pc = 0x4180b0u;
}
