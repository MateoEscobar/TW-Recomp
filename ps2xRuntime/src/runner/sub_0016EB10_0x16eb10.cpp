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

// Function: sub_0016EB10
// Address: 0x16eb10 - 0x16f128
void sub_0016EB10_0x16eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EB10_0x16eb10");
#endif

    switch (ctx->pc) {
        case 0x16eb10u: goto label_16eb10;
        case 0x16eb14u: goto label_16eb14;
        case 0x16eb18u: goto label_16eb18;
        case 0x16eb1cu: goto label_16eb1c;
        case 0x16eb20u: goto label_16eb20;
        case 0x16eb24u: goto label_16eb24;
        case 0x16eb28u: goto label_16eb28;
        case 0x16eb2cu: goto label_16eb2c;
        case 0x16eb30u: goto label_16eb30;
        case 0x16eb34u: goto label_16eb34;
        case 0x16eb38u: goto label_16eb38;
        case 0x16eb3cu: goto label_16eb3c;
        case 0x16eb40u: goto label_16eb40;
        case 0x16eb44u: goto label_16eb44;
        case 0x16eb48u: goto label_16eb48;
        case 0x16eb4cu: goto label_16eb4c;
        case 0x16eb50u: goto label_16eb50;
        case 0x16eb54u: goto label_16eb54;
        case 0x16eb58u: goto label_16eb58;
        case 0x16eb5cu: goto label_16eb5c;
        case 0x16eb60u: goto label_16eb60;
        case 0x16eb64u: goto label_16eb64;
        case 0x16eb68u: goto label_16eb68;
        case 0x16eb6cu: goto label_16eb6c;
        case 0x16eb70u: goto label_16eb70;
        case 0x16eb74u: goto label_16eb74;
        case 0x16eb78u: goto label_16eb78;
        case 0x16eb7cu: goto label_16eb7c;
        case 0x16eb80u: goto label_16eb80;
        case 0x16eb84u: goto label_16eb84;
        case 0x16eb88u: goto label_16eb88;
        case 0x16eb8cu: goto label_16eb8c;
        case 0x16eb90u: goto label_16eb90;
        case 0x16eb94u: goto label_16eb94;
        case 0x16eb98u: goto label_16eb98;
        case 0x16eb9cu: goto label_16eb9c;
        case 0x16eba0u: goto label_16eba0;
        case 0x16eba4u: goto label_16eba4;
        case 0x16eba8u: goto label_16eba8;
        case 0x16ebacu: goto label_16ebac;
        case 0x16ebb0u: goto label_16ebb0;
        case 0x16ebb4u: goto label_16ebb4;
        case 0x16ebb8u: goto label_16ebb8;
        case 0x16ebbcu: goto label_16ebbc;
        case 0x16ebc0u: goto label_16ebc0;
        case 0x16ebc4u: goto label_16ebc4;
        case 0x16ebc8u: goto label_16ebc8;
        case 0x16ebccu: goto label_16ebcc;
        case 0x16ebd0u: goto label_16ebd0;
        case 0x16ebd4u: goto label_16ebd4;
        case 0x16ebd8u: goto label_16ebd8;
        case 0x16ebdcu: goto label_16ebdc;
        case 0x16ebe0u: goto label_16ebe0;
        case 0x16ebe4u: goto label_16ebe4;
        case 0x16ebe8u: goto label_16ebe8;
        case 0x16ebecu: goto label_16ebec;
        case 0x16ebf0u: goto label_16ebf0;
        case 0x16ebf4u: goto label_16ebf4;
        case 0x16ebf8u: goto label_16ebf8;
        case 0x16ebfcu: goto label_16ebfc;
        case 0x16ec00u: goto label_16ec00;
        case 0x16ec04u: goto label_16ec04;
        case 0x16ec08u: goto label_16ec08;
        case 0x16ec0cu: goto label_16ec0c;
        case 0x16ec10u: goto label_16ec10;
        case 0x16ec14u: goto label_16ec14;
        case 0x16ec18u: goto label_16ec18;
        case 0x16ec1cu: goto label_16ec1c;
        case 0x16ec20u: goto label_16ec20;
        case 0x16ec24u: goto label_16ec24;
        case 0x16ec28u: goto label_16ec28;
        case 0x16ec2cu: goto label_16ec2c;
        case 0x16ec30u: goto label_16ec30;
        case 0x16ec34u: goto label_16ec34;
        case 0x16ec38u: goto label_16ec38;
        case 0x16ec3cu: goto label_16ec3c;
        case 0x16ec40u: goto label_16ec40;
        case 0x16ec44u: goto label_16ec44;
        case 0x16ec48u: goto label_16ec48;
        case 0x16ec4cu: goto label_16ec4c;
        case 0x16ec50u: goto label_16ec50;
        case 0x16ec54u: goto label_16ec54;
        case 0x16ec58u: goto label_16ec58;
        case 0x16ec5cu: goto label_16ec5c;
        case 0x16ec60u: goto label_16ec60;
        case 0x16ec64u: goto label_16ec64;
        case 0x16ec68u: goto label_16ec68;
        case 0x16ec6cu: goto label_16ec6c;
        case 0x16ec70u: goto label_16ec70;
        case 0x16ec74u: goto label_16ec74;
        case 0x16ec78u: goto label_16ec78;
        case 0x16ec7cu: goto label_16ec7c;
        case 0x16ec80u: goto label_16ec80;
        case 0x16ec84u: goto label_16ec84;
        case 0x16ec88u: goto label_16ec88;
        case 0x16ec8cu: goto label_16ec8c;
        case 0x16ec90u: goto label_16ec90;
        case 0x16ec94u: goto label_16ec94;
        case 0x16ec98u: goto label_16ec98;
        case 0x16ec9cu: goto label_16ec9c;
        case 0x16eca0u: goto label_16eca0;
        case 0x16eca4u: goto label_16eca4;
        case 0x16eca8u: goto label_16eca8;
        case 0x16ecacu: goto label_16ecac;
        case 0x16ecb0u: goto label_16ecb0;
        case 0x16ecb4u: goto label_16ecb4;
        case 0x16ecb8u: goto label_16ecb8;
        case 0x16ecbcu: goto label_16ecbc;
        case 0x16ecc0u: goto label_16ecc0;
        case 0x16ecc4u: goto label_16ecc4;
        case 0x16ecc8u: goto label_16ecc8;
        case 0x16ecccu: goto label_16eccc;
        case 0x16ecd0u: goto label_16ecd0;
        case 0x16ecd4u: goto label_16ecd4;
        case 0x16ecd8u: goto label_16ecd8;
        case 0x16ecdcu: goto label_16ecdc;
        case 0x16ece0u: goto label_16ece0;
        case 0x16ece4u: goto label_16ece4;
        case 0x16ece8u: goto label_16ece8;
        case 0x16ececu: goto label_16ecec;
        case 0x16ecf0u: goto label_16ecf0;
        case 0x16ecf4u: goto label_16ecf4;
        case 0x16ecf8u: goto label_16ecf8;
        case 0x16ecfcu: goto label_16ecfc;
        case 0x16ed00u: goto label_16ed00;
        case 0x16ed04u: goto label_16ed04;
        case 0x16ed08u: goto label_16ed08;
        case 0x16ed0cu: goto label_16ed0c;
        case 0x16ed10u: goto label_16ed10;
        case 0x16ed14u: goto label_16ed14;
        case 0x16ed18u: goto label_16ed18;
        case 0x16ed1cu: goto label_16ed1c;
        case 0x16ed20u: goto label_16ed20;
        case 0x16ed24u: goto label_16ed24;
        case 0x16ed28u: goto label_16ed28;
        case 0x16ed2cu: goto label_16ed2c;
        case 0x16ed30u: goto label_16ed30;
        case 0x16ed34u: goto label_16ed34;
        case 0x16ed38u: goto label_16ed38;
        case 0x16ed3cu: goto label_16ed3c;
        case 0x16ed40u: goto label_16ed40;
        case 0x16ed44u: goto label_16ed44;
        case 0x16ed48u: goto label_16ed48;
        case 0x16ed4cu: goto label_16ed4c;
        case 0x16ed50u: goto label_16ed50;
        case 0x16ed54u: goto label_16ed54;
        case 0x16ed58u: goto label_16ed58;
        case 0x16ed5cu: goto label_16ed5c;
        case 0x16ed60u: goto label_16ed60;
        case 0x16ed64u: goto label_16ed64;
        case 0x16ed68u: goto label_16ed68;
        case 0x16ed6cu: goto label_16ed6c;
        case 0x16ed70u: goto label_16ed70;
        case 0x16ed74u: goto label_16ed74;
        case 0x16ed78u: goto label_16ed78;
        case 0x16ed7cu: goto label_16ed7c;
        case 0x16ed80u: goto label_16ed80;
        case 0x16ed84u: goto label_16ed84;
        case 0x16ed88u: goto label_16ed88;
        case 0x16ed8cu: goto label_16ed8c;
        case 0x16ed90u: goto label_16ed90;
        case 0x16ed94u: goto label_16ed94;
        case 0x16ed98u: goto label_16ed98;
        case 0x16ed9cu: goto label_16ed9c;
        case 0x16eda0u: goto label_16eda0;
        case 0x16eda4u: goto label_16eda4;
        case 0x16eda8u: goto label_16eda8;
        case 0x16edacu: goto label_16edac;
        case 0x16edb0u: goto label_16edb0;
        case 0x16edb4u: goto label_16edb4;
        case 0x16edb8u: goto label_16edb8;
        case 0x16edbcu: goto label_16edbc;
        case 0x16edc0u: goto label_16edc0;
        case 0x16edc4u: goto label_16edc4;
        case 0x16edc8u: goto label_16edc8;
        case 0x16edccu: goto label_16edcc;
        case 0x16edd0u: goto label_16edd0;
        case 0x16edd4u: goto label_16edd4;
        case 0x16edd8u: goto label_16edd8;
        case 0x16eddcu: goto label_16eddc;
        case 0x16ede0u: goto label_16ede0;
        case 0x16ede4u: goto label_16ede4;
        case 0x16ede8u: goto label_16ede8;
        case 0x16edecu: goto label_16edec;
        case 0x16edf0u: goto label_16edf0;
        case 0x16edf4u: goto label_16edf4;
        case 0x16edf8u: goto label_16edf8;
        case 0x16edfcu: goto label_16edfc;
        case 0x16ee00u: goto label_16ee00;
        case 0x16ee04u: goto label_16ee04;
        case 0x16ee08u: goto label_16ee08;
        case 0x16ee0cu: goto label_16ee0c;
        case 0x16ee10u: goto label_16ee10;
        case 0x16ee14u: goto label_16ee14;
        case 0x16ee18u: goto label_16ee18;
        case 0x16ee1cu: goto label_16ee1c;
        case 0x16ee20u: goto label_16ee20;
        case 0x16ee24u: goto label_16ee24;
        case 0x16ee28u: goto label_16ee28;
        case 0x16ee2cu: goto label_16ee2c;
        case 0x16ee30u: goto label_16ee30;
        case 0x16ee34u: goto label_16ee34;
        case 0x16ee38u: goto label_16ee38;
        case 0x16ee3cu: goto label_16ee3c;
        case 0x16ee40u: goto label_16ee40;
        case 0x16ee44u: goto label_16ee44;
        case 0x16ee48u: goto label_16ee48;
        case 0x16ee4cu: goto label_16ee4c;
        case 0x16ee50u: goto label_16ee50;
        case 0x16ee54u: goto label_16ee54;
        case 0x16ee58u: goto label_16ee58;
        case 0x16ee5cu: goto label_16ee5c;
        case 0x16ee60u: goto label_16ee60;
        case 0x16ee64u: goto label_16ee64;
        case 0x16ee68u: goto label_16ee68;
        case 0x16ee6cu: goto label_16ee6c;
        case 0x16ee70u: goto label_16ee70;
        case 0x16ee74u: goto label_16ee74;
        case 0x16ee78u: goto label_16ee78;
        case 0x16ee7cu: goto label_16ee7c;
        case 0x16ee80u: goto label_16ee80;
        case 0x16ee84u: goto label_16ee84;
        case 0x16ee88u: goto label_16ee88;
        case 0x16ee8cu: goto label_16ee8c;
        case 0x16ee90u: goto label_16ee90;
        case 0x16ee94u: goto label_16ee94;
        case 0x16ee98u: goto label_16ee98;
        case 0x16ee9cu: goto label_16ee9c;
        case 0x16eea0u: goto label_16eea0;
        case 0x16eea4u: goto label_16eea4;
        case 0x16eea8u: goto label_16eea8;
        case 0x16eeacu: goto label_16eeac;
        case 0x16eeb0u: goto label_16eeb0;
        case 0x16eeb4u: goto label_16eeb4;
        case 0x16eeb8u: goto label_16eeb8;
        case 0x16eebcu: goto label_16eebc;
        case 0x16eec0u: goto label_16eec0;
        case 0x16eec4u: goto label_16eec4;
        case 0x16eec8u: goto label_16eec8;
        case 0x16eeccu: goto label_16eecc;
        case 0x16eed0u: goto label_16eed0;
        case 0x16eed4u: goto label_16eed4;
        case 0x16eed8u: goto label_16eed8;
        case 0x16eedcu: goto label_16eedc;
        case 0x16eee0u: goto label_16eee0;
        case 0x16eee4u: goto label_16eee4;
        case 0x16eee8u: goto label_16eee8;
        case 0x16eeecu: goto label_16eeec;
        case 0x16eef0u: goto label_16eef0;
        case 0x16eef4u: goto label_16eef4;
        case 0x16eef8u: goto label_16eef8;
        case 0x16eefcu: goto label_16eefc;
        case 0x16ef00u: goto label_16ef00;
        case 0x16ef04u: goto label_16ef04;
        case 0x16ef08u: goto label_16ef08;
        case 0x16ef0cu: goto label_16ef0c;
        case 0x16ef10u: goto label_16ef10;
        case 0x16ef14u: goto label_16ef14;
        case 0x16ef18u: goto label_16ef18;
        case 0x16ef1cu: goto label_16ef1c;
        case 0x16ef20u: goto label_16ef20;
        case 0x16ef24u: goto label_16ef24;
        case 0x16ef28u: goto label_16ef28;
        case 0x16ef2cu: goto label_16ef2c;
        case 0x16ef30u: goto label_16ef30;
        case 0x16ef34u: goto label_16ef34;
        case 0x16ef38u: goto label_16ef38;
        case 0x16ef3cu: goto label_16ef3c;
        case 0x16ef40u: goto label_16ef40;
        case 0x16ef44u: goto label_16ef44;
        case 0x16ef48u: goto label_16ef48;
        case 0x16ef4cu: goto label_16ef4c;
        case 0x16ef50u: goto label_16ef50;
        case 0x16ef54u: goto label_16ef54;
        case 0x16ef58u: goto label_16ef58;
        case 0x16ef5cu: goto label_16ef5c;
        case 0x16ef60u: goto label_16ef60;
        case 0x16ef64u: goto label_16ef64;
        case 0x16ef68u: goto label_16ef68;
        case 0x16ef6cu: goto label_16ef6c;
        case 0x16ef70u: goto label_16ef70;
        case 0x16ef74u: goto label_16ef74;
        case 0x16ef78u: goto label_16ef78;
        case 0x16ef7cu: goto label_16ef7c;
        case 0x16ef80u: goto label_16ef80;
        case 0x16ef84u: goto label_16ef84;
        case 0x16ef88u: goto label_16ef88;
        case 0x16ef8cu: goto label_16ef8c;
        case 0x16ef90u: goto label_16ef90;
        case 0x16ef94u: goto label_16ef94;
        case 0x16ef98u: goto label_16ef98;
        case 0x16ef9cu: goto label_16ef9c;
        case 0x16efa0u: goto label_16efa0;
        case 0x16efa4u: goto label_16efa4;
        case 0x16efa8u: goto label_16efa8;
        case 0x16efacu: goto label_16efac;
        case 0x16efb0u: goto label_16efb0;
        case 0x16efb4u: goto label_16efb4;
        case 0x16efb8u: goto label_16efb8;
        case 0x16efbcu: goto label_16efbc;
        case 0x16efc0u: goto label_16efc0;
        case 0x16efc4u: goto label_16efc4;
        case 0x16efc8u: goto label_16efc8;
        case 0x16efccu: goto label_16efcc;
        case 0x16efd0u: goto label_16efd0;
        case 0x16efd4u: goto label_16efd4;
        case 0x16efd8u: goto label_16efd8;
        case 0x16efdcu: goto label_16efdc;
        case 0x16efe0u: goto label_16efe0;
        case 0x16efe4u: goto label_16efe4;
        case 0x16efe8u: goto label_16efe8;
        case 0x16efecu: goto label_16efec;
        case 0x16eff0u: goto label_16eff0;
        case 0x16eff4u: goto label_16eff4;
        case 0x16eff8u: goto label_16eff8;
        case 0x16effcu: goto label_16effc;
        case 0x16f000u: goto label_16f000;
        case 0x16f004u: goto label_16f004;
        case 0x16f008u: goto label_16f008;
        case 0x16f00cu: goto label_16f00c;
        case 0x16f010u: goto label_16f010;
        case 0x16f014u: goto label_16f014;
        case 0x16f018u: goto label_16f018;
        case 0x16f01cu: goto label_16f01c;
        case 0x16f020u: goto label_16f020;
        case 0x16f024u: goto label_16f024;
        case 0x16f028u: goto label_16f028;
        case 0x16f02cu: goto label_16f02c;
        case 0x16f030u: goto label_16f030;
        case 0x16f034u: goto label_16f034;
        case 0x16f038u: goto label_16f038;
        case 0x16f03cu: goto label_16f03c;
        case 0x16f040u: goto label_16f040;
        case 0x16f044u: goto label_16f044;
        case 0x16f048u: goto label_16f048;
        case 0x16f04cu: goto label_16f04c;
        case 0x16f050u: goto label_16f050;
        case 0x16f054u: goto label_16f054;
        case 0x16f058u: goto label_16f058;
        case 0x16f05cu: goto label_16f05c;
        case 0x16f060u: goto label_16f060;
        case 0x16f064u: goto label_16f064;
        case 0x16f068u: goto label_16f068;
        case 0x16f06cu: goto label_16f06c;
        case 0x16f070u: goto label_16f070;
        case 0x16f074u: goto label_16f074;
        case 0x16f078u: goto label_16f078;
        case 0x16f07cu: goto label_16f07c;
        case 0x16f080u: goto label_16f080;
        case 0x16f084u: goto label_16f084;
        case 0x16f088u: goto label_16f088;
        case 0x16f08cu: goto label_16f08c;
        case 0x16f090u: goto label_16f090;
        case 0x16f094u: goto label_16f094;
        case 0x16f098u: goto label_16f098;
        case 0x16f09cu: goto label_16f09c;
        case 0x16f0a0u: goto label_16f0a0;
        case 0x16f0a4u: goto label_16f0a4;
        case 0x16f0a8u: goto label_16f0a8;
        case 0x16f0acu: goto label_16f0ac;
        case 0x16f0b0u: goto label_16f0b0;
        case 0x16f0b4u: goto label_16f0b4;
        case 0x16f0b8u: goto label_16f0b8;
        case 0x16f0bcu: goto label_16f0bc;
        case 0x16f0c0u: goto label_16f0c0;
        case 0x16f0c4u: goto label_16f0c4;
        case 0x16f0c8u: goto label_16f0c8;
        case 0x16f0ccu: goto label_16f0cc;
        case 0x16f0d0u: goto label_16f0d0;
        case 0x16f0d4u: goto label_16f0d4;
        case 0x16f0d8u: goto label_16f0d8;
        case 0x16f0dcu: goto label_16f0dc;
        case 0x16f0e0u: goto label_16f0e0;
        case 0x16f0e4u: goto label_16f0e4;
        case 0x16f0e8u: goto label_16f0e8;
        case 0x16f0ecu: goto label_16f0ec;
        case 0x16f0f0u: goto label_16f0f0;
        case 0x16f0f4u: goto label_16f0f4;
        case 0x16f0f8u: goto label_16f0f8;
        case 0x16f0fcu: goto label_16f0fc;
        case 0x16f100u: goto label_16f100;
        case 0x16f104u: goto label_16f104;
        case 0x16f108u: goto label_16f108;
        case 0x16f10cu: goto label_16f10c;
        case 0x16f110u: goto label_16f110;
        case 0x16f114u: goto label_16f114;
        case 0x16f118u: goto label_16f118;
        case 0x16f11cu: goto label_16f11c;
        case 0x16f120u: goto label_16f120;
        case 0x16f124u: goto label_16f124;
        default: break;
    }

    ctx->pc = 0x16eb10u;

label_16eb10:
    // 0x16eb10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_16eb14:
    // 0x16eb14: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16eb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_16eb18:
    // 0x16eb18: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16eb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16eb1c:
    // 0x16eb1c: 0x24930040  addiu       $s3, $a0, 0x40
    ctx->pc = 0x16eb1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_16eb20:
    // 0x16eb20: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x16eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_16eb24:
    // 0x16eb24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16eb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16eb28:
    // 0x16eb28: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16eb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_16eb2c:
    // 0x16eb2c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16eb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_16eb30:
    // 0x16eb30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x16eb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_16eb34:
    // 0x16eb34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16eb38:
    // 0x16eb38: 0xc137916  jal         func_4DE458
label_16eb3c:
    if (ctx->pc == 0x16EB3Cu) {
        ctx->pc = 0x16EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB38u;
        // 0x16eb3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB40u;
        goto label_16eb40;
    }
    ctx->pc = 0x16EB38u;
    SET_GPR_U32(ctx, 31, 0x16EB40u);
    ctx->pc = 0x16EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB38u;
    // 0x16eb3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE458u, 0x16EB38u, 0x16EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB40u;
label_16eb40:
    // 0x16eb40: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x16eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_16eb44:
    // 0x16eb44: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16eb48:
    // 0x16eb48: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_16eb4c:
    if (ctx->pc == 0x16EB4Cu) {
        ctx->pc = 0x16EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB48u;
        // 0x16eb4c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB50u;
        goto label_16eb50;
    }
    ctx->pc = 0x16EB48u;
    {
        const bool branch_taken_0x16eb48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB48u;
        // 0x16eb4c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb48) {
            ctx->pc = 0x16EB60u;
            goto label_16eb60;
        }
    }
    ctx->pc = 0x16EB50u;
label_16eb50:
    // 0x16eb50: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x16eb50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_16eb54:
    // 0x16eb54: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x16eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16eb58:
    // 0x16eb58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16eb5c:
    if (ctx->pc == 0x16EB5Cu) {
        ctx->pc = 0x16EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB58u;
        // 0x16eb5c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB60u;
        goto label_16eb60;
    }
    ctx->pc = 0x16EB58u;
    {
        const bool branch_taken_0x16eb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB58u;
        // 0x16eb5c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb58) {
            ctx->pc = 0x16EB68u;
            goto label_16eb68;
        }
    }
    ctx->pc = 0x16EB60u;
label_16eb60:
    // 0x16eb60: 0x10000169  b           . + 4 + (0x169 << 2)
label_16eb64:
    if (ctx->pc == 0x16EB64u) {
        ctx->pc = 0x16EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB60u;
        // 0x16eb64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB68u;
        goto label_16eb68;
    }
    ctx->pc = 0x16EB60u;
    {
        const bool branch_taken_0x16eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB60u;
        // 0x16eb64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb60) {
            ctx->pc = 0x16F108u;
            goto label_16f108;
        }
    }
    ctx->pc = 0x16EB68u;
label_16eb68:
    // 0x16eb68: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x16eb68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_16eb6c:
    // 0x16eb6c: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x16eb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_16eb70:
    // 0x16eb70: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x16eb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_16eb74:
    // 0x16eb74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16eb78:
    // 0x16eb78: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x16eb78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_16eb7c:
    // 0x16eb7c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x16eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_16eb80:
    // 0x16eb80: 0x60f809  jalr        $v1
label_16eb84:
    if (ctx->pc == 0x16EB84u) {
        ctx->pc = 0x16EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB80u;
        // 0x16eb84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB88u;
        goto label_16eb88;
    }
    ctx->pc = 0x16EB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16EB88u);
        ctx->pc = 0x16EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB80u;
        // 0x16eb84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EB80u, 0x16EB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EB88u;
label_16eb88:
    // 0x16eb88: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x16eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16eb8c:
    // 0x16eb8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16eb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16eb90:
    // 0x16eb90: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x16eb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
label_16eb94:
    // 0x16eb94: 0xc137930  jal         func_4DE4C0
label_16eb98:
    if (ctx->pc == 0x16EB98u) {
        ctx->pc = 0x16EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB94u;
        // 0x16eb98: 0x24a51900  addiu       $a1, $a1, 0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB9Cu;
        goto label_16eb9c;
    }
    ctx->pc = 0x16EB94u;
    SET_GPR_U32(ctx, 31, 0x16EB9Cu);
    ctx->pc = 0x16EB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB94u;
    // 0x16eb98: 0x24a51900  addiu       $a1, $a1, 0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE4C0u, 0x16EB94u, 0x16EB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB9Cu;
label_16eb9c:
    // 0x16eb9c: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x16eb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_16eba0:
    // 0x16eba0: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x16eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_16eba4:
    // 0x16eba4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16eba8:
    // 0x16eba8: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x16eba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_16ebac:
    // 0x16ebac: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x16ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16ebb0:
    // 0x16ebb0: 0x60f809  jalr        $v1
label_16ebb4:
    if (ctx->pc == 0x16EBB4u) {
        ctx->pc = 0x16EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBB0u;
        // 0x16ebb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EBB8u;
        goto label_16ebb8;
    }
    ctx->pc = 0x16EBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16EBB8u);
        ctx->pc = 0x16EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBB0u;
        // 0x16ebb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EBB0u, 0x16EBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EBB8u;
label_16ebb8:
    // 0x16ebb8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16ebb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16ebbc:
    // 0x16ebbc: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x16ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_16ebc0:
    // 0x16ebc0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16ebc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16ebc4:
    // 0x16ebc4: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x16ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_16ebc8:
    // 0x16ebc8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x16ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_16ebcc:
    // 0x16ebcc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x16ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16ebd0:
    // 0x16ebd0: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x16ebd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_16ebd4:
    // 0x16ebd4: 0x244a0004  addiu       $t2, $v0, 0x4
    ctx->pc = 0x16ebd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_16ebd8:
    // 0x16ebd8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_16ebdc:
    if (ctx->pc == 0x16EBDCu) {
        ctx->pc = 0x16EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBD8u;
        // 0x16ebdc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EBE0u;
        goto label_16ebe0;
    }
    ctx->pc = 0x16EBD8u;
    {
        const bool branch_taken_0x16ebd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBD8u;
        // 0x16ebdc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebd8) {
            ctx->pc = 0x16EC20u;
            goto label_16ec20;
        }
    }
    ctx->pc = 0x16EBE0u;
label_16ebe0:
    // 0x16ebe0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x16ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_16ebe4:
    // 0x16ebe4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_16ebe8:
    if (ctx->pc == 0x16EBE8u) {
        ctx->pc = 0x16EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBE4u;
        // 0x16ebe8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EBECu;
        goto label_16ebec;
    }
    ctx->pc = 0x16EBE4u;
    {
        const bool branch_taken_0x16ebe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ebe4) {
            ctx->pc = 0x16EBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EBE4u;
            // 0x16ebe8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EBF4u;
            goto label_16ebf4;
        }
    }
    ctx->pc = 0x16EBECu;
label_16ebec:
    // 0x16ebec: 0x1000000d  b           . + 4 + (0xD << 2)
label_16ebf0:
    if (ctx->pc == 0x16EBF0u) {
        ctx->pc = 0x16EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBECu;
        // 0x16ebf0: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EBF4u;
        goto label_16ebf4;
    }
    ctx->pc = 0x16EBECu;
    {
        const bool branch_taken_0x16ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBECu;
        // 0x16ebf0: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebec) {
            ctx->pc = 0x16EC24u;
            goto label_16ec24;
        }
    }
    ctx->pc = 0x16EBF4u;
label_16ebf4:
    // 0x16ebf4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x16ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16ebf8:
    // 0x16ebf8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_16ebfc:
    if (ctx->pc == 0x16EBFCu) {
        ctx->pc = 0x16EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBF8u;
        // 0x16ebfc: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EC00u;
        goto label_16ec00;
    }
    ctx->pc = 0x16EBF8u;
    {
        const bool branch_taken_0x16ebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ebf8) {
            ctx->pc = 0x16EBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EBF8u;
            // 0x16ebfc: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EC24u;
            goto label_16ec24;
        }
    }
    ctx->pc = 0x16EC00u;
label_16ec00:
    // 0x16ec00: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x16ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16ec04:
    // 0x16ec04: 0x0  nop
    ctx->pc = 0x16ec04u;
    // NOP
label_16ec08:
    // 0x16ec08: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x16ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16ec0c:
    // 0x16ec0c: 0x0  nop
    ctx->pc = 0x16ec0cu;
    // NOP
label_16ec10:
    // 0x16ec10: 0x0  nop
    ctx->pc = 0x16ec10u;
    // NOP
label_16ec14:
    // 0x16ec14: 0x0  nop
    ctx->pc = 0x16ec14u;
    // NOP
label_16ec18:
    // 0x16ec18: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_16ec1c:
    if (ctx->pc == 0x16EC1Cu) {
        ctx->pc = 0x16EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC18u;
        // 0x16ec1c: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EC20u;
        goto label_16ec20;
    }
    ctx->pc = 0x16EC18u;
    {
        const bool branch_taken_0x16ec18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ec18) {
            ctx->pc = 0x16EC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EC18u;
            // 0x16ec1c: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ec08;
        }
    }
    ctx->pc = 0x16EC20u;
label_16ec20:
    // 0x16ec20: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x16ec20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_16ec24:
    // 0x16ec24: 0x10a60022  beq         $a1, $a2, . + 4 + (0x22 << 2)
label_16ec28:
    if (ctx->pc == 0x16EC28u) {
        ctx->pc = 0x16EC2Cu;
        goto label_16ec2c;
    }
    ctx->pc = 0x16EC24u;
    {
        const bool branch_taken_0x16ec24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x16ec24) {
            ctx->pc = 0x16ECB0u;
            goto label_16ecb0;
        }
    }
    ctx->pc = 0x16EC2Cu;
label_16ec2c:
    // 0x16ec2c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16ec30:
    // 0x16ec30: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x16ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_16ec34:
    // 0x16ec34: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x16ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16ec38:
    // 0x16ec38: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x16ec38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_16ec3c:
    // 0x16ec3c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16ec40:
    // 0x16ec40: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_16ec44:
    if (ctx->pc == 0x16EC44u) {
        ctx->pc = 0x16EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC40u;
        // 0x16ec44: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EC48u;
        goto label_16ec48;
    }
    ctx->pc = 0x16EC40u;
    {
        const bool branch_taken_0x16ec40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC40u;
        // 0x16ec44: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec40) {
            ctx->pc = 0x16EC6Cu;
            goto label_16ec6c;
        }
    }
    ctx->pc = 0x16EC48u;
label_16ec48:
    // 0x16ec48: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_16ec4c:
    if (ctx->pc == 0x16EC4Cu) {
        ctx->pc = 0x16EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC48u;
        // 0x16ec4c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EC50u;
        goto label_16ec50;
    }
    ctx->pc = 0x16EC48u;
    {
        const bool branch_taken_0x16ec48 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC48u;
        // 0x16ec4c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec48) {
            ctx->pc = 0x16EC54u;
            goto label_16ec54;
        }
    }
    ctx->pc = 0x16EC50u;
label_16ec50:
    // 0x16ec50: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x16ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_16ec54:
    // 0x16ec54: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x16ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_16ec58:
    // 0x16ec58: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x16ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_16ec5c:
    // 0x16ec5c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x16ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16ec60:
    // 0x16ec60: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x16ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_16ec64:
    // 0x16ec64: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16ec68:
    // 0x16ec68: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x16ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_16ec6c:
    // 0x16ec6c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x16ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16ec70:
    // 0x16ec70: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_16ec74:
    if (ctx->pc == 0x16EC74u) {
        ctx->pc = 0x16EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC70u;
        // 0x16ec74: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EC78u;
        goto label_16ec78;
    }
    ctx->pc = 0x16EC70u;
    {
        const bool branch_taken_0x16ec70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x16ec70) {
            ctx->pc = 0x16EC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EC70u;
            // 0x16ec74: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EC80u;
            goto label_16ec80;
        }
    }
    ctx->pc = 0x16EC78u;
label_16ec78:
    // 0x16ec78: 0x10000005  b           . + 4 + (0x5 << 2)
label_16ec7c:
    if (ctx->pc == 0x16EC7Cu) {
        ctx->pc = 0x16EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC78u;
        // 0x16ec7c: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EC80u;
        goto label_16ec80;
    }
    ctx->pc = 0x16EC78u;
    {
        const bool branch_taken_0x16ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC78u;
        // 0x16ec7c: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec78) {
            ctx->pc = 0x16EC90u;
            goto label_16ec90;
        }
    }
    ctx->pc = 0x16EC80u;
label_16ec80:
    // 0x16ec80: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16ec84:
    // 0x16ec84: 0x54460002  bnel        $v0, $a2, . + 4 + (0x2 << 2)
label_16ec88:
    if (ctx->pc == 0x16EC88u) {
        ctx->pc = 0x16EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC84u;
        // 0x16ec88: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EC8Cu;
        goto label_16ec8c;
    }
    ctx->pc = 0x16EC84u;
    {
        const bool branch_taken_0x16ec84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x16ec84) {
            ctx->pc = 0x16EC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EC84u;
            // 0x16ec88: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EC90u;
            goto label_16ec90;
        }
    }
    ctx->pc = 0x16EC8Cu;
label_16ec8c:
    // 0x16ec8c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x16ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_16ec90:
    // 0x16ec90: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_16ec94:
    // 0x16ec94: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16ec98:
    // 0x16ec98: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x16ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_16ec9c:
    // 0x16ec9c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16eca0:
    // 0x16eca0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x16eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_16eca4:
    // 0x16eca4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x16eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_16eca8:
    // 0x16eca8: 0x10000034  b           . + 4 + (0x34 << 2)
label_16ecac:
    if (ctx->pc == 0x16ECACu) {
        ctx->pc = 0x16ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECA8u;
        // 0x16ecac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ECB0u;
        goto label_16ecb0;
    }
    ctx->pc = 0x16ECA8u;
    {
        const bool branch_taken_0x16eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECA8u;
        // 0x16ecac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eca8) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16ECB0u;
label_16ecb0:
    // 0x16ecb0: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_16ecb4:
    if (ctx->pc == 0x16ECB4u) {
        ctx->pc = 0x16ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECB0u;
        // 0x16ecb4: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ECB8u;
        goto label_16ecb8;
    }
    ctx->pc = 0x16ECB0u;
    {
        const bool branch_taken_0x16ecb0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECB0u;
        // 0x16ecb4: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ecb0) {
            ctx->pc = 0x16ECBCu;
            goto label_16ecbc;
        }
    }
    ctx->pc = 0x16ECB8u;
label_16ecb8:
    // 0x16ecb8: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x16ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_16ecbc:
    // 0x16ecbc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x16ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16ecc0:
    // 0x16ecc0: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_16ecc4:
    if (ctx->pc == 0x16ECC4u) {
        ctx->pc = 0x16ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECC0u;
        // 0x16ecc4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ECC8u;
        goto label_16ecc8;
    }
    ctx->pc = 0x16ECC0u;
    {
        const bool branch_taken_0x16ecc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x16ecc0) {
            ctx->pc = 0x16ECC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ECC0u;
            // 0x16ecc4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ECD0u;
            goto label_16ecd0;
        }
    }
    ctx->pc = 0x16ECC8u;
label_16ecc8:
    // 0x16ecc8: 0x10000005  b           . + 4 + (0x5 << 2)
label_16eccc:
    if (ctx->pc == 0x16ECCCu) {
        ctx->pc = 0x16ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECC8u;
        // 0x16eccc: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ECD0u;
        goto label_16ecd0;
    }
    ctx->pc = 0x16ECC8u;
    {
        const bool branch_taken_0x16ecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECC8u;
        // 0x16eccc: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ecc8) {
            ctx->pc = 0x16ECE0u;
            goto label_16ece0;
        }
    }
    ctx->pc = 0x16ECD0u;
label_16ecd0:
    // 0x16ecd0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16ecd4:
    // 0x16ecd4: 0x54450002  bnel        $v0, $a1, . + 4 + (0x2 << 2)
label_16ecd8:
    if (ctx->pc == 0x16ECD8u) {
        ctx->pc = 0x16ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECD4u;
        // 0x16ecd8: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ECDCu;
        goto label_16ecdc;
    }
    ctx->pc = 0x16ECD4u;
    {
        const bool branch_taken_0x16ecd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x16ecd4) {
            ctx->pc = 0x16ECD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ECD4u;
            // 0x16ecd8: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ECE0u;
            goto label_16ece0;
        }
    }
    ctx->pc = 0x16ECDCu;
label_16ecdc:
    // 0x16ecdc: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x16ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_16ece0:
    // 0x16ece0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ece4:
    // 0x16ece4: 0x54460012  bnel        $v0, $a2, . + 4 + (0x12 << 2)
label_16ece8:
    if (ctx->pc == 0x16ECE8u) {
        ctx->pc = 0x16ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECE4u;
        // 0x16ece8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ECECu;
        goto label_16ecec;
    }
    ctx->pc = 0x16ECE4u;
    {
        const bool branch_taken_0x16ece4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x16ece4) {
            ctx->pc = 0x16ECE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ECE4u;
            // 0x16ece8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ED30u;
            goto label_16ed30;
        }
    }
    ctx->pc = 0x16ECECu;
label_16ecec:
    // 0x16ecec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16ecf0:
    // 0x16ecf0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_16ecf4:
    if (ctx->pc == 0x16ECF4u) {
        ctx->pc = 0x16ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECF0u;
        // 0x16ecf4: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ECF8u;
        goto label_16ecf8;
    }
    ctx->pc = 0x16ECF0u;
    {
        const bool branch_taken_0x16ecf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ecf0) {
            ctx->pc = 0x16ECF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ECF0u;
            // 0x16ecf4: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ED04u;
            goto label_16ed04;
        }
    }
    ctx->pc = 0x16ECF8u;
label_16ecf8:
    // 0x16ecf8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_16ecfc:
    // 0x16ecfc: 0x1000000b  b           . + 4 + (0xB << 2)
label_16ed00:
    if (ctx->pc == 0x16ED00u) {
        ctx->pc = 0x16ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECFCu;
        // 0x16ed00: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED04u;
        goto label_16ed04;
    }
    ctx->pc = 0x16ECFCu;
    {
        const bool branch_taken_0x16ecfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECFCu;
        // 0x16ed00: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ecfc) {
            ctx->pc = 0x16ED2Cu;
            goto label_16ed2c;
        }
    }
    ctx->pc = 0x16ED04u;
label_16ed04:
    // 0x16ed04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16ed08:
    if (ctx->pc == 0x16ED08u) {
        ctx->pc = 0x16ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED04u;
        // 0x16ed08: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED0Cu;
        goto label_16ed0c;
    }
    ctx->pc = 0x16ED04u;
    {
        const bool branch_taken_0x16ed04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED04u;
        // 0x16ed08: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed04) {
            ctx->pc = 0x16ED28u;
            goto label_16ed28;
        }
    }
    ctx->pc = 0x16ED0Cu;
label_16ed0c:
    // 0x16ed0c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16ed10:
    // 0x16ed10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16ed14:
    // 0x16ed14: 0x0  nop
    ctx->pc = 0x16ed14u;
    // NOP
label_16ed18:
    // 0x16ed18: 0x0  nop
    ctx->pc = 0x16ed18u;
    // NOP
label_16ed1c:
    // 0x16ed1c: 0x0  nop
    ctx->pc = 0x16ed1cu;
    // NOP
label_16ed20:
    // 0x16ed20: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_16ed24:
    if (ctx->pc == 0x16ED24u) {
        ctx->pc = 0x16ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED20u;
        // 0x16ed24: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED28u;
        goto label_16ed28;
    }
    ctx->pc = 0x16ED20u;
    {
        const bool branch_taken_0x16ed20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ed20) {
            ctx->pc = 0x16ED24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ED20u;
            // 0x16ed24: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ED10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ed10;
        }
    }
    ctx->pc = 0x16ED28u;
label_16ed28:
    // 0x16ed28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x16ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_16ed2c:
    // 0x16ed2c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x16ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_16ed30:
    // 0x16ed30: 0x54460013  bnel        $v0, $a2, . + 4 + (0x13 << 2)
label_16ed34:
    if (ctx->pc == 0x16ED34u) {
        ctx->pc = 0x16ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED30u;
        // 0x16ed34: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED38u;
        goto label_16ed38;
    }
    ctx->pc = 0x16ED30u;
    {
        const bool branch_taken_0x16ed30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x16ed30) {
            ctx->pc = 0x16ED34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ED30u;
            // 0x16ed34: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ED80u;
            goto label_16ed80;
        }
    }
    ctx->pc = 0x16ED38u;
label_16ed38:
    // 0x16ed38: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16ed3c:
    // 0x16ed3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_16ed40:
    if (ctx->pc == 0x16ED40u) {
        ctx->pc = 0x16ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED3Cu;
        // 0x16ed40: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED44u;
        goto label_16ed44;
    }
    ctx->pc = 0x16ED3Cu;
    {
        const bool branch_taken_0x16ed3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ed3c) {
            ctx->pc = 0x16ED40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ED3Cu;
            // 0x16ed40: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ED50u;
            goto label_16ed50;
        }
    }
    ctx->pc = 0x16ED44u;
label_16ed44:
    // 0x16ed44: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_16ed48:
    // 0x16ed48: 0x1000000c  b           . + 4 + (0xC << 2)
label_16ed4c:
    if (ctx->pc == 0x16ED4Cu) {
        ctx->pc = 0x16ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED48u;
        // 0x16ed4c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED50u;
        goto label_16ed50;
    }
    ctx->pc = 0x16ED48u;
    {
        const bool branch_taken_0x16ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED48u;
        // 0x16ed4c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed48) {
            ctx->pc = 0x16ED7Cu;
            goto label_16ed7c;
        }
    }
    ctx->pc = 0x16ED50u;
label_16ed50:
    // 0x16ed50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_16ed54:
    if (ctx->pc == 0x16ED54u) {
        ctx->pc = 0x16ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED50u;
        // 0x16ed54: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED58u;
        goto label_16ed58;
    }
    ctx->pc = 0x16ED50u;
    {
        const bool branch_taken_0x16ed50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED50u;
        // 0x16ed54: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed50) {
            ctx->pc = 0x16ED78u;
            goto label_16ed78;
        }
    }
    ctx->pc = 0x16ED58u;
label_16ed58:
    // 0x16ed58: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x16ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16ed5c:
    // 0x16ed5c: 0x0  nop
    ctx->pc = 0x16ed5cu;
    // NOP
label_16ed60:
    // 0x16ed60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16ed64:
    // 0x16ed64: 0x0  nop
    ctx->pc = 0x16ed64u;
    // NOP
label_16ed68:
    // 0x16ed68: 0x0  nop
    ctx->pc = 0x16ed68u;
    // NOP
label_16ed6c:
    // 0x16ed6c: 0x0  nop
    ctx->pc = 0x16ed6cu;
    // NOP
label_16ed70:
    // 0x16ed70: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_16ed74:
    if (ctx->pc == 0x16ED74u) {
        ctx->pc = 0x16ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED70u;
        // 0x16ed74: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED78u;
        goto label_16ed78;
    }
    ctx->pc = 0x16ED70u;
    {
        const bool branch_taken_0x16ed70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ed70) {
            ctx->pc = 0x16ED74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ED70u;
            // 0x16ed74: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ED60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ed60;
        }
    }
    ctx->pc = 0x16ED78u;
label_16ed78:
    // 0x16ed78: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x16ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_16ed7c:
    // 0x16ed7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16ed80:
    // 0x16ed80: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_16ed84:
    if (ctx->pc == 0x16ED84u) {
        ctx->pc = 0x16ED88u;
        goto label_16ed88;
    }
    ctx->pc = 0x16ED80u;
    {
        const bool branch_taken_0x16ed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ed80) {
            ctx->pc = 0x16F0CCu;
            goto label_16f0cc;
        }
    }
    ctx->pc = 0x16ED88u;
label_16ed88:
    // 0x16ed88: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_16ed8c:
    if (ctx->pc == 0x16ED8Cu) {
        ctx->pc = 0x16ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED88u;
        // 0x16ed8c: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED90u;
        goto label_16ed90;
    }
    ctx->pc = 0x16ED88u;
    {
        const bool branch_taken_0x16ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED88u;
        // 0x16ed8c: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed88) {
            ctx->pc = 0x16F0A0u;
            goto label_16f0a0;
        }
    }
    ctx->pc = 0x16ED90u;
label_16ed90:
    // 0x16ed90: 0x15220060  bne         $t1, $v0, . + 4 + (0x60 << 2)
label_16ed94:
    if (ctx->pc == 0x16ED94u) {
        ctx->pc = 0x16ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED90u;
        // 0x16ed94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED98u;
        goto label_16ed98;
    }
    ctx->pc = 0x16ED90u;
    {
        const bool branch_taken_0x16ed90 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x16ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED90u;
        // 0x16ed94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed90) {
            ctx->pc = 0x16EF14u;
            goto label_16ef14;
        }
    }
    ctx->pc = 0x16ED98u;
label_16ed98:
    // 0x16ed98: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x16ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16ed9c:
    // 0x16ed9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16eda0:
    // 0x16eda0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_16eda4:
    if (ctx->pc == 0x16EDA4u) {
        ctx->pc = 0x16EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDA0u;
        // 0x16eda4: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EDA8u;
        goto label_16eda8;
    }
    ctx->pc = 0x16EDA0u;
    {
        const bool branch_taken_0x16eda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16eda0) {
            ctx->pc = 0x16EDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EDA0u;
            // 0x16eda4: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EE08u;
            goto label_16ee08;
        }
    }
    ctx->pc = 0x16EDA8u;
label_16eda8:
    // 0x16eda8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16edac:
    // 0x16edac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16edacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_16edb0:
    // 0x16edb0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x16edb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_16edb4:
    // 0x16edb4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x16edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16edb8:
    // 0x16edb8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16edbc:
    // 0x16edbc: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x16edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_16edc0:
    // 0x16edc0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16edc4:
    // 0x16edc4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16edc8:
    if (ctx->pc == 0x16EDC8u) {
        ctx->pc = 0x16EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDC4u;
        // 0x16edc8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EDCCu;
        goto label_16edcc;
    }
    ctx->pc = 0x16EDC4u;
    {
        const bool branch_taken_0x16edc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16edc4) {
            ctx->pc = 0x16EDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EDC4u;
            // 0x16edc8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EDCCu;
            goto label_16edcc;
        }
    }
    ctx->pc = 0x16EDCCu;
label_16edcc:
    // 0x16edcc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x16edccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_16edd0:
    // 0x16edd0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_16edd4:
    // 0x16edd4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16edd8:
    // 0x16edd8: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_16eddc:
    if (ctx->pc == 0x16EDDCu) {
        ctx->pc = 0x16EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDD8u;
        // 0x16eddc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EDE0u;
        goto label_16ede0;
    }
    ctx->pc = 0x16EDD8u;
    {
        const bool branch_taken_0x16edd8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x16edd8) {
            ctx->pc = 0x16EDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EDD8u;
            // 0x16eddc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EDE8u;
            goto label_16ede8;
        }
    }
    ctx->pc = 0x16EDE0u;
label_16ede0:
    // 0x16ede0: 0x10000005  b           . + 4 + (0x5 << 2)
label_16ede4:
    if (ctx->pc == 0x16EDE4u) {
        ctx->pc = 0x16EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDE0u;
        // 0x16ede4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EDE8u;
        goto label_16ede8;
    }
    ctx->pc = 0x16EDE0u;
    {
        const bool branch_taken_0x16ede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDE0u;
        // 0x16ede4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ede0) {
            ctx->pc = 0x16EDF8u;
            goto label_16edf8;
        }
    }
    ctx->pc = 0x16EDE8u;
label_16ede8:
    // 0x16ede8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16edec:
    // 0x16edec: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_16edf0:
    if (ctx->pc == 0x16EDF0u) {
        ctx->pc = 0x16EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDECu;
        // 0x16edf0: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EDF4u;
        goto label_16edf4;
    }
    ctx->pc = 0x16EDECu;
    {
        const bool branch_taken_0x16edec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x16edec) {
            ctx->pc = 0x16EDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EDECu;
            // 0x16edf0: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EDF8u;
            goto label_16edf8;
        }
    }
    ctx->pc = 0x16EDF4u;
label_16edf4:
    // 0x16edf4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x16edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_16edf8:
    // 0x16edf8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x16edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_16edfc:
    // 0x16edfc: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x16edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_16ee00:
    // 0x16ee00: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x16ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16ee04:
    // 0x16ee04: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x16ee04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16ee08:
    // 0x16ee08: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_16ee0c:
    if (ctx->pc == 0x16EE0Cu) {
        ctx->pc = 0x16EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE08u;
        // 0x16ee0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE10u;
        goto label_16ee10;
    }
    ctx->pc = 0x16EE08u;
    {
        const bool branch_taken_0x16ee08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE08u;
        // 0x16ee0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee08) {
            ctx->pc = 0x16EE1Cu;
            goto label_16ee1c;
        }
    }
    ctx->pc = 0x16EE10u;
label_16ee10:
    // 0x16ee10: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x16ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_16ee14:
    // 0x16ee14: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_16ee18:
    if (ctx->pc == 0x16EE18u) {
        ctx->pc = 0x16EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE14u;
        // 0x16ee18: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE1Cu;
        goto label_16ee1c;
    }
    ctx->pc = 0x16EE14u;
    {
        const bool branch_taken_0x16ee14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE14u;
        // 0x16ee18: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee14) {
            ctx->pc = 0x16EE34u;
            goto label_16ee34;
        }
    }
    ctx->pc = 0x16EE1Cu;
label_16ee1c:
    // 0x16ee1c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x16ee1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16ee20:
    // 0x16ee20: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
label_16ee24:
    if (ctx->pc == 0x16EE24u) {
        ctx->pc = 0x16EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE20u;
        // 0x16ee24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE28u;
        goto label_16ee28;
    }
    ctx->pc = 0x16EE20u;
    {
        const bool branch_taken_0x16ee20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE20u;
        // 0x16ee24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee20) {
            ctx->pc = 0x16EFACu;
            goto label_16efac;
        }
    }
    ctx->pc = 0x16EE28u;
label_16ee28:
    // 0x16ee28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16ee2c:
    // 0x16ee2c: 0x50620060  beql        $v1, $v0, . + 4 + (0x60 << 2)
label_16ee30:
    if (ctx->pc == 0x16EE30u) {
        ctx->pc = 0x16EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE2Cu;
        // 0x16ee30: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE34u;
        goto label_16ee34;
    }
    ctx->pc = 0x16EE2Cu;
    {
        const bool branch_taken_0x16ee2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16ee2c) {
            ctx->pc = 0x16EE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EE2Cu;
            // 0x16ee30: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EFB0u;
            goto label_16efb0;
        }
    }
    ctx->pc = 0x16EE34u;
label_16ee34:
    // 0x16ee34: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_16ee38:
    if (ctx->pc == 0x16EE38u) {
        ctx->pc = 0x16EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE34u;
        // 0x16ee38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE3Cu;
        goto label_16ee3c;
    }
    ctx->pc = 0x16EE34u;
    {
        const bool branch_taken_0x16ee34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE34u;
        // 0x16ee38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee34) {
            ctx->pc = 0x16EE48u;
            goto label_16ee48;
        }
    }
    ctx->pc = 0x16EE3Cu;
label_16ee3c:
    // 0x16ee3c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16ee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16ee40:
    // 0x16ee40: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_16ee44:
    if (ctx->pc == 0x16EE44u) {
        ctx->pc = 0x16EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE40u;
        // 0x16ee44: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE48u;
        goto label_16ee48;
    }
    ctx->pc = 0x16EE40u;
    {
        const bool branch_taken_0x16ee40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ee40) {
            ctx->pc = 0x16EE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EE40u;
            // 0x16ee44: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EEACu;
            goto label_16eeac;
        }
    }
    ctx->pc = 0x16EE48u;
label_16ee48:
    // 0x16ee48: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_16ee4c:
    if (ctx->pc == 0x16EE4Cu) {
        ctx->pc = 0x16EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE48u;
        // 0x16ee4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE50u;
        goto label_16ee50;
    }
    ctx->pc = 0x16EE48u;
    {
        const bool branch_taken_0x16ee48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE48u;
        // 0x16ee4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee48) {
            ctx->pc = 0x16EE54u;
            goto label_16ee54;
        }
    }
    ctx->pc = 0x16EE50u;
label_16ee50:
    // 0x16ee50: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x16ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_16ee54:
    // 0x16ee54: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x16ee54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16ee58:
    // 0x16ee58: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_16ee5c:
    // 0x16ee5c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16ee60:
    // 0x16ee60: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x16ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_16ee64:
    // 0x16ee64: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16ee68:
    // 0x16ee68: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16ee6c:
    if (ctx->pc == 0x16EE6Cu) {
        ctx->pc = 0x16EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE68u;
        // 0x16ee6c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE70u;
        goto label_16ee70;
    }
    ctx->pc = 0x16EE68u;
    {
        const bool branch_taken_0x16ee68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ee68) {
            ctx->pc = 0x16EE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EE68u;
            // 0x16ee6c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EE70u;
            goto label_16ee70;
        }
    }
    ctx->pc = 0x16EE70u;
label_16ee70:
    // 0x16ee70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_16ee74:
    // 0x16ee74: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x16ee74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_16ee78:
    // 0x16ee78: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16ee7c:
    // 0x16ee7c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_16ee80:
    if (ctx->pc == 0x16EE80u) {
        ctx->pc = 0x16EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE7Cu;
        // 0x16ee80: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE84u;
        goto label_16ee84;
    }
    ctx->pc = 0x16EE7Cu;
    {
        const bool branch_taken_0x16ee7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ee7c) {
            ctx->pc = 0x16EE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EE7Cu;
            // 0x16ee80: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EE8Cu;
            goto label_16ee8c;
        }
    }
    ctx->pc = 0x16EE84u;
label_16ee84:
    // 0x16ee84: 0x10000005  b           . + 4 + (0x5 << 2)
label_16ee88:
    if (ctx->pc == 0x16EE88u) {
        ctx->pc = 0x16EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE84u;
        // 0x16ee88: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE8Cu;
        goto label_16ee8c;
    }
    ctx->pc = 0x16EE84u;
    {
        const bool branch_taken_0x16ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE84u;
        // 0x16ee88: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee84) {
            ctx->pc = 0x16EE9Cu;
            goto label_16ee9c;
        }
    }
    ctx->pc = 0x16EE8Cu;
label_16ee8c:
    // 0x16ee8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16ee90:
    // 0x16ee90: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_16ee94:
    if (ctx->pc == 0x16EE94u) {
        ctx->pc = 0x16EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE90u;
        // 0x16ee94: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EE98u;
        goto label_16ee98;
    }
    ctx->pc = 0x16EE90u;
    {
        const bool branch_taken_0x16ee90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ee90) {
            ctx->pc = 0x16EE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EE90u;
            // 0x16ee94: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EE9Cu;
            goto label_16ee9c;
        }
    }
    ctx->pc = 0x16EE98u;
label_16ee98:
    // 0x16ee98: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x16ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_16ee9c:
    // 0x16ee9c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x16ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_16eea0:
    // 0x16eea0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x16eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_16eea4:
    // 0x16eea4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x16eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16eea8:
    // 0x16eea8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16eeac:
    // 0x16eeac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16eeb0:
    // 0x16eeb0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_16eeb4:
    // 0x16eeb4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x16eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_16eeb8:
    // 0x16eeb8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16eebc:
    // 0x16eebc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16eec0:
    if (ctx->pc == 0x16EEC0u) {
        ctx->pc = 0x16EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEBCu;
        // 0x16eec0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EEC4u;
        goto label_16eec4;
    }
    ctx->pc = 0x16EEBCu;
    {
        const bool branch_taken_0x16eebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16eebc) {
            ctx->pc = 0x16EEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EEBCu;
            // 0x16eec0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EEC4u;
            goto label_16eec4;
        }
    }
    ctx->pc = 0x16EEC4u;
label_16eec4:
    // 0x16eec4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x16eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16eec8:
    // 0x16eec8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16eecc:
    // 0x16eecc: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x16eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_16eed0:
    // 0x16eed0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16eed4:
    // 0x16eed4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16eed8:
    if (ctx->pc == 0x16EED8u) {
        ctx->pc = 0x16EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EED4u;
        // 0x16eed8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EEDCu;
        goto label_16eedc;
    }
    ctx->pc = 0x16EED4u;
    {
        const bool branch_taken_0x16eed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16eed4) {
            ctx->pc = 0x16EED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EED4u;
            // 0x16eed8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EEDCu;
            goto label_16eedc;
        }
    }
    ctx->pc = 0x16EEDCu;
label_16eedc:
    // 0x16eedc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x16eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_16eee0:
    // 0x16eee0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_16eee4:
    // 0x16eee4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16eee8:
    // 0x16eee8: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_16eeec:
    if (ctx->pc == 0x16EEECu) {
        ctx->pc = 0x16EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEE8u;
        // 0x16eeec: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EEF0u;
        goto label_16eef0;
    }
    ctx->pc = 0x16EEE8u;
    {
        const bool branch_taken_0x16eee8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x16eee8) {
            ctx->pc = 0x16EEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EEE8u;
            // 0x16eeec: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EEF8u;
            goto label_16eef8;
        }
    }
    ctx->pc = 0x16EEF0u;
label_16eef0:
    // 0x16eef0: 0x10000005  b           . + 4 + (0x5 << 2)
label_16eef4:
    if (ctx->pc == 0x16EEF4u) {
        ctx->pc = 0x16EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEF0u;
        // 0x16eef4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EEF8u;
        goto label_16eef8;
    }
    ctx->pc = 0x16EEF0u;
    {
        const bool branch_taken_0x16eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEF0u;
        // 0x16eef4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eef0) {
            ctx->pc = 0x16EF08u;
            goto label_16ef08;
        }
    }
    ctx->pc = 0x16EEF8u;
label_16eef8:
    // 0x16eef8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16eefc:
    // 0x16eefc: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_16ef00:
    if (ctx->pc == 0x16EF00u) {
        ctx->pc = 0x16EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEFCu;
        // 0x16ef00: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF04u;
        goto label_16ef04;
    }
    ctx->pc = 0x16EEFCu;
    {
        const bool branch_taken_0x16eefc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x16eefc) {
            ctx->pc = 0x16EF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EEFCu;
            // 0x16ef00: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EF08u;
            goto label_16ef08;
        }
    }
    ctx->pc = 0x16EF04u;
label_16ef04:
    // 0x16ef04: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x16ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_16ef08:
    // 0x16ef08: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x16ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_16ef0c:
    // 0x16ef0c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_16ef10:
    if (ctx->pc == 0x16EF10u) {
        ctx->pc = 0x16EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF0Cu;
        // 0x16ef10: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF14u;
        goto label_16ef14;
    }
    ctx->pc = 0x16EF0Cu;
    {
        const bool branch_taken_0x16ef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF0Cu;
        // 0x16ef10: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef0c) {
            ctx->pc = 0x16F0C0u;
            goto label_16f0c0;
        }
    }
    ctx->pc = 0x16EF14u;
label_16ef14:
    // 0x16ef14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ef18:
    // 0x16ef18: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_16ef1c:
    if (ctx->pc == 0x16EF1Cu) {
        ctx->pc = 0x16EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF18u;
        // 0x16ef1c: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF20u;
        goto label_16ef20;
    }
    ctx->pc = 0x16EF18u;
    {
        const bool branch_taken_0x16ef18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ef18) {
            ctx->pc = 0x16EF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EF18u;
            // 0x16ef1c: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EF80u;
            goto label_16ef80;
        }
    }
    ctx->pc = 0x16EF20u;
label_16ef20:
    // 0x16ef20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ef24:
    // 0x16ef24: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_16ef28:
    // 0x16ef28: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x16ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_16ef2c:
    // 0x16ef2c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x16ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_16ef30:
    // 0x16ef30: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16ef34:
    // 0x16ef34: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x16ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_16ef38:
    // 0x16ef38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16ef3c:
    // 0x16ef3c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16ef40:
    if (ctx->pc == 0x16EF40u) {
        ctx->pc = 0x16EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF3Cu;
        // 0x16ef40: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF44u;
        goto label_16ef44;
    }
    ctx->pc = 0x16EF3Cu;
    {
        const bool branch_taken_0x16ef3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ef3c) {
            ctx->pc = 0x16EF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EF3Cu;
            // 0x16ef40: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EF44u;
            goto label_16ef44;
        }
    }
    ctx->pc = 0x16EF44u;
label_16ef44:
    // 0x16ef44: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x16ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_16ef48:
    // 0x16ef48: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_16ef4c:
    // 0x16ef4c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16ef50:
    // 0x16ef50: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_16ef54:
    if (ctx->pc == 0x16EF54u) {
        ctx->pc = 0x16EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF50u;
        // 0x16ef54: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF58u;
        goto label_16ef58;
    }
    ctx->pc = 0x16EF50u;
    {
        const bool branch_taken_0x16ef50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ef50) {
            ctx->pc = 0x16EF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EF50u;
            // 0x16ef54: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EF60u;
            goto label_16ef60;
        }
    }
    ctx->pc = 0x16EF58u;
label_16ef58:
    // 0x16ef58: 0x10000005  b           . + 4 + (0x5 << 2)
label_16ef5c:
    if (ctx->pc == 0x16EF5Cu) {
        ctx->pc = 0x16EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF58u;
        // 0x16ef5c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF60u;
        goto label_16ef60;
    }
    ctx->pc = 0x16EF58u;
    {
        const bool branch_taken_0x16ef58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF58u;
        // 0x16ef5c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef58) {
            ctx->pc = 0x16EF70u;
            goto label_16ef70;
        }
    }
    ctx->pc = 0x16EF60u;
label_16ef60:
    // 0x16ef60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16ef64:
    // 0x16ef64: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_16ef68:
    if (ctx->pc == 0x16EF68u) {
        ctx->pc = 0x16EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF64u;
        // 0x16ef68: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF6Cu;
        goto label_16ef6c;
    }
    ctx->pc = 0x16EF64u;
    {
        const bool branch_taken_0x16ef64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ef64) {
            ctx->pc = 0x16EF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EF64u;
            // 0x16ef68: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EF70u;
            goto label_16ef70;
        }
    }
    ctx->pc = 0x16EF6Cu;
label_16ef6c:
    // 0x16ef6c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x16ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_16ef70:
    // 0x16ef70: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x16ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_16ef74:
    // 0x16ef74: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x16ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_16ef78:
    // 0x16ef78: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x16ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_16ef7c:
    // 0x16ef7c: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x16ef7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16ef80:
    // 0x16ef80: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_16ef84:
    if (ctx->pc == 0x16EF84u) {
        ctx->pc = 0x16EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF80u;
        // 0x16ef84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF88u;
        goto label_16ef88;
    }
    ctx->pc = 0x16EF80u;
    {
        const bool branch_taken_0x16ef80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF80u;
        // 0x16ef84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef80) {
            ctx->pc = 0x16EF94u;
            goto label_16ef94;
        }
    }
    ctx->pc = 0x16EF88u;
label_16ef88:
    // 0x16ef88: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x16ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_16ef8c:
    // 0x16ef8c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_16ef90:
    if (ctx->pc == 0x16EF90u) {
        ctx->pc = 0x16EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF8Cu;
        // 0x16ef90: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF94u;
        goto label_16ef94;
    }
    ctx->pc = 0x16EF8Cu;
    {
        const bool branch_taken_0x16ef8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF8Cu;
        // 0x16ef90: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef8c) {
            ctx->pc = 0x16EFBCu;
            goto label_16efbc;
        }
    }
    ctx->pc = 0x16EF94u;
label_16ef94:
    // 0x16ef94: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x16ef94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16ef98:
    // 0x16ef98: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_16ef9c:
    if (ctx->pc == 0x16EF9Cu) {
        ctx->pc = 0x16EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF98u;
        // 0x16ef9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFA0u;
        goto label_16efa0;
    }
    ctx->pc = 0x16EF98u;
    {
        const bool branch_taken_0x16ef98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF98u;
        // 0x16ef9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef98) {
            ctx->pc = 0x16EFACu;
            goto label_16efac;
        }
    }
    ctx->pc = 0x16EFA0u;
label_16efa0:
    // 0x16efa0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16efa4:
    // 0x16efa4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_16efa8:
    if (ctx->pc == 0x16EFA8u) {
        ctx->pc = 0x16EFACu;
        goto label_16efac;
    }
    ctx->pc = 0x16EFA4u;
    {
        const bool branch_taken_0x16efa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16efa4) {
            ctx->pc = 0x16EFBCu;
            goto label_16efbc;
        }
    }
    ctx->pc = 0x16EFACu;
label_16efac:
    // 0x16efac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16efacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_16efb0:
    // 0x16efb0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x16efb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16efb4:
    // 0x16efb4: 0x10000039  b           . + 4 + (0x39 << 2)
label_16efb8:
    if (ctx->pc == 0x16EFB8u) {
        ctx->pc = 0x16EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFB4u;
        // 0x16efb8: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFBCu;
        goto label_16efbc;
    }
    ctx->pc = 0x16EFB4u;
    {
        const bool branch_taken_0x16efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFB4u;
        // 0x16efb8: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efb4) {
            ctx->pc = 0x16F09Cu;
            goto label_16f09c;
        }
    }
    ctx->pc = 0x16EFBCu;
label_16efbc:
    // 0x16efbc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_16efc0:
    if (ctx->pc == 0x16EFC0u) {
        ctx->pc = 0x16EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFBCu;
        // 0x16efc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFC4u;
        goto label_16efc4;
    }
    ctx->pc = 0x16EFBCu;
    {
        const bool branch_taken_0x16efbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFBCu;
        // 0x16efc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efbc) {
            ctx->pc = 0x16EFD0u;
            goto label_16efd0;
        }
    }
    ctx->pc = 0x16EFC4u;
label_16efc4:
    // 0x16efc4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16efc8:
    // 0x16efc8: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_16efcc:
    if (ctx->pc == 0x16EFCCu) {
        ctx->pc = 0x16EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFC8u;
        // 0x16efcc: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFD0u;
        goto label_16efd0;
    }
    ctx->pc = 0x16EFC8u;
    {
        const bool branch_taken_0x16efc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16efc8) {
            ctx->pc = 0x16EFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EFC8u;
            // 0x16efcc: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F034u;
            goto label_16f034;
        }
    }
    ctx->pc = 0x16EFD0u;
label_16efd0:
    // 0x16efd0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_16efd4:
    if (ctx->pc == 0x16EFD4u) {
        ctx->pc = 0x16EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFD0u;
        // 0x16efd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFD8u;
        goto label_16efd8;
    }
    ctx->pc = 0x16EFD0u;
    {
        const bool branch_taken_0x16efd0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFD0u;
        // 0x16efd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efd0) {
            ctx->pc = 0x16EFDCu;
            goto label_16efdc;
        }
    }
    ctx->pc = 0x16EFD8u;
label_16efd8:
    // 0x16efd8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x16efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_16efdc:
    // 0x16efdc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x16efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16efe0:
    // 0x16efe0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_16efe4:
    // 0x16efe4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16efe8:
    // 0x16efe8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x16efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_16efec:
    // 0x16efec: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16eff0:
    // 0x16eff0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16eff4:
    if (ctx->pc == 0x16EFF4u) {
        ctx->pc = 0x16EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFF0u;
        // 0x16eff4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFF8u;
        goto label_16eff8;
    }
    ctx->pc = 0x16EFF0u;
    {
        const bool branch_taken_0x16eff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16eff0) {
            ctx->pc = 0x16EFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EFF0u;
            // 0x16eff4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EFF8u;
            goto label_16eff8;
        }
    }
    ctx->pc = 0x16EFF8u;
label_16eff8:
    // 0x16eff8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_16effc:
    // 0x16effc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x16effcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_16f000:
    // 0x16f000: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f004:
    // 0x16f004: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_16f008:
    if (ctx->pc == 0x16F008u) {
        ctx->pc = 0x16F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F004u;
        // 0x16f008: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F00Cu;
        goto label_16f00c;
    }
    ctx->pc = 0x16F004u;
    {
        const bool branch_taken_0x16f004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f004) {
            ctx->pc = 0x16F008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F004u;
            // 0x16f008: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F014u;
            goto label_16f014;
        }
    }
    ctx->pc = 0x16F00Cu;
label_16f00c:
    // 0x16f00c: 0x10000005  b           . + 4 + (0x5 << 2)
label_16f010:
    if (ctx->pc == 0x16F010u) {
        ctx->pc = 0x16F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F00Cu;
        // 0x16f010: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F014u;
        goto label_16f014;
    }
    ctx->pc = 0x16F00Cu;
    {
        const bool branch_taken_0x16f00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F00Cu;
        // 0x16f010: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f00c) {
            ctx->pc = 0x16F024u;
            goto label_16f024;
        }
    }
    ctx->pc = 0x16F014u;
label_16f014:
    // 0x16f014: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16f014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f018:
    // 0x16f018: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_16f01c:
    if (ctx->pc == 0x16F01Cu) {
        ctx->pc = 0x16F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F018u;
        // 0x16f01c: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F020u;
        goto label_16f020;
    }
    ctx->pc = 0x16F018u;
    {
        const bool branch_taken_0x16f018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f018) {
            ctx->pc = 0x16F01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F018u;
            // 0x16f01c: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F024u;
            goto label_16f024;
        }
    }
    ctx->pc = 0x16F020u;
label_16f020:
    // 0x16f020: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x16f020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_16f024:
    // 0x16f024: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x16f024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_16f028:
    // 0x16f028: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x16f028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_16f02c:
    // 0x16f02c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x16f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_16f030:
    // 0x16f030: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16f034:
    // 0x16f034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16f034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f038:
    // 0x16f038: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16f038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_16f03c:
    // 0x16f03c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x16f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_16f040:
    // 0x16f040: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f044:
    // 0x16f044: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16f048:
    if (ctx->pc == 0x16F048u) {
        ctx->pc = 0x16F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F044u;
        // 0x16f048: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F04Cu;
        goto label_16f04c;
    }
    ctx->pc = 0x16F044u;
    {
        const bool branch_taken_0x16f044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f044) {
            ctx->pc = 0x16F048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F044u;
            // 0x16f048: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F04Cu;
            goto label_16f04c;
        }
    }
    ctx->pc = 0x16F04Cu;
label_16f04c:
    // 0x16f04c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x16f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_16f050:
    // 0x16f050: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f054:
    // 0x16f054: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x16f054u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_16f058:
    // 0x16f058: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f05c:
    // 0x16f05c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16f060:
    if (ctx->pc == 0x16F060u) {
        ctx->pc = 0x16F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F05Cu;
        // 0x16f060: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F064u;
        goto label_16f064;
    }
    ctx->pc = 0x16F05Cu;
    {
        const bool branch_taken_0x16f05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f05c) {
            ctx->pc = 0x16F060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F05Cu;
            // 0x16f060: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F064u;
            goto label_16f064;
        }
    }
    ctx->pc = 0x16F064u;
label_16f064:
    // 0x16f064: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x16f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_16f068:
    // 0x16f068: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16f068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_16f06c:
    // 0x16f06c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f070:
    // 0x16f070: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_16f074:
    if (ctx->pc == 0x16F074u) {
        ctx->pc = 0x16F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F070u;
        // 0x16f074: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F078u;
        goto label_16f078;
    }
    ctx->pc = 0x16F070u;
    {
        const bool branch_taken_0x16f070 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f070) {
            ctx->pc = 0x16F074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F070u;
            // 0x16f074: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F080u;
            goto label_16f080;
        }
    }
    ctx->pc = 0x16F078u;
label_16f078:
    // 0x16f078: 0x10000005  b           . + 4 + (0x5 << 2)
label_16f07c:
    if (ctx->pc == 0x16F07Cu) {
        ctx->pc = 0x16F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F078u;
        // 0x16f07c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F080u;
        goto label_16f080;
    }
    ctx->pc = 0x16F078u;
    {
        const bool branch_taken_0x16f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F078u;
        // 0x16f07c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f078) {
            ctx->pc = 0x16F090u;
            goto label_16f090;
        }
    }
    ctx->pc = 0x16F080u;
label_16f080:
    // 0x16f080: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16f080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16f084:
    // 0x16f084: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_16f088:
    if (ctx->pc == 0x16F088u) {
        ctx->pc = 0x16F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F084u;
        // 0x16f088: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F08Cu;
        goto label_16f08c;
    }
    ctx->pc = 0x16F084u;
    {
        const bool branch_taken_0x16f084 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f084) {
            ctx->pc = 0x16F088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F084u;
            // 0x16f088: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F090u;
            goto label_16f090;
        }
    }
    ctx->pc = 0x16F08Cu;
label_16f08c:
    // 0x16f08c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x16f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_16f090:
    // 0x16f090: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x16f090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_16f094:
    // 0x16f094: 0x1000000a  b           . + 4 + (0xA << 2)
label_16f098:
    if (ctx->pc == 0x16F098u) {
        ctx->pc = 0x16F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F094u;
        // 0x16f098: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F09Cu;
        goto label_16f09c;
    }
    ctx->pc = 0x16F094u;
    {
        const bool branch_taken_0x16f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F094u;
        // 0x16f098: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f094) {
            ctx->pc = 0x16F0C0u;
            goto label_16f0c0;
        }
    }
    ctx->pc = 0x16F09Cu;
label_16f09c:
    // 0x16f09c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x16f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f0a0:
    // 0x16f0a0: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
label_16f0a4:
    if (ctx->pc == 0x16F0A4u) {
        ctx->pc = 0x16F0A8u;
        goto label_16f0a8;
    }
    ctx->pc = 0x16F0A0u;
    {
        const bool branch_taken_0x16f0a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f0a0) {
            ctx->pc = 0x16F0C0u;
            goto label_16f0c0;
        }
    }
    ctx->pc = 0x16F0A8u;
label_16f0a8:
    // 0x16f0a8: 0x5120ff39  beql        $t1, $zero, . + 4 + (-0xC7 << 2)
label_16f0ac:
    if (ctx->pc == 0x16F0ACu) {
        ctx->pc = 0x16F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0A8u;
        // 0x16f0ac: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F0B0u;
        goto label_16f0b0;
    }
    ctx->pc = 0x16F0A8u;
    {
        const bool branch_taken_0x16f0a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f0a8) {
            ctx->pc = 0x16F0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F0A8u;
            // 0x16f0ac: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ED90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ed90;
        }
    }
    ctx->pc = 0x16F0B0u;
label_16f0b0:
    // 0x16f0b0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x16f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_16f0b4:
    // 0x16f0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f0b8:
    // 0x16f0b8: 0x5062ff35  beql        $v1, $v0, . + 4 + (-0xCB << 2)
label_16f0bc:
    if (ctx->pc == 0x16F0BCu) {
        ctx->pc = 0x16F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0B8u;
        // 0x16f0bc: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F0C0u;
        goto label_16f0c0;
    }
    ctx->pc = 0x16F0B8u;
    {
        const bool branch_taken_0x16f0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f0b8) {
            ctx->pc = 0x16F0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F0B8u;
            // 0x16f0bc: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ED90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ed90;
        }
    }
    ctx->pc = 0x16F0C0u;
label_16f0c0:
    // 0x16f0c0: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_16f0c4:
    if (ctx->pc == 0x16F0C4u) {
        ctx->pc = 0x16F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0C0u;
        // 0x16f0c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F0C8u;
        goto label_16f0c8;
    }
    ctx->pc = 0x16F0C0u;
    {
        const bool branch_taken_0x16f0c0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0C0u;
        // 0x16f0c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0c0) {
            ctx->pc = 0x16F0CCu;
            goto label_16f0cc;
        }
    }
    ctx->pc = 0x16F0C8u;
label_16f0c8:
    // 0x16f0c8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x16f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_16f0cc:
    // 0x16f0cc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_16f0d0:
    if (ctx->pc == 0x16F0D0u) {
        ctx->pc = 0x16F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0CCu;
        // 0x16f0d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F0D4u;
        goto label_16f0d4;
    }
    ctx->pc = 0x16F0CCu;
    {
        const bool branch_taken_0x16f0cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0CCu;
        // 0x16f0d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0cc) {
            ctx->pc = 0x16F0F8u;
            goto label_16f0f8;
        }
    }
    ctx->pc = 0x16F0D4u;
label_16f0d4:
    // 0x16f0d4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x16f0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_16f0d8:
    // 0x16f0d8: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x16f0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_16f0dc:
    // 0x16f0dc: 0x24c61938  addiu       $a2, $a2, 0x1938
    ctx->pc = 0x16f0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6456));
label_16f0e0:
    // 0x16f0e0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x16f0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_16f0e4:
    // 0x16f0e4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x16f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_16f0e8:
    // 0x16f0e8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x16f0e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_16f0ec:
    // 0x16f0ec: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x16f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_16f0f0:
    // 0x16f0f0: 0x60f809  jalr        $v1
label_16f0f4:
    if (ctx->pc == 0x16F0F4u) {
        ctx->pc = 0x16F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0F0u;
        // 0x16f0f4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F0F8u;
        goto label_16f0f8;
    }
    ctx->pc = 0x16F0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F0F8u);
        ctx->pc = 0x16F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0F0u;
        // 0x16f0f4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F0F0u, 0x16F0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F0F8u;
label_16f0f8:
    // 0x16f0f8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x16f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_16f0fc:
    // 0x16f0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f100:
    // 0x16f100: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_16f104:
    // 0x16f104: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x16f104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_16f108:
    // 0x16f108: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16f108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16f10c:
    // 0x16f10c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x16f10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16f110:
    // 0x16f110: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16f110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16f114:
    // 0x16f114: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16f114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16f118:
    // 0x16f118: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16f118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16f11c:
    // 0x16f11c: 0x3e00008  jr          $ra
label_16f120:
    if (ctx->pc == 0x16F120u) {
        ctx->pc = 0x16F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F11Cu;
        // 0x16f120: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F124u;
        goto label_16f124;
    }
    ctx->pc = 0x16F11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F11Cu;
        // 0x16f120: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F124u;
label_16f124:
    // 0x16f124: 0x0  nop
    ctx->pc = 0x16f124u;
    // NOP
    ctx->pc = 0x16f128u;
}
