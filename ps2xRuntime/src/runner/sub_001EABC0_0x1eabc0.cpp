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

// Function: sub_001EABC0
// Address: 0x1eabc0 - 0x1eb0c8
void sub_001EABC0_0x1eabc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EABC0_0x1eabc0");
#endif

    switch (ctx->pc) {
        case 0x1eabc0u: goto label_1eabc0;
        case 0x1eabc4u: goto label_1eabc4;
        case 0x1eabc8u: goto label_1eabc8;
        case 0x1eabccu: goto label_1eabcc;
        case 0x1eabd0u: goto label_1eabd0;
        case 0x1eabd4u: goto label_1eabd4;
        case 0x1eabd8u: goto label_1eabd8;
        case 0x1eabdcu: goto label_1eabdc;
        case 0x1eabe0u: goto label_1eabe0;
        case 0x1eabe4u: goto label_1eabe4;
        case 0x1eabe8u: goto label_1eabe8;
        case 0x1eabecu: goto label_1eabec;
        case 0x1eabf0u: goto label_1eabf0;
        case 0x1eabf4u: goto label_1eabf4;
        case 0x1eabf8u: goto label_1eabf8;
        case 0x1eabfcu: goto label_1eabfc;
        case 0x1eac00u: goto label_1eac00;
        case 0x1eac04u: goto label_1eac04;
        case 0x1eac08u: goto label_1eac08;
        case 0x1eac0cu: goto label_1eac0c;
        case 0x1eac10u: goto label_1eac10;
        case 0x1eac14u: goto label_1eac14;
        case 0x1eac18u: goto label_1eac18;
        case 0x1eac1cu: goto label_1eac1c;
        case 0x1eac20u: goto label_1eac20;
        case 0x1eac24u: goto label_1eac24;
        case 0x1eac28u: goto label_1eac28;
        case 0x1eac2cu: goto label_1eac2c;
        case 0x1eac30u: goto label_1eac30;
        case 0x1eac34u: goto label_1eac34;
        case 0x1eac38u: goto label_1eac38;
        case 0x1eac3cu: goto label_1eac3c;
        case 0x1eac40u: goto label_1eac40;
        case 0x1eac44u: goto label_1eac44;
        case 0x1eac48u: goto label_1eac48;
        case 0x1eac4cu: goto label_1eac4c;
        case 0x1eac50u: goto label_1eac50;
        case 0x1eac54u: goto label_1eac54;
        case 0x1eac58u: goto label_1eac58;
        case 0x1eac5cu: goto label_1eac5c;
        case 0x1eac60u: goto label_1eac60;
        case 0x1eac64u: goto label_1eac64;
        case 0x1eac68u: goto label_1eac68;
        case 0x1eac6cu: goto label_1eac6c;
        case 0x1eac70u: goto label_1eac70;
        case 0x1eac74u: goto label_1eac74;
        case 0x1eac78u: goto label_1eac78;
        case 0x1eac7cu: goto label_1eac7c;
        case 0x1eac80u: goto label_1eac80;
        case 0x1eac84u: goto label_1eac84;
        case 0x1eac88u: goto label_1eac88;
        case 0x1eac8cu: goto label_1eac8c;
        case 0x1eac90u: goto label_1eac90;
        case 0x1eac94u: goto label_1eac94;
        case 0x1eac98u: goto label_1eac98;
        case 0x1eac9cu: goto label_1eac9c;
        case 0x1eaca0u: goto label_1eaca0;
        case 0x1eaca4u: goto label_1eaca4;
        case 0x1eaca8u: goto label_1eaca8;
        case 0x1eacacu: goto label_1eacac;
        case 0x1eacb0u: goto label_1eacb0;
        case 0x1eacb4u: goto label_1eacb4;
        case 0x1eacb8u: goto label_1eacb8;
        case 0x1eacbcu: goto label_1eacbc;
        case 0x1eacc0u: goto label_1eacc0;
        case 0x1eacc4u: goto label_1eacc4;
        case 0x1eacc8u: goto label_1eacc8;
        case 0x1eacccu: goto label_1eaccc;
        case 0x1eacd0u: goto label_1eacd0;
        case 0x1eacd4u: goto label_1eacd4;
        case 0x1eacd8u: goto label_1eacd8;
        case 0x1eacdcu: goto label_1eacdc;
        case 0x1eace0u: goto label_1eace0;
        case 0x1eace4u: goto label_1eace4;
        case 0x1eace8u: goto label_1eace8;
        case 0x1eacecu: goto label_1eacec;
        case 0x1eacf0u: goto label_1eacf0;
        case 0x1eacf4u: goto label_1eacf4;
        case 0x1eacf8u: goto label_1eacf8;
        case 0x1eacfcu: goto label_1eacfc;
        case 0x1ead00u: goto label_1ead00;
        case 0x1ead04u: goto label_1ead04;
        case 0x1ead08u: goto label_1ead08;
        case 0x1ead0cu: goto label_1ead0c;
        case 0x1ead10u: goto label_1ead10;
        case 0x1ead14u: goto label_1ead14;
        case 0x1ead18u: goto label_1ead18;
        case 0x1ead1cu: goto label_1ead1c;
        case 0x1ead20u: goto label_1ead20;
        case 0x1ead24u: goto label_1ead24;
        case 0x1ead28u: goto label_1ead28;
        case 0x1ead2cu: goto label_1ead2c;
        case 0x1ead30u: goto label_1ead30;
        case 0x1ead34u: goto label_1ead34;
        case 0x1ead38u: goto label_1ead38;
        case 0x1ead3cu: goto label_1ead3c;
        case 0x1ead40u: goto label_1ead40;
        case 0x1ead44u: goto label_1ead44;
        case 0x1ead48u: goto label_1ead48;
        case 0x1ead4cu: goto label_1ead4c;
        case 0x1ead50u: goto label_1ead50;
        case 0x1ead54u: goto label_1ead54;
        case 0x1ead58u: goto label_1ead58;
        case 0x1ead5cu: goto label_1ead5c;
        case 0x1ead60u: goto label_1ead60;
        case 0x1ead64u: goto label_1ead64;
        case 0x1ead68u: goto label_1ead68;
        case 0x1ead6cu: goto label_1ead6c;
        case 0x1ead70u: goto label_1ead70;
        case 0x1ead74u: goto label_1ead74;
        case 0x1ead78u: goto label_1ead78;
        case 0x1ead7cu: goto label_1ead7c;
        case 0x1ead80u: goto label_1ead80;
        case 0x1ead84u: goto label_1ead84;
        case 0x1ead88u: goto label_1ead88;
        case 0x1ead8cu: goto label_1ead8c;
        case 0x1ead90u: goto label_1ead90;
        case 0x1ead94u: goto label_1ead94;
        case 0x1ead98u: goto label_1ead98;
        case 0x1ead9cu: goto label_1ead9c;
        case 0x1eada0u: goto label_1eada0;
        case 0x1eada4u: goto label_1eada4;
        case 0x1eada8u: goto label_1eada8;
        case 0x1eadacu: goto label_1eadac;
        case 0x1eadb0u: goto label_1eadb0;
        case 0x1eadb4u: goto label_1eadb4;
        case 0x1eadb8u: goto label_1eadb8;
        case 0x1eadbcu: goto label_1eadbc;
        case 0x1eadc0u: goto label_1eadc0;
        case 0x1eadc4u: goto label_1eadc4;
        case 0x1eadc8u: goto label_1eadc8;
        case 0x1eadccu: goto label_1eadcc;
        case 0x1eadd0u: goto label_1eadd0;
        case 0x1eadd4u: goto label_1eadd4;
        case 0x1eadd8u: goto label_1eadd8;
        case 0x1eaddcu: goto label_1eaddc;
        case 0x1eade0u: goto label_1eade0;
        case 0x1eade4u: goto label_1eade4;
        case 0x1eade8u: goto label_1eade8;
        case 0x1eadecu: goto label_1eadec;
        case 0x1eadf0u: goto label_1eadf0;
        case 0x1eadf4u: goto label_1eadf4;
        case 0x1eadf8u: goto label_1eadf8;
        case 0x1eadfcu: goto label_1eadfc;
        case 0x1eae00u: goto label_1eae00;
        case 0x1eae04u: goto label_1eae04;
        case 0x1eae08u: goto label_1eae08;
        case 0x1eae0cu: goto label_1eae0c;
        case 0x1eae10u: goto label_1eae10;
        case 0x1eae14u: goto label_1eae14;
        case 0x1eae18u: goto label_1eae18;
        case 0x1eae1cu: goto label_1eae1c;
        case 0x1eae20u: goto label_1eae20;
        case 0x1eae24u: goto label_1eae24;
        case 0x1eae28u: goto label_1eae28;
        case 0x1eae2cu: goto label_1eae2c;
        case 0x1eae30u: goto label_1eae30;
        case 0x1eae34u: goto label_1eae34;
        case 0x1eae38u: goto label_1eae38;
        case 0x1eae3cu: goto label_1eae3c;
        case 0x1eae40u: goto label_1eae40;
        case 0x1eae44u: goto label_1eae44;
        case 0x1eae48u: goto label_1eae48;
        case 0x1eae4cu: goto label_1eae4c;
        case 0x1eae50u: goto label_1eae50;
        case 0x1eae54u: goto label_1eae54;
        case 0x1eae58u: goto label_1eae58;
        case 0x1eae5cu: goto label_1eae5c;
        case 0x1eae60u: goto label_1eae60;
        case 0x1eae64u: goto label_1eae64;
        case 0x1eae68u: goto label_1eae68;
        case 0x1eae6cu: goto label_1eae6c;
        case 0x1eae70u: goto label_1eae70;
        case 0x1eae74u: goto label_1eae74;
        case 0x1eae78u: goto label_1eae78;
        case 0x1eae7cu: goto label_1eae7c;
        case 0x1eae80u: goto label_1eae80;
        case 0x1eae84u: goto label_1eae84;
        case 0x1eae88u: goto label_1eae88;
        case 0x1eae8cu: goto label_1eae8c;
        case 0x1eae90u: goto label_1eae90;
        case 0x1eae94u: goto label_1eae94;
        case 0x1eae98u: goto label_1eae98;
        case 0x1eae9cu: goto label_1eae9c;
        case 0x1eaea0u: goto label_1eaea0;
        case 0x1eaea4u: goto label_1eaea4;
        case 0x1eaea8u: goto label_1eaea8;
        case 0x1eaeacu: goto label_1eaeac;
        case 0x1eaeb0u: goto label_1eaeb0;
        case 0x1eaeb4u: goto label_1eaeb4;
        case 0x1eaeb8u: goto label_1eaeb8;
        case 0x1eaebcu: goto label_1eaebc;
        case 0x1eaec0u: goto label_1eaec0;
        case 0x1eaec4u: goto label_1eaec4;
        case 0x1eaec8u: goto label_1eaec8;
        case 0x1eaeccu: goto label_1eaecc;
        case 0x1eaed0u: goto label_1eaed0;
        case 0x1eaed4u: goto label_1eaed4;
        case 0x1eaed8u: goto label_1eaed8;
        case 0x1eaedcu: goto label_1eaedc;
        case 0x1eaee0u: goto label_1eaee0;
        case 0x1eaee4u: goto label_1eaee4;
        case 0x1eaee8u: goto label_1eaee8;
        case 0x1eaeecu: goto label_1eaeec;
        case 0x1eaef0u: goto label_1eaef0;
        case 0x1eaef4u: goto label_1eaef4;
        case 0x1eaef8u: goto label_1eaef8;
        case 0x1eaefcu: goto label_1eaefc;
        case 0x1eaf00u: goto label_1eaf00;
        case 0x1eaf04u: goto label_1eaf04;
        case 0x1eaf08u: goto label_1eaf08;
        case 0x1eaf0cu: goto label_1eaf0c;
        case 0x1eaf10u: goto label_1eaf10;
        case 0x1eaf14u: goto label_1eaf14;
        case 0x1eaf18u: goto label_1eaf18;
        case 0x1eaf1cu: goto label_1eaf1c;
        case 0x1eaf20u: goto label_1eaf20;
        case 0x1eaf24u: goto label_1eaf24;
        case 0x1eaf28u: goto label_1eaf28;
        case 0x1eaf2cu: goto label_1eaf2c;
        case 0x1eaf30u: goto label_1eaf30;
        case 0x1eaf34u: goto label_1eaf34;
        case 0x1eaf38u: goto label_1eaf38;
        case 0x1eaf3cu: goto label_1eaf3c;
        case 0x1eaf40u: goto label_1eaf40;
        case 0x1eaf44u: goto label_1eaf44;
        case 0x1eaf48u: goto label_1eaf48;
        case 0x1eaf4cu: goto label_1eaf4c;
        case 0x1eaf50u: goto label_1eaf50;
        case 0x1eaf54u: goto label_1eaf54;
        case 0x1eaf58u: goto label_1eaf58;
        case 0x1eaf5cu: goto label_1eaf5c;
        case 0x1eaf60u: goto label_1eaf60;
        case 0x1eaf64u: goto label_1eaf64;
        case 0x1eaf68u: goto label_1eaf68;
        case 0x1eaf6cu: goto label_1eaf6c;
        case 0x1eaf70u: goto label_1eaf70;
        case 0x1eaf74u: goto label_1eaf74;
        case 0x1eaf78u: goto label_1eaf78;
        case 0x1eaf7cu: goto label_1eaf7c;
        case 0x1eaf80u: goto label_1eaf80;
        case 0x1eaf84u: goto label_1eaf84;
        case 0x1eaf88u: goto label_1eaf88;
        case 0x1eaf8cu: goto label_1eaf8c;
        case 0x1eaf90u: goto label_1eaf90;
        case 0x1eaf94u: goto label_1eaf94;
        case 0x1eaf98u: goto label_1eaf98;
        case 0x1eaf9cu: goto label_1eaf9c;
        case 0x1eafa0u: goto label_1eafa0;
        case 0x1eafa4u: goto label_1eafa4;
        case 0x1eafa8u: goto label_1eafa8;
        case 0x1eafacu: goto label_1eafac;
        case 0x1eafb0u: goto label_1eafb0;
        case 0x1eafb4u: goto label_1eafb4;
        case 0x1eafb8u: goto label_1eafb8;
        case 0x1eafbcu: goto label_1eafbc;
        case 0x1eafc0u: goto label_1eafc0;
        case 0x1eafc4u: goto label_1eafc4;
        case 0x1eafc8u: goto label_1eafc8;
        case 0x1eafccu: goto label_1eafcc;
        case 0x1eafd0u: goto label_1eafd0;
        case 0x1eafd4u: goto label_1eafd4;
        case 0x1eafd8u: goto label_1eafd8;
        case 0x1eafdcu: goto label_1eafdc;
        case 0x1eafe0u: goto label_1eafe0;
        case 0x1eafe4u: goto label_1eafe4;
        case 0x1eafe8u: goto label_1eafe8;
        case 0x1eafecu: goto label_1eafec;
        case 0x1eaff0u: goto label_1eaff0;
        case 0x1eaff4u: goto label_1eaff4;
        case 0x1eaff8u: goto label_1eaff8;
        case 0x1eaffcu: goto label_1eaffc;
        case 0x1eb000u: goto label_1eb000;
        case 0x1eb004u: goto label_1eb004;
        case 0x1eb008u: goto label_1eb008;
        case 0x1eb00cu: goto label_1eb00c;
        case 0x1eb010u: goto label_1eb010;
        case 0x1eb014u: goto label_1eb014;
        case 0x1eb018u: goto label_1eb018;
        case 0x1eb01cu: goto label_1eb01c;
        case 0x1eb020u: goto label_1eb020;
        case 0x1eb024u: goto label_1eb024;
        case 0x1eb028u: goto label_1eb028;
        case 0x1eb02cu: goto label_1eb02c;
        case 0x1eb030u: goto label_1eb030;
        case 0x1eb034u: goto label_1eb034;
        case 0x1eb038u: goto label_1eb038;
        case 0x1eb03cu: goto label_1eb03c;
        case 0x1eb040u: goto label_1eb040;
        case 0x1eb044u: goto label_1eb044;
        case 0x1eb048u: goto label_1eb048;
        case 0x1eb04cu: goto label_1eb04c;
        case 0x1eb050u: goto label_1eb050;
        case 0x1eb054u: goto label_1eb054;
        case 0x1eb058u: goto label_1eb058;
        case 0x1eb05cu: goto label_1eb05c;
        case 0x1eb060u: goto label_1eb060;
        case 0x1eb064u: goto label_1eb064;
        case 0x1eb068u: goto label_1eb068;
        case 0x1eb06cu: goto label_1eb06c;
        case 0x1eb070u: goto label_1eb070;
        case 0x1eb074u: goto label_1eb074;
        case 0x1eb078u: goto label_1eb078;
        case 0x1eb07cu: goto label_1eb07c;
        case 0x1eb080u: goto label_1eb080;
        case 0x1eb084u: goto label_1eb084;
        case 0x1eb088u: goto label_1eb088;
        case 0x1eb08cu: goto label_1eb08c;
        case 0x1eb090u: goto label_1eb090;
        case 0x1eb094u: goto label_1eb094;
        case 0x1eb098u: goto label_1eb098;
        case 0x1eb09cu: goto label_1eb09c;
        case 0x1eb0a0u: goto label_1eb0a0;
        case 0x1eb0a4u: goto label_1eb0a4;
        case 0x1eb0a8u: goto label_1eb0a8;
        case 0x1eb0acu: goto label_1eb0ac;
        case 0x1eb0b0u: goto label_1eb0b0;
        case 0x1eb0b4u: goto label_1eb0b4;
        case 0x1eb0b8u: goto label_1eb0b8;
        case 0x1eb0bcu: goto label_1eb0bc;
        case 0x1eb0c0u: goto label_1eb0c0;
        case 0x1eb0c4u: goto label_1eb0c4;
        default: break;
    }

    ctx->pc = 0x1eabc0u;

label_1eabc0:
    // 0x1eabc0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1eabc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_1eabc4:
    // 0x1eabc4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1eabc8:
    // 0x1eabc8: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x1eabc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
label_1eabcc:
    // 0x1eabcc: 0x2445f374  addiu       $a1, $v0, -0xC8C
    ctx->pc = 0x1eabccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964084));
label_1eabd0:
    // 0x1eabd0: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x1eabd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
label_1eabd4:
    // 0x1eabd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1eabd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eabd8:
    // 0x1eabd8: 0xe7b501e8  swc1        $f21, 0x1E8($sp)
    ctx->pc = 0x1eabd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_1eabdc:
    // 0x1eabdc: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1eabdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eabe0:
    // 0x1eabe0: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x1eabe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
label_1eabe4:
    // 0x1eabe4: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x1eabe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
label_1eabe8:
    // 0x1eabe8: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x1eabe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
label_1eabec:
    // 0x1eabec: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x1eabecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_1eabf0:
    // 0x1eabf0: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x1eabf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
label_1eabf4:
    // 0x1eabf4: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x1eabf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
label_1eabf8:
    // 0x1eabf8: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x1eabf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
label_1eabfc:
    // 0x1eabfc: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1eabfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_1eac00:
    // 0x1eac00: 0xe7b401e0  swc1        $f20, 0x1E0($sp)
    ctx->pc = 0x1eac00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_1eac04:
    // 0x1eac04: 0xc455f374  lwc1        $f21, -0xC8C($v0)
    ctx->pc = 0x1eac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1eac08:
    // 0x1eac08: 0x8e64008c  lw          $a0, 0x8C($s3)
    ctx->pc = 0x1eac08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eac0c:
    // 0x1eac0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eac10:
    // 0x1eac10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1eac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1eac14:
    // 0x1eac14: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1eac14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_1eac18:
    // 0x1eac18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1eac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1eac1c:
    // 0x1eac1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1eac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eac20:
    // 0x1eac20: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x1eac20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_1eac24:
    // 0x1eac24: 0x284182b  sltu        $v1, $s4, $a0
    ctx->pc = 0x1eac24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1eac28:
    // 0x1eac28: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_1eac2c:
    if (ctx->pc == 0x1EAC2Cu) {
        ctx->pc = 0x1EAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC28u;
        // 0x1eac2c: 0x2c820004  sltiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC30u;
        goto label_1eac30;
    }
    ctx->pc = 0x1EAC28u;
    {
        const bool branch_taken_0x1eac28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC28u;
        // 0x1eac2c: 0x2c820004  sltiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac28) {
            ctx->pc = 0x1EACA4u;
            goto label_1eaca4;
        }
    }
    ctx->pc = 0x1EAC30u;
label_1eac30:
    // 0x1eac30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eac34:
    // 0x1eac34: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1eac38:
    if (ctx->pc == 0x1EAC38u) {
        ctx->pc = 0x1EAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC34u;
        // 0x1eac38: 0xafa30130  sw          $v1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC3Cu;
        goto label_1eac3c;
    }
    ctx->pc = 0x1EAC34u;
    {
        const bool branch_taken_0x1eac34 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1EAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC34u;
        // 0x1eac38: 0xafa30130  sw          $v1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac34) {
            ctx->pc = 0x1EAC50u;
            goto label_1eac50;
        }
    }
    ctx->pc = 0x1EAC3Cu;
label_1eac3c:
    // 0x1eac3c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1eac3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1eac40:
    // 0x1eac40: 0x0  nop
    ctx->pc = 0x1eac40u;
    // NOP
label_1eac44:
    // 0x1eac44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1eac44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1eac48:
    // 0x1eac48: 0x10000008  b           . + 4 + (0x8 << 2)
label_1eac4c:
    if (ctx->pc == 0x1EAC4Cu) {
        ctx->pc = 0x1EAC50u;
        goto label_1eac50;
    }
    ctx->pc = 0x1EAC48u;
    {
        const bool branch_taken_0x1eac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac48) {
            ctx->pc = 0x1EAC6Cu;
            goto label_1eac6c;
        }
    }
    ctx->pc = 0x1EAC50u;
label_1eac50:
    // 0x1eac50: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1eac50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1eac54:
    // 0x1eac54: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1eac54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1eac58:
    // 0x1eac58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1eac58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1eac5c:
    // 0x1eac5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eac5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1eac60:
    // 0x1eac60: 0x0  nop
    ctx->pc = 0x1eac60u;
    // NOP
label_1eac64:
    // 0x1eac64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1eac64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1eac68:
    // 0x1eac68: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1eac68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1eac6c:
    // 0x1eac6c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eac6cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eac70:
    // 0x1eac70: 0x0  nop
    ctx->pc = 0x1eac70u;
    // NOP
label_1eac74:
    // 0x1eac74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eac74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eac78:
    // 0x1eac78: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x1eac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eac7c:
    // 0x1eac7c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1eac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eac80:
    // 0x1eac80: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1eac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1eac84:
    // 0x1eac84: 0x0  nop
    ctx->pc = 0x1eac84u;
    // NOP
label_1eac88:
    // 0x1eac88: 0x0  nop
    ctx->pc = 0x1eac88u;
    // NOP
label_1eac8c:
    // 0x1eac8c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1eac8cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_1eac90:
    // 0x1eac90: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1eac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1eac94:
    // 0x1eac94: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1eac94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1eac98:
    // 0x1eac98: 0x2a083  sra         $s4, $v0, 2
    ctx->pc = 0x1eac98u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 2));
label_1eac9c:
    // 0x1eac9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1eaca0:
    if (ctx->pc == 0x1EACA0u) {
        ctx->pc = 0x1EACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC9Cu;
        // 0x1eaca0: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EACA4u;
        goto label_1eaca4;
    }
    ctx->pc = 0x1EAC9Cu;
    {
        const bool branch_taken_0x1eac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC9Cu;
        // 0x1eaca0: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac9c) {
            ctx->pc = 0x1EACC0u;
            goto label_1eacc0;
        }
    }
    ctx->pc = 0x1EACA4u;
label_1eaca4:
    // 0x1eaca4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1eaca8:
    if (ctx->pc == 0x1EACA8u) {
        ctx->pc = 0x1EACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACA4u;
        // 0x1eaca8: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EACACu;
        goto label_1eacac;
    }
    ctx->pc = 0x1EACA4u;
    {
        const bool branch_taken_0x1eaca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACA4u;
        // 0x1eaca8: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaca4) {
            ctx->pc = 0x1EACC4u;
            goto label_1eacc4;
        }
    }
    ctx->pc = 0x1EACACu;
label_1eacac:
    // 0x1eacac: 0x94001b  divu        $zero, $a0, $s4
    ctx->pc = 0x1eacacu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1eacb0:
    // 0x1eacb0: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_1eacb4:
    if (ctx->pc == 0x1EACB4u) {
        ctx->pc = 0x1EACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACB0u;
        // 0x1eacb4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EACB8u;
        goto label_1eacb8;
    }
    ctx->pc = 0x1EACB0u;
    {
        const bool branch_taken_0x1eacb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eacb0) {
            ctx->pc = 0x1EACB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EACB0u;
            // 0x1eacb4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EACB8u;
            goto label_1eacb8;
        }
    }
    ctx->pc = 0x1EACB8u;
label_1eacb8:
    // 0x1eacb8: 0x1012  mflo        $v0
    ctx->pc = 0x1eacb8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1eacbc:
    // 0x1eacbc: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1eacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_1eacc0:
    // 0x1eacc0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1eacc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1eacc4:
    // 0x1eacc4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1eacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1eacc8:
    // 0x1eacc8: 0xc460ee48  lwc1        $f0, -0x11B8($v1)
    ctx->pc = 0x1eacc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaccc:
    // 0x1eaccc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1eacccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1eacd0:
    // 0x1eacd0: 0xc441ee44  lwc1        $f1, -0x11BC($v0)
    ctx->pc = 0x1eacd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eacd4:
    // 0x1eacd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eacd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eacd8:
    // 0x1eacd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1eacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1eacdc:
    // 0x1eacdc: 0xc482f378  lwc1        $f2, -0xC88($a0)
    ctx->pc = 0x1eacdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eace0:
    // 0x1eace0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1eace0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1eace4:
    // 0x1eace4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1eace4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1eace8:
    // 0x1eace8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1eace8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1eacec:
    // 0x1eacec: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1eacecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1eacf0:
    // 0x1eacf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eacf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eacf4:
    // 0x1eacf4: 0xc440f388  lwc1        $f0, -0xC78($v0)
    ctx->pc = 0x1eacf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eacf8:
    // 0x1eacf8: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1eacf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1eacfc:
    // 0x1eacfc: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1eacfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1ead00:
    // 0x1ead00: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1ead04:
    if (ctx->pc == 0x1EAD04u) {
        ctx->pc = 0x1EAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD00u;
        // 0x1ead04: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAD08u;
        goto label_1ead08;
    }
    ctx->pc = 0x1EAD00u;
    {
        const bool branch_taken_0x1ead00 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1EAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD00u;
        // 0x1ead04: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead00) {
            ctx->pc = 0x1EAD1Cu;
            goto label_1ead1c;
        }
    }
    ctx->pc = 0x1EAD08u;
label_1ead08:
    // 0x1ead08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ead08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ead0c:
    // 0x1ead0c: 0x0  nop
    ctx->pc = 0x1ead0cu;
    // NOP
label_1ead10:
    // 0x1ead10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ead10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ead14:
    // 0x1ead14: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ead18:
    if (ctx->pc == 0x1EAD18u) {
        ctx->pc = 0x1EAD1Cu;
        goto label_1ead1c;
    }
    ctx->pc = 0x1EAD14u;
    {
        const bool branch_taken_0x1ead14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ead14) {
            ctx->pc = 0x1EAD38u;
            goto label_1ead38;
        }
    }
    ctx->pc = 0x1EAD1Cu;
label_1ead1c:
    // 0x1ead1c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1ead1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1ead20:
    // 0x1ead20: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ead20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1ead24:
    // 0x1ead24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ead24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ead28:
    // 0x1ead28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ead28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ead2c:
    // 0x1ead2c: 0x0  nop
    ctx->pc = 0x1ead2cu;
    // NOP
label_1ead30:
    // 0x1ead30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ead30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ead34:
    // 0x1ead34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ead34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ead38:
    // 0x1ead38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ead38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ead3c:
    // 0x1ead3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ead3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ead40:
    // 0x1ead40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ead40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ead44:
    // 0x1ead44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ead44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ead48:
    // 0x1ead48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ead48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ead4c:
    // 0x1ead4c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ead4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ead50:
    // 0x1ead50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ead50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ead54:
    // 0x1ead54: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1ead54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ead58:
    // 0x1ead58: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1ead58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1ead5c:
    // 0x1ead5c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1ead5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ead60:
    // 0x1ead60: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1ead60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1ead64:
    // 0x1ead64: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1ead64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ead68:
    // 0x1ead68: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ead68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ead6c:
    // 0x1ead6c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1ead6cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1ead70:
    // 0x1ead70: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ead70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ead74:
    // 0x1ead74: 0x25086ce8  addiu       $t0, $t0, 0x6CE8
    ctx->pc = 0x1ead74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27880));
label_1ead78:
    // 0x1ead78: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1ead78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1ead7c:
    // 0x1ead7c: 0x24a56d20  addiu       $a1, $a1, 0x6D20
    ctx->pc = 0x1ead7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27936));
label_1ead80:
    // 0x1ead80: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1ead80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1ead84:
    // 0x1ead84: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ead84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ead88:
    // 0x1ead88: 0x2409008b  addiu       $t1, $zero, 0x8B
    ctx->pc = 0x1ead88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_1ead8c:
    // 0x1ead8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ead8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ead90:
    // 0x1ead90: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ead90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ead94:
    // 0x1ead94: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1ead94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ead98:
    // 0x1ead98: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ead98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ead9c:
    // 0x1ead9c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ead9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1eada0:
    // 0x1eada0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1eada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1eada4:
    // 0x1eada4: 0x40f809  jalr        $v0
label_1eada8:
    if (ctx->pc == 0x1EADA8u) {
        ctx->pc = 0x1EADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADA4u;
        // 0x1eada8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADACu;
        goto label_1eadac;
    }
    ctx->pc = 0x1EADA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EADACu);
        ctx->pc = 0x1EADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADA4u;
        // 0x1eada8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EADA4u, 0x1EADACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EADACu;
label_1eadac:
    // 0x1eadac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1eadacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eadb0:
    // 0x1eadb0: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
label_1eadb4:
    if (ctx->pc == 0x1EADB4u) {
        ctx->pc = 0x1EADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADB0u;
        // 0x1eadb4: 0xae6800bc  sw          $t0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADB8u;
        goto label_1eadb8;
    }
    ctx->pc = 0x1EADB0u;
    {
        const bool branch_taken_0x1eadb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eadb0) {
            ctx->pc = 0x1EADB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EADB0u;
            // 0x1eadb4: 0xae6800bc  sw          $t0, 0xBC($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EADC8u;
            goto label_1eadc8;
        }
    }
    ctx->pc = 0x1EADB8u;
label_1eadb8:
    // 0x1eadb8: 0xc0784ce  jal         func_1E1338
label_1eadbc:
    if (ctx->pc == 0x1EADBCu) {
        ctx->pc = 0x1EADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADB8u;
        // 0x1eadbc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADC0u;
        goto label_1eadc0;
    }
    ctx->pc = 0x1EADB8u;
    SET_GPR_U32(ctx, 31, 0x1EADC0u);
    ctx->pc = 0x1EADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EADB8u;
    // 0x1eadbc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1338u, 0x1EADB8u, 0x1EADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EADC0u;
label_1eadc0:
    // 0x1eadc0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1eadc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eadc4:
    // 0x1eadc4: 0xae6800bc  sw          $t0, 0xBC($s3)
    ctx->pc = 0x1eadc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 8));
label_1eadc8:
    // 0x1eadc8: 0x26660050  addiu       $a2, $s3, 0x50
    ctx->pc = 0x1eadc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_1eadcc:
    // 0x1eadcc: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x1eadccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
label_1eadd0:
    // 0x1eadd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1eadd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eadd4:
    // 0x1eadd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eadd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eadd8:
    // 0x1eadd8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1eadd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eaddc:
    // 0x1eaddc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1eaddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1eade0:
    // 0x1eade0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1eade0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eade4:
    // 0x1eade4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1eade4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eade8:
    // 0x1eade8: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1eade8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1eadec:
    // 0x1eadec: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1eadecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1eadf0:
    // 0x1eadf0: 0x40f809  jalr        $v0
label_1eadf4:
    if (ctx->pc == 0x1EADF4u) {
        ctx->pc = 0x1EADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADF0u;
        // 0x1eadf4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADF8u;
        goto label_1eadf8;
    }
    ctx->pc = 0x1EADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EADF8u);
        ctx->pc = 0x1EADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADF0u;
        // 0x1eadf4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EADF0u, 0x1EADF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EADF8u;
label_1eadf8:
    // 0x1eadf8: 0x8e6500bc  lw          $a1, 0xBC($s3)
    ctx->pc = 0x1eadf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1eadfc:
    // 0x1eadfc: 0xc60cf388  lwc1        $f12, -0xC78($s0)
    ctx->pc = 0x1eadfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1eae00:
    // 0x1eae00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eae04:
    // 0x1eae04: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1eae04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_1eae08:
    // 0x1eae08: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1eae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1eae0c:
    // 0x1eae0c: 0x60f809  jalr        $v1
label_1eae10:
    if (ctx->pc == 0x1EAE10u) {
        ctx->pc = 0x1EAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE0Cu;
        // 0x1eae10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAE14u;
        goto label_1eae14;
    }
    ctx->pc = 0x1EAE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EAE14u);
        ctx->pc = 0x1EAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE0Cu;
        // 0x1eae10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAE0Cu, 0x1EAE14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAE14u;
label_1eae14:
    // 0x1eae14: 0x8e6500bc  lw          $a1, 0xBC($s3)
    ctx->pc = 0x1eae14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1eae18:
    // 0x1eae18: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1eae18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1eae1c:
    // 0x1eae1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1eae1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1eae20:
    // 0x1eae20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eae24:
    // 0x1eae24: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1eae24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1eae28:
    // 0x1eae28: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1eae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1eae2c:
    // 0x1eae2c: 0x60f809  jalr        $v1
label_1eae30:
    if (ctx->pc == 0x1EAE30u) {
        ctx->pc = 0x1EAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE2Cu;
        // 0x1eae30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAE34u;
        goto label_1eae34;
    }
    ctx->pc = 0x1EAE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EAE34u);
        ctx->pc = 0x1EAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE2Cu;
        // 0x1eae30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAE2Cu, 0x1EAE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAE34u;
label_1eae34:
    // 0x1eae34: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1eae34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1eae38:
    // 0x1eae38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1eae38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1eae3c:
    // 0x1eae3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eae3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eae40:
    // 0x1eae40: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1eae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1eae44:
    // 0x1eae44: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1eae44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1eae48:
    // 0x1eae48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1eae48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1eae4c:
    // 0x1eae4c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1eae4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1eae50:
    // 0x1eae50: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1eae50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1eae54:
    // 0x1eae54: 0xc620f378  lwc1        $f0, -0xC88($s1)
    ctx->pc = 0x1eae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294964088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eae58:
    // 0x1eae58: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1eae58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1eae5c:
    // 0x1eae5c: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1eae5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1eae60:
    // 0x1eae60: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1eae60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1eae64:
    // 0x1eae64: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1eae64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1eae68:
    // 0x1eae68: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1eae68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1eae6c:
    // 0x1eae6c: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x1eae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eae70:
    // 0x1eae70: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1eae70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1eae74:
    // 0x1eae74: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1eae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1eae78:
    // 0x1eae78: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1eae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1eae7c:
    // 0x1eae7c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1eae7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1eae80:
    // 0x1eae80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1eae80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1eae84:
    // 0x1eae84: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_1eae88:
    if (ctx->pc == 0x1EAE88u) {
        ctx->pc = 0x1EAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE84u;
        // 0x1eae88: 0x8e62008c  lw          $v0, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAE8Cu;
        goto label_1eae8c;
    }
    ctx->pc = 0x1EAE84u;
    {
        const bool branch_taken_0x1eae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eae84) {
            ctx->pc = 0x1EAE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAE84u;
            // 0x1eae88: 0x8e62008c  lw          $v0, 0x8C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAED8u;
            goto label_1eaed8;
        }
    }
    ctx->pc = 0x1EAE8Cu;
label_1eae8c:
    // 0x1eae8c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1eae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1eae90:
    // 0x1eae90: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1eae90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1eae94:
    // 0x1eae94: 0x9447eec2  lhu         $a3, -0x113E($v0)
    ctx->pc = 0x1eae94u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962882)));
label_1eae98:
    // 0x1eae98: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1eae98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1eae9c:
    // 0x1eae9c: 0x24c66d30  addiu       $a2, $a2, 0x6D30
    ctx->pc = 0x1eae9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27952));
label_1eaea0:
    // 0x1eaea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eaea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eaea4:
    // 0x1eaea4: 0xc10ca04  jal         func_432810
label_1eaea8:
    if (ctx->pc == 0x1EAEA8u) {
        ctx->pc = 0x1EAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEA4u;
        // 0x1eaea8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAEACu;
        goto label_1eaeac;
    }
    ctx->pc = 0x1EAEA4u;
    SET_GPR_U32(ctx, 31, 0x1EAEACu);
    ctx->pc = 0x1EAEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAEA4u;
    // 0x1eaea8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1EAEA4u, 0x1EAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAEACu;
label_1eaeac:
    // 0x1eaeac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1eaeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1eaeb0:
    // 0x1eaeb0: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1eaeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
label_1eaeb4:
    // 0x1eaeb4: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x1eaeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
label_1eaeb8:
    // 0x1eaeb8: 0x24c6abb8  addiu       $a2, $a2, -0x5448
    ctx->pc = 0x1eaeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945720));
label_1eaebc:
    // 0x1eaebc: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1eaebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1eaec0:
    // 0x1eaec0: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1eaec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1eaec4:
    // 0x1eaec4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1eaec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1eaec8:
    // 0x1eaec8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1eaec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eaecc:
    // 0x1eaecc: 0xc1038b6  jal         func_40E2D8
label_1eaed0:
    if (ctx->pc == 0x1EAED0u) {
        ctx->pc = 0x1EAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAECCu;
        // 0x1eaed0: 0x3405c350  ori         $a1, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAED4u;
        goto label_1eaed4;
    }
    ctx->pc = 0x1EAECCu;
    SET_GPR_U32(ctx, 31, 0x1EAED4u);
    ctx->pc = 0x1EAED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAECCu;
    // 0x1eaed0: 0x3405c350  ori         $a1, $zero, 0xC350 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E2D8u, 0x1EAECCu, 0x1EAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAED4u;
label_1eaed4:
    // 0x1eaed4: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1eaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eaed8:
    // 0x1eaed8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1eaed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1eaedc:
    // 0x1eaedc: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1eaedcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1eaee0:
    // 0x1eaee0: 0x12230062  beq         $s1, $v1, . + 4 + (0x62 << 2)
label_1eaee4:
    if (ctx->pc == 0x1EAEE4u) {
        ctx->pc = 0x1EAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEE0u;
        // 0x1eaee4: 0x8fa30130  lw          $v1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAEE8u;
        goto label_1eaee8;
    }
    ctx->pc = 0x1EAEE0u;
    {
        const bool branch_taken_0x1eaee0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEE0u;
        // 0x1eaee4: 0x8fa30130  lw          $v1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaee0) {
            ctx->pc = 0x1EB06Cu;
            goto label_1eb06c;
        }
    }
    ctx->pc = 0x1EAEE8u;
label_1eaee8:
    // 0x1eaee8: 0x2b4001b  divu        $zero, $s5, $s4
    ctx->pc = 0x1eaee8u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_1eaeec:
    // 0x1eaeec: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_1eaef0:
    if (ctx->pc == 0x1EAEF0u) {
        ctx->pc = 0x1EAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEECu;
        // 0x1eaef0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAEF4u;
        goto label_1eaef4;
    }
    ctx->pc = 0x1EAEECu;
    {
        const bool branch_taken_0x1eaeec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaeec) {
            ctx->pc = 0x1EAEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAEECu;
            // 0x1eaef0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAEF4u;
            goto label_1eaef4;
        }
    }
    ctx->pc = 0x1EAEF4u;
label_1eaef4:
    // 0x1eaef4: 0x1010  mfhi        $v0
    ctx->pc = 0x1eaef4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eaef8:
    // 0x1eaef8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_1eaefc:
    if (ctx->pc == 0x1EAEFCu) {
        ctx->pc = 0x1EAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEF8u;
        // 0x1eaefc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF00u;
        goto label_1eaf00;
    }
    ctx->pc = 0x1EAEF8u;
    {
        const bool branch_taken_0x1eaef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEF8u;
        // 0x1eaefc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaef8) {
            ctx->pc = 0x1EAF88u;
            goto label_1eaf88;
        }
    }
    ctx->pc = 0x1EAF00u;
label_1eaf00:
    // 0x1eaf00: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1eaf00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1eaf04:
    // 0x1eaf04: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1eaf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1eaf08:
    // 0x1eaf08: 0x24456d48  addiu       $a1, $v0, 0x6D48
    ctx->pc = 0x1eaf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27976));
label_1eaf0c:
    // 0x1eaf0c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1eaf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1eaf10:
    // 0x1eaf10: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1eaf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1eaf14:
    // 0x1eaf14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1eaf14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eaf18:
    // 0x1eaf18: 0x26e86ce8  addiu       $t0, $s7, 0x6CE8
    ctx->pc = 0x1eaf18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 27880));
label_1eaf1c:
    // 0x1eaf1c: 0x240900a8  addiu       $t1, $zero, 0xA8
    ctx->pc = 0x1eaf1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1eaf20:
    // 0x1eaf20: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1eaf20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1eaf24:
    // 0x1eaf24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eaf24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eaf28:
    // 0x1eaf28: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1eaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1eaf2c:
    // 0x1eaf2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eaf2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eaf30:
    // 0x1eaf30: 0x40f809  jalr        $v0
label_1eaf34:
    if (ctx->pc == 0x1EAF34u) {
        ctx->pc = 0x1EAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF30u;
        // 0x1eaf34: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF38u;
        goto label_1eaf38;
    }
    ctx->pc = 0x1EAF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EAF38u);
        ctx->pc = 0x1EAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF30u;
        // 0x1eaf34: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAF30u, 0x1EAF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAF38u;
label_1eaf38:
    // 0x1eaf38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1eaf38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eaf3c:
    // 0x1eaf3c: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
label_1eaf40:
    if (ctx->pc == 0x1EAF40u) {
        ctx->pc = 0x1EAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF3Cu;
        // 0x1eaf40: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF44u;
        goto label_1eaf44;
    }
    ctx->pc = 0x1EAF3Cu;
    {
        const bool branch_taken_0x1eaf3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaf3c) {
            ctx->pc = 0x1EAF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAF3Cu;
            // 0x1eaf40: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAF54u;
            goto label_1eaf54;
        }
    }
    ctx->pc = 0x1EAF44u;
label_1eaf44:
    // 0x1eaf44: 0xc06aeb4  jal         func_1ABAD0
label_1eaf48:
    if (ctx->pc == 0x1EAF48u) {
        ctx->pc = 0x1EAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF44u;
        // 0x1eaf48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF4Cu;
        goto label_1eaf4c;
    }
    ctx->pc = 0x1EAF44u;
    SET_GPR_U32(ctx, 31, 0x1EAF4Cu);
    ctx->pc = 0x1EAF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF44u;
    // 0x1eaf48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABAD0u, 0x1EAF44u, 0x1EAF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF4Cu;
label_1eaf4c:
    // 0x1eaf4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1eaf4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eaf50:
    // 0x1eaf50: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1eaf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1eaf54:
    // 0x1eaf54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1eaf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eaf58:
    // 0x1eaf58: 0x8faa0134  lw          $t2, 0x134($sp)
    ctx->pc = 0x1eaf58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_1eaf5c:
    // 0x1eaf5c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1eaf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1eaf60:
    // 0x1eaf60: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1eaf60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1eaf64:
    // 0x1eaf64: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1eaf64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1eaf68:
    // 0x1eaf68: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1eaf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1eaf6c:
    // 0x1eaf6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1eaf6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eaf70:
    // 0x1eaf70: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1eaf70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eaf74:
    // 0x1eaf74: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1eaf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1eaf78:
    // 0x1eaf78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eaf78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eaf7c:
    // 0x1eaf7c: 0x60f809  jalr        $v1
label_1eaf80:
    if (ctx->pc == 0x1EAF80u) {
        ctx->pc = 0x1EAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF7Cu;
        // 0x1eaf80: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF84u;
        goto label_1eaf84;
    }
    ctx->pc = 0x1EAF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EAF84u);
        ctx->pc = 0x1EAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF7Cu;
        // 0x1eaf80: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAF7Cu, 0x1EAF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAF84u;
label_1eaf84:
    // 0x1eaf84: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1eaf84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1eaf88:
    // 0x1eaf88: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1eaf88u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1eaf8c:
    // 0x1eaf8c: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1eaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1eaf90:
    // 0x1eaf90: 0x24656d58  addiu       $a1, $v1, 0x6D58
    ctx->pc = 0x1eaf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27992));
label_1eaf94:
    // 0x1eaf94: 0x24060870  addiu       $a2, $zero, 0x870
    ctx->pc = 0x1eaf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
label_1eaf98:
    // 0x1eaf98: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1eaf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1eaf9c:
    // 0x1eaf9c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1eaf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eafa0:
    // 0x1eafa0: 0x26e86ce8  addiu       $t0, $s7, 0x6CE8
    ctx->pc = 0x1eafa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 27880));
label_1eafa4:
    // 0x1eafa4: 0x240900b5  addiu       $t1, $zero, 0xB5
    ctx->pc = 0x1eafa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
label_1eafa8:
    // 0x1eafa8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1eafa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1eafac:
    // 0x1eafac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eafacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eafb0:
    // 0x1eafb0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1eafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1eafb4:
    // 0x1eafb4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eafb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eafb8:
    // 0x1eafb8: 0x40f809  jalr        $v0
label_1eafbc:
    if (ctx->pc == 0x1EAFBCu) {
        ctx->pc = 0x1EAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFB8u;
        // 0x1eafbc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAFC0u;
        goto label_1eafc0;
    }
    ctx->pc = 0x1EAFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EAFC0u);
        ctx->pc = 0x1EAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFB8u;
        // 0x1eafbc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAFB8u, 0x1EAFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAFC0u;
label_1eafc0:
    // 0x1eafc0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1eafc4:
    if (ctx->pc == 0x1EAFC4u) {
        ctx->pc = 0x1EAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFC0u;
        // 0x1eafc4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAFC8u;
        goto label_1eafc8;
    }
    ctx->pc = 0x1EAFC0u;
    {
        const bool branch_taken_0x1eafc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eafc0) {
            ctx->pc = 0x1EAFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAFC0u;
            // 0x1eafc4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAFD4u;
            goto label_1eafd4;
        }
    }
    ctx->pc = 0x1EAFC8u;
label_1eafc8:
    // 0x1eafc8: 0xc0807f0  jal         func_201FC0
label_1eafcc:
    if (ctx->pc == 0x1EAFCCu) {
        ctx->pc = 0x1EAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFC8u;
        // 0x1eafcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAFD0u;
        goto label_1eafd0;
    }
    ctx->pc = 0x1EAFC8u;
    SET_GPR_U32(ctx, 31, 0x1EAFD0u);
    ctx->pc = 0x1EAFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAFC8u;
    // 0x1eafcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201FC0u, 0x1EAFC8u, 0x1EAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAFD0u;
label_1eafd0:
    // 0x1eafd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1eafd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1eafd4:
    // 0x1eafd4: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1eafd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
label_1eafd8:
    // 0x1eafd8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1eafd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1eafdc:
    // 0x1eafdc: 0x3c07001c  lui         $a3, 0x1C
    ctx->pc = 0x1eafdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28 << 16));
label_1eafe0:
    // 0x1eafe0: 0x8e690090  lw          $t1, 0x90($s3)
    ctx->pc = 0x1eafe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_1eafe4:
    // 0x1eafe4: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1eafe4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1eafe8:
    // 0x1eafe8: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1eafe8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1eafec:
    // 0x1eafec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eafecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eaff0:
    // 0x1eaff0: 0x34c6000a  ori         $a2, $a2, 0xA
    ctx->pc = 0x1eaff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
label_1eaff4:
    // 0x1eaff4: 0x34e70013  ori         $a3, $a3, 0x13
    ctx->pc = 0x1eaff4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)19);
label_1eaff8:
    // 0x1eaff8: 0x3508000a  ori         $t0, $t0, 0xA
    ctx->pc = 0x1eaff8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
label_1eaffc:
    // 0x1eaffc: 0xc080824  jal         func_202090
label_1eb000:
    if (ctx->pc == 0x1EB000u) {
        ctx->pc = 0x1EB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFFCu;
        // 0x1eb000: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB004u;
        goto label_1eb004;
    }
    ctx->pc = 0x1EAFFCu;
    SET_GPR_U32(ctx, 31, 0x1EB004u);
    ctx->pc = 0x1EB000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAFFCu;
    // 0x1eb000: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202090u, 0x1EAFFCu, 0x1EB004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB004u;
label_1eb004:
    // 0x1eb004: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1eb004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1eb008:
    // 0x1eb008: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1eb008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1eb00c:
    // 0x1eb00c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1eb00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb010:
    // 0x1eb010: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1eb010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1eb014:
    // 0x1eb014: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1eb014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1eb018:
    // 0x1eb018: 0x40f809  jalr        $v0
label_1eb01c:
    if (ctx->pc == 0x1EB01Cu) {
        ctx->pc = 0x1EB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB018u;
        // 0x1eb01c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB020u;
        goto label_1eb020;
    }
    ctx->pc = 0x1EB018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB020u);
        ctx->pc = 0x1EB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB018u;
        // 0x1eb01c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB018u, 0x1EB020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB020u;
label_1eb020:
    // 0x1eb020: 0x2b4001b  divu        $zero, $s5, $s4
    ctx->pc = 0x1eb020u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_1eb024:
    // 0x1eb024: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_1eb028:
    if (ctx->pc == 0x1EB028u) {
        ctx->pc = 0x1EB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB024u;
        // 0x1eb028: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB02Cu;
        goto label_1eb02c;
    }
    ctx->pc = 0x1EB024u;
    {
        const bool branch_taken_0x1eb024 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb024) {
            ctx->pc = 0x1EB028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB024u;
            // 0x1eb028: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB02Cu;
            goto label_1eb02c;
        }
    }
    ctx->pc = 0x1EB02Cu;
label_1eb02c:
    // 0x1eb02c: 0x1810  mfhi        $v1
    ctx->pc = 0x1eb02cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1eb030:
    // 0x1eb030: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_1eb034:
    if (ctx->pc == 0x1EB034u) {
        ctx->pc = 0x1EB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB030u;
        // 0x1eb034: 0x8e63008c  lw          $v1, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB038u;
        goto label_1eb038;
    }
    ctx->pc = 0x1EB030u;
    {
        const bool branch_taken_0x1eb030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb030) {
            ctx->pc = 0x1EB034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB030u;
            // 0x1eb034: 0x8e63008c  lw          $v1, 0x8C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB058u;
            goto label_1eb058;
        }
    }
    ctx->pc = 0x1EB038u;
label_1eb038:
    // 0x1eb038: 0x8e6600bc  lw          $a2, 0xBC($s3)
    ctx->pc = 0x1eb038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1eb03c:
    // 0x1eb03c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eb03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb040:
    // 0x1eb040: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1eb040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1eb044:
    // 0x1eb044: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1eb044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1eb048:
    // 0x1eb048: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1eb048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1eb04c:
    // 0x1eb04c: 0x60f809  jalr        $v1
label_1eb050:
    if (ctx->pc == 0x1EB050u) {
        ctx->pc = 0x1EB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB04Cu;
        // 0x1eb050: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB054u;
        goto label_1eb054;
    }
    ctx->pc = 0x1EB04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB054u);
        ctx->pc = 0x1EB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB04Cu;
        // 0x1eb050: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB04Cu, 0x1EB054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB054u;
label_1eb054:
    // 0x1eb054: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x1eb054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eb058:
    // 0x1eb058: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1eb058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1eb05c:
    // 0x1eb05c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1eb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1eb060:
    // 0x1eb060: 0x1622ffa1  bne         $s1, $v0, . + 4 + (-0x5F << 2)
label_1eb064:
    if (ctx->pc == 0x1EB064u) {
        ctx->pc = 0x1EB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB060u;
        // 0x1eb064: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB068u;
        goto label_1eb068;
    }
    ctx->pc = 0x1EB060u;
    {
        const bool branch_taken_0x1eb060 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB060u;
        // 0x1eb064: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb060) {
            ctx->pc = 0x1EAEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eaee8;
        }
    }
    ctx->pc = 0x1EB068u;
label_1eb068:
    // 0x1eb068: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1eb068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1eb06c:
    // 0x1eb06c: 0x8e6600bc  lw          $a2, 0xBC($s3)
    ctx->pc = 0x1eb06cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1eb070:
    // 0x1eb070: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x1eb070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_1eb074:
    // 0x1eb074: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1eb074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1eb078:
    // 0x1eb078: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1eb07c:
    // 0x1eb07c: 0x2c2280a  movz        $a1, $s6, $v0
    ctx->pc = 0x1eb07cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 22));
label_1eb080:
    // 0x1eb080: 0x84640128  lh          $a0, 0x128($v1)
    ctx->pc = 0x1eb080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 296)));
label_1eb084:
    // 0x1eb084: 0x8c62012c  lw          $v0, 0x12C($v1)
    ctx->pc = 0x1eb084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_1eb088:
    // 0x1eb088: 0x40f809  jalr        $v0
label_1eb08c:
    if (ctx->pc == 0x1EB08Cu) {
        ctx->pc = 0x1EB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB088u;
        // 0x1eb08c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB090u;
        goto label_1eb090;
    }
    ctx->pc = 0x1EB088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB090u);
        ctx->pc = 0x1EB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB088u;
        // 0x1eb08c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB088u, 0x1EB090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB090u;
label_1eb090:
    // 0x1eb090: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x1eb090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1eb094:
    // 0x1eb094: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x1eb094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_1eb098:
    // 0x1eb098: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x1eb098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1eb09c:
    // 0x1eb09c: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x1eb09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1eb0a0:
    // 0x1eb0a0: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x1eb0a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1eb0a4:
    // 0x1eb0a4: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x1eb0a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1eb0a8:
    // 0x1eb0a8: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x1eb0a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1eb0ac:
    // 0x1eb0ac: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x1eb0acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1eb0b0:
    // 0x1eb0b0: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x1eb0b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1eb0b4:
    // 0x1eb0b4: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1eb0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_1eb0b8:
    // 0x1eb0b8: 0xc7b501e8  lwc1        $f21, 0x1E8($sp)
    ctx->pc = 0x1eb0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1eb0bc:
    // 0x1eb0bc: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x1eb0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1eb0c0:
    // 0x1eb0c0: 0x3e00008  jr          $ra
label_1eb0c4:
    if (ctx->pc == 0x1EB0C4u) {
        ctx->pc = 0x1EB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0C0u;
        // 0x1eb0c4: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB0C8u;
        goto label_fallthrough_0x1eb0c0;
    }
    ctx->pc = 0x1EB0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0C0u;
        // 0x1eb0c4: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eb0c0:
    ctx->pc = 0x1EB0C8u;
}
