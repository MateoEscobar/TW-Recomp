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

// Function: sub_002BA878
// Address: 0x2ba878 - 0x2bada8
void sub_002BA878_0x2ba878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA878_0x2ba878");
#endif

    switch (ctx->pc) {
        case 0x2ba878u: goto label_2ba878;
        case 0x2ba87cu: goto label_2ba87c;
        case 0x2ba880u: goto label_2ba880;
        case 0x2ba884u: goto label_2ba884;
        case 0x2ba888u: goto label_2ba888;
        case 0x2ba88cu: goto label_2ba88c;
        case 0x2ba890u: goto label_2ba890;
        case 0x2ba894u: goto label_2ba894;
        case 0x2ba898u: goto label_2ba898;
        case 0x2ba89cu: goto label_2ba89c;
        case 0x2ba8a0u: goto label_2ba8a0;
        case 0x2ba8a4u: goto label_2ba8a4;
        case 0x2ba8a8u: goto label_2ba8a8;
        case 0x2ba8acu: goto label_2ba8ac;
        case 0x2ba8b0u: goto label_2ba8b0;
        case 0x2ba8b4u: goto label_2ba8b4;
        case 0x2ba8b8u: goto label_2ba8b8;
        case 0x2ba8bcu: goto label_2ba8bc;
        case 0x2ba8c0u: goto label_2ba8c0;
        case 0x2ba8c4u: goto label_2ba8c4;
        case 0x2ba8c8u: goto label_2ba8c8;
        case 0x2ba8ccu: goto label_2ba8cc;
        case 0x2ba8d0u: goto label_2ba8d0;
        case 0x2ba8d4u: goto label_2ba8d4;
        case 0x2ba8d8u: goto label_2ba8d8;
        case 0x2ba8dcu: goto label_2ba8dc;
        case 0x2ba8e0u: goto label_2ba8e0;
        case 0x2ba8e4u: goto label_2ba8e4;
        case 0x2ba8e8u: goto label_2ba8e8;
        case 0x2ba8ecu: goto label_2ba8ec;
        case 0x2ba8f0u: goto label_2ba8f0;
        case 0x2ba8f4u: goto label_2ba8f4;
        case 0x2ba8f8u: goto label_2ba8f8;
        case 0x2ba8fcu: goto label_2ba8fc;
        case 0x2ba900u: goto label_2ba900;
        case 0x2ba904u: goto label_2ba904;
        case 0x2ba908u: goto label_2ba908;
        case 0x2ba90cu: goto label_2ba90c;
        case 0x2ba910u: goto label_2ba910;
        case 0x2ba914u: goto label_2ba914;
        case 0x2ba918u: goto label_2ba918;
        case 0x2ba91cu: goto label_2ba91c;
        case 0x2ba920u: goto label_2ba920;
        case 0x2ba924u: goto label_2ba924;
        case 0x2ba928u: goto label_2ba928;
        case 0x2ba92cu: goto label_2ba92c;
        case 0x2ba930u: goto label_2ba930;
        case 0x2ba934u: goto label_2ba934;
        case 0x2ba938u: goto label_2ba938;
        case 0x2ba93cu: goto label_2ba93c;
        case 0x2ba940u: goto label_2ba940;
        case 0x2ba944u: goto label_2ba944;
        case 0x2ba948u: goto label_2ba948;
        case 0x2ba94cu: goto label_2ba94c;
        case 0x2ba950u: goto label_2ba950;
        case 0x2ba954u: goto label_2ba954;
        case 0x2ba958u: goto label_2ba958;
        case 0x2ba95cu: goto label_2ba95c;
        case 0x2ba960u: goto label_2ba960;
        case 0x2ba964u: goto label_2ba964;
        case 0x2ba968u: goto label_2ba968;
        case 0x2ba96cu: goto label_2ba96c;
        case 0x2ba970u: goto label_2ba970;
        case 0x2ba974u: goto label_2ba974;
        case 0x2ba978u: goto label_2ba978;
        case 0x2ba97cu: goto label_2ba97c;
        case 0x2ba980u: goto label_2ba980;
        case 0x2ba984u: goto label_2ba984;
        case 0x2ba988u: goto label_2ba988;
        case 0x2ba98cu: goto label_2ba98c;
        case 0x2ba990u: goto label_2ba990;
        case 0x2ba994u: goto label_2ba994;
        case 0x2ba998u: goto label_2ba998;
        case 0x2ba99cu: goto label_2ba99c;
        case 0x2ba9a0u: goto label_2ba9a0;
        case 0x2ba9a4u: goto label_2ba9a4;
        case 0x2ba9a8u: goto label_2ba9a8;
        case 0x2ba9acu: goto label_2ba9ac;
        case 0x2ba9b0u: goto label_2ba9b0;
        case 0x2ba9b4u: goto label_2ba9b4;
        case 0x2ba9b8u: goto label_2ba9b8;
        case 0x2ba9bcu: goto label_2ba9bc;
        case 0x2ba9c0u: goto label_2ba9c0;
        case 0x2ba9c4u: goto label_2ba9c4;
        case 0x2ba9c8u: goto label_2ba9c8;
        case 0x2ba9ccu: goto label_2ba9cc;
        case 0x2ba9d0u: goto label_2ba9d0;
        case 0x2ba9d4u: goto label_2ba9d4;
        case 0x2ba9d8u: goto label_2ba9d8;
        case 0x2ba9dcu: goto label_2ba9dc;
        case 0x2ba9e0u: goto label_2ba9e0;
        case 0x2ba9e4u: goto label_2ba9e4;
        case 0x2ba9e8u: goto label_2ba9e8;
        case 0x2ba9ecu: goto label_2ba9ec;
        case 0x2ba9f0u: goto label_2ba9f0;
        case 0x2ba9f4u: goto label_2ba9f4;
        case 0x2ba9f8u: goto label_2ba9f8;
        case 0x2ba9fcu: goto label_2ba9fc;
        case 0x2baa00u: goto label_2baa00;
        case 0x2baa04u: goto label_2baa04;
        case 0x2baa08u: goto label_2baa08;
        case 0x2baa0cu: goto label_2baa0c;
        case 0x2baa10u: goto label_2baa10;
        case 0x2baa14u: goto label_2baa14;
        case 0x2baa18u: goto label_2baa18;
        case 0x2baa1cu: goto label_2baa1c;
        case 0x2baa20u: goto label_2baa20;
        case 0x2baa24u: goto label_2baa24;
        case 0x2baa28u: goto label_2baa28;
        case 0x2baa2cu: goto label_2baa2c;
        case 0x2baa30u: goto label_2baa30;
        case 0x2baa34u: goto label_2baa34;
        case 0x2baa38u: goto label_2baa38;
        case 0x2baa3cu: goto label_2baa3c;
        case 0x2baa40u: goto label_2baa40;
        case 0x2baa44u: goto label_2baa44;
        case 0x2baa48u: goto label_2baa48;
        case 0x2baa4cu: goto label_2baa4c;
        case 0x2baa50u: goto label_2baa50;
        case 0x2baa54u: goto label_2baa54;
        case 0x2baa58u: goto label_2baa58;
        case 0x2baa5cu: goto label_2baa5c;
        case 0x2baa60u: goto label_2baa60;
        case 0x2baa64u: goto label_2baa64;
        case 0x2baa68u: goto label_2baa68;
        case 0x2baa6cu: goto label_2baa6c;
        case 0x2baa70u: goto label_2baa70;
        case 0x2baa74u: goto label_2baa74;
        case 0x2baa78u: goto label_2baa78;
        case 0x2baa7cu: goto label_2baa7c;
        case 0x2baa80u: goto label_2baa80;
        case 0x2baa84u: goto label_2baa84;
        case 0x2baa88u: goto label_2baa88;
        case 0x2baa8cu: goto label_2baa8c;
        case 0x2baa90u: goto label_2baa90;
        case 0x2baa94u: goto label_2baa94;
        case 0x2baa98u: goto label_2baa98;
        case 0x2baa9cu: goto label_2baa9c;
        case 0x2baaa0u: goto label_2baaa0;
        case 0x2baaa4u: goto label_2baaa4;
        case 0x2baaa8u: goto label_2baaa8;
        case 0x2baaacu: goto label_2baaac;
        case 0x2baab0u: goto label_2baab0;
        case 0x2baab4u: goto label_2baab4;
        case 0x2baab8u: goto label_2baab8;
        case 0x2baabcu: goto label_2baabc;
        case 0x2baac0u: goto label_2baac0;
        case 0x2baac4u: goto label_2baac4;
        case 0x2baac8u: goto label_2baac8;
        case 0x2baaccu: goto label_2baacc;
        case 0x2baad0u: goto label_2baad0;
        case 0x2baad4u: goto label_2baad4;
        case 0x2baad8u: goto label_2baad8;
        case 0x2baadcu: goto label_2baadc;
        case 0x2baae0u: goto label_2baae0;
        case 0x2baae4u: goto label_2baae4;
        case 0x2baae8u: goto label_2baae8;
        case 0x2baaecu: goto label_2baaec;
        case 0x2baaf0u: goto label_2baaf0;
        case 0x2baaf4u: goto label_2baaf4;
        case 0x2baaf8u: goto label_2baaf8;
        case 0x2baafcu: goto label_2baafc;
        case 0x2bab00u: goto label_2bab00;
        case 0x2bab04u: goto label_2bab04;
        case 0x2bab08u: goto label_2bab08;
        case 0x2bab0cu: goto label_2bab0c;
        case 0x2bab10u: goto label_2bab10;
        case 0x2bab14u: goto label_2bab14;
        case 0x2bab18u: goto label_2bab18;
        case 0x2bab1cu: goto label_2bab1c;
        case 0x2bab20u: goto label_2bab20;
        case 0x2bab24u: goto label_2bab24;
        case 0x2bab28u: goto label_2bab28;
        case 0x2bab2cu: goto label_2bab2c;
        case 0x2bab30u: goto label_2bab30;
        case 0x2bab34u: goto label_2bab34;
        case 0x2bab38u: goto label_2bab38;
        case 0x2bab3cu: goto label_2bab3c;
        case 0x2bab40u: goto label_2bab40;
        case 0x2bab44u: goto label_2bab44;
        case 0x2bab48u: goto label_2bab48;
        case 0x2bab4cu: goto label_2bab4c;
        case 0x2bab50u: goto label_2bab50;
        case 0x2bab54u: goto label_2bab54;
        case 0x2bab58u: goto label_2bab58;
        case 0x2bab5cu: goto label_2bab5c;
        case 0x2bab60u: goto label_2bab60;
        case 0x2bab64u: goto label_2bab64;
        case 0x2bab68u: goto label_2bab68;
        case 0x2bab6cu: goto label_2bab6c;
        case 0x2bab70u: goto label_2bab70;
        case 0x2bab74u: goto label_2bab74;
        case 0x2bab78u: goto label_2bab78;
        case 0x2bab7cu: goto label_2bab7c;
        case 0x2bab80u: goto label_2bab80;
        case 0x2bab84u: goto label_2bab84;
        case 0x2bab88u: goto label_2bab88;
        case 0x2bab8cu: goto label_2bab8c;
        case 0x2bab90u: goto label_2bab90;
        case 0x2bab94u: goto label_2bab94;
        case 0x2bab98u: goto label_2bab98;
        case 0x2bab9cu: goto label_2bab9c;
        case 0x2baba0u: goto label_2baba0;
        case 0x2baba4u: goto label_2baba4;
        case 0x2baba8u: goto label_2baba8;
        case 0x2babacu: goto label_2babac;
        case 0x2babb0u: goto label_2babb0;
        case 0x2babb4u: goto label_2babb4;
        case 0x2babb8u: goto label_2babb8;
        case 0x2babbcu: goto label_2babbc;
        case 0x2babc0u: goto label_2babc0;
        case 0x2babc4u: goto label_2babc4;
        case 0x2babc8u: goto label_2babc8;
        case 0x2babccu: goto label_2babcc;
        case 0x2babd0u: goto label_2babd0;
        case 0x2babd4u: goto label_2babd4;
        case 0x2babd8u: goto label_2babd8;
        case 0x2babdcu: goto label_2babdc;
        case 0x2babe0u: goto label_2babe0;
        case 0x2babe4u: goto label_2babe4;
        case 0x2babe8u: goto label_2babe8;
        case 0x2babecu: goto label_2babec;
        case 0x2babf0u: goto label_2babf0;
        case 0x2babf4u: goto label_2babf4;
        case 0x2babf8u: goto label_2babf8;
        case 0x2babfcu: goto label_2babfc;
        case 0x2bac00u: goto label_2bac00;
        case 0x2bac04u: goto label_2bac04;
        case 0x2bac08u: goto label_2bac08;
        case 0x2bac0cu: goto label_2bac0c;
        case 0x2bac10u: goto label_2bac10;
        case 0x2bac14u: goto label_2bac14;
        case 0x2bac18u: goto label_2bac18;
        case 0x2bac1cu: goto label_2bac1c;
        case 0x2bac20u: goto label_2bac20;
        case 0x2bac24u: goto label_2bac24;
        case 0x2bac28u: goto label_2bac28;
        case 0x2bac2cu: goto label_2bac2c;
        case 0x2bac30u: goto label_2bac30;
        case 0x2bac34u: goto label_2bac34;
        case 0x2bac38u: goto label_2bac38;
        case 0x2bac3cu: goto label_2bac3c;
        case 0x2bac40u: goto label_2bac40;
        case 0x2bac44u: goto label_2bac44;
        case 0x2bac48u: goto label_2bac48;
        case 0x2bac4cu: goto label_2bac4c;
        case 0x2bac50u: goto label_2bac50;
        case 0x2bac54u: goto label_2bac54;
        case 0x2bac58u: goto label_2bac58;
        case 0x2bac5cu: goto label_2bac5c;
        case 0x2bac60u: goto label_2bac60;
        case 0x2bac64u: goto label_2bac64;
        case 0x2bac68u: goto label_2bac68;
        case 0x2bac6cu: goto label_2bac6c;
        case 0x2bac70u: goto label_2bac70;
        case 0x2bac74u: goto label_2bac74;
        case 0x2bac78u: goto label_2bac78;
        case 0x2bac7cu: goto label_2bac7c;
        case 0x2bac80u: goto label_2bac80;
        case 0x2bac84u: goto label_2bac84;
        case 0x2bac88u: goto label_2bac88;
        case 0x2bac8cu: goto label_2bac8c;
        case 0x2bac90u: goto label_2bac90;
        case 0x2bac94u: goto label_2bac94;
        case 0x2bac98u: goto label_2bac98;
        case 0x2bac9cu: goto label_2bac9c;
        case 0x2baca0u: goto label_2baca0;
        case 0x2baca4u: goto label_2baca4;
        case 0x2baca8u: goto label_2baca8;
        case 0x2bacacu: goto label_2bacac;
        case 0x2bacb0u: goto label_2bacb0;
        case 0x2bacb4u: goto label_2bacb4;
        case 0x2bacb8u: goto label_2bacb8;
        case 0x2bacbcu: goto label_2bacbc;
        case 0x2bacc0u: goto label_2bacc0;
        case 0x2bacc4u: goto label_2bacc4;
        case 0x2bacc8u: goto label_2bacc8;
        case 0x2bacccu: goto label_2baccc;
        case 0x2bacd0u: goto label_2bacd0;
        case 0x2bacd4u: goto label_2bacd4;
        case 0x2bacd8u: goto label_2bacd8;
        case 0x2bacdcu: goto label_2bacdc;
        case 0x2bace0u: goto label_2bace0;
        case 0x2bace4u: goto label_2bace4;
        case 0x2bace8u: goto label_2bace8;
        case 0x2bacecu: goto label_2bacec;
        case 0x2bacf0u: goto label_2bacf0;
        case 0x2bacf4u: goto label_2bacf4;
        case 0x2bacf8u: goto label_2bacf8;
        case 0x2bacfcu: goto label_2bacfc;
        case 0x2bad00u: goto label_2bad00;
        case 0x2bad04u: goto label_2bad04;
        case 0x2bad08u: goto label_2bad08;
        case 0x2bad0cu: goto label_2bad0c;
        case 0x2bad10u: goto label_2bad10;
        case 0x2bad14u: goto label_2bad14;
        case 0x2bad18u: goto label_2bad18;
        case 0x2bad1cu: goto label_2bad1c;
        case 0x2bad20u: goto label_2bad20;
        case 0x2bad24u: goto label_2bad24;
        case 0x2bad28u: goto label_2bad28;
        case 0x2bad2cu: goto label_2bad2c;
        case 0x2bad30u: goto label_2bad30;
        case 0x2bad34u: goto label_2bad34;
        case 0x2bad38u: goto label_2bad38;
        case 0x2bad3cu: goto label_2bad3c;
        case 0x2bad40u: goto label_2bad40;
        case 0x2bad44u: goto label_2bad44;
        case 0x2bad48u: goto label_2bad48;
        case 0x2bad4cu: goto label_2bad4c;
        case 0x2bad50u: goto label_2bad50;
        case 0x2bad54u: goto label_2bad54;
        case 0x2bad58u: goto label_2bad58;
        case 0x2bad5cu: goto label_2bad5c;
        case 0x2bad60u: goto label_2bad60;
        case 0x2bad64u: goto label_2bad64;
        case 0x2bad68u: goto label_2bad68;
        case 0x2bad6cu: goto label_2bad6c;
        case 0x2bad70u: goto label_2bad70;
        case 0x2bad74u: goto label_2bad74;
        case 0x2bad78u: goto label_2bad78;
        case 0x2bad7cu: goto label_2bad7c;
        case 0x2bad80u: goto label_2bad80;
        case 0x2bad84u: goto label_2bad84;
        case 0x2bad88u: goto label_2bad88;
        case 0x2bad8cu: goto label_2bad8c;
        case 0x2bad90u: goto label_2bad90;
        case 0x2bad94u: goto label_2bad94;
        case 0x2bad98u: goto label_2bad98;
        case 0x2bad9cu: goto label_2bad9c;
        case 0x2bada0u: goto label_2bada0;
        case 0x2bada4u: goto label_2bada4;
        default: break;
    }

    ctx->pc = 0x2ba878u;

label_2ba878:
    // 0x2ba878: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ba878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2ba87c:
    // 0x2ba87c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2ba87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2ba880:
    // 0x2ba880: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2ba880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2ba884:
    // 0x2ba884: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2ba884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2ba888:
    // 0x2ba888: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ba888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2ba88c:
    // 0x2ba88c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba890:
    // 0x2ba890: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2ba890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2ba894:
    // 0x2ba894: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2ba894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2ba898:
    // 0x2ba898: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2ba898u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ba89c:
    // 0x2ba89c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2ba89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2ba8a0:
    // 0x2ba8a0: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2ba8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2ba8a4:
    // 0x2ba8a4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2ba8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2ba8a8:
    // 0x2ba8a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ba8ac:
    // 0x2ba8ac: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2ba8acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2ba8b0:
    // 0x2ba8b0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2ba8b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2ba8b4:
    // 0x2ba8b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ba8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba8b8:
    // 0x2ba8b8: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2ba8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba8bc:
    // 0x2ba8bc: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2ba8bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2ba8c0:
    // 0x2ba8c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ba8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ba8c4:
    // 0x2ba8c4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ba8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2ba8c8:
    // 0x2ba8c8: 0xc08a08a  jal         func_228228
label_2ba8cc:
    if (ctx->pc == 0x2BA8CCu) {
        ctx->pc = 0x2BA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8C8u;
        // 0x2ba8cc: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8D0u;
        goto label_2ba8d0;
    }
    ctx->pc = 0x2BA8C8u;
    SET_GPR_U32(ctx, 31, 0x2BA8D0u);
    ctx->pc = 0x2BA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA8C8u;
    // 0x2ba8cc: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2BA8C8u, 0x2BA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8D0u;
label_2ba8d0:
    // 0x2ba8d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ba8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba8d4:
    // 0x2ba8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba8d8:
    // 0x2ba8d8: 0x56020011  bnel        $s0, $v0, . + 4 + (0x11 << 2)
label_2ba8dc:
    if (ctx->pc == 0x2BA8DCu) {
        ctx->pc = 0x2BA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8D8u;
        // 0x2ba8dc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8E0u;
        goto label_2ba8e0;
    }
    ctx->pc = 0x2BA8D8u;
    {
        const bool branch_taken_0x2ba8d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba8d8) {
            ctx->pc = 0x2BA8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA8D8u;
            // 0x2ba8dc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA920u;
            goto label_2ba920;
        }
    }
    ctx->pc = 0x2BA8E0u;
label_2ba8e0:
    // 0x2ba8e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ba8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba8e4:
    // 0x2ba8e4: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2ba8e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2ba8e8:
    // 0x2ba8e8: 0x5840000d  blezl       $v0, . + 4 + (0xD << 2)
label_2ba8ec:
    if (ctx->pc == 0x2BA8ECu) {
        ctx->pc = 0x2BA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8E8u;
        // 0x2ba8ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8F0u;
        goto label_2ba8f0;
    }
    ctx->pc = 0x2BA8E8u;
    {
        const bool branch_taken_0x2ba8e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba8e8) {
            ctx->pc = 0x2BA8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA8E8u;
            // 0x2ba8ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA920u;
            goto label_2ba920;
        }
    }
    ctx->pc = 0x2BA8F0u;
label_2ba8f0:
    // 0x2ba8f0: 0xc0a36c2  jal         func_28DB08
label_2ba8f4:
    if (ctx->pc == 0x2BA8F4u) {
        ctx->pc = 0x2BA8F8u;
        goto label_2ba8f8;
    }
    ctx->pc = 0x2BA8F0u;
    SET_GPR_U32(ctx, 31, 0x2BA8F8u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2BA8F0u, 0x2BA8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8F8u;
label_2ba8f8:
    // 0x2ba8f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ba8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ba8fc:
    // 0x2ba8fc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ba8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ba900:
    // 0x2ba900: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2ba900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ba904:
    // 0x2ba904: 0xa0f809  jalr        $a1
label_2ba908:
    if (ctx->pc == 0x2BA908u) {
        ctx->pc = 0x2BA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA904u;
        // 0x2ba908: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA90Cu;
        goto label_2ba90c;
    }
    ctx->pc = 0x2BA904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2BA90Cu);
        ctx->pc = 0x2BA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA904u;
        // 0x2ba908: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA904u, 0x2BA90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA90Cu;
label_2ba90c:
    // 0x2ba90c: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_2ba910:
    if (ctx->pc == 0x2BA910u) {
        ctx->pc = 0x2BA910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA90Cu;
        // 0x2ba910: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA914u;
        goto label_2ba914;
    }
    ctx->pc = 0x2BA90Cu;
    {
        const bool branch_taken_0x2ba90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ba90c) {
            ctx->pc = 0x2BA910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA90Cu;
            // 0x2ba910: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA920u;
            goto label_2ba920;
        }
    }
    ctx->pc = 0x2BA914u;
label_2ba914:
    // 0x2ba914: 0xc0a36c8  jal         func_28DB20
label_2ba918:
    if (ctx->pc == 0x2BA918u) {
        ctx->pc = 0x2BA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA914u;
        // 0x2ba918: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA91Cu;
        goto label_2ba91c;
    }
    ctx->pc = 0x2BA914u;
    SET_GPR_U32(ctx, 31, 0x2BA91Cu);
    ctx->pc = 0x2BA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA914u;
    // 0x2ba918: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2BA914u, 0x2BA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA91Cu;
label_2ba91c:
    // 0x2ba91c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ba91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba920:
    // 0x2ba920: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2ba920u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2ba924:
    // 0x2ba924: 0x1c400112  bgtz        $v0, . + 4 + (0x112 << 2)
label_2ba928:
    if (ctx->pc == 0x2BA928u) {
        ctx->pc = 0x2BA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA924u;
        // 0x2ba928: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA92Cu;
        goto label_2ba92c;
    }
    ctx->pc = 0x2BA924u;
    {
        const bool branch_taken_0x2ba924 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2BA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA924u;
        // 0x2ba928: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba924) {
            ctx->pc = 0x2BAD70u;
            goto label_2bad70;
        }
    }
    ctx->pc = 0x2BA92Cu;
label_2ba92c:
    // 0x2ba92c: 0xc08a0d0  jal         func_228340
label_2ba930:
    if (ctx->pc == 0x2BA930u) {
        ctx->pc = 0x2BA930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA92Cu;
        // 0x2ba930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA934u;
        goto label_2ba934;
    }
    ctx->pc = 0x2BA92Cu;
    SET_GPR_U32(ctx, 31, 0x2BA934u);
    ctx->pc = 0x2BA930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA92Cu;
    // 0x2ba930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2BA92Cu, 0x2BA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA934u;
label_2ba934:
    // 0x2ba934: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
label_2ba938:
    if (ctx->pc == 0x2BA938u) {
        ctx->pc = 0x2BA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA934u;
        // 0x2ba938: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA93Cu;
        goto label_2ba93c;
    }
    ctx->pc = 0x2BA934u;
    {
        const bool branch_taken_0x2ba934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ba934) {
            ctx->pc = 0x2BA938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA934u;
            // 0x2ba938: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA980u;
            goto label_2ba980;
        }
    }
    ctx->pc = 0x2BA93Cu;
label_2ba93c:
    // 0x2ba93c: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2ba93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2ba940:
    // 0x2ba940: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_2ba944:
    if (ctx->pc == 0x2BA944u) {
        ctx->pc = 0x2BA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA940u;
        // 0x2ba944: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA948u;
        goto label_2ba948;
    }
    ctx->pc = 0x2BA940u;
    {
        const bool branch_taken_0x2ba940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA940u;
        // 0x2ba944: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba940) {
            ctx->pc = 0x2BA95Cu;
            goto label_2ba95c;
        }
    }
    ctx->pc = 0x2BA948u;
label_2ba948:
    // 0x2ba948: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2ba948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ba94c:
    // 0x2ba94c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2ba94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2ba950:
    // 0x2ba950: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x2ba950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
label_2ba954:
    // 0x2ba954: 0x10000009  b           . + 4 + (0x9 << 2)
label_2ba958:
    if (ctx->pc == 0x2BA958u) {
        ctx->pc = 0x2BA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA954u;
        // 0x2ba958: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA95Cu;
        goto label_2ba95c;
    }
    ctx->pc = 0x2BA954u;
    {
        const bool branch_taken_0x2ba954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA954u;
        // 0x2ba958: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba954) {
            ctx->pc = 0x2BA97Cu;
            goto label_2ba97c;
        }
    }
    ctx->pc = 0x2BA95Cu;
label_2ba95c:
    // 0x2ba95c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2ba95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ba960:
    // 0x2ba960: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2ba960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2ba964:
    // 0x2ba964: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2ba964u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ba968:
    // 0x2ba968: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2ba96c:
    if (ctx->pc == 0x2BA96Cu) {
        ctx->pc = 0x2BA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA968u;
        // 0x2ba96c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA970u;
        goto label_2ba970;
    }
    ctx->pc = 0x2BA968u;
    {
        const bool branch_taken_0x2ba968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba968) {
            ctx->pc = 0x2BA96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA968u;
            // 0x2ba96c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA980u;
            goto label_2ba980;
        }
    }
    ctx->pc = 0x2BA970u;
label_2ba970:
    // 0x2ba970: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2ba970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2ba974:
    // 0x2ba974: 0xc08bfbc  jal         func_22FEF0
label_2ba978:
    if (ctx->pc == 0x2BA978u) {
        ctx->pc = 0x2BA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA974u;
        // 0x2ba978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA97Cu;
        goto label_2ba97c;
    }
    ctx->pc = 0x2BA974u;
    SET_GPR_U32(ctx, 31, 0x2BA97Cu);
    ctx->pc = 0x2BA978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA974u;
    // 0x2ba978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BA974u, 0x2BA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA97Cu;
label_2ba97c:
    // 0x2ba97c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ba97cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba980:
    // 0x2ba980: 0xc0e409a  jal         func_390268
label_2ba984:
    if (ctx->pc == 0x2BA984u) {
        ctx->pc = 0x2BA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA980u;
        // 0x2ba984: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA988u;
        goto label_2ba988;
    }
    ctx->pc = 0x2BA980u;
    SET_GPR_U32(ctx, 31, 0x2BA988u);
    ctx->pc = 0x2BA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA980u;
    // 0x2ba984: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BA980u, 0x2BA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA988u;
label_2ba988:
    // 0x2ba988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba98c:
    // 0x2ba98c: 0xc0a34d6  jal         func_28D358
label_2ba990:
    if (ctx->pc == 0x2BA990u) {
        ctx->pc = 0x2BA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA98Cu;
        // 0x2ba990: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA994u;
        goto label_2ba994;
    }
    ctx->pc = 0x2BA98Cu;
    SET_GPR_U32(ctx, 31, 0x2BA994u);
    ctx->pc = 0x2BA990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA98Cu;
    // 0x2ba990: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2BA98Cu, 0x2BA994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA994u;
label_2ba994:
    // 0x2ba994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ba994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba998:
    // 0x2ba998: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2ba99c:
    if (ctx->pc == 0x2BA99Cu) {
        ctx->pc = 0x2BA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA998u;
        // 0x2ba99c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9A0u;
        goto label_2ba9a0;
    }
    ctx->pc = 0x2BA998u;
    {
        const bool branch_taken_0x2ba998 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA998u;
        // 0x2ba99c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba998) {
            ctx->pc = 0x2BA9B4u;
            goto label_2ba9b4;
        }
    }
    ctx->pc = 0x2BA9A0u;
label_2ba9a0:
    // 0x2ba9a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ba9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba9a4:
    // 0x2ba9a4: 0xc0a7c8c  jal         func_29F230
label_2ba9a8:
    if (ctx->pc == 0x2BA9A8u) {
        ctx->pc = 0x2BA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9A4u;
        // 0x2ba9a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9ACu;
        goto label_2ba9ac;
    }
    ctx->pc = 0x2BA9A4u;
    SET_GPR_U32(ctx, 31, 0x2BA9ACu);
    ctx->pc = 0x2BA9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA9A4u;
    // 0x2ba9a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2BA9A4u, 0x2BA9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA9ACu;
label_2ba9ac:
    // 0x2ba9ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ba9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba9b0:
    // 0x2ba9b0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2ba9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2ba9b4:
    // 0x2ba9b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ba9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba9b8:
    // 0x2ba9b8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2ba9bc:
    if (ctx->pc == 0x2BA9BCu) {
        ctx->pc = 0x2BA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9B8u;
        // 0x2ba9bc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9C0u;
        goto label_2ba9c0;
    }
    ctx->pc = 0x2BA9B8u;
    {
        const bool branch_taken_0x2ba9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9b8) {
            ctx->pc = 0x2BA9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA9B8u;
            // 0x2ba9bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA9C0u;
            goto label_2ba9c0;
        }
    }
    ctx->pc = 0x2BA9C0u;
label_2ba9c0:
    // 0x2ba9c0: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ba9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2ba9c4:
    // 0x2ba9c4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ba9c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2ba9c8:
    // 0x2ba9c8: 0x2010  mfhi        $a0
    ctx->pc = 0x2ba9c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2ba9cc:
    // 0x2ba9cc: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
label_2ba9d0:
    if (ctx->pc == 0x2BA9D0u) {
        ctx->pc = 0x2BA9D4u;
        goto label_2ba9d4;
    }
    ctx->pc = 0x2BA9CCu;
    {
        const bool branch_taken_0x2ba9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9cc) {
            ctx->pc = 0x2BAA1Cu;
            goto label_2baa1c;
        }
    }
    ctx->pc = 0x2BA9D4u;
label_2ba9d4:
    // 0x2ba9d4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2ba9d8:
    if (ctx->pc == 0x2BA9D8u) {
        ctx->pc = 0x2BA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9D4u;
        // 0x2ba9d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9DCu;
        goto label_2ba9dc;
    }
    ctx->pc = 0x2BA9D4u;
    {
        const bool branch_taken_0x2ba9d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9D4u;
        // 0x2ba9d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9d4) {
            ctx->pc = 0x2BAA1Cu;
            goto label_2baa1c;
        }
    }
    ctx->pc = 0x2BA9DCu;
label_2ba9dc:
    // 0x2ba9dc: 0xc0a2fc0  jal         func_28BF00
label_2ba9e0:
    if (ctx->pc == 0x2BA9E0u) {
        ctx->pc = 0x2BA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9DCu;
        // 0x2ba9e0: 0xc4b4012c  lwc1        $f20, 0x12C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9E4u;
        goto label_2ba9e4;
    }
    ctx->pc = 0x2BA9DCu;
    SET_GPR_U32(ctx, 31, 0x2BA9E4u);
    ctx->pc = 0x2BA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA9DCu;
    // 0x2ba9e0: 0xc4b4012c  lwc1        $f20, 0x12C($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2BA9DCu, 0x2BA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA9E4u;
label_2ba9e4:
    // 0x2ba9e4: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2ba9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2ba9e8:
    // 0x2ba9e8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2ba9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2ba9ec:
    // 0x2ba9ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ba9ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ba9f0:
    // 0x2ba9f0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ba9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2ba9f4:
    // 0x2ba9f4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2ba9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2ba9f8:
    // 0x2ba9f8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2ba9f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2ba9fc:
    // 0x2ba9fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ba9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2baa00:
    // 0x2baa00: 0xc0888fa  jal         func_2223E8
label_2baa04:
    if (ctx->pc == 0x2BAA04u) {
        ctx->pc = 0x2BAA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA00u;
        // 0x2baa04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA08u;
        goto label_2baa08;
    }
    ctx->pc = 0x2BAA00u;
    SET_GPR_U32(ctx, 31, 0x2BAA08u);
    ctx->pc = 0x2BAA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA00u;
    // 0x2baa04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x2BAA00u, 0x2BAA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA08u;
label_2baa08:
    // 0x2baa08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2baa0c:
    if (ctx->pc == 0x2BAA0Cu) {
        ctx->pc = 0x2BAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA08u;
        // 0x2baa0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA10u;
        goto label_2baa10;
    }
    ctx->pc = 0x2BAA08u;
    {
        const bool branch_taken_0x2baa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA08u;
        // 0x2baa0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa08) {
            ctx->pc = 0x2BAA1Cu;
            goto label_2baa1c;
        }
    }
    ctx->pc = 0x2BAA10u;
label_2baa10:
    // 0x2baa10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2baa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2baa14:
    // 0x2baa14: 0xc0a33f8  jal         func_28CFE0
label_2baa18:
    if (ctx->pc == 0x2BAA18u) {
        ctx->pc = 0x2BAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA14u;
        // 0x2baa18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA1Cu;
        goto label_2baa1c;
    }
    ctx->pc = 0x2BAA14u;
    SET_GPR_U32(ctx, 31, 0x2BAA1Cu);
    ctx->pc = 0x2BAA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA14u;
    // 0x2baa18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BAA14u, 0x2BAA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA1Cu;
label_2baa1c:
    // 0x2baa1c: 0xc08a08a  jal         func_228228
label_2baa20:
    if (ctx->pc == 0x2BAA20u) {
        ctx->pc = 0x2BAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA1Cu;
        // 0x2baa20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA24u;
        goto label_2baa24;
    }
    ctx->pc = 0x2BAA1Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA24u);
    ctx->pc = 0x2BAA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA1Cu;
    // 0x2baa20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2BAA1Cu, 0x2BAA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA24u;
label_2baa24:
    // 0x2baa24: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_2baa28:
    if (ctx->pc == 0x2BAA28u) {
        ctx->pc = 0x2BAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA24u;
        // 0x2baa28: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA2Cu;
        goto label_2baa2c;
    }
    ctx->pc = 0x2BAA24u;
    {
        const bool branch_taken_0x2baa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA24u;
        // 0x2baa28: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa24) {
            ctx->pc = 0x2BAB90u;
            goto label_2bab90;
        }
    }
    ctx->pc = 0x2BAA2Cu;
label_2baa2c:
    // 0x2baa2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2baa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2baa30:
    // 0x2baa30: 0xc0cdb38  jal         func_336CE0
label_2baa34:
    if (ctx->pc == 0x2BAA34u) {
        ctx->pc = 0x2BAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA30u;
        // 0x2baa34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA38u;
        goto label_2baa38;
    }
    ctx->pc = 0x2BAA30u;
    SET_GPR_U32(ctx, 31, 0x2BAA38u);
    ctx->pc = 0x2BAA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA30u;
    // 0x2baa34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BAA30u, 0x2BAA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA38u;
label_2baa38:
    // 0x2baa38: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x2baa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
label_2baa3c:
    // 0x2baa3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2baa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2baa40:
    // 0x2baa40: 0x0  nop
    ctx->pc = 0x2baa40u;
    // NOP
label_2baa44:
    // 0x2baa44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2baa44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2baa48:
    // 0x2baa48: 0x0  nop
    ctx->pc = 0x2baa48u;
    // NOP
label_2baa4c:
    // 0x2baa4c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_2baa50:
    if (ctx->pc == 0x2BAA50u) {
        ctx->pc = 0x2BAA54u;
        goto label_2baa54;
    }
    ctx->pc = 0x2BAA4Cu;
    {
        const bool branch_taken_0x2baa4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2baa4c) {
            ctx->pc = 0x2BAAD0u;
            goto label_2baad0;
        }
    }
    ctx->pc = 0x2BAA54u;
label_2baa54:
    // 0x2baa54: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2baa58:
    if (ctx->pc == 0x2BAA58u) {
        ctx->pc = 0x2BAA5Cu;
        goto label_2baa5c;
    }
    ctx->pc = 0x2BAA54u;
    {
        const bool branch_taken_0x2baa54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa54) {
            ctx->pc = 0x2BAA64u;
            goto label_2baa64;
        }
    }
    ctx->pc = 0x2BAA5Cu;
label_2baa5c:
    // 0x2baa5c: 0xc08bfa0  jal         func_22FE80
label_2baa60:
    if (ctx->pc == 0x2BAA60u) {
        ctx->pc = 0x2BAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA5Cu;
        // 0x2baa60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA64u;
        goto label_2baa64;
    }
    ctx->pc = 0x2BAA5Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA64u);
    ctx->pc = 0x2BAA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA5Cu;
    // 0x2baa60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BAA5Cu, 0x2BAA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA64u;
label_2baa64:
    // 0x2baa64: 0xc0a367c  jal         func_28D9F0
label_2baa68:
    if (ctx->pc == 0x2BAA68u) {
        ctx->pc = 0x2BAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA64u;
        // 0x2baa68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA6Cu;
        goto label_2baa6c;
    }
    ctx->pc = 0x2BAA64u;
    SET_GPR_U32(ctx, 31, 0x2BAA6Cu);
    ctx->pc = 0x2BAA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA64u;
    // 0x2baa68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BAA64u, 0x2BAA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA6Cu;
label_2baa6c:
    // 0x2baa6c: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
label_2baa70:
    if (ctx->pc == 0x2BAA70u) {
        ctx->pc = 0x2BAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA6Cu;
        // 0x2baa70: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA74u;
        goto label_2baa74;
    }
    ctx->pc = 0x2BAA6Cu;
    {
        const bool branch_taken_0x2baa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA6Cu;
        // 0x2baa70: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa6c) {
            ctx->pc = 0x2BAD70u;
            goto label_2bad70;
        }
    }
    ctx->pc = 0x2BAA74u;
label_2baa74:
    // 0x2baa74: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2baa78:
    if (ctx->pc == 0x2BAA78u) {
        ctx->pc = 0x2BAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA74u;
        // 0x2baa78: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA7Cu;
        goto label_2baa7c;
    }
    ctx->pc = 0x2BAA74u;
    {
        const bool branch_taken_0x2baa74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA74u;
        // 0x2baa78: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa74) {
            ctx->pc = 0x2BAA98u;
            goto label_2baa98;
        }
    }
    ctx->pc = 0x2BAA7Cu;
label_2baa7c:
    // 0x2baa7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2baa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2baa80:
    // 0x2baa80: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2baa80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2baa84:
    // 0x2baa84: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2baa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2baa88:
    // 0x2baa88: 0x40f809  jalr        $v0
label_2baa8c:
    if (ctx->pc == 0x2BAA8Cu) {
        ctx->pc = 0x2BAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA88u;
        // 0x2baa8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA90u;
        goto label_2baa90;
    }
    ctx->pc = 0x2BAA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BAA90u);
        ctx->pc = 0x2BAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA88u;
        // 0x2baa8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAA88u, 0x2BAA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAA90u;
label_2baa90:
    // 0x2baa90: 0x10000003  b           . + 4 + (0x3 << 2)
label_2baa94:
    if (ctx->pc == 0x2BAA94u) {
        ctx->pc = 0x2BAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA90u;
        // 0x2baa94: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA98u;
        goto label_2baa98;
    }
    ctx->pc = 0x2BAA90u;
    {
        const bool branch_taken_0x2baa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA90u;
        // 0x2baa94: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa90) {
            ctx->pc = 0x2BAAA0u;
            goto label_2baaa0;
        }
    }
    ctx->pc = 0x2BAA98u;
label_2baa98:
    // 0x2baa98: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x2baa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2baa9c:
    // 0x2baa9c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2baa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2baaa0:
    // 0x2baaa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2baaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2baaa4:
    // 0x2baaa4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2baaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2baaa8:
    // 0x2baaa8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2baaa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2baaac:
    // 0x2baaac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2baaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2baab0:
    // 0x2baab0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2baab0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baab4:
    // 0x2baab4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2baab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2baab8:
    // 0x2baab8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2baab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2baabc:
    // 0x2baabc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2baabcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2baac0:
    // 0x2baac0: 0xc0bee7a  jal         func_2FB9E8
label_2baac4:
    if (ctx->pc == 0x2BAAC4u) {
        ctx->pc = 0x2BAAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAC0u;
        // 0x2baac4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAC8u;
        goto label_2baac8;
    }
    ctx->pc = 0x2BAAC0u;
    SET_GPR_U32(ctx, 31, 0x2BAAC8u);
    ctx->pc = 0x2BAAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAAC0u;
    // 0x2baac4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2BAAC0u, 0x2BAAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAAC8u;
label_2baac8:
    // 0x2baac8: 0x100000aa  b           . + 4 + (0xAA << 2)
label_2baacc:
    if (ctx->pc == 0x2BAACCu) {
        ctx->pc = 0x2BAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAC8u;
        // 0x2baacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAD0u;
        goto label_2baad0;
    }
    ctx->pc = 0x2BAAC8u;
    {
        const bool branch_taken_0x2baac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAC8u;
        // 0x2baacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baac8) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BAAD0u;
label_2baad0:
    // 0x2baad0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2baad4:
    if (ctx->pc == 0x2BAAD4u) {
        ctx->pc = 0x2BAAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAD0u;
        // 0x2baad4: 0x26c34b00  addiu       $v1, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAD8u;
        goto label_2baad8;
    }
    ctx->pc = 0x2BAAD0u;
    {
        const bool branch_taken_0x2baad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAD0u;
        // 0x2baad4: 0x26c34b00  addiu       $v1, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baad0) {
            ctx->pc = 0x2BAAE8u;
            goto label_2baae8;
        }
    }
    ctx->pc = 0x2BAAD8u;
label_2baad8:
    // 0x2baad8: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2baad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2baadc:
    // 0x2baadc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2baadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2baae0:
    // 0x2baae0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2baae4:
    if (ctx->pc == 0x2BAAE4u) {
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAE8u;
        goto label_2baae8;
    }
    ctx->pc = 0x2BAAE0u;
    {
        const bool branch_taken_0x2baae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baae0) {
            ctx->pc = 0x2BAAECu;
            goto label_2baaec;
        }
    }
    ctx->pc = 0x2BAAE8u;
label_2baae8:
    // 0x2baae8: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2baae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2baaec:
    // 0x2baaec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2baaecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2baaf0:
    // 0x2baaf0: 0x26c34b00  addiu       $v1, $s6, 0x4B00
    ctx->pc = 0x2baaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
label_2baaf4:
    // 0x2baaf4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2baaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2baaf8:
    // 0x2baaf8: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2baaf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2baafc:
    // 0x2baafc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2baafcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2bab00:
    // 0x2bab00: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2bab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2bab04:
    // 0x2bab04: 0xc0cd7d2  jal         func_335F48
label_2bab08:
    if (ctx->pc == 0x2BAB08u) {
        ctx->pc = 0x2BAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB04u;
        // 0x2bab08: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB0Cu;
        goto label_2bab0c;
    }
    ctx->pc = 0x2BAB04u;
    SET_GPR_U32(ctx, 31, 0x2BAB0Cu);
    ctx->pc = 0x2BAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB04u;
    // 0x2bab08: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2BAB04u, 0x2BAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB0Cu;
label_2bab0c:
    // 0x2bab0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bab10:
    // 0x2bab10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bab14:
    // 0x2bab14: 0xc0cd780  jal         func_335E00
label_2bab18:
    if (ctx->pc == 0x2BAB18u) {
        ctx->pc = 0x2BAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB14u;
        // 0x2bab18: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB1Cu;
        goto label_2bab1c;
    }
    ctx->pc = 0x2BAB14u;
    SET_GPR_U32(ctx, 31, 0x2BAB1Cu);
    ctx->pc = 0x2BAB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB14u;
    // 0x2bab18: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2BAB14u, 0x2BAB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB1Cu;
label_2bab1c:
    // 0x2bab1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bab1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bab20:
    // 0x2bab20: 0xc0cd742  jal         func_335D08
label_2bab24:
    if (ctx->pc == 0x2BAB24u) {
        ctx->pc = 0x2BAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB20u;
        // 0x2bab24: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB28u;
        goto label_2bab28;
    }
    ctx->pc = 0x2BAB20u;
    SET_GPR_U32(ctx, 31, 0x2BAB28u);
    ctx->pc = 0x2BAB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB20u;
    // 0x2bab24: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2BAB20u, 0x2BAB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB28u;
label_2bab28:
    // 0x2bab28: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bab28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bab2c:
    // 0x2bab2c: 0xc0cdd2e  jal         func_3374B8
label_2bab30:
    if (ctx->pc == 0x2BAB30u) {
        ctx->pc = 0x2BAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB2Cu;
        // 0x2bab30: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB34u;
        goto label_2bab34;
    }
    ctx->pc = 0x2BAB2Cu;
    SET_GPR_U32(ctx, 31, 0x2BAB34u);
    ctx->pc = 0x2BAB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB2Cu;
    // 0x2bab30: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2BAB2Cu, 0x2BAB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB34u;
label_2bab34:
    // 0x2bab34: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2bab34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2bab38:
    // 0x2bab38: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2bab38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2bab3c:
    // 0x2bab3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bab3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bab40:
    // 0x2bab40: 0x0  nop
    ctx->pc = 0x2bab40u;
    // NOP
label_2bab44:
    // 0x2bab44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bab44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bab48:
    // 0x2bab48: 0x0  nop
    ctx->pc = 0x2bab48u;
    // NOP
label_2bab4c:
    // 0x2bab4c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_2bab50:
    if (ctx->pc == 0x2BAB50u) {
        ctx->pc = 0x2BAB54u;
        goto label_2bab54;
    }
    ctx->pc = 0x2BAB4Cu;
    {
        const bool branch_taken_0x2bab4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bab4c) {
            ctx->pc = 0x2BAB90u;
            goto label_2bab90;
        }
    }
    ctx->pc = 0x2BAB54u;
label_2bab54:
    // 0x2bab54: 0xc0a367c  jal         func_28D9F0
label_2bab58:
    if (ctx->pc == 0x2BAB58u) {
        ctx->pc = 0x2BAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB54u;
        // 0x2bab58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB5Cu;
        goto label_2bab5c;
    }
    ctx->pc = 0x2BAB54u;
    SET_GPR_U32(ctx, 31, 0x2BAB5Cu);
    ctx->pc = 0x2BAB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB54u;
    // 0x2bab58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BAB54u, 0x2BAB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB5Cu;
label_2bab5c:
    // 0x2bab5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bab5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bab60:
    // 0x2bab60: 0x12000084  beqz        $s0, . + 4 + (0x84 << 2)
label_2bab64:
    if (ctx->pc == 0x2BAB64u) {
        ctx->pc = 0x2BAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB60u;
        // 0x2bab64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB68u;
        goto label_2bab68;
    }
    ctx->pc = 0x2BAB60u;
    {
        const bool branch_taken_0x2bab60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB60u;
        // 0x2bab64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab60) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BAB68u;
label_2bab68:
    // 0x2bab68: 0xc0884f6  jal         func_2213D8
label_2bab6c:
    if (ctx->pc == 0x2BAB6Cu) {
        ctx->pc = 0x2BAB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB68u;
        // 0x2bab6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB70u;
        goto label_2bab70;
    }
    ctx->pc = 0x2BAB68u;
    SET_GPR_U32(ctx, 31, 0x2BAB70u);
    ctx->pc = 0x2BAB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB68u;
    // 0x2bab6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BAB68u, 0x2BAB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB70u;
label_2bab70:
    // 0x2bab70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bab70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bab74:
    // 0x2bab74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bab78:
    // 0x2bab78: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bab78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bab7c:
    // 0x2bab7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bab7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bab80:
    // 0x2bab80: 0xc0bf800  jal         func_2FE000
label_2bab84:
    if (ctx->pc == 0x2BAB84u) {
        ctx->pc = 0x2BAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB80u;
        // 0x2bab84: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB88u;
        goto label_2bab88;
    }
    ctx->pc = 0x2BAB80u;
    SET_GPR_U32(ctx, 31, 0x2BAB88u);
    ctx->pc = 0x2BAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB80u;
    // 0x2bab84: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BAB80u, 0x2BAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB88u;
label_2bab88:
    // 0x2bab88: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2bab8c:
    if (ctx->pc == 0x2BAB8Cu) {
        ctx->pc = 0x2BAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB88u;
        // 0x2bab8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB90u;
        goto label_2bab90;
    }
    ctx->pc = 0x2BAB88u;
    {
        const bool branch_taken_0x2bab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB88u;
        // 0x2bab8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab88) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BAB90u;
label_2bab90:
    // 0x2bab90: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_2bab94:
    if (ctx->pc == 0x2BAB94u) {
        ctx->pc = 0x2BAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB90u;
        // 0x2bab94: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB98u;
        goto label_2bab98;
    }
    ctx->pc = 0x2BAB90u;
    {
        const bool branch_taken_0x2bab90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB90u;
        // 0x2bab94: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab90) {
            ctx->pc = 0x2BAC60u;
            goto label_2bac60;
        }
    }
    ctx->pc = 0x2BAB98u;
label_2bab98:
    // 0x2bab98: 0xc0a41a6  jal         func_290698
label_2bab9c:
    if (ctx->pc == 0x2BAB9Cu) {
        ctx->pc = 0x2BAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB98u;
        // 0x2bab9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABA0u;
        goto label_2baba0;
    }
    ctx->pc = 0x2BAB98u;
    SET_GPR_U32(ctx, 31, 0x2BABA0u);
    ctx->pc = 0x2BAB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB98u;
    // 0x2bab9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290698u, 0x2BAB98u, 0x2BABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABA0u;
label_2baba0:
    // 0x2baba0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2baba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baba4:
    // 0x2baba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2baba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2baba8:
    // 0x2baba8: 0x5662002d  bnel        $s3, $v0, . + 4 + (0x2D << 2)
label_2babac:
    if (ctx->pc == 0x2BABACu) {
        ctx->pc = 0x2BABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABA8u;
        // 0x2babac: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABB0u;
        goto label_2babb0;
    }
    ctx->pc = 0x2BABA8u;
    {
        const bool branch_taken_0x2baba8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2baba8) {
            ctx->pc = 0x2BABACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BABA8u;
            // 0x2babac: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC60u;
            goto label_2bac60;
        }
    }
    ctx->pc = 0x2BABB0u;
label_2babb0:
    // 0x2babb0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2babb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2babb4:
    // 0x2babb4: 0x2415002d  addiu       $s5, $zero, 0x2D
    ctx->pc = 0x2babb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2babb8:
    // 0x2babb8: 0x1455000a  bne         $v0, $s5, . + 4 + (0xA << 2)
label_2babbc:
    if (ctx->pc == 0x2BABBCu) {
        ctx->pc = 0x2BABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABB8u;
        // 0x2babbc: 0x3842002d  xori        $v0, $v0, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)45);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABC0u;
        goto label_2babc0;
    }
    ctx->pc = 0x2BABB8u;
    {
        const bool branch_taken_0x2babb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2BABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABB8u;
        // 0x2babbc: 0x3842002d  xori        $v0, $v0, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)45);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babb8) {
            ctx->pc = 0x2BABE4u;
            goto label_2babe4;
        }
    }
    ctx->pc = 0x2BABC0u;
label_2babc0:
    // 0x2babc0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2babc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2babc4:
    // 0x2babc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2babc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2babc8:
    // 0x2babc8: 0x68463fff  ldl         $a2, 0x3FFF($v0)
    ctx->pc = 0x2babc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2babcc:
    // 0x2babcc: 0x6c463ff8  ldr         $a2, 0x3FF8($v0)
    ctx->pc = 0x2babccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2babd0:
    // 0x2babd0: 0xc0a39c2  jal         func_28E708
label_2babd4:
    if (ctx->pc == 0x2BABD4u) {
        ctx->pc = 0x2BABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABD0u;
        // 0x2babd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABD8u;
        goto label_2babd8;
    }
    ctx->pc = 0x2BABD0u;
    SET_GPR_U32(ctx, 31, 0x2BABD8u);
    ctx->pc = 0x2BABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BABD0u;
    // 0x2babd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2BABD0u, 0x2BABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABD8u;
label_2babd8:
    // 0x2babd8: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x2babd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_2babdc:
    // 0x2babdc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2babdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2babe0:
    // 0x2babe0: 0x3842002d  xori        $v0, $v0, 0x2D
    ctx->pc = 0x2babe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)45);
label_2babe4:
    // 0x2babe4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2babe8:
    if (ctx->pc == 0x2BABE8u) {
        ctx->pc = 0x2BABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABE4u;
        // 0x2babe8: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABECu;
        goto label_2babec;
    }
    ctx->pc = 0x2BABE4u;
    {
        const bool branch_taken_0x2babe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABE4u;
        // 0x2babe8: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babe4) {
            ctx->pc = 0x2BAC5Cu;
            goto label_2bac5c;
        }
    }
    ctx->pc = 0x2BABECu;
label_2babec:
    // 0x2babec: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2babecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2babf0:
    // 0x2babf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2babf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2babf4:
    // 0x2babf4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2babf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2babf8:
    // 0x2babf8: 0xc0cdb38  jal         func_336CE0
label_2babfc:
    if (ctx->pc == 0x2BABFCu) {
        ctx->pc = 0x2BABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABF8u;
        // 0x2babfc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC00u;
        goto label_2bac00;
    }
    ctx->pc = 0x2BABF8u;
    SET_GPR_U32(ctx, 31, 0x2BAC00u);
    ctx->pc = 0x2BABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BABF8u;
    // 0x2babfc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BABF8u, 0x2BAC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC00u;
label_2bac00:
    // 0x2bac00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bac00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bac04:
    // 0x2bac04: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x2bac04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2bac08:
    // 0x2bac08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bac0c:
    // 0x2bac0c: 0xc08c24c  jal         func_230930
label_2bac10:
    if (ctx->pc == 0x2BAC10u) {
        ctx->pc = 0x2BAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC0Cu;
        // 0x2bac10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC14u;
        goto label_2bac14;
    }
    ctx->pc = 0x2BAC0Cu;
    SET_GPR_U32(ctx, 31, 0x2BAC14u);
    ctx->pc = 0x2BAC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC0Cu;
    // 0x2bac10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230930u, 0x2BAC0Cu, 0x2BAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC14u;
label_2bac14:
    // 0x2bac14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bac14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bac18:
    // 0x2bac18: 0x0  nop
    ctx->pc = 0x2bac18u;
    // NOP
label_2bac1c:
    // 0x2bac1c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_2bac20:
    if (ctx->pc == 0x2BAC20u) {
        ctx->pc = 0x2BAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC1Cu;
        // 0x2bac20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC24u;
        goto label_2bac24;
    }
    ctx->pc = 0x2BAC1Cu;
    {
        const bool branch_taken_0x2bac1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC1Cu;
        // 0x2bac20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac1c) {
            ctx->pc = 0x2BAC5Cu;
            goto label_2bac5c;
        }
    }
    ctx->pc = 0x2BAC24u;
label_2bac24:
    // 0x2bac24: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x2bac24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2bac28:
    // 0x2bac28: 0xc0891de  jal         func_224778
label_2bac2c:
    if (ctx->pc == 0x2BAC2Cu) {
        ctx->pc = 0x2BAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC28u;
        // 0x2bac2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC30u;
        goto label_2bac30;
    }
    ctx->pc = 0x2BAC28u;
    SET_GPR_U32(ctx, 31, 0x2BAC30u);
    ctx->pc = 0x2BAC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC28u;
    // 0x2bac2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2BAC28u, 0x2BAC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC30u;
label_2bac30:
    // 0x2bac30: 0x1453000b  bne         $v0, $s3, . + 4 + (0xB << 2)
label_2bac34:
    if (ctx->pc == 0x2BAC34u) {
        ctx->pc = 0x2BAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC30u;
        // 0x2bac34: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC38u;
        goto label_2bac38;
    }
    ctx->pc = 0x2BAC30u;
    {
        const bool branch_taken_0x2bac30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2BAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC30u;
        // 0x2bac34: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac30) {
            ctx->pc = 0x2BAC60u;
            goto label_2bac60;
        }
    }
    ctx->pc = 0x2BAC38u;
label_2bac38:
    // 0x2bac38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bac38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bac3c:
    // 0x2bac3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bac3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bac40:
    // 0x2bac40: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x2bac40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2bac44:
    // 0x2bac44: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2bac44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2bac48:
    // 0x2bac48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bac48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bac4c:
    // 0x2bac4c: 0xc0a3892  jal         func_28E248
label_2bac50:
    if (ctx->pc == 0x2BAC50u) {
        ctx->pc = 0x2BAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC4Cu;
        // 0x2bac50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC54u;
        goto label_2bac54;
    }
    ctx->pc = 0x2BAC4Cu;
    SET_GPR_U32(ctx, 31, 0x2BAC54u);
    ctx->pc = 0x2BAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC4Cu;
    // 0x2bac50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2BAC4Cu, 0x2BAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC54u;
label_2bac54:
    // 0x2bac54: 0x10000046  b           . + 4 + (0x46 << 2)
label_2bac58:
    if (ctx->pc == 0x2BAC58u) {
        ctx->pc = 0x2BAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC54u;
        // 0x2bac58: 0xae350044  sw          $s5, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC5Cu;
        goto label_2bac5c;
    }
    ctx->pc = 0x2BAC54u;
    {
        const bool branch_taken_0x2bac54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC54u;
        // 0x2bac58: 0xae350044  sw          $s5, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac54) {
            ctx->pc = 0x2BAD70u;
            goto label_2bad70;
        }
    }
    ctx->pc = 0x2BAC5Cu;
label_2bac5c:
    // 0x2bac5c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2bac5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_2bac60:
    // 0x2bac60: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2bac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2bac64:
    // 0x2bac64: 0x8e63b734  lw          $v1, -0x48CC($s3)
    ctx->pc = 0x2bac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_2bac68:
    // 0x2bac68: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x2bac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2bac6c:
    // 0x2bac6c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2bac6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bac70:
    // 0x2bac70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2bac74:
    if (ctx->pc == 0x2BAC74u) {
        ctx->pc = 0x2BAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC70u;
        // 0x2bac74: 0x246207d0  addiu       $v0, $v1, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC78u;
        goto label_2bac78;
    }
    ctx->pc = 0x2BAC70u;
    {
        const bool branch_taken_0x2bac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC70u;
        // 0x2bac74: 0x246207d0  addiu       $v0, $v1, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac70) {
            ctx->pc = 0x2BAC84u;
            goto label_2bac84;
        }
    }
    ctx->pc = 0x2BAC78u;
label_2bac78:
    // 0x2bac78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bac78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bac7c:
    // 0x2bac7c: 0xc0aea04  jal         func_2BA810
label_2bac80:
    if (ctx->pc == 0x2BAC80u) {
        ctx->pc = 0x2BAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC7Cu;
        // 0x2bac80: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC84u;
        goto label_2bac84;
    }
    ctx->pc = 0x2BAC7Cu;
    SET_GPR_U32(ctx, 31, 0x2BAC84u);
    ctx->pc = 0x2BAC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC7Cu;
    // 0x2bac80: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA810u, 0x2BAC7Cu, 0x2BAC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC84u;
label_2bac84:
    // 0x2bac84: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bac88:
    // 0x2bac88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bac88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bac8c:
    // 0x2bac8c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bac8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bac90:
    // 0x2bac90: 0xc0e409a  jal         func_390268
label_2bac94:
    if (ctx->pc == 0x2BAC94u) {
        ctx->pc = 0x2BAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC90u;
        // 0x2bac94: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC98u;
        goto label_2bac98;
    }
    ctx->pc = 0x2BAC90u;
    SET_GPR_U32(ctx, 31, 0x2BAC98u);
    ctx->pc = 0x2BAC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC90u;
    // 0x2bac94: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BAC90u, 0x2BAC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC98u;
label_2bac98:
    // 0x2bac98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bac9c:
    // 0x2bac9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bac9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baca0:
    // 0x2baca0: 0xc0a352c  jal         func_28D4B0
label_2baca4:
    if (ctx->pc == 0x2BACA4u) {
        ctx->pc = 0x2BACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACA0u;
        // 0x2baca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACA8u;
        goto label_2baca8;
    }
    ctx->pc = 0x2BACA0u;
    SET_GPR_U32(ctx, 31, 0x2BACA8u);
    ctx->pc = 0x2BACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACA0u;
    // 0x2baca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BACA0u, 0x2BACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACA8u;
label_2baca8:
    // 0x2baca8: 0x8e63b734  lw          $v1, -0x48CC($s3)
    ctx->pc = 0x2baca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_2bacac:
    // 0x2bacac: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2bacacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2bacb0:
    // 0x2bacb0: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x2bacb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2bacb4:
    // 0x2bacb4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2bacb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2bacb8:
    // 0x2bacb8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2bacbc:
    if (ctx->pc == 0x2BACBCu) {
        ctx->pc = 0x2BACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACB8u;
        // 0x2bacbc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACC0u;
        goto label_2bacc0;
    }
    ctx->pc = 0x2BACB8u;
    {
        const bool branch_taken_0x2bacb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACB8u;
        // 0x2bacbc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacb8) {
            ctx->pc = 0x2BAD70u;
            goto label_2bad70;
        }
    }
    ctx->pc = 0x2BACC0u;
label_2bacc0:
    // 0x2bacc0: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x2bacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2bacc4:
    // 0x2bacc4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2bacc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2bacc8:
    // 0x2bacc8: 0xc0cd4fc  jal         func_3353F0
label_2baccc:
    if (ctx->pc == 0x2BACCCu) {
        ctx->pc = 0x2BACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACC8u;
        // 0x2baccc: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACD0u;
        goto label_2bacd0;
    }
    ctx->pc = 0x2BACC8u;
    SET_GPR_U32(ctx, 31, 0x2BACD0u);
    ctx->pc = 0x2BACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACC8u;
    // 0x2baccc: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2BACC8u, 0x2BACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACD0u;
label_2bacd0:
    // 0x2bacd0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2bacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2bacd4:
    // 0x2bacd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bacd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bacd8:
    // 0x2bacd8: 0xc08a0d0  jal         func_228340
label_2bacdc:
    if (ctx->pc == 0x2BACDCu) {
        ctx->pc = 0x2BACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD8u;
        // 0x2bacdc: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACE0u;
        goto label_2bace0;
    }
    ctx->pc = 0x2BACD8u;
    SET_GPR_U32(ctx, 31, 0x2BACE0u);
    ctx->pc = 0x2BACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACD8u;
    // 0x2bacdc: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2BACD8u, 0x2BACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACE0u;
label_2bace0:
    // 0x2bace0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_2bace4:
    if (ctx->pc == 0x2BACE4u) {
        ctx->pc = 0x2BACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE0u;
        // 0x2bace4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACE8u;
        goto label_2bace8;
    }
    ctx->pc = 0x2BACE0u;
    {
        const bool branch_taken_0x2bace0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE0u;
        // 0x2bace4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bace0) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BACE8u;
label_2bace8:
    // 0x2bace8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bace8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bacec:
    // 0x2bacec: 0xc137832  jal         func_4DE0C8
label_2bacf0:
    if (ctx->pc == 0x2BACF0u) {
        ctx->pc = 0x2BACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACECu;
        // 0x2bacf0: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACF4u;
        goto label_2bacf4;
    }
    ctx->pc = 0x2BACECu;
    SET_GPR_U32(ctx, 31, 0x2BACF4u);
    ctx->pc = 0x2BACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACECu;
    // 0x2bacf0: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2BACECu, 0x2BACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACF4u;
label_2bacf4:
    // 0x2bacf4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_2bacf8:
    if (ctx->pc == 0x2BACF8u) {
        ctx->pc = 0x2BACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACF4u;
        // 0x2bacf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACFCu;
        goto label_2bacfc;
    }
    ctx->pc = 0x2BACF4u;
    {
        const bool branch_taken_0x2bacf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACF4u;
        // 0x2bacf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacf4) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BACFCu;
label_2bacfc:
    // 0x2bacfc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bacfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bad00:
    // 0x2bad00: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2bad00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2bad04:
    // 0x2bad04: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2bad04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2bad08:
    // 0x2bad08: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_2bad0c:
    if (ctx->pc == 0x2BAD0Cu) {
        ctx->pc = 0x2BAD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD08u;
        // 0x2bad0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD10u;
        goto label_2bad10;
    }
    ctx->pc = 0x2BAD08u;
    {
        const bool branch_taken_0x2bad08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD08u;
        // 0x2bad0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad08) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BAD10u;
label_2bad10:
    // 0x2bad10: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2bad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2bad14:
    // 0x2bad14: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2bad14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2bad18:
    // 0x2bad18: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2bad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2bad1c:
    // 0x2bad1c: 0x40f809  jalr        $v0
label_2bad20:
    if (ctx->pc == 0x2BAD20u) {
        ctx->pc = 0x2BAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD1Cu;
        // 0x2bad20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD24u;
        goto label_2bad24;
    }
    ctx->pc = 0x2BAD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BAD24u);
        ctx->pc = 0x2BAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD1Cu;
        // 0x2bad20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD1Cu, 0x2BAD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAD24u;
label_2bad24:
    // 0x2bad24: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2bad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2bad28:
    // 0x2bad28: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_2bad2c:
    if (ctx->pc == 0x2BAD2Cu) {
        ctx->pc = 0x2BAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD28u;
        // 0x2bad2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD30u;
        goto label_2bad30;
    }
    ctx->pc = 0x2BAD28u;
    {
        const bool branch_taken_0x2bad28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD28u;
        // 0x2bad2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad28) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BAD30u;
label_2bad30:
    // 0x2bad30: 0xc0a367c  jal         func_28D9F0
label_2bad34:
    if (ctx->pc == 0x2BAD34u) {
        ctx->pc = 0x2BAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD30u;
        // 0x2bad34: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD38u;
        goto label_2bad38;
    }
    ctx->pc = 0x2BAD30u;
    SET_GPR_U32(ctx, 31, 0x2BAD38u);
    ctx->pc = 0x2BAD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD30u;
    // 0x2bad34: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BAD30u, 0x2BAD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD38u;
label_2bad38:
    // 0x2bad38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2bad3c:
    if (ctx->pc == 0x2BAD3Cu) {
        ctx->pc = 0x2BAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD38u;
        // 0x2bad3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD40u;
        goto label_2bad40;
    }
    ctx->pc = 0x2BAD38u;
    {
        const bool branch_taken_0x2bad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD38u;
        // 0x2bad3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad38) {
            ctx->pc = 0x2BAD70u;
            goto label_2bad70;
        }
    }
    ctx->pc = 0x2BAD40u;
label_2bad40:
    // 0x2bad40: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2bad40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2bad44:
    // 0x2bad44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bad44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2bad48:
    // 0x2bad48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bad48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bad4c:
    // 0x2bad4c: 0x24060253  addiu       $a2, $zero, 0x253
    ctx->pc = 0x2bad4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
label_2bad50:
    // 0x2bad50: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x2bad50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_2bad54:
    // 0x2bad54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bad54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bad58:
    // 0x2bad58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bad5c:
    // 0x2bad5c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bad5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2bad60:
    // 0x2bad60: 0xa0620020  sb          $v0, 0x20($v1)
    ctx->pc = 0x2bad60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
label_2bad64:
    // 0x2bad64: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bad64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bad68:
    // 0x2bad68: 0xc0be8c0  jal         func_2FA300
label_2bad6c:
    if (ctx->pc == 0x2BAD6Cu) {
        ctx->pc = 0x2BAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD68u;
        // 0x2bad6c: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD70u;
        goto label_2bad70;
    }
    ctx->pc = 0x2BAD68u;
    SET_GPR_U32(ctx, 31, 0x2BAD70u);
    ctx->pc = 0x2BAD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD68u;
    // 0x2bad6c: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2BAD68u, 0x2BAD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD70u;
label_2bad70:
    // 0x2bad70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bad70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bad74:
    // 0x2bad74: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2bad74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2bad78:
    // 0x2bad78: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2bad78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2bad7c:
    // 0x2bad7c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2bad7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bad80:
    // 0x2bad80: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2bad80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bad84:
    // 0x2bad84: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2bad84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bad88:
    // 0x2bad88: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2bad88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bad8c:
    // 0x2bad8c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2bad8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bad90:
    // 0x2bad90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bad90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bad94:
    // 0x2bad94: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2bad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bad98:
    // 0x2bad98: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2bad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bad9c:
    // 0x2bad9c: 0x3e00008  jr          $ra
label_2bada0:
    if (ctx->pc == 0x2BADA0u) {
        ctx->pc = 0x2BADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD9Cu;
        // 0x2bada0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BADA4u;
        goto label_2bada4;
    }
    ctx->pc = 0x2BAD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD9Cu;
        // 0x2bada0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BADA4u;
label_2bada4:
    // 0x2bada4: 0x0  nop
    ctx->pc = 0x2bada4u;
    // NOP
    ctx->pc = 0x2bada8u;
}
