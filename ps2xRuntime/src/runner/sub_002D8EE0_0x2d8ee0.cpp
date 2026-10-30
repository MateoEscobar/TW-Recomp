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

// Function: sub_002D8EE0
// Address: 0x2d8ee0 - 0x2d9238
void sub_002D8EE0_0x2d8ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8EE0_0x2d8ee0");
#endif

    switch (ctx->pc) {
        case 0x2d8ee0u: goto label_2d8ee0;
        case 0x2d8ee4u: goto label_2d8ee4;
        case 0x2d8ee8u: goto label_2d8ee8;
        case 0x2d8eecu: goto label_2d8eec;
        case 0x2d8ef0u: goto label_2d8ef0;
        case 0x2d8ef4u: goto label_2d8ef4;
        case 0x2d8ef8u: goto label_2d8ef8;
        case 0x2d8efcu: goto label_2d8efc;
        case 0x2d8f00u: goto label_2d8f00;
        case 0x2d8f04u: goto label_2d8f04;
        case 0x2d8f08u: goto label_2d8f08;
        case 0x2d8f0cu: goto label_2d8f0c;
        case 0x2d8f10u: goto label_2d8f10;
        case 0x2d8f14u: goto label_2d8f14;
        case 0x2d8f18u: goto label_2d8f18;
        case 0x2d8f1cu: goto label_2d8f1c;
        case 0x2d8f20u: goto label_2d8f20;
        case 0x2d8f24u: goto label_2d8f24;
        case 0x2d8f28u: goto label_2d8f28;
        case 0x2d8f2cu: goto label_2d8f2c;
        case 0x2d8f30u: goto label_2d8f30;
        case 0x2d8f34u: goto label_2d8f34;
        case 0x2d8f38u: goto label_2d8f38;
        case 0x2d8f3cu: goto label_2d8f3c;
        case 0x2d8f40u: goto label_2d8f40;
        case 0x2d8f44u: goto label_2d8f44;
        case 0x2d8f48u: goto label_2d8f48;
        case 0x2d8f4cu: goto label_2d8f4c;
        case 0x2d8f50u: goto label_2d8f50;
        case 0x2d8f54u: goto label_2d8f54;
        case 0x2d8f58u: goto label_2d8f58;
        case 0x2d8f5cu: goto label_2d8f5c;
        case 0x2d8f60u: goto label_2d8f60;
        case 0x2d8f64u: goto label_2d8f64;
        case 0x2d8f68u: goto label_2d8f68;
        case 0x2d8f6cu: goto label_2d8f6c;
        case 0x2d8f70u: goto label_2d8f70;
        case 0x2d8f74u: goto label_2d8f74;
        case 0x2d8f78u: goto label_2d8f78;
        case 0x2d8f7cu: goto label_2d8f7c;
        case 0x2d8f80u: goto label_2d8f80;
        case 0x2d8f84u: goto label_2d8f84;
        case 0x2d8f88u: goto label_2d8f88;
        case 0x2d8f8cu: goto label_2d8f8c;
        case 0x2d8f90u: goto label_2d8f90;
        case 0x2d8f94u: goto label_2d8f94;
        case 0x2d8f98u: goto label_2d8f98;
        case 0x2d8f9cu: goto label_2d8f9c;
        case 0x2d8fa0u: goto label_2d8fa0;
        case 0x2d8fa4u: goto label_2d8fa4;
        case 0x2d8fa8u: goto label_2d8fa8;
        case 0x2d8facu: goto label_2d8fac;
        case 0x2d8fb0u: goto label_2d8fb0;
        case 0x2d8fb4u: goto label_2d8fb4;
        case 0x2d8fb8u: goto label_2d8fb8;
        case 0x2d8fbcu: goto label_2d8fbc;
        case 0x2d8fc0u: goto label_2d8fc0;
        case 0x2d8fc4u: goto label_2d8fc4;
        case 0x2d8fc8u: goto label_2d8fc8;
        case 0x2d8fccu: goto label_2d8fcc;
        case 0x2d8fd0u: goto label_2d8fd0;
        case 0x2d8fd4u: goto label_2d8fd4;
        case 0x2d8fd8u: goto label_2d8fd8;
        case 0x2d8fdcu: goto label_2d8fdc;
        case 0x2d8fe0u: goto label_2d8fe0;
        case 0x2d8fe4u: goto label_2d8fe4;
        case 0x2d8fe8u: goto label_2d8fe8;
        case 0x2d8fecu: goto label_2d8fec;
        case 0x2d8ff0u: goto label_2d8ff0;
        case 0x2d8ff4u: goto label_2d8ff4;
        case 0x2d8ff8u: goto label_2d8ff8;
        case 0x2d8ffcu: goto label_2d8ffc;
        case 0x2d9000u: goto label_2d9000;
        case 0x2d9004u: goto label_2d9004;
        case 0x2d9008u: goto label_2d9008;
        case 0x2d900cu: goto label_2d900c;
        case 0x2d9010u: goto label_2d9010;
        case 0x2d9014u: goto label_2d9014;
        case 0x2d9018u: goto label_2d9018;
        case 0x2d901cu: goto label_2d901c;
        case 0x2d9020u: goto label_2d9020;
        case 0x2d9024u: goto label_2d9024;
        case 0x2d9028u: goto label_2d9028;
        case 0x2d902cu: goto label_2d902c;
        case 0x2d9030u: goto label_2d9030;
        case 0x2d9034u: goto label_2d9034;
        case 0x2d9038u: goto label_2d9038;
        case 0x2d903cu: goto label_2d903c;
        case 0x2d9040u: goto label_2d9040;
        case 0x2d9044u: goto label_2d9044;
        case 0x2d9048u: goto label_2d9048;
        case 0x2d904cu: goto label_2d904c;
        case 0x2d9050u: goto label_2d9050;
        case 0x2d9054u: goto label_2d9054;
        case 0x2d9058u: goto label_2d9058;
        case 0x2d905cu: goto label_2d905c;
        case 0x2d9060u: goto label_2d9060;
        case 0x2d9064u: goto label_2d9064;
        case 0x2d9068u: goto label_2d9068;
        case 0x2d906cu: goto label_2d906c;
        case 0x2d9070u: goto label_2d9070;
        case 0x2d9074u: goto label_2d9074;
        case 0x2d9078u: goto label_2d9078;
        case 0x2d907cu: goto label_2d907c;
        case 0x2d9080u: goto label_2d9080;
        case 0x2d9084u: goto label_2d9084;
        case 0x2d9088u: goto label_2d9088;
        case 0x2d908cu: goto label_2d908c;
        case 0x2d9090u: goto label_2d9090;
        case 0x2d9094u: goto label_2d9094;
        case 0x2d9098u: goto label_2d9098;
        case 0x2d909cu: goto label_2d909c;
        case 0x2d90a0u: goto label_2d90a0;
        case 0x2d90a4u: goto label_2d90a4;
        case 0x2d90a8u: goto label_2d90a8;
        case 0x2d90acu: goto label_2d90ac;
        case 0x2d90b0u: goto label_2d90b0;
        case 0x2d90b4u: goto label_2d90b4;
        case 0x2d90b8u: goto label_2d90b8;
        case 0x2d90bcu: goto label_2d90bc;
        case 0x2d90c0u: goto label_2d90c0;
        case 0x2d90c4u: goto label_2d90c4;
        case 0x2d90c8u: goto label_2d90c8;
        case 0x2d90ccu: goto label_2d90cc;
        case 0x2d90d0u: goto label_2d90d0;
        case 0x2d90d4u: goto label_2d90d4;
        case 0x2d90d8u: goto label_2d90d8;
        case 0x2d90dcu: goto label_2d90dc;
        case 0x2d90e0u: goto label_2d90e0;
        case 0x2d90e4u: goto label_2d90e4;
        case 0x2d90e8u: goto label_2d90e8;
        case 0x2d90ecu: goto label_2d90ec;
        case 0x2d90f0u: goto label_2d90f0;
        case 0x2d90f4u: goto label_2d90f4;
        case 0x2d90f8u: goto label_2d90f8;
        case 0x2d90fcu: goto label_2d90fc;
        case 0x2d9100u: goto label_2d9100;
        case 0x2d9104u: goto label_2d9104;
        case 0x2d9108u: goto label_2d9108;
        case 0x2d910cu: goto label_2d910c;
        case 0x2d9110u: goto label_2d9110;
        case 0x2d9114u: goto label_2d9114;
        case 0x2d9118u: goto label_2d9118;
        case 0x2d911cu: goto label_2d911c;
        case 0x2d9120u: goto label_2d9120;
        case 0x2d9124u: goto label_2d9124;
        case 0x2d9128u: goto label_2d9128;
        case 0x2d912cu: goto label_2d912c;
        case 0x2d9130u: goto label_2d9130;
        case 0x2d9134u: goto label_2d9134;
        case 0x2d9138u: goto label_2d9138;
        case 0x2d913cu: goto label_2d913c;
        case 0x2d9140u: goto label_2d9140;
        case 0x2d9144u: goto label_2d9144;
        case 0x2d9148u: goto label_2d9148;
        case 0x2d914cu: goto label_2d914c;
        case 0x2d9150u: goto label_2d9150;
        case 0x2d9154u: goto label_2d9154;
        case 0x2d9158u: goto label_2d9158;
        case 0x2d915cu: goto label_2d915c;
        case 0x2d9160u: goto label_2d9160;
        case 0x2d9164u: goto label_2d9164;
        case 0x2d9168u: goto label_2d9168;
        case 0x2d916cu: goto label_2d916c;
        case 0x2d9170u: goto label_2d9170;
        case 0x2d9174u: goto label_2d9174;
        case 0x2d9178u: goto label_2d9178;
        case 0x2d917cu: goto label_2d917c;
        case 0x2d9180u: goto label_2d9180;
        case 0x2d9184u: goto label_2d9184;
        case 0x2d9188u: goto label_2d9188;
        case 0x2d918cu: goto label_2d918c;
        case 0x2d9190u: goto label_2d9190;
        case 0x2d9194u: goto label_2d9194;
        case 0x2d9198u: goto label_2d9198;
        case 0x2d919cu: goto label_2d919c;
        case 0x2d91a0u: goto label_2d91a0;
        case 0x2d91a4u: goto label_2d91a4;
        case 0x2d91a8u: goto label_2d91a8;
        case 0x2d91acu: goto label_2d91ac;
        case 0x2d91b0u: goto label_2d91b0;
        case 0x2d91b4u: goto label_2d91b4;
        case 0x2d91b8u: goto label_2d91b8;
        case 0x2d91bcu: goto label_2d91bc;
        case 0x2d91c0u: goto label_2d91c0;
        case 0x2d91c4u: goto label_2d91c4;
        case 0x2d91c8u: goto label_2d91c8;
        case 0x2d91ccu: goto label_2d91cc;
        case 0x2d91d0u: goto label_2d91d0;
        case 0x2d91d4u: goto label_2d91d4;
        case 0x2d91d8u: goto label_2d91d8;
        case 0x2d91dcu: goto label_2d91dc;
        case 0x2d91e0u: goto label_2d91e0;
        case 0x2d91e4u: goto label_2d91e4;
        case 0x2d91e8u: goto label_2d91e8;
        case 0x2d91ecu: goto label_2d91ec;
        case 0x2d91f0u: goto label_2d91f0;
        case 0x2d91f4u: goto label_2d91f4;
        case 0x2d91f8u: goto label_2d91f8;
        case 0x2d91fcu: goto label_2d91fc;
        case 0x2d9200u: goto label_2d9200;
        case 0x2d9204u: goto label_2d9204;
        case 0x2d9208u: goto label_2d9208;
        case 0x2d920cu: goto label_2d920c;
        case 0x2d9210u: goto label_2d9210;
        case 0x2d9214u: goto label_2d9214;
        case 0x2d9218u: goto label_2d9218;
        case 0x2d921cu: goto label_2d921c;
        case 0x2d9220u: goto label_2d9220;
        case 0x2d9224u: goto label_2d9224;
        case 0x2d9228u: goto label_2d9228;
        case 0x2d922cu: goto label_2d922c;
        case 0x2d9230u: goto label_2d9230;
        case 0x2d9234u: goto label_2d9234;
        default: break;
    }

    ctx->pc = 0x2d8ee0u;

label_2d8ee0:
    // 0x2d8ee0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d8ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2d8ee4:
    // 0x2d8ee4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2d8ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2d8ee8:
    // 0x2d8ee8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2d8ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2d8eec:
    // 0x2d8eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ef0:
    // 0x2d8ef0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2d8ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2d8ef4:
    // 0x2d8ef4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2d8ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2d8ef8:
    // 0x2d8ef8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d8ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2d8efc:
    // 0x2d8efc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d8efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2d8f00:
    // 0x2d8f00: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2d8f00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2d8f04:
    // 0x2d8f04: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d8f04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2d8f08:
    // 0x2d8f08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8f0c:
    // 0x2d8f0c: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x2d8f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2d8f10:
    // 0x2d8f10: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
label_2d8f14:
    if (ctx->pc == 0x2D8F14u) {
        ctx->pc = 0x2D8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F10u;
        // 0x2d8f14: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8F18u;
        goto label_2d8f18;
    }
    ctx->pc = 0x2D8F10u;
    {
        const bool branch_taken_0x2d8f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F10u;
        // 0x2d8f14: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f10) {
            ctx->pc = 0x2D905Cu;
            goto label_2d905c;
        }
    }
    ctx->pc = 0x2D8F18u;
label_2d8f18:
    // 0x2d8f18: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2d8f18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2d8f1c:
    // 0x2d8f1c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2d8f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2d8f20:
    // 0x2d8f20: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2d8f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2d8f24:
    // 0x2d8f24: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2d8f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2d8f28:
    // 0x2d8f28: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2d8f2c:
    // 0x2d8f2c: 0xc0cdb38  jal         func_336CE0
label_2d8f30:
    if (ctx->pc == 0x2D8F30u) {
        ctx->pc = 0x2D8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F2Cu;
        // 0x2d8f30: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8F34u;
        goto label_2d8f34;
    }
    ctx->pc = 0x2D8F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D8F34u);
    ctx->pc = 0x2D8F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F2Cu;
    // 0x2d8f30: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D8F2Cu, 0x2D8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F34u;
label_2d8f34:
    // 0x2d8f34: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d8f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8f38:
    // 0x2d8f38: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2d8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_2d8f3c:
    // 0x2d8f3c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d8f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2d8f40:
    // 0x2d8f40: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_2d8f44:
    if (ctx->pc == 0x2D8F44u) {
        ctx->pc = 0x2D8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F40u;
        // 0x2d8f44: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8F48u;
        goto label_2d8f48;
    }
    ctx->pc = 0x2D8F40u;
    {
        const bool branch_taken_0x2d8f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F40u;
        // 0x2d8f44: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f40) {
            ctx->pc = 0x2D8FE8u;
            goto label_2d8fe8;
        }
    }
    ctx->pc = 0x2D8F48u;
label_2d8f48:
    // 0x2d8f48: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2d8f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d8f4c:
    // 0x2d8f4c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2d8f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_2d8f50:
    // 0x2d8f50: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2d8f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2d8f54:
    // 0x2d8f54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d8f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d8f58:
    // 0x2d8f58: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2d8f58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2d8f5c:
    // 0x2d8f5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d8f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d8f60:
    // 0x2d8f60: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d8f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d8f64:
    // 0x2d8f64: 0x0  nop
    ctx->pc = 0x2d8f64u;
    // NOP
label_2d8f68:
    // 0x2d8f68: 0x45020043  bc1fl       . + 4 + (0x43 << 2)
label_2d8f6c:
    if (ctx->pc == 0x2D8F6Cu) {
        ctx->pc = 0x2D8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F68u;
        // 0x2d8f6c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8F70u;
        goto label_2d8f70;
    }
    ctx->pc = 0x2D8F68u;
    {
        const bool branch_taken_0x2d8f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d8f68) {
            ctx->pc = 0x2D8F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8F68u;
            // 0x2d8f6c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9078u;
            goto label_2d9078;
        }
    }
    ctx->pc = 0x2D8F70u;
label_2d8f70:
    // 0x2d8f70: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2d8f70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2d8f74:
    // 0x2d8f74: 0x1840003f  blez        $v0, . + 4 + (0x3F << 2)
label_2d8f78:
    if (ctx->pc == 0x2D8F78u) {
        ctx->pc = 0x2D8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F74u;
        // 0x2d8f78: 0x2882a  slt         $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8F7Cu;
        goto label_2d8f7c;
    }
    ctx->pc = 0x2D8F74u;
    {
        const bool branch_taken_0x2d8f74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F74u;
        // 0x2d8f78: 0x2882a  slt         $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f74) {
            ctx->pc = 0x2D9074u;
            goto label_2d9074;
        }
    }
    ctx->pc = 0x2D8F7Cu;
label_2d8f7c:
    // 0x2d8f7c: 0xc0a36c2  jal         func_28DB08
label_2d8f80:
    if (ctx->pc == 0x2D8F80u) {
        ctx->pc = 0x2D8F84u;
        goto label_2d8f84;
    }
    ctx->pc = 0x2D8F7Cu;
    SET_GPR_U32(ctx, 31, 0x2D8F84u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2D8F7Cu, 0x2D8F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F84u;
label_2d8f84:
    // 0x2d8f84: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2d8f88:
    // 0x2d8f88: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2d8f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2d8f8c:
    // 0x2d8f8c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2d8f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d8f90:
    // 0x2d8f90: 0xa0f809  jalr        $a1
label_2d8f94:
    if (ctx->pc == 0x2D8F94u) {
        ctx->pc = 0x2D8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F90u;
        // 0x2d8f94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8F98u;
        goto label_2d8f98;
    }
    ctx->pc = 0x2D8F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2D8F98u);
        ctx->pc = 0x2D8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F90u;
        // 0x2d8f94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8F90u, 0x2D8F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8F98u;
label_2d8f98:
    // 0x2d8f98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d8f98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8f9c:
    // 0x2d8f9c: 0x54710036  bnel        $v1, $s1, . + 4 + (0x36 << 2)
label_2d8fa0:
    if (ctx->pc == 0x2D8FA0u) {
        ctx->pc = 0x2D8FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F9Cu;
        // 0x2d8fa0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8FA4u;
        goto label_2d8fa4;
    }
    ctx->pc = 0x2D8F9Cu;
    {
        const bool branch_taken_0x2d8f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d8f9c) {
            ctx->pc = 0x2D8FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8F9Cu;
            // 0x2d8fa0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9078u;
            goto label_2d9078;
        }
    }
    ctx->pc = 0x2D8FA4u;
label_2d8fa4:
    // 0x2d8fa4: 0x8e620438  lw          $v0, 0x438($s3)
    ctx->pc = 0x2d8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1080)));
label_2d8fa8:
    // 0x2d8fa8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2d8fa8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d8fac:
    // 0x2d8fac: 0x56230032  bnel        $s1, $v1, . + 4 + (0x32 << 2)
label_2d8fb0:
    if (ctx->pc == 0x2D8FB0u) {
        ctx->pc = 0x2D8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FACu;
        // 0x2d8fb0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8FB4u;
        goto label_2d8fb4;
    }
    ctx->pc = 0x2D8FACu;
    {
        const bool branch_taken_0x2d8fac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8fac) {
            ctx->pc = 0x2D8FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8FACu;
            // 0x2d8fb0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9078u;
            goto label_2d9078;
        }
    }
    ctx->pc = 0x2D8FB4u;
label_2d8fb4:
    // 0x2d8fb4: 0xc0b636c  jal         func_2D8DB0
label_2d8fb8:
    if (ctx->pc == 0x2D8FB8u) {
        ctx->pc = 0x2D8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FB4u;
        // 0x2d8fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8FBCu;
        goto label_2d8fbc;
    }
    ctx->pc = 0x2D8FB4u;
    SET_GPR_U32(ctx, 31, 0x2D8FBCu);
    ctx->pc = 0x2D8FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8FB4u;
    // 0x2d8fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8DB0u, 0x2D8FB4u, 0x2D8FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8FBCu;
label_2d8fbc:
    // 0x2d8fbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d8fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8fc0:
    // 0x2d8fc0: 0x5471002d  bnel        $v1, $s1, . + 4 + (0x2D << 2)
label_2d8fc4:
    if (ctx->pc == 0x2D8FC4u) {
        ctx->pc = 0x2D8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FC0u;
        // 0x2d8fc4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8FC8u;
        goto label_2d8fc8;
    }
    ctx->pc = 0x2D8FC0u;
    {
        const bool branch_taken_0x2d8fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d8fc0) {
            ctx->pc = 0x2D8FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8FC0u;
            // 0x2d8fc4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9078u;
            goto label_2d9078;
        }
    }
    ctx->pc = 0x2D8FC8u;
label_2d8fc8:
    // 0x2d8fc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d8fcc:
    // 0x2d8fcc: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x2d8fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
label_2d8fd0:
    // 0x2d8fd0: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x2d8fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
label_2d8fd4:
    // 0x2d8fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8fd8:
    // 0x2d8fd8: 0xc0b6278  jal         func_2D89E0
label_2d8fdc:
    if (ctx->pc == 0x2D8FDCu) {
        ctx->pc = 0x2D8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FD8u;
        // 0x2d8fdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8FE0u;
        goto label_2d8fe0;
    }
    ctx->pc = 0x2D8FD8u;
    SET_GPR_U32(ctx, 31, 0x2D8FE0u);
    ctx->pc = 0x2D8FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8FD8u;
    // 0x2d8fdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D89E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D89E0u, 0x2D8FD8u, 0x2D8FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8FE0u;
label_2d8fe0:
    // 0x2d8fe0: 0x10000025  b           . + 4 + (0x25 << 2)
label_2d8fe4:
    if (ctx->pc == 0x2D8FE4u) {
        ctx->pc = 0x2D8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FE0u;
        // 0x2d8fe4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8FE8u;
        goto label_2d8fe8;
    }
    ctx->pc = 0x2D8FE0u;
    {
        const bool branch_taken_0x2d8fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FE0u;
        // 0x2d8fe4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fe0) {
            ctx->pc = 0x2D9078u;
            goto label_2d9078;
        }
    }
    ctx->pc = 0x2D8FE8u;
label_2d8fe8:
    // 0x2d8fe8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2d8fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d8fec:
    // 0x2d8fec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d8fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d8ff0:
    // 0x2d8ff0: 0x0  nop
    ctx->pc = 0x2d8ff0u;
    // NOP
label_2d8ff4:
    // 0x2d8ff4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d8ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d8ff8:
    // 0x2d8ff8: 0x0  nop
    ctx->pc = 0x2d8ff8u;
    // NOP
label_2d8ffc:
    // 0x2d8ffc: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
label_2d9000:
    if (ctx->pc == 0x2D9000u) {
        ctx->pc = 0x2D9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FFCu;
        // 0x2d9000: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9004u;
        goto label_2d9004;
    }
    ctx->pc = 0x2D8FFCu;
    {
        const bool branch_taken_0x2d8ffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d8ffc) {
            ctx->pc = 0x2D9000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8FFCu;
            // 0x2d9000: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9078u;
            goto label_2d9078;
        }
    }
    ctx->pc = 0x2D9004u;
label_2d9004:
    // 0x2d9004: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2d9004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2d9008:
    // 0x2d9008: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d9008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d900c:
    // 0x2d900c: 0x0  nop
    ctx->pc = 0x2d900cu;
    // NOP
label_2d9010:
    // 0x2d9010: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_2d9014:
    if (ctx->pc == 0x2D9014u) {
        ctx->pc = 0x2D9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9010u;
        // 0x2d9014: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9018u;
        goto label_2d9018;
    }
    ctx->pc = 0x2D9010u;
    {
        const bool branch_taken_0x2d9010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d9010) {
            ctx->pc = 0x2D9014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9010u;
            // 0x2d9014: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9078u;
            goto label_2d9078;
        }
    }
    ctx->pc = 0x2D9018u;
label_2d9018:
    // 0x2d9018: 0xc0b6272  jal         func_2D89C8
label_2d901c:
    if (ctx->pc == 0x2D901Cu) {
        ctx->pc = 0x2D901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9018u;
        // 0x2d901c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9020u;
        goto label_2d9020;
    }
    ctx->pc = 0x2D9018u;
    SET_GPR_U32(ctx, 31, 0x2D9020u);
    ctx->pc = 0x2D901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9018u;
    // 0x2d901c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D89C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D89C8u, 0x2D9018u, 0x2D9020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9020u;
label_2d9020:
    // 0x2d9020: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d9020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9024:
    // 0x2d9024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9028:
    // 0x2d9028: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_2d902c:
    if (ctx->pc == 0x2D902Cu) {
        ctx->pc = 0x2D902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9028u;
        // 0x2d902c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9030u;
        goto label_2d9030;
    }
    ctx->pc = 0x2D9028u;
    {
        const bool branch_taken_0x2d9028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9028) {
            ctx->pc = 0x2D902Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9028u;
            // 0x2d902c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9078u;
            goto label_2d9078;
        }
    }
    ctx->pc = 0x2D9030u;
label_2d9030:
    // 0x2d9030: 0x9202002f  lbu         $v0, 0x2F($s0)
    ctx->pc = 0x2d9030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
label_2d9034:
    // 0x2d9034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9038:
    // 0x2d9038: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x2d9038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
label_2d903c:
    // 0x2d903c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d903cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9040:
    // 0x2d9040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d9040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d9044:
    // 0x2d9044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d9044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2d9048:
    // 0x2d9048: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x2d9048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
label_2d904c:
    // 0x2d904c: 0xc0b6278  jal         func_2D89E0
label_2d9050:
    if (ctx->pc == 0x2D9050u) {
        ctx->pc = 0x2D9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D904Cu;
        // 0x2d9050: 0xa202002f  sb          $v0, 0x2F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9054u;
        goto label_2d9054;
    }
    ctx->pc = 0x2D904Cu;
    SET_GPR_U32(ctx, 31, 0x2D9054u);
    ctx->pc = 0x2D9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D904Cu;
    // 0x2d9050: 0xa202002f  sb          $v0, 0x2F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D89E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D89E0u, 0x2D904Cu, 0x2D9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9054u;
label_2d9054:
    // 0x2d9054: 0x10000008  b           . + 4 + (0x8 << 2)
label_2d9058:
    if (ctx->pc == 0x2D9058u) {
        ctx->pc = 0x2D9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9054u;
        // 0x2d9058: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D905Cu;
        goto label_2d905c;
    }
    ctx->pc = 0x2D9054u;
    {
        const bool branch_taken_0x2d9054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9054u;
        // 0x2d9058: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9054) {
            ctx->pc = 0x2D9078u;
            goto label_2d9078;
        }
    }
    ctx->pc = 0x2D905Cu;
label_2d905c:
    // 0x2d905c: 0x9203002d  lbu         $v1, 0x2D($s0)
    ctx->pc = 0x2d905cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
label_2d9060:
    // 0x2d9060: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d9060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d9064:
    // 0x2d9064: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_2d9068:
    if (ctx->pc == 0x2D9068u) {
        ctx->pc = 0x2D9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9064u;
        // 0x2d9068: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D906Cu;
        goto label_2d906c;
    }
    ctx->pc = 0x2D9064u;
    {
        const bool branch_taken_0x2d9064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9064) {
            ctx->pc = 0x2D9068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9064u;
            // 0x2d9068: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9078u;
            goto label_2d9078;
        }
    }
    ctx->pc = 0x2D906Cu;
label_2d906c:
    // 0x2d906c: 0xc0b62c4  jal         func_2D8B10
label_2d9070:
    if (ctx->pc == 0x2D9070u) {
        ctx->pc = 0x2D9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D906Cu;
        // 0x2d9070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9074u;
        goto label_2d9074;
    }
    ctx->pc = 0x2D906Cu;
    SET_GPR_U32(ctx, 31, 0x2D9074u);
    ctx->pc = 0x2D9070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D906Cu;
    // 0x2d9070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8B10u, 0x2D906Cu, 0x2D9074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9074u;
label_2d9074:
    // 0x2d9074: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d9074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9078:
    // 0x2d9078: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d9078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2d907c:
    // 0x2d907c: 0x1c400063  bgtz        $v0, . + 4 + (0x63 << 2)
label_2d9080:
    if (ctx->pc == 0x2D9080u) {
        ctx->pc = 0x2D9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D907Cu;
        // 0x2d9080: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9084u;
        goto label_2d9084;
    }
    ctx->pc = 0x2D907Cu;
    {
        const bool branch_taken_0x2d907c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D907Cu;
        // 0x2d9080: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d907c) {
            ctx->pc = 0x2D920Cu;
            goto label_2d920c;
        }
    }
    ctx->pc = 0x2D9084u;
label_2d9084:
    // 0x2d9084: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x2d9084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2d9088:
    // 0x2d9088: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
label_2d908c:
    if (ctx->pc == 0x2D908Cu) {
        ctx->pc = 0x2D908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9088u;
        // 0x2d908c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9090u;
        goto label_2d9090;
    }
    ctx->pc = 0x2D9088u;
    {
        const bool branch_taken_0x2d9088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d9088) {
            ctx->pc = 0x2D908Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9088u;
            // 0x2d908c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D90A0u;
            goto label_2d90a0;
        }
    }
    ctx->pc = 0x2D9090u;
label_2d9090:
    // 0x2d9090: 0xc0b62c4  jal         func_2D8B10
label_2d9094:
    if (ctx->pc == 0x2D9094u) {
        ctx->pc = 0x2D9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9090u;
        // 0x2d9094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9098u;
        goto label_2d9098;
    }
    ctx->pc = 0x2D9090u;
    SET_GPR_U32(ctx, 31, 0x2D9098u);
    ctx->pc = 0x2D9094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9090u;
    // 0x2d9094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8B10u, 0x2D9090u, 0x2D9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9098u;
label_2d9098:
    // 0x2d9098: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2d909c:
    if (ctx->pc == 0x2D909Cu) {
        ctx->pc = 0x2D909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9098u;
        // 0x2d909c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90A0u;
        goto label_2d90a0;
    }
    ctx->pc = 0x2D9098u;
    {
        const bool branch_taken_0x2d9098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9098u;
        // 0x2d909c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9098) {
            ctx->pc = 0x2D9210u;
            goto label_2d9210;
        }
    }
    ctx->pc = 0x2D90A0u;
label_2d90a0:
    // 0x2d90a0: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
label_2d90a4:
    if (ctx->pc == 0x2D90A4u) {
        ctx->pc = 0x2D90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90A0u;
        // 0x2d90a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90A8u;
        goto label_2d90a8;
    }
    ctx->pc = 0x2D90A0u;
    {
        const bool branch_taken_0x2d90a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90A0u;
        // 0x2d90a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90a0) {
            ctx->pc = 0x2D9210u;
            goto label_2d9210;
        }
    }
    ctx->pc = 0x2D90A8u;
label_2d90a8:
    // 0x2d90a8: 0xc10587a  jal         func_4161E8
label_2d90ac:
    if (ctx->pc == 0x2D90ACu) {
        ctx->pc = 0x2D90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90A8u;
        // 0x2d90ac: 0x26710090  addiu       $s1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90B0u;
        goto label_2d90b0;
    }
    ctx->pc = 0x2D90A8u;
    SET_GPR_U32(ctx, 31, 0x2D90B0u);
    ctx->pc = 0x2D90ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90A8u;
    // 0x2d90ac: 0x26710090  addiu       $s1, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D90A8u, 0x2D90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90B0u;
label_2d90b0:
    // 0x2d90b0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d90b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d90b4:
    // 0x2d90b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d90b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d90b8:
    // 0x2d90b8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2d90bc:
    // 0x2d90bc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2d90bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2d90c0:
    // 0x2d90c0: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2d90c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2d90c4:
    // 0x2d90c4: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2d90c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2d90c8:
    // 0x2d90c8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d90c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d90cc:
    // 0x2d90cc: 0xc0cdb38  jal         func_336CE0
label_2d90d0:
    if (ctx->pc == 0x2D90D0u) {
        ctx->pc = 0x2D90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90CCu;
        // 0x2d90d0: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90D4u;
        goto label_2d90d4;
    }
    ctx->pc = 0x2D90CCu;
    SET_GPR_U32(ctx, 31, 0x2D90D4u);
    ctx->pc = 0x2D90D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90CCu;
    // 0x2d90d0: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D90CCu, 0x2D90D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90D4u;
label_2d90d4:
    // 0x2d90d4: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2d90d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_2d90d8:
    // 0x2d90d8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2d90d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_2d90dc:
    // 0x2d90dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d90dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d90e0:
    // 0x2d90e0: 0x0  nop
    ctx->pc = 0x2d90e0u;
    // NOP
label_2d90e4:
    // 0x2d90e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d90e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d90e8:
    // 0x2d90e8: 0x0  nop
    ctx->pc = 0x2d90e8u;
    // NOP
label_2d90ec:
    // 0x2d90ec: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_2d90f0:
    if (ctx->pc == 0x2D90F0u) {
        ctx->pc = 0x2D90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90ECu;
        // 0x2d90f0: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90F4u;
        goto label_2d90f4;
    }
    ctx->pc = 0x2D90ECu;
    {
        const bool branch_taken_0x2d90ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d90ec) {
            ctx->pc = 0x2D90F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D90ECu;
            // 0x2d90f0: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D913Cu;
            goto label_2d913c;
        }
    }
    ctx->pc = 0x2D90F4u;
label_2d90f4:
    // 0x2d90f4: 0xc0a367c  jal         func_28D9F0
label_2d90f8:
    if (ctx->pc == 0x2D90F8u) {
        ctx->pc = 0x2D90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90F4u;
        // 0x2d90f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90FCu;
        goto label_2d90fc;
    }
    ctx->pc = 0x2D90F4u;
    SET_GPR_U32(ctx, 31, 0x2D90FCu);
    ctx->pc = 0x2D90F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90F4u;
    // 0x2d90f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D90F4u, 0x2D90FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90FCu;
label_2d90fc:
    // 0x2d90fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d90fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9100:
    // 0x2d9100: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
label_2d9104:
    if (ctx->pc == 0x2D9104u) {
        ctx->pc = 0x2D9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9100u;
        // 0x2d9104: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9108u;
        goto label_2d9108;
    }
    ctx->pc = 0x2D9100u;
    {
        const bool branch_taken_0x2d9100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9100u;
        // 0x2d9104: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9100) {
            ctx->pc = 0x2D920Cu;
            goto label_2d920c;
        }
    }
    ctx->pc = 0x2D9108u;
label_2d9108:
    // 0x2d9108: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d9108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d910c:
    // 0x2d910c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d910cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d9110:
    // 0x2d9110: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d9110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d9114:
    // 0x2d9114: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d9114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d9118:
    // 0x2d9118: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d9118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d911c:
    // 0x2d911c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d911cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d9120:
    // 0x2d9120: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2d9120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d9124:
    // 0x2d9124: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d9124u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9128:
    // 0x2d9128: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d9128u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d912c:
    // 0x2d912c: 0xc0bee7a  jal         func_2FB9E8
label_2d9130:
    if (ctx->pc == 0x2D9130u) {
        ctx->pc = 0x2D9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D912Cu;
        // 0x2d9130: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9134u;
        goto label_2d9134;
    }
    ctx->pc = 0x2D912Cu;
    SET_GPR_U32(ctx, 31, 0x2D9134u);
    ctx->pc = 0x2D9130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D912Cu;
    // 0x2d9130: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D912Cu, 0x2D9134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9134u;
label_2d9134:
    // 0x2d9134: 0x10000036  b           . + 4 + (0x36 << 2)
label_2d9138:
    if (ctx->pc == 0x2D9138u) {
        ctx->pc = 0x2D9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9134u;
        // 0x2d9138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D913Cu;
        goto label_2d913c;
    }
    ctx->pc = 0x2D9134u;
    {
        const bool branch_taken_0x2d9134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9134u;
        // 0x2d9138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9134) {
            ctx->pc = 0x2D9210u;
            goto label_2d9210;
        }
    }
    ctx->pc = 0x2D913Cu;
label_2d913c:
    // 0x2d913c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d913cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d9140:
    // 0x2d9140: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2d9140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2d9144:
    // 0x2d9144: 0xc0cd7d2  jal         func_335F48
label_2d9148:
    if (ctx->pc == 0x2D9148u) {
        ctx->pc = 0x2D9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9144u;
        // 0x2d9148: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D914Cu;
        goto label_2d914c;
    }
    ctx->pc = 0x2D9144u;
    SET_GPR_U32(ctx, 31, 0x2D914Cu);
    ctx->pc = 0x2D9148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9144u;
    // 0x2d9148: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2D9144u, 0x2D914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D914Cu;
label_2d914c:
    // 0x2d914c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2d914cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2d9150:
    // 0x2d9150: 0xc105896  jal         func_416258
label_2d9154:
    if (ctx->pc == 0x2D9154u) {
        ctx->pc = 0x2D9154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9150u;
        // 0x2d9154: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9158u;
        goto label_2d9158;
    }
    ctx->pc = 0x2D9150u;
    SET_GPR_U32(ctx, 31, 0x2D9158u);
    ctx->pc = 0x2D9154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9150u;
    // 0x2d9154: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2D9150u, 0x2D9158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9158u;
label_2d9158:
    // 0x2d9158: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d9158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_2d915c:
    // 0x2d915c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2d915cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_2d9160:
    // 0x2d9160: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d9164:
    // 0x2d9164: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2d9164u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2d9168:
    // 0x2d9168: 0xc0cd742  jal         func_335D08
label_2d916c:
    if (ctx->pc == 0x2D916Cu) {
        ctx->pc = 0x2D916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9168u;
        // 0x2d916c: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9170u;
        goto label_2d9170;
    }
    ctx->pc = 0x2D9168u;
    SET_GPR_U32(ctx, 31, 0x2D9170u);
    ctx->pc = 0x2D916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9168u;
    // 0x2d916c: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2D9168u, 0x2D9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9170u;
label_2d9170:
    // 0x2d9170: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d9170u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d9174:
    // 0x2d9174: 0xc0cdd2e  jal         func_3374B8
label_2d9178:
    if (ctx->pc == 0x2D9178u) {
        ctx->pc = 0x2D9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9174u;
        // 0x2d9178: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D917Cu;
        goto label_2d917c;
    }
    ctx->pc = 0x2D9174u;
    SET_GPR_U32(ctx, 31, 0x2D917Cu);
    ctx->pc = 0x2D9178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9174u;
    // 0x2d9178: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2D9174u, 0x2D917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D917Cu;
label_2d917c:
    // 0x2d917c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2d917cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2d9180:
    // 0x2d9180: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d9180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2d9184:
    // 0x2d9184: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d9188:
    // 0x2d9188: 0x0  nop
    ctx->pc = 0x2d9188u;
    // NOP
label_2d918c:
    // 0x2d918c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d918cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d9190:
    // 0x2d9190: 0x0  nop
    ctx->pc = 0x2d9190u;
    // NOP
label_2d9194:
    // 0x2d9194: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2d9198:
    if (ctx->pc == 0x2D9198u) {
        ctx->pc = 0x2D9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9194u;
        // 0x2d9198: 0x92020030  lbu         $v0, 0x30($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D919Cu;
        goto label_2d919c;
    }
    ctx->pc = 0x2D9194u;
    {
        const bool branch_taken_0x2d9194 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d9194) {
            ctx->pc = 0x2D9198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9194u;
            // 0x2d9198: 0x92020030  lbu         $v0, 0x30($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D91D8u;
            goto label_2d91d8;
        }
    }
    ctx->pc = 0x2D919Cu;
label_2d919c:
    // 0x2d919c: 0xc0a367c  jal         func_28D9F0
label_2d91a0:
    if (ctx->pc == 0x2D91A0u) {
        ctx->pc = 0x2D91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D919Cu;
        // 0x2d91a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91A4u;
        goto label_2d91a4;
    }
    ctx->pc = 0x2D919Cu;
    SET_GPR_U32(ctx, 31, 0x2D91A4u);
    ctx->pc = 0x2D91A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D919Cu;
    // 0x2d91a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D919Cu, 0x2D91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91A4u;
label_2d91a4:
    // 0x2d91a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d91a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d91a8:
    // 0x2d91a8: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_2d91ac:
    if (ctx->pc == 0x2D91ACu) {
        ctx->pc = 0x2D91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91A8u;
        // 0x2d91ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91B0u;
        goto label_2d91b0;
    }
    ctx->pc = 0x2D91A8u;
    {
        const bool branch_taken_0x2d91a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91A8u;
        // 0x2d91ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91a8) {
            ctx->pc = 0x2D9210u;
            goto label_2d9210;
        }
    }
    ctx->pc = 0x2D91B0u;
label_2d91b0:
    // 0x2d91b0: 0xc0884f6  jal         func_2213D8
label_2d91b4:
    if (ctx->pc == 0x2D91B4u) {
        ctx->pc = 0x2D91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91B0u;
        // 0x2d91b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91B8u;
        goto label_2d91b8;
    }
    ctx->pc = 0x2D91B0u;
    SET_GPR_U32(ctx, 31, 0x2D91B8u);
    ctx->pc = 0x2D91B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91B0u;
    // 0x2d91b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D91B0u, 0x2D91B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91B8u;
label_2d91b8:
    // 0x2d91b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d91b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d91bc:
    // 0x2d91bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d91bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d91c0:
    // 0x2d91c0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2d91c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2d91c4:
    // 0x2d91c4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2d91c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2d91c8:
    // 0x2d91c8: 0xc0bf70a  jal         func_2FDC28
label_2d91cc:
    if (ctx->pc == 0x2D91CCu) {
        ctx->pc = 0x2D91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91C8u;
        // 0x2d91cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91D0u;
        goto label_2d91d0;
    }
    ctx->pc = 0x2D91C8u;
    SET_GPR_U32(ctx, 31, 0x2D91D0u);
    ctx->pc = 0x2D91CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91C8u;
    // 0x2d91cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2D91C8u, 0x2D91D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91D0u;
label_2d91d0:
    // 0x2d91d0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2d91d4:
    if (ctx->pc == 0x2D91D4u) {
        ctx->pc = 0x2D91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91D0u;
        // 0x2d91d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91D8u;
        goto label_2d91d8;
    }
    ctx->pc = 0x2D91D0u;
    {
        const bool branch_taken_0x2d91d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91D0u;
        // 0x2d91d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91d0) {
            ctx->pc = 0x2D9210u;
            goto label_2d9210;
        }
    }
    ctx->pc = 0x2D91D8u;
label_2d91d8:
    // 0x2d91d8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2d91dc:
    if (ctx->pc == 0x2D91DCu) {
        ctx->pc = 0x2D91DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91D8u;
        // 0x2d91dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91E0u;
        goto label_2d91e0;
    }
    ctx->pc = 0x2D91D8u;
    {
        const bool branch_taken_0x2d91d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D91DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91D8u;
        // 0x2d91dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91d8) {
            ctx->pc = 0x2D9210u;
            goto label_2d9210;
        }
    }
    ctx->pc = 0x2D91E0u;
label_2d91e0:
    // 0x2d91e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2d91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2d91e4:
    // 0x2d91e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d91e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d91e8:
    // 0x2d91e8: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x2d91e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_2d91ec:
    // 0x2d91ec: 0xa2140030  sb          $s4, 0x30($s0)
    ctx->pc = 0x2d91ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 20));
label_2d91f0:
    // 0x2d91f0: 0xafb30034  sw          $s3, 0x34($sp)
    ctx->pc = 0x2d91f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
label_2d91f4:
    // 0x2d91f4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2d91f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2d91f8:
    // 0x2d91f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d91fc:
    // 0x2d91fc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2d91fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2d9200:
    // 0x2d9200: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2d9200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2d9204:
    // 0x2d9204: 0x40f809  jalr        $v0
label_2d9208:
    if (ctx->pc == 0x2D9208u) {
        ctx->pc = 0x2D9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9204u;
        // 0x2d9208: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D920Cu;
        goto label_2d920c;
    }
    ctx->pc = 0x2D9204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D920Cu);
        ctx->pc = 0x2D9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9204u;
        // 0x2d9208: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9204u, 0x2D920Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D920Cu;
label_2d920c:
    // 0x2d920c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d920cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9210:
    // 0x2d9210: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2d9210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d9214:
    // 0x2d9214: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2d9214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d9218:
    // 0x2d9218: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2d9218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d921c:
    // 0x2d921c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2d921cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d9220:
    // 0x2d9220: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d9220u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d9224:
    // 0x2d9224: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d9224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d9228:
    // 0x2d9228: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2d9228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2d922c:
    // 0x2d922c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d9230:
    // 0x2d9230: 0x3e00008  jr          $ra
label_2d9234:
    if (ctx->pc == 0x2D9234u) {
        ctx->pc = 0x2D9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9230u;
        // 0x2d9234: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9238u;
        goto label_fallthrough_0x2d9230;
    }
    ctx->pc = 0x2D9230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9230u;
        // 0x2d9234: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d9230:
    ctx->pc = 0x2D9238u;
}
