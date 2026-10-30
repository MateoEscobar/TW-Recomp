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

// Function: sub_0038CB70
// Address: 0x38cb70 - 0x38d000
void sub_0038CB70_0x38cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CB70_0x38cb70");
#endif

    switch (ctx->pc) {
        case 0x38cb70u: goto label_38cb70;
        case 0x38cb74u: goto label_38cb74;
        case 0x38cb78u: goto label_38cb78;
        case 0x38cb7cu: goto label_38cb7c;
        case 0x38cb80u: goto label_38cb80;
        case 0x38cb84u: goto label_38cb84;
        case 0x38cb88u: goto label_38cb88;
        case 0x38cb8cu: goto label_38cb8c;
        case 0x38cb90u: goto label_38cb90;
        case 0x38cb94u: goto label_38cb94;
        case 0x38cb98u: goto label_38cb98;
        case 0x38cb9cu: goto label_38cb9c;
        case 0x38cba0u: goto label_38cba0;
        case 0x38cba4u: goto label_38cba4;
        case 0x38cba8u: goto label_38cba8;
        case 0x38cbacu: goto label_38cbac;
        case 0x38cbb0u: goto label_38cbb0;
        case 0x38cbb4u: goto label_38cbb4;
        case 0x38cbb8u: goto label_38cbb8;
        case 0x38cbbcu: goto label_38cbbc;
        case 0x38cbc0u: goto label_38cbc0;
        case 0x38cbc4u: goto label_38cbc4;
        case 0x38cbc8u: goto label_38cbc8;
        case 0x38cbccu: goto label_38cbcc;
        case 0x38cbd0u: goto label_38cbd0;
        case 0x38cbd4u: goto label_38cbd4;
        case 0x38cbd8u: goto label_38cbd8;
        case 0x38cbdcu: goto label_38cbdc;
        case 0x38cbe0u: goto label_38cbe0;
        case 0x38cbe4u: goto label_38cbe4;
        case 0x38cbe8u: goto label_38cbe8;
        case 0x38cbecu: goto label_38cbec;
        case 0x38cbf0u: goto label_38cbf0;
        case 0x38cbf4u: goto label_38cbf4;
        case 0x38cbf8u: goto label_38cbf8;
        case 0x38cbfcu: goto label_38cbfc;
        case 0x38cc00u: goto label_38cc00;
        case 0x38cc04u: goto label_38cc04;
        case 0x38cc08u: goto label_38cc08;
        case 0x38cc0cu: goto label_38cc0c;
        case 0x38cc10u: goto label_38cc10;
        case 0x38cc14u: goto label_38cc14;
        case 0x38cc18u: goto label_38cc18;
        case 0x38cc1cu: goto label_38cc1c;
        case 0x38cc20u: goto label_38cc20;
        case 0x38cc24u: goto label_38cc24;
        case 0x38cc28u: goto label_38cc28;
        case 0x38cc2cu: goto label_38cc2c;
        case 0x38cc30u: goto label_38cc30;
        case 0x38cc34u: goto label_38cc34;
        case 0x38cc38u: goto label_38cc38;
        case 0x38cc3cu: goto label_38cc3c;
        case 0x38cc40u: goto label_38cc40;
        case 0x38cc44u: goto label_38cc44;
        case 0x38cc48u: goto label_38cc48;
        case 0x38cc4cu: goto label_38cc4c;
        case 0x38cc50u: goto label_38cc50;
        case 0x38cc54u: goto label_38cc54;
        case 0x38cc58u: goto label_38cc58;
        case 0x38cc5cu: goto label_38cc5c;
        case 0x38cc60u: goto label_38cc60;
        case 0x38cc64u: goto label_38cc64;
        case 0x38cc68u: goto label_38cc68;
        case 0x38cc6cu: goto label_38cc6c;
        case 0x38cc70u: goto label_38cc70;
        case 0x38cc74u: goto label_38cc74;
        case 0x38cc78u: goto label_38cc78;
        case 0x38cc7cu: goto label_38cc7c;
        case 0x38cc80u: goto label_38cc80;
        case 0x38cc84u: goto label_38cc84;
        case 0x38cc88u: goto label_38cc88;
        case 0x38cc8cu: goto label_38cc8c;
        case 0x38cc90u: goto label_38cc90;
        case 0x38cc94u: goto label_38cc94;
        case 0x38cc98u: goto label_38cc98;
        case 0x38cc9cu: goto label_38cc9c;
        case 0x38cca0u: goto label_38cca0;
        case 0x38cca4u: goto label_38cca4;
        case 0x38cca8u: goto label_38cca8;
        case 0x38ccacu: goto label_38ccac;
        case 0x38ccb0u: goto label_38ccb0;
        case 0x38ccb4u: goto label_38ccb4;
        case 0x38ccb8u: goto label_38ccb8;
        case 0x38ccbcu: goto label_38ccbc;
        case 0x38ccc0u: goto label_38ccc0;
        case 0x38ccc4u: goto label_38ccc4;
        case 0x38ccc8u: goto label_38ccc8;
        case 0x38ccccu: goto label_38cccc;
        case 0x38ccd0u: goto label_38ccd0;
        case 0x38ccd4u: goto label_38ccd4;
        case 0x38ccd8u: goto label_38ccd8;
        case 0x38ccdcu: goto label_38ccdc;
        case 0x38cce0u: goto label_38cce0;
        case 0x38cce4u: goto label_38cce4;
        case 0x38cce8u: goto label_38cce8;
        case 0x38ccecu: goto label_38ccec;
        case 0x38ccf0u: goto label_38ccf0;
        case 0x38ccf4u: goto label_38ccf4;
        case 0x38ccf8u: goto label_38ccf8;
        case 0x38ccfcu: goto label_38ccfc;
        case 0x38cd00u: goto label_38cd00;
        case 0x38cd04u: goto label_38cd04;
        case 0x38cd08u: goto label_38cd08;
        case 0x38cd0cu: goto label_38cd0c;
        case 0x38cd10u: goto label_38cd10;
        case 0x38cd14u: goto label_38cd14;
        case 0x38cd18u: goto label_38cd18;
        case 0x38cd1cu: goto label_38cd1c;
        case 0x38cd20u: goto label_38cd20;
        case 0x38cd24u: goto label_38cd24;
        case 0x38cd28u: goto label_38cd28;
        case 0x38cd2cu: goto label_38cd2c;
        case 0x38cd30u: goto label_38cd30;
        case 0x38cd34u: goto label_38cd34;
        case 0x38cd38u: goto label_38cd38;
        case 0x38cd3cu: goto label_38cd3c;
        case 0x38cd40u: goto label_38cd40;
        case 0x38cd44u: goto label_38cd44;
        case 0x38cd48u: goto label_38cd48;
        case 0x38cd4cu: goto label_38cd4c;
        case 0x38cd50u: goto label_38cd50;
        case 0x38cd54u: goto label_38cd54;
        case 0x38cd58u: goto label_38cd58;
        case 0x38cd5cu: goto label_38cd5c;
        case 0x38cd60u: goto label_38cd60;
        case 0x38cd64u: goto label_38cd64;
        case 0x38cd68u: goto label_38cd68;
        case 0x38cd6cu: goto label_38cd6c;
        case 0x38cd70u: goto label_38cd70;
        case 0x38cd74u: goto label_38cd74;
        case 0x38cd78u: goto label_38cd78;
        case 0x38cd7cu: goto label_38cd7c;
        case 0x38cd80u: goto label_38cd80;
        case 0x38cd84u: goto label_38cd84;
        case 0x38cd88u: goto label_38cd88;
        case 0x38cd8cu: goto label_38cd8c;
        case 0x38cd90u: goto label_38cd90;
        case 0x38cd94u: goto label_38cd94;
        case 0x38cd98u: goto label_38cd98;
        case 0x38cd9cu: goto label_38cd9c;
        case 0x38cda0u: goto label_38cda0;
        case 0x38cda4u: goto label_38cda4;
        case 0x38cda8u: goto label_38cda8;
        case 0x38cdacu: goto label_38cdac;
        case 0x38cdb0u: goto label_38cdb0;
        case 0x38cdb4u: goto label_38cdb4;
        case 0x38cdb8u: goto label_38cdb8;
        case 0x38cdbcu: goto label_38cdbc;
        case 0x38cdc0u: goto label_38cdc0;
        case 0x38cdc4u: goto label_38cdc4;
        case 0x38cdc8u: goto label_38cdc8;
        case 0x38cdccu: goto label_38cdcc;
        case 0x38cdd0u: goto label_38cdd0;
        case 0x38cdd4u: goto label_38cdd4;
        case 0x38cdd8u: goto label_38cdd8;
        case 0x38cddcu: goto label_38cddc;
        case 0x38cde0u: goto label_38cde0;
        case 0x38cde4u: goto label_38cde4;
        case 0x38cde8u: goto label_38cde8;
        case 0x38cdecu: goto label_38cdec;
        case 0x38cdf0u: goto label_38cdf0;
        case 0x38cdf4u: goto label_38cdf4;
        case 0x38cdf8u: goto label_38cdf8;
        case 0x38cdfcu: goto label_38cdfc;
        case 0x38ce00u: goto label_38ce00;
        case 0x38ce04u: goto label_38ce04;
        case 0x38ce08u: goto label_38ce08;
        case 0x38ce0cu: goto label_38ce0c;
        case 0x38ce10u: goto label_38ce10;
        case 0x38ce14u: goto label_38ce14;
        case 0x38ce18u: goto label_38ce18;
        case 0x38ce1cu: goto label_38ce1c;
        case 0x38ce20u: goto label_38ce20;
        case 0x38ce24u: goto label_38ce24;
        case 0x38ce28u: goto label_38ce28;
        case 0x38ce2cu: goto label_38ce2c;
        case 0x38ce30u: goto label_38ce30;
        case 0x38ce34u: goto label_38ce34;
        case 0x38ce38u: goto label_38ce38;
        case 0x38ce3cu: goto label_38ce3c;
        case 0x38ce40u: goto label_38ce40;
        case 0x38ce44u: goto label_38ce44;
        case 0x38ce48u: goto label_38ce48;
        case 0x38ce4cu: goto label_38ce4c;
        case 0x38ce50u: goto label_38ce50;
        case 0x38ce54u: goto label_38ce54;
        case 0x38ce58u: goto label_38ce58;
        case 0x38ce5cu: goto label_38ce5c;
        case 0x38ce60u: goto label_38ce60;
        case 0x38ce64u: goto label_38ce64;
        case 0x38ce68u: goto label_38ce68;
        case 0x38ce6cu: goto label_38ce6c;
        case 0x38ce70u: goto label_38ce70;
        case 0x38ce74u: goto label_38ce74;
        case 0x38ce78u: goto label_38ce78;
        case 0x38ce7cu: goto label_38ce7c;
        case 0x38ce80u: goto label_38ce80;
        case 0x38ce84u: goto label_38ce84;
        case 0x38ce88u: goto label_38ce88;
        case 0x38ce8cu: goto label_38ce8c;
        case 0x38ce90u: goto label_38ce90;
        case 0x38ce94u: goto label_38ce94;
        case 0x38ce98u: goto label_38ce98;
        case 0x38ce9cu: goto label_38ce9c;
        case 0x38cea0u: goto label_38cea0;
        case 0x38cea4u: goto label_38cea4;
        case 0x38cea8u: goto label_38cea8;
        case 0x38ceacu: goto label_38ceac;
        case 0x38ceb0u: goto label_38ceb0;
        case 0x38ceb4u: goto label_38ceb4;
        case 0x38ceb8u: goto label_38ceb8;
        case 0x38cebcu: goto label_38cebc;
        case 0x38cec0u: goto label_38cec0;
        case 0x38cec4u: goto label_38cec4;
        case 0x38cec8u: goto label_38cec8;
        case 0x38ceccu: goto label_38cecc;
        case 0x38ced0u: goto label_38ced0;
        case 0x38ced4u: goto label_38ced4;
        case 0x38ced8u: goto label_38ced8;
        case 0x38cedcu: goto label_38cedc;
        case 0x38cee0u: goto label_38cee0;
        case 0x38cee4u: goto label_38cee4;
        case 0x38cee8u: goto label_38cee8;
        case 0x38ceecu: goto label_38ceec;
        case 0x38cef0u: goto label_38cef0;
        case 0x38cef4u: goto label_38cef4;
        case 0x38cef8u: goto label_38cef8;
        case 0x38cefcu: goto label_38cefc;
        case 0x38cf00u: goto label_38cf00;
        case 0x38cf04u: goto label_38cf04;
        case 0x38cf08u: goto label_38cf08;
        case 0x38cf0cu: goto label_38cf0c;
        case 0x38cf10u: goto label_38cf10;
        case 0x38cf14u: goto label_38cf14;
        case 0x38cf18u: goto label_38cf18;
        case 0x38cf1cu: goto label_38cf1c;
        case 0x38cf20u: goto label_38cf20;
        case 0x38cf24u: goto label_38cf24;
        case 0x38cf28u: goto label_38cf28;
        case 0x38cf2cu: goto label_38cf2c;
        case 0x38cf30u: goto label_38cf30;
        case 0x38cf34u: goto label_38cf34;
        case 0x38cf38u: goto label_38cf38;
        case 0x38cf3cu: goto label_38cf3c;
        case 0x38cf40u: goto label_38cf40;
        case 0x38cf44u: goto label_38cf44;
        case 0x38cf48u: goto label_38cf48;
        case 0x38cf4cu: goto label_38cf4c;
        case 0x38cf50u: goto label_38cf50;
        case 0x38cf54u: goto label_38cf54;
        case 0x38cf58u: goto label_38cf58;
        case 0x38cf5cu: goto label_38cf5c;
        case 0x38cf60u: goto label_38cf60;
        case 0x38cf64u: goto label_38cf64;
        case 0x38cf68u: goto label_38cf68;
        case 0x38cf6cu: goto label_38cf6c;
        case 0x38cf70u: goto label_38cf70;
        case 0x38cf74u: goto label_38cf74;
        case 0x38cf78u: goto label_38cf78;
        case 0x38cf7cu: goto label_38cf7c;
        case 0x38cf80u: goto label_38cf80;
        case 0x38cf84u: goto label_38cf84;
        case 0x38cf88u: goto label_38cf88;
        case 0x38cf8cu: goto label_38cf8c;
        case 0x38cf90u: goto label_38cf90;
        case 0x38cf94u: goto label_38cf94;
        case 0x38cf98u: goto label_38cf98;
        case 0x38cf9cu: goto label_38cf9c;
        case 0x38cfa0u: goto label_38cfa0;
        case 0x38cfa4u: goto label_38cfa4;
        case 0x38cfa8u: goto label_38cfa8;
        case 0x38cfacu: goto label_38cfac;
        case 0x38cfb0u: goto label_38cfb0;
        case 0x38cfb4u: goto label_38cfb4;
        case 0x38cfb8u: goto label_38cfb8;
        case 0x38cfbcu: goto label_38cfbc;
        case 0x38cfc0u: goto label_38cfc0;
        case 0x38cfc4u: goto label_38cfc4;
        case 0x38cfc8u: goto label_38cfc8;
        case 0x38cfccu: goto label_38cfcc;
        case 0x38cfd0u: goto label_38cfd0;
        case 0x38cfd4u: goto label_38cfd4;
        case 0x38cfd8u: goto label_38cfd8;
        case 0x38cfdcu: goto label_38cfdc;
        case 0x38cfe0u: goto label_38cfe0;
        case 0x38cfe4u: goto label_38cfe4;
        case 0x38cfe8u: goto label_38cfe8;
        case 0x38cfecu: goto label_38cfec;
        case 0x38cff0u: goto label_38cff0;
        case 0x38cff4u: goto label_38cff4;
        case 0x38cff8u: goto label_38cff8;
        case 0x38cffcu: goto label_38cffc;
        default: break;
    }

    ctx->pc = 0x38cb70u;

label_38cb70:
    // 0x38cb70: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x38cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_38cb74:
    // 0x38cb74: 0x7fb10290  sq          $s1, 0x290($sp)
    ctx->pc = 0x38cb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 17));
label_38cb78:
    // 0x38cb78: 0x7fb20280  sq          $s2, 0x280($sp)
    ctx->pc = 0x38cb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 18));
label_38cb7c:
    // 0x38cb7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38cb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38cb80:
    // 0x38cb80: 0x7fb30270  sq          $s3, 0x270($sp)
    ctx->pc = 0x38cb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 19));
label_38cb84:
    // 0x38cb84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38cb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38cb88:
    // 0x38cb88: 0x7fbe0220  sq          $fp, 0x220($sp)
    ctx->pc = 0x38cb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 30));
label_38cb8c:
    // 0x38cb8c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38cb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38cb90:
    // 0x38cb90: 0x7fb002a0  sq          $s0, 0x2A0($sp)
    ctx->pc = 0x38cb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 16));
label_38cb94:
    // 0x38cb94: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x38cb94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38cb98:
    // 0x38cb98: 0x7fb40260  sq          $s4, 0x260($sp)
    ctx->pc = 0x38cb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 20));
label_38cb9c:
    // 0x38cb9c: 0x7fb50250  sq          $s5, 0x250($sp)
    ctx->pc = 0x38cb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 21));
label_38cba0:
    // 0x38cba0: 0x7fb60240  sq          $s6, 0x240($sp)
    ctx->pc = 0x38cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 22));
label_38cba4:
    // 0x38cba4: 0x7fb70230  sq          $s7, 0x230($sp)
    ctx->pc = 0x38cba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 23));
label_38cba8:
    // 0x38cba8: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x38cba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
label_38cbac:
    // 0x38cbac: 0xe7b502b8  swc1        $f21, 0x2B8($sp)
    ctx->pc = 0x38cbacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_38cbb0:
    // 0x38cbb0: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
label_38cbb4:
    if (ctx->pc == 0x38CBB4u) {
        ctx->pc = 0x38CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBB0u;
        // 0x38cbb4: 0xe7b402b0  swc1        $f20, 0x2B0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CBB8u;
        goto label_38cbb8;
    }
    ctx->pc = 0x38CBB0u;
    {
        const bool branch_taken_0x38cbb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBB0u;
        // 0x38cbb4: 0xe7b402b0  swc1        $f20, 0x2B0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cbb0) {
            ctx->pc = 0x38CBE8u;
            goto label_38cbe8;
        }
    }
    ctx->pc = 0x38CBB8u;
label_38cbb8:
    // 0x38cbb8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x38cbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_38cbbc:
    // 0x38cbbc: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x38cbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
label_38cbc0:
    // 0x38cbc0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x38cbc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_38cbc4:
    // 0x38cbc4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38cbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38cbc8:
    // 0x38cbc8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x38cbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_38cbcc:
    // 0x38cbcc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_38cbd0:
    if (ctx->pc == 0x38CBD0u) {
        ctx->pc = 0x38CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBCCu;
        // 0x38cbd0: 0x8e441300  lw          $a0, 0x1300($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CBD4u;
        goto label_38cbd4;
    }
    ctx->pc = 0x38CBCCu;
    {
        const bool branch_taken_0x38cbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBCCu;
        // 0x38cbd0: 0x8e441300  lw          $a0, 0x1300($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cbcc) {
            ctx->pc = 0x38CC10u;
            goto label_38cc10;
        }
    }
    ctx->pc = 0x38CBD4u;
label_38cbd4:
    // 0x38cbd4: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x38cbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_38cbd8:
    // 0x38cbd8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x38cbd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_38cbdc:
    // 0x38cbdc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38cbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38cbe0:
    // 0x38cbe0: 0x1000000c  b           . + 4 + (0xC << 2)
label_38cbe4:
    if (ctx->pc == 0x38CBE4u) {
        ctx->pc = 0x38CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBE0u;
        // 0x38cbe4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CBE8u;
        goto label_38cbe8;
    }
    ctx->pc = 0x38CBE0u;
    {
        const bool branch_taken_0x38cbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBE0u;
        // 0x38cbe4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cbe0) {
            ctx->pc = 0x38CC14u;
            goto label_38cc14;
        }
    }
    ctx->pc = 0x38CBE8u;
label_38cbe8:
    // 0x38cbe8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x38cbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_38cbec:
    // 0x38cbec: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x38cbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_38cbf0:
    // 0x38cbf0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x38cbf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_38cbf4:
    // 0x38cbf4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38cbf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38cbf8:
    // 0x38cbf8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x38cbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_38cbfc:
    // 0x38cbfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38cc00:
    if (ctx->pc == 0x38CC00u) {
        ctx->pc = 0x38CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBFCu;
        // 0x38cc00: 0x8e441300  lw          $a0, 0x1300($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC04u;
        goto label_38cc04;
    }
    ctx->pc = 0x38CBFCu;
    {
        const bool branch_taken_0x38cbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBFCu;
        // 0x38cc00: 0x8e441300  lw          $a0, 0x1300($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cbfc) {
            ctx->pc = 0x38CC10u;
            goto label_38cc10;
        }
    }
    ctx->pc = 0x38CC04u;
label_38cc04:
    // 0x38cc04: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x38cc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
label_38cc08:
    // 0x38cc08: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x38cc08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_38cc0c:
    // 0x38cc0c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38cc0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38cc10:
    // 0x38cc10: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x38cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38cc14:
    // 0x38cc14: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x38cc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_38cc18:
    // 0x38cc18: 0xc05c9f2  jal         func_1727C8
label_38cc1c:
    if (ctx->pc == 0x38CC1Cu) {
        ctx->pc = 0x38CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC18u;
        // 0x38cc1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC20u;
        goto label_38cc20;
    }
    ctx->pc = 0x38CC18u;
    SET_GPR_U32(ctx, 31, 0x38CC20u);
    ctx->pc = 0x38CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC18u;
    // 0x38cc1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1727C8u, 0x38CC18u, 0x38CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC20u;
label_38cc20:
    // 0x38cc20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38cc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_38cc24:
    // 0x38cc24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x38cc24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38cc28:
    // 0x38cc28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38cc2c:
    // 0x38cc2c: 0x92300003  lbu         $s0, 0x3($s1)
    ctx->pc = 0x38cc2cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_38cc30:
    // 0x38cc30: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x38cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
label_38cc34:
    // 0x38cc34: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x38cc34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_38cc38:
    // 0x38cc38: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x38cc38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_38cc3c:
    // 0x38cc3c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x38cc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_38cc40:
    // 0x38cc40: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x38cc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_38cc44:
    // 0x38cc44: 0xc12e310  jal         func_4B8C40
label_38cc48:
    if (ctx->pc == 0x38CC48u) {
        ctx->pc = 0x38CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC44u;
        // 0x38cc48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC4Cu;
        goto label_38cc4c;
    }
    ctx->pc = 0x38CC44u;
    SET_GPR_U32(ctx, 31, 0x38CC4Cu);
    ctx->pc = 0x38CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC44u;
    // 0x38cc48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x38CC44u, 0x38CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC4Cu;
label_38cc4c:
    // 0x38cc4c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x38cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38cc50:
    // 0x38cc50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38cc50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_38cc54:
    // 0x38cc54: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x38cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38cc58:
    // 0x38cc58: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x38cc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38cc5c:
    // 0x38cc5c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x38cc5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_38cc60:
    // 0x38cc60: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x38cc60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_38cc64:
    // 0x38cc64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38cc64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38cc68:
    // 0x38cc68: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x38cc68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_38cc6c:
    // 0x38cc6c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x38cc6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_38cc70:
    // 0x38cc70: 0xc12e29c  jal         func_4B8A70
label_38cc74:
    if (ctx->pc == 0x38CC74u) {
        ctx->pc = 0x38CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC70u;
        // 0x38cc74: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC78u;
        goto label_38cc78;
    }
    ctx->pc = 0x38CC70u;
    SET_GPR_U32(ctx, 31, 0x38CC78u);
    ctx->pc = 0x38CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC70u;
    // 0x38cc74: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x38CC70u, 0x38CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC78u;
label_38cc78:
    // 0x38cc78: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x38cc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_38cc7c:
    // 0x38cc7c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x38cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_38cc80:
    // 0x38cc80: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x38cc80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_38cc84:
    // 0x38cc84: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x38cc84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38cc88:
    // 0x38cc88: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38cc88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38cc8c:
    // 0x38cc8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38cc8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38cc90:
    // 0x38cc90: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x38cc90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38cc94:
    // 0x38cc94: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38cc94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38cc98:
    // 0x38cc98: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38cc98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38cc9c:
    // 0x38cc9c: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x38cc9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38cca0:
    // 0x38cca0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x38cca0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_38cca4:
    // 0x38cca4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38cca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38cca8:
    // 0x38cca8: 0x0  nop
    ctx->pc = 0x38cca8u;
    // NOP
label_38ccac:
    // 0x38ccac: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x38ccacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38ccb0:
    // 0x38ccb0: 0x0  nop
    ctx->pc = 0x38ccb0u;
    // NOP
label_38ccb4:
    // 0x38ccb4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_38ccb8:
    if (ctx->pc == 0x38CCB8u) {
        ctx->pc = 0x38CCBCu;
        goto label_38ccbc;
    }
    ctx->pc = 0x38CCB4u;
    {
        const bool branch_taken_0x38ccb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38ccb4) {
            ctx->pc = 0x38CCDCu;
            goto label_38ccdc;
        }
    }
    ctx->pc = 0x38CCBCu;
label_38ccbc:
    // 0x38ccbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38ccbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38ccc0:
    // 0x38ccc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38ccc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ccc4:
    // 0x38ccc4: 0x0  nop
    ctx->pc = 0x38ccc4u;
    // NOP
label_38ccc8:
    // 0x38ccc8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x38ccc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_38cccc:
    // 0x38cccc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x38ccccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_38ccd0:
    // 0x38ccd0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x38ccd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_38ccd4:
    // 0x38ccd4: 0x1000000d  b           . + 4 + (0xD << 2)
label_38ccd8:
    if (ctx->pc == 0x38CCD8u) {
        ctx->pc = 0x38CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCD4u;
        // 0x38ccd8: 0xe7a20044  swc1        $f2, 0x44($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CCDCu;
        goto label_38ccdc;
    }
    ctx->pc = 0x38CCD4u;
    {
        const bool branch_taken_0x38ccd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCD4u;
        // 0x38ccd8: 0xe7a20044  swc1        $f2, 0x44($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ccd4) {
            ctx->pc = 0x38CD0Cu;
            goto label_38cd0c;
        }
    }
    ctx->pc = 0x38CCDCu;
label_38ccdc:
    // 0x38ccdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38ccdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38cce0:
    // 0x38cce0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38cce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cce4:
    // 0x38cce4: 0x0  nop
    ctx->pc = 0x38cce4u;
    // NOP
label_38cce8:
    // 0x38cce8: 0x0  nop
    ctx->pc = 0x38cce8u;
    // NOP
label_38ccec:
    // 0x38ccec: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x38ccecu;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[1]);
label_38ccf0:
    // 0x38ccf0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x38ccf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_38ccf4:
    // 0x38ccf4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38ccf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38ccf8:
    // 0x38ccf8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38ccf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38ccfc:
    // 0x38ccfc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x38ccfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38cd00:
    // 0x38cd00: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38cd00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_38cd04:
    // 0x38cd04: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x38cd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_38cd08:
    // 0x38cd08: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x38cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_38cd0c:
    // 0x38cd0c: 0xc0cd940  jal         func_336500
label_38cd10:
    if (ctx->pc == 0x38CD10u) {
        ctx->pc = 0x38CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD0Cu;
        // 0x38cd10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD14u;
        goto label_38cd14;
    }
    ctx->pc = 0x38CD0Cu;
    SET_GPR_U32(ctx, 31, 0x38CD14u);
    ctx->pc = 0x38CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CD0Cu;
    // 0x38cd10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x38CD0Cu, 0x38CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CD14u;
label_38cd14:
    // 0x38cd14: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x38cd14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_38cd18:
    // 0x38cd18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_38cd1c:
    // 0x38cd1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38cd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_38cd20:
    // 0x38cd20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38cd20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38cd24:
    // 0x38cd24: 0x244716c0  addiu       $a3, $v0, 0x16C0
    ctx->pc = 0x38cd24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_38cd28:
    // 0x38cd28: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x38cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
label_38cd2c:
    // 0x38cd2c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x38cd2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38cd30:
    // 0x38cd30: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x38cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_38cd34:
    // 0x38cd34: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x38cd34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_38cd38:
    // 0x38cd38: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x38cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_38cd3c:
    // 0x38cd3c: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x38cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_38cd40:
    // 0x38cd40: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x38cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38cd44:
    // 0x38cd44: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x38cd44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38cd48:
    // 0x38cd48: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x38cd48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_38cd4c:
    // 0x38cd4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x38cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_38cd50:
    // 0x38cd50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38cd50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38cd54:
    // 0x38cd54: 0x7fa60110  sq          $a2, 0x110($sp)
    ctx->pc = 0x38cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 6));
label_38cd58:
    // 0x38cd58: 0x30a50040  andi        $a1, $a1, 0x40
    ctx->pc = 0x38cd58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_38cd5c:
    // 0x38cd5c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_38cd60:
    if (ctx->pc == 0x38CD60u) {
        ctx->pc = 0x38CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD5Cu;
        // 0x38cd60: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD64u;
        goto label_38cd64;
    }
    ctx->pc = 0x38CD5Cu;
    {
        const bool branch_taken_0x38cd5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD5Cu;
        // 0x38cd60: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cd5c) {
            ctx->pc = 0x38CD8Cu;
            goto label_38cd8c;
        }
    }
    ctx->pc = 0x38CD64u;
label_38cd64:
    // 0x38cd64: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x38cd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_38cd68:
    // 0x38cd68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38cd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cd6c:
    // 0x38cd6c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x38cd6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_38cd70:
    // 0x38cd70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x38cd70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_38cd74:
    // 0x38cd74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38cd74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38cd78:
    // 0x38cd78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38cd78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38cd7c:
    // 0x38cd7c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38cd7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38cd80:
    // 0x38cd80: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38cd80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_38cd84:
    // 0x38cd84: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x38cd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_38cd88:
    // 0x38cd88: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x38cd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_38cd8c:
    // 0x38cd8c: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x38cd8cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_38cd90:
    // 0x38cd90: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x38cd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_38cd94:
    // 0x38cd94: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x38cd94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_38cd98:
    // 0x38cd98: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x38cd98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_38cd9c:
    // 0x38cd9c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x38cd9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_38cda0:
    // 0x38cda0: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x38cda0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_38cda4:
    // 0x38cda4: 0x7fa40120  sq          $a0, 0x120($sp)
    ctx->pc = 0x38cda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 4));
label_38cda8:
    // 0x38cda8: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x38cda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_38cdac:
    // 0x38cdac: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x38cdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
label_38cdb0:
    // 0x38cdb0: 0x7fa50150  sq          $a1, 0x150($sp)
    ctx->pc = 0x38cdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 5));
label_38cdb4:
    // 0x38cdb4: 0xd9250000  lqc2        $vf5, 0x0($t1)
    ctx->pc = 0x38cdb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_38cdb8:
    // 0x38cdb8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x38cdb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_38cdbc:
    // 0x38cdbc: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x38cdbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_38cdc0:
    // 0x38cdc0: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x38cdc0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_38cdc4:
    // 0x38cdc4: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x38cdc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_38cdc8:
    // 0x38cdc8: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x38cdc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_38cdcc:
    // 0x38cdcc: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x38cdccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_38cdd0:
    // 0x38cdd0: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x38cdd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_38cdd4:
    // 0x38cdd4: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x38cdd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38cdd8:
    // 0x38cdd8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x38cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_38cddc:
    // 0x38cddc: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x38cddcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_38cde0:
    // 0x38cde0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x38cde0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38cde4:
    // 0x38cde4: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x38cde4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_38cde8:
    // 0x38cde8: 0x27b10160  addiu       $s1, $sp, 0x160
    ctx->pc = 0x38cde8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_38cdec:
    // 0x38cdec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38cdecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38cdf0:
    // 0x38cdf0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38cdf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38cdf4:
    // 0x38cdf4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38cdf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38cdf8:
    // 0x38cdf8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38cdf8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38cdfc:
    // 0x38cdfc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38cdfcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38ce00:
    // 0x38ce00: 0x7fa30160  sq          $v1, 0x160($sp)
    ctx->pc = 0x38ce00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 3));
label_38ce04:
    // 0x38ce04: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x38ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_38ce08:
    // 0x38ce08: 0x27b501e0  addiu       $s5, $sp, 0x1E0
    ctx->pc = 0x38ce08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_38ce0c:
    // 0x38ce0c: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x38ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_38ce10:
    // 0x38ce10: 0x27b601f0  addiu       $s6, $sp, 0x1F0
    ctx->pc = 0x38ce10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_38ce14:
    // 0x38ce14: 0x27b001a0  addiu       $s0, $sp, 0x1A0
    ctx->pc = 0x38ce14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_38ce18:
    // 0x38ce18: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x38ce18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38ce1c:
    // 0x38ce1c: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x38ce1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38ce20:
    // 0x38ce20: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x38ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_38ce24:
    // 0x38ce24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38ce24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38ce28:
    // 0x38ce28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38ce2c:
    // 0x38ce2c: 0x0  nop
    ctx->pc = 0x38ce2cu;
    // NOP
label_38ce30:
    // 0x38ce30: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x38ce30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_38ce34:
    // 0x38ce34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38ce38:
    // 0x38ce38: 0xdba500d0  lqc2        $vf5, 0xD0($sp)
    ctx->pc = 0x38ce38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_38ce3c:
    // 0x38ce3c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x38ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_38ce40:
    // 0x38ce40: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x38ce40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_38ce44:
    // 0x38ce44: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x38ce44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_38ce48:
    // 0x38ce48: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x38ce48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_38ce4c:
    // 0x38ce4c: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x38ce4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_38ce50:
    // 0x38ce50: 0x4be320bd  vmadday.xyzw $ACC, $vf4, $vf3y
    ctx->pc = 0x38ce50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_38ce54:
    // 0x38ce54: 0x4be310be  vmaddaz.xyzw $ACC, $vf2, $vf3z
    ctx->pc = 0x38ce54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_38ce58:
    // 0x38ce58: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x38ce58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38ce5c:
    // 0x38ce5c: 0xfba30200  sqc2        $vf3, 0x200($sp)
    ctx->pc = 0x38ce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[3]));
label_38ce60:
    // 0x38ce60: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x38ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_38ce64:
    // 0x38ce64: 0x461fff2  bgez        $v1, . + 4 + (-0xE << 2)
label_38ce68:
    if (ctx->pc == 0x38CE68u) {
        ctx->pc = 0x38CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE64u;
        // 0x38ce68: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CE6Cu;
        goto label_38ce6c;
    }
    ctx->pc = 0x38CE64u;
    {
        const bool branch_taken_0x38ce64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x38CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE64u;
        // 0x38ce68: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce64) {
            ctx->pc = 0x38CE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ce30;
        }
    }
    ctx->pc = 0x38CE6Cu;
label_38ce6c:
    // 0x38ce6c: 0x254316c0  addiu       $v1, $t2, 0x16C0
    ctx->pc = 0x38ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 5824));
label_38ce70:
    // 0x38ce70: 0x7ba401c0  lq          $a0, 0x1C0($sp)
    ctx->pc = 0x38ce70u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_38ce74:
    // 0x38ce74: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x38ce74u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_38ce78:
    // 0x38ce78: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x38ce78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_38ce7c:
    // 0x38ce7c: 0x7ba301e0  lq          $v1, 0x1E0($sp)
    ctx->pc = 0x38ce7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_38ce80:
    // 0x38ce80: 0x7ba501f0  lq          $a1, 0x1F0($sp)
    ctx->pc = 0x38ce80u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_38ce84:
    // 0x38ce84: 0x7fa40120  sq          $a0, 0x120($sp)
    ctx->pc = 0x38ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 4));
label_38ce88:
    // 0x38ce88: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x38ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
label_38ce8c:
    // 0x38ce8c: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x38ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_38ce90:
    // 0x38ce90: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x38ce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
label_38ce94:
    // 0x38ce94: 0x7fa60150  sq          $a2, 0x150($sp)
    ctx->pc = 0x38ce94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 6));
label_38ce98:
    // 0x38ce98: 0x7fa40180  sq          $a0, 0x180($sp)
    ctx->pc = 0x38ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 4));
label_38ce9c:
    // 0x38ce9c: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x38ce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_38cea0:
    // 0x38cea0: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x38cea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
label_38cea4:
    // 0x38cea4: 0x7fa501b0  sq          $a1, 0x1B0($sp)
    ctx->pc = 0x38cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 5));
label_38cea8:
    // 0x38cea8: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x38cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
label_38ceac:
    // 0x38ceac: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x38ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_38ceb0:
    // 0x38ceb0: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x38ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_38ceb4:
    // 0x38ceb4: 0xd9250000  lqc2        $vf5, 0x0($t1)
    ctx->pc = 0x38ceb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_38ceb8:
    // 0x38ceb8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x38ceb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_38cebc:
    // 0x38cebc: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x38cebcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_38cec0:
    // 0x38cec0: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x38cec0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_38cec4:
    // 0x38cec4: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x38cec4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_38cec8:
    // 0x38cec8: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x38cec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_38cecc:
    // 0x38cecc: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x38ceccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_38ced0:
    // 0x38ced0: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x38ced0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_38ced4:
    // 0x38ced4: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x38ced4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38ced8:
    // 0x38ced8: 0xf9010000  sqc2        $vf1, 0x0($t0)
    ctx->pc = 0x38ced8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_38cedc:
    // 0x38cedc: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x38cedcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_38cee0:
    // 0x38cee0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x38cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38cee4:
    // 0x38cee4: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x38cee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_38cee8:
    // 0x38cee8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x38cee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_38ceec:
    // 0x38ceec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38ceecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38cef0:
    // 0x38cef0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38cef0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38cef4:
    // 0x38cef4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38cef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38cef8:
    // 0x38cef8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38cef8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38cefc:
    // 0x38cefc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38cefcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38cf00:
    // 0x38cf00: 0x8e441300  lw          $a0, 0x1300($s2)
    ctx->pc = 0x38cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
label_38cf04:
    // 0x38cf04: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x38cf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_38cf08:
    // 0x38cf08: 0x7fa30160  sq          $v1, 0x160($sp)
    ctx->pc = 0x38cf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 3));
label_38cf0c:
    // 0x38cf0c: 0xc05c910  jal         func_172440
label_38cf10:
    if (ctx->pc == 0x38CF10u) {
        ctx->pc = 0x38CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF0Cu;
        // 0x38cf10: 0x7fa20170  sq          $v0, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF14u;
        goto label_38cf14;
    }
    ctx->pc = 0x38CF0Cu;
    SET_GPR_U32(ctx, 31, 0x38CF14u);
    ctx->pc = 0x38CF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CF0Cu;
    // 0x38cf10: 0x7fa20170  sq          $v0, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172440u, 0x38CF0Cu, 0x38CF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CF14u;
label_38cf14:
    // 0x38cf14: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38cf18:
    // 0x38cf18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38cf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38cf1c:
    // 0x38cf1c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38cf1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38cf20:
    // 0x38cf20: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38cf24:
    // 0x38cf24: 0x60f809  jalr        $v1
label_38cf28:
    if (ctx->pc == 0x38CF28u) {
        ctx->pc = 0x38CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF24u;
        // 0x38cf28: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF2Cu;
        goto label_38cf2c;
    }
    ctx->pc = 0x38CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38CF2Cu);
        ctx->pc = 0x38CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF24u;
        // 0x38cf28: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CF24u, 0x38CF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CF2Cu;
label_38cf2c:
    // 0x38cf2c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x38cf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_38cf30:
    // 0x38cf30: 0xc0cd940  jal         func_336500
label_38cf34:
    if (ctx->pc == 0x38CF34u) {
        ctx->pc = 0x38CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF30u;
        // 0x38cf34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF38u;
        goto label_38cf38;
    }
    ctx->pc = 0x38CF30u;
    SET_GPR_U32(ctx, 31, 0x38CF38u);
    ctx->pc = 0x38CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CF30u;
    // 0x38cf34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x38CF30u, 0x38CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CF38u;
label_38cf38:
    // 0x38cf38: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x38cf38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_38cf3c:
    // 0x38cf3c: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x38cf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_38cf40:
    // 0x38cf40: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x38cf40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_38cf44:
    // 0x38cf44: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x38cf44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_38cf48:
    // 0x38cf48: 0x7a280000  lq          $t0, 0x0($s1)
    ctx->pc = 0x38cf48u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_38cf4c:
    // 0x38cf4c: 0x7a290010  lq          $t1, 0x10($s1)
    ctx->pc = 0x38cf4cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_38cf50:
    // 0x38cf50: 0x7a2a0020  lq          $t2, 0x20($s1)
    ctx->pc = 0x38cf50u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_38cf54:
    // 0x38cf54: 0x7a2b0030  lq          $t3, 0x30($s1)
    ctx->pc = 0x38cf54u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_38cf58:
    // 0x38cf58: 0x1074026  xor         $t0, $t0, $a3
    ctx->pc = 0x38cf58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
label_38cf5c:
    // 0x38cf5c: 0x1274826  xor         $t1, $t1, $a3
    ctx->pc = 0x38cf5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
label_38cf60:
    // 0x38cf60: 0x1475026  xor         $t2, $t2, $a3
    ctx->pc = 0x38cf60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
label_38cf64:
    // 0x38cf64: 0x1675826  xor         $t3, $t3, $a3
    ctx->pc = 0x38cf64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 7));
label_38cf68:
    // 0x38cf68: 0x700847a9  pexcw       $t0, $t0
    ctx->pc = 0x38cf68u;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(1,0,3,2)));
label_38cf6c:
    // 0x38cf6c: 0x70094fa9  pexcw       $t1, $t1
    ctx->pc = 0x38cf6cu;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(1,0,3,2)));
label_38cf70:
    // 0x38cf70: 0x700a57a9  pexcw       $t2, $t2
    ctx->pc = 0x38cf70u;
    SET_GPR_VEC(ctx, 10, _mm_shuffle_epi32(GPR_VEC(ctx, 10), _MM_SHUFFLE(1,0,3,2)));
label_38cf74:
    // 0x38cf74: 0x700b5fa9  pexcw       $t3, $t3
    ctx->pc = 0x38cf74u;
    SET_GPR_VEC(ctx, 11, _mm_shuffle_epi32(GPR_VEC(ctx, 11), _MM_SHUFFLE(1,0,3,2)));
label_38cf78:
    // 0x38cf78: 0x7e080000  sq          $t0, 0x0($s0)
    ctx->pc = 0x38cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 8));
label_38cf7c:
    // 0x38cf7c: 0x7e090010  sq          $t1, 0x10($s0)
    ctx->pc = 0x38cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 9));
label_38cf80:
    // 0x38cf80: 0x7e0a0020  sq          $t2, 0x20($s0)
    ctx->pc = 0x38cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 10));
label_38cf84:
    // 0x38cf84: 0x7e0b0030  sq          $t3, 0x30($s0)
    ctx->pc = 0x38cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 11));
label_38cf88:
    // 0x38cf88: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x38cf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38cf8c:
    // 0x38cf8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38cf8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cf90:
    // 0x38cf90: 0xc0e1be8  jal         func_386FA0
label_38cf94:
    if (ctx->pc == 0x38CF94u) {
        ctx->pc = 0x38CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF90u;
        // 0x38cf94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF98u;
        goto label_38cf98;
    }
    ctx->pc = 0x38CF90u;
    SET_GPR_U32(ctx, 31, 0x38CF98u);
    ctx->pc = 0x38CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CF90u;
    // 0x38cf94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386FA0u, 0x38CF90u, 0x38CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CF98u;
label_38cf98:
    // 0x38cf98: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x38cf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38cf9c:
    // 0x38cf9c: 0xc05c8a0  jal         func_172280
label_38cfa0:
    if (ctx->pc == 0x38CFA0u) {
        ctx->pc = 0x38CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF9Cu;
        // 0x38cfa0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CFA4u;
        goto label_38cfa4;
    }
    ctx->pc = 0x38CF9Cu;
    SET_GPR_U32(ctx, 31, 0x38CFA4u);
    ctx->pc = 0x38CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CF9Cu;
    // 0x38cfa0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172280u, 0x38CF9Cu, 0x38CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CFA4u;
label_38cfa4:
    // 0x38cfa4: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x38cfa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38cfa8:
    // 0x38cfa8: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x38cfa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38cfac:
    // 0x38cfac: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x38cfacu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38cfb0:
    // 0x38cfb0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x38cfb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38cfb4:
    // 0x38cfb4: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x38cfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
label_38cfb8:
    // 0x38cfb8: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x38cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
label_38cfbc:
    // 0x38cfbc: 0x7e640010  sq          $a0, 0x10($s3)
    ctx->pc = 0x38cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 4));
label_38cfc0:
    // 0x38cfc0: 0x7e650020  sq          $a1, 0x20($s3)
    ctx->pc = 0x38cfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 5));
label_38cfc4:
    // 0x38cfc4: 0x7bb002a0  lq          $s0, 0x2A0($sp)
    ctx->pc = 0x38cfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_38cfc8:
    // 0x38cfc8: 0x7bb10290  lq          $s1, 0x290($sp)
    ctx->pc = 0x38cfc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_38cfcc:
    // 0x38cfcc: 0x7bb20280  lq          $s2, 0x280($sp)
    ctx->pc = 0x38cfccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_38cfd0:
    // 0x38cfd0: 0x7bb30270  lq          $s3, 0x270($sp)
    ctx->pc = 0x38cfd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_38cfd4:
    // 0x38cfd4: 0x7bb40260  lq          $s4, 0x260($sp)
    ctx->pc = 0x38cfd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_38cfd8:
    // 0x38cfd8: 0x7bb50250  lq          $s5, 0x250($sp)
    ctx->pc = 0x38cfd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_38cfdc:
    // 0x38cfdc: 0x7bb60240  lq          $s6, 0x240($sp)
    ctx->pc = 0x38cfdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_38cfe0:
    // 0x38cfe0: 0x7bb70230  lq          $s7, 0x230($sp)
    ctx->pc = 0x38cfe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_38cfe4:
    // 0x38cfe4: 0x7bbe0220  lq          $fp, 0x220($sp)
    ctx->pc = 0x38cfe4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_38cfe8:
    // 0x38cfe8: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x38cfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
label_38cfec:
    // 0x38cfec: 0xc7b502b8  lwc1        $f21, 0x2B8($sp)
    ctx->pc = 0x38cfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_38cff0:
    // 0x38cff0: 0xc7b402b0  lwc1        $f20, 0x2B0($sp)
    ctx->pc = 0x38cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38cff4:
    // 0x38cff4: 0x3e00008  jr          $ra
label_38cff8:
    if (ctx->pc == 0x38CFF8u) {
        ctx->pc = 0x38CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CFF4u;
        // 0x38cff8: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CFFCu;
        goto label_38cffc;
    }
    ctx->pc = 0x38CFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CFF4u;
        // 0x38cff8: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CFFCu;
label_38cffc:
    // 0x38cffc: 0x0  nop
    ctx->pc = 0x38cffcu;
    // NOP
    ctx->pc = 0x38d000u;
}
