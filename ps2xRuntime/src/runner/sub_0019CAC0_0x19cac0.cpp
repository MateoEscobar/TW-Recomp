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

// Function: sub_0019CAC0
// Address: 0x19cac0 - 0x19cde0
void sub_0019CAC0_0x19cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CAC0_0x19cac0");
#endif

    switch (ctx->pc) {
        case 0x19cac0u: goto label_19cac0;
        case 0x19cac4u: goto label_19cac4;
        case 0x19cac8u: goto label_19cac8;
        case 0x19caccu: goto label_19cacc;
        case 0x19cad0u: goto label_19cad0;
        case 0x19cad4u: goto label_19cad4;
        case 0x19cad8u: goto label_19cad8;
        case 0x19cadcu: goto label_19cadc;
        case 0x19cae0u: goto label_19cae0;
        case 0x19cae4u: goto label_19cae4;
        case 0x19cae8u: goto label_19cae8;
        case 0x19caecu: goto label_19caec;
        case 0x19caf0u: goto label_19caf0;
        case 0x19caf4u: goto label_19caf4;
        case 0x19caf8u: goto label_19caf8;
        case 0x19cafcu: goto label_19cafc;
        case 0x19cb00u: goto label_19cb00;
        case 0x19cb04u: goto label_19cb04;
        case 0x19cb08u: goto label_19cb08;
        case 0x19cb0cu: goto label_19cb0c;
        case 0x19cb10u: goto label_19cb10;
        case 0x19cb14u: goto label_19cb14;
        case 0x19cb18u: goto label_19cb18;
        case 0x19cb1cu: goto label_19cb1c;
        case 0x19cb20u: goto label_19cb20;
        case 0x19cb24u: goto label_19cb24;
        case 0x19cb28u: goto label_19cb28;
        case 0x19cb2cu: goto label_19cb2c;
        case 0x19cb30u: goto label_19cb30;
        case 0x19cb34u: goto label_19cb34;
        case 0x19cb38u: goto label_19cb38;
        case 0x19cb3cu: goto label_19cb3c;
        case 0x19cb40u: goto label_19cb40;
        case 0x19cb44u: goto label_19cb44;
        case 0x19cb48u: goto label_19cb48;
        case 0x19cb4cu: goto label_19cb4c;
        case 0x19cb50u: goto label_19cb50;
        case 0x19cb54u: goto label_19cb54;
        case 0x19cb58u: goto label_19cb58;
        case 0x19cb5cu: goto label_19cb5c;
        case 0x19cb60u: goto label_19cb60;
        case 0x19cb64u: goto label_19cb64;
        case 0x19cb68u: goto label_19cb68;
        case 0x19cb6cu: goto label_19cb6c;
        case 0x19cb70u: goto label_19cb70;
        case 0x19cb74u: goto label_19cb74;
        case 0x19cb78u: goto label_19cb78;
        case 0x19cb7cu: goto label_19cb7c;
        case 0x19cb80u: goto label_19cb80;
        case 0x19cb84u: goto label_19cb84;
        case 0x19cb88u: goto label_19cb88;
        case 0x19cb8cu: goto label_19cb8c;
        case 0x19cb90u: goto label_19cb90;
        case 0x19cb94u: goto label_19cb94;
        case 0x19cb98u: goto label_19cb98;
        case 0x19cb9cu: goto label_19cb9c;
        case 0x19cba0u: goto label_19cba0;
        case 0x19cba4u: goto label_19cba4;
        case 0x19cba8u: goto label_19cba8;
        case 0x19cbacu: goto label_19cbac;
        case 0x19cbb0u: goto label_19cbb0;
        case 0x19cbb4u: goto label_19cbb4;
        case 0x19cbb8u: goto label_19cbb8;
        case 0x19cbbcu: goto label_19cbbc;
        case 0x19cbc0u: goto label_19cbc0;
        case 0x19cbc4u: goto label_19cbc4;
        case 0x19cbc8u: goto label_19cbc8;
        case 0x19cbccu: goto label_19cbcc;
        case 0x19cbd0u: goto label_19cbd0;
        case 0x19cbd4u: goto label_19cbd4;
        case 0x19cbd8u: goto label_19cbd8;
        case 0x19cbdcu: goto label_19cbdc;
        case 0x19cbe0u: goto label_19cbe0;
        case 0x19cbe4u: goto label_19cbe4;
        case 0x19cbe8u: goto label_19cbe8;
        case 0x19cbecu: goto label_19cbec;
        case 0x19cbf0u: goto label_19cbf0;
        case 0x19cbf4u: goto label_19cbf4;
        case 0x19cbf8u: goto label_19cbf8;
        case 0x19cbfcu: goto label_19cbfc;
        case 0x19cc00u: goto label_19cc00;
        case 0x19cc04u: goto label_19cc04;
        case 0x19cc08u: goto label_19cc08;
        case 0x19cc0cu: goto label_19cc0c;
        case 0x19cc10u: goto label_19cc10;
        case 0x19cc14u: goto label_19cc14;
        case 0x19cc18u: goto label_19cc18;
        case 0x19cc1cu: goto label_19cc1c;
        case 0x19cc20u: goto label_19cc20;
        case 0x19cc24u: goto label_19cc24;
        case 0x19cc28u: goto label_19cc28;
        case 0x19cc2cu: goto label_19cc2c;
        case 0x19cc30u: goto label_19cc30;
        case 0x19cc34u: goto label_19cc34;
        case 0x19cc38u: goto label_19cc38;
        case 0x19cc3cu: goto label_19cc3c;
        case 0x19cc40u: goto label_19cc40;
        case 0x19cc44u: goto label_19cc44;
        case 0x19cc48u: goto label_19cc48;
        case 0x19cc4cu: goto label_19cc4c;
        case 0x19cc50u: goto label_19cc50;
        case 0x19cc54u: goto label_19cc54;
        case 0x19cc58u: goto label_19cc58;
        case 0x19cc5cu: goto label_19cc5c;
        case 0x19cc60u: goto label_19cc60;
        case 0x19cc64u: goto label_19cc64;
        case 0x19cc68u: goto label_19cc68;
        case 0x19cc6cu: goto label_19cc6c;
        case 0x19cc70u: goto label_19cc70;
        case 0x19cc74u: goto label_19cc74;
        case 0x19cc78u: goto label_19cc78;
        case 0x19cc7cu: goto label_19cc7c;
        case 0x19cc80u: goto label_19cc80;
        case 0x19cc84u: goto label_19cc84;
        case 0x19cc88u: goto label_19cc88;
        case 0x19cc8cu: goto label_19cc8c;
        case 0x19cc90u: goto label_19cc90;
        case 0x19cc94u: goto label_19cc94;
        case 0x19cc98u: goto label_19cc98;
        case 0x19cc9cu: goto label_19cc9c;
        case 0x19cca0u: goto label_19cca0;
        case 0x19cca4u: goto label_19cca4;
        case 0x19cca8u: goto label_19cca8;
        case 0x19ccacu: goto label_19ccac;
        case 0x19ccb0u: goto label_19ccb0;
        case 0x19ccb4u: goto label_19ccb4;
        case 0x19ccb8u: goto label_19ccb8;
        case 0x19ccbcu: goto label_19ccbc;
        case 0x19ccc0u: goto label_19ccc0;
        case 0x19ccc4u: goto label_19ccc4;
        case 0x19ccc8u: goto label_19ccc8;
        case 0x19ccccu: goto label_19cccc;
        case 0x19ccd0u: goto label_19ccd0;
        case 0x19ccd4u: goto label_19ccd4;
        case 0x19ccd8u: goto label_19ccd8;
        case 0x19ccdcu: goto label_19ccdc;
        case 0x19cce0u: goto label_19cce0;
        case 0x19cce4u: goto label_19cce4;
        case 0x19cce8u: goto label_19cce8;
        case 0x19ccecu: goto label_19ccec;
        case 0x19ccf0u: goto label_19ccf0;
        case 0x19ccf4u: goto label_19ccf4;
        case 0x19ccf8u: goto label_19ccf8;
        case 0x19ccfcu: goto label_19ccfc;
        case 0x19cd00u: goto label_19cd00;
        case 0x19cd04u: goto label_19cd04;
        case 0x19cd08u: goto label_19cd08;
        case 0x19cd0cu: goto label_19cd0c;
        case 0x19cd10u: goto label_19cd10;
        case 0x19cd14u: goto label_19cd14;
        case 0x19cd18u: goto label_19cd18;
        case 0x19cd1cu: goto label_19cd1c;
        case 0x19cd20u: goto label_19cd20;
        case 0x19cd24u: goto label_19cd24;
        case 0x19cd28u: goto label_19cd28;
        case 0x19cd2cu: goto label_19cd2c;
        case 0x19cd30u: goto label_19cd30;
        case 0x19cd34u: goto label_19cd34;
        case 0x19cd38u: goto label_19cd38;
        case 0x19cd3cu: goto label_19cd3c;
        case 0x19cd40u: goto label_19cd40;
        case 0x19cd44u: goto label_19cd44;
        case 0x19cd48u: goto label_19cd48;
        case 0x19cd4cu: goto label_19cd4c;
        case 0x19cd50u: goto label_19cd50;
        case 0x19cd54u: goto label_19cd54;
        case 0x19cd58u: goto label_19cd58;
        case 0x19cd5cu: goto label_19cd5c;
        case 0x19cd60u: goto label_19cd60;
        case 0x19cd64u: goto label_19cd64;
        case 0x19cd68u: goto label_19cd68;
        case 0x19cd6cu: goto label_19cd6c;
        case 0x19cd70u: goto label_19cd70;
        case 0x19cd74u: goto label_19cd74;
        case 0x19cd78u: goto label_19cd78;
        case 0x19cd7cu: goto label_19cd7c;
        case 0x19cd80u: goto label_19cd80;
        case 0x19cd84u: goto label_19cd84;
        case 0x19cd88u: goto label_19cd88;
        case 0x19cd8cu: goto label_19cd8c;
        case 0x19cd90u: goto label_19cd90;
        case 0x19cd94u: goto label_19cd94;
        case 0x19cd98u: goto label_19cd98;
        case 0x19cd9cu: goto label_19cd9c;
        case 0x19cda0u: goto label_19cda0;
        case 0x19cda4u: goto label_19cda4;
        case 0x19cda8u: goto label_19cda8;
        case 0x19cdacu: goto label_19cdac;
        case 0x19cdb0u: goto label_19cdb0;
        case 0x19cdb4u: goto label_19cdb4;
        case 0x19cdb8u: goto label_19cdb8;
        case 0x19cdbcu: goto label_19cdbc;
        case 0x19cdc0u: goto label_19cdc0;
        case 0x19cdc4u: goto label_19cdc4;
        case 0x19cdc8u: goto label_19cdc8;
        case 0x19cdccu: goto label_19cdcc;
        case 0x19cdd0u: goto label_19cdd0;
        case 0x19cdd4u: goto label_19cdd4;
        case 0x19cdd8u: goto label_19cdd8;
        case 0x19cddcu: goto label_19cddc;
        default: break;
    }

    ctx->pc = 0x19cac0u;

label_19cac0:
    // 0x19cac0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x19cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_19cac4:
    // 0x19cac4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x19cac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_19cac8:
    // 0x19cac8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x19cac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_19cacc:
    // 0x19cacc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19caccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19cad0:
    // 0x19cad0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x19cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_19cad4:
    // 0x19cad4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x19cad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_19cad8:
    // 0x19cad8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x19cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_19cadc:
    // 0x19cadc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x19cadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_19cae0:
    // 0x19cae0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x19cae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_19cae4:
    // 0x19cae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19cae8:
    // 0x19cae8: 0xe7ba00d0  swc1        $f26, 0xD0($sp)
    ctx->pc = 0x19cae8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_19caec:
    // 0x19caec: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x19caecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_19caf0:
    // 0x19caf0: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x19caf0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_19caf4:
    // 0x19caf4: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x19caf4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_19caf8:
    // 0x19caf8: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x19caf8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_19cafc:
    // 0x19cafc: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x19cafcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_19cb00:
    // 0x19cb00: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x19cb00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_19cb04:
    // 0x19cb04: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x19cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_19cb08:
    // 0x19cb08: 0xc6550070  lwc1        $f21, 0x70($s2)
    ctx->pc = 0x19cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19cb0c:
    // 0x19cb0c: 0xc6590040  lwc1        $f25, 0x40($s2)
    ctx->pc = 0x19cb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_19cb10:
    // 0x19cb10: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x19cb10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19cb14:
    // 0x19cb14: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_19cb18:
    if (ctx->pc == 0x19CB18u) {
        ctx->pc = 0x19CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB14u;
        // 0x19cb18: 0xc6580044  lwc1        $f24, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB1Cu;
        goto label_19cb1c;
    }
    ctx->pc = 0x19CB14u;
    {
        const bool branch_taken_0x19cb14 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x19CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB14u;
        // 0x19cb18: 0xc6580044  lwc1        $f24, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb14) {
            ctx->pc = 0x19CB30u;
            goto label_19cb30;
        }
    }
    ctx->pc = 0x19CB1Cu;
label_19cb1c:
    // 0x19cb1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19cb1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cb20:
    // 0x19cb20: 0x0  nop
    ctx->pc = 0x19cb20u;
    // NOP
label_19cb24:
    // 0x19cb24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cb24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cb28:
    // 0x19cb28: 0x10000006  b           . + 4 + (0x6 << 2)
label_19cb2c:
    if (ctx->pc == 0x19CB2Cu) {
        ctx->pc = 0x19CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB28u;
        // 0x19cb2c: 0x4600a842  mul.s       $f1, $f21, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB30u;
        goto label_19cb30;
    }
    ctx->pc = 0x19CB28u;
    {
        const bool branch_taken_0x19cb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB28u;
        // 0x19cb2c: 0x4600a842  mul.s       $f1, $f21, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb28) {
            ctx->pc = 0x19CB44u;
            goto label_19cb44;
        }
    }
    ctx->pc = 0x19CB30u;
label_19cb30:
    // 0x19cb30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19cb30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cb34:
    // 0x19cb34: 0x0  nop
    ctx->pc = 0x19cb34u;
    // NOP
label_19cb38:
    // 0x19cb38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cb3c:
    // 0x19cb3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19cb3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19cb40:
    // 0x19cb40: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x19cb40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_19cb44:
    // 0x19cb44: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x19cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19cb48:
    // 0x19cb48: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19cb4c:
    if (ctx->pc == 0x19CB4Cu) {
        ctx->pc = 0x19CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB48u;
        // 0x19cb4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB50u;
        goto label_19cb50;
    }
    ctx->pc = 0x19CB48u;
    {
        const bool branch_taken_0x19cb48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB48u;
        // 0x19cb4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb48) {
            ctx->pc = 0x19CB64u;
            goto label_19cb64;
        }
    }
    ctx->pc = 0x19CB50u;
label_19cb50:
    // 0x19cb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cb54:
    // 0x19cb54: 0x0  nop
    ctx->pc = 0x19cb54u;
    // NOP
label_19cb58:
    // 0x19cb58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cb58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cb5c:
    // 0x19cb5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_19cb60:
    if (ctx->pc == 0x19CB60u) {
        ctx->pc = 0x19CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB5Cu;
        // 0x19cb60: 0x8e420074  lw          $v0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB64u;
        goto label_19cb64;
    }
    ctx->pc = 0x19CB5Cu;
    {
        const bool branch_taken_0x19cb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB5Cu;
        // 0x19cb60: 0x8e420074  lw          $v0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb5c) {
            ctx->pc = 0x19CB80u;
            goto label_19cb80;
        }
    }
    ctx->pc = 0x19CB64u;
label_19cb64:
    // 0x19cb64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19cb68:
    // 0x19cb68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19cb6c:
    // 0x19cb6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cb70:
    // 0x19cb70: 0x0  nop
    ctx->pc = 0x19cb70u;
    // NOP
label_19cb74:
    // 0x19cb74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cb74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cb78:
    // 0x19cb78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19cb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19cb7c:
    // 0x19cb7c: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x19cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_19cb80:
    // 0x19cb80: 0x0  nop
    ctx->pc = 0x19cb80u;
    // NOP
label_19cb84:
    // 0x19cb84: 0x0  nop
    ctx->pc = 0x19cb84u;
    // NOP
label_19cb88:
    // 0x19cb88: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19cb88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19cb8c:
    // 0x19cb8c: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x19cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19cb90:
    // 0x19cb90: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x19cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_19cb94:
    // 0x19cb94: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_19cb98:
    if (ctx->pc == 0x19CB98u) {
        ctx->pc = 0x19CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB94u;
        // 0x19cb98: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB9Cu;
        goto label_19cb9c;
    }
    ctx->pc = 0x19CB94u;
    {
        const bool branch_taken_0x19cb94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19cb94) {
            ctx->pc = 0x19CB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CB94u;
            // 0x19cb98: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CBB0u;
            goto label_19cbb0;
        }
    }
    ctx->pc = 0x19CB9Cu;
label_19cb9c:
    // 0x19cb9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cba0:
    // 0x19cba0: 0x0  nop
    ctx->pc = 0x19cba0u;
    // NOP
label_19cba4:
    // 0x19cba4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cba8:
    // 0x19cba8: 0x10000008  b           . + 4 + (0x8 << 2)
label_19cbac:
    if (ctx->pc == 0x19CBACu) {
        ctx->pc = 0x19CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBA8u;
        // 0x19cbac: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBB0u;
        goto label_19cbb0;
    }
    ctx->pc = 0x19CBA8u;
    {
        const bool branch_taken_0x19cba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBA8u;
        // 0x19cbac: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cba8) {
            ctx->pc = 0x19CBCCu;
            goto label_19cbcc;
        }
    }
    ctx->pc = 0x19CBB0u;
label_19cbb0:
    // 0x19cbb0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x19cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_19cbb4:
    // 0x19cbb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19cbb8:
    // 0x19cbb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cbbc:
    // 0x19cbbc: 0x0  nop
    ctx->pc = 0x19cbbcu;
    // NOP
label_19cbc0:
    // 0x19cbc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cbc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cbc4:
    // 0x19cbc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19cbc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19cbc8:
    // 0x19cbc8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19cbc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_19cbcc:
    // 0x19cbcc: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x19cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_19cbd0:
    // 0x19cbd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19cbd4:
    // 0x19cbd4: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x19cbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19cbd8:
    // 0x19cbd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19cbd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19cbdc:
    // 0x19cbdc: 0x4600cdc0  add.s       $f23, $f25, $f0
    ctx->pc = 0x19cbdcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_19cbe0:
    // 0x19cbe0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_19cbe4:
    if (ctx->pc == 0x19CBE4u) {
        ctx->pc = 0x19CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBE0u;
        // 0x19cbe4: 0x4617ce41  sub.s       $f25, $f25, $f23 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBE8u;
        goto label_19cbe8;
    }
    ctx->pc = 0x19CBE0u;
    {
        const bool branch_taken_0x19cbe0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x19CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBE0u;
        // 0x19cbe4: 0x4617ce41  sub.s       $f25, $f25, $f23 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbe0) {
            ctx->pc = 0x19CBFCu;
            goto label_19cbfc;
        }
    }
    ctx->pc = 0x19CBE8u;
label_19cbe8:
    // 0x19cbe8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19cbe8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cbec:
    // 0x19cbec: 0x0  nop
    ctx->pc = 0x19cbecu;
    // NOP
label_19cbf0:
    // 0x19cbf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cbf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cbf4:
    // 0x19cbf4: 0x10000006  b           . + 4 + (0x6 << 2)
label_19cbf8:
    if (ctx->pc == 0x19CBF8u) {
        ctx->pc = 0x19CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBF4u;
        // 0x19cbf8: 0x4600a842  mul.s       $f1, $f21, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBFCu;
        goto label_19cbfc;
    }
    ctx->pc = 0x19CBF4u;
    {
        const bool branch_taken_0x19cbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBF4u;
        // 0x19cbf8: 0x4600a842  mul.s       $f1, $f21, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbf4) {
            ctx->pc = 0x19CC10u;
            goto label_19cc10;
        }
    }
    ctx->pc = 0x19CBFCu;
label_19cbfc:
    // 0x19cbfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19cbfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cc00:
    // 0x19cc00: 0x0  nop
    ctx->pc = 0x19cc00u;
    // NOP
label_19cc04:
    // 0x19cc04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cc04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cc08:
    // 0x19cc08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19cc08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19cc0c:
    // 0x19cc0c: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x19cc0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_19cc10:
    // 0x19cc10: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x19cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19cc14:
    // 0x19cc14: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19cc18:
    if (ctx->pc == 0x19CC18u) {
        ctx->pc = 0x19CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC14u;
        // 0x19cc18: 0xa41823  subu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC1Cu;
        goto label_19cc1c;
    }
    ctx->pc = 0x19CC14u;
    {
        const bool branch_taken_0x19cc14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC14u;
        // 0x19cc18: 0xa41823  subu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc14) {
            ctx->pc = 0x19CC30u;
            goto label_19cc30;
        }
    }
    ctx->pc = 0x19CC1Cu;
label_19cc1c:
    // 0x19cc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cc20:
    // 0x19cc20: 0x0  nop
    ctx->pc = 0x19cc20u;
    // NOP
label_19cc24:
    // 0x19cc24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cc28:
    // 0x19cc28: 0x10000009  b           . + 4 + (0x9 << 2)
label_19cc2c:
    if (ctx->pc == 0x19CC2Cu) {
        ctx->pc = 0x19CC30u;
        goto label_19cc30;
    }
    ctx->pc = 0x19CC28u;
    {
        const bool branch_taken_0x19cc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cc28) {
            ctx->pc = 0x19CC50u;
            goto label_19cc50;
        }
    }
    ctx->pc = 0x19CC30u;
label_19cc30:
    // 0x19cc30: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19cc34:
    // 0x19cc34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19cc38:
    // 0x19cc38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19cc3c:
    // 0x19cc3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cc40:
    // 0x19cc40: 0x0  nop
    ctx->pc = 0x19cc40u;
    // NOP
label_19cc44:
    // 0x19cc44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cc44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cc48:
    // 0x19cc48: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19cc48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19cc4c:
    // 0x19cc4c: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x19cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_19cc50:
    // 0x19cc50: 0x0  nop
    ctx->pc = 0x19cc50u;
    // NOP
label_19cc54:
    // 0x19cc54: 0x0  nop
    ctx->pc = 0x19cc54u;
    // NOP
label_19cc58:
    // 0x19cc58: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x19cc58u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19cc5c:
    // 0x19cc5c: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x19cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_19cc60:
    // 0x19cc60: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_19cc64:
    if (ctx->pc == 0x19CC64u) {
        ctx->pc = 0x19CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC60u;
        // 0x19cc64: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC68u;
        goto label_19cc68;
    }
    ctx->pc = 0x19CC60u;
    {
        const bool branch_taken_0x19cc60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19cc60) {
            ctx->pc = 0x19CC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CC60u;
            // 0x19cc64: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CC7Cu;
            goto label_19cc7c;
        }
    }
    ctx->pc = 0x19CC68u;
label_19cc68:
    // 0x19cc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cc6c:
    // 0x19cc6c: 0x0  nop
    ctx->pc = 0x19cc6cu;
    // NOP
label_19cc70:
    // 0x19cc70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cc70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cc74:
    // 0x19cc74: 0x10000008  b           . + 4 + (0x8 << 2)
label_19cc78:
    if (ctx->pc == 0x19CC78u) {
        ctx->pc = 0x19CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC74u;
        // 0x19cc78: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC7Cu;
        goto label_19cc7c;
    }
    ctx->pc = 0x19CC74u;
    {
        const bool branch_taken_0x19cc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC74u;
        // 0x19cc78: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc74) {
            ctx->pc = 0x19CC98u;
            goto label_19cc98;
        }
    }
    ctx->pc = 0x19CC7Cu;
label_19cc7c:
    // 0x19cc7c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x19cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_19cc80:
    // 0x19cc80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19cc84:
    // 0x19cc84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cc84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cc88:
    // 0x19cc88: 0x0  nop
    ctx->pc = 0x19cc88u;
    // NOP
label_19cc8c:
    // 0x19cc8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cc8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cc90:
    // 0x19cc90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19cc90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19cc94:
    // 0x19cc94: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19cc94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_19cc98:
    // 0x19cc98: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x19cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_19cc9c:
    // 0x19cc9c: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x19cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cca0:
    // 0x19cca0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x19cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_19cca4:
    // 0x19cca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19cca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19cca8:
    // 0x19cca8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19cca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19ccac:
    // 0x19ccac: 0x264500d0  addiu       $a1, $s2, 0xD0
    ctx->pc = 0x19ccacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_19ccb0:
    // 0x19ccb0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x19ccb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_19ccb4:
    // 0x19ccb4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x19ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_19ccb8:
    // 0x19ccb8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19ccb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19ccbc:
    // 0x19ccbc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19ccbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ccc0:
    // 0x19ccc0: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x19ccc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19ccc4:
    // 0x19ccc4: 0x4600c580  add.s       $f22, $f24, $f0
    ctx->pc = 0x19ccc4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_19ccc8:
    // 0x19ccc8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19ccc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19cccc:
    // 0x19cccc: 0x8c83cdb4  lw          $v1, -0x324C($a0)
    ctx->pc = 0x19ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_19ccd0:
    // 0x19ccd0: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x19ccd0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19ccd4:
    // 0x19ccd4: 0x4616c601  sub.s       $f24, $f24, $f22
    ctx->pc = 0x19ccd4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
label_19ccd8:
    // 0x19ccd8: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x19ccd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_19ccdc:
    // 0x19ccdc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cce0:
    // 0x19cce0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x19cce0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_19cce4:
    // 0x19cce4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x19cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_19cce8:
    // 0x19cce8: 0x60f809  jalr        $v1
label_19ccec:
    if (ctx->pc == 0x19CCECu) {
        ctx->pc = 0x19CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCE8u;
        // 0x19ccec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CCF0u;
        goto label_19ccf0;
    }
    ctx->pc = 0x19CCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19CCF0u);
        ctx->pc = 0x19CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCE8u;
        // 0x19ccec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCE8u, 0x19CCF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CCF0u;
label_19ccf0:
    // 0x19ccf0: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x19ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_19ccf4:
    // 0x19ccf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19ccf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ccf8:
    // 0x19ccf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19ccfc:
    // 0x19ccfc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_19cd00:
    if (ctx->pc == 0x19CD00u) {
        ctx->pc = 0x19CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCFCu;
        // 0x19cd00: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD04u;
        goto label_19cd04;
    }
    ctx->pc = 0x19CCFCu;
    {
        const bool branch_taken_0x19ccfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCFCu;
        // 0x19cd00: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ccfc) {
            ctx->pc = 0x19CD88u;
            goto label_19cd88;
        }
    }
    ctx->pc = 0x19CD04u;
label_19cd04:
    // 0x19cd04: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x19cd04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19cd08:
    // 0x19cd08: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19cd08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19cd0c:
    // 0x19cd0c: 0x4600a686  mov.s       $f26, $f20
    ctx->pc = 0x19cd0cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[20]);
label_19cd10:
    // 0x19cd10: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x19cd10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19cd14:
    // 0x19cd14: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_19cd18:
    if (ctx->pc == 0x19CD18u) {
        ctx->pc = 0x19CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD14u;
        // 0x19cd18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD1Cu;
        goto label_19cd1c;
    }
    ctx->pc = 0x19CD14u;
    {
        const bool branch_taken_0x19cd14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD14u;
        // 0x19cd18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd14) {
            ctx->pc = 0x19CD68u;
            goto label_19cd68;
        }
    }
    ctx->pc = 0x19CD1Cu;
label_19cd1c:
    // 0x19cd1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19cd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19cd20:
    // 0x19cd20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19cd20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19cd24:
    // 0x19cd24: 0x0  nop
    ctx->pc = 0x19cd24u;
    // NOP
label_19cd28:
    // 0x19cd28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cd2c:
    // 0x19cd2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19cd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19cd30:
    // 0x19cd30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19cd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19cd34:
    // 0x19cd34: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x19cd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19cd38:
    // 0x19cd38: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x19cd38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_19cd3c:
    // 0x19cd3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19cd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19cd40:
    // 0x19cd40: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x19cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_19cd44:
    // 0x19cd44: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19cd44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_19cd48:
    // 0x19cd48: 0x60f809  jalr        $v1
label_19cd4c:
    if (ctx->pc == 0x19CD4Cu) {
        ctx->pc = 0x19CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD48u;
        // 0x19cd4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD50u;
        goto label_19cd50;
    }
    ctx->pc = 0x19CD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19CD50u);
        ctx->pc = 0x19CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD48u;
        // 0x19cd4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD48u, 0x19CD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CD50u;
label_19cd50:
    // 0x19cd50: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cd54:
    // 0x19cd54: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x19cd54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_19cd58:
    // 0x19cd58: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19cd58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19cd5c:
    // 0x19cd5c: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x19cd5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_19cd60:
    // 0x19cd60: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_19cd64:
    if (ctx->pc == 0x19CD64u) {
        ctx->pc = 0x19CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD60u;
        // 0x19cd64: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD68u;
        goto label_19cd68;
    }
    ctx->pc = 0x19CD60u;
    {
        const bool branch_taken_0x19cd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD60u;
        // 0x19cd64: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd60) {
            ctx->pc = 0x19CD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cd28;
        }
    }
    ctx->pc = 0x19CD68u;
label_19cd68:
    // 0x19cd68: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19cd6c:
    // 0x19cd6c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x19cd6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19cd70:
    // 0x19cd70: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x19cd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_19cd74:
    // 0x19cd74: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x19cd74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19cd78:
    // 0x19cd78: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x19cd78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_19cd7c:
    // 0x19cd7c: 0xe7ba000c  swc1        $f26, 0xC($sp)
    ctx->pc = 0x19cd7cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19cd80:
    // 0x19cd80: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_19cd84:
    if (ctx->pc == 0x19CD84u) {
        ctx->pc = 0x19CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD80u;
        // 0x19cd84: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD88u;
        goto label_19cd88;
    }
    ctx->pc = 0x19CD80u;
    {
        const bool branch_taken_0x19cd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD80u;
        // 0x19cd84: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd80) {
            ctx->pc = 0x19CD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cd10;
        }
    }
    ctx->pc = 0x19CD88u;
label_19cd88:
    // 0x19cd88: 0xe658005c  swc1        $f24, 0x5C($s2)
    ctx->pc = 0x19cd88u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
label_19cd8c:
    // 0x19cd8c: 0xe6570050  swc1        $f23, 0x50($s2)
    ctx->pc = 0x19cd8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_19cd90:
    // 0x19cd90: 0xe6590054  swc1        $f25, 0x54($s2)
    ctx->pc = 0x19cd90u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_19cd94:
    // 0x19cd94: 0xe6560058  swc1        $f22, 0x58($s2)
    ctx->pc = 0x19cd94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_19cd98:
    // 0x19cd98: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x19cd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19cd9c:
    // 0x19cd9c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x19cd9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19cda0:
    // 0x19cda0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x19cda0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19cda4:
    // 0x19cda4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x19cda4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19cda8:
    // 0x19cda8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19cda8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19cdac:
    // 0x19cdac: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x19cdacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19cdb0:
    // 0x19cdb0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x19cdb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19cdb4:
    // 0x19cdb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19cdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19cdb8:
    // 0x19cdb8: 0xc7ba00d0  lwc1        $f26, 0xD0($sp)
    ctx->pc = 0x19cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_19cdbc:
    // 0x19cdbc: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x19cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_19cdc0:
    // 0x19cdc0: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x19cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_19cdc4:
    // 0x19cdc4: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x19cdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_19cdc8:
    // 0x19cdc8: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x19cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_19cdcc:
    // 0x19cdcc: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x19cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19cdd0:
    // 0x19cdd0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x19cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19cdd4:
    // 0x19cdd4: 0x3e00008  jr          $ra
label_19cdd8:
    if (ctx->pc == 0x19CDD8u) {
        ctx->pc = 0x19CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDD4u;
        // 0x19cdd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDDCu;
        goto label_19cddc;
    }
    ctx->pc = 0x19CDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDD4u;
        // 0x19cdd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CDDCu;
label_19cddc:
    // 0x19cddc: 0x0  nop
    ctx->pc = 0x19cddcu;
    // NOP
    ctx->pc = 0x19cde0u;
}
