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

// Function: sub_0025B9F8
// Address: 0x25b9f8 - 0x25c0e8
void sub_0025B9F8_0x25b9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B9F8_0x25b9f8");
#endif

    switch (ctx->pc) {
        case 0x25b9f8u: goto label_25b9f8;
        case 0x25b9fcu: goto label_25b9fc;
        case 0x25ba00u: goto label_25ba00;
        case 0x25ba04u: goto label_25ba04;
        case 0x25ba08u: goto label_25ba08;
        case 0x25ba0cu: goto label_25ba0c;
        case 0x25ba10u: goto label_25ba10;
        case 0x25ba14u: goto label_25ba14;
        case 0x25ba18u: goto label_25ba18;
        case 0x25ba1cu: goto label_25ba1c;
        case 0x25ba20u: goto label_25ba20;
        case 0x25ba24u: goto label_25ba24;
        case 0x25ba28u: goto label_25ba28;
        case 0x25ba2cu: goto label_25ba2c;
        case 0x25ba30u: goto label_25ba30;
        case 0x25ba34u: goto label_25ba34;
        case 0x25ba38u: goto label_25ba38;
        case 0x25ba3cu: goto label_25ba3c;
        case 0x25ba40u: goto label_25ba40;
        case 0x25ba44u: goto label_25ba44;
        case 0x25ba48u: goto label_25ba48;
        case 0x25ba4cu: goto label_25ba4c;
        case 0x25ba50u: goto label_25ba50;
        case 0x25ba54u: goto label_25ba54;
        case 0x25ba58u: goto label_25ba58;
        case 0x25ba5cu: goto label_25ba5c;
        case 0x25ba60u: goto label_25ba60;
        case 0x25ba64u: goto label_25ba64;
        case 0x25ba68u: goto label_25ba68;
        case 0x25ba6cu: goto label_25ba6c;
        case 0x25ba70u: goto label_25ba70;
        case 0x25ba74u: goto label_25ba74;
        case 0x25ba78u: goto label_25ba78;
        case 0x25ba7cu: goto label_25ba7c;
        case 0x25ba80u: goto label_25ba80;
        case 0x25ba84u: goto label_25ba84;
        case 0x25ba88u: goto label_25ba88;
        case 0x25ba8cu: goto label_25ba8c;
        case 0x25ba90u: goto label_25ba90;
        case 0x25ba94u: goto label_25ba94;
        case 0x25ba98u: goto label_25ba98;
        case 0x25ba9cu: goto label_25ba9c;
        case 0x25baa0u: goto label_25baa0;
        case 0x25baa4u: goto label_25baa4;
        case 0x25baa8u: goto label_25baa8;
        case 0x25baacu: goto label_25baac;
        case 0x25bab0u: goto label_25bab0;
        case 0x25bab4u: goto label_25bab4;
        case 0x25bab8u: goto label_25bab8;
        case 0x25babcu: goto label_25babc;
        case 0x25bac0u: goto label_25bac0;
        case 0x25bac4u: goto label_25bac4;
        case 0x25bac8u: goto label_25bac8;
        case 0x25baccu: goto label_25bacc;
        case 0x25bad0u: goto label_25bad0;
        case 0x25bad4u: goto label_25bad4;
        case 0x25bad8u: goto label_25bad8;
        case 0x25badcu: goto label_25badc;
        case 0x25bae0u: goto label_25bae0;
        case 0x25bae4u: goto label_25bae4;
        case 0x25bae8u: goto label_25bae8;
        case 0x25baecu: goto label_25baec;
        case 0x25baf0u: goto label_25baf0;
        case 0x25baf4u: goto label_25baf4;
        case 0x25baf8u: goto label_25baf8;
        case 0x25bafcu: goto label_25bafc;
        case 0x25bb00u: goto label_25bb00;
        case 0x25bb04u: goto label_25bb04;
        case 0x25bb08u: goto label_25bb08;
        case 0x25bb0cu: goto label_25bb0c;
        case 0x25bb10u: goto label_25bb10;
        case 0x25bb14u: goto label_25bb14;
        case 0x25bb18u: goto label_25bb18;
        case 0x25bb1cu: goto label_25bb1c;
        case 0x25bb20u: goto label_25bb20;
        case 0x25bb24u: goto label_25bb24;
        case 0x25bb28u: goto label_25bb28;
        case 0x25bb2cu: goto label_25bb2c;
        case 0x25bb30u: goto label_25bb30;
        case 0x25bb34u: goto label_25bb34;
        case 0x25bb38u: goto label_25bb38;
        case 0x25bb3cu: goto label_25bb3c;
        case 0x25bb40u: goto label_25bb40;
        case 0x25bb44u: goto label_25bb44;
        case 0x25bb48u: goto label_25bb48;
        case 0x25bb4cu: goto label_25bb4c;
        case 0x25bb50u: goto label_25bb50;
        case 0x25bb54u: goto label_25bb54;
        case 0x25bb58u: goto label_25bb58;
        case 0x25bb5cu: goto label_25bb5c;
        case 0x25bb60u: goto label_25bb60;
        case 0x25bb64u: goto label_25bb64;
        case 0x25bb68u: goto label_25bb68;
        case 0x25bb6cu: goto label_25bb6c;
        case 0x25bb70u: goto label_25bb70;
        case 0x25bb74u: goto label_25bb74;
        case 0x25bb78u: goto label_25bb78;
        case 0x25bb7cu: goto label_25bb7c;
        case 0x25bb80u: goto label_25bb80;
        case 0x25bb84u: goto label_25bb84;
        case 0x25bb88u: goto label_25bb88;
        case 0x25bb8cu: goto label_25bb8c;
        case 0x25bb90u: goto label_25bb90;
        case 0x25bb94u: goto label_25bb94;
        case 0x25bb98u: goto label_25bb98;
        case 0x25bb9cu: goto label_25bb9c;
        case 0x25bba0u: goto label_25bba0;
        case 0x25bba4u: goto label_25bba4;
        case 0x25bba8u: goto label_25bba8;
        case 0x25bbacu: goto label_25bbac;
        case 0x25bbb0u: goto label_25bbb0;
        case 0x25bbb4u: goto label_25bbb4;
        case 0x25bbb8u: goto label_25bbb8;
        case 0x25bbbcu: goto label_25bbbc;
        case 0x25bbc0u: goto label_25bbc0;
        case 0x25bbc4u: goto label_25bbc4;
        case 0x25bbc8u: goto label_25bbc8;
        case 0x25bbccu: goto label_25bbcc;
        case 0x25bbd0u: goto label_25bbd0;
        case 0x25bbd4u: goto label_25bbd4;
        case 0x25bbd8u: goto label_25bbd8;
        case 0x25bbdcu: goto label_25bbdc;
        case 0x25bbe0u: goto label_25bbe0;
        case 0x25bbe4u: goto label_25bbe4;
        case 0x25bbe8u: goto label_25bbe8;
        case 0x25bbecu: goto label_25bbec;
        case 0x25bbf0u: goto label_25bbf0;
        case 0x25bbf4u: goto label_25bbf4;
        case 0x25bbf8u: goto label_25bbf8;
        case 0x25bbfcu: goto label_25bbfc;
        case 0x25bc00u: goto label_25bc00;
        case 0x25bc04u: goto label_25bc04;
        case 0x25bc08u: goto label_25bc08;
        case 0x25bc0cu: goto label_25bc0c;
        case 0x25bc10u: goto label_25bc10;
        case 0x25bc14u: goto label_25bc14;
        case 0x25bc18u: goto label_25bc18;
        case 0x25bc1cu: goto label_25bc1c;
        case 0x25bc20u: goto label_25bc20;
        case 0x25bc24u: goto label_25bc24;
        case 0x25bc28u: goto label_25bc28;
        case 0x25bc2cu: goto label_25bc2c;
        case 0x25bc30u: goto label_25bc30;
        case 0x25bc34u: goto label_25bc34;
        case 0x25bc38u: goto label_25bc38;
        case 0x25bc3cu: goto label_25bc3c;
        case 0x25bc40u: goto label_25bc40;
        case 0x25bc44u: goto label_25bc44;
        case 0x25bc48u: goto label_25bc48;
        case 0x25bc4cu: goto label_25bc4c;
        case 0x25bc50u: goto label_25bc50;
        case 0x25bc54u: goto label_25bc54;
        case 0x25bc58u: goto label_25bc58;
        case 0x25bc5cu: goto label_25bc5c;
        case 0x25bc60u: goto label_25bc60;
        case 0x25bc64u: goto label_25bc64;
        case 0x25bc68u: goto label_25bc68;
        case 0x25bc6cu: goto label_25bc6c;
        case 0x25bc70u: goto label_25bc70;
        case 0x25bc74u: goto label_25bc74;
        case 0x25bc78u: goto label_25bc78;
        case 0x25bc7cu: goto label_25bc7c;
        case 0x25bc80u: goto label_25bc80;
        case 0x25bc84u: goto label_25bc84;
        case 0x25bc88u: goto label_25bc88;
        case 0x25bc8cu: goto label_25bc8c;
        case 0x25bc90u: goto label_25bc90;
        case 0x25bc94u: goto label_25bc94;
        case 0x25bc98u: goto label_25bc98;
        case 0x25bc9cu: goto label_25bc9c;
        case 0x25bca0u: goto label_25bca0;
        case 0x25bca4u: goto label_25bca4;
        case 0x25bca8u: goto label_25bca8;
        case 0x25bcacu: goto label_25bcac;
        case 0x25bcb0u: goto label_25bcb0;
        case 0x25bcb4u: goto label_25bcb4;
        case 0x25bcb8u: goto label_25bcb8;
        case 0x25bcbcu: goto label_25bcbc;
        case 0x25bcc0u: goto label_25bcc0;
        case 0x25bcc4u: goto label_25bcc4;
        case 0x25bcc8u: goto label_25bcc8;
        case 0x25bcccu: goto label_25bccc;
        case 0x25bcd0u: goto label_25bcd0;
        case 0x25bcd4u: goto label_25bcd4;
        case 0x25bcd8u: goto label_25bcd8;
        case 0x25bcdcu: goto label_25bcdc;
        case 0x25bce0u: goto label_25bce0;
        case 0x25bce4u: goto label_25bce4;
        case 0x25bce8u: goto label_25bce8;
        case 0x25bcecu: goto label_25bcec;
        case 0x25bcf0u: goto label_25bcf0;
        case 0x25bcf4u: goto label_25bcf4;
        case 0x25bcf8u: goto label_25bcf8;
        case 0x25bcfcu: goto label_25bcfc;
        case 0x25bd00u: goto label_25bd00;
        case 0x25bd04u: goto label_25bd04;
        case 0x25bd08u: goto label_25bd08;
        case 0x25bd0cu: goto label_25bd0c;
        case 0x25bd10u: goto label_25bd10;
        case 0x25bd14u: goto label_25bd14;
        case 0x25bd18u: goto label_25bd18;
        case 0x25bd1cu: goto label_25bd1c;
        case 0x25bd20u: goto label_25bd20;
        case 0x25bd24u: goto label_25bd24;
        case 0x25bd28u: goto label_25bd28;
        case 0x25bd2cu: goto label_25bd2c;
        case 0x25bd30u: goto label_25bd30;
        case 0x25bd34u: goto label_25bd34;
        case 0x25bd38u: goto label_25bd38;
        case 0x25bd3cu: goto label_25bd3c;
        case 0x25bd40u: goto label_25bd40;
        case 0x25bd44u: goto label_25bd44;
        case 0x25bd48u: goto label_25bd48;
        case 0x25bd4cu: goto label_25bd4c;
        case 0x25bd50u: goto label_25bd50;
        case 0x25bd54u: goto label_25bd54;
        case 0x25bd58u: goto label_25bd58;
        case 0x25bd5cu: goto label_25bd5c;
        case 0x25bd60u: goto label_25bd60;
        case 0x25bd64u: goto label_25bd64;
        case 0x25bd68u: goto label_25bd68;
        case 0x25bd6cu: goto label_25bd6c;
        case 0x25bd70u: goto label_25bd70;
        case 0x25bd74u: goto label_25bd74;
        case 0x25bd78u: goto label_25bd78;
        case 0x25bd7cu: goto label_25bd7c;
        case 0x25bd80u: goto label_25bd80;
        case 0x25bd84u: goto label_25bd84;
        case 0x25bd88u: goto label_25bd88;
        case 0x25bd8cu: goto label_25bd8c;
        case 0x25bd90u: goto label_25bd90;
        case 0x25bd94u: goto label_25bd94;
        case 0x25bd98u: goto label_25bd98;
        case 0x25bd9cu: goto label_25bd9c;
        case 0x25bda0u: goto label_25bda0;
        case 0x25bda4u: goto label_25bda4;
        case 0x25bda8u: goto label_25bda8;
        case 0x25bdacu: goto label_25bdac;
        case 0x25bdb0u: goto label_25bdb0;
        case 0x25bdb4u: goto label_25bdb4;
        case 0x25bdb8u: goto label_25bdb8;
        case 0x25bdbcu: goto label_25bdbc;
        case 0x25bdc0u: goto label_25bdc0;
        case 0x25bdc4u: goto label_25bdc4;
        case 0x25bdc8u: goto label_25bdc8;
        case 0x25bdccu: goto label_25bdcc;
        case 0x25bdd0u: goto label_25bdd0;
        case 0x25bdd4u: goto label_25bdd4;
        case 0x25bdd8u: goto label_25bdd8;
        case 0x25bddcu: goto label_25bddc;
        case 0x25bde0u: goto label_25bde0;
        case 0x25bde4u: goto label_25bde4;
        case 0x25bde8u: goto label_25bde8;
        case 0x25bdecu: goto label_25bdec;
        case 0x25bdf0u: goto label_25bdf0;
        case 0x25bdf4u: goto label_25bdf4;
        case 0x25bdf8u: goto label_25bdf8;
        case 0x25bdfcu: goto label_25bdfc;
        case 0x25be00u: goto label_25be00;
        case 0x25be04u: goto label_25be04;
        case 0x25be08u: goto label_25be08;
        case 0x25be0cu: goto label_25be0c;
        case 0x25be10u: goto label_25be10;
        case 0x25be14u: goto label_25be14;
        case 0x25be18u: goto label_25be18;
        case 0x25be1cu: goto label_25be1c;
        case 0x25be20u: goto label_25be20;
        case 0x25be24u: goto label_25be24;
        case 0x25be28u: goto label_25be28;
        case 0x25be2cu: goto label_25be2c;
        case 0x25be30u: goto label_25be30;
        case 0x25be34u: goto label_25be34;
        case 0x25be38u: goto label_25be38;
        case 0x25be3cu: goto label_25be3c;
        case 0x25be40u: goto label_25be40;
        case 0x25be44u: goto label_25be44;
        case 0x25be48u: goto label_25be48;
        case 0x25be4cu: goto label_25be4c;
        case 0x25be50u: goto label_25be50;
        case 0x25be54u: goto label_25be54;
        case 0x25be58u: goto label_25be58;
        case 0x25be5cu: goto label_25be5c;
        case 0x25be60u: goto label_25be60;
        case 0x25be64u: goto label_25be64;
        case 0x25be68u: goto label_25be68;
        case 0x25be6cu: goto label_25be6c;
        case 0x25be70u: goto label_25be70;
        case 0x25be74u: goto label_25be74;
        case 0x25be78u: goto label_25be78;
        case 0x25be7cu: goto label_25be7c;
        case 0x25be80u: goto label_25be80;
        case 0x25be84u: goto label_25be84;
        case 0x25be88u: goto label_25be88;
        case 0x25be8cu: goto label_25be8c;
        case 0x25be90u: goto label_25be90;
        case 0x25be94u: goto label_25be94;
        case 0x25be98u: goto label_25be98;
        case 0x25be9cu: goto label_25be9c;
        case 0x25bea0u: goto label_25bea0;
        case 0x25bea4u: goto label_25bea4;
        case 0x25bea8u: goto label_25bea8;
        case 0x25beacu: goto label_25beac;
        case 0x25beb0u: goto label_25beb0;
        case 0x25beb4u: goto label_25beb4;
        case 0x25beb8u: goto label_25beb8;
        case 0x25bebcu: goto label_25bebc;
        case 0x25bec0u: goto label_25bec0;
        case 0x25bec4u: goto label_25bec4;
        case 0x25bec8u: goto label_25bec8;
        case 0x25beccu: goto label_25becc;
        case 0x25bed0u: goto label_25bed0;
        case 0x25bed4u: goto label_25bed4;
        case 0x25bed8u: goto label_25bed8;
        case 0x25bedcu: goto label_25bedc;
        case 0x25bee0u: goto label_25bee0;
        case 0x25bee4u: goto label_25bee4;
        case 0x25bee8u: goto label_25bee8;
        case 0x25beecu: goto label_25beec;
        case 0x25bef0u: goto label_25bef0;
        case 0x25bef4u: goto label_25bef4;
        case 0x25bef8u: goto label_25bef8;
        case 0x25befcu: goto label_25befc;
        case 0x25bf00u: goto label_25bf00;
        case 0x25bf04u: goto label_25bf04;
        case 0x25bf08u: goto label_25bf08;
        case 0x25bf0cu: goto label_25bf0c;
        case 0x25bf10u: goto label_25bf10;
        case 0x25bf14u: goto label_25bf14;
        case 0x25bf18u: goto label_25bf18;
        case 0x25bf1cu: goto label_25bf1c;
        case 0x25bf20u: goto label_25bf20;
        case 0x25bf24u: goto label_25bf24;
        case 0x25bf28u: goto label_25bf28;
        case 0x25bf2cu: goto label_25bf2c;
        case 0x25bf30u: goto label_25bf30;
        case 0x25bf34u: goto label_25bf34;
        case 0x25bf38u: goto label_25bf38;
        case 0x25bf3cu: goto label_25bf3c;
        case 0x25bf40u: goto label_25bf40;
        case 0x25bf44u: goto label_25bf44;
        case 0x25bf48u: goto label_25bf48;
        case 0x25bf4cu: goto label_25bf4c;
        case 0x25bf50u: goto label_25bf50;
        case 0x25bf54u: goto label_25bf54;
        case 0x25bf58u: goto label_25bf58;
        case 0x25bf5cu: goto label_25bf5c;
        case 0x25bf60u: goto label_25bf60;
        case 0x25bf64u: goto label_25bf64;
        case 0x25bf68u: goto label_25bf68;
        case 0x25bf6cu: goto label_25bf6c;
        case 0x25bf70u: goto label_25bf70;
        case 0x25bf74u: goto label_25bf74;
        case 0x25bf78u: goto label_25bf78;
        case 0x25bf7cu: goto label_25bf7c;
        case 0x25bf80u: goto label_25bf80;
        case 0x25bf84u: goto label_25bf84;
        case 0x25bf88u: goto label_25bf88;
        case 0x25bf8cu: goto label_25bf8c;
        case 0x25bf90u: goto label_25bf90;
        case 0x25bf94u: goto label_25bf94;
        case 0x25bf98u: goto label_25bf98;
        case 0x25bf9cu: goto label_25bf9c;
        case 0x25bfa0u: goto label_25bfa0;
        case 0x25bfa4u: goto label_25bfa4;
        case 0x25bfa8u: goto label_25bfa8;
        case 0x25bfacu: goto label_25bfac;
        case 0x25bfb0u: goto label_25bfb0;
        case 0x25bfb4u: goto label_25bfb4;
        case 0x25bfb8u: goto label_25bfb8;
        case 0x25bfbcu: goto label_25bfbc;
        case 0x25bfc0u: goto label_25bfc0;
        case 0x25bfc4u: goto label_25bfc4;
        case 0x25bfc8u: goto label_25bfc8;
        case 0x25bfccu: goto label_25bfcc;
        case 0x25bfd0u: goto label_25bfd0;
        case 0x25bfd4u: goto label_25bfd4;
        case 0x25bfd8u: goto label_25bfd8;
        case 0x25bfdcu: goto label_25bfdc;
        case 0x25bfe0u: goto label_25bfe0;
        case 0x25bfe4u: goto label_25bfe4;
        case 0x25bfe8u: goto label_25bfe8;
        case 0x25bfecu: goto label_25bfec;
        case 0x25bff0u: goto label_25bff0;
        case 0x25bff4u: goto label_25bff4;
        case 0x25bff8u: goto label_25bff8;
        case 0x25bffcu: goto label_25bffc;
        case 0x25c000u: goto label_25c000;
        case 0x25c004u: goto label_25c004;
        case 0x25c008u: goto label_25c008;
        case 0x25c00cu: goto label_25c00c;
        case 0x25c010u: goto label_25c010;
        case 0x25c014u: goto label_25c014;
        case 0x25c018u: goto label_25c018;
        case 0x25c01cu: goto label_25c01c;
        case 0x25c020u: goto label_25c020;
        case 0x25c024u: goto label_25c024;
        case 0x25c028u: goto label_25c028;
        case 0x25c02cu: goto label_25c02c;
        case 0x25c030u: goto label_25c030;
        case 0x25c034u: goto label_25c034;
        case 0x25c038u: goto label_25c038;
        case 0x25c03cu: goto label_25c03c;
        case 0x25c040u: goto label_25c040;
        case 0x25c044u: goto label_25c044;
        case 0x25c048u: goto label_25c048;
        case 0x25c04cu: goto label_25c04c;
        case 0x25c050u: goto label_25c050;
        case 0x25c054u: goto label_25c054;
        case 0x25c058u: goto label_25c058;
        case 0x25c05cu: goto label_25c05c;
        case 0x25c060u: goto label_25c060;
        case 0x25c064u: goto label_25c064;
        case 0x25c068u: goto label_25c068;
        case 0x25c06cu: goto label_25c06c;
        case 0x25c070u: goto label_25c070;
        case 0x25c074u: goto label_25c074;
        case 0x25c078u: goto label_25c078;
        case 0x25c07cu: goto label_25c07c;
        case 0x25c080u: goto label_25c080;
        case 0x25c084u: goto label_25c084;
        case 0x25c088u: goto label_25c088;
        case 0x25c08cu: goto label_25c08c;
        case 0x25c090u: goto label_25c090;
        case 0x25c094u: goto label_25c094;
        case 0x25c098u: goto label_25c098;
        case 0x25c09cu: goto label_25c09c;
        case 0x25c0a0u: goto label_25c0a0;
        case 0x25c0a4u: goto label_25c0a4;
        case 0x25c0a8u: goto label_25c0a8;
        case 0x25c0acu: goto label_25c0ac;
        case 0x25c0b0u: goto label_25c0b0;
        case 0x25c0b4u: goto label_25c0b4;
        case 0x25c0b8u: goto label_25c0b8;
        case 0x25c0bcu: goto label_25c0bc;
        case 0x25c0c0u: goto label_25c0c0;
        case 0x25c0c4u: goto label_25c0c4;
        case 0x25c0c8u: goto label_25c0c8;
        case 0x25c0ccu: goto label_25c0cc;
        case 0x25c0d0u: goto label_25c0d0;
        case 0x25c0d4u: goto label_25c0d4;
        case 0x25c0d8u: goto label_25c0d8;
        case 0x25c0dcu: goto label_25c0dc;
        case 0x25c0e0u: goto label_25c0e0;
        case 0x25c0e4u: goto label_25c0e4;
        default: break;
    }

    ctx->pc = 0x25b9f8u;

label_25b9f8:
    // 0x25b9f8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x25b9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_25b9fc:
    // 0x25b9fc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x25b9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_25ba00:
    // 0x25ba00: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x25ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_25ba04:
    // 0x25ba04: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25ba04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25ba08:
    // 0x25ba08: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x25ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_25ba0c:
    // 0x25ba0c: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x25ba0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ba10:
    // 0x25ba10: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x25ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_25ba14:
    // 0x25ba14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ba14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25ba18:
    // 0x25ba18: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x25ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_25ba1c:
    // 0x25ba1c: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25ba1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25ba20:
    // 0x25ba20: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x25ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_25ba24:
    // 0x25ba24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ba28:
    // 0x25ba28: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x25ba28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_25ba2c:
    // 0x25ba2c: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x25ba2cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
label_25ba30:
    // 0x25ba30: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x25ba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_25ba34:
    // 0x25ba34: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25ba34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_25ba38:
    // 0x25ba38: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x25ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_25ba3c:
    // 0x25ba3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25ba40:
    // 0x25ba40: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x25ba40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_25ba44:
    // 0x25ba44: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x25ba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_25ba48:
    // 0x25ba48: 0xc041532  jal         func_1054C8
label_25ba4c:
    if (ctx->pc == 0x25BA4Cu) {
        ctx->pc = 0x25BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA48u;
        // 0x25ba4c: 0x8e3600d8  lw          $s6, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA50u;
        goto label_25ba50;
    }
    ctx->pc = 0x25BA48u;
    SET_GPR_U32(ctx, 31, 0x25BA50u);
    ctx->pc = 0x25BA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA48u;
    // 0x25ba4c: 0x8e3600d8  lw          $s6, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25BA48u, 0x25BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA50u;
label_25ba50:
    // 0x25ba50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ba54:
    // 0x25ba54: 0xc041532  jal         func_1054C8
label_25ba58:
    if (ctx->pc == 0x25BA58u) {
        ctx->pc = 0x25BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA54u;
        // 0x25ba58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA5Cu;
        goto label_25ba5c;
    }
    ctx->pc = 0x25BA54u;
    SET_GPR_U32(ctx, 31, 0x25BA5Cu);
    ctx->pc = 0x25BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA54u;
    // 0x25ba58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25BA54u, 0x25BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA5Cu;
label_25ba5c:
    // 0x25ba5c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25ba5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ba60:
    // 0x25ba60: 0xc088e60  jal         func_223980
label_25ba64:
    if (ctx->pc == 0x25BA64u) {
        ctx->pc = 0x25BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA60u;
        // 0x25ba64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA68u;
        goto label_25ba68;
    }
    ctx->pc = 0x25BA60u;
    SET_GPR_U32(ctx, 31, 0x25BA68u);
    ctx->pc = 0x25BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA60u;
    // 0x25ba64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x25BA60u, 0x25BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA68u;
label_25ba68:
    // 0x25ba68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_25ba6c:
    if (ctx->pc == 0x25BA6Cu) {
        ctx->pc = 0x25BA70u;
        goto label_25ba70;
    }
    ctx->pc = 0x25BA68u;
    {
        const bool branch_taken_0x25ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ba68) {
            ctx->pc = 0x25BA80u;
            goto label_25ba80;
        }
    }
    ctx->pc = 0x25BA70u;
label_25ba70:
    // 0x25ba70: 0xc088e48  jal         func_223920
label_25ba74:
    if (ctx->pc == 0x25BA74u) {
        ctx->pc = 0x25BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA70u;
        // 0x25ba74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA78u;
        goto label_25ba78;
    }
    ctx->pc = 0x25BA70u;
    SET_GPR_U32(ctx, 31, 0x25BA78u);
    ctx->pc = 0x25BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA70u;
    // 0x25ba74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x25BA70u, 0x25BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA78u;
label_25ba78:
    // 0x25ba78: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_25ba7c:
    if (ctx->pc == 0x25BA7Cu) {
        ctx->pc = 0x25BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA78u;
        // 0x25ba7c: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA80u;
        goto label_25ba80;
    }
    ctx->pc = 0x25BA78u;
    {
        const bool branch_taken_0x25ba78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ba78) {
            ctx->pc = 0x25BA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BA78u;
            // 0x25ba7c: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BB40u;
            goto label_25bb40;
        }
    }
    ctx->pc = 0x25BA80u;
label_25ba80:
    // 0x25ba80: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_25ba84:
    if (ctx->pc == 0x25BA84u) {
        ctx->pc = 0x25BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA80u;
        // 0x25ba84: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA88u;
        goto label_25ba88;
    }
    ctx->pc = 0x25BA80u;
    {
        const bool branch_taken_0x25ba80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA80u;
        // 0x25ba84: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba80) {
            ctx->pc = 0x25BAA0u;
            goto label_25baa0;
        }
    }
    ctx->pc = 0x25BA88u;
label_25ba88:
    // 0x25ba88: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25ba88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25ba8c:
    // 0x25ba8c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25ba8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25ba90:
    // 0x25ba90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25ba90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_25ba94:
    // 0x25ba94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25ba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25ba98:
    // 0x25ba98: 0xc041b20  jal         func_106C80
label_25ba9c:
    if (ctx->pc == 0x25BA9Cu) {
        ctx->pc = 0x25BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA98u;
        // 0x25ba9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAA0u;
        goto label_25baa0;
    }
    ctx->pc = 0x25BA98u;
    SET_GPR_U32(ctx, 31, 0x25BAA0u);
    ctx->pc = 0x25BA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA98u;
    // 0x25ba9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25BA98u, 0x25BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BAA0u;
label_25baa0:
    // 0x25baa0: 0xc05d484  jal         func_175210
label_25baa4:
    if (ctx->pc == 0x25BAA4u) {
        ctx->pc = 0x25BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAA0u;
        // 0x25baa4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAA8u;
        goto label_25baa8;
    }
    ctx->pc = 0x25BAA0u;
    SET_GPR_U32(ctx, 31, 0x25BAA8u);
    ctx->pc = 0x25BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BAA0u;
    // 0x25baa4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25BAA0u, 0x25BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BAA8u;
label_25baa8:
    // 0x25baa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25baac:
    // 0x25baac: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25baacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25bab0:
    // 0x25bab0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25bab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25bab4:
    // 0x25bab4: 0xa0f809  jalr        $a1
label_25bab8:
    if (ctx->pc == 0x25BAB8u) {
        ctx->pc = 0x25BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAB4u;
        // 0x25bab8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BABCu;
        goto label_25babc;
    }
    ctx->pc = 0x25BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25BABCu);
        ctx->pc = 0x25BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAB4u;
        // 0x25bab8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BAB4u, 0x25BABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BABCu;
label_25babc:
    // 0x25babc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25babcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25bac0:
    // 0x25bac0: 0xc087016  jal         func_21C058
label_25bac4:
    if (ctx->pc == 0x25BAC4u) {
        ctx->pc = 0x25BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAC0u;
        // 0x25bac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAC8u;
        goto label_25bac8;
    }
    ctx->pc = 0x25BAC0u;
    SET_GPR_U32(ctx, 31, 0x25BAC8u);
    ctx->pc = 0x25BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BAC0u;
    // 0x25bac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25BAC0u, 0x25BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BAC8u;
label_25bac8:
    // 0x25bac8: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_25bacc:
    if (ctx->pc == 0x25BACCu) {
        ctx->pc = 0x25BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAC8u;
        // 0x25bacc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAD0u;
        goto label_25bad0;
    }
    ctx->pc = 0x25BAC8u;
    {
        const bool branch_taken_0x25bac8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAC8u;
        // 0x25bacc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bac8) {
            ctx->pc = 0x25BB08u;
            goto label_25bb08;
        }
    }
    ctx->pc = 0x25BAD0u;
label_25bad0:
    // 0x25bad0: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25bad4:
    // 0x25bad4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x25bad4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25bad8:
    // 0x25bad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25bad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25badc:
    // 0x25badc: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x25badcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_25bae0:
    // 0x25bae0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x25bae0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bae4:
    // 0x25bae4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25bae8:
    // 0x25bae8: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25bae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25baec:
    // 0x25baec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x25baecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25baf0:
    // 0x25baf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25baf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25baf4:
    // 0x25baf4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25baf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25baf8:
    // 0x25baf8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25baf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_25bafc:
    // 0x25bafc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25bafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25bb00:
    // 0x25bb00: 0xc041bd4  jal         func_106F50
label_25bb04:
    if (ctx->pc == 0x25BB04u) {
        ctx->pc = 0x25BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB00u;
        // 0x25bb04: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB08u;
        goto label_25bb08;
    }
    ctx->pc = 0x25BB00u;
    SET_GPR_U32(ctx, 31, 0x25BB08u);
    ctx->pc = 0x25BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB00u;
    // 0x25bb04: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x25BB00u, 0x25BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB08u;
label_25bb08:
    // 0x25bb08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25bb0c:
    // 0x25bb0c: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x25bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_25bb10:
    // 0x25bb10: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25bb10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25bb14:
    // 0x25bb14: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25bb18:
    // 0x25bb18: 0x60f809  jalr        $v1
label_25bb1c:
    if (ctx->pc == 0x25BB1Cu) {
        ctx->pc = 0x25BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB18u;
        // 0x25bb1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB20u;
        goto label_25bb20;
    }
    ctx->pc = 0x25BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25BB20u);
        ctx->pc = 0x25BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB18u;
        // 0x25bb1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BB18u, 0x25BB20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BB20u;
label_25bb20:
    // 0x25bb20: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x25bb20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25bb24:
    // 0x25bb24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25bb28:
    // 0x25bb28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25bb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25bb2c:
    // 0x25bb2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25bb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25bb30:
    // 0x25bb30: 0xc05d53a  jal         func_1754E8
label_25bb34:
    if (ctx->pc == 0x25BB34u) {
        ctx->pc = 0x25BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB30u;
        // 0x25bb34: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB38u;
        goto label_25bb38;
    }
    ctx->pc = 0x25BB30u;
    SET_GPR_U32(ctx, 31, 0x25BB38u);
    ctx->pc = 0x25BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB30u;
    // 0x25bb34: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25BB30u, 0x25BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB38u;
label_25bb38:
    // 0x25bb38: 0x10000157  b           . + 4 + (0x157 << 2)
label_25bb3c:
    if (ctx->pc == 0x25BB3Cu) {
        ctx->pc = 0x25BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB38u;
        // 0x25bb3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB40u;
        goto label_25bb40;
    }
    ctx->pc = 0x25BB38u;
    {
        const bool branch_taken_0x25bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB38u;
        // 0x25bb3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb38) {
            ctx->pc = 0x25C098u;
            goto label_25c098;
        }
    }
    ctx->pc = 0x25BB40u;
label_25bb40:
    // 0x25bb40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25bb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25bb44:
    // 0x25bb44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25bb44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bb48:
    // 0x25bb48: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x25bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_25bb4c:
    // 0x25bb4c: 0xc05d484  jal         func_175210
label_25bb50:
    if (ctx->pc == 0x25BB50u) {
        ctx->pc = 0x25BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB4Cu;
        // 0x25bb50: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB54u;
        goto label_25bb54;
    }
    ctx->pc = 0x25BB4Cu;
    SET_GPR_U32(ctx, 31, 0x25BB54u);
    ctx->pc = 0x25BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB4Cu;
    // 0x25bb50: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25BB4Cu, 0x25BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB54u;
label_25bb54:
    // 0x25bb54: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25bb58:
    // 0x25bb58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25bb58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25bb5c:
    // 0x25bb5c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x25bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_25bb60:
    // 0x25bb60: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x25bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_25bb64:
    // 0x25bb64: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
label_25bb68:
    if (ctx->pc == 0x25BB68u) {
        ctx->pc = 0x25BB6Cu;
        goto label_25bb6c;
    }
    ctx->pc = 0x25BB64u;
    {
        const bool branch_taken_0x25bb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x25bb64) {
            ctx->pc = 0x25BB90u;
            goto label_25bb90;
        }
    }
    ctx->pc = 0x25BB6Cu;
label_25bb6c:
    // 0x25bb6c: 0xc08c6a0  jal         func_231A80
label_25bb70:
    if (ctx->pc == 0x25BB70u) {
        ctx->pc = 0x25BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB6Cu;
        // 0x25bb70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB74u;
        goto label_25bb74;
    }
    ctx->pc = 0x25BB6Cu;
    SET_GPR_U32(ctx, 31, 0x25BB74u);
    ctx->pc = 0x25BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB6Cu;
    // 0x25bb70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x25BB6Cu, 0x25BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB74u;
label_25bb74:
    // 0x25bb74: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x25bb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_25bb78:
    // 0x25bb78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25bb7c:
    if (ctx->pc == 0x25BB7Cu) {
        ctx->pc = 0x25BB80u;
        goto label_25bb80;
    }
    ctx->pc = 0x25BB78u;
    {
        const bool branch_taken_0x25bb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb78) {
            ctx->pc = 0x25BB90u;
            goto label_25bb90;
        }
    }
    ctx->pc = 0x25BB80u;
label_25bb80:
    // 0x25bb80: 0xc08c6a0  jal         func_231A80
label_25bb84:
    if (ctx->pc == 0x25BB84u) {
        ctx->pc = 0x25BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB80u;
        // 0x25bb84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB88u;
        goto label_25bb88;
    }
    ctx->pc = 0x25BB80u;
    SET_GPR_U32(ctx, 31, 0x25BB88u);
    ctx->pc = 0x25BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB80u;
    // 0x25bb84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x25BB80u, 0x25BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB88u;
label_25bb88:
    // 0x25bb88: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x25bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_25bb8c:
    // 0x25bb8c: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x25bb8cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25bb90:
    // 0x25bb90: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
label_25bb94:
    if (ctx->pc == 0x25BB94u) {
        ctx->pc = 0x25BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB90u;
        // 0x25bb94: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB98u;
        goto label_25bb98;
    }
    ctx->pc = 0x25BB90u;
    {
        const bool branch_taken_0x25bb90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb90) {
            ctx->pc = 0x25BB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BB90u;
            // 0x25bb94: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BBA0u;
            goto label_25bba0;
        }
    }
    ctx->pc = 0x25BB98u;
label_25bb98:
    // 0x25bb98: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_25bb9c:
    if (ctx->pc == 0x25BB9Cu) {
        ctx->pc = 0x25BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB98u;
        // 0x25bb9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBA0u;
        goto label_25bba0;
    }
    ctx->pc = 0x25BB98u;
    {
        const bool branch_taken_0x25bb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB98u;
        // 0x25bb9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb98) {
            ctx->pc = 0x25BE60u;
            goto label_25be60;
        }
    }
    ctx->pc = 0x25BBA0u;
label_25bba0:
    // 0x25bba0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x25bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_25bba4:
    // 0x25bba4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x25bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_25bba8:
    // 0x25bba8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_25bbac:
    if (ctx->pc == 0x25BBACu) {
        ctx->pc = 0x25BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBA8u;
        // 0x25bbac: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBB0u;
        goto label_25bbb0;
    }
    ctx->pc = 0x25BBA8u;
    {
        const bool branch_taken_0x25bba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x25BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBA8u;
        // 0x25bbac: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bba8) {
            ctx->pc = 0x25BBBCu;
            goto label_25bbbc;
        }
    }
    ctx->pc = 0x25BBB0u;
label_25bbb0:
    // 0x25bbb0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x25bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25bbb4:
    // 0x25bbb4: 0x546200ab  bnel        $v1, $v0, . + 4 + (0xAB << 2)
label_25bbb8:
    if (ctx->pc == 0x25BBB8u) {
        ctx->pc = 0x25BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBB4u;
        // 0x25bbb8: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBBCu;
        goto label_25bbbc;
    }
    ctx->pc = 0x25BBB4u;
    {
        const bool branch_taken_0x25bbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25bbb4) {
            ctx->pc = 0x25BBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BBB4u;
            // 0x25bbb8: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE64u;
            goto label_25be64;
        }
    }
    ctx->pc = 0x25BBBCu;
label_25bbbc:
    // 0x25bbbc: 0xc0874fa  jal         func_21D3E8
label_25bbc0:
    if (ctx->pc == 0x25BBC0u) {
        ctx->pc = 0x25BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBBCu;
        // 0x25bbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBC4u;
        goto label_25bbc4;
    }
    ctx->pc = 0x25BBBCu;
    SET_GPR_U32(ctx, 31, 0x25BBC4u);
    ctx->pc = 0x25BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBBCu;
    // 0x25bbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25BBBCu, 0x25BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BBC4u;
label_25bbc4:
    // 0x25bbc4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25bbc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25bbc8:
    // 0x25bbc8: 0x5060005a  beql        $v1, $zero, . + 4 + (0x5A << 2)
label_25bbcc:
    if (ctx->pc == 0x25BBCCu) {
        ctx->pc = 0x25BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBC8u;
        // 0x25bbcc: 0x86250092  lh          $a1, 0x92($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBD0u;
        goto label_25bbd0;
    }
    ctx->pc = 0x25BBC8u;
    {
        const bool branch_taken_0x25bbc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bbc8) {
            ctx->pc = 0x25BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BBC8u;
            // 0x25bbcc: 0x86250092  lh          $a1, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD34u;
            goto label_25bd34;
        }
    }
    ctx->pc = 0x25BBD0u;
label_25bbd0:
    // 0x25bbd0: 0xc0874fa  jal         func_21D3E8
label_25bbd4:
    if (ctx->pc == 0x25BBD4u) {
        ctx->pc = 0x25BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBD0u;
        // 0x25bbd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBD8u;
        goto label_25bbd8;
    }
    ctx->pc = 0x25BBD0u;
    SET_GPR_U32(ctx, 31, 0x25BBD8u);
    ctx->pc = 0x25BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBD0u;
    // 0x25bbd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25BBD0u, 0x25BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BBD8u;
label_25bbd8:
    // 0x25bbd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25bbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25bbdc:
    // 0x25bbdc: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x25bbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_25bbe0:
    // 0x25bbe0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x25bbe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_25bbe4:
    // 0x25bbe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bbe8:
    // 0x25bbe8: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x25bbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_25bbec:
    // 0x25bbec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25bbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25bbf0:
    // 0x25bbf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25bbf4:
    // 0x25bbf4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25bbf8:
    // 0x25bbf8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x25bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bbfc:
    // 0x25bbfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25bbfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bc00:
    // 0x25bc00: 0x0  nop
    ctx->pc = 0x25bc00u;
    // NOP
label_25bc04:
    // 0x25bc04: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
label_25bc08:
    if (ctx->pc == 0x25BC08u) {
        ctx->pc = 0x25BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC04u;
        // 0x25bc08: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC0Cu;
        goto label_25bc0c;
    }
    ctx->pc = 0x25BC04u;
    {
        const bool branch_taken_0x25bc04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC04u;
        // 0x25bc08: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc04) {
            ctx->pc = 0x25BCFCu;
            goto label_25bcfc;
        }
    }
    ctx->pc = 0x25BC0Cu;
label_25bc0c:
    // 0x25bc0c: 0xc0cd8ec  jal         func_3363B0
label_25bc10:
    if (ctx->pc == 0x25BC10u) {
        ctx->pc = 0x25BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC0Cu;
        // 0x25bc10: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC14u;
        goto label_25bc14;
    }
    ctx->pc = 0x25BC0Cu;
    SET_GPR_U32(ctx, 31, 0x25BC14u);
    ctx->pc = 0x25BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC0Cu;
    // 0x25bc10: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x25BC0Cu, 0x25BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC14u;
label_25bc14:
    // 0x25bc14: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x25bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25bc18:
    // 0x25bc18: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x25bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_25bc1c:
    // 0x25bc1c: 0xc0cd5ea  jal         func_3357A8
label_25bc20:
    if (ctx->pc == 0x25BC20u) {
        ctx->pc = 0x25BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC1Cu;
        // 0x25bc20: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC24u;
        goto label_25bc24;
    }
    ctx->pc = 0x25BC1Cu;
    SET_GPR_U32(ctx, 31, 0x25BC24u);
    ctx->pc = 0x25BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC1Cu;
    // 0x25bc20: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x25BC1Cu, 0x25BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC24u;
label_25bc24:
    // 0x25bc24: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x25bc24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_25bc28:
    // 0x25bc28: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x25bc28u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_25bc2c:
    // 0x25bc2c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x25bc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_25bc30:
    // 0x25bc30: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bc30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bc34:
    // 0x25bc34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25bc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25bc38:
    // 0x25bc38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25bc3c:
    // 0x25bc3c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25bc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_25bc40:
    // 0x25bc40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bc40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bc44:
    // 0x25bc44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25bc44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_25bc48:
    // 0x25bc48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25bc4c:
    // 0x25bc4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc50:
    // 0x25bc50: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x25bc50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25bc54:
    // 0x25bc54: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x25bc54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bc58:
    // 0x25bc58: 0x0  nop
    ctx->pc = 0x25bc58u;
    // NOP
label_25bc5c:
    // 0x25bc5c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_25bc60:
    if (ctx->pc == 0x25BC60u) {
        ctx->pc = 0x25BC64u;
        goto label_25bc64;
    }
    ctx->pc = 0x25BC5Cu;
    {
        const bool branch_taken_0x25bc5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bc5c) {
            ctx->pc = 0x25BC78u;
            goto label_25bc78;
        }
    }
    ctx->pc = 0x25BC64u;
label_25bc64:
    // 0x25bc64: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25bc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_25bc68:
    // 0x25bc68: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bc68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bc6c:
    // 0x25bc6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bc6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bc70:
    // 0x25bc70: 0x0  nop
    ctx->pc = 0x25bc70u;
    // NOP
label_25bc74:
    // 0x25bc74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25bc74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25bc78:
    // 0x25bc78: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x25bc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_25bc7c:
    // 0x25bc7c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bc7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bc80:
    // 0x25bc80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x25bc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_25bc84:
    // 0x25bc84: 0x0  nop
    ctx->pc = 0x25bc84u;
    // NOP
label_25bc88:
    // 0x25bc88: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x25bc88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bc8c:
    // 0x25bc8c: 0x0  nop
    ctx->pc = 0x25bc8cu;
    // NOP
label_25bc90:
    // 0x25bc90: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_25bc94:
    if (ctx->pc == 0x25BC94u) {
        ctx->pc = 0x25BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC90u;
        // 0x25bc94: 0x46020881  sub.s       $f2, $f1, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC98u;
        goto label_25bc98;
    }
    ctx->pc = 0x25BC90u;
    {
        const bool branch_taken_0x25bc90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bc90) {
            ctx->pc = 0x25BC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BC90u;
            // 0x25bc94: 0x46020881  sub.s       $f2, $f1, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BCB0u;
            goto label_25bcb0;
        }
    }
    ctx->pc = 0x25BC98u;
label_25bc98:
    // 0x25bc98: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25bc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_25bc9c:
    // 0x25bc9c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bc9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bca0:
    // 0x25bca0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bca4:
    // 0x25bca4: 0x0  nop
    ctx->pc = 0x25bca4u;
    // NOP
label_25bca8:
    // 0x25bca8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25bca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25bcac:
    // 0x25bcac: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x25bcacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_25bcb0:
    // 0x25bcb0: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x25bcb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bcb4:
    // 0x25bcb4: 0x0  nop
    ctx->pc = 0x25bcb4u;
    // NOP
label_25bcb8:
    // 0x25bcb8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_25bcbc:
    if (ctx->pc == 0x25BCBCu) {
        ctx->pc = 0x25BCC0u;
        goto label_25bcc0;
    }
    ctx->pc = 0x25BCB8u;
    {
        const bool branch_taken_0x25bcb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bcb8) {
            ctx->pc = 0x25BCD4u;
            goto label_25bcd4;
        }
    }
    ctx->pc = 0x25BCC0u;
label_25bcc0:
    // 0x25bcc0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_25bcc4:
    // 0x25bcc4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bcc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bcc8:
    // 0x25bcc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bccc:
    // 0x25bccc: 0x0  nop
    ctx->pc = 0x25bcccu;
    // NOP
label_25bcd0:
    // 0x25bcd0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x25bcd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_25bcd4:
    // 0x25bcd4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x25bcd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bcd8:
    // 0x25bcd8: 0x0  nop
    ctx->pc = 0x25bcd8u;
    // NOP
label_25bcdc:
    // 0x25bcdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_25bce0:
    if (ctx->pc == 0x25BCE0u) {
        ctx->pc = 0x25BCE4u;
        goto label_25bce4;
    }
    ctx->pc = 0x25BCDCu;
    {
        const bool branch_taken_0x25bcdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bcdc) {
            ctx->pc = 0x25BCF8u;
            goto label_25bcf8;
        }
    }
    ctx->pc = 0x25BCE4u;
label_25bce4:
    // 0x25bce4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25bce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_25bce8:
    // 0x25bce8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bcec:
    // 0x25bcec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bcf0:
    // 0x25bcf0: 0x0  nop
    ctx->pc = 0x25bcf0u;
    // NOP
label_25bcf4:
    // 0x25bcf4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25bcf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_25bcf8:
    // 0x25bcf8: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x25bcf8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_25bcfc:
    // 0x25bcfc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x25bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_25bd00:
    // 0x25bd00: 0x8c4302a0  lw          $v1, 0x2A0($v0)
    ctx->pc = 0x25bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
label_25bd04:
    // 0x25bd04: 0x50600054  beql        $v1, $zero, . + 4 + (0x54 << 2)
label_25bd08:
    if (ctx->pc == 0x25BD08u) {
        ctx->pc = 0x25BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD04u;
        // 0x25bd08: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD0Cu;
        goto label_25bd0c;
    }
    ctx->pc = 0x25BD04u;
    {
        const bool branch_taken_0x25bd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd04) {
            ctx->pc = 0x25BD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD04u;
            // 0x25bd08: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BD0Cu;
label_25bd0c:
    // 0x25bd0c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x25bd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_25bd10:
    // 0x25bd10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bd10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bd14:
    // 0x25bd14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bd18:
    // 0x25bd18: 0x0  nop
    ctx->pc = 0x25bd18u;
    // NOP
label_25bd1c:
    // 0x25bd1c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x25bd1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bd20:
    // 0x25bd20: 0x0  nop
    ctx->pc = 0x25bd20u;
    // NOP
label_25bd24:
    // 0x25bd24: 0x45030048  bc1tl       . + 4 + (0x48 << 2)
label_25bd28:
    if (ctx->pc == 0x25BD28u) {
        ctx->pc = 0x25BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD24u;
        // 0x25bd28: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD2Cu;
        goto label_25bd2c;
    }
    ctx->pc = 0x25BD24u;
    {
        const bool branch_taken_0x25bd24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bd24) {
            ctx->pc = 0x25BD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD24u;
            // 0x25bd28: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE48u;
            goto label_25be48;
        }
    }
    ctx->pc = 0x25BD2Cu;
label_25bd2c:
    // 0x25bd2c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_25bd30:
    if (ctx->pc == 0x25BD30u) {
        ctx->pc = 0x25BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD2Cu;
        // 0x25bd30: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD34u;
        goto label_25bd34;
    }
    ctx->pc = 0x25BD2Cu;
    {
        const bool branch_taken_0x25bd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD2Cu;
        // 0x25bd30: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd2c) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BD34u;
label_25bd34:
    // 0x25bd34: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x25bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_25bd38:
    // 0x25bd38: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x25bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_25bd3c:
    // 0x25bd3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25bd40:
    // 0x25bd40: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x25bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_25bd44:
    // 0x25bd44: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25bd48:
    // 0x25bd48: 0xc0cd8ec  jal         func_3363B0
label_25bd4c:
    if (ctx->pc == 0x25BD4Cu) {
        ctx->pc = 0x25BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD48u;
        // 0x25bd4c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD50u;
        goto label_25bd50;
    }
    ctx->pc = 0x25BD48u;
    SET_GPR_U32(ctx, 31, 0x25BD50u);
    ctx->pc = 0x25BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD48u;
    // 0x25bd4c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x25BD48u, 0x25BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD50u;
label_25bd50:
    // 0x25bd50: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x25bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25bd54:
    // 0x25bd54: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x25bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_25bd58:
    // 0x25bd58: 0xc0cd5ea  jal         func_3357A8
label_25bd5c:
    if (ctx->pc == 0x25BD5Cu) {
        ctx->pc = 0x25BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD58u;
        // 0x25bd5c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD60u;
        goto label_25bd60;
    }
    ctx->pc = 0x25BD58u;
    SET_GPR_U32(ctx, 31, 0x25BD60u);
    ctx->pc = 0x25BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD58u;
    // 0x25bd5c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x25BD58u, 0x25BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD60u;
label_25bd60:
    // 0x25bd60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25bd60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25bd64:
    // 0x25bd64: 0xc087502  jal         func_21D408
label_25bd68:
    if (ctx->pc == 0x25BD68u) {
        ctx->pc = 0x25BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD64u;
        // 0x25bd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD6Cu;
        goto label_25bd6c;
    }
    ctx->pc = 0x25BD64u;
    SET_GPR_U32(ctx, 31, 0x25BD6Cu);
    ctx->pc = 0x25BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD64u;
    // 0x25bd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x25BD64u, 0x25BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD6Cu;
label_25bd6c:
    // 0x25bd6c: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x25bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd70:
    // 0x25bd70: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25bd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_25bd74:
    // 0x25bd74: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bd74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bd78:
    // 0x25bd78: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25bd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_25bd7c:
    // 0x25bd7c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x25bd7cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_25bd80:
    // 0x25bd80: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x25bd80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bd84:
    // 0x25bd84: 0x0  nop
    ctx->pc = 0x25bd84u;
    // NOP
label_25bd88:
    // 0x25bd88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_25bd8c:
    if (ctx->pc == 0x25BD8Cu) {
        ctx->pc = 0x25BD90u;
        goto label_25bd90;
    }
    ctx->pc = 0x25BD88u;
    {
        const bool branch_taken_0x25bd88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bd88) {
            ctx->pc = 0x25BDA4u;
            goto label_25bda4;
        }
    }
    ctx->pc = 0x25BD90u;
label_25bd90:
    // 0x25bd90: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25bd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_25bd94:
    // 0x25bd94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bd94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bd98:
    // 0x25bd98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bd9c:
    // 0x25bd9c: 0x0  nop
    ctx->pc = 0x25bd9cu;
    // NOP
label_25bda0:
    // 0x25bda0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25bda0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25bda4:
    // 0x25bda4: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x25bda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_25bda8:
    // 0x25bda8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bda8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bdac:
    // 0x25bdac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x25bdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_25bdb0:
    // 0x25bdb0: 0x0  nop
    ctx->pc = 0x25bdb0u;
    // NOP
label_25bdb4:
    // 0x25bdb4: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x25bdb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bdb8:
    // 0x25bdb8: 0x0  nop
    ctx->pc = 0x25bdb8u;
    // NOP
label_25bdbc:
    // 0x25bdbc: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_25bdc0:
    if (ctx->pc == 0x25BDC0u) {
        ctx->pc = 0x25BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDBCu;
        // 0x25bdc0: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BDC4u;
        goto label_25bdc4;
    }
    ctx->pc = 0x25BDBCu;
    {
        const bool branch_taken_0x25bdbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bdbc) {
            ctx->pc = 0x25BDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BDBCu;
            // 0x25bdc0: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BDDCu;
            goto label_25bddc;
        }
    }
    ctx->pc = 0x25BDC4u;
label_25bdc4:
    // 0x25bdc4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25bdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_25bdc8:
    // 0x25bdc8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bdc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bdcc:
    // 0x25bdcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bdd0:
    // 0x25bdd0: 0x0  nop
    ctx->pc = 0x25bdd0u;
    // NOP
label_25bdd4:
    // 0x25bdd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25bdd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25bdd8:
    // 0x25bdd8: 0x46140881  sub.s       $f2, $f1, $f20
    ctx->pc = 0x25bdd8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_25bddc:
    // 0x25bddc: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x25bddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bde0:
    // 0x25bde0: 0x0  nop
    ctx->pc = 0x25bde0u;
    // NOP
label_25bde4:
    // 0x25bde4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_25bde8:
    if (ctx->pc == 0x25BDE8u) {
        ctx->pc = 0x25BDECu;
        goto label_25bdec;
    }
    ctx->pc = 0x25BDE4u;
    {
        const bool branch_taken_0x25bde4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bde4) {
            ctx->pc = 0x25BE00u;
            goto label_25be00;
        }
    }
    ctx->pc = 0x25BDECu;
label_25bdec:
    // 0x25bdec: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25bdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_25bdf0:
    // 0x25bdf0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25bdf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25bdf4:
    // 0x25bdf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bdf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bdf8:
    // 0x25bdf8: 0x0  nop
    ctx->pc = 0x25bdf8u;
    // NOP
label_25bdfc:
    // 0x25bdfc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x25bdfcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_25be00:
    // 0x25be00: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x25be00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25be04:
    // 0x25be04: 0x0  nop
    ctx->pc = 0x25be04u;
    // NOP
label_25be08:
    // 0x25be08: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_25be0c:
    if (ctx->pc == 0x25BE0Cu) {
        ctx->pc = 0x25BE10u;
        goto label_25be10;
    }
    ctx->pc = 0x25BE08u;
    {
        const bool branch_taken_0x25be08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25be08) {
            ctx->pc = 0x25BE24u;
            goto label_25be24;
        }
    }
    ctx->pc = 0x25BE10u;
label_25be10:
    // 0x25be10: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25be10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_25be14:
    // 0x25be14: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25be14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25be18:
    // 0x25be18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25be18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25be1c:
    // 0x25be1c: 0x0  nop
    ctx->pc = 0x25be1cu;
    // NOP
label_25be20:
    // 0x25be20: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25be20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_25be24:
    // 0x25be24: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x25be24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_25be28:
    // 0x25be28: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25be28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_25be2c:
    // 0x25be2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25be2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25be30:
    // 0x25be30: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x25be30u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
label_25be34:
    // 0x25be34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25be34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25be38:
    // 0x25be38: 0x0  nop
    ctx->pc = 0x25be38u;
    // NOP
label_25be3c:
    // 0x25be3c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_25be40:
    if (ctx->pc == 0x25BE40u) {
        ctx->pc = 0x25BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE3Cu;
        // 0x25be40: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE44u;
        goto label_25be44;
    }
    ctx->pc = 0x25BE3Cu;
    {
        const bool branch_taken_0x25be3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25be3c) {
            ctx->pc = 0x25BE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BE3Cu;
            // 0x25be40: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BE44u;
label_25be44:
    // 0x25be44: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25be44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25be48:
    // 0x25be48: 0x3c172000  lui         $s7, 0x2000
    ctx->pc = 0x25be48u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8192 << 16));
label_25be4c:
    // 0x25be4c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25be50:
    // 0x25be50: 0x10000003  b           . + 4 + (0x3 << 2)
label_25be54:
    if (ctx->pc == 0x25BE54u) {
        ctx->pc = 0x25BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE50u;
        // 0x25be54: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE58u;
        goto label_25be58;
    }
    ctx->pc = 0x25BE50u;
    {
        const bool branch_taken_0x25be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE50u;
        // 0x25be54: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be50) {
            ctx->pc = 0x25BE60u;
            goto label_25be60;
        }
    }
    ctx->pc = 0x25BE58u;
label_25be58:
    // 0x25be58: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x25be58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_25be5c:
    // 0x25be5c: 0x2470fffe  addiu       $s0, $v1, -0x2
    ctx->pc = 0x25be5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_25be60:
    // 0x25be60: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x25be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_25be64:
    // 0x25be64: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25be64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_25be68:
    // 0x25be68: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_25be6c:
    if (ctx->pc == 0x25BE6Cu) {
        ctx->pc = 0x25BE70u;
        goto label_25be70;
    }
    ctx->pc = 0x25BE68u;
    {
        const bool branch_taken_0x25be68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be68) {
            ctx->pc = 0x25BF84u;
            goto label_25bf84;
        }
    }
    ctx->pc = 0x25BE70u;
label_25be70:
    // 0x25be70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25be74:
    // 0x25be74: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x25be74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_25be78:
    // 0x25be78: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x25be78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_25be7c:
    // 0x25be7c: 0x60f809  jalr        $v1
label_25be80:
    if (ctx->pc == 0x25BE80u) {
        ctx->pc = 0x25BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE7Cu;
        // 0x25be80: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE84u;
        goto label_25be84;
    }
    ctx->pc = 0x25BE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25BE84u);
        ctx->pc = 0x25BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE7Cu;
        // 0x25be80: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BE7Cu, 0x25BE84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BE84u;
label_25be84:
    // 0x25be84: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25be84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25be88:
    // 0x25be88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25be88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25be8c:
    // 0x25be8c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x25be8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_25be90:
    // 0x25be90: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x25be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_25be94:
    // 0x25be94: 0x60f809  jalr        $v1
label_25be98:
    if (ctx->pc == 0x25BE98u) {
        ctx->pc = 0x25BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE94u;
        // 0x25be98: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE9Cu;
        goto label_25be9c;
    }
    ctx->pc = 0x25BE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25BE9Cu);
        ctx->pc = 0x25BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE94u;
        // 0x25be98: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BE94u, 0x25BE9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BE9Cu;
label_25be9c:
    // 0x25be9c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x25be9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_25bea0:
    // 0x25bea0: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_25bea4:
    if (ctx->pc == 0x25BEA4u) {
        ctx->pc = 0x25BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEA0u;
        // 0x25bea4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEA8u;
        goto label_25bea8;
    }
    ctx->pc = 0x25BEA0u;
    {
        const bool branch_taken_0x25bea0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEA0u;
        // 0x25bea4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bea0) {
            ctx->pc = 0x25BEC8u;
            goto label_25bec8;
        }
    }
    ctx->pc = 0x25BEA8u;
label_25bea8:
    // 0x25bea8: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25beac:
    // 0x25beac: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25beacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25beb0:
    // 0x25beb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25beb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25beb4:
    // 0x25beb4: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25beb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_25beb8:
    // 0x25beb8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25beb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25bebc:
    // 0x25bebc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25bebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25bec0:
    // 0x25bec0: 0xc041b20  jal         func_106C80
label_25bec4:
    if (ctx->pc == 0x25BEC4u) {
        ctx->pc = 0x25BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEC0u;
        // 0x25bec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEC8u;
        goto label_25bec8;
    }
    ctx->pc = 0x25BEC0u;
    SET_GPR_U32(ctx, 31, 0x25BEC8u);
    ctx->pc = 0x25BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BEC0u;
    // 0x25bec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25BEC0u, 0x25BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BEC8u;
label_25bec8:
    // 0x25bec8: 0xc05d484  jal         func_175210
label_25becc:
    if (ctx->pc == 0x25BECCu) {
        ctx->pc = 0x25BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEC8u;
        // 0x25becc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BED0u;
        goto label_25bed0;
    }
    ctx->pc = 0x25BEC8u;
    SET_GPR_U32(ctx, 31, 0x25BED0u);
    ctx->pc = 0x25BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BEC8u;
    // 0x25becc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25BEC8u, 0x25BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BED0u;
label_25bed0:
    // 0x25bed0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25bed4:
    // 0x25bed4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25bed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25bed8:
    // 0x25bed8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25bedc:
    // 0x25bedc: 0xa0f809  jalr        $a1
label_25bee0:
    if (ctx->pc == 0x25BEE0u) {
        ctx->pc = 0x25BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEDCu;
        // 0x25bee0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEE4u;
        goto label_25bee4;
    }
    ctx->pc = 0x25BEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25BEE4u);
        ctx->pc = 0x25BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEDCu;
        // 0x25bee0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BEDCu, 0x25BEE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BEE4u;
label_25bee4:
    // 0x25bee4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25bee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bee8:
    // 0x25bee8: 0xc087016  jal         func_21C058
label_25beec:
    if (ctx->pc == 0x25BEECu) {
        ctx->pc = 0x25BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEE8u;
        // 0x25beec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEF0u;
        goto label_25bef0;
    }
    ctx->pc = 0x25BEE8u;
    SET_GPR_U32(ctx, 31, 0x25BEF0u);
    ctx->pc = 0x25BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BEE8u;
    // 0x25beec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25BEE8u, 0x25BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BEF0u;
label_25bef0:
    // 0x25bef0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25bef4:
    // 0x25bef4: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x25bef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_25bef8:
    // 0x25bef8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x25bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_25befc:
    // 0x25befc: 0x60f809  jalr        $v1
label_25bf00:
    if (ctx->pc == 0x25BF00u) {
        ctx->pc = 0x25BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEFCu;
        // 0x25bf00: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF04u;
        goto label_25bf04;
    }
    ctx->pc = 0x25BEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25BF04u);
        ctx->pc = 0x25BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEFCu;
        // 0x25bf00: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BEFCu, 0x25BF04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BF04u;
label_25bf04:
    // 0x25bf04: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25bf04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_25bf08:
    // 0x25bf08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25bf0c:
    // 0x25bf0c: 0xc097fd4  jal         func_25FF50
label_25bf10:
    if (ctx->pc == 0x25BF10u) {
        ctx->pc = 0x25BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF0Cu;
        // 0x25bf10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF14u;
        goto label_25bf14;
    }
    ctx->pc = 0x25BF0Cu;
    SET_GPR_U32(ctx, 31, 0x25BF14u);
    ctx->pc = 0x25BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF0Cu;
    // 0x25bf10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF50u, 0x25BF0Cu, 0x25BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF14u;
label_25bf14:
    // 0x25bf14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25bf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25bf18:
    // 0x25bf18: 0xc05d53a  jal         func_1754E8
label_25bf1c:
    if (ctx->pc == 0x25BF1Cu) {
        ctx->pc = 0x25BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF18u;
        // 0x25bf1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF20u;
        goto label_25bf20;
    }
    ctx->pc = 0x25BF18u;
    SET_GPR_U32(ctx, 31, 0x25BF20u);
    ctx->pc = 0x25BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF18u;
    // 0x25bf1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25BF18u, 0x25BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF20u;
label_25bf20:
    // 0x25bf20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25bf24:
    // 0x25bf24: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x25bf24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_25bf28:
    // 0x25bf28: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x25bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_25bf2c:
    // 0x25bf2c: 0x60f809  jalr        $v1
label_25bf30:
    if (ctx->pc == 0x25BF30u) {
        ctx->pc = 0x25BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF2Cu;
        // 0x25bf30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF34u;
        goto label_25bf34;
    }
    ctx->pc = 0x25BF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25BF34u);
        ctx->pc = 0x25BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF2Cu;
        // 0x25bf30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BF2Cu, 0x25BF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BF34u;
label_25bf34:
    // 0x25bf34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25bf38:
    // 0x25bf38: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x25bf38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_25bf3c:
    // 0x25bf3c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x25bf3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_25bf40:
    // 0x25bf40: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x25bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_25bf44:
    // 0x25bf44: 0x60f809  jalr        $v1
label_25bf48:
    if (ctx->pc == 0x25BF48u) {
        ctx->pc = 0x25BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF44u;
        // 0x25bf48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF4Cu;
        goto label_25bf4c;
    }
    ctx->pc = 0x25BF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25BF4Cu);
        ctx->pc = 0x25BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF44u;
        // 0x25bf48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BF44u, 0x25BF4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BF4Cu;
label_25bf4c:
    // 0x25bf4c: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x25bf4cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_25bf50:
    // 0x25bf50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25bf50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bf54:
    // 0x25bf54: 0x0  nop
    ctx->pc = 0x25bf54u;
    // NOP
label_25bf58:
    // 0x25bf58: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x25bf58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bf5c:
    // 0x25bf5c: 0x0  nop
    ctx->pc = 0x25bf5cu;
    // NOP
label_25bf60:
    // 0x25bf60: 0x4502004d  bc1fl       . + 4 + (0x4D << 2)
label_25bf64:
    if (ctx->pc == 0x25BF64u) {
        ctx->pc = 0x25BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF60u;
        // 0x25bf64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF68u;
        goto label_25bf68;
    }
    ctx->pc = 0x25BF60u;
    {
        const bool branch_taken_0x25bf60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bf60) {
            ctx->pc = 0x25BF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BF60u;
            // 0x25bf64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C098u;
            goto label_25c098;
        }
    }
    ctx->pc = 0x25BF68u;
label_25bf68:
    // 0x25bf68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25bf6c:
    // 0x25bf6c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x25bf6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_25bf70:
    // 0x25bf70: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x25bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_25bf74:
    // 0x25bf74: 0x60f809  jalr        $v1
label_25bf78:
    if (ctx->pc == 0x25BF78u) {
        ctx->pc = 0x25BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF74u;
        // 0x25bf78: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF7Cu;
        goto label_25bf7c;
    }
    ctx->pc = 0x25BF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25BF7Cu);
        ctx->pc = 0x25BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF74u;
        // 0x25bf78: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BF74u, 0x25BF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BF7Cu;
label_25bf7c:
    // 0x25bf7c: 0x10000046  b           . + 4 + (0x46 << 2)
label_25bf80:
    if (ctx->pc == 0x25BF80u) {
        ctx->pc = 0x25BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF7Cu;
        // 0x25bf80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF84u;
        goto label_25bf84;
    }
    ctx->pc = 0x25BF7Cu;
    {
        const bool branch_taken_0x25bf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF7Cu;
        // 0x25bf80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf7c) {
            ctx->pc = 0x25C098u;
            goto label_25c098;
        }
    }
    ctx->pc = 0x25BF84u;
label_25bf84:
    // 0x25bf84: 0xc041532  jal         func_1054C8
label_25bf88:
    if (ctx->pc == 0x25BF88u) {
        ctx->pc = 0x25BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF84u;
        // 0x25bf88: 0x27c4d9f0  addiu       $a0, $fp, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF8Cu;
        goto label_25bf8c;
    }
    ctx->pc = 0x25BF84u;
    SET_GPR_U32(ctx, 31, 0x25BF8Cu);
    ctx->pc = 0x25BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF84u;
    // 0x25bf88: 0x27c4d9f0  addiu       $a0, $fp, -0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25BF84u, 0x25BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF8Cu;
label_25bf8c:
    // 0x25bf8c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_25bf90:
    if (ctx->pc == 0x25BF90u) {
        ctx->pc = 0x25BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF8Cu;
        // 0x25bf90: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF94u;
        goto label_25bf94;
    }
    ctx->pc = 0x25BF8Cu;
    {
        const bool branch_taken_0x25bf8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF8Cu;
        // 0x25bf90: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf8c) {
            ctx->pc = 0x25BFB0u;
            goto label_25bfb0;
        }
    }
    ctx->pc = 0x25BF94u;
label_25bf94:
    // 0x25bf94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25bf98:
    // 0x25bf98: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25bf9c:
    // 0x25bf9c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25bf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25bfa0:
    // 0x25bfa0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25bfa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_25bfa4:
    // 0x25bfa4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25bfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25bfa8:
    // 0x25bfa8: 0xc041b20  jal         func_106C80
label_25bfac:
    if (ctx->pc == 0x25BFACu) {
        ctx->pc = 0x25BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFA8u;
        // 0x25bfac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BFB0u;
        goto label_25bfb0;
    }
    ctx->pc = 0x25BFA8u;
    SET_GPR_U32(ctx, 31, 0x25BFB0u);
    ctx->pc = 0x25BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BFA8u;
    // 0x25bfac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25BFA8u, 0x25BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BFB0u;
label_25bfb0:
    // 0x25bfb0: 0xc05d484  jal         func_175210
label_25bfb4:
    if (ctx->pc == 0x25BFB4u) {
        ctx->pc = 0x25BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFB0u;
        // 0x25bfb4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BFB8u;
        goto label_25bfb8;
    }
    ctx->pc = 0x25BFB0u;
    SET_GPR_U32(ctx, 31, 0x25BFB8u);
    ctx->pc = 0x25BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BFB0u;
    // 0x25bfb4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25BFB0u, 0x25BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BFB8u;
label_25bfb8:
    // 0x25bfb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25bfbc:
    // 0x25bfbc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25bfbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25bfc0:
    // 0x25bfc0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25bfc4:
    // 0x25bfc4: 0xa0f809  jalr        $a1
label_25bfc8:
    if (ctx->pc == 0x25BFC8u) {
        ctx->pc = 0x25BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFC4u;
        // 0x25bfc8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BFCCu;
        goto label_25bfcc;
    }
    ctx->pc = 0x25BFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25BFCCu);
        ctx->pc = 0x25BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFC4u;
        // 0x25bfc8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BFC4u, 0x25BFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BFCCu;
label_25bfcc:
    // 0x25bfcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25bfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25bfd0:
    // 0x25bfd0: 0xc087016  jal         func_21C058
label_25bfd4:
    if (ctx->pc == 0x25BFD4u) {
        ctx->pc = 0x25BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFD0u;
        // 0x25bfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BFD8u;
        goto label_25bfd8;
    }
    ctx->pc = 0x25BFD0u;
    SET_GPR_U32(ctx, 31, 0x25BFD8u);
    ctx->pc = 0x25BFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BFD0u;
    // 0x25bfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25BFD0u, 0x25BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BFD8u;
label_25bfd8:
    // 0x25bfd8: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_25bfdc:
    if (ctx->pc == 0x25BFDCu) {
        ctx->pc = 0x25BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFD8u;
        // 0x25bfdc: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BFE0u;
        goto label_25bfe0;
    }
    ctx->pc = 0x25BFD8u;
    {
        const bool branch_taken_0x25bfd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFD8u;
        // 0x25bfdc: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfd8) {
            ctx->pc = 0x25C01Cu;
            goto label_25c01c;
        }
    }
    ctx->pc = 0x25BFE0u;
label_25bfe0:
    // 0x25bfe0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25bfe4:
    // 0x25bfe4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_25bfe8:
    // 0x25bfe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25bfec:
    // 0x25bfec: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x25bfecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_25bff0:
    // 0x25bff0: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x25bff0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_25bff4:
    // 0x25bff4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25bff8:
    // 0x25bff8: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x25bff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_25bffc:
    // 0x25bffc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x25bffcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25c000:
    // 0x25c000: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x25c000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_25c004:
    // 0x25c004: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25c004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_25c008:
    // 0x25c008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25c008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c00c:
    // 0x25c00c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25c00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_25c010:
    // 0x25c010: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25c010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25c014:
    // 0x25c014: 0xc0428c4  jal         func_10A310
label_25c018:
    if (ctx->pc == 0x25C018u) {
        ctx->pc = 0x25C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C014u;
        // 0x25c018: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C01Cu;
        goto label_25c01c;
    }
    ctx->pc = 0x25C014u;
    SET_GPR_U32(ctx, 31, 0x25C01Cu);
    ctx->pc = 0x25C018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C014u;
    // 0x25c018: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A310u, 0x25C014u, 0x25C01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C01Cu;
label_25c01c:
    // 0x25c01c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25c020:
    // 0x25c020: 0x240502c1  addiu       $a1, $zero, 0x2C1
    ctx->pc = 0x25c020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
label_25c024:
    // 0x25c024: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25c024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25c028:
    // 0x25c028: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25c02c:
    // 0x25c02c: 0x60f809  jalr        $v1
label_25c030:
    if (ctx->pc == 0x25C030u) {
        ctx->pc = 0x25C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C02Cu;
        // 0x25c030: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C034u;
        goto label_25c034;
    }
    ctx->pc = 0x25C02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25C034u);
        ctx->pc = 0x25C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C02Cu;
        // 0x25c030: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C02Cu, 0x25C034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C034u;
label_25c034:
    // 0x25c034: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x25c034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25c038:
    // 0x25c038: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25c03c:
    // 0x25c03c: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_25c040:
    if (ctx->pc == 0x25C040u) {
        ctx->pc = 0x25C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C03Cu;
        // 0x25c040: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C044u;
        goto label_25c044;
    }
    ctx->pc = 0x25C03Cu;
    {
        const bool branch_taken_0x25c03c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C03Cu;
        // 0x25c040: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c03c) {
            ctx->pc = 0x25C07Cu;
            goto label_25c07c;
        }
    }
    ctx->pc = 0x25C044u;
label_25c044:
    // 0x25c044: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25c044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25c048:
    // 0x25c048: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25c048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25c04c:
    // 0x25c04c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25c050:
    // 0x25c050: 0x40f809  jalr        $v0
label_25c054:
    if (ctx->pc == 0x25C054u) {
        ctx->pc = 0x25C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C050u;
        // 0x25c054: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C058u;
        goto label_25c058;
    }
    ctx->pc = 0x25C050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C058u);
        ctx->pc = 0x25C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C050u;
        // 0x25c054: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C050u, 0x25C058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C058u;
label_25c058:
    // 0x25c058: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25c058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c05c:
    // 0x25c05c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25c05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c060:
    // 0x25c060: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25c060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c064:
    // 0x25c064: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25c064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c068:
    // 0x25c068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25c068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25c06c:
    // 0x25c06c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25c06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25c070:
    // 0x25c070: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25c070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25c074:
    // 0x25c074: 0xc041664  jal         func_105990
label_25c078:
    if (ctx->pc == 0x25C078u) {
        ctx->pc = 0x25C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C074u;
        // 0x25c078: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C07Cu;
        goto label_25c07c;
    }
    ctx->pc = 0x25C074u;
    SET_GPR_U32(ctx, 31, 0x25C07Cu);
    ctx->pc = 0x25C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C074u;
    // 0x25c078: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25C074u, 0x25C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C07Cu;
label_25c07c:
    // 0x25c07c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x25c07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25c080:
    // 0x25c080: 0xc089990  jal         func_226640
label_25c084:
    if (ctx->pc == 0x25C084u) {
        ctx->pc = 0x25C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C080u;
        // 0x25c084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C088u;
        goto label_25c088;
    }
    ctx->pc = 0x25C080u;
    SET_GPR_U32(ctx, 31, 0x25C088u);
    ctx->pc = 0x25C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C080u;
    // 0x25c084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25C080u, 0x25C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C088u;
label_25c088:
    // 0x25c088: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25c088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25c08c:
    // 0x25c08c: 0xc05d53a  jal         func_1754E8
label_25c090:
    if (ctx->pc == 0x25C090u) {
        ctx->pc = 0x25C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C08Cu;
        // 0x25c090: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C094u;
        goto label_25c094;
    }
    ctx->pc = 0x25C08Cu;
    SET_GPR_U32(ctx, 31, 0x25C094u);
    ctx->pc = 0x25C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C08Cu;
    // 0x25c090: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25C08Cu, 0x25C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C094u;
label_25c094:
    // 0x25c094: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25c094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25c098:
    // 0x25c098: 0xc05d4f6  jal         func_1753D8
label_25c09c:
    if (ctx->pc == 0x25C09Cu) {
        ctx->pc = 0x25C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C098u;
        // 0x25c09c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C0A0u;
        goto label_25c0a0;
    }
    ctx->pc = 0x25C098u;
    SET_GPR_U32(ctx, 31, 0x25C0A0u);
    ctx->pc = 0x25C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C098u;
    // 0x25c09c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25C098u, 0x25C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0A0u;
label_25c0a0:
    // 0x25c0a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c0a4:
    // 0x25c0a4: 0xc0899aa  jal         func_2266A8
label_25c0a8:
    if (ctx->pc == 0x25C0A8u) {
        ctx->pc = 0x25C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0A4u;
        // 0x25c0a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C0ACu;
        goto label_25c0ac;
    }
    ctx->pc = 0x25C0A4u;
    SET_GPR_U32(ctx, 31, 0x25C0ACu);
    ctx->pc = 0x25C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C0A4u;
    // 0x25c0a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25C0A4u, 0x25C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0ACu;
label_25c0ac:
    // 0x25c0ac: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x25c0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_25c0b0:
    // 0x25c0b0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x25c0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25c0b4:
    // 0x25c0b4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x25c0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25c0b8:
    // 0x25c0b8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x25c0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25c0bc:
    // 0x25c0bc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x25c0bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25c0c0:
    // 0x25c0c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x25c0c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25c0c4:
    // 0x25c0c4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x25c0c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25c0c8:
    // 0x25c0c8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x25c0c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25c0cc:
    // 0x25c0cc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x25c0ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25c0d0:
    // 0x25c0d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25c0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25c0d4:
    // 0x25c0d4: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x25c0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_25c0d8:
    // 0x25c0d8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x25c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25c0dc:
    // 0x25c0dc: 0x3e00008  jr          $ra
label_25c0e0:
    if (ctx->pc == 0x25C0E0u) {
        ctx->pc = 0x25C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0DCu;
        // 0x25c0e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C0E4u;
        goto label_25c0e4;
    }
    ctx->pc = 0x25C0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0DCu;
        // 0x25c0e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C0E4u;
label_25c0e4:
    // 0x25c0e4: 0x0  nop
    ctx->pc = 0x25c0e4u;
    // NOP
    ctx->pc = 0x25c0e8u;
}
