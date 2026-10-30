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

// Function: sub_003CCA88
// Address: 0x3cca88 - 0x3ccf68
void sub_003CCA88_0x3cca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCA88_0x3cca88");
#endif

    switch (ctx->pc) {
        case 0x3cca88u: goto label_3cca88;
        case 0x3cca8cu: goto label_3cca8c;
        case 0x3cca90u: goto label_3cca90;
        case 0x3cca94u: goto label_3cca94;
        case 0x3cca98u: goto label_3cca98;
        case 0x3cca9cu: goto label_3cca9c;
        case 0x3ccaa0u: goto label_3ccaa0;
        case 0x3ccaa4u: goto label_3ccaa4;
        case 0x3ccaa8u: goto label_3ccaa8;
        case 0x3ccaacu: goto label_3ccaac;
        case 0x3ccab0u: goto label_3ccab0;
        case 0x3ccab4u: goto label_3ccab4;
        case 0x3ccab8u: goto label_3ccab8;
        case 0x3ccabcu: goto label_3ccabc;
        case 0x3ccac0u: goto label_3ccac0;
        case 0x3ccac4u: goto label_3ccac4;
        case 0x3ccac8u: goto label_3ccac8;
        case 0x3ccaccu: goto label_3ccacc;
        case 0x3ccad0u: goto label_3ccad0;
        case 0x3ccad4u: goto label_3ccad4;
        case 0x3ccad8u: goto label_3ccad8;
        case 0x3ccadcu: goto label_3ccadc;
        case 0x3ccae0u: goto label_3ccae0;
        case 0x3ccae4u: goto label_3ccae4;
        case 0x3ccae8u: goto label_3ccae8;
        case 0x3ccaecu: goto label_3ccaec;
        case 0x3ccaf0u: goto label_3ccaf0;
        case 0x3ccaf4u: goto label_3ccaf4;
        case 0x3ccaf8u: goto label_3ccaf8;
        case 0x3ccafcu: goto label_3ccafc;
        case 0x3ccb00u: goto label_3ccb00;
        case 0x3ccb04u: goto label_3ccb04;
        case 0x3ccb08u: goto label_3ccb08;
        case 0x3ccb0cu: goto label_3ccb0c;
        case 0x3ccb10u: goto label_3ccb10;
        case 0x3ccb14u: goto label_3ccb14;
        case 0x3ccb18u: goto label_3ccb18;
        case 0x3ccb1cu: goto label_3ccb1c;
        case 0x3ccb20u: goto label_3ccb20;
        case 0x3ccb24u: goto label_3ccb24;
        case 0x3ccb28u: goto label_3ccb28;
        case 0x3ccb2cu: goto label_3ccb2c;
        case 0x3ccb30u: goto label_3ccb30;
        case 0x3ccb34u: goto label_3ccb34;
        case 0x3ccb38u: goto label_3ccb38;
        case 0x3ccb3cu: goto label_3ccb3c;
        case 0x3ccb40u: goto label_3ccb40;
        case 0x3ccb44u: goto label_3ccb44;
        case 0x3ccb48u: goto label_3ccb48;
        case 0x3ccb4cu: goto label_3ccb4c;
        case 0x3ccb50u: goto label_3ccb50;
        case 0x3ccb54u: goto label_3ccb54;
        case 0x3ccb58u: goto label_3ccb58;
        case 0x3ccb5cu: goto label_3ccb5c;
        case 0x3ccb60u: goto label_3ccb60;
        case 0x3ccb64u: goto label_3ccb64;
        case 0x3ccb68u: goto label_3ccb68;
        case 0x3ccb6cu: goto label_3ccb6c;
        case 0x3ccb70u: goto label_3ccb70;
        case 0x3ccb74u: goto label_3ccb74;
        case 0x3ccb78u: goto label_3ccb78;
        case 0x3ccb7cu: goto label_3ccb7c;
        case 0x3ccb80u: goto label_3ccb80;
        case 0x3ccb84u: goto label_3ccb84;
        case 0x3ccb88u: goto label_3ccb88;
        case 0x3ccb8cu: goto label_3ccb8c;
        case 0x3ccb90u: goto label_3ccb90;
        case 0x3ccb94u: goto label_3ccb94;
        case 0x3ccb98u: goto label_3ccb98;
        case 0x3ccb9cu: goto label_3ccb9c;
        case 0x3ccba0u: goto label_3ccba0;
        case 0x3ccba4u: goto label_3ccba4;
        case 0x3ccba8u: goto label_3ccba8;
        case 0x3ccbacu: goto label_3ccbac;
        case 0x3ccbb0u: goto label_3ccbb0;
        case 0x3ccbb4u: goto label_3ccbb4;
        case 0x3ccbb8u: goto label_3ccbb8;
        case 0x3ccbbcu: goto label_3ccbbc;
        case 0x3ccbc0u: goto label_3ccbc0;
        case 0x3ccbc4u: goto label_3ccbc4;
        case 0x3ccbc8u: goto label_3ccbc8;
        case 0x3ccbccu: goto label_3ccbcc;
        case 0x3ccbd0u: goto label_3ccbd0;
        case 0x3ccbd4u: goto label_3ccbd4;
        case 0x3ccbd8u: goto label_3ccbd8;
        case 0x3ccbdcu: goto label_3ccbdc;
        case 0x3ccbe0u: goto label_3ccbe0;
        case 0x3ccbe4u: goto label_3ccbe4;
        case 0x3ccbe8u: goto label_3ccbe8;
        case 0x3ccbecu: goto label_3ccbec;
        case 0x3ccbf0u: goto label_3ccbf0;
        case 0x3ccbf4u: goto label_3ccbf4;
        case 0x3ccbf8u: goto label_3ccbf8;
        case 0x3ccbfcu: goto label_3ccbfc;
        case 0x3ccc00u: goto label_3ccc00;
        case 0x3ccc04u: goto label_3ccc04;
        case 0x3ccc08u: goto label_3ccc08;
        case 0x3ccc0cu: goto label_3ccc0c;
        case 0x3ccc10u: goto label_3ccc10;
        case 0x3ccc14u: goto label_3ccc14;
        case 0x3ccc18u: goto label_3ccc18;
        case 0x3ccc1cu: goto label_3ccc1c;
        case 0x3ccc20u: goto label_3ccc20;
        case 0x3ccc24u: goto label_3ccc24;
        case 0x3ccc28u: goto label_3ccc28;
        case 0x3ccc2cu: goto label_3ccc2c;
        case 0x3ccc30u: goto label_3ccc30;
        case 0x3ccc34u: goto label_3ccc34;
        case 0x3ccc38u: goto label_3ccc38;
        case 0x3ccc3cu: goto label_3ccc3c;
        case 0x3ccc40u: goto label_3ccc40;
        case 0x3ccc44u: goto label_3ccc44;
        case 0x3ccc48u: goto label_3ccc48;
        case 0x3ccc4cu: goto label_3ccc4c;
        case 0x3ccc50u: goto label_3ccc50;
        case 0x3ccc54u: goto label_3ccc54;
        case 0x3ccc58u: goto label_3ccc58;
        case 0x3ccc5cu: goto label_3ccc5c;
        case 0x3ccc60u: goto label_3ccc60;
        case 0x3ccc64u: goto label_3ccc64;
        case 0x3ccc68u: goto label_3ccc68;
        case 0x3ccc6cu: goto label_3ccc6c;
        case 0x3ccc70u: goto label_3ccc70;
        case 0x3ccc74u: goto label_3ccc74;
        case 0x3ccc78u: goto label_3ccc78;
        case 0x3ccc7cu: goto label_3ccc7c;
        case 0x3ccc80u: goto label_3ccc80;
        case 0x3ccc84u: goto label_3ccc84;
        case 0x3ccc88u: goto label_3ccc88;
        case 0x3ccc8cu: goto label_3ccc8c;
        case 0x3ccc90u: goto label_3ccc90;
        case 0x3ccc94u: goto label_3ccc94;
        case 0x3ccc98u: goto label_3ccc98;
        case 0x3ccc9cu: goto label_3ccc9c;
        case 0x3ccca0u: goto label_3ccca0;
        case 0x3ccca4u: goto label_3ccca4;
        case 0x3ccca8u: goto label_3ccca8;
        case 0x3cccacu: goto label_3cccac;
        case 0x3cccb0u: goto label_3cccb0;
        case 0x3cccb4u: goto label_3cccb4;
        case 0x3cccb8u: goto label_3cccb8;
        case 0x3cccbcu: goto label_3cccbc;
        case 0x3cccc0u: goto label_3cccc0;
        case 0x3cccc4u: goto label_3cccc4;
        case 0x3cccc8u: goto label_3cccc8;
        case 0x3cccccu: goto label_3ccccc;
        case 0x3cccd0u: goto label_3cccd0;
        case 0x3cccd4u: goto label_3cccd4;
        case 0x3cccd8u: goto label_3cccd8;
        case 0x3cccdcu: goto label_3cccdc;
        case 0x3ccce0u: goto label_3ccce0;
        case 0x3ccce4u: goto label_3ccce4;
        case 0x3ccce8u: goto label_3ccce8;
        case 0x3cccecu: goto label_3cccec;
        case 0x3cccf0u: goto label_3cccf0;
        case 0x3cccf4u: goto label_3cccf4;
        case 0x3cccf8u: goto label_3cccf8;
        case 0x3cccfcu: goto label_3cccfc;
        case 0x3ccd00u: goto label_3ccd00;
        case 0x3ccd04u: goto label_3ccd04;
        case 0x3ccd08u: goto label_3ccd08;
        case 0x3ccd0cu: goto label_3ccd0c;
        case 0x3ccd10u: goto label_3ccd10;
        case 0x3ccd14u: goto label_3ccd14;
        case 0x3ccd18u: goto label_3ccd18;
        case 0x3ccd1cu: goto label_3ccd1c;
        case 0x3ccd20u: goto label_3ccd20;
        case 0x3ccd24u: goto label_3ccd24;
        case 0x3ccd28u: goto label_3ccd28;
        case 0x3ccd2cu: goto label_3ccd2c;
        case 0x3ccd30u: goto label_3ccd30;
        case 0x3ccd34u: goto label_3ccd34;
        case 0x3ccd38u: goto label_3ccd38;
        case 0x3ccd3cu: goto label_3ccd3c;
        case 0x3ccd40u: goto label_3ccd40;
        case 0x3ccd44u: goto label_3ccd44;
        case 0x3ccd48u: goto label_3ccd48;
        case 0x3ccd4cu: goto label_3ccd4c;
        case 0x3ccd50u: goto label_3ccd50;
        case 0x3ccd54u: goto label_3ccd54;
        case 0x3ccd58u: goto label_3ccd58;
        case 0x3ccd5cu: goto label_3ccd5c;
        case 0x3ccd60u: goto label_3ccd60;
        case 0x3ccd64u: goto label_3ccd64;
        case 0x3ccd68u: goto label_3ccd68;
        case 0x3ccd6cu: goto label_3ccd6c;
        case 0x3ccd70u: goto label_3ccd70;
        case 0x3ccd74u: goto label_3ccd74;
        case 0x3ccd78u: goto label_3ccd78;
        case 0x3ccd7cu: goto label_3ccd7c;
        case 0x3ccd80u: goto label_3ccd80;
        case 0x3ccd84u: goto label_3ccd84;
        case 0x3ccd88u: goto label_3ccd88;
        case 0x3ccd8cu: goto label_3ccd8c;
        case 0x3ccd90u: goto label_3ccd90;
        case 0x3ccd94u: goto label_3ccd94;
        case 0x3ccd98u: goto label_3ccd98;
        case 0x3ccd9cu: goto label_3ccd9c;
        case 0x3ccda0u: goto label_3ccda0;
        case 0x3ccda4u: goto label_3ccda4;
        case 0x3ccda8u: goto label_3ccda8;
        case 0x3ccdacu: goto label_3ccdac;
        case 0x3ccdb0u: goto label_3ccdb0;
        case 0x3ccdb4u: goto label_3ccdb4;
        case 0x3ccdb8u: goto label_3ccdb8;
        case 0x3ccdbcu: goto label_3ccdbc;
        case 0x3ccdc0u: goto label_3ccdc0;
        case 0x3ccdc4u: goto label_3ccdc4;
        case 0x3ccdc8u: goto label_3ccdc8;
        case 0x3ccdccu: goto label_3ccdcc;
        case 0x3ccdd0u: goto label_3ccdd0;
        case 0x3ccdd4u: goto label_3ccdd4;
        case 0x3ccdd8u: goto label_3ccdd8;
        case 0x3ccddcu: goto label_3ccddc;
        case 0x3ccde0u: goto label_3ccde0;
        case 0x3ccde4u: goto label_3ccde4;
        case 0x3ccde8u: goto label_3ccde8;
        case 0x3ccdecu: goto label_3ccdec;
        case 0x3ccdf0u: goto label_3ccdf0;
        case 0x3ccdf4u: goto label_3ccdf4;
        case 0x3ccdf8u: goto label_3ccdf8;
        case 0x3ccdfcu: goto label_3ccdfc;
        case 0x3cce00u: goto label_3cce00;
        case 0x3cce04u: goto label_3cce04;
        case 0x3cce08u: goto label_3cce08;
        case 0x3cce0cu: goto label_3cce0c;
        case 0x3cce10u: goto label_3cce10;
        case 0x3cce14u: goto label_3cce14;
        case 0x3cce18u: goto label_3cce18;
        case 0x3cce1cu: goto label_3cce1c;
        case 0x3cce20u: goto label_3cce20;
        case 0x3cce24u: goto label_3cce24;
        case 0x3cce28u: goto label_3cce28;
        case 0x3cce2cu: goto label_3cce2c;
        case 0x3cce30u: goto label_3cce30;
        case 0x3cce34u: goto label_3cce34;
        case 0x3cce38u: goto label_3cce38;
        case 0x3cce3cu: goto label_3cce3c;
        case 0x3cce40u: goto label_3cce40;
        case 0x3cce44u: goto label_3cce44;
        case 0x3cce48u: goto label_3cce48;
        case 0x3cce4cu: goto label_3cce4c;
        case 0x3cce50u: goto label_3cce50;
        case 0x3cce54u: goto label_3cce54;
        case 0x3cce58u: goto label_3cce58;
        case 0x3cce5cu: goto label_3cce5c;
        case 0x3cce60u: goto label_3cce60;
        case 0x3cce64u: goto label_3cce64;
        case 0x3cce68u: goto label_3cce68;
        case 0x3cce6cu: goto label_3cce6c;
        case 0x3cce70u: goto label_3cce70;
        case 0x3cce74u: goto label_3cce74;
        case 0x3cce78u: goto label_3cce78;
        case 0x3cce7cu: goto label_3cce7c;
        case 0x3cce80u: goto label_3cce80;
        case 0x3cce84u: goto label_3cce84;
        case 0x3cce88u: goto label_3cce88;
        case 0x3cce8cu: goto label_3cce8c;
        case 0x3cce90u: goto label_3cce90;
        case 0x3cce94u: goto label_3cce94;
        case 0x3cce98u: goto label_3cce98;
        case 0x3cce9cu: goto label_3cce9c;
        case 0x3ccea0u: goto label_3ccea0;
        case 0x3ccea4u: goto label_3ccea4;
        case 0x3ccea8u: goto label_3ccea8;
        case 0x3cceacu: goto label_3cceac;
        case 0x3cceb0u: goto label_3cceb0;
        case 0x3cceb4u: goto label_3cceb4;
        case 0x3cceb8u: goto label_3cceb8;
        case 0x3ccebcu: goto label_3ccebc;
        case 0x3ccec0u: goto label_3ccec0;
        case 0x3ccec4u: goto label_3ccec4;
        case 0x3ccec8u: goto label_3ccec8;
        case 0x3cceccu: goto label_3ccecc;
        case 0x3cced0u: goto label_3cced0;
        case 0x3cced4u: goto label_3cced4;
        case 0x3cced8u: goto label_3cced8;
        case 0x3ccedcu: goto label_3ccedc;
        case 0x3ccee0u: goto label_3ccee0;
        case 0x3ccee4u: goto label_3ccee4;
        case 0x3ccee8u: goto label_3ccee8;
        case 0x3cceecu: goto label_3cceec;
        case 0x3ccef0u: goto label_3ccef0;
        case 0x3ccef4u: goto label_3ccef4;
        case 0x3ccef8u: goto label_3ccef8;
        case 0x3ccefcu: goto label_3ccefc;
        case 0x3ccf00u: goto label_3ccf00;
        case 0x3ccf04u: goto label_3ccf04;
        case 0x3ccf08u: goto label_3ccf08;
        case 0x3ccf0cu: goto label_3ccf0c;
        case 0x3ccf10u: goto label_3ccf10;
        case 0x3ccf14u: goto label_3ccf14;
        case 0x3ccf18u: goto label_3ccf18;
        case 0x3ccf1cu: goto label_3ccf1c;
        case 0x3ccf20u: goto label_3ccf20;
        case 0x3ccf24u: goto label_3ccf24;
        case 0x3ccf28u: goto label_3ccf28;
        case 0x3ccf2cu: goto label_3ccf2c;
        case 0x3ccf30u: goto label_3ccf30;
        case 0x3ccf34u: goto label_3ccf34;
        case 0x3ccf38u: goto label_3ccf38;
        case 0x3ccf3cu: goto label_3ccf3c;
        case 0x3ccf40u: goto label_3ccf40;
        case 0x3ccf44u: goto label_3ccf44;
        case 0x3ccf48u: goto label_3ccf48;
        case 0x3ccf4cu: goto label_3ccf4c;
        case 0x3ccf50u: goto label_3ccf50;
        case 0x3ccf54u: goto label_3ccf54;
        case 0x3ccf58u: goto label_3ccf58;
        case 0x3ccf5cu: goto label_3ccf5c;
        case 0x3ccf60u: goto label_3ccf60;
        case 0x3ccf64u: goto label_3ccf64;
        default: break;
    }

    ctx->pc = 0x3cca88u;

label_3cca88:
    // 0x3cca88: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x3cca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
label_3cca8c:
    // 0x3cca8c: 0x7fb004f0  sq          $s0, 0x4F0($sp)
    ctx->pc = 0x3cca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 16));
label_3cca90:
    // 0x3cca90: 0x7fb104e0  sq          $s1, 0x4E0($sp)
    ctx->pc = 0x3cca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 17));
label_3cca94:
    // 0x3cca94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3cca94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cca98:
    // 0x3cca98: 0x7fb404b0  sq          $s4, 0x4B0($sp)
    ctx->pc = 0x3cca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 20));
label_3cca9c:
    // 0x3cca9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cca9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ccaa0:
    // 0x3ccaa0: 0x7fb504a0  sq          $s5, 0x4A0($sp)
    ctx->pc = 0x3ccaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 21));
label_3ccaa4:
    // 0x3ccaa4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ccaa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ccaa8:
    // 0x3ccaa8: 0x7fb204d0  sq          $s2, 0x4D0($sp)
    ctx->pc = 0x3ccaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 18));
label_3ccaac:
    // 0x3ccaac: 0x7fb304c0  sq          $s3, 0x4C0($sp)
    ctx->pc = 0x3ccaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 19));
label_3ccab0:
    // 0x3ccab0: 0xffbf0490  sd          $ra, 0x490($sp)
    ctx->pc = 0x3ccab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 31));
label_3ccab4:
    // 0x3ccab4: 0xe7b60510  swc1        $f22, 0x510($sp)
    ctx->pc = 0x3ccab4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_3ccab8:
    // 0x3ccab8: 0xe7b50508  swc1        $f21, 0x508($sp)
    ctx->pc = 0x3ccab8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1288), bits); }
label_3ccabc:
    // 0x3ccabc: 0xe7b40500  swc1        $f20, 0x500($sp)
    ctx->pc = 0x3ccabcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1280), bits); }
label_3ccac0:
    // 0x3ccac0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ccac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ccac4:
    // 0x3ccac4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ccac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ccac8:
    // 0x3ccac8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ccac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ccacc:
    // 0x3ccacc: 0x40f809  jalr        $v0
label_3ccad0:
    if (ctx->pc == 0x3CCAD0u) {
        ctx->pc = 0x3CCAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCACCu;
        // 0x3ccad0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCAD4u;
        goto label_3ccad4;
    }
    ctx->pc = 0x3CCACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CCAD4u);
        ctx->pc = 0x3CCAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCACCu;
        // 0x3ccad0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCACCu, 0x3CCAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CCAD4u;
label_3ccad4:
    // 0x3ccad4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ccad4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ccad8:
    // 0x3ccad8: 0x2e22003d  sltiu       $v0, $s1, 0x3D
    ctx->pc = 0x3ccad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_3ccadc:
    // 0x3ccadc: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
label_3ccae0:
    if (ctx->pc == 0x3CCAE0u) {
        ctx->pc = 0x3CCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCADCu;
        // 0x3ccae0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCAE4u;
        goto label_3ccae4;
    }
    ctx->pc = 0x3CCADCu;
    {
        const bool branch_taken_0x3ccadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCADCu;
        // 0x3ccae0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccadc) {
            ctx->pc = 0x3CCF34u;
            goto label_3ccf34;
        }
    }
    ctx->pc = 0x3CCAE4u;
label_3ccae4:
    // 0x3ccae4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3ccae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3ccae8:
    // 0x3ccae8: 0x244248f0  addiu       $v0, $v0, 0x48F0
    ctx->pc = 0x3ccae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18672));
label_3ccaec:
    // 0x3ccaec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ccaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ccaf0:
    // 0x3ccaf0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3ccaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ccaf4:
    // 0x3ccaf4: 0x800008  jr          $a0
label_3ccaf8:
    if (ctx->pc == 0x3CCAF8u) {
        ctx->pc = 0x3CCAFCu;
        goto label_3ccafc;
    }
    ctx->pc = 0x3CCAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CCAFCu: goto label_3ccafc;
            case 0x3CCB28u: goto label_3ccb28;
            case 0x3CCB50u: goto label_3ccb50;
            case 0x3CCB5Cu: goto label_3ccb5c;
            case 0x3CCBACu: goto label_3ccbac;
            case 0x3CCBECu: goto label_3ccbec;
            case 0x3CCD68u: goto label_3ccd68;
            case 0x3CCF10u: goto label_3ccf10;
            case 0x3CCF34u: goto label_3ccf34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCAF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CCAFCu;
label_3ccafc:
    // 0x3ccafc: 0xc0ea146  jal         func_3A8518
label_3ccb00:
    if (ctx->pc == 0x3CCB00u) {
        ctx->pc = 0x3CCB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCAFCu;
        // 0x3ccb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB04u;
        goto label_3ccb04;
    }
    ctx->pc = 0x3CCAFCu;
    SET_GPR_U32(ctx, 31, 0x3CCB04u);
    ctx->pc = 0x3CCB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCAFCu;
    // 0x3ccb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CCAFCu, 0x3CCB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCB04u;
label_3ccb04:
    // 0x3ccb04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ccb08:
    if (ctx->pc == 0x3CCB08u) {
        ctx->pc = 0x3CCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB04u;
        // 0x3ccb08: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB0Cu;
        goto label_3ccb0c;
    }
    ctx->pc = 0x3CCB04u;
    {
        const bool branch_taken_0x3ccb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB04u;
        // 0x3ccb08: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb04) {
            ctx->pc = 0x3CCB1Cu;
            goto label_3ccb1c;
        }
    }
    ctx->pc = 0x3CCB0Cu;
label_3ccb0c:
    // 0x3ccb0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3ccb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3ccb10:
    // 0x3ccb10: 0x38428000  xori        $v0, $v0, 0x8000
    ctx->pc = 0x3ccb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32768);
label_3ccb14:
    // 0x3ccb14: 0x10000107  b           . + 4 + (0x107 << 2)
label_3ccb18:
    if (ctx->pc == 0x3CCB18u) {
        ctx->pc = 0x3CCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB14u;
        // 0x3ccb18: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB1Cu;
        goto label_3ccb1c;
    }
    ctx->pc = 0x3CCB14u;
    {
        const bool branch_taken_0x3ccb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB14u;
        // 0x3ccb18: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb14) {
            ctx->pc = 0x3CCF34u;
            goto label_3ccf34;
        }
    }
    ctx->pc = 0x3CCB1Cu;
label_3ccb1c:
    // 0x3ccb1c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3ccb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3ccb20:
    // 0x3ccb20: 0x10000104  b           . + 4 + (0x104 << 2)
label_3ccb24:
    if (ctx->pc == 0x3CCB24u) {
        ctx->pc = 0x3CCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB20u;
        // 0x3ccb24: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB28u;
        goto label_3ccb28;
    }
    ctx->pc = 0x3CCB20u;
    {
        const bool branch_taken_0x3ccb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB20u;
        // 0x3ccb24: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb20) {
            ctx->pc = 0x3CCF34u;
            goto label_3ccf34;
        }
    }
    ctx->pc = 0x3CCB28u;
label_3ccb28:
    // 0x3ccb28: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x3ccb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3ccb2c:
    // 0x3ccb2c: 0x50400102  beql        $v0, $zero, . + 4 + (0x102 << 2)
label_3ccb30:
    if (ctx->pc == 0x3CCB30u) {
        ctx->pc = 0x3CCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB2Cu;
        // 0x3ccb30: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB34u;
        goto label_3ccb34;
    }
    ctx->pc = 0x3CCB2Cu;
    {
        const bool branch_taken_0x3ccb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccb2c) {
            ctx->pc = 0x3CCB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCB2Cu;
            // 0x3ccb30: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCF38u;
            goto label_3ccf38;
        }
    }
    ctx->pc = 0x3CCB34u;
label_3ccb34:
    // 0x3ccb34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ccb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ccb38:
    // 0x3ccb38: 0xc0e932c  jal         func_3A4CB0
label_3ccb3c:
    if (ctx->pc == 0x3CCB3Cu) {
        ctx->pc = 0x3CCB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB38u;
        // 0x3ccb3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB40u;
        goto label_3ccb40;
    }
    ctx->pc = 0x3CCB38u;
    SET_GPR_U32(ctx, 31, 0x3CCB40u);
    ctx->pc = 0x3CCB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCB38u;
    // 0x3ccb3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CB0u, 0x3CCB38u, 0x3CCB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCB40u;
label_3ccb40:
    // 0x3ccb40: 0x8ea70018  lw          $a3, 0x18($s5)
    ctx->pc = 0x3ccb40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3ccb44:
    // 0x3ccb44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ccb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ccb48:
    // 0x3ccb48: 0x10000021  b           . + 4 + (0x21 << 2)
label_3ccb4c:
    if (ctx->pc == 0x3CCB4Cu) {
        ctx->pc = 0x3CCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB48u;
        // 0x3ccb4c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB50u;
        goto label_3ccb50;
    }
    ctx->pc = 0x3CCB48u;
    {
        const bool branch_taken_0x3ccb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB48u;
        // 0x3ccb4c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb48) {
            ctx->pc = 0x3CCBD0u;
            goto label_3ccbd0;
        }
    }
    ctx->pc = 0x3CCB50u;
label_3ccb50:
    // 0x3ccb50: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3ccb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3ccb54:
    // 0x3ccb54: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_3ccb58:
    if (ctx->pc == 0x3CCB58u) {
        ctx->pc = 0x3CCB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB54u;
        // 0x3ccb58: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB5Cu;
        goto label_3ccb5c;
    }
    ctx->pc = 0x3CCB54u;
    {
        const bool branch_taken_0x3ccb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB54u;
        // 0x3ccb58: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb54) {
            ctx->pc = 0x3CCF34u;
            goto label_3ccf34;
        }
    }
    ctx->pc = 0x3CCB5Cu;
label_3ccb5c:
    // 0x3ccb5c: 0x8ea70018  lw          $a3, 0x18($s5)
    ctx->pc = 0x3ccb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3ccb60:
    // 0x3ccb60: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3ccb64:
    if (ctx->pc == 0x3CCB64u) {
        ctx->pc = 0x3CCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB60u;
        // 0x3ccb64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB68u;
        goto label_3ccb68;
    }
    ctx->pc = 0x3CCB60u;
    {
        const bool branch_taken_0x3ccb60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB60u;
        // 0x3ccb64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb60) {
            ctx->pc = 0x3CCB80u;
            goto label_3ccb80;
        }
    }
    ctx->pc = 0x3CCB68u;
label_3ccb68:
    // 0x3ccb68: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ccb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ccb6c:
    // 0x3ccb6c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3ccb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3ccb70:
    // 0x3ccb70: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ccb70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ccb74:
    // 0x3ccb74: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ccb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ccb78:
    // 0x3ccb78: 0x60f809  jalr        $v1
label_3ccb7c:
    if (ctx->pc == 0x3CCB7Cu) {
        ctx->pc = 0x3CCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB78u;
        // 0x3ccb7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB80u;
        goto label_3ccb80;
    }
    ctx->pc = 0x3CCB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CCB80u);
        ctx->pc = 0x3CCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB78u;
        // 0x3ccb7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCB78u, 0x3CCB80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CCB80u;
label_3ccb80:
    // 0x3ccb80: 0xc0e9344  jal         func_3A4D10
label_3ccb84:
    if (ctx->pc == 0x3CCB84u) {
        ctx->pc = 0x3CCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB80u;
        // 0x3ccb84: 0x8e8400c4  lw          $a0, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB88u;
        goto label_3ccb88;
    }
    ctx->pc = 0x3CCB80u;
    SET_GPR_U32(ctx, 31, 0x3CCB88u);
    ctx->pc = 0x3CCB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCB80u;
    // 0x3ccb84: 0x8e8400c4  lw          $a0, 0xC4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D10u, 0x3CCB80u, 0x3CCB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCB88u;
label_3ccb88:
    // 0x3ccb88: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_3ccb8c:
    if (ctx->pc == 0x3CCB8Cu) {
        ctx->pc = 0x3CCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB88u;
        // 0x3ccb8c: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB90u;
        goto label_3ccb90;
    }
    ctx->pc = 0x3CCB88u;
    {
        const bool branch_taken_0x3ccb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB88u;
        // 0x3ccb8c: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb88) {
            ctx->pc = 0x3CCF38u;
            goto label_3ccf38;
        }
    }
    ctx->pc = 0x3CCB90u;
label_3ccb90:
    // 0x3ccb90: 0xc0e9344  jal         func_3A4D10
label_3ccb94:
    if (ctx->pc == 0x3CCB94u) {
        ctx->pc = 0x3CCB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB90u;
        // 0x3ccb94: 0x8e8400c4  lw          $a0, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCB98u;
        goto label_3ccb98;
    }
    ctx->pc = 0x3CCB90u;
    SET_GPR_U32(ctx, 31, 0x3CCB98u);
    ctx->pc = 0x3CCB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCB90u;
    // 0x3ccb94: 0x8e8400c4  lw          $a0, 0xC4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D10u, 0x3CCB90u, 0x3CCB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCB98u;
label_3ccb98:
    // 0x3ccb98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ccb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ccb9c:
    // 0x3ccb9c: 0xc0e9132  jal         func_3A44C8
label_3ccba0:
    if (ctx->pc == 0x3CCBA0u) {
        ctx->pc = 0x3CCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB9Cu;
        // 0x3ccba0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCBA4u;
        goto label_3ccba4;
    }
    ctx->pc = 0x3CCB9Cu;
    SET_GPR_U32(ctx, 31, 0x3CCBA4u);
    ctx->pc = 0x3CCBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCB9Cu;
    // 0x3ccba0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3CCB9Cu, 0x3CCBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCBA4u;
label_3ccba4:
    // 0x3ccba4: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_3ccba8:
    if (ctx->pc == 0x3CCBA8u) {
        ctx->pc = 0x3CCBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBA4u;
        // 0x3ccba8: 0xae8200c4  sw          $v0, 0xC4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCBACu;
        goto label_3ccbac;
    }
    ctx->pc = 0x3CCBA4u;
    {
        const bool branch_taken_0x3ccba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBA4u;
        // 0x3ccba8: 0xae8200c4  sw          $v0, 0xC4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccba4) {
            ctx->pc = 0x3CCF34u;
            goto label_3ccf34;
        }
    }
    ctx->pc = 0x3CCBACu;
label_3ccbac:
    // 0x3ccbac: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x3ccbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3ccbb0:
    // 0x3ccbb0: 0x504000e1  beql        $v0, $zero, . + 4 + (0xE1 << 2)
label_3ccbb4:
    if (ctx->pc == 0x3CCBB4u) {
        ctx->pc = 0x3CCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBB0u;
        // 0x3ccbb4: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCBB8u;
        goto label_3ccbb8;
    }
    ctx->pc = 0x3CCBB0u;
    {
        const bool branch_taken_0x3ccbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccbb0) {
            ctx->pc = 0x3CCBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCBB0u;
            // 0x3ccbb4: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCF38u;
            goto label_3ccf38;
        }
    }
    ctx->pc = 0x3CCBB8u;
label_3ccbb8:
    // 0x3ccbb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ccbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ccbbc:
    // 0x3ccbbc: 0xc0e932c  jal         func_3A4CB0
label_3ccbc0:
    if (ctx->pc == 0x3CCBC0u) {
        ctx->pc = 0x3CCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBBCu;
        // 0x3ccbc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCBC4u;
        goto label_3ccbc4;
    }
    ctx->pc = 0x3CCBBCu;
    SET_GPR_U32(ctx, 31, 0x3CCBC4u);
    ctx->pc = 0x3CCBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCBBCu;
    // 0x3ccbc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CB0u, 0x3CCBBCu, 0x3CCBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCBC4u;
label_3ccbc4:
    // 0x3ccbc4: 0x8ea70018  lw          $a3, 0x18($s5)
    ctx->pc = 0x3ccbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3ccbc8:
    // 0x3ccbc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ccbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ccbcc:
    // 0x3ccbcc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3ccbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3ccbd0:
    // 0x3ccbd0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ccbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ccbd4:
    // 0x3ccbd4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ccbd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ccbd8:
    // 0x3ccbd8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ccbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ccbdc:
    // 0x3ccbdc: 0x60f809  jalr        $v1
label_3ccbe0:
    if (ctx->pc == 0x3CCBE0u) {
        ctx->pc = 0x3CCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBDCu;
        // 0x3ccbe0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCBE4u;
        goto label_3ccbe4;
    }
    ctx->pc = 0x3CCBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CCBE4u);
        ctx->pc = 0x3CCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBDCu;
        // 0x3ccbe0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCBDCu, 0x3CCBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CCBE4u;
label_3ccbe4:
    // 0x3ccbe4: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_3ccbe8:
    if (ctx->pc == 0x3CCBE8u) {
        ctx->pc = 0x3CCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBE4u;
        // 0x3ccbe8: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCBECu;
        goto label_3ccbec;
    }
    ctx->pc = 0x3CCBE4u;
    {
        const bool branch_taken_0x3ccbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBE4u;
        // 0x3ccbe8: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccbe4) {
            ctx->pc = 0x3CCF38u;
            goto label_3ccf38;
        }
    }
    ctx->pc = 0x3CCBECu;
label_3ccbec:
    // 0x3ccbec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ccbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ccbf0:
    // 0x3ccbf0: 0xc0ea12a  jal         func_3A84A8
label_3ccbf4:
    if (ctx->pc == 0x3CCBF4u) {
        ctx->pc = 0x3CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBF0u;
        // 0x3ccbf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCBF8u;
        goto label_3ccbf8;
    }
    ctx->pc = 0x3CCBF0u;
    SET_GPR_U32(ctx, 31, 0x3CCBF8u);
    ctx->pc = 0x3CCBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCBF0u;
    // 0x3ccbf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CCBF0u, 0x3CCBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCBF8u;
label_3ccbf8:
    // 0x3ccbf8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ccbf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ccbfc:
    // 0x3ccbfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ccbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ccc00:
    // 0x3ccc00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ccc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ccc04:
    // 0x3ccc04: 0xc0ea12a  jal         func_3A84A8
label_3ccc08:
    if (ctx->pc == 0x3CCC08u) {
        ctx->pc = 0x3CCC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC04u;
        // 0x3ccc08: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCC0Cu;
        goto label_3ccc0c;
    }
    ctx->pc = 0x3CCC04u;
    SET_GPR_U32(ctx, 31, 0x3CCC0Cu);
    ctx->pc = 0x3CCC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCC04u;
    // 0x3ccc08: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CCC04u, 0x3CCC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCC0Cu;
label_3ccc0c:
    // 0x3ccc0c: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x3ccc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ccc10:
    // 0x3ccc10: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x3ccc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_3ccc14:
    // 0x3ccc14: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ccc14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ccc18:
    // 0x3ccc18: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x3ccc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_3ccc1c:
    // 0x3ccc1c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3ccc20:
    if (ctx->pc == 0x3CCC20u) {
        ctx->pc = 0x3CCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC1Cu;
        // 0x3ccc20: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCC24u;
        goto label_3ccc24;
    }
    ctx->pc = 0x3CCC1Cu;
    {
        const bool branch_taken_0x3ccc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC1Cu;
        // 0x3ccc20: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccc1c) {
            ctx->pc = 0x3CCC2Cu;
            goto label_3ccc2c;
        }
    }
    ctx->pc = 0x3CCC24u;
label_3ccc24:
    // 0x3ccc24: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x3ccc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_3ccc28:
    // 0x3ccc28: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x3ccc28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_3ccc2c:
    // 0x3ccc2c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3ccc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3ccc30:
    // 0x3ccc30: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3ccc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3ccc34:
    // 0x3ccc34: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3ccc34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3ccc38:
    // 0x3ccc38: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3ccc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3ccc3c:
    // 0x3ccc3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ccc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ccc40:
    // 0x3ccc40: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3ccc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3ccc44:
    // 0x3ccc44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3ccc44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3ccc48:
    // 0x3ccc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ccc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ccc4c:
    // 0x3ccc4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ccc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ccc50:
    // 0x3ccc50: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3ccc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3ccc54:
    // 0x3ccc54: 0xc0cd518  jal         func_335460
label_3ccc58:
    if (ctx->pc == 0x3CCC58u) {
        ctx->pc = 0x3CCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC54u;
        // 0x3ccc58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCC5Cu;
        goto label_3ccc5c;
    }
    ctx->pc = 0x3CCC54u;
    SET_GPR_U32(ctx, 31, 0x3CCC5Cu);
    ctx->pc = 0x3CCC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCC54u;
    // 0x3ccc58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CCC54u, 0x3CCC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCC5Cu;
label_3ccc5c:
    // 0x3ccc5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3ccc5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3ccc60:
    // 0x3ccc60: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ccc60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ccc64:
    // 0x3ccc64: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ccc64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3ccc68:
    // 0x3ccc68: 0xc0cd518  jal         func_335460
label_3ccc6c:
    if (ctx->pc == 0x3CCC6Cu) {
        ctx->pc = 0x3CCC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC68u;
        // 0x3ccc6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCC70u;
        goto label_3ccc70;
    }
    ctx->pc = 0x3CCC68u;
    SET_GPR_U32(ctx, 31, 0x3CCC70u);
    ctx->pc = 0x3CCC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCC68u;
    // 0x3ccc6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CCC68u, 0x3CCC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCC70u;
label_3ccc70:
    // 0x3ccc70: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3ccc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ccc74:
    // 0x3ccc74: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x3ccc74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3ccc78:
    // 0x3ccc78: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3ccc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3ccc7c:
    // 0x3ccc7c: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3ccc7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3ccc80:
    // 0x3ccc80: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3ccc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3ccc84:
    // 0x3ccc84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ccc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ccc88:
    // 0x3ccc88: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x3ccc88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3ccc8c:
    // 0x3ccc8c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ccc8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ccc90:
    // 0x3ccc90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ccc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ccc94:
    // 0x3ccc94: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ccc94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ccc98:
    // 0x3ccc98: 0xc0f3222  jal         func_3CC888
label_3ccc9c:
    if (ctx->pc == 0x3CCC9Cu) {
        ctx->pc = 0x3CCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC98u;
        // 0x3ccc9c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCCA0u;
        goto label_3ccca0;
    }
    ctx->pc = 0x3CCC98u;
    SET_GPR_U32(ctx, 31, 0x3CCCA0u);
    ctx->pc = 0x3CCC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCC98u;
    // 0x3ccc9c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3CCC98u, 0x3CCCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCCA0u;
label_3ccca0:
    // 0x3ccca0: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x3ccca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3ccca4:
    // 0x3ccca4: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x3ccca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3ccca8:
    // 0x3ccca8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3ccca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3cccac:
    // 0x3cccac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cccacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cccb0:
    // 0x3cccb0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3cccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3cccb4:
    // 0x3cccb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cccb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cccb8:
    // 0x3cccb8: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x3cccb8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3cccbc:
    // 0x3cccbc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3cccbcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3cccc0:
    // 0x3cccc0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cccc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cccc4:
    // 0x3cccc4: 0xc0f3222  jal         func_3CC888
label_3cccc8:
    if (ctx->pc == 0x3CCCC8u) {
        ctx->pc = 0x3CCCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCCC4u;
        // 0x3cccc8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCCCCu;
        goto label_3ccccc;
    }
    ctx->pc = 0x3CCCC4u;
    SET_GPR_U32(ctx, 31, 0x3CCCCCu);
    ctx->pc = 0x3CCCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCCC4u;
    // 0x3cccc8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3CCCC4u, 0x3CCCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCCCCu;
label_3ccccc:
    // 0x3ccccc: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x3cccccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cccd0:
    // 0x3cccd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cccd4:
    // 0x3cccd4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3cccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3cccd8:
    // 0x3cccd8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3cccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3cccdc:
    // 0x3cccdc: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x3cccdcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3ccce0:
    // 0x3ccce0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3ccce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3ccce4:
    // 0x3ccce4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ccce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ccce8:
    // 0x3ccce8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3ccce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cccec:
    // 0x3cccec: 0x3c014089  lui         $at, 0x4089
    ctx->pc = 0x3cccecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16521 << 16));
label_3cccf0:
    // 0x3cccf0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3cccf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3cccf4:
    // 0x3cccf4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3cccf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3cccf8:
    // 0x3cccf8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3cccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3cccfc:
    // 0x3cccfc: 0xc0cd518  jal         func_335460
label_3ccd00:
    if (ctx->pc == 0x3CCD00u) {
        ctx->pc = 0x3CCD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCCFCu;
        // 0x3ccd00: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD04u;
        goto label_3ccd04;
    }
    ctx->pc = 0x3CCCFCu;
    SET_GPR_U32(ctx, 31, 0x3CCD04u);
    ctx->pc = 0x3CCD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCCFCu;
    // 0x3ccd00: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CCCFCu, 0x3CCD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD04u;
label_3ccd04:
    // 0x3ccd04: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3ccd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3ccd08:
    // 0x3ccd08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ccd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd0c:
    // 0x3ccd0c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3ccd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3ccd10:
    // 0x3ccd10: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3ccd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ccd14:
    // 0x3ccd14: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3ccd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3ccd18:
    // 0x3ccd18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ccd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd1c:
    // 0x3ccd1c: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x3ccd1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3ccd20:
    // 0x3ccd20: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ccd20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ccd24:
    // 0x3ccd24: 0xc136b18  jal         func_4DAC60
label_3ccd28:
    if (ctx->pc == 0x3CCD28u) {
        ctx->pc = 0x3CCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD24u;
        // 0x3ccd28: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD2Cu;
        goto label_3ccd2c;
    }
    ctx->pc = 0x3CCD24u;
    SET_GPR_U32(ctx, 31, 0x3CCD2Cu);
    ctx->pc = 0x3CCD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD24u;
    // 0x3ccd28: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3CCD24u, 0x3CCD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD2Cu;
label_3ccd2c:
    // 0x3ccd2c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3ccd2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ccd30:
    // 0x3ccd30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3ccd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ccd34:
    // 0x3ccd34: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ccd34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ccd38:
    // 0x3ccd38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ccd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd3c:
    // 0x3ccd3c: 0x7e830030  sq          $v1, 0x30($s4)
    ctx->pc = 0x3ccd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 3));
label_3ccd40:
    // 0x3ccd40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ccd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ccd44:
    // 0x3ccd44: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x3ccd44u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
label_3ccd48:
    // 0x3ccd48: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3ccd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3ccd4c:
    // 0x3ccd4c: 0xc0e858c  jal         func_3A1630
label_3ccd50:
    if (ctx->pc == 0x3CCD50u) {
        ctx->pc = 0x3CCD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD4Cu;
        // 0x3ccd50: 0xaea6000c  sw          $a2, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD54u;
        goto label_3ccd54;
    }
    ctx->pc = 0x3CCD4Cu;
    SET_GPR_U32(ctx, 31, 0x3CCD54u);
    ctx->pc = 0x3CCD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD4Cu;
    // 0x3ccd50: 0xaea6000c  sw          $a2, 0xC($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CCD4Cu, 0x3CCD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD54u;
label_3ccd54:
    // 0x3ccd54: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3ccd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ccd58:
    // 0x3ccd58: 0x3c030420  lui         $v1, 0x420
    ctx->pc = 0x3ccd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1056 << 16));
label_3ccd5c:
    // 0x3ccd5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ccd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ccd60:
    // 0x3ccd60: 0x10000074  b           . + 4 + (0x74 << 2)
label_3ccd64:
    if (ctx->pc == 0x3CCD64u) {
        ctx->pc = 0x3CCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD60u;
        // 0x3ccd64: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD68u;
        goto label_3ccd68;
    }
    ctx->pc = 0x3CCD60u;
    {
        const bool branch_taken_0x3ccd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD60u;
        // 0x3ccd64: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccd60) {
            ctx->pc = 0x3CCF34u;
            goto label_3ccf34;
        }
    }
    ctx->pc = 0x3CCD68u;
label_3ccd68:
    // 0x3ccd68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ccd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ccd6c:
    // 0x3ccd6c: 0xc0ea12a  jal         func_3A84A8
label_3ccd70:
    if (ctx->pc == 0x3CCD70u) {
        ctx->pc = 0x3CCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD6Cu;
        // 0x3ccd70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD74u;
        goto label_3ccd74;
    }
    ctx->pc = 0x3CCD6Cu;
    SET_GPR_U32(ctx, 31, 0x3CCD74u);
    ctx->pc = 0x3CCD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD6Cu;
    // 0x3ccd70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CCD6Cu, 0x3CCD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD74u;
label_3ccd74:
    // 0x3ccd74: 0x3c120080  lui         $s2, 0x80
    ctx->pc = 0x3ccd74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)128 << 16));
label_3ccd78:
    // 0x3ccd78: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ccd78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ccd7c:
    // 0x3ccd7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ccd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ccd80:
    // 0x3ccd80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ccd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd84:
    // 0x3ccd84: 0xc0ea12a  jal         func_3A84A8
label_3ccd88:
    if (ctx->pc == 0x3CCD88u) {
        ctx->pc = 0x3CCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD84u;
        // 0x3ccd88: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD8Cu;
        goto label_3ccd8c;
    }
    ctx->pc = 0x3CCD84u;
    SET_GPR_U32(ctx, 31, 0x3CCD8Cu);
    ctx->pc = 0x3CCD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD84u;
    // 0x3ccd88: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CCD84u, 0x3CCD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD8Cu;
label_3ccd8c:
    // 0x3ccd8c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ccd8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ccd90:
    // 0x3ccd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ccd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd94:
    // 0x3ccd94: 0xc0ea146  jal         func_3A8518
label_3ccd98:
    if (ctx->pc == 0x3CCD98u) {
        ctx->pc = 0x3CCD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD94u;
        // 0x3ccd98: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD9Cu;
        goto label_3ccd9c;
    }
    ctx->pc = 0x3CCD94u;
    SET_GPR_U32(ctx, 31, 0x3CCD9Cu);
    ctx->pc = 0x3CCD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD94u;
    // 0x3ccd98: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CCD94u, 0x3CCD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD9Cu;
label_3ccd9c:
    // 0x3ccd9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ccd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ccda0:
    // 0x3ccda0: 0xc0ea146  jal         func_3A8518
label_3ccda4:
    if (ctx->pc == 0x3CCDA4u) {
        ctx->pc = 0x3CCDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDA0u;
        // 0x3ccda4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCDA8u;
        goto label_3ccda8;
    }
    ctx->pc = 0x3CCDA0u;
    SET_GPR_U32(ctx, 31, 0x3CCDA8u);
    ctx->pc = 0x3CCDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCDA0u;
    // 0x3ccda4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CCDA0u, 0x3CCDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCDA8u;
label_3ccda8:
    // 0x3ccda8: 0xc0ea14c  jal         func_3A8530
label_3ccdac:
    if (ctx->pc == 0x3CCDACu) {
        ctx->pc = 0x3CCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDA8u;
        // 0x3ccdac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCDB0u;
        goto label_3ccdb0;
    }
    ctx->pc = 0x3CCDA8u;
    SET_GPR_U32(ctx, 31, 0x3CCDB0u);
    ctx->pc = 0x3CCDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCDA8u;
    // 0x3ccdac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CCDA8u, 0x3CCDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCDB0u;
label_3ccdb0:
    // 0x3ccdb0: 0xc0ea14c  jal         func_3A8530
label_3ccdb4:
    if (ctx->pc == 0x3CCDB4u) {
        ctx->pc = 0x3CCDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDB0u;
        // 0x3ccdb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCDB8u;
        goto label_3ccdb8;
    }
    ctx->pc = 0x3CCDB0u;
    SET_GPR_U32(ctx, 31, 0x3CCDB8u);
    ctx->pc = 0x3CCDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCDB0u;
    // 0x3ccdb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CCDB0u, 0x3CCDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCDB8u;
label_3ccdb8:
    // 0x3ccdb8: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3ccdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ccdbc:
    // 0x3ccdbc: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x3ccdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_3ccdc0:
    // 0x3ccdc0: 0x5460005d  bnel        $v1, $zero, . + 4 + (0x5D << 2)
label_3ccdc4:
    if (ctx->pc == 0x3CCDC4u) {
        ctx->pc = 0x3CCDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDC0u;
        // 0x3ccdc4: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCDC8u;
        goto label_3ccdc8;
    }
    ctx->pc = 0x3CCDC0u;
    {
        const bool branch_taken_0x3ccdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ccdc0) {
            ctx->pc = 0x3CCDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCDC0u;
            // 0x3ccdc4: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCF38u;
            goto label_3ccf38;
        }
    }
    ctx->pc = 0x3CCDC8u;
label_3ccdc8:
    // 0x3ccdc8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x3ccdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_3ccdcc:
    // 0x3ccdcc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3ccdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ccdd0:
    // 0x3ccdd0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_3ccdd4:
    if (ctx->pc == 0x3CCDD4u) {
        ctx->pc = 0x3CCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDD0u;
        // 0x3ccdd4: 0xaea30014  sw          $v1, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCDD8u;
        goto label_3ccdd8;
    }
    ctx->pc = 0x3CCDD0u;
    {
        const bool branch_taken_0x3ccdd0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3CCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDD0u;
        // 0x3ccdd4: 0xaea30014  sw          $v1, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccdd0) {
            ctx->pc = 0x3CCDE0u;
            goto label_3ccde0;
        }
    }
    ctx->pc = 0x3CCDD8u;
label_3ccdd8:
    // 0x3ccdd8: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3ccddc:
    if (ctx->pc == 0x3CCDDCu) {
        ctx->pc = 0x3CCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDD8u;
        // 0x3ccddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCDE0u;
        goto label_3ccde0;
    }
    ctx->pc = 0x3CCDD8u;
    {
        const bool branch_taken_0x3ccdd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDD8u;
        // 0x3ccddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccdd8) {
            ctx->pc = 0x3CCE1Cu;
            goto label_3cce1c;
        }
    }
    ctx->pc = 0x3CCDE0u;
label_3ccde0:
    // 0x3ccde0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3ccde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ccde4:
    // 0x3ccde4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3ccde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ccde8:
    // 0x3ccde8: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
label_3ccdec:
    if (ctx->pc == 0x3CCDECu) {
        ctx->pc = 0x3CCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDE8u;
        // 0x3ccdec: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCDF0u;
        goto label_3ccdf0;
    }
    ctx->pc = 0x3CCDE8u;
    {
        const bool branch_taken_0x3ccde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDE8u;
        // 0x3ccdec: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccde8) {
            ctx->pc = 0x3CCF38u;
            goto label_3ccf38;
        }
    }
    ctx->pc = 0x3CCDF0u;
label_3ccdf0:
    // 0x3ccdf0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3ccdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ccdf4:
    // 0x3ccdf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ccdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ccdf8:
    // 0x3ccdf8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3ccdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3ccdfc:
    // 0x3ccdfc: 0xc0e858c  jal         func_3A1630
label_3cce00:
    if (ctx->pc == 0x3CCE00u) {
        ctx->pc = 0x3CCE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDFCu;
        // 0x3cce00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE04u;
        goto label_3cce04;
    }
    ctx->pc = 0x3CCDFCu;
    SET_GPR_U32(ctx, 31, 0x3CCE04u);
    ctx->pc = 0x3CCE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCDFCu;
    // 0x3cce00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CCDFCu, 0x3CCE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE04u;
label_3cce04:
    // 0x3cce04: 0x9683006e  lhu         $v1, 0x6E($s4)
    ctx->pc = 0x3cce04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 110)));
label_3cce08:
    // 0x3cce08: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x3cce08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
label_3cce0c:
    // 0x3cce0c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3cce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3cce10:
    // 0x3cce10: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x3cce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_3cce14:
    // 0x3cce14: 0x10000047  b           . + 4 + (0x47 << 2)
label_3cce18:
    if (ctx->pc == 0x3CCE18u) {
        ctx->pc = 0x3CCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE14u;
        // 0x3cce18: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE1Cu;
        goto label_3cce1c;
    }
    ctx->pc = 0x3CCE14u;
    {
        const bool branch_taken_0x3cce14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE14u;
        // 0x3cce18: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cce14) {
            ctx->pc = 0x3CCF34u;
            goto label_3ccf34;
        }
    }
    ctx->pc = 0x3CCE1Cu;
label_3cce1c:
    // 0x3cce1c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3cce20:
    if (ctx->pc == 0x3CCE20u) {
        ctx->pc = 0x3CCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE1Cu;
        // 0x3cce20: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE24u;
        goto label_3cce24;
    }
    ctx->pc = 0x3CCE1Cu;
    {
        const bool branch_taken_0x3cce1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE1Cu;
        // 0x3cce20: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cce1c) {
            ctx->pc = 0x3CCE2Cu;
            goto label_3cce2c;
        }
    }
    ctx->pc = 0x3CCE24u;
label_3cce24:
    // 0x3cce24: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x3cce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_3cce28:
    // 0x3cce28: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x3cce28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_3cce2c:
    // 0x3cce2c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3cce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3cce30:
    // 0x3cce30: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3cce30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3cce34:
    // 0x3cce34: 0xc0cd4ee  jal         func_3353B8
label_3cce38:
    if (ctx->pc == 0x3CCE38u) {
        ctx->pc = 0x3CCE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE34u;
        // 0x3cce38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE3Cu;
        goto label_3cce3c;
    }
    ctx->pc = 0x3CCE34u;
    SET_GPR_U32(ctx, 31, 0x3CCE3Cu);
    ctx->pc = 0x3CCE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCE34u;
    // 0x3cce38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3CCE34u, 0x3CCE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE3Cu;
label_3cce3c:
    // 0x3cce3c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x3cce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_3cce40:
    // 0x3cce40: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x3cce40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3cce44:
    // 0x3cce44: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3cce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_3cce48:
    // 0x3cce48: 0xc46c48ec  lwc1        $f12, 0x48EC($v1)
    ctx->pc = 0x3cce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cce4c:
    // 0x3cce4c: 0x3c013ef5  lui         $at, 0x3EF5
    ctx->pc = 0x3cce4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16117 << 16));
label_3cce50:
    // 0x3cce50: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3cce50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3cce54:
    // 0x3cce54: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3cce54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3cce58:
    // 0x3cce58: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x3cce58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_3cce5c:
    // 0x3cce5c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x3cce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_3cce60:
    // 0x3cce60: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x3cce60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3cce64:
    // 0x3cce64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cce64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cce68:
    // 0x3cce68: 0x265248d8  addiu       $s2, $s2, 0x48D8
    ctx->pc = 0x3cce68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18648));
label_3cce6c:
    // 0x3cce6c: 0xc0cd518  jal         func_335460
label_3cce70:
    if (ctx->pc == 0x3CCE70u) {
        ctx->pc = 0x3CCE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE6Cu;
        // 0x3cce70: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE74u;
        goto label_3cce74;
    }
    ctx->pc = 0x3CCE6Cu;
    SET_GPR_U32(ctx, 31, 0x3CCE74u);
    ctx->pc = 0x3CCE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCE6Cu;
    // 0x3cce70: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CCE6Cu, 0x3CCE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE74u;
label_3cce74:
    // 0x3cce74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cce74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cce78:
    // 0x3cce78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3cce78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cce7c:
    // 0x3cce7c: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3cce7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3cce80:
    // 0x3cce80: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3cce80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3cce84:
    // 0x3cce84: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3cce84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cce88:
    // 0x3cce88: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3cce88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3cce8c:
    // 0x3cce8c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x3cce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_3cce90:
    // 0x3cce90: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3cce90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3cce94:
    // 0x3cce94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cce98:
    // 0x3cce98: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x3cce98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cce9c:
    // 0x3cce9c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3cce9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ccea0:
    // 0x3ccea0: 0xc136b18  jal         func_4DAC60
label_3ccea4:
    if (ctx->pc == 0x3CCEA4u) {
        ctx->pc = 0x3CCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEA0u;
        // 0x3ccea4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCEA8u;
        goto label_3ccea8;
    }
    ctx->pc = 0x3CCEA0u;
    SET_GPR_U32(ctx, 31, 0x3CCEA8u);
    ctx->pc = 0x3CCEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCEA0u;
    // 0x3ccea4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3CCEA0u, 0x3CCEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCEA8u;
label_3ccea8:
    // 0x3ccea8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ccea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cceac:
    // 0x3cceac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cceacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cceb0:
    // 0x3cceb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3cceb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3cceb4:
    // 0x3cceb4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3cceb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3cceb8:
    // 0x3cceb8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3cceb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ccebc:
    // 0x3ccebc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3ccebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3ccec0:
    // 0x3ccec0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ccec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ccec4:
    // 0x3ccec4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ccec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ccec8:
    // 0x3ccec8: 0xc0cd518  jal         func_335460
label_3ccecc:
    if (ctx->pc == 0x3CCECCu) {
        ctx->pc = 0x3CCECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEC8u;
        // 0x3ccecc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCED0u;
        goto label_3cced0;
    }
    ctx->pc = 0x3CCEC8u;
    SET_GPR_U32(ctx, 31, 0x3CCED0u);
    ctx->pc = 0x3CCECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCEC8u;
    // 0x3ccecc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CCEC8u, 0x3CCED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCED0u;
label_3cced0:
    // 0x3cced0: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3cced0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3cced4:
    // 0x3cced4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3cced4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3cced8:
    // 0x3cced8: 0xc136b24  jal         func_4DAC90
label_3ccedc:
    if (ctx->pc == 0x3CCEDCu) {
        ctx->pc = 0x3CCEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCED8u;
        // 0x3ccedc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCEE0u;
        goto label_3ccee0;
    }
    ctx->pc = 0x3CCED8u;
    SET_GPR_U32(ctx, 31, 0x3CCEE0u);
    ctx->pc = 0x3CCEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCED8u;
    // 0x3ccedc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3CCED8u, 0x3CCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCEE0u;
label_3ccee0:
    // 0x3ccee0: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3ccee0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3ccee4:
    // 0x3ccee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ccee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ccee8:
    // 0x3ccee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ccee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cceec:
    // 0x3cceec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cceecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ccef0:
    // 0x3ccef0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3ccef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3ccef4:
    // 0x3ccef4: 0xc0e9f84  jal         func_3A7E10
label_3ccef8:
    if (ctx->pc == 0x3CCEF8u) {
        ctx->pc = 0x3CCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEF4u;
        // 0x3ccef8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCEFCu;
        goto label_3ccefc;
    }
    ctx->pc = 0x3CCEF4u;
    SET_GPR_U32(ctx, 31, 0x3CCEFCu);
    ctx->pc = 0x3CCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCEF4u;
    // 0x3ccef8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3CCEF4u, 0x3CCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCEFCu;
label_3ccefc:
    // 0x3ccefc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ccefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ccf00:
    // 0x3ccf00: 0xc0f15bc  jal         func_3C56F0
label_3ccf04:
    if (ctx->pc == 0x3CCF04u) {
        ctx->pc = 0x3CCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF00u;
        // 0x3ccf04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF08u;
        goto label_3ccf08;
    }
    ctx->pc = 0x3CCF00u;
    SET_GPR_U32(ctx, 31, 0x3CCF08u);
    ctx->pc = 0x3CCF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF00u;
    // 0x3ccf04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CCF00u, 0x3CCF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF08u;
label_3ccf08:
    // 0x3ccf08: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ccf0c:
    if (ctx->pc == 0x3CCF0Cu) {
        ctx->pc = 0x3CCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF08u;
        // 0x3ccf0c: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF10u;
        goto label_3ccf10;
    }
    ctx->pc = 0x3CCF08u;
    {
        const bool branch_taken_0x3ccf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF08u;
        // 0x3ccf0c: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccf08) {
            ctx->pc = 0x3CCF38u;
            goto label_3ccf38;
        }
    }
    ctx->pc = 0x3CCF10u;
label_3ccf10:
    // 0x3ccf10: 0x8ea70018  lw          $a3, 0x18($s5)
    ctx->pc = 0x3ccf10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3ccf14:
    // 0x3ccf14: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3ccf18:
    if (ctx->pc == 0x3CCF18u) {
        ctx->pc = 0x3CCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF14u;
        // 0x3ccf18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF1Cu;
        goto label_3ccf1c;
    }
    ctx->pc = 0x3CCF14u;
    {
        const bool branch_taken_0x3ccf14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF14u;
        // 0x3ccf18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccf14) {
            ctx->pc = 0x3CCF34u;
            goto label_3ccf34;
        }
    }
    ctx->pc = 0x3CCF1Cu;
label_3ccf1c:
    // 0x3ccf1c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ccf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ccf20:
    // 0x3ccf20: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3ccf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3ccf24:
    // 0x3ccf24: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ccf24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ccf28:
    // 0x3ccf28: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ccf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ccf2c:
    // 0x3ccf2c: 0x60f809  jalr        $v1
label_3ccf30:
    if (ctx->pc == 0x3CCF30u) {
        ctx->pc = 0x3CCF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF2Cu;
        // 0x3ccf30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF34u;
        goto label_3ccf34;
    }
    ctx->pc = 0x3CCF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CCF34u);
        ctx->pc = 0x3CCF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF2Cu;
        // 0x3ccf30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCF2Cu, 0x3CCF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CCF34u;
label_3ccf34:
    // 0x3ccf34: 0x7bb004f0  lq          $s0, 0x4F0($sp)
    ctx->pc = 0x3ccf34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3ccf38:
    // 0x3ccf38: 0x7bb104e0  lq          $s1, 0x4E0($sp)
    ctx->pc = 0x3ccf38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3ccf3c:
    // 0x3ccf3c: 0x7bb204d0  lq          $s2, 0x4D0($sp)
    ctx->pc = 0x3ccf3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3ccf40:
    // 0x3ccf40: 0x7bb304c0  lq          $s3, 0x4C0($sp)
    ctx->pc = 0x3ccf40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3ccf44:
    // 0x3ccf44: 0x7bb404b0  lq          $s4, 0x4B0($sp)
    ctx->pc = 0x3ccf44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3ccf48:
    // 0x3ccf48: 0x7bb504a0  lq          $s5, 0x4A0($sp)
    ctx->pc = 0x3ccf48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3ccf4c:
    // 0x3ccf4c: 0xdfbf0490  ld          $ra, 0x490($sp)
    ctx->pc = 0x3ccf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_3ccf50:
    // 0x3ccf50: 0xc7b60510  lwc1        $f22, 0x510($sp)
    ctx->pc = 0x3ccf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ccf54:
    // 0x3ccf54: 0xc7b50508  lwc1        $f21, 0x508($sp)
    ctx->pc = 0x3ccf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ccf58:
    // 0x3ccf58: 0xc7b40500  lwc1        $f20, 0x500($sp)
    ctx->pc = 0x3ccf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ccf5c:
    // 0x3ccf5c: 0x3e00008  jr          $ra
label_3ccf60:
    if (ctx->pc == 0x3CCF60u) {
        ctx->pc = 0x3CCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF5Cu;
        // 0x3ccf60: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF64u;
        goto label_3ccf64;
    }
    ctx->pc = 0x3CCF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF5Cu;
        // 0x3ccf60: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCF64u;
label_3ccf64:
    // 0x3ccf64: 0x0  nop
    ctx->pc = 0x3ccf64u;
    // NOP
    ctx->pc = 0x3ccf68u;
}
