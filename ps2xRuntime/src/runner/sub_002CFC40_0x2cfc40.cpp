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

// Function: sub_002CFC40
// Address: 0x2cfc40 - 0x2cff18
void sub_002CFC40_0x2cfc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFC40_0x2cfc40");
#endif

    switch (ctx->pc) {
        case 0x2cfc40u: goto label_2cfc40;
        case 0x2cfc44u: goto label_2cfc44;
        case 0x2cfc48u: goto label_2cfc48;
        case 0x2cfc4cu: goto label_2cfc4c;
        case 0x2cfc50u: goto label_2cfc50;
        case 0x2cfc54u: goto label_2cfc54;
        case 0x2cfc58u: goto label_2cfc58;
        case 0x2cfc5cu: goto label_2cfc5c;
        case 0x2cfc60u: goto label_2cfc60;
        case 0x2cfc64u: goto label_2cfc64;
        case 0x2cfc68u: goto label_2cfc68;
        case 0x2cfc6cu: goto label_2cfc6c;
        case 0x2cfc70u: goto label_2cfc70;
        case 0x2cfc74u: goto label_2cfc74;
        case 0x2cfc78u: goto label_2cfc78;
        case 0x2cfc7cu: goto label_2cfc7c;
        case 0x2cfc80u: goto label_2cfc80;
        case 0x2cfc84u: goto label_2cfc84;
        case 0x2cfc88u: goto label_2cfc88;
        case 0x2cfc8cu: goto label_2cfc8c;
        case 0x2cfc90u: goto label_2cfc90;
        case 0x2cfc94u: goto label_2cfc94;
        case 0x2cfc98u: goto label_2cfc98;
        case 0x2cfc9cu: goto label_2cfc9c;
        case 0x2cfca0u: goto label_2cfca0;
        case 0x2cfca4u: goto label_2cfca4;
        case 0x2cfca8u: goto label_2cfca8;
        case 0x2cfcacu: goto label_2cfcac;
        case 0x2cfcb0u: goto label_2cfcb0;
        case 0x2cfcb4u: goto label_2cfcb4;
        case 0x2cfcb8u: goto label_2cfcb8;
        case 0x2cfcbcu: goto label_2cfcbc;
        case 0x2cfcc0u: goto label_2cfcc0;
        case 0x2cfcc4u: goto label_2cfcc4;
        case 0x2cfcc8u: goto label_2cfcc8;
        case 0x2cfcccu: goto label_2cfccc;
        case 0x2cfcd0u: goto label_2cfcd0;
        case 0x2cfcd4u: goto label_2cfcd4;
        case 0x2cfcd8u: goto label_2cfcd8;
        case 0x2cfcdcu: goto label_2cfcdc;
        case 0x2cfce0u: goto label_2cfce0;
        case 0x2cfce4u: goto label_2cfce4;
        case 0x2cfce8u: goto label_2cfce8;
        case 0x2cfcecu: goto label_2cfcec;
        case 0x2cfcf0u: goto label_2cfcf0;
        case 0x2cfcf4u: goto label_2cfcf4;
        case 0x2cfcf8u: goto label_2cfcf8;
        case 0x2cfcfcu: goto label_2cfcfc;
        case 0x2cfd00u: goto label_2cfd00;
        case 0x2cfd04u: goto label_2cfd04;
        case 0x2cfd08u: goto label_2cfd08;
        case 0x2cfd0cu: goto label_2cfd0c;
        case 0x2cfd10u: goto label_2cfd10;
        case 0x2cfd14u: goto label_2cfd14;
        case 0x2cfd18u: goto label_2cfd18;
        case 0x2cfd1cu: goto label_2cfd1c;
        case 0x2cfd20u: goto label_2cfd20;
        case 0x2cfd24u: goto label_2cfd24;
        case 0x2cfd28u: goto label_2cfd28;
        case 0x2cfd2cu: goto label_2cfd2c;
        case 0x2cfd30u: goto label_2cfd30;
        case 0x2cfd34u: goto label_2cfd34;
        case 0x2cfd38u: goto label_2cfd38;
        case 0x2cfd3cu: goto label_2cfd3c;
        case 0x2cfd40u: goto label_2cfd40;
        case 0x2cfd44u: goto label_2cfd44;
        case 0x2cfd48u: goto label_2cfd48;
        case 0x2cfd4cu: goto label_2cfd4c;
        case 0x2cfd50u: goto label_2cfd50;
        case 0x2cfd54u: goto label_2cfd54;
        case 0x2cfd58u: goto label_2cfd58;
        case 0x2cfd5cu: goto label_2cfd5c;
        case 0x2cfd60u: goto label_2cfd60;
        case 0x2cfd64u: goto label_2cfd64;
        case 0x2cfd68u: goto label_2cfd68;
        case 0x2cfd6cu: goto label_2cfd6c;
        case 0x2cfd70u: goto label_2cfd70;
        case 0x2cfd74u: goto label_2cfd74;
        case 0x2cfd78u: goto label_2cfd78;
        case 0x2cfd7cu: goto label_2cfd7c;
        case 0x2cfd80u: goto label_2cfd80;
        case 0x2cfd84u: goto label_2cfd84;
        case 0x2cfd88u: goto label_2cfd88;
        case 0x2cfd8cu: goto label_2cfd8c;
        case 0x2cfd90u: goto label_2cfd90;
        case 0x2cfd94u: goto label_2cfd94;
        case 0x2cfd98u: goto label_2cfd98;
        case 0x2cfd9cu: goto label_2cfd9c;
        case 0x2cfda0u: goto label_2cfda0;
        case 0x2cfda4u: goto label_2cfda4;
        case 0x2cfda8u: goto label_2cfda8;
        case 0x2cfdacu: goto label_2cfdac;
        case 0x2cfdb0u: goto label_2cfdb0;
        case 0x2cfdb4u: goto label_2cfdb4;
        case 0x2cfdb8u: goto label_2cfdb8;
        case 0x2cfdbcu: goto label_2cfdbc;
        case 0x2cfdc0u: goto label_2cfdc0;
        case 0x2cfdc4u: goto label_2cfdc4;
        case 0x2cfdc8u: goto label_2cfdc8;
        case 0x2cfdccu: goto label_2cfdcc;
        case 0x2cfdd0u: goto label_2cfdd0;
        case 0x2cfdd4u: goto label_2cfdd4;
        case 0x2cfdd8u: goto label_2cfdd8;
        case 0x2cfddcu: goto label_2cfddc;
        case 0x2cfde0u: goto label_2cfde0;
        case 0x2cfde4u: goto label_2cfde4;
        case 0x2cfde8u: goto label_2cfde8;
        case 0x2cfdecu: goto label_2cfdec;
        case 0x2cfdf0u: goto label_2cfdf0;
        case 0x2cfdf4u: goto label_2cfdf4;
        case 0x2cfdf8u: goto label_2cfdf8;
        case 0x2cfdfcu: goto label_2cfdfc;
        case 0x2cfe00u: goto label_2cfe00;
        case 0x2cfe04u: goto label_2cfe04;
        case 0x2cfe08u: goto label_2cfe08;
        case 0x2cfe0cu: goto label_2cfe0c;
        case 0x2cfe10u: goto label_2cfe10;
        case 0x2cfe14u: goto label_2cfe14;
        case 0x2cfe18u: goto label_2cfe18;
        case 0x2cfe1cu: goto label_2cfe1c;
        case 0x2cfe20u: goto label_2cfe20;
        case 0x2cfe24u: goto label_2cfe24;
        case 0x2cfe28u: goto label_2cfe28;
        case 0x2cfe2cu: goto label_2cfe2c;
        case 0x2cfe30u: goto label_2cfe30;
        case 0x2cfe34u: goto label_2cfe34;
        case 0x2cfe38u: goto label_2cfe38;
        case 0x2cfe3cu: goto label_2cfe3c;
        case 0x2cfe40u: goto label_2cfe40;
        case 0x2cfe44u: goto label_2cfe44;
        case 0x2cfe48u: goto label_2cfe48;
        case 0x2cfe4cu: goto label_2cfe4c;
        case 0x2cfe50u: goto label_2cfe50;
        case 0x2cfe54u: goto label_2cfe54;
        case 0x2cfe58u: goto label_2cfe58;
        case 0x2cfe5cu: goto label_2cfe5c;
        case 0x2cfe60u: goto label_2cfe60;
        case 0x2cfe64u: goto label_2cfe64;
        case 0x2cfe68u: goto label_2cfe68;
        case 0x2cfe6cu: goto label_2cfe6c;
        case 0x2cfe70u: goto label_2cfe70;
        case 0x2cfe74u: goto label_2cfe74;
        case 0x2cfe78u: goto label_2cfe78;
        case 0x2cfe7cu: goto label_2cfe7c;
        case 0x2cfe80u: goto label_2cfe80;
        case 0x2cfe84u: goto label_2cfe84;
        case 0x2cfe88u: goto label_2cfe88;
        case 0x2cfe8cu: goto label_2cfe8c;
        case 0x2cfe90u: goto label_2cfe90;
        case 0x2cfe94u: goto label_2cfe94;
        case 0x2cfe98u: goto label_2cfe98;
        case 0x2cfe9cu: goto label_2cfe9c;
        case 0x2cfea0u: goto label_2cfea0;
        case 0x2cfea4u: goto label_2cfea4;
        case 0x2cfea8u: goto label_2cfea8;
        case 0x2cfeacu: goto label_2cfeac;
        case 0x2cfeb0u: goto label_2cfeb0;
        case 0x2cfeb4u: goto label_2cfeb4;
        case 0x2cfeb8u: goto label_2cfeb8;
        case 0x2cfebcu: goto label_2cfebc;
        case 0x2cfec0u: goto label_2cfec0;
        case 0x2cfec4u: goto label_2cfec4;
        case 0x2cfec8u: goto label_2cfec8;
        case 0x2cfeccu: goto label_2cfecc;
        case 0x2cfed0u: goto label_2cfed0;
        case 0x2cfed4u: goto label_2cfed4;
        case 0x2cfed8u: goto label_2cfed8;
        case 0x2cfedcu: goto label_2cfedc;
        case 0x2cfee0u: goto label_2cfee0;
        case 0x2cfee4u: goto label_2cfee4;
        case 0x2cfee8u: goto label_2cfee8;
        case 0x2cfeecu: goto label_2cfeec;
        case 0x2cfef0u: goto label_2cfef0;
        case 0x2cfef4u: goto label_2cfef4;
        case 0x2cfef8u: goto label_2cfef8;
        case 0x2cfefcu: goto label_2cfefc;
        case 0x2cff00u: goto label_2cff00;
        case 0x2cff04u: goto label_2cff04;
        case 0x2cff08u: goto label_2cff08;
        case 0x2cff0cu: goto label_2cff0c;
        case 0x2cff10u: goto label_2cff10;
        case 0x2cff14u: goto label_2cff14;
        default: break;
    }

    ctx->pc = 0x2cfc40u;

label_2cfc40:
    // 0x2cfc40: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2cfc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2cfc44:
    // 0x2cfc44: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2cfc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2cfc48:
    // 0x2cfc48: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2cfc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2cfc4c:
    // 0x2cfc4c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2cfc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2cfc50:
    // 0x2cfc50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2cfc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2cfc54:
    // 0x2cfc54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cfc54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc58:
    // 0x2cfc58: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2cfc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_2cfc5c:
    // 0x2cfc5c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2cfc5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc60:
    // 0x2cfc60: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2cfc60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2cfc64:
    // 0x2cfc64: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2cfc64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2cfc68:
    // 0x2cfc68: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2cfc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2cfc6c:
    // 0x2cfc6c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2cfc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2cfc70:
    // 0x2cfc70: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2cfc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2cfc74:
    // 0x2cfc74: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2cfc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2cfc78:
    // 0x2cfc78: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2cfc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2cfc7c:
    // 0x2cfc7c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2cfc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2cfc80:
    // 0x2cfc80: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cfc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2cfc84:
    // 0x2cfc84: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2cfc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2cfc88:
    // 0x2cfc88: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2cfc88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2cfc8c:
    // 0x2cfc8c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2cfc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2cfc90:
    // 0x2cfc90: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2cfc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cfc94:
    // 0x2cfc94: 0x8c960000  lw          $s6, 0x0($a0)
    ctx->pc = 0x2cfc94u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cfc98:
    // 0x2cfc98: 0x86c20092  lh          $v0, 0x92($s6)
    ctx->pc = 0x2cfc98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_2cfc9c:
    // 0x2cfc9c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2cfc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2cfca0:
    // 0x2cfca0: 0xc0a2fc0  jal         func_28BF00
label_2cfca4:
    if (ctx->pc == 0x2CFCA4u) {
        ctx->pc = 0x2CFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCA0u;
        // 0x2cfca4: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFCA8u;
        goto label_2cfca8;
    }
    ctx->pc = 0x2CFCA0u;
    SET_GPR_U32(ctx, 31, 0x2CFCA8u);
    ctx->pc = 0x2CFCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFCA0u;
    // 0x2cfca4: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2CFCA0u, 0x2CFCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFCA8u;
label_2cfca8:
    // 0x2cfca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cfca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cfcac:
    // 0x2cfcac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cfcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cfcb0:
    // 0x2cfcb0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2cfcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2cfcb4:
    // 0x2cfcb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cfcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cfcb8:
    // 0x2cfcb8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2cfcb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cfcbc:
    // 0x2cfcbc: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x2cfcbcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cfcc0:
    // 0x2cfcc0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2cfcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2cfcc4:
    // 0x2cfcc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2cfcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2cfcc8:
    // 0x2cfcc8: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2cfcc8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2cfccc:
    // 0x2cfccc: 0x0  nop
    ctx->pc = 0x2cfcccu;
    // NOP
label_2cfcd0:
    // 0x2cfcd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cfcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2cfcd4:
    // 0x2cfcd4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2cfcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2cfcd8:
    // 0x2cfcd8: 0x0  nop
    ctx->pc = 0x2cfcd8u;
    // NOP
label_2cfcdc:
    // 0x2cfcdc: 0x0  nop
    ctx->pc = 0x2cfcdcu;
    // NOP
label_2cfce0:
    // 0x2cfce0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
label_2cfce4:
    if (ctx->pc == 0x2CFCE4u) {
        ctx->pc = 0x2CFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCE0u;
        // 0x2cfce4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFCE8u;
        goto label_2cfce8;
    }
    ctx->pc = 0x2CFCE0u;
    {
        const bool branch_taken_0x2cfce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2CFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCE0u;
        // 0x2cfce4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfce0) {
            ctx->pc = 0x2CFCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cfcd0;
        }
    }
    ctx->pc = 0x2CFCE8u;
label_2cfce8:
    // 0x2cfce8: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x2cfce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2cfcec:
    // 0x2cfcec: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2cfcecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2cfcf0:
    // 0x2cfcf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cfcf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cfcf4:
    // 0x2cfcf4: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2cfcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_2cfcf8:
    // 0x2cfcf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cfcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cfcfc:
    // 0x2cfcfc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2cfcfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cfd00:
    // 0x2cfd00: 0x24e7c1f0  addiu       $a3, $a3, -0x3E10
    ctx->pc = 0x2cfd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951408));
label_2cfd04:
    // 0x2cfd04: 0xc0a7244  jal         func_29C910
label_2cfd08:
    if (ctx->pc == 0x2CFD08u) {
        ctx->pc = 0x2CFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD04u;
        // 0x2cfd08: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFD0Cu;
        goto label_2cfd0c;
    }
    ctx->pc = 0x2CFD04u;
    SET_GPR_U32(ctx, 31, 0x2CFD0Cu);
    ctx->pc = 0x2CFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD04u;
    // 0x2cfd08: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x2CFD04u, 0x2CFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD0Cu;
label_2cfd0c:
    // 0x2cfd0c: 0xc137832  jal         func_4DE0C8
label_2cfd10:
    if (ctx->pc == 0x2CFD10u) {
        ctx->pc = 0x2CFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD0Cu;
        // 0x2cfd10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFD14u;
        goto label_2cfd14;
    }
    ctx->pc = 0x2CFD0Cu;
    SET_GPR_U32(ctx, 31, 0x2CFD14u);
    ctx->pc = 0x2CFD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD0Cu;
    // 0x2cfd10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2CFD0Cu, 0x2CFD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD14u;
label_2cfd14:
    // 0x2cfd14: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2cfd18:
    if (ctx->pc == 0x2CFD18u) {
        ctx->pc = 0x2CFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD14u;
        // 0x2cfd18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFD1Cu;
        goto label_2cfd1c;
    }
    ctx->pc = 0x2CFD14u;
    {
        const bool branch_taken_0x2cfd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD14u;
        // 0x2cfd18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd14) {
            ctx->pc = 0x2CFDA4u;
            goto label_2cfda4;
        }
    }
    ctx->pc = 0x2CFD1Cu;
label_2cfd1c:
    // 0x2cfd1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cfd1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfd20:
    // 0x2cfd20: 0xc137826  jal         func_4DE098
label_2cfd24:
    if (ctx->pc == 0x2CFD24u) {
        ctx->pc = 0x2CFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD20u;
        // 0x2cfd24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFD28u;
        goto label_2cfd28;
    }
    ctx->pc = 0x2CFD20u;
    SET_GPR_U32(ctx, 31, 0x2CFD28u);
    ctx->pc = 0x2CFD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD20u;
    // 0x2cfd24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2CFD20u, 0x2CFD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD28u;
label_2cfd28:
    // 0x2cfd28: 0xc0e409a  jal         func_390268
label_2cfd2c:
    if (ctx->pc == 0x2CFD2Cu) {
        ctx->pc = 0x2CFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD28u;
        // 0x2cfd2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFD30u;
        goto label_2cfd30;
    }
    ctx->pc = 0x2CFD28u;
    SET_GPR_U32(ctx, 31, 0x2CFD30u);
    ctx->pc = 0x2CFD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD28u;
    // 0x2cfd2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CFD28u, 0x2CFD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD30u;
label_2cfd30:
    // 0x2cfd30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cfd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfd34:
    // 0x2cfd34: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_2cfd38:
    if (ctx->pc == 0x2CFD38u) {
        ctx->pc = 0x2CFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD34u;
        // 0x2cfd38: 0x26110090  addiu       $s1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFD3Cu;
        goto label_2cfd3c;
    }
    ctx->pc = 0x2CFD34u;
    {
        const bool branch_taken_0x2cfd34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD34u;
        // 0x2cfd38: 0x26110090  addiu       $s1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd34) {
            ctx->pc = 0x2CFD94u;
            goto label_2cfd94;
        }
    }
    ctx->pc = 0x2CFD3Cu;
label_2cfd3c:
    // 0x2cfd3c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2cfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2cfd40:
    // 0x2cfd40: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2cfd40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2cfd44:
    // 0x2cfd44: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2cfd44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2cfd48:
    // 0x2cfd48: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2cfd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2cfd4c:
    // 0x2cfd4c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2cfd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2cfd50:
    // 0x2cfd50: 0xc0cdb38  jal         func_336CE0
label_2cfd54:
    if (ctx->pc == 0x2CFD54u) {
        ctx->pc = 0x2CFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD50u;
        // 0x2cfd54: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFD58u;
        goto label_2cfd58;
    }
    ctx->pc = 0x2CFD50u;
    SET_GPR_U32(ctx, 31, 0x2CFD58u);
    ctx->pc = 0x2CFD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD50u;
    // 0x2cfd54: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CFD50u, 0x2CFD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD58u;
label_2cfd58:
    // 0x2cfd58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2cfd58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cfd5c:
    // 0x2cfd5c: 0x0  nop
    ctx->pc = 0x2cfd5cu;
    // NOP
label_2cfd60:
    // 0x2cfd60: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_2cfd64:
    if (ctx->pc == 0x2CFD64u) {
        ctx->pc = 0x2CFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD60u;
        // 0x2cfd64: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFD68u;
        goto label_2cfd68;
    }
    ctx->pc = 0x2CFD60u;
    {
        const bool branch_taken_0x2cfd60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfd60) {
            ctx->pc = 0x2CFD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFD60u;
            // 0x2cfd64: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFD98u;
            goto label_2cfd98;
        }
    }
    ctx->pc = 0x2CFD68u;
label_2cfd68:
    // 0x2cfd68: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2cfd68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2cfd6c:
    // 0x2cfd6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2cfd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cfd70:
    // 0x2cfd70: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2cfd70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2cfd74:
    // 0x2cfd74: 0xc0cdb38  jal         func_336CE0
label_2cfd78:
    if (ctx->pc == 0x2CFD78u) {
        ctx->pc = 0x2CFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD74u;
        // 0x2cfd78: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFD7Cu;
        goto label_2cfd7c;
    }
    ctx->pc = 0x2CFD74u;
    SET_GPR_U32(ctx, 31, 0x2CFD7Cu);
    ctx->pc = 0x2CFD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD74u;
    // 0x2cfd78: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CFD74u, 0x2CFD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD7Cu;
label_2cfd7c:
    // 0x2cfd7c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2cfd7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cfd80:
    // 0x2cfd80: 0x0  nop
    ctx->pc = 0x2cfd80u;
    // NOP
label_2cfd84:
    // 0x2cfd84: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2cfd88:
    if (ctx->pc == 0x2CFD88u) {
        ctx->pc = 0x2CFD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD84u;
        // 0x2cfd88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFD8Cu;
        goto label_2cfd8c;
    }
    ctx->pc = 0x2CFD84u;
    {
        const bool branch_taken_0x2cfd84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfd84) {
            ctx->pc = 0x2CFD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFD84u;
            // 0x2cfd88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFD98u;
            goto label_2cfd98;
        }
    }
    ctx->pc = 0x2CFD8Cu;
label_2cfd8c:
    // 0x2cfd8c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2cfd8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cfd90:
    // 0x2cfd90: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2cfd90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2cfd94:
    // 0x2cfd94: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2cfd94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2cfd98:
    // 0x2cfd98: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x2cfd98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2cfd9c:
    // 0x2cfd9c: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_2cfda0:
    if (ctx->pc == 0x2CFDA0u) {
        ctx->pc = 0x2CFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD9Cu;
        // 0x2cfda0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFDA4u;
        goto label_2cfda4;
    }
    ctx->pc = 0x2CFD9Cu;
    {
        const bool branch_taken_0x2cfd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd9c) {
            ctx->pc = 0x2CFDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFD9Cu;
            // 0x2cfda0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cfd20;
        }
    }
    ctx->pc = 0x2CFDA4u;
label_2cfda4:
    // 0x2cfda4: 0x12e0004c  beqz        $s7, . + 4 + (0x4C << 2)
label_2cfda8:
    if (ctx->pc == 0x2CFDA8u) {
        ctx->pc = 0x2CFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDA4u;
        // 0x2cfda8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFDACu;
        goto label_2cfdac;
    }
    ctx->pc = 0x2CFDA4u;
    {
        const bool branch_taken_0x2cfda4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDA4u;
        // 0x2cfda8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfda4) {
            ctx->pc = 0x2CFED8u;
            goto label_2cfed8;
        }
    }
    ctx->pc = 0x2CFDACu;
label_2cfdac:
    // 0x2cfdac: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2cfdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2cfdb0:
    // 0x2cfdb0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2cfdb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2cfdb4:
    // 0x2cfdb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cfdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cfdb8:
    // 0x2cfdb8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2cfdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2cfdbc:
    // 0x2cfdbc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2cfdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2cfdc0:
    // 0x2cfdc0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2cfdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2cfdc4:
    // 0x2cfdc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cfdc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfdc8:
    // 0x2cfdc8: 0xc105df6  jal         func_4177D8
label_2cfdcc:
    if (ctx->pc == 0x2CFDCCu) {
        ctx->pc = 0x2CFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDC8u;
        // 0x2cfdcc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFDD0u;
        goto label_2cfdd0;
    }
    ctx->pc = 0x2CFDC8u;
    SET_GPR_U32(ctx, 31, 0x2CFDD0u);
    ctx->pc = 0x2CFDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFDC8u;
    // 0x2cfdcc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2CFDC8u, 0x2CFDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFDD0u;
label_2cfdd0:
    // 0x2cfdd0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_2cfdd4:
    if (ctx->pc == 0x2CFDD4u) {
        ctx->pc = 0x2CFDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDD0u;
        // 0x2cfdd4: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFDD8u;
        goto label_2cfdd8;
    }
    ctx->pc = 0x2CFDD0u;
    {
        const bool branch_taken_0x2cfdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDD0u;
        // 0x2cfdd4: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdd0) {
            ctx->pc = 0x2CFED8u;
            goto label_2cfed8;
        }
    }
    ctx->pc = 0x2CFDD8u;
label_2cfdd8:
    // 0x2cfdd8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2cfdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2cfddc:
    // 0x2cfddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cfddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cfde0:
    // 0x2cfde0: 0x0  nop
    ctx->pc = 0x2cfde0u;
    // NOP
label_2cfde4:
    // 0x2cfde4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cfde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cfde8:
    // 0x2cfde8: 0x0  nop
    ctx->pc = 0x2cfde8u;
    // NOP
label_2cfdec:
    // 0x2cfdec: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
label_2cfdf0:
    if (ctx->pc == 0x2CFDF0u) {
        ctx->pc = 0x2CFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDECu;
        // 0x2cfdf0: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFDF4u;
        goto label_2cfdf4;
    }
    ctx->pc = 0x2CFDECu;
    {
        const bool branch_taken_0x2cfdec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDECu;
        // 0x2cfdf0: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdec) {
            ctx->pc = 0x2CFED8u;
            goto label_2cfed8;
        }
    }
    ctx->pc = 0x2CFDF4u;
label_2cfdf4:
    // 0x2cfdf4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2cfdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cfdf8:
    // 0x2cfdf8: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x2cfdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2cfdfc:
    // 0x2cfdfc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2cfdfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe00:
    // 0x2cfe00: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2cfe00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_2cfe04:
    // 0x2cfe04: 0xc0c0846  jal         func_302118
label_2cfe08:
    if (ctx->pc == 0x2CFE08u) {
        ctx->pc = 0x2CFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE04u;
        // 0x2cfe08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFE0Cu;
        goto label_2cfe0c;
    }
    ctx->pc = 0x2CFE04u;
    SET_GPR_U32(ctx, 31, 0x2CFE0Cu);
    ctx->pc = 0x2CFE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE04u;
    // 0x2cfe08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x2CFE04u, 0x2CFE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE0Cu;
label_2cfe0c:
    // 0x2cfe0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cfe0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe10:
    // 0x2cfe10: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2cfe10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2cfe14:
    // 0x2cfe14: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2cfe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cfe18:
    // 0x2cfe18: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cfe18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2cfe1c:
    // 0x2cfe1c: 0xa040028f  sb          $zero, 0x28F($v0)
    ctx->pc = 0x2cfe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 655), (uint8_t)GPR_U32(ctx, 0));
label_2cfe20:
    // 0x2cfe20: 0xc0a3464  jal         func_28D190
label_2cfe24:
    if (ctx->pc == 0x2CFE24u) {
        ctx->pc = 0x2CFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE20u;
        // 0x2cfe24: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFE28u;
        goto label_2cfe28;
    }
    ctx->pc = 0x2CFE20u;
    SET_GPR_U32(ctx, 31, 0x2CFE28u);
    ctx->pc = 0x2CFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE20u;
    // 0x2cfe24: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x2CFE20u, 0x2CFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE28u;
label_2cfe28:
    // 0x2cfe28: 0x1a200012  blez        $s1, . + 4 + (0x12 << 2)
label_2cfe2c:
    if (ctx->pc == 0x2CFE2Cu) {
        ctx->pc = 0x2CFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE28u;
        // 0x2cfe2c: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFE30u;
        goto label_2cfe30;
    }
    ctx->pc = 0x2CFE28u;
    {
        const bool branch_taken_0x2cfe28 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2CFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE28u;
        // 0x2cfe2c: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe28) {
            ctx->pc = 0x2CFE74u;
            goto label_2cfe74;
        }
    }
    ctx->pc = 0x2CFE30u;
label_2cfe30:
    // 0x2cfe30: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cfe30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cfe34:
    // 0x2cfe34: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cfe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cfe38:
    // 0x2cfe38: 0x40f809  jalr        $v0
label_2cfe3c:
    if (ctx->pc == 0x2CFE3Cu) {
        ctx->pc = 0x2CFE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE38u;
        // 0x2cfe3c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFE40u;
        goto label_2cfe40;
    }
    ctx->pc = 0x2CFE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CFE40u);
        ctx->pc = 0x2CFE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE38u;
        // 0x2cfe3c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE38u, 0x2CFE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CFE40u;
label_2cfe40:
    // 0x2cfe40: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2cfe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2cfe44:
    // 0x2cfe44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cfe44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe48:
    // 0x2cfe48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cfe48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cfe4c:
    // 0x2cfe4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cfe50:
    // 0x2cfe50: 0x40f809  jalr        $v0
label_2cfe54:
    if (ctx->pc == 0x2CFE54u) {
        ctx->pc = 0x2CFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE50u;
        // 0x2cfe54: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFE58u;
        goto label_2cfe58;
    }
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CFE58u);
        ctx->pc = 0x2CFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE50u;
        // 0x2cfe54: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE50u, 0x2CFE58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CFE58u;
label_2cfe58:
    // 0x2cfe58: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x2cfe58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2cfe5c:
    // 0x2cfe5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe60:
    // 0x2cfe60: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x2cfe60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2cfe64:
    // 0x2cfe64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cfe64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe68:
    // 0x2cfe68: 0xc0b11c4  jal         func_2C4710
label_2cfe6c:
    if (ctx->pc == 0x2CFE6Cu) {
        ctx->pc = 0x2CFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE68u;
        // 0x2cfe6c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFE70u;
        goto label_2cfe70;
    }
    ctx->pc = 0x2CFE68u;
    SET_GPR_U32(ctx, 31, 0x2CFE70u);
    ctx->pc = 0x2CFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE68u;
    // 0x2cfe6c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x2CFE68u, 0x2CFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE70u;
label_2cfe70:
    // 0x2cfe70: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2cfe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cfe74:
    // 0x2cfe74: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cfe74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cfe78:
    // 0x2cfe78: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cfe7c:
    // 0x2cfe7c: 0x40f809  jalr        $v0
label_2cfe80:
    if (ctx->pc == 0x2CFE80u) {
        ctx->pc = 0x2CFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE7Cu;
        // 0x2cfe80: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFE84u;
        goto label_2cfe84;
    }
    ctx->pc = 0x2CFE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CFE84u);
        ctx->pc = 0x2CFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE7Cu;
        // 0x2cfe80: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE7Cu, 0x2CFE84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CFE84u;
label_2cfe84:
    // 0x2cfe84: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2cfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2cfe88:
    // 0x2cfe88: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2cfe88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2cfe8c:
    // 0x2cfe8c: 0x24854b00  addiu       $a1, $a0, 0x4B00
    ctx->pc = 0x2cfe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2cfe90:
    // 0x2cfe90: 0x86f00092  lh          $s0, 0x92($s7)
    ctx->pc = 0x2cfe90u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 146)));
label_2cfe94:
    // 0x2cfe94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cfe94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe98:
    // 0x2cfe98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cfe98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cfe9c:
    // 0x2cfe9c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2cfe9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2cfea0:
    // 0x2cfea0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cfea4:
    // 0x2cfea4: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2cfea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2cfea8:
    // 0x2cfea8: 0x40f809  jalr        $v0
label_2cfeac:
    if (ctx->pc == 0x2CFEACu) {
        ctx->pc = 0x2CFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEA8u;
        // 0x2cfeac: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFEB0u;
        goto label_2cfeb0;
    }
    ctx->pc = 0x2CFEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CFEB0u);
        ctx->pc = 0x2CFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEA8u;
        // 0x2cfeac: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFEA8u, 0x2CFEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CFEB0u;
label_2cfeb0:
    // 0x2cfeb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cfeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2cfeb4:
    // 0x2cfeb4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x2cfeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2cfeb8:
    // 0x2cfeb8: 0x8c68bd30  lw          $t0, -0x42D0($v1)
    ctx->pc = 0x2cfeb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2cfebc:
    // 0x2cfebc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2cfebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfec0:
    // 0x2cfec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cfec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cfec4:
    // 0x2cfec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cfec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cfec8:
    // 0x2cfec8: 0xc0b1018  jal         func_2C4060
label_2cfecc:
    if (ctx->pc == 0x2CFECCu) {
        ctx->pc = 0x2CFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEC8u;
        // 0x2cfecc: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFED0u;
        goto label_2cfed0;
    }
    ctx->pc = 0x2CFEC8u;
    SET_GPR_U32(ctx, 31, 0x2CFED0u);
    ctx->pc = 0x2CFECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFEC8u;
    // 0x2cfecc: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x2CFEC8u, 0x2CFED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFED0u;
label_2cfed0:
    // 0x2cfed0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cfed4:
    if (ctx->pc == 0x2CFED4u) {
        ctx->pc = 0x2CFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFED0u;
        // 0x2cfed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFED8u;
        goto label_2cfed8;
    }
    ctx->pc = 0x2CFED0u;
    {
        const bool branch_taken_0x2cfed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFED0u;
        // 0x2cfed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfed0) {
            ctx->pc = 0x2CFEDCu;
            goto label_2cfedc;
        }
    }
    ctx->pc = 0x2CFED8u;
label_2cfed8:
    // 0x2cfed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cfed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfedc:
    // 0x2cfedc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2cfedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2cfee0:
    // 0x2cfee0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2cfee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2cfee4:
    // 0x2cfee4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2cfee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2cfee8:
    // 0x2cfee8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2cfee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2cfeec:
    // 0x2cfeec: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2cfeecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2cfef0:
    // 0x2cfef0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2cfef0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2cfef4:
    // 0x2cfef4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2cfef4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cfef8:
    // 0x2cfef8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2cfef8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cfefc:
    // 0x2cfefc: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x2cfefcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cff00:
    // 0x2cff00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2cff00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2cff04:
    // 0x2cff04: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2cff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cff08:
    // 0x2cff08: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2cff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cff0c:
    // 0x2cff0c: 0x3e00008  jr          $ra
label_2cff10:
    if (ctx->pc == 0x2CFF10u) {
        ctx->pc = 0x2CFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF0Cu;
        // 0x2cff10: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFF14u;
        goto label_2cff14;
    }
    ctx->pc = 0x2CFF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF0Cu;
        // 0x2cff10: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF14u;
label_2cff14:
    // 0x2cff14: 0x0  nop
    ctx->pc = 0x2cff14u;
    // NOP
    ctx->pc = 0x2cff18u;
}
