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

// Function: sub_0014CAF8
// Address: 0x14caf8 - 0x14cfe0
void sub_0014CAF8_0x14caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CAF8_0x14caf8");
#endif

    switch (ctx->pc) {
        case 0x14caf8u: goto label_14caf8;
        case 0x14cafcu: goto label_14cafc;
        case 0x14cb00u: goto label_14cb00;
        case 0x14cb04u: goto label_14cb04;
        case 0x14cb08u: goto label_14cb08;
        case 0x14cb0cu: goto label_14cb0c;
        case 0x14cb10u: goto label_14cb10;
        case 0x14cb14u: goto label_14cb14;
        case 0x14cb18u: goto label_14cb18;
        case 0x14cb1cu: goto label_14cb1c;
        case 0x14cb20u: goto label_14cb20;
        case 0x14cb24u: goto label_14cb24;
        case 0x14cb28u: goto label_14cb28;
        case 0x14cb2cu: goto label_14cb2c;
        case 0x14cb30u: goto label_14cb30;
        case 0x14cb34u: goto label_14cb34;
        case 0x14cb38u: goto label_14cb38;
        case 0x14cb3cu: goto label_14cb3c;
        case 0x14cb40u: goto label_14cb40;
        case 0x14cb44u: goto label_14cb44;
        case 0x14cb48u: goto label_14cb48;
        case 0x14cb4cu: goto label_14cb4c;
        case 0x14cb50u: goto label_14cb50;
        case 0x14cb54u: goto label_14cb54;
        case 0x14cb58u: goto label_14cb58;
        case 0x14cb5cu: goto label_14cb5c;
        case 0x14cb60u: goto label_14cb60;
        case 0x14cb64u: goto label_14cb64;
        case 0x14cb68u: goto label_14cb68;
        case 0x14cb6cu: goto label_14cb6c;
        case 0x14cb70u: goto label_14cb70;
        case 0x14cb74u: goto label_14cb74;
        case 0x14cb78u: goto label_14cb78;
        case 0x14cb7cu: goto label_14cb7c;
        case 0x14cb80u: goto label_14cb80;
        case 0x14cb84u: goto label_14cb84;
        case 0x14cb88u: goto label_14cb88;
        case 0x14cb8cu: goto label_14cb8c;
        case 0x14cb90u: goto label_14cb90;
        case 0x14cb94u: goto label_14cb94;
        case 0x14cb98u: goto label_14cb98;
        case 0x14cb9cu: goto label_14cb9c;
        case 0x14cba0u: goto label_14cba0;
        case 0x14cba4u: goto label_14cba4;
        case 0x14cba8u: goto label_14cba8;
        case 0x14cbacu: goto label_14cbac;
        case 0x14cbb0u: goto label_14cbb0;
        case 0x14cbb4u: goto label_14cbb4;
        case 0x14cbb8u: goto label_14cbb8;
        case 0x14cbbcu: goto label_14cbbc;
        case 0x14cbc0u: goto label_14cbc0;
        case 0x14cbc4u: goto label_14cbc4;
        case 0x14cbc8u: goto label_14cbc8;
        case 0x14cbccu: goto label_14cbcc;
        case 0x14cbd0u: goto label_14cbd0;
        case 0x14cbd4u: goto label_14cbd4;
        case 0x14cbd8u: goto label_14cbd8;
        case 0x14cbdcu: goto label_14cbdc;
        case 0x14cbe0u: goto label_14cbe0;
        case 0x14cbe4u: goto label_14cbe4;
        case 0x14cbe8u: goto label_14cbe8;
        case 0x14cbecu: goto label_14cbec;
        case 0x14cbf0u: goto label_14cbf0;
        case 0x14cbf4u: goto label_14cbf4;
        case 0x14cbf8u: goto label_14cbf8;
        case 0x14cbfcu: goto label_14cbfc;
        case 0x14cc00u: goto label_14cc00;
        case 0x14cc04u: goto label_14cc04;
        case 0x14cc08u: goto label_14cc08;
        case 0x14cc0cu: goto label_14cc0c;
        case 0x14cc10u: goto label_14cc10;
        case 0x14cc14u: goto label_14cc14;
        case 0x14cc18u: goto label_14cc18;
        case 0x14cc1cu: goto label_14cc1c;
        case 0x14cc20u: goto label_14cc20;
        case 0x14cc24u: goto label_14cc24;
        case 0x14cc28u: goto label_14cc28;
        case 0x14cc2cu: goto label_14cc2c;
        case 0x14cc30u: goto label_14cc30;
        case 0x14cc34u: goto label_14cc34;
        case 0x14cc38u: goto label_14cc38;
        case 0x14cc3cu: goto label_14cc3c;
        case 0x14cc40u: goto label_14cc40;
        case 0x14cc44u: goto label_14cc44;
        case 0x14cc48u: goto label_14cc48;
        case 0x14cc4cu: goto label_14cc4c;
        case 0x14cc50u: goto label_14cc50;
        case 0x14cc54u: goto label_14cc54;
        case 0x14cc58u: goto label_14cc58;
        case 0x14cc5cu: goto label_14cc5c;
        case 0x14cc60u: goto label_14cc60;
        case 0x14cc64u: goto label_14cc64;
        case 0x14cc68u: goto label_14cc68;
        case 0x14cc6cu: goto label_14cc6c;
        case 0x14cc70u: goto label_14cc70;
        case 0x14cc74u: goto label_14cc74;
        case 0x14cc78u: goto label_14cc78;
        case 0x14cc7cu: goto label_14cc7c;
        case 0x14cc80u: goto label_14cc80;
        case 0x14cc84u: goto label_14cc84;
        case 0x14cc88u: goto label_14cc88;
        case 0x14cc8cu: goto label_14cc8c;
        case 0x14cc90u: goto label_14cc90;
        case 0x14cc94u: goto label_14cc94;
        case 0x14cc98u: goto label_14cc98;
        case 0x14cc9cu: goto label_14cc9c;
        case 0x14cca0u: goto label_14cca0;
        case 0x14cca4u: goto label_14cca4;
        case 0x14cca8u: goto label_14cca8;
        case 0x14ccacu: goto label_14ccac;
        case 0x14ccb0u: goto label_14ccb0;
        case 0x14ccb4u: goto label_14ccb4;
        case 0x14ccb8u: goto label_14ccb8;
        case 0x14ccbcu: goto label_14ccbc;
        case 0x14ccc0u: goto label_14ccc0;
        case 0x14ccc4u: goto label_14ccc4;
        case 0x14ccc8u: goto label_14ccc8;
        case 0x14ccccu: goto label_14cccc;
        case 0x14ccd0u: goto label_14ccd0;
        case 0x14ccd4u: goto label_14ccd4;
        case 0x14ccd8u: goto label_14ccd8;
        case 0x14ccdcu: goto label_14ccdc;
        case 0x14cce0u: goto label_14cce0;
        case 0x14cce4u: goto label_14cce4;
        case 0x14cce8u: goto label_14cce8;
        case 0x14ccecu: goto label_14ccec;
        case 0x14ccf0u: goto label_14ccf0;
        case 0x14ccf4u: goto label_14ccf4;
        case 0x14ccf8u: goto label_14ccf8;
        case 0x14ccfcu: goto label_14ccfc;
        case 0x14cd00u: goto label_14cd00;
        case 0x14cd04u: goto label_14cd04;
        case 0x14cd08u: goto label_14cd08;
        case 0x14cd0cu: goto label_14cd0c;
        case 0x14cd10u: goto label_14cd10;
        case 0x14cd14u: goto label_14cd14;
        case 0x14cd18u: goto label_14cd18;
        case 0x14cd1cu: goto label_14cd1c;
        case 0x14cd20u: goto label_14cd20;
        case 0x14cd24u: goto label_14cd24;
        case 0x14cd28u: goto label_14cd28;
        case 0x14cd2cu: goto label_14cd2c;
        case 0x14cd30u: goto label_14cd30;
        case 0x14cd34u: goto label_14cd34;
        case 0x14cd38u: goto label_14cd38;
        case 0x14cd3cu: goto label_14cd3c;
        case 0x14cd40u: goto label_14cd40;
        case 0x14cd44u: goto label_14cd44;
        case 0x14cd48u: goto label_14cd48;
        case 0x14cd4cu: goto label_14cd4c;
        case 0x14cd50u: goto label_14cd50;
        case 0x14cd54u: goto label_14cd54;
        case 0x14cd58u: goto label_14cd58;
        case 0x14cd5cu: goto label_14cd5c;
        case 0x14cd60u: goto label_14cd60;
        case 0x14cd64u: goto label_14cd64;
        case 0x14cd68u: goto label_14cd68;
        case 0x14cd6cu: goto label_14cd6c;
        case 0x14cd70u: goto label_14cd70;
        case 0x14cd74u: goto label_14cd74;
        case 0x14cd78u: goto label_14cd78;
        case 0x14cd7cu: goto label_14cd7c;
        case 0x14cd80u: goto label_14cd80;
        case 0x14cd84u: goto label_14cd84;
        case 0x14cd88u: goto label_14cd88;
        case 0x14cd8cu: goto label_14cd8c;
        case 0x14cd90u: goto label_14cd90;
        case 0x14cd94u: goto label_14cd94;
        case 0x14cd98u: goto label_14cd98;
        case 0x14cd9cu: goto label_14cd9c;
        case 0x14cda0u: goto label_14cda0;
        case 0x14cda4u: goto label_14cda4;
        case 0x14cda8u: goto label_14cda8;
        case 0x14cdacu: goto label_14cdac;
        case 0x14cdb0u: goto label_14cdb0;
        case 0x14cdb4u: goto label_14cdb4;
        case 0x14cdb8u: goto label_14cdb8;
        case 0x14cdbcu: goto label_14cdbc;
        case 0x14cdc0u: goto label_14cdc0;
        case 0x14cdc4u: goto label_14cdc4;
        case 0x14cdc8u: goto label_14cdc8;
        case 0x14cdccu: goto label_14cdcc;
        case 0x14cdd0u: goto label_14cdd0;
        case 0x14cdd4u: goto label_14cdd4;
        case 0x14cdd8u: goto label_14cdd8;
        case 0x14cddcu: goto label_14cddc;
        case 0x14cde0u: goto label_14cde0;
        case 0x14cde4u: goto label_14cde4;
        case 0x14cde8u: goto label_14cde8;
        case 0x14cdecu: goto label_14cdec;
        case 0x14cdf0u: goto label_14cdf0;
        case 0x14cdf4u: goto label_14cdf4;
        case 0x14cdf8u: goto label_14cdf8;
        case 0x14cdfcu: goto label_14cdfc;
        case 0x14ce00u: goto label_14ce00;
        case 0x14ce04u: goto label_14ce04;
        case 0x14ce08u: goto label_14ce08;
        case 0x14ce0cu: goto label_14ce0c;
        case 0x14ce10u: goto label_14ce10;
        case 0x14ce14u: goto label_14ce14;
        case 0x14ce18u: goto label_14ce18;
        case 0x14ce1cu: goto label_14ce1c;
        case 0x14ce20u: goto label_14ce20;
        case 0x14ce24u: goto label_14ce24;
        case 0x14ce28u: goto label_14ce28;
        case 0x14ce2cu: goto label_14ce2c;
        case 0x14ce30u: goto label_14ce30;
        case 0x14ce34u: goto label_14ce34;
        case 0x14ce38u: goto label_14ce38;
        case 0x14ce3cu: goto label_14ce3c;
        case 0x14ce40u: goto label_14ce40;
        case 0x14ce44u: goto label_14ce44;
        case 0x14ce48u: goto label_14ce48;
        case 0x14ce4cu: goto label_14ce4c;
        case 0x14ce50u: goto label_14ce50;
        case 0x14ce54u: goto label_14ce54;
        case 0x14ce58u: goto label_14ce58;
        case 0x14ce5cu: goto label_14ce5c;
        case 0x14ce60u: goto label_14ce60;
        case 0x14ce64u: goto label_14ce64;
        case 0x14ce68u: goto label_14ce68;
        case 0x14ce6cu: goto label_14ce6c;
        case 0x14ce70u: goto label_14ce70;
        case 0x14ce74u: goto label_14ce74;
        case 0x14ce78u: goto label_14ce78;
        case 0x14ce7cu: goto label_14ce7c;
        case 0x14ce80u: goto label_14ce80;
        case 0x14ce84u: goto label_14ce84;
        case 0x14ce88u: goto label_14ce88;
        case 0x14ce8cu: goto label_14ce8c;
        case 0x14ce90u: goto label_14ce90;
        case 0x14ce94u: goto label_14ce94;
        case 0x14ce98u: goto label_14ce98;
        case 0x14ce9cu: goto label_14ce9c;
        case 0x14cea0u: goto label_14cea0;
        case 0x14cea4u: goto label_14cea4;
        case 0x14cea8u: goto label_14cea8;
        case 0x14ceacu: goto label_14ceac;
        case 0x14ceb0u: goto label_14ceb0;
        case 0x14ceb4u: goto label_14ceb4;
        case 0x14ceb8u: goto label_14ceb8;
        case 0x14cebcu: goto label_14cebc;
        case 0x14cec0u: goto label_14cec0;
        case 0x14cec4u: goto label_14cec4;
        case 0x14cec8u: goto label_14cec8;
        case 0x14ceccu: goto label_14cecc;
        case 0x14ced0u: goto label_14ced0;
        case 0x14ced4u: goto label_14ced4;
        case 0x14ced8u: goto label_14ced8;
        case 0x14cedcu: goto label_14cedc;
        case 0x14cee0u: goto label_14cee0;
        case 0x14cee4u: goto label_14cee4;
        case 0x14cee8u: goto label_14cee8;
        case 0x14ceecu: goto label_14ceec;
        case 0x14cef0u: goto label_14cef0;
        case 0x14cef4u: goto label_14cef4;
        case 0x14cef8u: goto label_14cef8;
        case 0x14cefcu: goto label_14cefc;
        case 0x14cf00u: goto label_14cf00;
        case 0x14cf04u: goto label_14cf04;
        case 0x14cf08u: goto label_14cf08;
        case 0x14cf0cu: goto label_14cf0c;
        case 0x14cf10u: goto label_14cf10;
        case 0x14cf14u: goto label_14cf14;
        case 0x14cf18u: goto label_14cf18;
        case 0x14cf1cu: goto label_14cf1c;
        case 0x14cf20u: goto label_14cf20;
        case 0x14cf24u: goto label_14cf24;
        case 0x14cf28u: goto label_14cf28;
        case 0x14cf2cu: goto label_14cf2c;
        case 0x14cf30u: goto label_14cf30;
        case 0x14cf34u: goto label_14cf34;
        case 0x14cf38u: goto label_14cf38;
        case 0x14cf3cu: goto label_14cf3c;
        case 0x14cf40u: goto label_14cf40;
        case 0x14cf44u: goto label_14cf44;
        case 0x14cf48u: goto label_14cf48;
        case 0x14cf4cu: goto label_14cf4c;
        case 0x14cf50u: goto label_14cf50;
        case 0x14cf54u: goto label_14cf54;
        case 0x14cf58u: goto label_14cf58;
        case 0x14cf5cu: goto label_14cf5c;
        case 0x14cf60u: goto label_14cf60;
        case 0x14cf64u: goto label_14cf64;
        case 0x14cf68u: goto label_14cf68;
        case 0x14cf6cu: goto label_14cf6c;
        case 0x14cf70u: goto label_14cf70;
        case 0x14cf74u: goto label_14cf74;
        case 0x14cf78u: goto label_14cf78;
        case 0x14cf7cu: goto label_14cf7c;
        case 0x14cf80u: goto label_14cf80;
        case 0x14cf84u: goto label_14cf84;
        case 0x14cf88u: goto label_14cf88;
        case 0x14cf8cu: goto label_14cf8c;
        case 0x14cf90u: goto label_14cf90;
        case 0x14cf94u: goto label_14cf94;
        case 0x14cf98u: goto label_14cf98;
        case 0x14cf9cu: goto label_14cf9c;
        case 0x14cfa0u: goto label_14cfa0;
        case 0x14cfa4u: goto label_14cfa4;
        case 0x14cfa8u: goto label_14cfa8;
        case 0x14cfacu: goto label_14cfac;
        case 0x14cfb0u: goto label_14cfb0;
        case 0x14cfb4u: goto label_14cfb4;
        case 0x14cfb8u: goto label_14cfb8;
        case 0x14cfbcu: goto label_14cfbc;
        case 0x14cfc0u: goto label_14cfc0;
        case 0x14cfc4u: goto label_14cfc4;
        case 0x14cfc8u: goto label_14cfc8;
        case 0x14cfccu: goto label_14cfcc;
        case 0x14cfd0u: goto label_14cfd0;
        case 0x14cfd4u: goto label_14cfd4;
        case 0x14cfd8u: goto label_14cfd8;
        case 0x14cfdcu: goto label_14cfdc;
        default: break;
    }

    ctx->pc = 0x14caf8u;

label_14caf8:
    // 0x14caf8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x14caf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_14cafc:
    // 0x14cafc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x14cafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_14cb00:
    // 0x14cb00: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_14cb04:
    // 0x14cb04: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x14cb04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14cb08:
    // 0x14cb08: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x14cb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_14cb0c:
    // 0x14cb0c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14cb0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14cb10:
    // 0x14cb10: 0x26f60004  addiu       $s6, $s7, 0x4
    ctx->pc = 0x14cb10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_14cb14:
    // 0x14cb14: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x14cb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_14cb18:
    // 0x14cb18: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x14cb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_14cb1c:
    // 0x14cb1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14cb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14cb20:
    // 0x14cb20: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x14cb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_14cb24:
    // 0x14cb24: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x14cb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_14cb28:
    // 0x14cb28: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x14cb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_14cb2c:
    // 0x14cb2c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x14cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_14cb30:
    // 0x14cb30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14cb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_14cb34:
    // 0x14cb34: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x14cb34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_14cb38:
    // 0x14cb38: 0xc043ca8  jal         func_10F2A0
label_14cb3c:
    if (ctx->pc == 0x14CB3Cu) {
        ctx->pc = 0x14CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB38u;
        // 0x14cb3c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CB40u;
        goto label_14cb40;
    }
    ctx->pc = 0x14CB38u;
    SET_GPR_U32(ctx, 31, 0x14CB40u);
    ctx->pc = 0x14CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB38u;
    // 0x14cb3c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x14CB38u, 0x14CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB40u;
label_14cb40:
    // 0x14cb40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14cb44:
    // 0x14cb44: 0x54430089  bnel        $v0, $v1, . + 4 + (0x89 << 2)
label_14cb48:
    if (ctx->pc == 0x14CB48u) {
        ctx->pc = 0x14CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB44u;
        // 0x14cb48: 0x8ee2003c  lw          $v0, 0x3C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CB4Cu;
        goto label_14cb4c;
    }
    ctx->pc = 0x14CB44u;
    {
        const bool branch_taken_0x14cb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14cb44) {
            ctx->pc = 0x14CB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CB44u;
            // 0x14cb48: 0x8ee2003c  lw          $v0, 0x3C($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CD6Cu;
            goto label_14cd6c;
        }
    }
    ctx->pc = 0x14CB4Cu;
label_14cb4c:
    // 0x14cb4c: 0x8efe0040  lw          $fp, 0x40($s7)
    ctx->pc = 0x14cb4cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
label_14cb50:
    // 0x14cb50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14cb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14cb54:
    // 0x14cb54: 0x8ef4003c  lw          $s4, 0x3C($s7)
    ctx->pc = 0x14cb54u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
label_14cb58:
    // 0x14cb58: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14cb58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_14cb5c:
    // 0x14cb5c: 0xc6ec0058  lwc1        $f12, 0x58($s7)
    ctx->pc = 0x14cb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14cb60:
    // 0x14cb60: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x14cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_14cb64:
    // 0x14cb64: 0xc053462  jal         func_14D188
label_14cb68:
    if (ctx->pc == 0x14CB68u) {
        ctx->pc = 0x14CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB64u;
        // 0x14cb68: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CB6Cu;
        goto label_14cb6c;
    }
    ctx->pc = 0x14CB64u;
    SET_GPR_U32(ctx, 31, 0x14CB6Cu);
    ctx->pc = 0x14CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB64u;
    // 0x14cb68: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D188u, 0x14CB64u, 0x14CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB6Cu;
label_14cb6c:
    // 0x14cb6c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x14cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_14cb70:
    // 0x14cb70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14cb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14cb74:
    // 0x14cb74: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x14cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_14cb78:
    // 0x14cb78: 0xc6ec005c  lwc1        $f12, 0x5C($s7)
    ctx->pc = 0x14cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14cb7c:
    // 0x14cb7c: 0xc053462  jal         func_14D188
label_14cb80:
    if (ctx->pc == 0x14CB80u) {
        ctx->pc = 0x14CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB7Cu;
        // 0x14cb80: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CB84u;
        goto label_14cb84;
    }
    ctx->pc = 0x14CB7Cu;
    SET_GPR_U32(ctx, 31, 0x14CB84u);
    ctx->pc = 0x14CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB7Cu;
    // 0x14cb80: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D188u, 0x14CB7Cu, 0x14CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB84u;
label_14cb84:
    // 0x14cb84: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x14cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_14cb88:
    // 0x14cb88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14cb8c:
    // 0x14cb8c: 0x8e11bce4  lw          $s1, -0x431C($s0)
    ctx->pc = 0x14cb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950116)));
label_14cb90:
    // 0x14cb90: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x14cb90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14cb94:
    // 0x14cb94: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x14cb94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_14cb98:
    // 0x14cb98: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x14cb98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_14cb9c:
    // 0x14cb9c: 0xc043c8e  jal         func_10F238
label_14cba0:
    if (ctx->pc == 0x14CBA0u) {
        ctx->pc = 0x14CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB9Cu;
        // 0x14cba0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CBA4u;
        goto label_14cba4;
    }
    ctx->pc = 0x14CB9Cu;
    SET_GPR_U32(ctx, 31, 0x14CBA4u);
    ctx->pc = 0x14CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB9Cu;
    // 0x14cba0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F238u, 0x14CB9Cu, 0x14CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBA4u;
label_14cba4:
    // 0x14cba4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14cba8:
    // 0x14cba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14cba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cbac:
    // 0x14cbac: 0x60f809  jalr        $v1
label_14cbb0:
    if (ctx->pc == 0x14CBB0u) {
        ctx->pc = 0x14CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBACu;
        // 0x14cbb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CBB4u;
        goto label_14cbb4;
    }
    ctx->pc = 0x14CBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14CBB4u);
        ctx->pc = 0x14CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBACu;
        // 0x14cbb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CBACu, 0x14CBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CBB4u;
label_14cbb4:
    // 0x14cbb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14cbb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cbb8:
    // 0x14cbb8: 0xc043c9a  jal         func_10F268
label_14cbbc:
    if (ctx->pc == 0x14CBBCu) {
        ctx->pc = 0x14CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBB8u;
        // 0x14cbbc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CBC0u;
        goto label_14cbc0;
    }
    ctx->pc = 0x14CBB8u;
    SET_GPR_U32(ctx, 31, 0x14CBC0u);
    ctx->pc = 0x14CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBB8u;
    // 0x14cbbc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F268u, 0x14CBB8u, 0x14CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBC0u;
label_14cbc0:
    // 0x14cbc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14cbc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cbc4:
    // 0x14cbc4: 0xc043c3a  jal         func_10F0E8
label_14cbc8:
    if (ctx->pc == 0x14CBC8u) {
        ctx->pc = 0x14CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBC4u;
        // 0x14cbc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CBCCu;
        goto label_14cbcc;
    }
    ctx->pc = 0x14CBC4u;
    SET_GPR_U32(ctx, 31, 0x14CBCCu);
    ctx->pc = 0x14CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBC4u;
    // 0x14cbc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0E8u, 0x14CBC4u, 0x14CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBCCu;
label_14cbcc:
    // 0x14cbcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14cbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cbd0:
    // 0x14cbd0: 0xc043c26  jal         func_10F098
label_14cbd4:
    if (ctx->pc == 0x14CBD4u) {
        ctx->pc = 0x14CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBD0u;
        // 0x14cbd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CBD8u;
        goto label_14cbd8;
    }
    ctx->pc = 0x14CBD0u;
    SET_GPR_U32(ctx, 31, 0x14CBD8u);
    ctx->pc = 0x14CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBD0u;
    // 0x14cbd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F098u, 0x14CBD0u, 0x14CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBD8u;
label_14cbd8:
    // 0x14cbd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14cbd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cbdc:
    // 0x14cbdc: 0xc043ca8  jal         func_10F2A0
label_14cbe0:
    if (ctx->pc == 0x14CBE0u) {
        ctx->pc = 0x14CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBDCu;
        // 0x14cbe0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CBE4u;
        goto label_14cbe4;
    }
    ctx->pc = 0x14CBDCu;
    SET_GPR_U32(ctx, 31, 0x14CBE4u);
    ctx->pc = 0x14CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBDCu;
    // 0x14cbe0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x14CBDCu, 0x14CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBE4u;
label_14cbe4:
    // 0x14cbe4: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x14cbe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_14cbe8:
    // 0x14cbe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14cbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14cbec:
    // 0x14cbec: 0x2020018  mult        $zero, $s0, $v0
    ctx->pc = 0x14cbecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_14cbf0:
    // 0x14cbf0: 0x3012  mflo        $a2
    ctx->pc = 0x14cbf0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_14cbf4:
    // 0x14cbf4: 0xc05406a  jal         func_1501A8
label_14cbf8:
    if (ctx->pc == 0x14CBF8u) {
        ctx->pc = 0x14CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBF4u;
        // 0x14cbf8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CBFCu;
        goto label_14cbfc;
    }
    ctx->pc = 0x14CBF4u;
    SET_GPR_U32(ctx, 31, 0x14CBFCu);
    ctx->pc = 0x14CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBF4u;
    // 0x14cbf8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501A8u, 0x14CBF4u, 0x14CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBFCu;
label_14cbfc:
    // 0x14cbfc: 0xc043c26  jal         func_10F098
label_14cc00:
    if (ctx->pc == 0x14CC00u) {
        ctx->pc = 0x14CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBFCu;
        // 0x14cc00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC04u;
        goto label_14cc04;
    }
    ctx->pc = 0x14CBFCu;
    SET_GPR_U32(ctx, 31, 0x14CC04u);
    ctx->pc = 0x14CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBFCu;
    // 0x14cc00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F098u, 0x14CBFCu, 0x14CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC04u;
label_14cc04:
    // 0x14cc04: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x14cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14cc08:
    // 0x14cc08: 0xc053ad0  jal         func_14EB40
label_14cc0c:
    if (ctx->pc == 0x14CC0Cu) {
        ctx->pc = 0x14CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC08u;
        // 0x14cc0c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC10u;
        goto label_14cc10;
    }
    ctx->pc = 0x14CC08u;
    SET_GPR_U32(ctx, 31, 0x14CC10u);
    ctx->pc = 0x14CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC08u;
    // 0x14cc0c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14CC08u, 0x14CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC10u;
label_14cc10:
    // 0x14cc10: 0xc043c26  jal         func_10F098
label_14cc14:
    if (ctx->pc == 0x14CC14u) {
        ctx->pc = 0x14CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC10u;
        // 0x14cc14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC18u;
        goto label_14cc18;
    }
    ctx->pc = 0x14CC10u;
    SET_GPR_U32(ctx, 31, 0x14CC18u);
    ctx->pc = 0x14CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC10u;
    // 0x14cc14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F098u, 0x14CC10u, 0x14CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC18u;
label_14cc18:
    // 0x14cc18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14cc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cc1c:
    // 0x14cc1c: 0xc053b1a  jal         func_14EC68
label_14cc20:
    if (ctx->pc == 0x14CC20u) {
        ctx->pc = 0x14CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC1Cu;
        // 0x14cc20: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC24u;
        goto label_14cc24;
    }
    ctx->pc = 0x14CC1Cu;
    SET_GPR_U32(ctx, 31, 0x14CC24u);
    ctx->pc = 0x14CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC1Cu;
    // 0x14cc20: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC68u, 0x14CC1Cu, 0x14CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC24u;
label_14cc24:
    // 0x14cc24: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x14cc24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_14cc28:
    // 0x14cc28: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14cc28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14cc2c:
    // 0x14cc2c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x14cc2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14cc30:
    // 0x14cc30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_14cc34:
    // 0x14cc34: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14cc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_14cc38:
    // 0x14cc38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14cc38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14cc3c:
    // 0x14cc3c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x14cc3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14cc40:
    // 0x14cc40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14cc40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14cc44:
    // 0x14cc44: 0xc05378a  jal         func_14DE28
label_14cc48:
    if (ctx->pc == 0x14CC48u) {
        ctx->pc = 0x14CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC44u;
        // 0x14cc48: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC4Cu;
        goto label_14cc4c;
    }
    ctx->pc = 0x14CC44u;
    SET_GPR_U32(ctx, 31, 0x14CC4Cu);
    ctx->pc = 0x14CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC44u;
    // 0x14cc48: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE28u, 0x14CC44u, 0x14CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC4Cu;
label_14cc4c:
    // 0x14cc4c: 0xc043c26  jal         func_10F098
label_14cc50:
    if (ctx->pc == 0x14CC50u) {
        ctx->pc = 0x14CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC4Cu;
        // 0x14cc50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC54u;
        goto label_14cc54;
    }
    ctx->pc = 0x14CC4Cu;
    SET_GPR_U32(ctx, 31, 0x14CC54u);
    ctx->pc = 0x14CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC4Cu;
    // 0x14cc50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F098u, 0x14CC4Cu, 0x14CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC54u;
label_14cc54:
    // 0x14cc54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14cc54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cc58:
    // 0x14cc58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14cc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_14cc5c:
    // 0x14cc5c: 0xc0540e0  jal         func_150380
label_14cc60:
    if (ctx->pc == 0x14CC60u) {
        ctx->pc = 0x14CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC5Cu;
        // 0x14cc60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC64u;
        goto label_14cc64;
    }
    ctx->pc = 0x14CC5Cu;
    SET_GPR_U32(ctx, 31, 0x14CC64u);
    ctx->pc = 0x14CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC5Cu;
    // 0x14cc60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150380u, 0x14CC5Cu, 0x14CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC64u;
label_14cc64:
    // 0x14cc64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14cc68:
    // 0x14cc68: 0x17c2000e  bne         $fp, $v0, . + 4 + (0xE << 2)
label_14cc6c:
    if (ctx->pc == 0x14CC6Cu) {
        ctx->pc = 0x14CC70u;
        goto label_14cc70;
    }
    ctx->pc = 0x14CC68u;
    {
        const bool branch_taken_0x14cc68 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x14cc68) {
            ctx->pc = 0x14CCA4u;
            goto label_14cca4;
        }
    }
    ctx->pc = 0x14CC70u;
label_14cc70:
    // 0x14cc70: 0xc043c26  jal         func_10F098
label_14cc74:
    if (ctx->pc == 0x14CC74u) {
        ctx->pc = 0x14CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC70u;
        // 0x14cc74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC78u;
        goto label_14cc78;
    }
    ctx->pc = 0x14CC70u;
    SET_GPR_U32(ctx, 31, 0x14CC78u);
    ctx->pc = 0x14CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC70u;
    // 0x14cc74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F098u, 0x14CC70u, 0x14CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC78u;
label_14cc78:
    // 0x14cc78: 0x8eaa0848  lw          $t2, 0x848($s5)
    ctx->pc = 0x14cc78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2120)));
label_14cc7c:
    // 0x14cc7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14cc80:
    // 0x14cc80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14cc84:
    // 0x14cc84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14cc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14cc88:
    // 0x14cc88: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x14cc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_14cc8c:
    // 0x14cc8c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x14cc8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_14cc90:
    // 0x14cc90: 0x8fa9001c  lw          $t1, 0x1C($sp)
    ctx->pc = 0x14cc90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_14cc94:
    // 0x14cc94: 0xc054112  jal         func_150448
label_14cc98:
    if (ctx->pc == 0x14CC98u) {
        ctx->pc = 0x14CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC94u;
        // 0x14cc98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC9Cu;
        goto label_14cc9c;
    }
    ctx->pc = 0x14CC94u;
    SET_GPR_U32(ctx, 31, 0x14CC9Cu);
    ctx->pc = 0x14CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC94u;
    // 0x14cc98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150448u, 0x14CC94u, 0x14CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC9Cu;
label_14cc9c:
    // 0x14cc9c: 0x1000000c  b           . + 4 + (0xC << 2)
label_14cca0:
    if (ctx->pc == 0x14CCA0u) {
        ctx->pc = 0x14CCA4u;
        goto label_14cca4;
    }
    ctx->pc = 0x14CC9Cu;
    {
        const bool branch_taken_0x14cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc9c) {
            ctx->pc = 0x14CCD0u;
            goto label_14ccd0;
        }
    }
    ctx->pc = 0x14CCA4u;
label_14cca4:
    // 0x14cca4: 0xc043c26  jal         func_10F098
label_14cca8:
    if (ctx->pc == 0x14CCA8u) {
        ctx->pc = 0x14CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCA4u;
        // 0x14cca8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CCACu;
        goto label_14ccac;
    }
    ctx->pc = 0x14CCA4u;
    SET_GPR_U32(ctx, 31, 0x14CCACu);
    ctx->pc = 0x14CCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCA4u;
    // 0x14cca8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F098u, 0x14CCA4u, 0x14CCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCACu;
label_14ccac:
    // 0x14ccac: 0x8eaa084c  lw          $t2, 0x84C($s5)
    ctx->pc = 0x14ccacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2124)));
label_14ccb0:
    // 0x14ccb0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14ccb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_14ccb4:
    // 0x14ccb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14ccb8:
    // 0x14ccb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14ccb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ccbc:
    // 0x14ccbc: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x14ccbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_14ccc0:
    // 0x14ccc0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x14ccc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_14ccc4:
    // 0x14ccc4: 0x8fa9001c  lw          $t1, 0x1C($sp)
    ctx->pc = 0x14ccc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_14ccc8:
    // 0x14ccc8: 0xc054112  jal         func_150448
label_14cccc:
    if (ctx->pc == 0x14CCCCu) {
        ctx->pc = 0x14CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCC8u;
        // 0x14cccc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CCD0u;
        goto label_14ccd0;
    }
    ctx->pc = 0x14CCC8u;
    SET_GPR_U32(ctx, 31, 0x14CCD0u);
    ctx->pc = 0x14CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCC8u;
    // 0x14cccc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150448u, 0x14CCC8u, 0x14CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCD0u;
label_14ccd0:
    // 0x14ccd0: 0xc043c4e  jal         func_10F138
label_14ccd4:
    if (ctx->pc == 0x14CCD4u) {
        ctx->pc = 0x14CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCD0u;
        // 0x14ccd4: 0x26e40004  addiu       $a0, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CCD8u;
        goto label_14ccd8;
    }
    ctx->pc = 0x14CCD0u;
    SET_GPR_U32(ctx, 31, 0x14CCD8u);
    ctx->pc = 0x14CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCD0u;
    // 0x14ccd4: 0x26e40004  addiu       $a0, $s7, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F138u, 0x14CCD0u, 0x14CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCD8u;
label_14ccd8:
    // 0x14ccd8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14ccd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_14ccdc:
    // 0x14ccdc: 0xc054198  jal         func_150660
label_14cce0:
    if (ctx->pc == 0x14CCE0u) {
        ctx->pc = 0x14CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCDCu;
        // 0x14cce0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CCE4u;
        goto label_14cce4;
    }
    ctx->pc = 0x14CCDCu;
    SET_GPR_U32(ctx, 31, 0x14CCE4u);
    ctx->pc = 0x14CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCDCu;
    // 0x14cce0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150660u, 0x14CCDCu, 0x14CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCE4u;
label_14cce4:
    // 0x14cce4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_14cce8:
    // 0x14cce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ccec:
    // 0x14ccec: 0x8c46bce4  lw          $a2, -0x431C($v0)
    ctx->pc = 0x14ccecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_14ccf0:
    // 0x14ccf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14ccf4:
    // 0x14ccf4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x14ccf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_14ccf8:
    // 0x14ccf8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x14ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_14ccfc:
    // 0x14ccfc: 0x60f809  jalr        $v1
label_14cd00:
    if (ctx->pc == 0x14CD00u) {
        ctx->pc = 0x14CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCFCu;
        // 0x14cd00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD04u;
        goto label_14cd04;
    }
    ctx->pc = 0x14CCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14CD04u);
        ctx->pc = 0x14CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCFCu;
        // 0x14cd00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CCFCu, 0x14CD04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CD04u;
label_14cd04:
    // 0x14cd04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_14cd08:
    // 0x14cd08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14cd0c:
    // 0x14cd0c: 0x8c66bce4  lw          $a2, -0x431C($v1)
    ctx->pc = 0x14cd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950116)));
label_14cd10:
    // 0x14cd10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14cd14:
    // 0x14cd14: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x14cd14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_14cd18:
    // 0x14cd18: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x14cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_14cd1c:
    // 0x14cd1c: 0x60f809  jalr        $v1
label_14cd20:
    if (ctx->pc == 0x14CD20u) {
        ctx->pc = 0x14CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD1Cu;
        // 0x14cd20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD24u;
        goto label_14cd24;
    }
    ctx->pc = 0x14CD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14CD24u);
        ctx->pc = 0x14CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD1Cu;
        // 0x14cd20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CD1Cu, 0x14CD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CD24u;
label_14cd24:
    // 0x14cd24: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_14cd28:
    // 0x14cd28: 0x8ca6bce4  lw          $a2, -0x431C($a1)
    ctx->pc = 0x14cd28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950116)));
label_14cd2c:
    // 0x14cd2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14cd30:
    // 0x14cd30: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14cd34:
    // 0x14cd34: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x14cd34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_14cd38:
    // 0x14cd38: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x14cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_14cd3c:
    // 0x14cd3c: 0x60f809  jalr        $v1
label_14cd40:
    if (ctx->pc == 0x14CD40u) {
        ctx->pc = 0x14CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD3Cu;
        // 0x14cd40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD44u;
        goto label_14cd44;
    }
    ctx->pc = 0x14CD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14CD44u);
        ctx->pc = 0x14CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD3Cu;
        // 0x14cd40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CD3Cu, 0x14CD44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CD44u;
label_14cd44:
    // 0x14cd44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_14cd48:
    // 0x14cd48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14cd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14cd4c:
    // 0x14cd4c: 0x8c46bce4  lw          $a2, -0x431C($v0)
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_14cd50:
    // 0x14cd50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14cd54:
    // 0x14cd54: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x14cd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_14cd58:
    // 0x14cd58: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x14cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_14cd5c:
    // 0x14cd5c: 0x60f809  jalr        $v1
label_14cd60:
    if (ctx->pc == 0x14CD60u) {
        ctx->pc = 0x14CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD5Cu;
        // 0x14cd60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD64u;
        goto label_14cd64;
    }
    ctx->pc = 0x14CD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14CD64u);
        ctx->pc = 0x14CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD5Cu;
        // 0x14cd60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CD5Cu, 0x14CD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CD64u;
label_14cd64:
    // 0x14cd64: 0x10000091  b           . + 4 + (0x91 << 2)
label_14cd68:
    if (ctx->pc == 0x14CD68u) {
        ctx->pc = 0x14CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD64u;
        // 0x14cd68: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD6Cu;
        goto label_14cd6c;
    }
    ctx->pc = 0x14CD64u;
    {
        const bool branch_taken_0x14cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD64u;
        // 0x14cd68: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd64) {
            ctx->pc = 0x14CFACu;
            goto label_14cfac;
        }
    }
    ctx->pc = 0x14CD6Cu;
label_14cd6c:
    // 0x14cd6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14cd70:
    // 0x14cd70: 0x1043008e  beq         $v0, $v1, . + 4 + (0x8E << 2)
label_14cd74:
    if (ctx->pc == 0x14CD74u) {
        ctx->pc = 0x14CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD70u;
        // 0x14cd74: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD78u;
        goto label_14cd78;
    }
    ctx->pc = 0x14CD70u;
    {
        const bool branch_taken_0x14cd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD70u;
        // 0x14cd74: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd70) {
            ctx->pc = 0x14CFACu;
            goto label_14cfac;
        }
    }
    ctx->pc = 0x14CD78u;
label_14cd78:
    // 0x14cd78: 0x8ee20040  lw          $v0, 0x40($s7)
    ctx->pc = 0x14cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
label_14cd7c:
    // 0x14cd7c: 0x1043008c  beq         $v0, $v1, . + 4 + (0x8C << 2)
label_14cd80:
    if (ctx->pc == 0x14CD80u) {
        ctx->pc = 0x14CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD7Cu;
        // 0x14cd80: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD84u;
        goto label_14cd84;
    }
    ctx->pc = 0x14CD7Cu;
    {
        const bool branch_taken_0x14cd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD7Cu;
        // 0x14cd80: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd7c) {
            ctx->pc = 0x14CFB0u;
            goto label_14cfb0;
        }
    }
    ctx->pc = 0x14CD84u;
label_14cd84:
    // 0x14cd84: 0xc6ec0058  lwc1        $f12, 0x58($s7)
    ctx->pc = 0x14cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14cd88:
    // 0x14cd88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14cd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14cd8c:
    // 0x14cd8c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x14cd8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_14cd90:
    // 0x14cd90: 0xc053462  jal         func_14D188
label_14cd94:
    if (ctx->pc == 0x14CD94u) {
        ctx->pc = 0x14CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD90u;
        // 0x14cd94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD98u;
        goto label_14cd98;
    }
    ctx->pc = 0x14CD90u;
    SET_GPR_U32(ctx, 31, 0x14CD98u);
    ctx->pc = 0x14CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD90u;
    // 0x14cd94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D188u, 0x14CD90u, 0x14CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD98u;
label_14cd98:
    // 0x14cd98: 0xc6ec005c  lwc1        $f12, 0x5C($s7)
    ctx->pc = 0x14cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14cd9c:
    // 0x14cd9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14cd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14cda0:
    // 0x14cda0: 0xc053462  jal         func_14D188
label_14cda4:
    if (ctx->pc == 0x14CDA4u) {
        ctx->pc = 0x14CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDA0u;
        // 0x14cda4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CDA8u;
        goto label_14cda8;
    }
    ctx->pc = 0x14CDA0u;
    SET_GPR_U32(ctx, 31, 0x14CDA8u);
    ctx->pc = 0x14CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDA0u;
    // 0x14cda4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D188u, 0x14CDA0u, 0x14CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDA8u;
label_14cda8:
    // 0x14cda8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14cdac:
    // 0x14cdac: 0xc043c8a  jal         func_10F228
label_14cdb0:
    if (ctx->pc == 0x14CDB0u) {
        ctx->pc = 0x14CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDACu;
        // 0x14cdb0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CDB4u;
        goto label_14cdb4;
    }
    ctx->pc = 0x14CDACu;
    SET_GPR_U32(ctx, 31, 0x14CDB4u);
    ctx->pc = 0x14CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDACu;
    // 0x14cdb0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F228u, 0x14CDACu, 0x14CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDB4u;
label_14cdb4:
    // 0x14cdb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14cdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14cdb8:
    // 0x14cdb8: 0x0  nop
    ctx->pc = 0x14cdb8u;
    // NOP
label_14cdbc:
    // 0x14cdbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14cdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14cdc0:
    // 0x14cdc0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x14cdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_14cdc4:
    // 0x14cdc4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x14cdc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_14cdc8:
    // 0x14cdc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14cdc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cdcc:
    // 0x14cdcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14cdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14cdd0:
    // 0x14cdd0: 0xc043c8a  jal         func_10F228
label_14cdd4:
    if (ctx->pc == 0x14CDD4u) {
        ctx->pc = 0x14CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDD0u;
        // 0x14cdd4: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CDD8u;
        goto label_14cdd8;
    }
    ctx->pc = 0x14CDD0u;
    SET_GPR_U32(ctx, 31, 0x14CDD8u);
    ctx->pc = 0x14CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDD0u;
    // 0x14cdd4: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F228u, 0x14CDD0u, 0x14CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDD8u;
label_14cdd8:
    // 0x14cdd8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_14cddc:
    if (ctx->pc == 0x14CDDCu) {
        ctx->pc = 0x14CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDD8u;
        // 0x14cddc: 0xe6f50068  swc1        $f21, 0x68($s7) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CDE0u;
        goto label_14cde0;
    }
    ctx->pc = 0x14CDD8u;
    {
        const bool branch_taken_0x14cdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cdd8) {
            ctx->pc = 0x14CDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CDD8u;
            // 0x14cddc: 0xe6f50068  swc1        $f21, 0x68($s7) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 104), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CE04u;
            goto label_14ce04;
        }
    }
    ctx->pc = 0x14CDE0u;
label_14cde0:
    // 0x14cde0: 0xc043c8a  jal         func_10F228
label_14cde4:
    if (ctx->pc == 0x14CDE4u) {
        ctx->pc = 0x14CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDE0u;
        // 0x14cde4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CDE8u;
        goto label_14cde8;
    }
    ctx->pc = 0x14CDE0u;
    SET_GPR_U32(ctx, 31, 0x14CDE8u);
    ctx->pc = 0x14CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDE0u;
    // 0x14cde4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F228u, 0x14CDE0u, 0x14CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDE8u;
label_14cde8:
    // 0x14cde8: 0x4615a340  add.s       $f13, $f20, $f21
    ctx->pc = 0x14cde8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_14cdec:
    // 0x14cdec: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x14cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_14cdf0:
    // 0x14cdf0: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x14cdf0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_14cdf4:
    // 0x14cdf4: 0xc0cd508  jal         func_335420
label_14cdf8:
    if (ctx->pc == 0x14CDF8u) {
        ctx->pc = 0x14CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDF4u;
        // 0x14cdf8: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CDFCu;
        goto label_14cdfc;
    }
    ctx->pc = 0x14CDF4u;
    SET_GPR_U32(ctx, 31, 0x14CDFCu);
    ctx->pc = 0x14CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDF4u;
    // 0x14cdf8: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x14CDF4u, 0x14CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDFCu;
label_14cdfc:
    // 0x14cdfc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x14cdfcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_14ce00:
    // 0x14ce00: 0xe6f50068  swc1        $f21, 0x68($s7)
    ctx->pc = 0x14ce00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 104), bits); }
label_14ce04:
    // 0x14ce04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14ce04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14ce08:
    // 0x14ce08: 0xc043c8e  jal         func_10F238
label_14ce0c:
    if (ctx->pc == 0x14CE0Cu) {
        ctx->pc = 0x14CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE08u;
        // 0x14ce0c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE10u;
        goto label_14ce10;
    }
    ctx->pc = 0x14CE08u;
    SET_GPR_U32(ctx, 31, 0x14CE10u);
    ctx->pc = 0x14CE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE08u;
    // 0x14ce0c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F238u, 0x14CE08u, 0x14CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE10u;
label_14ce10:
    // 0x14ce10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ce10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14ce14:
    // 0x14ce14: 0x0  nop
    ctx->pc = 0x14ce14u;
    // NOP
label_14ce18:
    // 0x14ce18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14ce18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14ce1c:
    // 0x14ce1c: 0xc6e0006c  lwc1        $f0, 0x6C($s7)
    ctx->pc = 0x14ce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ce20:
    // 0x14ce20: 0xc6e20070  lwc1        $f2, 0x70($s7)
    ctx->pc = 0x14ce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14ce24:
    // 0x14ce24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_14ce28:
    // 0x14ce28: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x14ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_14ce2c:
    // 0x14ce2c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x14ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_14ce30:
    // 0x14ce30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14ce30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14ce34:
    // 0x14ce34: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_14ce38:
    // 0x14ce38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_14ce3c:
    // 0x14ce3c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_14ce40:
    // 0x14ce40: 0xc4807a5c  lwc1        $f0, 0x7A5C($a0)
    ctx->pc = 0x14ce40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 31324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ce44:
    // 0x14ce44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14ce44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_14ce48:
    // 0x14ce48: 0x8ca6bce4  lw          $a2, -0x431C($a1)
    ctx->pc = 0x14ce48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950116)));
label_14ce4c:
    // 0x14ce4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14ce50:
    // 0x14ce50: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x14ce50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_14ce54:
    // 0x14ce54: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x14ce54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_14ce58:
    // 0x14ce58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x14ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_14ce5c:
    // 0x14ce5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14ce5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14ce60:
    // 0x14ce60: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ce60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_14ce64:
    // 0x14ce64: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14ce64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14ce68:
    // 0x14ce68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ce68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ce6c:
    // 0x14ce6c: 0x0  nop
    ctx->pc = 0x14ce6cu;
    // NOP
label_14ce70:
    // 0x14ce70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14ce70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14ce74:
    // 0x14ce74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ce74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_14ce78:
    // 0x14ce78: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x14ce78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_14ce7c:
    // 0x14ce7c: 0x40f809  jalr        $v0
label_14ce80:
    if (ctx->pc == 0x14CE80u) {
        ctx->pc = 0x14CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE7Cu;
        // 0x14ce80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE84u;
        goto label_14ce84;
    }
    ctx->pc = 0x14CE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14CE84u);
        ctx->pc = 0x14CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE7Cu;
        // 0x14ce80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CE7Cu, 0x14CE84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CE84u;
label_14ce84:
    // 0x14ce84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14ce84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14ce88:
    // 0x14ce88: 0xc043cbc  jal         func_10F2F0
label_14ce8c:
    if (ctx->pc == 0x14CE8Cu) {
        ctx->pc = 0x14CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE88u;
        // 0x14ce8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE90u;
        goto label_14ce90;
    }
    ctx->pc = 0x14CE88u;
    SET_GPR_U32(ctx, 31, 0x14CE90u);
    ctx->pc = 0x14CE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE88u;
    // 0x14ce8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x14CE88u, 0x14CE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE90u;
label_14ce90:
    // 0x14ce90: 0x14500023  bne         $v0, $s0, . + 4 + (0x23 << 2)
label_14ce94:
    if (ctx->pc == 0x14CE94u) {
        ctx->pc = 0x14CE98u;
        goto label_14ce98;
    }
    ctx->pc = 0x14CE90u;
    {
        const bool branch_taken_0x14ce90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x14ce90) {
            ctx->pc = 0x14CF20u;
            goto label_14cf20;
        }
    }
    ctx->pc = 0x14CE98u;
label_14ce98:
    // 0x14ce98: 0x8ef10040  lw          $s1, 0x40($s7)
    ctx->pc = 0x14ce98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
label_14ce9c:
    // 0x14ce9c: 0xc043c9a  jal         func_10F268
label_14cea0:
    if (ctx->pc == 0x14CEA0u) {
        ctx->pc = 0x14CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE9Cu;
        // 0x14cea0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CEA4u;
        goto label_14cea4;
    }
    ctx->pc = 0x14CE9Cu;
    SET_GPR_U32(ctx, 31, 0x14CEA4u);
    ctx->pc = 0x14CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE9Cu;
    // 0x14cea0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F268u, 0x14CE9Cu, 0x14CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CEA4u;
label_14cea4:
    // 0x14cea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14cea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cea8:
    // 0x14cea8: 0xc043c96  jal         func_10F258
label_14ceac:
    if (ctx->pc == 0x14CEACu) {
        ctx->pc = 0x14CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEA8u;
        // 0x14ceac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CEB0u;
        goto label_14ceb0;
    }
    ctx->pc = 0x14CEA8u;
    SET_GPR_U32(ctx, 31, 0x14CEB0u);
    ctx->pc = 0x14CEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CEA8u;
    // 0x14ceac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F258u, 0x14CEA8u, 0x14CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CEB0u;
label_14ceb0:
    // 0x14ceb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ceb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14ceb4:
    // 0x14ceb4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14ceb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14ceb8:
    // 0x14ceb8: 0xc05406a  jal         func_1501A8
label_14cebc:
    if (ctx->pc == 0x14CEBCu) {
        ctx->pc = 0x14CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEB8u;
        // 0x14cebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CEC0u;
        goto label_14cec0;
    }
    ctx->pc = 0x14CEB8u;
    SET_GPR_U32(ctx, 31, 0x14CEC0u);
    ctx->pc = 0x14CEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CEB8u;
    // 0x14cebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501A8u, 0x14CEB8u, 0x14CEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CEC0u;
label_14cec0:
    // 0x14cec0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14cec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14cec4:
    // 0x14cec4: 0x8ef00040  lw          $s0, 0x40($s7)
    ctx->pc = 0x14cec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
label_14cec8:
    // 0x14cec8: 0xc043cb2  jal         func_10F2C8
label_14cecc:
    if (ctx->pc == 0x14CECCu) {
        ctx->pc = 0x14CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEC8u;
        // 0x14cecc: 0x8ef1003c  lw          $s1, 0x3C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CED0u;
        goto label_14ced0;
    }
    ctx->pc = 0x14CEC8u;
    SET_GPR_U32(ctx, 31, 0x14CED0u);
    ctx->pc = 0x14CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CEC8u;
    // 0x14cecc: 0x8ef1003c  lw          $s1, 0x3C($s7) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2C8u, 0x14CEC8u, 0x14CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CED0u;
label_14ced0:
    // 0x14ced0: 0x8ee300e4  lw          $v1, 0xE4($s7)
    ctx->pc = 0x14ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 228)));
label_14ced4:
    // 0x14ced4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ced4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14ced8:
    // 0x14ced8: 0x8eeb00e0  lw          $t3, 0xE0($s7)
    ctx->pc = 0x14ced8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 224)));
label_14cedc:
    // 0x14cedc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14cedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14cee0:
    // 0x14cee0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14cee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14cee4:
    // 0x14cee4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_14cee8:
    // 0x14cee8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14cee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14ceec:
    // 0x14ceec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x14ceecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14cef0:
    // 0x14cef0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x14cef0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14cef4:
    // 0x14cef4: 0xc05378a  jal         func_14DE28
label_14cef8:
    if (ctx->pc == 0x14CEF8u) {
        ctx->pc = 0x14CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEF4u;
        // 0x14cef8: 0x384a0001  xori        $t2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CEFCu;
        goto label_14cefc;
    }
    ctx->pc = 0x14CEF4u;
    SET_GPR_U32(ctx, 31, 0x14CEFCu);
    ctx->pc = 0x14CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CEF4u;
    // 0x14cef8: 0x384a0001  xori        $t2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE28u, 0x14CEF4u, 0x14CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CEFCu;
label_14cefc:
    // 0x14cefc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_14cf00:
    // 0x14cf00: 0x92e600ec  lbu         $a2, 0xEC($s7)
    ctx->pc = 0x14cf00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 236)));
label_14cf04:
    // 0x14cf04: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x14cf04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_14cf08:
    // 0x14cf08: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x14cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_14cf0c:
    // 0x14cf0c: 0x8ee5003c  lw          $a1, 0x3C($s7)
    ctx->pc = 0x14cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
label_14cf10:
    // 0x14cf10: 0x40f809  jalr        $v0
label_14cf14:
    if (ctx->pc == 0x14CF14u) {
        ctx->pc = 0x14CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF10u;
        // 0x14cf14: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF18u;
        goto label_14cf18;
    }
    ctx->pc = 0x14CF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14CF18u);
        ctx->pc = 0x14CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF10u;
        // 0x14cf14: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF10u, 0x14CF18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CF18u;
label_14cf18:
    // 0x14cf18: 0x10000024  b           . + 4 + (0x24 << 2)
label_14cf1c:
    if (ctx->pc == 0x14CF1Cu) {
        ctx->pc = 0x14CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF18u;
        // 0x14cf1c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF20u;
        goto label_14cf20;
    }
    ctx->pc = 0x14CF18u;
    {
        const bool branch_taken_0x14cf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF18u;
        // 0x14cf1c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf18) {
            ctx->pc = 0x14CFACu;
            goto label_14cfac;
        }
    }
    ctx->pc = 0x14CF20u;
label_14cf20:
    // 0x14cf20: 0xc043cb2  jal         func_10F2C8
label_14cf24:
    if (ctx->pc == 0x14CF24u) {
        ctx->pc = 0x14CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF20u;
        // 0x14cf24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF28u;
        goto label_14cf28;
    }
    ctx->pc = 0x14CF20u;
    SET_GPR_U32(ctx, 31, 0x14CF28u);
    ctx->pc = 0x14CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF20u;
    // 0x14cf24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2C8u, 0x14CF20u, 0x14CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF28u;
label_14cf28:
    // 0x14cf28: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_14cf2c:
    if (ctx->pc == 0x14CF2Cu) {
        ctx->pc = 0x14CF30u;
        goto label_14cf30;
    }
    ctx->pc = 0x14CF28u;
    {
        const bool branch_taken_0x14cf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf28) {
            ctx->pc = 0x14CF74u;
            goto label_14cf74;
        }
    }
    ctx->pc = 0x14CF30u;
label_14cf30:
    // 0x14cf30: 0xc043c20  jal         func_10F080
label_14cf34:
    if (ctx->pc == 0x14CF34u) {
        ctx->pc = 0x14CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF30u;
        // 0x14cf34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF38u;
        goto label_14cf38;
    }
    ctx->pc = 0x14CF30u;
    SET_GPR_U32(ctx, 31, 0x14CF38u);
    ctx->pc = 0x14CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF30u;
    // 0x14cf34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x14CF30u, 0x14CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF38u;
label_14cf38:
    // 0x14cf38: 0x8ee5003c  lw          $a1, 0x3C($s7)
    ctx->pc = 0x14cf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
label_14cf3c:
    // 0x14cf3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cf40:
    // 0x14cf40: 0x8ee900e0  lw          $t1, 0xE0($s7)
    ctx->pc = 0x14cf40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 224)));
label_14cf44:
    // 0x14cf44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14cf44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14cf48:
    // 0x14cf48: 0x8eea00e4  lw          $t2, 0xE4($s7)
    ctx->pc = 0x14cf48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 228)));
label_14cf4c:
    // 0x14cf4c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x14cf4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14cf50:
    // 0x14cf50: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x14cf50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14cf54:
    // 0x14cf54: 0xc05392c  jal         func_14E4B0
label_14cf58:
    if (ctx->pc == 0x14CF58u) {
        ctx->pc = 0x14CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF54u;
        // 0x14cf58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF5Cu;
        goto label_14cf5c;
    }
    ctx->pc = 0x14CF54u;
    SET_GPR_U32(ctx, 31, 0x14CF5Cu);
    ctx->pc = 0x14CF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF54u;
    // 0x14cf58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E4B0u, 0x14CF54u, 0x14CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF5Cu;
label_14cf5c:
    // 0x14cf5c: 0xc0543c6  jal         func_150F18
label_14cf60:
    if (ctx->pc == 0x14CF60u) {
        ctx->pc = 0x14CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF5Cu;
        // 0x14cf60: 0x8ee4003c  lw          $a0, 0x3C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF64u;
        goto label_14cf64;
    }
    ctx->pc = 0x14CF5Cu;
    SET_GPR_U32(ctx, 31, 0x14CF64u);
    ctx->pc = 0x14CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF5Cu;
    // 0x14cf60: 0x8ee4003c  lw          $a0, 0x3C($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F18u, 0x14CF5Cu, 0x14CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF64u;
label_14cf64:
    // 0x14cf64: 0x8ee3003c  lw          $v1, 0x3C($s7)
    ctx->pc = 0x14cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
label_14cf68:
    // 0x14cf68: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x14cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_14cf6c:
    // 0x14cf6c: 0x1000000e  b           . + 4 + (0xE << 2)
label_14cf70:
    if (ctx->pc == 0x14CF70u) {
        ctx->pc = 0x14CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF6Cu;
        // 0x14cf70: 0xa0600854  sb          $zero, 0x854($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF74u;
        goto label_14cf74;
    }
    ctx->pc = 0x14CF6Cu;
    {
        const bool branch_taken_0x14cf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF6Cu;
        // 0x14cf70: 0xa0600854  sb          $zero, 0x854($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf6c) {
            ctx->pc = 0x14CFA8u;
            goto label_14cfa8;
        }
    }
    ctx->pc = 0x14CF74u;
label_14cf74:
    // 0x14cf74: 0xc043c20  jal         func_10F080
label_14cf78:
    if (ctx->pc == 0x14CF78u) {
        ctx->pc = 0x14CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF74u;
        // 0x14cf78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF7Cu;
        goto label_14cf7c;
    }
    ctx->pc = 0x14CF74u;
    SET_GPR_U32(ctx, 31, 0x14CF7Cu);
    ctx->pc = 0x14CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF74u;
    // 0x14cf78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x14CF74u, 0x14CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF7Cu;
label_14cf7c:
    // 0x14cf7c: 0x8ee5003c  lw          $a1, 0x3C($s7)
    ctx->pc = 0x14cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
label_14cf80:
    // 0x14cf80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cf84:
    // 0x14cf84: 0x8ee900e0  lw          $t1, 0xE0($s7)
    ctx->pc = 0x14cf84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 224)));
label_14cf88:
    // 0x14cf88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14cf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14cf8c:
    // 0x14cf8c: 0x8eea00e4  lw          $t2, 0xE4($s7)
    ctx->pc = 0x14cf8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 228)));
label_14cf90:
    // 0x14cf90: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x14cf90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14cf94:
    // 0x14cf94: 0xc0538dc  jal         func_14E370
label_14cf98:
    if (ctx->pc == 0x14CF98u) {
        ctx->pc = 0x14CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF94u;
        // 0x14cf98: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF9Cu;
        goto label_14cf9c;
    }
    ctx->pc = 0x14CF94u;
    SET_GPR_U32(ctx, 31, 0x14CF9Cu);
    ctx->pc = 0x14CF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF94u;
    // 0x14cf98: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E370u, 0x14CF94u, 0x14CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF9Cu;
label_14cf9c:
    // 0x14cf9c: 0x8ee3003c  lw          $v1, 0x3C($s7)
    ctx->pc = 0x14cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
label_14cfa0:
    // 0x14cfa0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x14cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_14cfa4:
    // 0x14cfa4: 0xa0700854  sb          $s0, 0x854($v1)
    ctx->pc = 0x14cfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2132), (uint8_t)GPR_U32(ctx, 16));
label_14cfa8:
    // 0x14cfa8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x14cfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_14cfac:
    // 0x14cfac: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x14cfacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_14cfb0:
    // 0x14cfb0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x14cfb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_14cfb4:
    // 0x14cfb4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x14cfb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_14cfb8:
    // 0x14cfb8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x14cfb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14cfbc:
    // 0x14cfbc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14cfbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14cfc0:
    // 0x14cfc0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x14cfc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14cfc4:
    // 0x14cfc4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x14cfc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14cfc8:
    // 0x14cfc8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x14cfc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14cfcc:
    // 0x14cfcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14cfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14cfd0:
    // 0x14cfd0: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x14cfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14cfd4:
    // 0x14cfd4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x14cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14cfd8:
    // 0x14cfd8: 0x3e00008  jr          $ra
label_14cfdc:
    if (ctx->pc == 0x14CFDCu) {
        ctx->pc = 0x14CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFD8u;
        // 0x14cfdc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CFE0u;
        goto label_fallthrough_0x14cfd8;
    }
    ctx->pc = 0x14CFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFD8u;
        // 0x14cfdc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14cfd8:
    ctx->pc = 0x14CFE0u;
}
