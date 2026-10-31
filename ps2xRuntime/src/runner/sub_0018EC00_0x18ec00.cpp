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

// Function: sub_0018EC00
// Address: 0x18ec00 - 0x18f230
void sub_0018EC00_0x18ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EC00_0x18ec00");
#endif

    switch (ctx->pc) {
        case 0x18ec00u: goto label_18ec00;
        case 0x18ec04u: goto label_18ec04;
        case 0x18ec08u: goto label_18ec08;
        case 0x18ec0cu: goto label_18ec0c;
        case 0x18ec10u: goto label_18ec10;
        case 0x18ec14u: goto label_18ec14;
        case 0x18ec18u: goto label_18ec18;
        case 0x18ec1cu: goto label_18ec1c;
        case 0x18ec20u: goto label_18ec20;
        case 0x18ec24u: goto label_18ec24;
        case 0x18ec28u: goto label_18ec28;
        case 0x18ec2cu: goto label_18ec2c;
        case 0x18ec30u: goto label_18ec30;
        case 0x18ec34u: goto label_18ec34;
        case 0x18ec38u: goto label_18ec38;
        case 0x18ec3cu: goto label_18ec3c;
        case 0x18ec40u: goto label_18ec40;
        case 0x18ec44u: goto label_18ec44;
        case 0x18ec48u: goto label_18ec48;
        case 0x18ec4cu: goto label_18ec4c;
        case 0x18ec50u: goto label_18ec50;
        case 0x18ec54u: goto label_18ec54;
        case 0x18ec58u: goto label_18ec58;
        case 0x18ec5cu: goto label_18ec5c;
        case 0x18ec60u: goto label_18ec60;
        case 0x18ec64u: goto label_18ec64;
        case 0x18ec68u: goto label_18ec68;
        case 0x18ec6cu: goto label_18ec6c;
        case 0x18ec70u: goto label_18ec70;
        case 0x18ec74u: goto label_18ec74;
        case 0x18ec78u: goto label_18ec78;
        case 0x18ec7cu: goto label_18ec7c;
        case 0x18ec80u: goto label_18ec80;
        case 0x18ec84u: goto label_18ec84;
        case 0x18ec88u: goto label_18ec88;
        case 0x18ec8cu: goto label_18ec8c;
        case 0x18ec90u: goto label_18ec90;
        case 0x18ec94u: goto label_18ec94;
        case 0x18ec98u: goto label_18ec98;
        case 0x18ec9cu: goto label_18ec9c;
        case 0x18eca0u: goto label_18eca0;
        case 0x18eca4u: goto label_18eca4;
        case 0x18eca8u: goto label_18eca8;
        case 0x18ecacu: goto label_18ecac;
        case 0x18ecb0u: goto label_18ecb0;
        case 0x18ecb4u: goto label_18ecb4;
        case 0x18ecb8u: goto label_18ecb8;
        case 0x18ecbcu: goto label_18ecbc;
        case 0x18ecc0u: goto label_18ecc0;
        case 0x18ecc4u: goto label_18ecc4;
        case 0x18ecc8u: goto label_18ecc8;
        case 0x18ecccu: goto label_18eccc;
        case 0x18ecd0u: goto label_18ecd0;
        case 0x18ecd4u: goto label_18ecd4;
        case 0x18ecd8u: goto label_18ecd8;
        case 0x18ecdcu: goto label_18ecdc;
        case 0x18ece0u: goto label_18ece0;
        case 0x18ece4u: goto label_18ece4;
        case 0x18ece8u: goto label_18ece8;
        case 0x18ececu: goto label_18ecec;
        case 0x18ecf0u: goto label_18ecf0;
        case 0x18ecf4u: goto label_18ecf4;
        case 0x18ecf8u: goto label_18ecf8;
        case 0x18ecfcu: goto label_18ecfc;
        case 0x18ed00u: goto label_18ed00;
        case 0x18ed04u: goto label_18ed04;
        case 0x18ed08u: goto label_18ed08;
        case 0x18ed0cu: goto label_18ed0c;
        case 0x18ed10u: goto label_18ed10;
        case 0x18ed14u: goto label_18ed14;
        case 0x18ed18u: goto label_18ed18;
        case 0x18ed1cu: goto label_18ed1c;
        case 0x18ed20u: goto label_18ed20;
        case 0x18ed24u: goto label_18ed24;
        case 0x18ed28u: goto label_18ed28;
        case 0x18ed2cu: goto label_18ed2c;
        case 0x18ed30u: goto label_18ed30;
        case 0x18ed34u: goto label_18ed34;
        case 0x18ed38u: goto label_18ed38;
        case 0x18ed3cu: goto label_18ed3c;
        case 0x18ed40u: goto label_18ed40;
        case 0x18ed44u: goto label_18ed44;
        case 0x18ed48u: goto label_18ed48;
        case 0x18ed4cu: goto label_18ed4c;
        case 0x18ed50u: goto label_18ed50;
        case 0x18ed54u: goto label_18ed54;
        case 0x18ed58u: goto label_18ed58;
        case 0x18ed5cu: goto label_18ed5c;
        case 0x18ed60u: goto label_18ed60;
        case 0x18ed64u: goto label_18ed64;
        case 0x18ed68u: goto label_18ed68;
        case 0x18ed6cu: goto label_18ed6c;
        case 0x18ed70u: goto label_18ed70;
        case 0x18ed74u: goto label_18ed74;
        case 0x18ed78u: goto label_18ed78;
        case 0x18ed7cu: goto label_18ed7c;
        case 0x18ed80u: goto label_18ed80;
        case 0x18ed84u: goto label_18ed84;
        case 0x18ed88u: goto label_18ed88;
        case 0x18ed8cu: goto label_18ed8c;
        case 0x18ed90u: goto label_18ed90;
        case 0x18ed94u: goto label_18ed94;
        case 0x18ed98u: goto label_18ed98;
        case 0x18ed9cu: goto label_18ed9c;
        case 0x18eda0u: goto label_18eda0;
        case 0x18eda4u: goto label_18eda4;
        case 0x18eda8u: goto label_18eda8;
        case 0x18edacu: goto label_18edac;
        case 0x18edb0u: goto label_18edb0;
        case 0x18edb4u: goto label_18edb4;
        case 0x18edb8u: goto label_18edb8;
        case 0x18edbcu: goto label_18edbc;
        case 0x18edc0u: goto label_18edc0;
        case 0x18edc4u: goto label_18edc4;
        case 0x18edc8u: goto label_18edc8;
        case 0x18edccu: goto label_18edcc;
        case 0x18edd0u: goto label_18edd0;
        case 0x18edd4u: goto label_18edd4;
        case 0x18edd8u: goto label_18edd8;
        case 0x18eddcu: goto label_18eddc;
        case 0x18ede0u: goto label_18ede0;
        case 0x18ede4u: goto label_18ede4;
        case 0x18ede8u: goto label_18ede8;
        case 0x18edecu: goto label_18edec;
        case 0x18edf0u: goto label_18edf0;
        case 0x18edf4u: goto label_18edf4;
        case 0x18edf8u: goto label_18edf8;
        case 0x18edfcu: goto label_18edfc;
        case 0x18ee00u: goto label_18ee00;
        case 0x18ee04u: goto label_18ee04;
        case 0x18ee08u: goto label_18ee08;
        case 0x18ee0cu: goto label_18ee0c;
        case 0x18ee10u: goto label_18ee10;
        case 0x18ee14u: goto label_18ee14;
        case 0x18ee18u: goto label_18ee18;
        case 0x18ee1cu: goto label_18ee1c;
        case 0x18ee20u: goto label_18ee20;
        case 0x18ee24u: goto label_18ee24;
        case 0x18ee28u: goto label_18ee28;
        case 0x18ee2cu: goto label_18ee2c;
        case 0x18ee30u: goto label_18ee30;
        case 0x18ee34u: goto label_18ee34;
        case 0x18ee38u: goto label_18ee38;
        case 0x18ee3cu: goto label_18ee3c;
        case 0x18ee40u: goto label_18ee40;
        case 0x18ee44u: goto label_18ee44;
        case 0x18ee48u: goto label_18ee48;
        case 0x18ee4cu: goto label_18ee4c;
        case 0x18ee50u: goto label_18ee50;
        case 0x18ee54u: goto label_18ee54;
        case 0x18ee58u: goto label_18ee58;
        case 0x18ee5cu: goto label_18ee5c;
        case 0x18ee60u: goto label_18ee60;
        case 0x18ee64u: goto label_18ee64;
        case 0x18ee68u: goto label_18ee68;
        case 0x18ee6cu: goto label_18ee6c;
        case 0x18ee70u: goto label_18ee70;
        case 0x18ee74u: goto label_18ee74;
        case 0x18ee78u: goto label_18ee78;
        case 0x18ee7cu: goto label_18ee7c;
        case 0x18ee80u: goto label_18ee80;
        case 0x18ee84u: goto label_18ee84;
        case 0x18ee88u: goto label_18ee88;
        case 0x18ee8cu: goto label_18ee8c;
        case 0x18ee90u: goto label_18ee90;
        case 0x18ee94u: goto label_18ee94;
        case 0x18ee98u: goto label_18ee98;
        case 0x18ee9cu: goto label_18ee9c;
        case 0x18eea0u: goto label_18eea0;
        case 0x18eea4u: goto label_18eea4;
        case 0x18eea8u: goto label_18eea8;
        case 0x18eeacu: goto label_18eeac;
        case 0x18eeb0u: goto label_18eeb0;
        case 0x18eeb4u: goto label_18eeb4;
        case 0x18eeb8u: goto label_18eeb8;
        case 0x18eebcu: goto label_18eebc;
        case 0x18eec0u: goto label_18eec0;
        case 0x18eec4u: goto label_18eec4;
        case 0x18eec8u: goto label_18eec8;
        case 0x18eeccu: goto label_18eecc;
        case 0x18eed0u: goto label_18eed0;
        case 0x18eed4u: goto label_18eed4;
        case 0x18eed8u: goto label_18eed8;
        case 0x18eedcu: goto label_18eedc;
        case 0x18eee0u: goto label_18eee0;
        case 0x18eee4u: goto label_18eee4;
        case 0x18eee8u: goto label_18eee8;
        case 0x18eeecu: goto label_18eeec;
        case 0x18eef0u: goto label_18eef0;
        case 0x18eef4u: goto label_18eef4;
        case 0x18eef8u: goto label_18eef8;
        case 0x18eefcu: goto label_18eefc;
        case 0x18ef00u: goto label_18ef00;
        case 0x18ef04u: goto label_18ef04;
        case 0x18ef08u: goto label_18ef08;
        case 0x18ef0cu: goto label_18ef0c;
        case 0x18ef10u: goto label_18ef10;
        case 0x18ef14u: goto label_18ef14;
        case 0x18ef18u: goto label_18ef18;
        case 0x18ef1cu: goto label_18ef1c;
        case 0x18ef20u: goto label_18ef20;
        case 0x18ef24u: goto label_18ef24;
        case 0x18ef28u: goto label_18ef28;
        case 0x18ef2cu: goto label_18ef2c;
        case 0x18ef30u: goto label_18ef30;
        case 0x18ef34u: goto label_18ef34;
        case 0x18ef38u: goto label_18ef38;
        case 0x18ef3cu: goto label_18ef3c;
        case 0x18ef40u: goto label_18ef40;
        case 0x18ef44u: goto label_18ef44;
        case 0x18ef48u: goto label_18ef48;
        case 0x18ef4cu: goto label_18ef4c;
        case 0x18ef50u: goto label_18ef50;
        case 0x18ef54u: goto label_18ef54;
        case 0x18ef58u: goto label_18ef58;
        case 0x18ef5cu: goto label_18ef5c;
        case 0x18ef60u: goto label_18ef60;
        case 0x18ef64u: goto label_18ef64;
        case 0x18ef68u: goto label_18ef68;
        case 0x18ef6cu: goto label_18ef6c;
        case 0x18ef70u: goto label_18ef70;
        case 0x18ef74u: goto label_18ef74;
        case 0x18ef78u: goto label_18ef78;
        case 0x18ef7cu: goto label_18ef7c;
        case 0x18ef80u: goto label_18ef80;
        case 0x18ef84u: goto label_18ef84;
        case 0x18ef88u: goto label_18ef88;
        case 0x18ef8cu: goto label_18ef8c;
        case 0x18ef90u: goto label_18ef90;
        case 0x18ef94u: goto label_18ef94;
        case 0x18ef98u: goto label_18ef98;
        case 0x18ef9cu: goto label_18ef9c;
        case 0x18efa0u: goto label_18efa0;
        case 0x18efa4u: goto label_18efa4;
        case 0x18efa8u: goto label_18efa8;
        case 0x18efacu: goto label_18efac;
        case 0x18efb0u: goto label_18efb0;
        case 0x18efb4u: goto label_18efb4;
        case 0x18efb8u: goto label_18efb8;
        case 0x18efbcu: goto label_18efbc;
        case 0x18efc0u: goto label_18efc0;
        case 0x18efc4u: goto label_18efc4;
        case 0x18efc8u: goto label_18efc8;
        case 0x18efccu: goto label_18efcc;
        case 0x18efd0u: goto label_18efd0;
        case 0x18efd4u: goto label_18efd4;
        case 0x18efd8u: goto label_18efd8;
        case 0x18efdcu: goto label_18efdc;
        case 0x18efe0u: goto label_18efe0;
        case 0x18efe4u: goto label_18efe4;
        case 0x18efe8u: goto label_18efe8;
        case 0x18efecu: goto label_18efec;
        case 0x18eff0u: goto label_18eff0;
        case 0x18eff4u: goto label_18eff4;
        case 0x18eff8u: goto label_18eff8;
        case 0x18effcu: goto label_18effc;
        case 0x18f000u: goto label_18f000;
        case 0x18f004u: goto label_18f004;
        case 0x18f008u: goto label_18f008;
        case 0x18f00cu: goto label_18f00c;
        case 0x18f010u: goto label_18f010;
        case 0x18f014u: goto label_18f014;
        case 0x18f018u: goto label_18f018;
        case 0x18f01cu: goto label_18f01c;
        case 0x18f020u: goto label_18f020;
        case 0x18f024u: goto label_18f024;
        case 0x18f028u: goto label_18f028;
        case 0x18f02cu: goto label_18f02c;
        case 0x18f030u: goto label_18f030;
        case 0x18f034u: goto label_18f034;
        case 0x18f038u: goto label_18f038;
        case 0x18f03cu: goto label_18f03c;
        case 0x18f040u: goto label_18f040;
        case 0x18f044u: goto label_18f044;
        case 0x18f048u: goto label_18f048;
        case 0x18f04cu: goto label_18f04c;
        case 0x18f050u: goto label_18f050;
        case 0x18f054u: goto label_18f054;
        case 0x18f058u: goto label_18f058;
        case 0x18f05cu: goto label_18f05c;
        case 0x18f060u: goto label_18f060;
        case 0x18f064u: goto label_18f064;
        case 0x18f068u: goto label_18f068;
        case 0x18f06cu: goto label_18f06c;
        case 0x18f070u: goto label_18f070;
        case 0x18f074u: goto label_18f074;
        case 0x18f078u: goto label_18f078;
        case 0x18f07cu: goto label_18f07c;
        case 0x18f080u: goto label_18f080;
        case 0x18f084u: goto label_18f084;
        case 0x18f088u: goto label_18f088;
        case 0x18f08cu: goto label_18f08c;
        case 0x18f090u: goto label_18f090;
        case 0x18f094u: goto label_18f094;
        case 0x18f098u: goto label_18f098;
        case 0x18f09cu: goto label_18f09c;
        case 0x18f0a0u: goto label_18f0a0;
        case 0x18f0a4u: goto label_18f0a4;
        case 0x18f0a8u: goto label_18f0a8;
        case 0x18f0acu: goto label_18f0ac;
        case 0x18f0b0u: goto label_18f0b0;
        case 0x18f0b4u: goto label_18f0b4;
        case 0x18f0b8u: goto label_18f0b8;
        case 0x18f0bcu: goto label_18f0bc;
        case 0x18f0c0u: goto label_18f0c0;
        case 0x18f0c4u: goto label_18f0c4;
        case 0x18f0c8u: goto label_18f0c8;
        case 0x18f0ccu: goto label_18f0cc;
        case 0x18f0d0u: goto label_18f0d0;
        case 0x18f0d4u: goto label_18f0d4;
        case 0x18f0d8u: goto label_18f0d8;
        case 0x18f0dcu: goto label_18f0dc;
        case 0x18f0e0u: goto label_18f0e0;
        case 0x18f0e4u: goto label_18f0e4;
        case 0x18f0e8u: goto label_18f0e8;
        case 0x18f0ecu: goto label_18f0ec;
        case 0x18f0f0u: goto label_18f0f0;
        case 0x18f0f4u: goto label_18f0f4;
        case 0x18f0f8u: goto label_18f0f8;
        case 0x18f0fcu: goto label_18f0fc;
        case 0x18f100u: goto label_18f100;
        case 0x18f104u: goto label_18f104;
        case 0x18f108u: goto label_18f108;
        case 0x18f10cu: goto label_18f10c;
        case 0x18f110u: goto label_18f110;
        case 0x18f114u: goto label_18f114;
        case 0x18f118u: goto label_18f118;
        case 0x18f11cu: goto label_18f11c;
        case 0x18f120u: goto label_18f120;
        case 0x18f124u: goto label_18f124;
        case 0x18f128u: goto label_18f128;
        case 0x18f12cu: goto label_18f12c;
        case 0x18f130u: goto label_18f130;
        case 0x18f134u: goto label_18f134;
        case 0x18f138u: goto label_18f138;
        case 0x18f13cu: goto label_18f13c;
        case 0x18f140u: goto label_18f140;
        case 0x18f144u: goto label_18f144;
        case 0x18f148u: goto label_18f148;
        case 0x18f14cu: goto label_18f14c;
        case 0x18f150u: goto label_18f150;
        case 0x18f154u: goto label_18f154;
        case 0x18f158u: goto label_18f158;
        case 0x18f15cu: goto label_18f15c;
        case 0x18f160u: goto label_18f160;
        case 0x18f164u: goto label_18f164;
        case 0x18f168u: goto label_18f168;
        case 0x18f16cu: goto label_18f16c;
        case 0x18f170u: goto label_18f170;
        case 0x18f174u: goto label_18f174;
        case 0x18f178u: goto label_18f178;
        case 0x18f17cu: goto label_18f17c;
        case 0x18f180u: goto label_18f180;
        case 0x18f184u: goto label_18f184;
        case 0x18f188u: goto label_18f188;
        case 0x18f18cu: goto label_18f18c;
        case 0x18f190u: goto label_18f190;
        case 0x18f194u: goto label_18f194;
        case 0x18f198u: goto label_18f198;
        case 0x18f19cu: goto label_18f19c;
        case 0x18f1a0u: goto label_18f1a0;
        case 0x18f1a4u: goto label_18f1a4;
        case 0x18f1a8u: goto label_18f1a8;
        case 0x18f1acu: goto label_18f1ac;
        case 0x18f1b0u: goto label_18f1b0;
        case 0x18f1b4u: goto label_18f1b4;
        case 0x18f1b8u: goto label_18f1b8;
        case 0x18f1bcu: goto label_18f1bc;
        case 0x18f1c0u: goto label_18f1c0;
        case 0x18f1c4u: goto label_18f1c4;
        case 0x18f1c8u: goto label_18f1c8;
        case 0x18f1ccu: goto label_18f1cc;
        case 0x18f1d0u: goto label_18f1d0;
        case 0x18f1d4u: goto label_18f1d4;
        case 0x18f1d8u: goto label_18f1d8;
        case 0x18f1dcu: goto label_18f1dc;
        case 0x18f1e0u: goto label_18f1e0;
        case 0x18f1e4u: goto label_18f1e4;
        case 0x18f1e8u: goto label_18f1e8;
        case 0x18f1ecu: goto label_18f1ec;
        case 0x18f1f0u: goto label_18f1f0;
        case 0x18f1f4u: goto label_18f1f4;
        case 0x18f1f8u: goto label_18f1f8;
        case 0x18f1fcu: goto label_18f1fc;
        case 0x18f200u: goto label_18f200;
        case 0x18f204u: goto label_18f204;
        case 0x18f208u: goto label_18f208;
        case 0x18f20cu: goto label_18f20c;
        case 0x18f210u: goto label_18f210;
        case 0x18f214u: goto label_18f214;
        case 0x18f218u: goto label_18f218;
        case 0x18f21cu: goto label_18f21c;
        case 0x18f220u: goto label_18f220;
        case 0x18f224u: goto label_18f224;
        case 0x18f228u: goto label_18f228;
        case 0x18f22cu: goto label_18f22c;
        default: break;
    }

    ctx->pc = 0x18ec00u;

label_18ec00:
    // 0x18ec00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_18ec04:
    // 0x18ec04: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18ec04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_18ec08:
    // 0x18ec08: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18ec08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18ec0c:
    // 0x18ec0c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x18ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_18ec10:
    // 0x18ec10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18ec10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ec14:
    // 0x18ec14: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_18ec18:
    // 0x18ec18: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x18ec18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18ec1c:
    // 0x18ec1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18ec20:
    // 0x18ec20: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x18ec20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_18ec24:
    // 0x18ec24: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x18ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_18ec28:
    // 0x18ec28: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x18ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_18ec2c:
    // 0x18ec2c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18ec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_18ec30:
    // 0x18ec30: 0xc137a34  jal         func_4DE8D0
label_18ec34:
    if (ctx->pc == 0x18EC34u) {
        ctx->pc = 0x18EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC30u;
        // 0x18ec34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC38u;
        goto label_18ec38;
    }
    ctx->pc = 0x18EC30u;
    SET_GPR_U32(ctx, 31, 0x18EC38u);
    ctx->pc = 0x18EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC30u;
    // 0x18ec34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x18EC30u, 0x18EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC38u;
label_18ec38:
    // 0x18ec38: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_18ec3c:
    // 0x18ec3c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18ec40:
    // 0x18ec40: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_18ec44:
    if (ctx->pc == 0x18EC44u) {
        ctx->pc = 0x18EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC40u;
        // 0x18ec44: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC48u;
        goto label_18ec48;
    }
    ctx->pc = 0x18EC40u;
    {
        const bool branch_taken_0x18ec40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC40u;
        // 0x18ec44: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec40) {
            ctx->pc = 0x18EC58u;
            goto label_18ec58;
        }
    }
    ctx->pc = 0x18EC48u;
label_18ec48:
    // 0x18ec48: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x18ec48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_18ec4c:
    // 0x18ec4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_18ec50:
    // 0x18ec50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18ec54:
    if (ctx->pc == 0x18EC54u) {
        ctx->pc = 0x18EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC50u;
        // 0x18ec54: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC58u;
        goto label_18ec58;
    }
    ctx->pc = 0x18EC50u;
    {
        const bool branch_taken_0x18ec50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC50u;
        // 0x18ec54: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec50) {
            ctx->pc = 0x18EC60u;
            goto label_18ec60;
        }
    }
    ctx->pc = 0x18EC58u;
label_18ec58:
    // 0x18ec58: 0x1000016d  b           . + 4 + (0x16D << 2)
label_18ec5c:
    if (ctx->pc == 0x18EC5Cu) {
        ctx->pc = 0x18EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC58u;
        // 0x18ec5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC60u;
        goto label_18ec60;
    }
    ctx->pc = 0x18EC58u;
    {
        const bool branch_taken_0x18ec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC58u;
        // 0x18ec5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec58) {
            ctx->pc = 0x18F210u;
            goto label_18f210;
        }
    }
    ctx->pc = 0x18EC60u;
label_18ec60:
    // 0x18ec60: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x18ec60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_18ec64:
    // 0x18ec64: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x18ec64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_18ec68:
    // 0x18ec68: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x18ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_18ec6c:
    // 0x18ec6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18ec70:
    // 0x18ec70: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x18ec70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_18ec74:
    // 0x18ec74: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x18ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_18ec78:
    // 0x18ec78: 0x60f809  jalr        $v1
label_18ec7c:
    if (ctx->pc == 0x18EC7Cu) {
        ctx->pc = 0x18EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC78u;
        // 0x18ec7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC80u;
        goto label_18ec80;
    }
    ctx->pc = 0x18EC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18EC80u);
        ctx->pc = 0x18EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC78u;
        // 0x18ec7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EC78u, 0x18EC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EC80u;
label_18ec80:
    // 0x18ec80: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x18ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18ec84:
    // 0x18ec84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18ec84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18ec88:
    // 0x18ec88: 0x240600b2  addiu       $a2, $zero, 0xB2
    ctx->pc = 0x18ec88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_18ec8c:
    // 0x18ec8c: 0xc138de0  jal         func_4E3780
label_18ec90:
    if (ctx->pc == 0x18EC90u) {
        ctx->pc = 0x18EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC8Cu;
        // 0x18ec90: 0x24a53000  addiu       $a1, $a1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC94u;
        goto label_18ec94;
    }
    ctx->pc = 0x18EC8Cu;
    SET_GPR_U32(ctx, 31, 0x18EC94u);
    ctx->pc = 0x18EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC8Cu;
    // 0x18ec90: 0x24a53000  addiu       $a1, $a1, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3780u, 0x18EC8Cu, 0x18EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC94u;
label_18ec94:
    // 0x18ec94: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x18ec94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_18ec98:
    // 0x18ec98: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x18ec98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_18ec9c:
    // 0x18ec9c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18eca0:
    // 0x18eca0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_18eca4:
    // 0x18eca4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x18eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_18eca8:
    // 0x18eca8: 0x60f809  jalr        $v1
label_18ecac:
    if (ctx->pc == 0x18ECACu) {
        ctx->pc = 0x18ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECA8u;
        // 0x18ecac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ECB0u;
        goto label_18ecb0;
    }
    ctx->pc = 0x18ECA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18ECB0u);
        ctx->pc = 0x18ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECA8u;
        // 0x18ecac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ECA8u, 0x18ECB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18ECB0u;
label_18ecb0:
    // 0x18ecb0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x18ecb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18ecb4:
    // 0x18ecb4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x18ecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_18ecb8:
    // 0x18ecb8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18ecb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18ecbc:
    // 0x18ecbc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x18ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_18ecc0:
    // 0x18ecc0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_18ecc4:
    // 0x18ecc4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x18ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18ecc8:
    // 0x18ecc8: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x18ecc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_18eccc:
    // 0x18eccc: 0x244a0004  addiu       $t2, $v0, 0x4
    ctx->pc = 0x18ecccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_18ecd0:
    // 0x18ecd0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_18ecd4:
    if (ctx->pc == 0x18ECD4u) {
        ctx->pc = 0x18ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECD0u;
        // 0x18ecd4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ECD8u;
        goto label_18ecd8;
    }
    ctx->pc = 0x18ECD0u;
    {
        const bool branch_taken_0x18ecd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECD0u;
        // 0x18ecd4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ecd0) {
            ctx->pc = 0x18ED18u;
            goto label_18ed18;
        }
    }
    ctx->pc = 0x18ECD8u;
label_18ecd8:
    // 0x18ecd8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x18ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_18ecdc:
    // 0x18ecdc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_18ece0:
    if (ctx->pc == 0x18ECE0u) {
        ctx->pc = 0x18ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECDCu;
        // 0x18ece0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ECE4u;
        goto label_18ece4;
    }
    ctx->pc = 0x18ECDCu;
    {
        const bool branch_taken_0x18ecdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ecdc) {
            ctx->pc = 0x18ECE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ECDCu;
            // 0x18ece0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ECECu;
            goto label_18ecec;
        }
    }
    ctx->pc = 0x18ECE4u;
label_18ece4:
    // 0x18ece4: 0x1000000d  b           . + 4 + (0xD << 2)
label_18ece8:
    if (ctx->pc == 0x18ECE8u) {
        ctx->pc = 0x18ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECE4u;
        // 0x18ece8: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ECECu;
        goto label_18ecec;
    }
    ctx->pc = 0x18ECE4u;
    {
        const bool branch_taken_0x18ece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECE4u;
        // 0x18ece8: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ece4) {
            ctx->pc = 0x18ED1Cu;
            goto label_18ed1c;
        }
    }
    ctx->pc = 0x18ECECu;
label_18ecec:
    // 0x18ecec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x18ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18ecf0:
    // 0x18ecf0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_18ecf4:
    if (ctx->pc == 0x18ECF4u) {
        ctx->pc = 0x18ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECF0u;
        // 0x18ecf4: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ECF8u;
        goto label_18ecf8;
    }
    ctx->pc = 0x18ECF0u;
    {
        const bool branch_taken_0x18ecf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ecf0) {
            ctx->pc = 0x18ECF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ECF0u;
            // 0x18ecf4: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ED1Cu;
            goto label_18ed1c;
        }
    }
    ctx->pc = 0x18ECF8u;
label_18ecf8:
    // 0x18ecf8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x18ecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18ecfc:
    // 0x18ecfc: 0x0  nop
    ctx->pc = 0x18ecfcu;
    // NOP
label_18ed00:
    // 0x18ed00: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x18ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18ed04:
    // 0x18ed04: 0x0  nop
    ctx->pc = 0x18ed04u;
    // NOP
label_18ed08:
    // 0x18ed08: 0x0  nop
    ctx->pc = 0x18ed08u;
    // NOP
label_18ed0c:
    // 0x18ed0c: 0x0  nop
    ctx->pc = 0x18ed0cu;
    // NOP
label_18ed10:
    // 0x18ed10: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_18ed14:
    if (ctx->pc == 0x18ED14u) {
        ctx->pc = 0x18ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED10u;
        // 0x18ed14: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ED18u;
        goto label_18ed18;
    }
    ctx->pc = 0x18ED10u;
    {
        const bool branch_taken_0x18ed10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ed10) {
            ctx->pc = 0x18ED14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ED10u;
            // 0x18ed14: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ED00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ed00;
        }
    }
    ctx->pc = 0x18ED18u;
label_18ed18:
    // 0x18ed18: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x18ed18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_18ed1c:
    // 0x18ed1c: 0x10a60022  beq         $a1, $a2, . + 4 + (0x22 << 2)
label_18ed20:
    if (ctx->pc == 0x18ED20u) {
        ctx->pc = 0x18ED24u;
        goto label_18ed24;
    }
    ctx->pc = 0x18ED1Cu;
    {
        const bool branch_taken_0x18ed1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x18ed1c) {
            ctx->pc = 0x18EDA8u;
            goto label_18eda8;
        }
    }
    ctx->pc = 0x18ED24u;
label_18ed24:
    // 0x18ed24: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x18ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_18ed28:
    // 0x18ed28: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x18ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_18ed2c:
    // 0x18ed2c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x18ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_18ed30:
    // 0x18ed30: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x18ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_18ed34:
    // 0x18ed34: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_18ed38:
    // 0x18ed38: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_18ed3c:
    if (ctx->pc == 0x18ED3Cu) {
        ctx->pc = 0x18ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED38u;
        // 0x18ed3c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ED40u;
        goto label_18ed40;
    }
    ctx->pc = 0x18ED38u;
    {
        const bool branch_taken_0x18ed38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x18ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED38u;
        // 0x18ed3c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed38) {
            ctx->pc = 0x18ED64u;
            goto label_18ed64;
        }
    }
    ctx->pc = 0x18ED40u;
label_18ed40:
    // 0x18ed40: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_18ed44:
    if (ctx->pc == 0x18ED44u) {
        ctx->pc = 0x18ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED40u;
        // 0x18ed44: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ED48u;
        goto label_18ed48;
    }
    ctx->pc = 0x18ED40u;
    {
        const bool branch_taken_0x18ed40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED40u;
        // 0x18ed44: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed40) {
            ctx->pc = 0x18ED4Cu;
            goto label_18ed4c;
        }
    }
    ctx->pc = 0x18ED48u;
label_18ed48:
    // 0x18ed48: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x18ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_18ed4c:
    // 0x18ed4c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x18ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_18ed50:
    // 0x18ed50: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x18ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_18ed54:
    // 0x18ed54: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x18ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_18ed58:
    // 0x18ed58: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x18ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_18ed5c:
    // 0x18ed5c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_18ed60:
    // 0x18ed60: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x18ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_18ed64:
    // 0x18ed64: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x18ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_18ed68:
    // 0x18ed68: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_18ed6c:
    if (ctx->pc == 0x18ED6Cu) {
        ctx->pc = 0x18ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED68u;
        // 0x18ed6c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ED70u;
        goto label_18ed70;
    }
    ctx->pc = 0x18ED68u;
    {
        const bool branch_taken_0x18ed68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x18ed68) {
            ctx->pc = 0x18ED6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ED68u;
            // 0x18ed6c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ED78u;
            goto label_18ed78;
        }
    }
    ctx->pc = 0x18ED70u;
label_18ed70:
    // 0x18ed70: 0x10000005  b           . + 4 + (0x5 << 2)
label_18ed74:
    if (ctx->pc == 0x18ED74u) {
        ctx->pc = 0x18ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED70u;
        // 0x18ed74: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ED78u;
        goto label_18ed78;
    }
    ctx->pc = 0x18ED70u;
    {
        const bool branch_taken_0x18ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED70u;
        // 0x18ed74: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed70) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ED78u;
label_18ed78:
    // 0x18ed78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18ed7c:
    // 0x18ed7c: 0x54460002  bnel        $v0, $a2, . + 4 + (0x2 << 2)
label_18ed80:
    if (ctx->pc == 0x18ED80u) {
        ctx->pc = 0x18ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED7Cu;
        // 0x18ed80: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ED84u;
        goto label_18ed84;
    }
    ctx->pc = 0x18ED7Cu;
    {
        const bool branch_taken_0x18ed7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x18ed7c) {
            ctx->pc = 0x18ED80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ED7Cu;
            // 0x18ed80: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ED84u;
label_18ed84:
    // 0x18ed84: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x18ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_18ed88:
    // 0x18ed88: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x18ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_18ed8c:
    // 0x18ed8c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x18ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18ed90:
    // 0x18ed90: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x18ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_18ed94:
    // 0x18ed94: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x18ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18ed98:
    // 0x18ed98: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x18ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_18ed9c:
    // 0x18ed9c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x18ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_18eda0:
    // 0x18eda0: 0x10000034  b           . + 4 + (0x34 << 2)
label_18eda4:
    if (ctx->pc == 0x18EDA4u) {
        ctx->pc = 0x18EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDA0u;
        // 0x18eda4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EDA8u;
        goto label_18eda8;
    }
    ctx->pc = 0x18EDA0u;
    {
        const bool branch_taken_0x18eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDA0u;
        // 0x18eda4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eda0) {
            ctx->pc = 0x18EE74u;
            goto label_18ee74;
        }
    }
    ctx->pc = 0x18EDA8u;
label_18eda8:
    // 0x18eda8: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_18edac:
    if (ctx->pc == 0x18EDACu) {
        ctx->pc = 0x18EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDA8u;
        // 0x18edac: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EDB0u;
        goto label_18edb0;
    }
    ctx->pc = 0x18EDA8u;
    {
        const bool branch_taken_0x18eda8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDA8u;
        // 0x18edac: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eda8) {
            ctx->pc = 0x18EDB4u;
            goto label_18edb4;
        }
    }
    ctx->pc = 0x18EDB0u;
label_18edb0:
    // 0x18edb0: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x18edb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_18edb4:
    // 0x18edb4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x18edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_18edb8:
    // 0x18edb8: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_18edbc:
    if (ctx->pc == 0x18EDBCu) {
        ctx->pc = 0x18EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDB8u;
        // 0x18edbc: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EDC0u;
        goto label_18edc0;
    }
    ctx->pc = 0x18EDB8u;
    {
        const bool branch_taken_0x18edb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18edb8) {
            ctx->pc = 0x18EDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EDB8u;
            // 0x18edbc: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EDC8u;
            goto label_18edc8;
        }
    }
    ctx->pc = 0x18EDC0u;
label_18edc0:
    // 0x18edc0: 0x10000005  b           . + 4 + (0x5 << 2)
label_18edc4:
    if (ctx->pc == 0x18EDC4u) {
        ctx->pc = 0x18EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDC0u;
        // 0x18edc4: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EDC8u;
        goto label_18edc8;
    }
    ctx->pc = 0x18EDC0u;
    {
        const bool branch_taken_0x18edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDC0u;
        // 0x18edc4: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edc0) {
            ctx->pc = 0x18EDD8u;
            goto label_18edd8;
        }
    }
    ctx->pc = 0x18EDC8u;
label_18edc8:
    // 0x18edc8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18edcc:
    // 0x18edcc: 0x54450002  bnel        $v0, $a1, . + 4 + (0x2 << 2)
label_18edd0:
    if (ctx->pc == 0x18EDD0u) {
        ctx->pc = 0x18EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDCCu;
        // 0x18edd0: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EDD4u;
        goto label_18edd4;
    }
    ctx->pc = 0x18EDCCu;
    {
        const bool branch_taken_0x18edcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18edcc) {
            ctx->pc = 0x18EDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EDCCu;
            // 0x18edd0: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EDD8u;
            goto label_18edd8;
        }
    }
    ctx->pc = 0x18EDD4u;
label_18edd4:
    // 0x18edd4: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x18edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_18edd8:
    // 0x18edd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18eddc:
    // 0x18eddc: 0x54460012  bnel        $v0, $a2, . + 4 + (0x12 << 2)
label_18ede0:
    if (ctx->pc == 0x18EDE0u) {
        ctx->pc = 0x18EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDDCu;
        // 0x18ede0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EDE4u;
        goto label_18ede4;
    }
    ctx->pc = 0x18EDDCu;
    {
        const bool branch_taken_0x18eddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x18eddc) {
            ctx->pc = 0x18EDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EDDCu;
            // 0x18ede0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE28u;
            goto label_18ee28;
        }
    }
    ctx->pc = 0x18EDE4u;
label_18ede4:
    // 0x18ede4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_18ede8:
    // 0x18ede8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_18edec:
    if (ctx->pc == 0x18EDECu) {
        ctx->pc = 0x18EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDE8u;
        // 0x18edec: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EDF0u;
        goto label_18edf0;
    }
    ctx->pc = 0x18EDE8u;
    {
        const bool branch_taken_0x18ede8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ede8) {
            ctx->pc = 0x18EDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EDE8u;
            // 0x18edec: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EDFCu;
            goto label_18edfc;
        }
    }
    ctx->pc = 0x18EDF0u;
label_18edf0:
    // 0x18edf0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x18edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_18edf4:
    // 0x18edf4: 0x1000000b  b           . + 4 + (0xB << 2)
label_18edf8:
    if (ctx->pc == 0x18EDF8u) {
        ctx->pc = 0x18EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDF4u;
        // 0x18edf8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EDFCu;
        goto label_18edfc;
    }
    ctx->pc = 0x18EDF4u;
    {
        const bool branch_taken_0x18edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDF4u;
        // 0x18edf8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edf4) {
            ctx->pc = 0x18EE24u;
            goto label_18ee24;
        }
    }
    ctx->pc = 0x18EDFCu;
label_18edfc:
    // 0x18edfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18ee00:
    if (ctx->pc == 0x18EE00u) {
        ctx->pc = 0x18EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDFCu;
        // 0x18ee00: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE04u;
        goto label_18ee04;
    }
    ctx->pc = 0x18EDFCu;
    {
        const bool branch_taken_0x18edfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDFCu;
        // 0x18ee00: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edfc) {
            ctx->pc = 0x18EE20u;
            goto label_18ee20;
        }
    }
    ctx->pc = 0x18EE04u;
label_18ee04:
    // 0x18ee04: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x18ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18ee08:
    // 0x18ee08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18ee0c:
    // 0x18ee0c: 0x0  nop
    ctx->pc = 0x18ee0cu;
    // NOP
label_18ee10:
    // 0x18ee10: 0x0  nop
    ctx->pc = 0x18ee10u;
    // NOP
label_18ee14:
    // 0x18ee14: 0x0  nop
    ctx->pc = 0x18ee14u;
    // NOP
label_18ee18:
    // 0x18ee18: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_18ee1c:
    if (ctx->pc == 0x18EE1Cu) {
        ctx->pc = 0x18EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE18u;
        // 0x18ee1c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE20u;
        goto label_18ee20;
    }
    ctx->pc = 0x18EE18u;
    {
        const bool branch_taken_0x18ee18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee18) {
            ctx->pc = 0x18EE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EE18u;
            // 0x18ee1c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ee08;
        }
    }
    ctx->pc = 0x18EE20u;
label_18ee20:
    // 0x18ee20: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_18ee24:
    // 0x18ee24: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x18ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_18ee28:
    // 0x18ee28: 0x54460013  bnel        $v0, $a2, . + 4 + (0x13 << 2)
label_18ee2c:
    if (ctx->pc == 0x18EE2Cu) {
        ctx->pc = 0x18EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE28u;
        // 0x18ee2c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE30u;
        goto label_18ee30;
    }
    ctx->pc = 0x18EE28u;
    {
        const bool branch_taken_0x18ee28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x18ee28) {
            ctx->pc = 0x18EE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EE28u;
            // 0x18ee2c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE78u;
            goto label_18ee78;
        }
    }
    ctx->pc = 0x18EE30u;
label_18ee30:
    // 0x18ee30: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_18ee34:
    // 0x18ee34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_18ee38:
    if (ctx->pc == 0x18EE38u) {
        ctx->pc = 0x18EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE34u;
        // 0x18ee38: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE3Cu;
        goto label_18ee3c;
    }
    ctx->pc = 0x18EE34u;
    {
        const bool branch_taken_0x18ee34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee34) {
            ctx->pc = 0x18EE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EE34u;
            // 0x18ee38: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE48u;
            goto label_18ee48;
        }
    }
    ctx->pc = 0x18EE3Cu;
label_18ee3c:
    // 0x18ee3c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x18ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_18ee40:
    // 0x18ee40: 0x1000000c  b           . + 4 + (0xC << 2)
label_18ee44:
    if (ctx->pc == 0x18EE44u) {
        ctx->pc = 0x18EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE40u;
        // 0x18ee44: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE48u;
        goto label_18ee48;
    }
    ctx->pc = 0x18EE40u;
    {
        const bool branch_taken_0x18ee40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE40u;
        // 0x18ee44: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee40) {
            ctx->pc = 0x18EE74u;
            goto label_18ee74;
        }
    }
    ctx->pc = 0x18EE48u;
label_18ee48:
    // 0x18ee48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18ee4c:
    if (ctx->pc == 0x18EE4Cu) {
        ctx->pc = 0x18EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE48u;
        // 0x18ee4c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE50u;
        goto label_18ee50;
    }
    ctx->pc = 0x18EE48u;
    {
        const bool branch_taken_0x18ee48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE48u;
        // 0x18ee4c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee48) {
            ctx->pc = 0x18EE70u;
            goto label_18ee70;
        }
    }
    ctx->pc = 0x18EE50u;
label_18ee50:
    // 0x18ee50: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x18ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18ee54:
    // 0x18ee54: 0x0  nop
    ctx->pc = 0x18ee54u;
    // NOP
label_18ee58:
    // 0x18ee58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18ee5c:
    // 0x18ee5c: 0x0  nop
    ctx->pc = 0x18ee5cu;
    // NOP
label_18ee60:
    // 0x18ee60: 0x0  nop
    ctx->pc = 0x18ee60u;
    // NOP
label_18ee64:
    // 0x18ee64: 0x0  nop
    ctx->pc = 0x18ee64u;
    // NOP
label_18ee68:
    // 0x18ee68: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_18ee6c:
    if (ctx->pc == 0x18EE6Cu) {
        ctx->pc = 0x18EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE68u;
        // 0x18ee6c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE70u;
        goto label_18ee70;
    }
    ctx->pc = 0x18EE68u;
    {
        const bool branch_taken_0x18ee68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee68) {
            ctx->pc = 0x18EE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EE68u;
            // 0x18ee6c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ee58;
        }
    }
    ctx->pc = 0x18EE70u;
label_18ee70:
    // 0x18ee70: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x18ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_18ee74:
    // 0x18ee74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18ee78:
    // 0x18ee78: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_18ee7c:
    if (ctx->pc == 0x18EE7Cu) {
        ctx->pc = 0x18EE80u;
        goto label_18ee80;
    }
    ctx->pc = 0x18EE78u;
    {
        const bool branch_taken_0x18ee78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee78) {
            ctx->pc = 0x18F1C4u;
            goto label_18f1c4;
        }
    }
    ctx->pc = 0x18EE80u;
label_18ee80:
    // 0x18ee80: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_18ee84:
    if (ctx->pc == 0x18EE84u) {
        ctx->pc = 0x18EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE80u;
        // 0x18ee84: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE88u;
        goto label_18ee88;
    }
    ctx->pc = 0x18EE80u;
    {
        const bool branch_taken_0x18ee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE80u;
        // 0x18ee84: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee80) {
            ctx->pc = 0x18F198u;
            goto label_18f198;
        }
    }
    ctx->pc = 0x18EE88u;
label_18ee88:
    // 0x18ee88: 0x15220060  bne         $t1, $v0, . + 4 + (0x60 << 2)
label_18ee8c:
    if (ctx->pc == 0x18EE8Cu) {
        ctx->pc = 0x18EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE88u;
        // 0x18ee8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE90u;
        goto label_18ee90;
    }
    ctx->pc = 0x18EE88u;
    {
        const bool branch_taken_0x18ee88 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x18EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE88u;
        // 0x18ee8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee88) {
            ctx->pc = 0x18F00Cu;
            goto label_18f00c;
        }
    }
    ctx->pc = 0x18EE90u;
label_18ee90:
    // 0x18ee90: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x18ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_18ee94:
    // 0x18ee94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18ee98:
    // 0x18ee98: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_18ee9c:
    if (ctx->pc == 0x18EE9Cu) {
        ctx->pc = 0x18EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE98u;
        // 0x18ee9c: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EEA0u;
        goto label_18eea0;
    }
    ctx->pc = 0x18EE98u;
    {
        const bool branch_taken_0x18ee98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee98) {
            ctx->pc = 0x18EE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EE98u;
            // 0x18ee9c: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EF00u;
            goto label_18ef00;
        }
    }
    ctx->pc = 0x18EEA0u;
label_18eea0:
    // 0x18eea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18eea4:
    // 0x18eea4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18eea8:
    // 0x18eea8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x18eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_18eeac:
    // 0x18eeac: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x18eeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_18eeb0:
    // 0x18eeb0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x18eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18eeb4:
    // 0x18eeb4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x18eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_18eeb8:
    // 0x18eeb8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x18eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18eebc:
    // 0x18eebc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18eec0:
    if (ctx->pc == 0x18EEC0u) {
        ctx->pc = 0x18EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEBCu;
        // 0x18eec0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EEC4u;
        goto label_18eec4;
    }
    ctx->pc = 0x18EEBCu;
    {
        const bool branch_taken_0x18eebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eebc) {
            ctx->pc = 0x18EEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EEBCu;
            // 0x18eec0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EEC4u;
            goto label_18eec4;
        }
    }
    ctx->pc = 0x18EEC4u;
label_18eec4:
    // 0x18eec4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x18eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_18eec8:
    // 0x18eec8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x18eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_18eecc:
    // 0x18eecc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x18eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_18eed0:
    // 0x18eed0: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_18eed4:
    if (ctx->pc == 0x18EED4u) {
        ctx->pc = 0x18EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EED0u;
        // 0x18eed4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EED8u;
        goto label_18eed8;
    }
    ctx->pc = 0x18EED0u;
    {
        const bool branch_taken_0x18eed0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x18eed0) {
            ctx->pc = 0x18EED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EED0u;
            // 0x18eed4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EEE0u;
            goto label_18eee0;
        }
    }
    ctx->pc = 0x18EED8u;
label_18eed8:
    // 0x18eed8: 0x10000005  b           . + 4 + (0x5 << 2)
label_18eedc:
    if (ctx->pc == 0x18EEDCu) {
        ctx->pc = 0x18EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EED8u;
        // 0x18eedc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EEE0u;
        goto label_18eee0;
    }
    ctx->pc = 0x18EED8u;
    {
        const bool branch_taken_0x18eed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EED8u;
        // 0x18eedc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eed8) {
            ctx->pc = 0x18EEF0u;
            goto label_18eef0;
        }
    }
    ctx->pc = 0x18EEE0u;
label_18eee0:
    // 0x18eee0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18eee4:
    // 0x18eee4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_18eee8:
    if (ctx->pc == 0x18EEE8u) {
        ctx->pc = 0x18EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEE4u;
        // 0x18eee8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EEECu;
        goto label_18eeec;
    }
    ctx->pc = 0x18EEE4u;
    {
        const bool branch_taken_0x18eee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x18eee4) {
            ctx->pc = 0x18EEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EEE4u;
            // 0x18eee8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EEF0u;
            goto label_18eef0;
        }
    }
    ctx->pc = 0x18EEECu;
label_18eeec:
    // 0x18eeec: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x18eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_18eef0:
    // 0x18eef0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x18eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_18eef4:
    // 0x18eef4: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x18eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_18eef8:
    // 0x18eef8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x18eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_18eefc:
    // 0x18eefc: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x18eefcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18ef00:
    // 0x18ef00: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_18ef04:
    if (ctx->pc == 0x18EF04u) {
        ctx->pc = 0x18EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF00u;
        // 0x18ef04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF08u;
        goto label_18ef08;
    }
    ctx->pc = 0x18EF00u;
    {
        const bool branch_taken_0x18ef00 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF00u;
        // 0x18ef04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef00) {
            ctx->pc = 0x18EF14u;
            goto label_18ef14;
        }
    }
    ctx->pc = 0x18EF08u;
label_18ef08:
    // 0x18ef08: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x18ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_18ef0c:
    // 0x18ef0c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_18ef10:
    if (ctx->pc == 0x18EF10u) {
        ctx->pc = 0x18EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF0Cu;
        // 0x18ef10: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF14u;
        goto label_18ef14;
    }
    ctx->pc = 0x18EF0Cu;
    {
        const bool branch_taken_0x18ef0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF0Cu;
        // 0x18ef10: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef0c) {
            ctx->pc = 0x18EF2Cu;
            goto label_18ef2c;
        }
    }
    ctx->pc = 0x18EF14u;
label_18ef14:
    // 0x18ef14: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x18ef14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18ef18:
    // 0x18ef18: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
label_18ef1c:
    if (ctx->pc == 0x18EF1Cu) {
        ctx->pc = 0x18EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF18u;
        // 0x18ef1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF20u;
        goto label_18ef20;
    }
    ctx->pc = 0x18EF18u;
    {
        const bool branch_taken_0x18ef18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF18u;
        // 0x18ef1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef18) {
            ctx->pc = 0x18F0A4u;
            goto label_18f0a4;
        }
    }
    ctx->pc = 0x18EF20u;
label_18ef20:
    // 0x18ef20: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x18ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18ef24:
    // 0x18ef24: 0x50620060  beql        $v1, $v0, . + 4 + (0x60 << 2)
label_18ef28:
    if (ctx->pc == 0x18EF28u) {
        ctx->pc = 0x18EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF24u;
        // 0x18ef28: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF2Cu;
        goto label_18ef2c;
    }
    ctx->pc = 0x18EF24u;
    {
        const bool branch_taken_0x18ef24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ef24) {
            ctx->pc = 0x18EF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EF24u;
            // 0x18ef28: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F0A8u;
            goto label_18f0a8;
        }
    }
    ctx->pc = 0x18EF2Cu;
label_18ef2c:
    // 0x18ef2c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_18ef30:
    if (ctx->pc == 0x18EF30u) {
        ctx->pc = 0x18EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF2Cu;
        // 0x18ef30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF34u;
        goto label_18ef34;
    }
    ctx->pc = 0x18EF2Cu;
    {
        const bool branch_taken_0x18ef2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF2Cu;
        // 0x18ef30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef2c) {
            ctx->pc = 0x18EF40u;
            goto label_18ef40;
        }
    }
    ctx->pc = 0x18EF34u;
label_18ef34:
    // 0x18ef34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x18ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18ef38:
    // 0x18ef38: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_18ef3c:
    if (ctx->pc == 0x18EF3Cu) {
        ctx->pc = 0x18EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF38u;
        // 0x18ef3c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF40u;
        goto label_18ef40;
    }
    ctx->pc = 0x18EF38u;
    {
        const bool branch_taken_0x18ef38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ef38) {
            ctx->pc = 0x18EF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EF38u;
            // 0x18ef3c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EFA4u;
            goto label_18efa4;
        }
    }
    ctx->pc = 0x18EF40u;
label_18ef40:
    // 0x18ef40: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_18ef44:
    if (ctx->pc == 0x18EF44u) {
        ctx->pc = 0x18EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF40u;
        // 0x18ef44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF48u;
        goto label_18ef48;
    }
    ctx->pc = 0x18EF40u;
    {
        const bool branch_taken_0x18ef40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF40u;
        // 0x18ef44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef40) {
            ctx->pc = 0x18EF4Cu;
            goto label_18ef4c;
        }
    }
    ctx->pc = 0x18EF48u;
label_18ef48:
    // 0x18ef48: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x18ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_18ef4c:
    // 0x18ef4c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x18ef4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18ef50:
    // 0x18ef50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_18ef54:
    // 0x18ef54: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_18ef58:
    // 0x18ef58: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x18ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_18ef5c:
    // 0x18ef5c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_18ef60:
    // 0x18ef60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18ef64:
    if (ctx->pc == 0x18EF64u) {
        ctx->pc = 0x18EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF60u;
        // 0x18ef64: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF68u;
        goto label_18ef68;
    }
    ctx->pc = 0x18EF60u;
    {
        const bool branch_taken_0x18ef60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ef60) {
            ctx->pc = 0x18EF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EF60u;
            // 0x18ef64: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EF68u;
            goto label_18ef68;
        }
    }
    ctx->pc = 0x18EF68u;
label_18ef68:
    // 0x18ef68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18ef6c:
    // 0x18ef6c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x18ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_18ef70:
    // 0x18ef70: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x18ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_18ef74:
    // 0x18ef74: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_18ef78:
    if (ctx->pc == 0x18EF78u) {
        ctx->pc = 0x18EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF74u;
        // 0x18ef78: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF7Cu;
        goto label_18ef7c;
    }
    ctx->pc = 0x18EF74u;
    {
        const bool branch_taken_0x18ef74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ef74) {
            ctx->pc = 0x18EF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EF74u;
            // 0x18ef78: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EF84u;
            goto label_18ef84;
        }
    }
    ctx->pc = 0x18EF7Cu;
label_18ef7c:
    // 0x18ef7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_18ef80:
    if (ctx->pc == 0x18EF80u) {
        ctx->pc = 0x18EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF7Cu;
        // 0x18ef80: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF84u;
        goto label_18ef84;
    }
    ctx->pc = 0x18EF7Cu;
    {
        const bool branch_taken_0x18ef7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF7Cu;
        // 0x18ef80: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef7c) {
            ctx->pc = 0x18EF94u;
            goto label_18ef94;
        }
    }
    ctx->pc = 0x18EF84u;
label_18ef84:
    // 0x18ef84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18ef88:
    // 0x18ef88: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_18ef8c:
    if (ctx->pc == 0x18EF8Cu) {
        ctx->pc = 0x18EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF88u;
        // 0x18ef8c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF90u;
        goto label_18ef90;
    }
    ctx->pc = 0x18EF88u;
    {
        const bool branch_taken_0x18ef88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ef88) {
            ctx->pc = 0x18EF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EF88u;
            // 0x18ef8c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EF94u;
            goto label_18ef94;
        }
    }
    ctx->pc = 0x18EF90u;
label_18ef90:
    // 0x18ef90: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x18ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_18ef94:
    // 0x18ef94: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x18ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_18ef98:
    // 0x18ef98: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x18ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_18ef9c:
    // 0x18ef9c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x18ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_18efa0:
    // 0x18efa0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x18efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_18efa4:
    // 0x18efa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18efa8:
    // 0x18efa8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18efac:
    // 0x18efac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x18efacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_18efb0:
    // 0x18efb0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x18efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18efb4:
    // 0x18efb4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18efb8:
    if (ctx->pc == 0x18EFB8u) {
        ctx->pc = 0x18EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFB4u;
        // 0x18efb8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFBCu;
        goto label_18efbc;
    }
    ctx->pc = 0x18EFB4u;
    {
        const bool branch_taken_0x18efb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18efb4) {
            ctx->pc = 0x18EFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EFB4u;
            // 0x18efb8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EFBCu;
            goto label_18efbc;
        }
    }
    ctx->pc = 0x18EFBCu;
label_18efbc:
    // 0x18efbc: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x18efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_18efc0:
    // 0x18efc0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x18efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18efc4:
    // 0x18efc4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x18efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_18efc8:
    // 0x18efc8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x18efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18efcc:
    // 0x18efcc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18efd0:
    if (ctx->pc == 0x18EFD0u) {
        ctx->pc = 0x18EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFCCu;
        // 0x18efd0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFD4u;
        goto label_18efd4;
    }
    ctx->pc = 0x18EFCCu;
    {
        const bool branch_taken_0x18efcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18efcc) {
            ctx->pc = 0x18EFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EFCCu;
            // 0x18efd0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EFD4u;
            goto label_18efd4;
        }
    }
    ctx->pc = 0x18EFD4u;
label_18efd4:
    // 0x18efd4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x18efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_18efd8:
    // 0x18efd8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x18efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_18efdc:
    // 0x18efdc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_18efe0:
    // 0x18efe0: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_18efe4:
    if (ctx->pc == 0x18EFE4u) {
        ctx->pc = 0x18EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFE0u;
        // 0x18efe4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFE8u;
        goto label_18efe8;
    }
    ctx->pc = 0x18EFE0u;
    {
        const bool branch_taken_0x18efe0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x18efe0) {
            ctx->pc = 0x18EFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EFE0u;
            // 0x18efe4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EFF0u;
            goto label_18eff0;
        }
    }
    ctx->pc = 0x18EFE8u;
label_18efe8:
    // 0x18efe8: 0x10000005  b           . + 4 + (0x5 << 2)
label_18efec:
    if (ctx->pc == 0x18EFECu) {
        ctx->pc = 0x18EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFE8u;
        // 0x18efec: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFF0u;
        goto label_18eff0;
    }
    ctx->pc = 0x18EFE8u;
    {
        const bool branch_taken_0x18efe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFE8u;
        // 0x18efec: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efe8) {
            ctx->pc = 0x18F000u;
            goto label_18f000;
        }
    }
    ctx->pc = 0x18EFF0u;
label_18eff0:
    // 0x18eff0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18eff4:
    // 0x18eff4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_18eff8:
    if (ctx->pc == 0x18EFF8u) {
        ctx->pc = 0x18EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFF4u;
        // 0x18eff8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFFCu;
        goto label_18effc;
    }
    ctx->pc = 0x18EFF4u;
    {
        const bool branch_taken_0x18eff4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x18eff4) {
            ctx->pc = 0x18EFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EFF4u;
            // 0x18eff8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F000u;
            goto label_18f000;
        }
    }
    ctx->pc = 0x18EFFCu;
label_18effc:
    // 0x18effc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x18effcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_18f000:
    // 0x18f000: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x18f000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_18f004:
    // 0x18f004: 0x1000006c  b           . + 4 + (0x6C << 2)
label_18f008:
    if (ctx->pc == 0x18F008u) {
        ctx->pc = 0x18F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F004u;
        // 0x18f008: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F00Cu;
        goto label_18f00c;
    }
    ctx->pc = 0x18F004u;
    {
        const bool branch_taken_0x18f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F004u;
        // 0x18f008: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f004) {
            ctx->pc = 0x18F1B8u;
            goto label_18f1b8;
        }
    }
    ctx->pc = 0x18F00Cu;
label_18f00c:
    // 0x18f00c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18f010:
    // 0x18f010: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_18f014:
    if (ctx->pc == 0x18F014u) {
        ctx->pc = 0x18F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F010u;
        // 0x18f014: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F018u;
        goto label_18f018;
    }
    ctx->pc = 0x18F010u;
    {
        const bool branch_taken_0x18f010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f010) {
            ctx->pc = 0x18F014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F010u;
            // 0x18f014: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F078u;
            goto label_18f078;
        }
    }
    ctx->pc = 0x18F018u;
label_18f018:
    // 0x18f018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f01c:
    // 0x18f01c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18f020:
    // 0x18f020: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x18f020u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_18f024:
    // 0x18f024: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x18f024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_18f028:
    // 0x18f028: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x18f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f02c:
    // 0x18f02c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x18f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_18f030:
    // 0x18f030: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x18f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f034:
    // 0x18f034: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18f038:
    if (ctx->pc == 0x18F038u) {
        ctx->pc = 0x18F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F034u;
        // 0x18f038: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F03Cu;
        goto label_18f03c;
    }
    ctx->pc = 0x18F034u;
    {
        const bool branch_taken_0x18f034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f034) {
            ctx->pc = 0x18F038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F034u;
            // 0x18f038: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F03Cu;
            goto label_18f03c;
        }
    }
    ctx->pc = 0x18F03Cu;
label_18f03c:
    // 0x18f03c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x18f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_18f040:
    // 0x18f040: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x18f040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_18f044:
    // 0x18f044: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x18f044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_18f048:
    // 0x18f048: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_18f04c:
    if (ctx->pc == 0x18F04Cu) {
        ctx->pc = 0x18F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F048u;
        // 0x18f04c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F050u;
        goto label_18f050;
    }
    ctx->pc = 0x18F048u;
    {
        const bool branch_taken_0x18f048 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x18f048) {
            ctx->pc = 0x18F04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F048u;
            // 0x18f04c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F058u;
            goto label_18f058;
        }
    }
    ctx->pc = 0x18F050u;
label_18f050:
    // 0x18f050: 0x10000005  b           . + 4 + (0x5 << 2)
label_18f054:
    if (ctx->pc == 0x18F054u) {
        ctx->pc = 0x18F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F050u;
        // 0x18f054: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F058u;
        goto label_18f058;
    }
    ctx->pc = 0x18F050u;
    {
        const bool branch_taken_0x18f050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F050u;
        // 0x18f054: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f050) {
            ctx->pc = 0x18F068u;
            goto label_18f068;
        }
    }
    ctx->pc = 0x18F058u;
label_18f058:
    // 0x18f058: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18f05c:
    // 0x18f05c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_18f060:
    if (ctx->pc == 0x18F060u) {
        ctx->pc = 0x18F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F05Cu;
        // 0x18f060: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F064u;
        goto label_18f064;
    }
    ctx->pc = 0x18F05Cu;
    {
        const bool branch_taken_0x18f05c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f05c) {
            ctx->pc = 0x18F060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F05Cu;
            // 0x18f060: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F068u;
            goto label_18f068;
        }
    }
    ctx->pc = 0x18F064u;
label_18f064:
    // 0x18f064: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x18f064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_18f068:
    // 0x18f068: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x18f068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_18f06c:
    // 0x18f06c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x18f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_18f070:
    // 0x18f070: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_18f074:
    // 0x18f074: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x18f074u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f078:
    // 0x18f078: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_18f07c:
    if (ctx->pc == 0x18F07Cu) {
        ctx->pc = 0x18F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F078u;
        // 0x18f07c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F080u;
        goto label_18f080;
    }
    ctx->pc = 0x18F078u;
    {
        const bool branch_taken_0x18f078 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F078u;
        // 0x18f07c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f078) {
            ctx->pc = 0x18F08Cu;
            goto label_18f08c;
        }
    }
    ctx->pc = 0x18F080u;
label_18f080:
    // 0x18f080: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x18f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_18f084:
    // 0x18f084: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_18f088:
    if (ctx->pc == 0x18F088u) {
        ctx->pc = 0x18F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F084u;
        // 0x18f088: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F08Cu;
        goto label_18f08c;
    }
    ctx->pc = 0x18F084u;
    {
        const bool branch_taken_0x18f084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F084u;
        // 0x18f088: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f084) {
            ctx->pc = 0x18F0B4u;
            goto label_18f0b4;
        }
    }
    ctx->pc = 0x18F08Cu;
label_18f08c:
    // 0x18f08c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x18f08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18f090:
    // 0x18f090: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_18f094:
    if (ctx->pc == 0x18F094u) {
        ctx->pc = 0x18F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F090u;
        // 0x18f094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F098u;
        goto label_18f098;
    }
    ctx->pc = 0x18F090u;
    {
        const bool branch_taken_0x18f090 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F090u;
        // 0x18f094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f090) {
            ctx->pc = 0x18F0A4u;
            goto label_18f0a4;
        }
    }
    ctx->pc = 0x18F098u;
label_18f098:
    // 0x18f098: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x18f098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18f09c:
    // 0x18f09c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_18f0a0:
    if (ctx->pc == 0x18F0A0u) {
        ctx->pc = 0x18F0A4u;
        goto label_18f0a4;
    }
    ctx->pc = 0x18F09Cu;
    {
        const bool branch_taken_0x18f09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f09c) {
            ctx->pc = 0x18F0B4u;
            goto label_18f0b4;
        }
    }
    ctx->pc = 0x18F0A4u;
label_18f0a4:
    // 0x18f0a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_18f0a8:
    // 0x18f0a8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f0a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18f0ac:
    // 0x18f0ac: 0x10000039  b           . + 4 + (0x39 << 2)
label_18f0b0:
    if (ctx->pc == 0x18F0B0u) {
        ctx->pc = 0x18F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0ACu;
        // 0x18f0b0: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0B4u;
        goto label_18f0b4;
    }
    ctx->pc = 0x18F0ACu;
    {
        const bool branch_taken_0x18f0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0ACu;
        // 0x18f0b0: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0ac) {
            ctx->pc = 0x18F194u;
            goto label_18f194;
        }
    }
    ctx->pc = 0x18F0B4u;
label_18f0b4:
    // 0x18f0b4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_18f0b8:
    if (ctx->pc == 0x18F0B8u) {
        ctx->pc = 0x18F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0B4u;
        // 0x18f0b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0BCu;
        goto label_18f0bc;
    }
    ctx->pc = 0x18F0B4u;
    {
        const bool branch_taken_0x18f0b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0B4u;
        // 0x18f0b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0b4) {
            ctx->pc = 0x18F0C8u;
            goto label_18f0c8;
        }
    }
    ctx->pc = 0x18F0BCu;
label_18f0bc:
    // 0x18f0bc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x18f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18f0c0:
    // 0x18f0c0: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_18f0c4:
    if (ctx->pc == 0x18F0C4u) {
        ctx->pc = 0x18F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0C0u;
        // 0x18f0c4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0C8u;
        goto label_18f0c8;
    }
    ctx->pc = 0x18F0C0u;
    {
        const bool branch_taken_0x18f0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f0c0) {
            ctx->pc = 0x18F0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F0C0u;
            // 0x18f0c4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F12Cu;
            goto label_18f12c;
        }
    }
    ctx->pc = 0x18F0C8u;
label_18f0c8:
    // 0x18f0c8: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_18f0cc:
    if (ctx->pc == 0x18F0CCu) {
        ctx->pc = 0x18F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0C8u;
        // 0x18f0cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0D0u;
        goto label_18f0d0;
    }
    ctx->pc = 0x18F0C8u;
    {
        const bool branch_taken_0x18f0c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0C8u;
        // 0x18f0cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0c8) {
            ctx->pc = 0x18F0D4u;
            goto label_18f0d4;
        }
    }
    ctx->pc = 0x18F0D0u;
label_18f0d0:
    // 0x18f0d0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x18f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_18f0d4:
    // 0x18f0d4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x18f0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f0d8:
    // 0x18f0d8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_18f0dc:
    // 0x18f0dc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x18f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_18f0e0:
    // 0x18f0e0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x18f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_18f0e4:
    // 0x18f0e4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x18f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_18f0e8:
    // 0x18f0e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18f0ec:
    if (ctx->pc == 0x18F0ECu) {
        ctx->pc = 0x18F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0E8u;
        // 0x18f0ec: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0F0u;
        goto label_18f0f0;
    }
    ctx->pc = 0x18F0E8u;
    {
        const bool branch_taken_0x18f0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f0e8) {
            ctx->pc = 0x18F0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F0E8u;
            // 0x18f0ec: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F0F0u;
            goto label_18f0f0;
        }
    }
    ctx->pc = 0x18F0F0u;
label_18f0f0:
    // 0x18f0f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18f0f4:
    // 0x18f0f4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x18f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_18f0f8:
    // 0x18f0f8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x18f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_18f0fc:
    // 0x18f0fc: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_18f100:
    if (ctx->pc == 0x18F100u) {
        ctx->pc = 0x18F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0FCu;
        // 0x18f100: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F104u;
        goto label_18f104;
    }
    ctx->pc = 0x18F0FCu;
    {
        const bool branch_taken_0x18f0fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18f0fc) {
            ctx->pc = 0x18F100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F0FCu;
            // 0x18f100: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F10Cu;
            goto label_18f10c;
        }
    }
    ctx->pc = 0x18F104u;
label_18f104:
    // 0x18f104: 0x10000005  b           . + 4 + (0x5 << 2)
label_18f108:
    if (ctx->pc == 0x18F108u) {
        ctx->pc = 0x18F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F104u;
        // 0x18f108: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F10Cu;
        goto label_18f10c;
    }
    ctx->pc = 0x18F104u;
    {
        const bool branch_taken_0x18f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F104u;
        // 0x18f108: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f104) {
            ctx->pc = 0x18F11Cu;
            goto label_18f11c;
        }
    }
    ctx->pc = 0x18F10Cu;
label_18f10c:
    // 0x18f10c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18f110:
    // 0x18f110: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_18f114:
    if (ctx->pc == 0x18F114u) {
        ctx->pc = 0x18F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F110u;
        // 0x18f114: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F118u;
        goto label_18f118;
    }
    ctx->pc = 0x18F110u;
    {
        const bool branch_taken_0x18f110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f110) {
            ctx->pc = 0x18F114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F110u;
            // 0x18f114: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F11Cu;
            goto label_18f11c;
        }
    }
    ctx->pc = 0x18F118u;
label_18f118:
    // 0x18f118: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x18f118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_18f11c:
    // 0x18f11c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x18f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_18f120:
    // 0x18f120: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x18f120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_18f124:
    // 0x18f124: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x18f124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_18f128:
    // 0x18f128: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x18f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_18f12c:
    // 0x18f12c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f130:
    // 0x18f130: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18f130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18f134:
    // 0x18f134: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x18f134u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_18f138:
    // 0x18f138: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x18f138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18f13c:
    // 0x18f13c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18f140:
    if (ctx->pc == 0x18F140u) {
        ctx->pc = 0x18F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F13Cu;
        // 0x18f140: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F144u;
        goto label_18f144;
    }
    ctx->pc = 0x18F13Cu;
    {
        const bool branch_taken_0x18f13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f13c) {
            ctx->pc = 0x18F140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F13Cu;
            // 0x18f140: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F144u;
            goto label_18f144;
        }
    }
    ctx->pc = 0x18F144u;
label_18f144:
    // 0x18f144: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x18f144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_18f148:
    // 0x18f148: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x18f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f14c:
    // 0x18f14c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x18f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_18f150:
    // 0x18f150: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x18f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f154:
    // 0x18f154: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18f158:
    if (ctx->pc == 0x18F158u) {
        ctx->pc = 0x18F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F154u;
        // 0x18f158: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F15Cu;
        goto label_18f15c;
    }
    ctx->pc = 0x18F154u;
    {
        const bool branch_taken_0x18f154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f154) {
            ctx->pc = 0x18F158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F154u;
            // 0x18f158: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F15Cu;
            goto label_18f15c;
        }
    }
    ctx->pc = 0x18F15Cu;
label_18f15c:
    // 0x18f15c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x18f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_18f160:
    // 0x18f160: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x18f160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_18f164:
    // 0x18f164: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x18f164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_18f168:
    // 0x18f168: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_18f16c:
    if (ctx->pc == 0x18F16Cu) {
        ctx->pc = 0x18F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F168u;
        // 0x18f16c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F170u;
        goto label_18f170;
    }
    ctx->pc = 0x18F168u;
    {
        const bool branch_taken_0x18f168 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x18f168) {
            ctx->pc = 0x18F16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F168u;
            // 0x18f16c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F178u;
            goto label_18f178;
        }
    }
    ctx->pc = 0x18F170u;
label_18f170:
    // 0x18f170: 0x10000005  b           . + 4 + (0x5 << 2)
label_18f174:
    if (ctx->pc == 0x18F174u) {
        ctx->pc = 0x18F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F170u;
        // 0x18f174: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F178u;
        goto label_18f178;
    }
    ctx->pc = 0x18F170u;
    {
        const bool branch_taken_0x18f170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F170u;
        // 0x18f174: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f170) {
            ctx->pc = 0x18F188u;
            goto label_18f188;
        }
    }
    ctx->pc = 0x18F178u;
label_18f178:
    // 0x18f178: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18f17c:
    // 0x18f17c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_18f180:
    if (ctx->pc == 0x18F180u) {
        ctx->pc = 0x18F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F17Cu;
        // 0x18f180: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F184u;
        goto label_18f184;
    }
    ctx->pc = 0x18F17Cu;
    {
        const bool branch_taken_0x18f17c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f17c) {
            ctx->pc = 0x18F180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F17Cu;
            // 0x18f180: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F188u;
            goto label_18f188;
        }
    }
    ctx->pc = 0x18F184u;
label_18f184:
    // 0x18f184: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x18f184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_18f188:
    // 0x18f188: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x18f188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_18f18c:
    // 0x18f18c: 0x1000000a  b           . + 4 + (0xA << 2)
label_18f190:
    if (ctx->pc == 0x18F190u) {
        ctx->pc = 0x18F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F18Cu;
        // 0x18f190: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F194u;
        goto label_18f194;
    }
    ctx->pc = 0x18F18Cu;
    {
        const bool branch_taken_0x18f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F18Cu;
        // 0x18f190: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f18c) {
            ctx->pc = 0x18F1B8u;
            goto label_18f1b8;
        }
    }
    ctx->pc = 0x18F194u;
label_18f194:
    // 0x18f194: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x18f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_18f198:
    // 0x18f198: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
label_18f19c:
    if (ctx->pc == 0x18F19Cu) {
        ctx->pc = 0x18F1A0u;
        goto label_18f1a0;
    }
    ctx->pc = 0x18F198u;
    {
        const bool branch_taken_0x18f198 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f198) {
            ctx->pc = 0x18F1B8u;
            goto label_18f1b8;
        }
    }
    ctx->pc = 0x18F1A0u;
label_18f1a0:
    // 0x18f1a0: 0x5120ff39  beql        $t1, $zero, . + 4 + (-0xC7 << 2)
label_18f1a4:
    if (ctx->pc == 0x18F1A4u) {
        ctx->pc = 0x18F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1A0u;
        // 0x18f1a4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1A8u;
        goto label_18f1a8;
    }
    ctx->pc = 0x18F1A0u;
    {
        const bool branch_taken_0x18f1a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1a0) {
            ctx->pc = 0x18F1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F1A0u;
            // 0x18f1a4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ee88;
        }
    }
    ctx->pc = 0x18F1A8u;
label_18f1a8:
    // 0x18f1a8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x18f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_18f1ac:
    // 0x18f1ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f1b0:
    // 0x18f1b0: 0x5062ff35  beql        $v1, $v0, . + 4 + (-0xCB << 2)
label_18f1b4:
    if (ctx->pc == 0x18F1B4u) {
        ctx->pc = 0x18F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1B0u;
        // 0x18f1b4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1B8u;
        goto label_18f1b8;
    }
    ctx->pc = 0x18F1B0u;
    {
        const bool branch_taken_0x18f1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f1b0) {
            ctx->pc = 0x18F1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F1B0u;
            // 0x18f1b4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ee88;
        }
    }
    ctx->pc = 0x18F1B8u;
label_18f1b8:
    // 0x18f1b8: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_18f1bc:
    if (ctx->pc == 0x18F1BCu) {
        ctx->pc = 0x18F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1B8u;
        // 0x18f1bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1C0u;
        goto label_18f1c0;
    }
    ctx->pc = 0x18F1B8u;
    {
        const bool branch_taken_0x18f1b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1B8u;
        // 0x18f1bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1b8) {
            ctx->pc = 0x18F1C4u;
            goto label_18f1c4;
        }
    }
    ctx->pc = 0x18F1C0u;
label_18f1c0:
    // 0x18f1c0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x18f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_18f1c4:
    // 0x18f1c4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_18f1c8:
    if (ctx->pc == 0x18F1C8u) {
        ctx->pc = 0x18F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1C4u;
        // 0x18f1c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1CCu;
        goto label_18f1cc;
    }
    ctx->pc = 0x18F1C4u;
    {
        const bool branch_taken_0x18f1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1C4u;
        // 0x18f1c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1c4) {
            ctx->pc = 0x18F1F0u;
            goto label_18f1f0;
        }
    }
    ctx->pc = 0x18F1CCu;
label_18f1cc:
    // 0x18f1cc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x18f1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_18f1d0:
    // 0x18f1d0: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x18f1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_18f1d4:
    // 0x18f1d4: 0x24c63030  addiu       $a2, $a2, 0x3030
    ctx->pc = 0x18f1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12336));
label_18f1d8:
    // 0x18f1d8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x18f1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_18f1dc:
    // 0x18f1dc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x18f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_18f1e0:
    // 0x18f1e0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x18f1e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_18f1e4:
    // 0x18f1e4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x18f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_18f1e8:
    // 0x18f1e8: 0x60f809  jalr        $v1
label_18f1ec:
    if (ctx->pc == 0x18F1ECu) {
        ctx->pc = 0x18F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1E8u;
        // 0x18f1ec: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1F0u;
        goto label_18f1f0;
    }
    ctx->pc = 0x18F1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18F1F0u);
        ctx->pc = 0x18F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1E8u;
        // 0x18f1ec: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F1E8u, 0x18F1F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F1F0u;
label_18f1f0:
    // 0x18f1f0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x18f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_18f1f4:
    // 0x18f1f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f1f8:
    // 0x18f1f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f1fc:
    // 0x18f1fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18f200:
    // 0x18f200: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x18f200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_18f204:
    // 0x18f204: 0xc05e2f2  jal         func_178BC8
label_18f208:
    if (ctx->pc == 0x18F208u) {
        ctx->pc = 0x18F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F204u;
        // 0x18f208: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F20Cu;
        goto label_18f20c;
    }
    ctx->pc = 0x18F204u;
    SET_GPR_U32(ctx, 31, 0x18F20Cu);
    ctx->pc = 0x18F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F204u;
    // 0x18f208: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178BC8u, 0x18F204u, 0x18F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F20Cu;
label_18f20c:
    // 0x18f20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f210:
    // 0x18f210: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x18f210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18f214:
    // 0x18f214: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x18f214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18f218:
    // 0x18f218: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x18f218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18f21c:
    // 0x18f21c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x18f21cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18f220:
    // 0x18f220: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18f220u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18f224:
    // 0x18f224: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18f224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18f228:
    // 0x18f228: 0x3e00008  jr          $ra
label_18f22c:
    if (ctx->pc == 0x18F22Cu) {
        ctx->pc = 0x18F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F228u;
        // 0x18f22c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F230u;
        goto label_fallthrough_0x18f228;
    }
    ctx->pc = 0x18F228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F228u;
        // 0x18f22c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f228:
    ctx->pc = 0x18F230u;
}
