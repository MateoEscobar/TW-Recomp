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

// Function: sub_002DBC10
// Address: 0x2dbc10 - 0x2dc278
void sub_002DBC10_0x2dbc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBC10_0x2dbc10");
#endif

    switch (ctx->pc) {
        case 0x2dbc10u: goto label_2dbc10;
        case 0x2dbc14u: goto label_2dbc14;
        case 0x2dbc18u: goto label_2dbc18;
        case 0x2dbc1cu: goto label_2dbc1c;
        case 0x2dbc20u: goto label_2dbc20;
        case 0x2dbc24u: goto label_2dbc24;
        case 0x2dbc28u: goto label_2dbc28;
        case 0x2dbc2cu: goto label_2dbc2c;
        case 0x2dbc30u: goto label_2dbc30;
        case 0x2dbc34u: goto label_2dbc34;
        case 0x2dbc38u: goto label_2dbc38;
        case 0x2dbc3cu: goto label_2dbc3c;
        case 0x2dbc40u: goto label_2dbc40;
        case 0x2dbc44u: goto label_2dbc44;
        case 0x2dbc48u: goto label_2dbc48;
        case 0x2dbc4cu: goto label_2dbc4c;
        case 0x2dbc50u: goto label_2dbc50;
        case 0x2dbc54u: goto label_2dbc54;
        case 0x2dbc58u: goto label_2dbc58;
        case 0x2dbc5cu: goto label_2dbc5c;
        case 0x2dbc60u: goto label_2dbc60;
        case 0x2dbc64u: goto label_2dbc64;
        case 0x2dbc68u: goto label_2dbc68;
        case 0x2dbc6cu: goto label_2dbc6c;
        case 0x2dbc70u: goto label_2dbc70;
        case 0x2dbc74u: goto label_2dbc74;
        case 0x2dbc78u: goto label_2dbc78;
        case 0x2dbc7cu: goto label_2dbc7c;
        case 0x2dbc80u: goto label_2dbc80;
        case 0x2dbc84u: goto label_2dbc84;
        case 0x2dbc88u: goto label_2dbc88;
        case 0x2dbc8cu: goto label_2dbc8c;
        case 0x2dbc90u: goto label_2dbc90;
        case 0x2dbc94u: goto label_2dbc94;
        case 0x2dbc98u: goto label_2dbc98;
        case 0x2dbc9cu: goto label_2dbc9c;
        case 0x2dbca0u: goto label_2dbca0;
        case 0x2dbca4u: goto label_2dbca4;
        case 0x2dbca8u: goto label_2dbca8;
        case 0x2dbcacu: goto label_2dbcac;
        case 0x2dbcb0u: goto label_2dbcb0;
        case 0x2dbcb4u: goto label_2dbcb4;
        case 0x2dbcb8u: goto label_2dbcb8;
        case 0x2dbcbcu: goto label_2dbcbc;
        case 0x2dbcc0u: goto label_2dbcc0;
        case 0x2dbcc4u: goto label_2dbcc4;
        case 0x2dbcc8u: goto label_2dbcc8;
        case 0x2dbcccu: goto label_2dbccc;
        case 0x2dbcd0u: goto label_2dbcd0;
        case 0x2dbcd4u: goto label_2dbcd4;
        case 0x2dbcd8u: goto label_2dbcd8;
        case 0x2dbcdcu: goto label_2dbcdc;
        case 0x2dbce0u: goto label_2dbce0;
        case 0x2dbce4u: goto label_2dbce4;
        case 0x2dbce8u: goto label_2dbce8;
        case 0x2dbcecu: goto label_2dbcec;
        case 0x2dbcf0u: goto label_2dbcf0;
        case 0x2dbcf4u: goto label_2dbcf4;
        case 0x2dbcf8u: goto label_2dbcf8;
        case 0x2dbcfcu: goto label_2dbcfc;
        case 0x2dbd00u: goto label_2dbd00;
        case 0x2dbd04u: goto label_2dbd04;
        case 0x2dbd08u: goto label_2dbd08;
        case 0x2dbd0cu: goto label_2dbd0c;
        case 0x2dbd10u: goto label_2dbd10;
        case 0x2dbd14u: goto label_2dbd14;
        case 0x2dbd18u: goto label_2dbd18;
        case 0x2dbd1cu: goto label_2dbd1c;
        case 0x2dbd20u: goto label_2dbd20;
        case 0x2dbd24u: goto label_2dbd24;
        case 0x2dbd28u: goto label_2dbd28;
        case 0x2dbd2cu: goto label_2dbd2c;
        case 0x2dbd30u: goto label_2dbd30;
        case 0x2dbd34u: goto label_2dbd34;
        case 0x2dbd38u: goto label_2dbd38;
        case 0x2dbd3cu: goto label_2dbd3c;
        case 0x2dbd40u: goto label_2dbd40;
        case 0x2dbd44u: goto label_2dbd44;
        case 0x2dbd48u: goto label_2dbd48;
        case 0x2dbd4cu: goto label_2dbd4c;
        case 0x2dbd50u: goto label_2dbd50;
        case 0x2dbd54u: goto label_2dbd54;
        case 0x2dbd58u: goto label_2dbd58;
        case 0x2dbd5cu: goto label_2dbd5c;
        case 0x2dbd60u: goto label_2dbd60;
        case 0x2dbd64u: goto label_2dbd64;
        case 0x2dbd68u: goto label_2dbd68;
        case 0x2dbd6cu: goto label_2dbd6c;
        case 0x2dbd70u: goto label_2dbd70;
        case 0x2dbd74u: goto label_2dbd74;
        case 0x2dbd78u: goto label_2dbd78;
        case 0x2dbd7cu: goto label_2dbd7c;
        case 0x2dbd80u: goto label_2dbd80;
        case 0x2dbd84u: goto label_2dbd84;
        case 0x2dbd88u: goto label_2dbd88;
        case 0x2dbd8cu: goto label_2dbd8c;
        case 0x2dbd90u: goto label_2dbd90;
        case 0x2dbd94u: goto label_2dbd94;
        case 0x2dbd98u: goto label_2dbd98;
        case 0x2dbd9cu: goto label_2dbd9c;
        case 0x2dbda0u: goto label_2dbda0;
        case 0x2dbda4u: goto label_2dbda4;
        case 0x2dbda8u: goto label_2dbda8;
        case 0x2dbdacu: goto label_2dbdac;
        case 0x2dbdb0u: goto label_2dbdb0;
        case 0x2dbdb4u: goto label_2dbdb4;
        case 0x2dbdb8u: goto label_2dbdb8;
        case 0x2dbdbcu: goto label_2dbdbc;
        case 0x2dbdc0u: goto label_2dbdc0;
        case 0x2dbdc4u: goto label_2dbdc4;
        case 0x2dbdc8u: goto label_2dbdc8;
        case 0x2dbdccu: goto label_2dbdcc;
        case 0x2dbdd0u: goto label_2dbdd0;
        case 0x2dbdd4u: goto label_2dbdd4;
        case 0x2dbdd8u: goto label_2dbdd8;
        case 0x2dbddcu: goto label_2dbddc;
        case 0x2dbde0u: goto label_2dbde0;
        case 0x2dbde4u: goto label_2dbde4;
        case 0x2dbde8u: goto label_2dbde8;
        case 0x2dbdecu: goto label_2dbdec;
        case 0x2dbdf0u: goto label_2dbdf0;
        case 0x2dbdf4u: goto label_2dbdf4;
        case 0x2dbdf8u: goto label_2dbdf8;
        case 0x2dbdfcu: goto label_2dbdfc;
        case 0x2dbe00u: goto label_2dbe00;
        case 0x2dbe04u: goto label_2dbe04;
        case 0x2dbe08u: goto label_2dbe08;
        case 0x2dbe0cu: goto label_2dbe0c;
        case 0x2dbe10u: goto label_2dbe10;
        case 0x2dbe14u: goto label_2dbe14;
        case 0x2dbe18u: goto label_2dbe18;
        case 0x2dbe1cu: goto label_2dbe1c;
        case 0x2dbe20u: goto label_2dbe20;
        case 0x2dbe24u: goto label_2dbe24;
        case 0x2dbe28u: goto label_2dbe28;
        case 0x2dbe2cu: goto label_2dbe2c;
        case 0x2dbe30u: goto label_2dbe30;
        case 0x2dbe34u: goto label_2dbe34;
        case 0x2dbe38u: goto label_2dbe38;
        case 0x2dbe3cu: goto label_2dbe3c;
        case 0x2dbe40u: goto label_2dbe40;
        case 0x2dbe44u: goto label_2dbe44;
        case 0x2dbe48u: goto label_2dbe48;
        case 0x2dbe4cu: goto label_2dbe4c;
        case 0x2dbe50u: goto label_2dbe50;
        case 0x2dbe54u: goto label_2dbe54;
        case 0x2dbe58u: goto label_2dbe58;
        case 0x2dbe5cu: goto label_2dbe5c;
        case 0x2dbe60u: goto label_2dbe60;
        case 0x2dbe64u: goto label_2dbe64;
        case 0x2dbe68u: goto label_2dbe68;
        case 0x2dbe6cu: goto label_2dbe6c;
        case 0x2dbe70u: goto label_2dbe70;
        case 0x2dbe74u: goto label_2dbe74;
        case 0x2dbe78u: goto label_2dbe78;
        case 0x2dbe7cu: goto label_2dbe7c;
        case 0x2dbe80u: goto label_2dbe80;
        case 0x2dbe84u: goto label_2dbe84;
        case 0x2dbe88u: goto label_2dbe88;
        case 0x2dbe8cu: goto label_2dbe8c;
        case 0x2dbe90u: goto label_2dbe90;
        case 0x2dbe94u: goto label_2dbe94;
        case 0x2dbe98u: goto label_2dbe98;
        case 0x2dbe9cu: goto label_2dbe9c;
        case 0x2dbea0u: goto label_2dbea0;
        case 0x2dbea4u: goto label_2dbea4;
        case 0x2dbea8u: goto label_2dbea8;
        case 0x2dbeacu: goto label_2dbeac;
        case 0x2dbeb0u: goto label_2dbeb0;
        case 0x2dbeb4u: goto label_2dbeb4;
        case 0x2dbeb8u: goto label_2dbeb8;
        case 0x2dbebcu: goto label_2dbebc;
        case 0x2dbec0u: goto label_2dbec0;
        case 0x2dbec4u: goto label_2dbec4;
        case 0x2dbec8u: goto label_2dbec8;
        case 0x2dbeccu: goto label_2dbecc;
        case 0x2dbed0u: goto label_2dbed0;
        case 0x2dbed4u: goto label_2dbed4;
        case 0x2dbed8u: goto label_2dbed8;
        case 0x2dbedcu: goto label_2dbedc;
        case 0x2dbee0u: goto label_2dbee0;
        case 0x2dbee4u: goto label_2dbee4;
        case 0x2dbee8u: goto label_2dbee8;
        case 0x2dbeecu: goto label_2dbeec;
        case 0x2dbef0u: goto label_2dbef0;
        case 0x2dbef4u: goto label_2dbef4;
        case 0x2dbef8u: goto label_2dbef8;
        case 0x2dbefcu: goto label_2dbefc;
        case 0x2dbf00u: goto label_2dbf00;
        case 0x2dbf04u: goto label_2dbf04;
        case 0x2dbf08u: goto label_2dbf08;
        case 0x2dbf0cu: goto label_2dbf0c;
        case 0x2dbf10u: goto label_2dbf10;
        case 0x2dbf14u: goto label_2dbf14;
        case 0x2dbf18u: goto label_2dbf18;
        case 0x2dbf1cu: goto label_2dbf1c;
        case 0x2dbf20u: goto label_2dbf20;
        case 0x2dbf24u: goto label_2dbf24;
        case 0x2dbf28u: goto label_2dbf28;
        case 0x2dbf2cu: goto label_2dbf2c;
        case 0x2dbf30u: goto label_2dbf30;
        case 0x2dbf34u: goto label_2dbf34;
        case 0x2dbf38u: goto label_2dbf38;
        case 0x2dbf3cu: goto label_2dbf3c;
        case 0x2dbf40u: goto label_2dbf40;
        case 0x2dbf44u: goto label_2dbf44;
        case 0x2dbf48u: goto label_2dbf48;
        case 0x2dbf4cu: goto label_2dbf4c;
        case 0x2dbf50u: goto label_2dbf50;
        case 0x2dbf54u: goto label_2dbf54;
        case 0x2dbf58u: goto label_2dbf58;
        case 0x2dbf5cu: goto label_2dbf5c;
        case 0x2dbf60u: goto label_2dbf60;
        case 0x2dbf64u: goto label_2dbf64;
        case 0x2dbf68u: goto label_2dbf68;
        case 0x2dbf6cu: goto label_2dbf6c;
        case 0x2dbf70u: goto label_2dbf70;
        case 0x2dbf74u: goto label_2dbf74;
        case 0x2dbf78u: goto label_2dbf78;
        case 0x2dbf7cu: goto label_2dbf7c;
        case 0x2dbf80u: goto label_2dbf80;
        case 0x2dbf84u: goto label_2dbf84;
        case 0x2dbf88u: goto label_2dbf88;
        case 0x2dbf8cu: goto label_2dbf8c;
        case 0x2dbf90u: goto label_2dbf90;
        case 0x2dbf94u: goto label_2dbf94;
        case 0x2dbf98u: goto label_2dbf98;
        case 0x2dbf9cu: goto label_2dbf9c;
        case 0x2dbfa0u: goto label_2dbfa0;
        case 0x2dbfa4u: goto label_2dbfa4;
        case 0x2dbfa8u: goto label_2dbfa8;
        case 0x2dbfacu: goto label_2dbfac;
        case 0x2dbfb0u: goto label_2dbfb0;
        case 0x2dbfb4u: goto label_2dbfb4;
        case 0x2dbfb8u: goto label_2dbfb8;
        case 0x2dbfbcu: goto label_2dbfbc;
        case 0x2dbfc0u: goto label_2dbfc0;
        case 0x2dbfc4u: goto label_2dbfc4;
        case 0x2dbfc8u: goto label_2dbfc8;
        case 0x2dbfccu: goto label_2dbfcc;
        case 0x2dbfd0u: goto label_2dbfd0;
        case 0x2dbfd4u: goto label_2dbfd4;
        case 0x2dbfd8u: goto label_2dbfd8;
        case 0x2dbfdcu: goto label_2dbfdc;
        case 0x2dbfe0u: goto label_2dbfe0;
        case 0x2dbfe4u: goto label_2dbfe4;
        case 0x2dbfe8u: goto label_2dbfe8;
        case 0x2dbfecu: goto label_2dbfec;
        case 0x2dbff0u: goto label_2dbff0;
        case 0x2dbff4u: goto label_2dbff4;
        case 0x2dbff8u: goto label_2dbff8;
        case 0x2dbffcu: goto label_2dbffc;
        case 0x2dc000u: goto label_2dc000;
        case 0x2dc004u: goto label_2dc004;
        case 0x2dc008u: goto label_2dc008;
        case 0x2dc00cu: goto label_2dc00c;
        case 0x2dc010u: goto label_2dc010;
        case 0x2dc014u: goto label_2dc014;
        case 0x2dc018u: goto label_2dc018;
        case 0x2dc01cu: goto label_2dc01c;
        case 0x2dc020u: goto label_2dc020;
        case 0x2dc024u: goto label_2dc024;
        case 0x2dc028u: goto label_2dc028;
        case 0x2dc02cu: goto label_2dc02c;
        case 0x2dc030u: goto label_2dc030;
        case 0x2dc034u: goto label_2dc034;
        case 0x2dc038u: goto label_2dc038;
        case 0x2dc03cu: goto label_2dc03c;
        case 0x2dc040u: goto label_2dc040;
        case 0x2dc044u: goto label_2dc044;
        case 0x2dc048u: goto label_2dc048;
        case 0x2dc04cu: goto label_2dc04c;
        case 0x2dc050u: goto label_2dc050;
        case 0x2dc054u: goto label_2dc054;
        case 0x2dc058u: goto label_2dc058;
        case 0x2dc05cu: goto label_2dc05c;
        case 0x2dc060u: goto label_2dc060;
        case 0x2dc064u: goto label_2dc064;
        case 0x2dc068u: goto label_2dc068;
        case 0x2dc06cu: goto label_2dc06c;
        case 0x2dc070u: goto label_2dc070;
        case 0x2dc074u: goto label_2dc074;
        case 0x2dc078u: goto label_2dc078;
        case 0x2dc07cu: goto label_2dc07c;
        case 0x2dc080u: goto label_2dc080;
        case 0x2dc084u: goto label_2dc084;
        case 0x2dc088u: goto label_2dc088;
        case 0x2dc08cu: goto label_2dc08c;
        case 0x2dc090u: goto label_2dc090;
        case 0x2dc094u: goto label_2dc094;
        case 0x2dc098u: goto label_2dc098;
        case 0x2dc09cu: goto label_2dc09c;
        case 0x2dc0a0u: goto label_2dc0a0;
        case 0x2dc0a4u: goto label_2dc0a4;
        case 0x2dc0a8u: goto label_2dc0a8;
        case 0x2dc0acu: goto label_2dc0ac;
        case 0x2dc0b0u: goto label_2dc0b0;
        case 0x2dc0b4u: goto label_2dc0b4;
        case 0x2dc0b8u: goto label_2dc0b8;
        case 0x2dc0bcu: goto label_2dc0bc;
        case 0x2dc0c0u: goto label_2dc0c0;
        case 0x2dc0c4u: goto label_2dc0c4;
        case 0x2dc0c8u: goto label_2dc0c8;
        case 0x2dc0ccu: goto label_2dc0cc;
        case 0x2dc0d0u: goto label_2dc0d0;
        case 0x2dc0d4u: goto label_2dc0d4;
        case 0x2dc0d8u: goto label_2dc0d8;
        case 0x2dc0dcu: goto label_2dc0dc;
        case 0x2dc0e0u: goto label_2dc0e0;
        case 0x2dc0e4u: goto label_2dc0e4;
        case 0x2dc0e8u: goto label_2dc0e8;
        case 0x2dc0ecu: goto label_2dc0ec;
        case 0x2dc0f0u: goto label_2dc0f0;
        case 0x2dc0f4u: goto label_2dc0f4;
        case 0x2dc0f8u: goto label_2dc0f8;
        case 0x2dc0fcu: goto label_2dc0fc;
        case 0x2dc100u: goto label_2dc100;
        case 0x2dc104u: goto label_2dc104;
        case 0x2dc108u: goto label_2dc108;
        case 0x2dc10cu: goto label_2dc10c;
        case 0x2dc110u: goto label_2dc110;
        case 0x2dc114u: goto label_2dc114;
        case 0x2dc118u: goto label_2dc118;
        case 0x2dc11cu: goto label_2dc11c;
        case 0x2dc120u: goto label_2dc120;
        case 0x2dc124u: goto label_2dc124;
        case 0x2dc128u: goto label_2dc128;
        case 0x2dc12cu: goto label_2dc12c;
        case 0x2dc130u: goto label_2dc130;
        case 0x2dc134u: goto label_2dc134;
        case 0x2dc138u: goto label_2dc138;
        case 0x2dc13cu: goto label_2dc13c;
        case 0x2dc140u: goto label_2dc140;
        case 0x2dc144u: goto label_2dc144;
        case 0x2dc148u: goto label_2dc148;
        case 0x2dc14cu: goto label_2dc14c;
        case 0x2dc150u: goto label_2dc150;
        case 0x2dc154u: goto label_2dc154;
        case 0x2dc158u: goto label_2dc158;
        case 0x2dc15cu: goto label_2dc15c;
        case 0x2dc160u: goto label_2dc160;
        case 0x2dc164u: goto label_2dc164;
        case 0x2dc168u: goto label_2dc168;
        case 0x2dc16cu: goto label_2dc16c;
        case 0x2dc170u: goto label_2dc170;
        case 0x2dc174u: goto label_2dc174;
        case 0x2dc178u: goto label_2dc178;
        case 0x2dc17cu: goto label_2dc17c;
        case 0x2dc180u: goto label_2dc180;
        case 0x2dc184u: goto label_2dc184;
        case 0x2dc188u: goto label_2dc188;
        case 0x2dc18cu: goto label_2dc18c;
        case 0x2dc190u: goto label_2dc190;
        case 0x2dc194u: goto label_2dc194;
        case 0x2dc198u: goto label_2dc198;
        case 0x2dc19cu: goto label_2dc19c;
        case 0x2dc1a0u: goto label_2dc1a0;
        case 0x2dc1a4u: goto label_2dc1a4;
        case 0x2dc1a8u: goto label_2dc1a8;
        case 0x2dc1acu: goto label_2dc1ac;
        case 0x2dc1b0u: goto label_2dc1b0;
        case 0x2dc1b4u: goto label_2dc1b4;
        case 0x2dc1b8u: goto label_2dc1b8;
        case 0x2dc1bcu: goto label_2dc1bc;
        case 0x2dc1c0u: goto label_2dc1c0;
        case 0x2dc1c4u: goto label_2dc1c4;
        case 0x2dc1c8u: goto label_2dc1c8;
        case 0x2dc1ccu: goto label_2dc1cc;
        case 0x2dc1d0u: goto label_2dc1d0;
        case 0x2dc1d4u: goto label_2dc1d4;
        case 0x2dc1d8u: goto label_2dc1d8;
        case 0x2dc1dcu: goto label_2dc1dc;
        case 0x2dc1e0u: goto label_2dc1e0;
        case 0x2dc1e4u: goto label_2dc1e4;
        case 0x2dc1e8u: goto label_2dc1e8;
        case 0x2dc1ecu: goto label_2dc1ec;
        case 0x2dc1f0u: goto label_2dc1f0;
        case 0x2dc1f4u: goto label_2dc1f4;
        case 0x2dc1f8u: goto label_2dc1f8;
        case 0x2dc1fcu: goto label_2dc1fc;
        case 0x2dc200u: goto label_2dc200;
        case 0x2dc204u: goto label_2dc204;
        case 0x2dc208u: goto label_2dc208;
        case 0x2dc20cu: goto label_2dc20c;
        case 0x2dc210u: goto label_2dc210;
        case 0x2dc214u: goto label_2dc214;
        case 0x2dc218u: goto label_2dc218;
        case 0x2dc21cu: goto label_2dc21c;
        case 0x2dc220u: goto label_2dc220;
        case 0x2dc224u: goto label_2dc224;
        case 0x2dc228u: goto label_2dc228;
        case 0x2dc22cu: goto label_2dc22c;
        case 0x2dc230u: goto label_2dc230;
        case 0x2dc234u: goto label_2dc234;
        case 0x2dc238u: goto label_2dc238;
        case 0x2dc23cu: goto label_2dc23c;
        case 0x2dc240u: goto label_2dc240;
        case 0x2dc244u: goto label_2dc244;
        case 0x2dc248u: goto label_2dc248;
        case 0x2dc24cu: goto label_2dc24c;
        case 0x2dc250u: goto label_2dc250;
        case 0x2dc254u: goto label_2dc254;
        case 0x2dc258u: goto label_2dc258;
        case 0x2dc25cu: goto label_2dc25c;
        case 0x2dc260u: goto label_2dc260;
        case 0x2dc264u: goto label_2dc264;
        case 0x2dc268u: goto label_2dc268;
        case 0x2dc26cu: goto label_2dc26c;
        case 0x2dc270u: goto label_2dc270;
        case 0x2dc274u: goto label_2dc274;
        default: break;
    }

    ctx->pc = 0x2dbc10u;

label_2dbc10:
    // 0x2dbc10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2dbc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2dbc14:
    // 0x2dbc14: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2dbc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2dbc18:
    // 0x2dbc18: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2dbc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2dbc1c:
    // 0x2dbc1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dbc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc20:
    // 0x2dbc20: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2dbc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2dbc24:
    // 0x2dbc24: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2dbc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2dbc28:
    // 0x2dbc28: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2dbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2dbc2c:
    // 0x2dbc2c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2dbc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2dbc30:
    // 0x2dbc30: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2dbc30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2dbc34:
    // 0x2dbc34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dbc38:
    // 0x2dbc38: 0xc08a08a  jal         func_228228
label_2dbc3c:
    if (ctx->pc == 0x2DBC3Cu) {
        ctx->pc = 0x2DBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC38u;
        // 0x2dbc3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBC40u;
        goto label_2dbc40;
    }
    ctx->pc = 0x2DBC38u;
    SET_GPR_U32(ctx, 31, 0x2DBC40u);
    ctx->pc = 0x2DBC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC38u;
    // 0x2dbc3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2DBC38u, 0x2DBC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC40u;
label_2dbc40:
    // 0x2dbc40: 0x14400184  bnez        $v0, . + 4 + (0x184 << 2)
label_2dbc44:
    if (ctx->pc == 0x2DBC44u) {
        ctx->pc = 0x2DBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC40u;
        // 0x2dbc44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBC48u;
        goto label_2dbc48;
    }
    ctx->pc = 0x2DBC40u;
    {
        const bool branch_taken_0x2dbc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC40u;
        // 0x2dbc44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc40) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DBC48u;
label_2dbc48:
    // 0x2dbc48: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2dbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2dbc4c:
    // 0x2dbc4c: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x2dbc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_2dbc50:
    // 0x2dbc50: 0x10400180  beqz        $v0, . + 4 + (0x180 << 2)
label_2dbc54:
    if (ctx->pc == 0x2DBC54u) {
        ctx->pc = 0x2DBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC50u;
        // 0x2dbc54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBC58u;
        goto label_2dbc58;
    }
    ctx->pc = 0x2DBC50u;
    {
        const bool branch_taken_0x2dbc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC50u;
        // 0x2dbc54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc50) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DBC58u;
label_2dbc58:
    // 0x2dbc58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dbc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dbc5c:
    // 0x2dbc5c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2dbc5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2dbc60:
    // 0x2dbc60: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
label_2dbc64:
    if (ctx->pc == 0x2DBC64u) {
        ctx->pc = 0x2DBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC60u;
        // 0x2dbc64: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBC68u;
        goto label_2dbc68;
    }
    ctx->pc = 0x2DBC60u;
    {
        const bool branch_taken_0x2dbc60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC60u;
        // 0x2dbc64: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc60) {
            ctx->pc = 0x2DBD68u;
            goto label_2dbd68;
        }
    }
    ctx->pc = 0x2DBC68u;
label_2dbc68:
    // 0x2dbc68: 0xc0a36c2  jal         func_28DB08
label_2dbc6c:
    if (ctx->pc == 0x2DBC6Cu) {
        ctx->pc = 0x2DBC70u;
        goto label_2dbc70;
    }
    ctx->pc = 0x2DBC68u;
    SET_GPR_U32(ctx, 31, 0x2DBC70u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2DBC68u, 0x2DBC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC70u;
label_2dbc70:
    // 0x2dbc70: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2dbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2dbc74:
    // 0x2dbc74: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2dbc74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2dbc78:
    // 0x2dbc78: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dbc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2dbc7c:
    // 0x2dbc7c: 0xa0f809  jalr        $a1
label_2dbc80:
    if (ctx->pc == 0x2DBC80u) {
        ctx->pc = 0x2DBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC7Cu;
        // 0x2dbc80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBC84u;
        goto label_2dbc84;
    }
    ctx->pc = 0x2DBC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2DBC84u);
        ctx->pc = 0x2DBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC7Cu;
        // 0x2dbc80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBC7Cu, 0x2DBC84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DBC84u;
label_2dbc84:
    // 0x2dbc84: 0x14500173  bne         $v0, $s0, . + 4 + (0x173 << 2)
label_2dbc88:
    if (ctx->pc == 0x2DBC88u) {
        ctx->pc = 0x2DBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC84u;
        // 0x2dbc88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBC8Cu;
        goto label_2dbc8c;
    }
    ctx->pc = 0x2DBC84u;
    {
        const bool branch_taken_0x2dbc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2DBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC84u;
        // 0x2dbc88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc84) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DBC8Cu;
label_2dbc8c:
    // 0x2dbc8c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2dbc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2dbc90:
    // 0x2dbc90: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dbc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dbc94:
    // 0x2dbc94: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2dbc98:
    if (ctx->pc == 0x2DBC98u) {
        ctx->pc = 0x2DBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC94u;
        // 0x2dbc98: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBC9Cu;
        goto label_2dbc9c;
    }
    ctx->pc = 0x2DBC94u;
    {
        const bool branch_taken_0x2dbc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc94) {
            ctx->pc = 0x2DBC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBC94u;
            // 0x2dbc98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC9Cu;
            goto label_2dbc9c;
        }
    }
    ctx->pc = 0x2DBC9Cu;
label_2dbc9c:
    // 0x2dbc9c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2dbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2dbca0:
    // 0x2dbca0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2dbca0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2dbca4:
    // 0x2dbca4: 0x2010  mfhi        $a0
    ctx->pc = 0x2dbca4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2dbca8:
    // 0x2dbca8: 0x1480016a  bnez        $a0, . + 4 + (0x16A << 2)
label_2dbcac:
    if (ctx->pc == 0x2DBCACu) {
        ctx->pc = 0x2DBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCA8u;
        // 0x2dbcac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBCB0u;
        goto label_2dbcb0;
    }
    ctx->pc = 0x2DBCA8u;
    {
        const bool branch_taken_0x2dbca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCA8u;
        // 0x2dbcac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbca8) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DBCB0u;
label_2dbcb0:
    // 0x2dbcb0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2dbcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2dbcb4:
    // 0x2dbcb4: 0xc10587a  jal         func_4161E8
label_2dbcb8:
    if (ctx->pc == 0x2DBCB8u) {
        ctx->pc = 0x2DBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCB4u;
        // 0x2dbcb8: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBCBCu;
        goto label_2dbcbc;
    }
    ctx->pc = 0x2DBCB4u;
    SET_GPR_U32(ctx, 31, 0x2DBCBCu);
    ctx->pc = 0x2DBCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBCB4u;
    // 0x2dbcb8: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2DBCB4u, 0x2DBCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBCBCu;
label_2dbcbc:
    // 0x2dbcbc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2dbcbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dbcc0:
    // 0x2dbcc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dbcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dbcc4:
    // 0x2dbcc4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2dbcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2dbcc8:
    // 0x2dbcc8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2dbcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2dbccc:
    // 0x2dbccc: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2dbcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2dbcd0:
    // 0x2dbcd0: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2dbcd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2dbcd4:
    // 0x2dbcd4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2dbcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2dbcd8:
    // 0x2dbcd8: 0xc0cdb38  jal         func_336CE0
label_2dbcdc:
    if (ctx->pc == 0x2DBCDCu) {
        ctx->pc = 0x2DBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCD8u;
        // 0x2dbcdc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBCE0u;
        goto label_2dbce0;
    }
    ctx->pc = 0x2DBCD8u;
    SET_GPR_U32(ctx, 31, 0x2DBCE0u);
    ctx->pc = 0x2DBCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBCD8u;
    // 0x2dbcdc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DBCD8u, 0x2DBCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBCE0u;
label_2dbce0:
    // 0x2dbce0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2dbce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2dbce4:
    // 0x2dbce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dbce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dbce8:
    // 0x2dbce8: 0x0  nop
    ctx->pc = 0x2dbce8u;
    // NOP
label_2dbcec:
    // 0x2dbcec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dbcecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dbcf0:
    // 0x2dbcf0: 0x0  nop
    ctx->pc = 0x2dbcf0u;
    // NOP
label_2dbcf4:
    // 0x2dbcf4: 0x45000156  bc1f        . + 4 + (0x156 << 2)
label_2dbcf8:
    if (ctx->pc == 0x2DBCF8u) {
        ctx->pc = 0x2DBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCF4u;
        // 0x2dbcf8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBCFCu;
        goto label_2dbcfc;
    }
    ctx->pc = 0x2DBCF4u;
    {
        const bool branch_taken_0x2dbcf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCF4u;
        // 0x2dbcf8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbcf4) {
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DBCFCu;
label_2dbcfc:
    // 0x2dbcfc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2dbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2dbd00:
    // 0x2dbd00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dbd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd04:
    // 0x2dbd04: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2dbd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2dbd08:
    // 0x2dbd08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dbd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2dbd0c:
    // 0x2dbd0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dbd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dbd10:
    // 0x2dbd10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dbd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2dbd14:
    // 0x2dbd14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2dbd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2dbd18:
    // 0x2dbd18: 0x0  nop
    ctx->pc = 0x2dbd18u;
    // NOP
label_2dbd1c:
    // 0x2dbd1c: 0x0  nop
    ctx->pc = 0x2dbd1cu;
    // NOP
label_2dbd20:
    // 0x2dbd20: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
label_2dbd24:
    if (ctx->pc == 0x2DBD24u) {
        ctx->pc = 0x2DBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD20u;
        // 0x2dbd24: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBD28u;
        goto label_2dbd28;
    }
    ctx->pc = 0x2DBD20u;
    {
        const bool branch_taken_0x2dbd20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2DBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD20u;
        // 0x2dbd24: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd20) {
            ctx->pc = 0x2DBD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbd10;
        }
    }
    ctx->pc = 0x2DBD28u;
label_2dbd28:
    // 0x2dbd28: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2dbd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2dbd2c:
    // 0x2dbd2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dbd2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dbd30:
    // 0x2dbd30: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2dbd30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_2dbd34:
    // 0x2dbd34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dbd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd38:
    // 0x2dbd38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dbd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd3c:
    // 0x2dbd3c: 0x24e7c498  addiu       $a3, $a3, -0x3B68
    ctx->pc = 0x2dbd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952088));
label_2dbd40:
    // 0x2dbd40: 0xc0a71b4  jal         func_29C6D0
label_2dbd44:
    if (ctx->pc == 0x2DBD44u) {
        ctx->pc = 0x2DBD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD40u;
        // 0x2dbd44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBD48u;
        goto label_2dbd48;
    }
    ctx->pc = 0x2DBD40u;
    SET_GPR_U32(ctx, 31, 0x2DBD48u);
    ctx->pc = 0x2DBD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD40u;
    // 0x2dbd44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x2DBD40u, 0x2DBD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD48u;
label_2dbd48:
    // 0x2dbd48: 0xc136b80  jal         func_4DAE00
label_2dbd4c:
    if (ctx->pc == 0x2DBD4Cu) {
        ctx->pc = 0x2DBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD48u;
        // 0x2dbd4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBD50u;
        goto label_2dbd50;
    }
    ctx->pc = 0x2DBD48u;
    SET_GPR_U32(ctx, 31, 0x2DBD50u);
    ctx->pc = 0x2DBD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD48u;
    // 0x2dbd4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2DBD48u, 0x2DBD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD50u;
label_2dbd50:
    // 0x2dbd50: 0x10400140  beqz        $v0, . + 4 + (0x140 << 2)
label_2dbd54:
    if (ctx->pc == 0x2DBD54u) {
        ctx->pc = 0x2DBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD50u;
        // 0x2dbd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBD58u;
        goto label_2dbd58;
    }
    ctx->pc = 0x2DBD50u;
    {
        const bool branch_taken_0x2dbd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD50u;
        // 0x2dbd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd50) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DBD58u;
label_2dbd58:
    // 0x2dbd58: 0xc0a36c8  jal         func_28DB20
label_2dbd5c:
    if (ctx->pc == 0x2DBD5Cu) {
        ctx->pc = 0x2DBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD58u;
        // 0x2dbd5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBD60u;
        goto label_2dbd60;
    }
    ctx->pc = 0x2DBD58u;
    SET_GPR_U32(ctx, 31, 0x2DBD60u);
    ctx->pc = 0x2DBD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD58u;
    // 0x2dbd5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DBD58u, 0x2DBD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD60u;
label_2dbd60:
    // 0x2dbd60: 0x1000013c  b           . + 4 + (0x13C << 2)
label_2dbd64:
    if (ctx->pc == 0x2DBD64u) {
        ctx->pc = 0x2DBD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD60u;
        // 0x2dbd64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBD68u;
        goto label_2dbd68;
    }
    ctx->pc = 0x2DBD60u;
    {
        const bool branch_taken_0x2dbd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD60u;
        // 0x2dbd64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd60) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DBD68u;
label_2dbd68:
    // 0x2dbd68: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2dbd68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dbd6c:
    // 0x2dbd6c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2dbd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2dbd70:
    // 0x2dbd70: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2dbd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd74:
    // 0x2dbd74: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2dbd74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2dbd78:
    // 0x2dbd78: 0x26530090  addiu       $s3, $s2, 0x90
    ctx->pc = 0x2dbd78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2dbd7c:
    // 0x2dbd7c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2dbd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dbd80:
    // 0x2dbd80: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2dbd80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2dbd84:
    // 0x2dbd84: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x2dbd84u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2dbd88:
    // 0x2dbd88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2dbd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2dbd8c:
    // 0x2dbd8c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2dbd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2dbd90:
    // 0x2dbd90: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2dbd90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2dbd94:
    // 0x2dbd94: 0xc10587a  jal         func_4161E8
label_2dbd98:
    if (ctx->pc == 0x2DBD98u) {
        ctx->pc = 0x2DBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD94u;
        // 0x2dbd98: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBD9Cu;
        goto label_2dbd9c;
    }
    ctx->pc = 0x2DBD94u;
    SET_GPR_U32(ctx, 31, 0x2DBD9Cu);
    ctx->pc = 0x2DBD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD94u;
    // 0x2dbd98: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2DBD94u, 0x2DBD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD9Cu;
label_2dbd9c:
    // 0x2dbd9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dbd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbda0:
    // 0x2dbda0: 0xc0cdb38  jal         func_336CE0
label_2dbda4:
    if (ctx->pc == 0x2DBDA4u) {
        ctx->pc = 0x2DBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDA0u;
        // 0x2dbda4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBDA8u;
        goto label_2dbda8;
    }
    ctx->pc = 0x2DBDA0u;
    SET_GPR_U32(ctx, 31, 0x2DBDA8u);
    ctx->pc = 0x2DBDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDA0u;
    // 0x2dbda4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DBDA0u, 0x2DBDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBDA8u;
label_2dbda8:
    // 0x2dbda8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2dbda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2dbdac:
    // 0x2dbdac: 0x1070004f  beq         $v1, $s0, . + 4 + (0x4F << 2)
label_2dbdb0:
    if (ctx->pc == 0x2DBDB0u) {
        ctx->pc = 0x2DBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDACu;
        // 0x2dbdb0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBDB4u;
        goto label_2dbdb4;
    }
    ctx->pc = 0x2DBDACu;
    {
        const bool branch_taken_0x2dbdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2DBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDACu;
        // 0x2dbdb0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdac) {
            ctx->pc = 0x2DBEECu;
            goto label_2dbeec;
        }
    }
    ctx->pc = 0x2DBDB4u;
label_2dbdb4:
    // 0x2dbdb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2dbdb8:
    if (ctx->pc == 0x2DBDB8u) {
        ctx->pc = 0x2DBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDB4u;
        // 0x2dbdb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBDBCu;
        goto label_2dbdbc;
    }
    ctx->pc = 0x2DBDB4u;
    {
        const bool branch_taken_0x2dbdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDB4u;
        // 0x2dbdb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdb4) {
            ctx->pc = 0x2DBDCCu;
            goto label_2dbdcc;
        }
    }
    ctx->pc = 0x2DBDBCu;
label_2dbdbc:
    // 0x2dbdbc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2dbdc0:
    if (ctx->pc == 0x2DBDC0u) {
        ctx->pc = 0x2DBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDBCu;
        // 0x2dbdc0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBDC4u;
        goto label_2dbdc4;
    }
    ctx->pc = 0x2DBDBCu;
    {
        const bool branch_taken_0x2dbdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDBCu;
        // 0x2dbdc0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdbc) {
            ctx->pc = 0x2DBDDCu;
            goto label_2dbddc;
        }
    }
    ctx->pc = 0x2DBDC4u;
label_2dbdc4:
    // 0x2dbdc4: 0x10000124  b           . + 4 + (0x124 << 2)
label_2dbdc8:
    if (ctx->pc == 0x2DBDC8u) {
        ctx->pc = 0x2DBDCCu;
        goto label_2dbdcc;
    }
    ctx->pc = 0x2DBDC4u;
    {
        const bool branch_taken_0x2dbdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbdc4) {
            ctx->pc = 0x2DC258u;
            goto label_2dc258;
        }
    }
    ctx->pc = 0x2DBDCCu;
label_2dbdcc:
    // 0x2dbdcc: 0x506200b2  beql        $v1, $v0, . + 4 + (0xB2 << 2)
label_2dbdd0:
    if (ctx->pc == 0x2DBDD0u) {
        ctx->pc = 0x2DBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDCCu;
        // 0x2dbdd0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBDD4u;
        goto label_2dbdd4;
    }
    ctx->pc = 0x2DBDCCu;
    {
        const bool branch_taken_0x2dbdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dbdcc) {
            ctx->pc = 0x2DBDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBDCCu;
            // 0x2dbdd0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC098u;
            goto label_2dc098;
        }
    }
    ctx->pc = 0x2DBDD4u;
label_2dbdd4:
    // 0x2dbdd4: 0x10000120  b           . + 4 + (0x120 << 2)
label_2dbdd8:
    if (ctx->pc == 0x2DBDD8u) {
        ctx->pc = 0x2DBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDD4u;
        // 0x2dbdd8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBDDCu;
        goto label_2dbddc;
    }
    ctx->pc = 0x2DBDD4u;
    {
        const bool branch_taken_0x2dbdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDD4u;
        // 0x2dbdd8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdd4) {
            ctx->pc = 0x2DC258u;
            goto label_2dc258;
        }
    }
    ctx->pc = 0x2DBDDCu;
label_2dbddc:
    // 0x2dbddc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2dbddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dbde0:
    // 0x2dbde0: 0x0  nop
    ctx->pc = 0x2dbde0u;
    // NOP
label_2dbde4:
    // 0x2dbde4: 0x45020104  bc1fl       . + 4 + (0x104 << 2)
label_2dbde8:
    if (ctx->pc == 0x2DBDE8u) {
        ctx->pc = 0x2DBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDE4u;
        // 0x2dbde8: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBDECu;
        goto label_2dbdec;
    }
    ctx->pc = 0x2DBDE4u;
    {
        const bool branch_taken_0x2dbde4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbde4) {
            ctx->pc = 0x2DBDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBDE4u;
            // 0x2dbde8: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC1F8u;
            goto label_2dc1f8;
        }
    }
    ctx->pc = 0x2DBDECu;
label_2dbdec:
    // 0x2dbdec: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x2dbdecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2dbdf0:
    // 0x2dbdf0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2dbdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2dbdf4:
    // 0x2dbdf4: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2dbdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2dbdf8:
    // 0x2dbdf8: 0xc0cd7d2  jal         func_335F48
label_2dbdfc:
    if (ctx->pc == 0x2DBDFCu) {
        ctx->pc = 0x2DBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDF8u;
        // 0x2dbdfc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBE00u;
        goto label_2dbe00;
    }
    ctx->pc = 0x2DBDF8u;
    SET_GPR_U32(ctx, 31, 0x2DBE00u);
    ctx->pc = 0x2DBDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDF8u;
    // 0x2dbdfc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2DBDF8u, 0x2DBE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE00u;
label_2dbe00:
    // 0x2dbe00: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2dbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2dbe04:
    // 0x2dbe04: 0xc105896  jal         func_416258
label_2dbe08:
    if (ctx->pc == 0x2DBE08u) {
        ctx->pc = 0x2DBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE04u;
        // 0x2dbe08: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBE0Cu;
        goto label_2dbe0c;
    }
    ctx->pc = 0x2DBE04u;
    SET_GPR_U32(ctx, 31, 0x2DBE0Cu);
    ctx->pc = 0x2DBE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE04u;
    // 0x2dbe08: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2DBE04u, 0x2DBE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE0Cu;
label_2dbe0c:
    // 0x2dbe0c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2dbe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_2dbe10:
    // 0x2dbe10: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2dbe10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_2dbe14:
    // 0x2dbe14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dbe14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dbe18:
    // 0x2dbe18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dbe18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2dbe1c:
    // 0x2dbe1c: 0xc0cd742  jal         func_335D08
label_2dbe20:
    if (ctx->pc == 0x2DBE20u) {
        ctx->pc = 0x2DBE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE1Cu;
        // 0x2dbe20: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBE24u;
        goto label_2dbe24;
    }
    ctx->pc = 0x2DBE1Cu;
    SET_GPR_U32(ctx, 31, 0x2DBE24u);
    ctx->pc = 0x2DBE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE1Cu;
    // 0x2dbe20: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2DBE1Cu, 0x2DBE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE24u;
label_2dbe24:
    // 0x2dbe24: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dbe24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2dbe28:
    // 0x2dbe28: 0xc0cdd2e  jal         func_3374B8
label_2dbe2c:
    if (ctx->pc == 0x2DBE2Cu) {
        ctx->pc = 0x2DBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE28u;
        // 0x2dbe2c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBE30u;
        goto label_2dbe30;
    }
    ctx->pc = 0x2DBE28u;
    SET_GPR_U32(ctx, 31, 0x2DBE30u);
    ctx->pc = 0x2DBE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE28u;
    // 0x2dbe2c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2DBE28u, 0x2DBE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE30u;
label_2dbe30:
    // 0x2dbe30: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2dbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2dbe34:
    // 0x2dbe34: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2dbe38:
    if (ctx->pc == 0x2DBE38u) {
        ctx->pc = 0x2DBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE34u;
        // 0x2dbe38: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBE3Cu;
        goto label_2dbe3c;
    }
    ctx->pc = 0x2DBE34u;
    {
        const bool branch_taken_0x2dbe34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE34u;
        // 0x2dbe38: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe34) {
            ctx->pc = 0x2DBEA0u;
            goto label_2dbea0;
        }
    }
    ctx->pc = 0x2DBE3Cu;
label_2dbe3c:
    // 0x2dbe3c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2dbe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2dbe40:
    // 0x2dbe40: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2dbe40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2dbe44:
    // 0x2dbe44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dbe44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dbe48:
    // 0x2dbe48: 0x0  nop
    ctx->pc = 0x2dbe48u;
    // NOP
label_2dbe4c:
    // 0x2dbe4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dbe4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dbe50:
    // 0x2dbe50: 0x0  nop
    ctx->pc = 0x2dbe50u;
    // NOP
label_2dbe54:
    // 0x2dbe54: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2dbe58:
    if (ctx->pc == 0x2DBE58u) {
        ctx->pc = 0x2DBE5Cu;
        goto label_2dbe5c;
    }
    ctx->pc = 0x2DBE54u;
    {
        const bool branch_taken_0x2dbe54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbe54) {
            ctx->pc = 0x2DBEA0u;
            goto label_2dbea0;
        }
    }
    ctx->pc = 0x2DBE5Cu;
label_2dbe5c:
    // 0x2dbe5c: 0xc0a367c  jal         func_28D9F0
label_2dbe60:
    if (ctx->pc == 0x2DBE60u) {
        ctx->pc = 0x2DBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE5Cu;
        // 0x2dbe60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBE64u;
        goto label_2dbe64;
    }
    ctx->pc = 0x2DBE5Cu;
    SET_GPR_U32(ctx, 31, 0x2DBE64u);
    ctx->pc = 0x2DBE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE5Cu;
    // 0x2dbe60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DBE5Cu, 0x2DBE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE64u;
label_2dbe64:
    // 0x2dbe64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dbe64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe68:
    // 0x2dbe68: 0x120000fa  beqz        $s0, . + 4 + (0xFA << 2)
label_2dbe6c:
    if (ctx->pc == 0x2DBE6Cu) {
        ctx->pc = 0x2DBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE68u;
        // 0x2dbe6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBE70u;
        goto label_2dbe70;
    }
    ctx->pc = 0x2DBE68u;
    {
        const bool branch_taken_0x2dbe68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE68u;
        // 0x2dbe6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe68) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DBE70u;
label_2dbe70:
    // 0x2dbe70: 0xc105896  jal         func_416258
label_2dbe74:
    if (ctx->pc == 0x2DBE74u) {
        ctx->pc = 0x2DBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE70u;
        // 0x2dbe74: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBE78u;
        goto label_2dbe78;
    }
    ctx->pc = 0x2DBE70u;
    SET_GPR_U32(ctx, 31, 0x2DBE78u);
    ctx->pc = 0x2DBE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE70u;
    // 0x2dbe74: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2DBE70u, 0x2DBE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE78u;
label_2dbe78:
    // 0x2dbe78: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dbe78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dbe7c:
    // 0x2dbe7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe80:
    // 0x2dbe80: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2dbe80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2dbe84:
    // 0x2dbe84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dbe84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2dbe88:
    // 0x2dbe88: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2dbe88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dbe8c:
    // 0x2dbe8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dbe8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2dbe90:
    // 0x2dbe90: 0xc0bf70a  jal         func_2FDC28
label_2dbe94:
    if (ctx->pc == 0x2DBE94u) {
        ctx->pc = 0x2DBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE90u;
        // 0x2dbe94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBE98u;
        goto label_2dbe98;
    }
    ctx->pc = 0x2DBE90u;
    SET_GPR_U32(ctx, 31, 0x2DBE98u);
    ctx->pc = 0x2DBE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE90u;
    // 0x2dbe94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2DBE90u, 0x2DBE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE98u;
label_2dbe98:
    // 0x2dbe98: 0x100000ee  b           . + 4 + (0xEE << 2)
label_2dbe9c:
    if (ctx->pc == 0x2DBE9Cu) {
        ctx->pc = 0x2DBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE98u;
        // 0x2dbe9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBEA0u;
        goto label_2dbea0;
    }
    ctx->pc = 0x2DBE98u;
    {
        const bool branch_taken_0x2dbe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE98u;
        // 0x2dbe9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe98) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DBEA0u;
label_2dbea0:
    // 0x2dbea0: 0xc10587a  jal         func_4161E8
label_2dbea4:
    if (ctx->pc == 0x2DBEA4u) {
        ctx->pc = 0x2DBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEA0u;
        // 0x2dbea4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBEA8u;
        goto label_2dbea8;
    }
    ctx->pc = 0x2DBEA0u;
    SET_GPR_U32(ctx, 31, 0x2DBEA8u);
    ctx->pc = 0x2DBEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEA0u;
    // 0x2dbea4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2DBEA0u, 0x2DBEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEA8u;
label_2dbea8:
    // 0x2dbea8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2dbea8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dbeac:
    // 0x2dbeac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dbeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dbeb0:
    // 0x2dbeb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dbeb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2dbeb4:
    // 0x2dbeb4: 0xc0cd7a8  jal         func_335EA0
label_2dbeb8:
    if (ctx->pc == 0x2DBEB8u) {
        ctx->pc = 0x2DBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEB4u;
        // 0x2dbeb8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBEBCu;
        goto label_2dbebc;
    }
    ctx->pc = 0x2DBEB4u;
    SET_GPR_U32(ctx, 31, 0x2DBEBCu);
    ctx->pc = 0x2DBEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEB4u;
    // 0x2dbeb8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x2DBEB4u, 0x2DBEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEBCu;
label_2dbebc:
    // 0x2dbebc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2dbebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dbec0:
    // 0x2dbec0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2dbec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2dbec4:
    // 0x2dbec4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2dbec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2dbec8:
    // 0x2dbec8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2dbec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dbecc:
    // 0x2dbecc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2dbeccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2dbed0:
    // 0x2dbed0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2dbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2dbed4:
    // 0x2dbed4: 0x40f809  jalr        $v0
label_2dbed8:
    if (ctx->pc == 0x2DBED8u) {
        ctx->pc = 0x2DBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBED4u;
        // 0x2dbed8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBEDCu;
        goto label_2dbedc;
    }
    ctx->pc = 0x2DBED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DBEDCu);
        ctx->pc = 0x2DBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBED4u;
        // 0x2dbed8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBED4u, 0x2DBEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DBEDCu;
label_2dbedc:
    // 0x2dbedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dbedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dbee0:
    // 0x2dbee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dbee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbee4:
    // 0x2dbee4: 0x100000db  b           . + 4 + (0xDB << 2)
label_2dbee8:
    if (ctx->pc == 0x2DBEE8u) {
        ctx->pc = 0x2DBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEE4u;
        // 0x2dbee8: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBEECu;
        goto label_2dbeec;
    }
    ctx->pc = 0x2DBEE4u;
    {
        const bool branch_taken_0x2dbee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEE4u;
        // 0x2dbee8: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbee4) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DBEECu;
label_2dbeec:
    // 0x2dbeec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dbef0:
    // 0x2dbef0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2dbef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2dbef4:
    // 0x2dbef4: 0xc1058b4  jal         func_4162D0
label_2dbef8:
    if (ctx->pc == 0x2DBEF8u) {
        ctx->pc = 0x2DBEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEF4u;
        // 0x2dbef8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBEFCu;
        goto label_2dbefc;
    }
    ctx->pc = 0x2DBEF4u;
    SET_GPR_U32(ctx, 31, 0x2DBEFCu);
    ctx->pc = 0x2DBEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEF4u;
    // 0x2dbef8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4162D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162D0u, 0x2DBEF4u, 0x2DBEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEFCu;
label_2dbefc:
    // 0x2dbefc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dbefcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbf00:
    // 0x2dbf00: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2dbf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dbf04:
    // 0x2dbf04: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x2dbf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2dbf08:
    // 0x2dbf08: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x2dbf08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2dbf0c:
    // 0x2dbf0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2dbf10:
    if (ctx->pc == 0x2DBF10u) {
        ctx->pc = 0x2DBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF0Cu;
        // 0x2dbf10: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF14u;
        goto label_2dbf14;
    }
    ctx->pc = 0x2DBF0Cu;
    {
        const bool branch_taken_0x2dbf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf0c) {
            ctx->pc = 0x2DBF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBF0Cu;
            // 0x2dbf10: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBF3Cu;
            goto label_2dbf3c;
        }
    }
    ctx->pc = 0x2DBF14u;
label_2dbf14:
    // 0x2dbf14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2dbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dbf18:
    // 0x2dbf18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dbf1c:
    // 0x2dbf1c: 0x24430468  addiu       $v1, $v0, 0x468
    ctx->pc = 0x2dbf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1128));
label_2dbf20:
    // 0x2dbf20: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2dbf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2dbf24:
    // 0x2dbf24: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
label_2dbf28:
    if (ctx->pc == 0x2DBF28u) {
        ctx->pc = 0x2DBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF24u;
        // 0x2dbf28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF2Cu;
        goto label_2dbf2c;
    }
    ctx->pc = 0x2DBF24u;
    {
        const bool branch_taken_0x2dbf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF24u;
        // 0x2dbf28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf24) {
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DBF2Cu;
label_2dbf2c:
    // 0x2dbf2c: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x2dbf2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2dbf30:
    // 0x2dbf30: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2dbf34:
    if (ctx->pc == 0x2DBF34u) {
        ctx->pc = 0x2DBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF30u;
        // 0x2dbf34: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF38u;
        goto label_2dbf38;
    }
    ctx->pc = 0x2DBF30u;
    {
        const bool branch_taken_0x2dbf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF30u;
        // 0x2dbf34: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf30) {
            ctx->pc = 0x2DBF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbf20;
        }
    }
    ctx->pc = 0x2DBF38u;
label_2dbf38:
    // 0x2dbf38: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2dbf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2dbf3c:
    // 0x2dbf3c: 0xc1059c6  jal         func_416718
label_2dbf40:
    if (ctx->pc == 0x2DBF40u) {
        ctx->pc = 0x2DBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF3Cu;
        // 0x2dbf40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF44u;
        goto label_2dbf44;
    }
    ctx->pc = 0x2DBF3Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF44u);
    ctx->pc = 0x2DBF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF3Cu;
    // 0x2dbf40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416718u, 0x2DBF3Cu, 0x2DBF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF44u;
label_2dbf44:
    // 0x2dbf44: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
label_2dbf48:
    if (ctx->pc == 0x2DBF48u) {
        ctx->pc = 0x2DBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF44u;
        // 0x2dbf48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF4Cu;
        goto label_2dbf4c;
    }
    ctx->pc = 0x2DBF44u;
    {
        const bool branch_taken_0x2dbf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF44u;
        // 0x2dbf48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf44) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DBF4Cu;
label_2dbf4c:
    // 0x2dbf4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dbf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dbf50:
    // 0x2dbf50: 0xc0a2ab0  jal         func_28AAC0
label_2dbf54:
    if (ctx->pc == 0x2DBF54u) {
        ctx->pc = 0x2DBF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF50u;
        // 0x2dbf54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF58u;
        goto label_2dbf58;
    }
    ctx->pc = 0x2DBF50u;
    SET_GPR_U32(ctx, 31, 0x2DBF58u);
    ctx->pc = 0x2DBF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF50u;
    // 0x2dbf54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2DBF50u, 0x2DBF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF58u;
label_2dbf58:
    // 0x2dbf58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dbf58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dbf5c:
    // 0x2dbf5c: 0xc0a2aca  jal         func_28AB28
label_2dbf60:
    if (ctx->pc == 0x2DBF60u) {
        ctx->pc = 0x2DBF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF5Cu;
        // 0x2dbf60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF64u;
        goto label_2dbf64;
    }
    ctx->pc = 0x2DBF5Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF64u);
    ctx->pc = 0x2DBF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF5Cu;
    // 0x2dbf60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB28u, 0x2DBF5Cu, 0x2DBF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF64u;
label_2dbf64:
    // 0x2dbf64: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2dbf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2dbf68:
    // 0x2dbf68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dbf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dbf6c:
    // 0x2dbf6c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2dbf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2dbf70:
    // 0x2dbf70: 0xc1059a4  jal         func_416690
label_2dbf74:
    if (ctx->pc == 0x2DBF74u) {
        ctx->pc = 0x2DBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF70u;
        // 0x2dbf74: 0x27a70054  addiu       $a3, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF78u;
        goto label_2dbf78;
    }
    ctx->pc = 0x2DBF70u;
    SET_GPR_U32(ctx, 31, 0x2DBF78u);
    ctx->pc = 0x2DBF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF70u;
    // 0x2dbf74: 0x27a70054  addiu       $a3, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416690u, 0x2DBF70u, 0x2DBF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF78u;
label_2dbf78:
    // 0x2dbf78: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2dbf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2dbf7c:
    // 0x2dbf7c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2dbf80:
    if (ctx->pc == 0x2DBF80u) {
        ctx->pc = 0x2DBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF7Cu;
        // 0x2dbf80: 0x3c107fff  lui         $s0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF84u;
        goto label_2dbf84;
    }
    ctx->pc = 0x2DBF7Cu;
    {
        const bool branch_taken_0x2dbf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF7Cu;
        // 0x2dbf80: 0x3c107fff  lui         $s0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf7c) {
            ctx->pc = 0x2DBF8Cu;
            goto label_2dbf8c;
        }
    }
    ctx->pc = 0x2DBF84u;
label_2dbf84:
    // 0x2dbf84: 0x1000000d  b           . + 4 + (0xD << 2)
label_2dbf88:
    if (ctx->pc == 0x2DBF88u) {
        ctx->pc = 0x2DBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF84u;
        // 0x2dbf88: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF8Cu;
        goto label_2dbf8c;
    }
    ctx->pc = 0x2DBF84u;
    {
        const bool branch_taken_0x2dbf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF84u;
        // 0x2dbf88: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf84) {
            ctx->pc = 0x2DBFBCu;
            goto label_2dbfbc;
        }
    }
    ctx->pc = 0x2DBF8Cu;
label_2dbf8c:
    // 0x2dbf8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2dbf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2dbf90:
    // 0x2dbf90: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2dbf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2dbf94:
    // 0x2dbf94: 0xc10d272  jal         func_4349C8
label_2dbf98:
    if (ctx->pc == 0x2DBF98u) {
        ctx->pc = 0x2DBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF94u;
        // 0x2dbf98: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBF9Cu;
        goto label_2dbf9c;
    }
    ctx->pc = 0x2DBF94u;
    SET_GPR_U32(ctx, 31, 0x2DBF9Cu);
    ctx->pc = 0x2DBF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF94u;
    // 0x2dbf98: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4349C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349C8u, 0x2DBF94u, 0x2DBF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF9Cu;
label_2dbf9c:
    // 0x2dbf9c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2dbf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2dbfa0:
    // 0x2dbfa0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2dbfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2dbfa4:
    // 0x2dbfa4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2dbfa4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2dbfa8:
    // 0x2dbfa8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2dbfac:
    if (ctx->pc == 0x2DBFACu) {
        ctx->pc = 0x2DBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFA8u;
        // 0x2dbfac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBFB0u;
        goto label_2dbfb0;
    }
    ctx->pc = 0x2DBFA8u;
    {
        const bool branch_taken_0x2dbfa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbfa8) {
            ctx->pc = 0x2DBFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBFA8u;
            // 0x2dbfac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBFB0u;
            goto label_2dbfb0;
        }
    }
    ctx->pc = 0x2DBFB0u;
label_2dbfb0:
    // 0x2dbfb0: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2dbfb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2dbfb4:
    // 0x2dbfb4: 0x2810  mfhi        $a1
    ctx->pc = 0x2dbfb4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2dbfb8:
    // 0x2dbfb8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2dbfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2dbfbc:
    // 0x2dbfbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dbfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dbfc0:
    // 0x2dbfc0: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x2dbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
label_2dbfc4:
    // 0x2dbfc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dbfc8:
    // 0x2dbfc8: 0x16620020  bne         $s3, $v0, . + 4 + (0x20 << 2)
label_2dbfcc:
    if (ctx->pc == 0x2DBFCCu) {
        ctx->pc = 0x2DBFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFC8u;
        // 0x2dbfcc: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBFD0u;
        goto label_2dbfd0;
    }
    ctx->pc = 0x2DBFC8u;
    {
        const bool branch_taken_0x2dbfc8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DBFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFC8u;
        // 0x2dbfcc: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbfc8) {
            ctx->pc = 0x2DC04Cu;
            goto label_2dc04c;
        }
    }
    ctx->pc = 0x2DBFD0u;
label_2dbfd0:
    // 0x2dbfd0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2dbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2dbfd4:
    // 0x2dbfd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2dbfd8:
    if (ctx->pc == 0x2DBFD8u) {
        ctx->pc = 0x2DBFDCu;
        goto label_2dbfdc;
    }
    ctx->pc = 0x2DBFD4u;
    {
        const bool branch_taken_0x2dbfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbfd4) {
            ctx->pc = 0x2DC004u;
            goto label_2dc004;
        }
    }
    ctx->pc = 0x2DBFDCu;
label_2dbfdc:
    // 0x2dbfdc: 0xc0a367c  jal         func_28D9F0
label_2dbfe0:
    if (ctx->pc == 0x2DBFE0u) {
        ctx->pc = 0x2DBFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFDCu;
        // 0x2dbfe0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBFE4u;
        goto label_2dbfe4;
    }
    ctx->pc = 0x2DBFDCu;
    SET_GPR_U32(ctx, 31, 0x2DBFE4u);
    ctx->pc = 0x2DBFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBFDCu;
    // 0x2dbfe0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DBFDCu, 0x2DBFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFE4u;
label_2dbfe4:
    // 0x2dbfe4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_2dbfe8:
    if (ctx->pc == 0x2DBFE8u) {
        ctx->pc = 0x2DBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFE4u;
        // 0x2dbfe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBFECu;
        goto label_2dbfec;
    }
    ctx->pc = 0x2DBFE4u;
    {
        const bool branch_taken_0x2dbfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFE4u;
        // 0x2dbfe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbfe4) {
            ctx->pc = 0x2DC088u;
            goto label_2dc088;
        }
    }
    ctx->pc = 0x2DBFECu;
label_2dbfec:
    // 0x2dbfec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dbfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dbff0:
    // 0x2dbff0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2dbff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2dbff4:
    // 0x2dbff4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dbff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2dbff8:
    // 0x2dbff8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dbff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dbffc:
    // 0x2dbffc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2dc000:
    if (ctx->pc == 0x2DC000u) {
        ctx->pc = 0x2DC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFFCu;
        // 0x2dc000: 0x2406029c  addiu       $a2, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC004u;
        goto label_2dc004;
    }
    ctx->pc = 0x2DBFFCu;
    {
        const bool branch_taken_0x2dbffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFFCu;
        // 0x2dc000: 0x2406029c  addiu       $a2, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbffc) {
            ctx->pc = 0x2DC07Cu;
            goto label_2dc07c;
        }
    }
    ctx->pc = 0x2DC004u;
label_2dc004:
    // 0x2dc004: 0xc0a367c  jal         func_28D9F0
label_2dc008:
    if (ctx->pc == 0x2DC008u) {
        ctx->pc = 0x2DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC004u;
        // 0x2dc008: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC00Cu;
        goto label_2dc00c;
    }
    ctx->pc = 0x2DC004u;
    SET_GPR_U32(ctx, 31, 0x2DC00Cu);
    ctx->pc = 0x2DC008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC004u;
    // 0x2dc008: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DC004u, 0x2DC00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC00Cu;
label_2dc00c:
    // 0x2dc00c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2dc010:
    if (ctx->pc == 0x2DC010u) {
        ctx->pc = 0x2DC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC00Cu;
        // 0x2dc010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC014u;
        goto label_2dc014;
    }
    ctx->pc = 0x2DC00Cu;
    {
        const bool branch_taken_0x2dc00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC00Cu;
        // 0x2dc010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc00c) {
            ctx->pc = 0x2DC034u;
            goto label_2dc034;
        }
    }
    ctx->pc = 0x2DC014u;
label_2dc014:
    // 0x2dc014: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dc014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dc018:
    // 0x2dc018: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2dc018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2dc01c:
    // 0x2dc01c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dc01cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2dc020:
    // 0x2dc020: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dc020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dc024:
    // 0x2dc024: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2dc024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2dc028:
    // 0x2dc028: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2dc028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dc02c:
    // 0x2dc02c: 0xc0be8c0  jal         func_2FA300
label_2dc030:
    if (ctx->pc == 0x2DC030u) {
        ctx->pc = 0x2DC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC02Cu;
        // 0x2dc030: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC034u;
        goto label_2dc034;
    }
    ctx->pc = 0x2DC02Cu;
    SET_GPR_U32(ctx, 31, 0x2DC034u);
    ctx->pc = 0x2DC030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC02Cu;
    // 0x2dc030: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2DC02Cu, 0x2DC034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC034u;
label_2dc034:
    // 0x2dc034: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2dc034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2dc038:
    // 0x2dc038: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dc038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc03c:
    // 0x2dc03c: 0xc10594c  jal         func_416530
label_2dc040:
    if (ctx->pc == 0x2DC040u) {
        ctx->pc = 0x2DC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC03Cu;
        // 0x2dc040: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC044u;
        goto label_2dc044;
    }
    ctx->pc = 0x2DC03Cu;
    SET_GPR_U32(ctx, 31, 0x2DC044u);
    ctx->pc = 0x2DC040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC03Cu;
    // 0x2dc040: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416530u, 0x2DC03Cu, 0x2DC044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC044u;
label_2dc044:
    // 0x2dc044: 0x10000082  b           . + 4 + (0x82 << 2)
label_2dc048:
    if (ctx->pc == 0x2DC048u) {
        ctx->pc = 0x2DC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC044u;
        // 0x2dc048: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC04Cu;
        goto label_2dc04c;
    }
    ctx->pc = 0x2DC044u;
    {
        const bool branch_taken_0x2dc044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC044u;
        // 0x2dc048: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc044) {
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DC04Cu;
label_2dc04c:
    // 0x2dc04c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2dc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dc050:
    // 0x2dc050: 0x16620080  bne         $s3, $v0, . + 4 + (0x80 << 2)
label_2dc054:
    if (ctx->pc == 0x2DC054u) {
        ctx->pc = 0x2DC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC050u;
        // 0x2dc054: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC058u;
        goto label_2dc058;
    }
    ctx->pc = 0x2DC050u;
    {
        const bool branch_taken_0x2dc050 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC050u;
        // 0x2dc054: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc050) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DC058u;
label_2dc058:
    // 0x2dc058: 0xc0a367c  jal         func_28D9F0
label_2dc05c:
    if (ctx->pc == 0x2DC05Cu) {
        ctx->pc = 0x2DC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC058u;
        // 0x2dc05c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC060u;
        goto label_2dc060;
    }
    ctx->pc = 0x2DC058u;
    SET_GPR_U32(ctx, 31, 0x2DC060u);
    ctx->pc = 0x2DC05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC058u;
    // 0x2dc05c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DC058u, 0x2DC060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC060u;
label_2dc060:
    // 0x2dc060: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2dc064:
    if (ctx->pc == 0x2DC064u) {
        ctx->pc = 0x2DC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC060u;
        // 0x2dc064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC068u;
        goto label_2dc068;
    }
    ctx->pc = 0x2DC060u;
    {
        const bool branch_taken_0x2dc060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC060u;
        // 0x2dc064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc060) {
            ctx->pc = 0x2DC088u;
            goto label_2dc088;
        }
    }
    ctx->pc = 0x2DC068u;
label_2dc068:
    // 0x2dc068: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dc068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dc06c:
    // 0x2dc06c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2dc06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2dc070:
    // 0x2dc070: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dc070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2dc074:
    // 0x2dc074: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dc074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dc078:
    // 0x2dc078: 0x2406029f  addiu       $a2, $zero, 0x29F
    ctx->pc = 0x2dc078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_2dc07c:
    // 0x2dc07c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2dc07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dc080:
    // 0x2dc080: 0xc0be91a  jal         func_2FA468
label_2dc084:
    if (ctx->pc == 0x2DC084u) {
        ctx->pc = 0x2DC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC080u;
        // 0x2dc084: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC088u;
        goto label_2dc088;
    }
    ctx->pc = 0x2DC080u;
    SET_GPR_U32(ctx, 31, 0x2DC088u);
    ctx->pc = 0x2DC084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC080u;
    // 0x2dc084: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA468u, 0x2DC080u, 0x2DC088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC088u;
label_2dc088:
    // 0x2dc088: 0xc0b6efc  jal         func_2DBBF0
label_2dc08c:
    if (ctx->pc == 0x2DC08Cu) {
        ctx->pc = 0x2DC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC088u;
        // 0x2dc08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC090u;
        goto label_2dc090;
    }
    ctx->pc = 0x2DC088u;
    SET_GPR_U32(ctx, 31, 0x2DC090u);
    ctx->pc = 0x2DC08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC088u;
    // 0x2dc08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBBF0u, 0x2DC088u, 0x2DC090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC090u;
label_2dc090:
    // 0x2dc090: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2dc094:
    if (ctx->pc == 0x2DC094u) {
        ctx->pc = 0x2DC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC090u;
        // 0x2dc094: 0xa222002f  sb          $v0, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC098u;
        goto label_2dc098;
    }
    ctx->pc = 0x2DC090u;
    {
        const bool branch_taken_0x2dc090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC090u;
        // 0x2dc094: 0xa222002f  sb          $v0, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc090) {
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DC098u;
label_2dc098:
    // 0x2dc098: 0xc0a2fd0  jal         func_28BF40
label_2dc09c:
    if (ctx->pc == 0x2DC09Cu) {
        ctx->pc = 0x2DC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC098u;
        // 0x2dc09c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC0A0u;
        goto label_2dc0a0;
    }
    ctx->pc = 0x2DC098u;
    SET_GPR_U32(ctx, 31, 0x2DC0A0u);
    ctx->pc = 0x2DC09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC098u;
    // 0x2dc09c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF40u, 0x2DC098u, 0x2DC0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0A0u;
label_2dc0a0:
    // 0x2dc0a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dc0a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc0a4:
    // 0x2dc0a4: 0x5670001d  bnel        $s3, $s0, . + 4 + (0x1D << 2)
label_2dc0a8:
    if (ctx->pc == 0x2DC0A8u) {
        ctx->pc = 0x2DC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0A4u;
        // 0x2dc0a8: 0x8e420178  lw          $v0, 0x178($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC0ACu;
        goto label_2dc0ac;
    }
    ctx->pc = 0x2DC0A4u;
    {
        const bool branch_taken_0x2dc0a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x2dc0a4) {
            ctx->pc = 0x2DC0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC0A4u;
            // 0x2dc0a8: 0x8e420178  lw          $v0, 0x178($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC11Cu;
            goto label_2dc11c;
        }
    }
    ctx->pc = 0x2DC0ACu;
label_2dc0ac:
    // 0x2dc0ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2dc0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dc0b0:
    // 0x2dc0b0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2dc0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2dc0b4:
    // 0x2dc0b4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2dc0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2dc0b8:
    // 0x2dc0b8: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2dc0bc:
    if (ctx->pc == 0x2DC0BCu) {
        ctx->pc = 0x2DC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0B8u;
        // 0x2dc0bc: 0x8e420178  lw          $v0, 0x178($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC0C0u;
        goto label_2dc0c0;
    }
    ctx->pc = 0x2DC0B8u;
    {
        const bool branch_taken_0x2dc0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc0b8) {
            ctx->pc = 0x2DC0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC0B8u;
            // 0x2dc0bc: 0x8e420178  lw          $v0, 0x178($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC11Cu;
            goto label_2dc11c;
        }
    }
    ctx->pc = 0x2DC0C0u;
label_2dc0c0:
    // 0x2dc0c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2dc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2dc0c4:
    // 0x2dc0c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dc0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dc0c8:
    // 0x2dc0c8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2dc0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2dc0cc:
    // 0x2dc0cc: 0xc1067b8  jal         func_419EE0
label_2dc0d0:
    if (ctx->pc == 0x2DC0D0u) {
        ctx->pc = 0x2DC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0CCu;
        // 0x2dc0d0: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC0D4u;
        goto label_2dc0d4;
    }
    ctx->pc = 0x2DC0CCu;
    SET_GPR_U32(ctx, 31, 0x2DC0D4u);
    ctx->pc = 0x2DC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC0CCu;
    // 0x2dc0d0: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2DC0CCu, 0x2DC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0D4u;
label_2dc0d4:
    // 0x2dc0d4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2dc0d8:
    if (ctx->pc == 0x2DC0D8u) {
        ctx->pc = 0x2DC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0D4u;
        // 0x2dc0d8: 0x8e420178  lw          $v0, 0x178($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC0DCu;
        goto label_2dc0dc;
    }
    ctx->pc = 0x2DC0D4u;
    {
        const bool branch_taken_0x2dc0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc0d4) {
            ctx->pc = 0x2DC0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC0D4u;
            // 0x2dc0d8: 0x8e420178  lw          $v0, 0x178($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC11Cu;
            goto label_2dc11c;
        }
    }
    ctx->pc = 0x2DC0DCu;
label_2dc0dc:
    // 0x2dc0dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dc0e0:
    // 0x2dc0e0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2dc0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2dc0e4:
    // 0x2dc0e4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2dc0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2dc0e8:
    // 0x2dc0e8: 0x5480000c  bnel        $a0, $zero, . + 4 + (0xC << 2)
label_2dc0ec:
    if (ctx->pc == 0x2DC0ECu) {
        ctx->pc = 0x2DC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0E8u;
        // 0x2dc0ec: 0x8e420178  lw          $v0, 0x178($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC0F0u;
        goto label_2dc0f0;
    }
    ctx->pc = 0x2DC0E8u;
    {
        const bool branch_taken_0x2dc0e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc0e8) {
            ctx->pc = 0x2DC0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC0E8u;
            // 0x2dc0ec: 0x8e420178  lw          $v0, 0x178($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC11Cu;
            goto label_2dc11c;
        }
    }
    ctx->pc = 0x2DC0F0u;
label_2dc0f0:
    // 0x2dc0f0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2dc0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dc0f4:
    // 0x2dc0f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dc0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dc0f8:
    // 0x2dc0f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dc0fc:
    // 0x2dc0fc: 0x0  nop
    ctx->pc = 0x2dc0fcu;
    // NOP
label_2dc100:
    // 0x2dc100: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dc100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dc104:
    // 0x2dc104: 0x0  nop
    ctx->pc = 0x2dc104u;
    // NOP
label_2dc108:
    // 0x2dc108: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2dc10c:
    if (ctx->pc == 0x2DC10Cu) {
        ctx->pc = 0x2DC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC108u;
        // 0x2dc10c: 0x8e420178  lw          $v0, 0x178($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC110u;
        goto label_2dc110;
    }
    ctx->pc = 0x2DC108u;
    {
        const bool branch_taken_0x2dc108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc108) {
            ctx->pc = 0x2DC10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC108u;
            // 0x2dc10c: 0x8e420178  lw          $v0, 0x178($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC11Cu;
            goto label_2dc11c;
        }
    }
    ctx->pc = 0x2DC110u;
label_2dc110:
    // 0x2dc110: 0xa233002c  sb          $s3, 0x2C($s1)
    ctx->pc = 0x2dc110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 19));
label_2dc114:
    // 0x2dc114: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2dc114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_2dc118:
    // 0x2dc118: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x2dc118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_2dc11c:
    // 0x2dc11c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2dc11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2dc120:
    // 0x2dc120: 0xc043d5e  jal         func_10F578
label_2dc124:
    if (ctx->pc == 0x2DC124u) {
        ctx->pc = 0x2DC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC120u;
        // 0x2dc124: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC128u;
        goto label_2dc128;
    }
    ctx->pc = 0x2DC120u;
    SET_GPR_U32(ctx, 31, 0x2DC128u);
    ctx->pc = 0x2DC124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC120u;
    // 0x2dc124: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2DC120u, 0x2DC128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC128u;
label_2dc128:
    // 0x2dc128: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2dc12c:
    if (ctx->pc == 0x2DC12Cu) {
        ctx->pc = 0x2DC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC128u;
        // 0x2dc12c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC130u;
        goto label_2dc130;
    }
    ctx->pc = 0x2DC128u;
    {
        const bool branch_taken_0x2dc128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC128u;
        // 0x2dc12c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc128) {
            ctx->pc = 0x2DC188u;
            goto label_2dc188;
        }
    }
    ctx->pc = 0x2DC130u;
label_2dc130:
    // 0x2dc130: 0x8223002f  lb          $v1, 0x2F($s1)
    ctx->pc = 0x2dc130u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
label_2dc134:
    // 0x2dc134: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2dc134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dc138:
    // 0x2dc138: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_2dc13c:
    if (ctx->pc == 0x2DC13Cu) {
        ctx->pc = 0x2DC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC138u;
        // 0x2dc13c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC140u;
        goto label_2dc140;
    }
    ctx->pc = 0x2DC138u;
    {
        const bool branch_taken_0x2dc138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dc138) {
            ctx->pc = 0x2DC13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC138u;
            // 0x2dc13c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC14Cu;
            goto label_2dc14c;
        }
    }
    ctx->pc = 0x2DC140u;
label_2dc140:
    // 0x2dc140: 0x58600012  blezl       $v1, . + 4 + (0x12 << 2)
label_2dc144:
    if (ctx->pc == 0x2DC144u) {
        ctx->pc = 0x2DC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC140u;
        // 0x2dc144: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC148u;
        goto label_2dc148;
    }
    ctx->pc = 0x2DC140u;
    {
        const bool branch_taken_0x2dc140 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2dc140) {
            ctx->pc = 0x2DC144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC140u;
            // 0x2dc144: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC18Cu;
            goto label_2dc18c;
        }
    }
    ctx->pc = 0x2DC148u;
label_2dc148:
    // 0x2dc148: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2dc148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2dc14c:
    // 0x2dc14c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dc14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc150:
    // 0x2dc150: 0xc10594c  jal         func_416530
label_2dc154:
    if (ctx->pc == 0x2DC154u) {
        ctx->pc = 0x2DC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC150u;
        // 0x2dc154: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC158u;
        goto label_2dc158;
    }
    ctx->pc = 0x2DC150u;
    SET_GPR_U32(ctx, 31, 0x2DC158u);
    ctx->pc = 0x2DC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC150u;
    // 0x2dc154: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416530u, 0x2DC150u, 0x2DC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC158u;
label_2dc158:
    // 0x2dc158: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x2dc158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_2dc15c:
    // 0x2dc15c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2dc15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2dc160:
    // 0x2dc160: 0xc043d5e  jal         func_10F578
label_2dc164:
    if (ctx->pc == 0x2DC164u) {
        ctx->pc = 0x2DC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC160u;
        // 0x2dc164: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC168u;
        goto label_2dc168;
    }
    ctx->pc = 0x2DC160u;
    SET_GPR_U32(ctx, 31, 0x2DC168u);
    ctx->pc = 0x2DC164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC160u;
    // 0x2dc164: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2DC160u, 0x2DC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC168u;
label_2dc168:
    // 0x2dc168: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2dc16c:
    if (ctx->pc == 0x2DC16Cu) {
        ctx->pc = 0x2DC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC168u;
        // 0x2dc16c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC170u;
        goto label_2dc170;
    }
    ctx->pc = 0x2DC168u;
    {
        const bool branch_taken_0x2dc168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC168u;
        // 0x2dc16c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc168) {
            ctx->pc = 0x2DC188u;
            goto label_2dc188;
        }
    }
    ctx->pc = 0x2DC170u;
label_2dc170:
    // 0x2dc170: 0x8222002f  lb          $v0, 0x2F($s1)
    ctx->pc = 0x2dc170u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
label_2dc174:
    // 0x2dc174: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2dc178:
    if (ctx->pc == 0x2DC178u) {
        ctx->pc = 0x2DC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC174u;
        // 0x2dc178: 0x9223002f  lbu         $v1, 0x2F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC17Cu;
        goto label_2dc17c;
    }
    ctx->pc = 0x2DC174u;
    {
        const bool branch_taken_0x2dc174 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC174u;
        // 0x2dc178: 0x9223002f  lbu         $v1, 0x2F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc174) {
            ctx->pc = 0x2DC188u;
            goto label_2dc188;
        }
    }
    ctx->pc = 0x2DC17Cu;
label_2dc17c:
    // 0x2dc17c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2dc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2dc180:
    // 0x2dc180: 0xa222002f  sb          $v0, 0x2F($s1)
    ctx->pc = 0x2dc180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 2));
label_2dc184:
    // 0x2dc184: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2dc184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2dc188:
    // 0x2dc188: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2dc188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2dc18c:
    // 0x2dc18c: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2dc18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2dc190:
    // 0x2dc190: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2dc190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2dc194:
    // 0x2dc194: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2dc194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2dc198:
    // 0x2dc198: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2dc19c:
    if (ctx->pc == 0x2DC19Cu) {
        ctx->pc = 0x2DC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC198u;
        // 0x2dc19c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1A0u;
        goto label_2dc1a0;
    }
    ctx->pc = 0x2DC198u;
    {
        const bool branch_taken_0x2dc198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC198u;
        // 0x2dc19c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc198) {
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DC1A0u;
label_2dc1a0:
    // 0x2dc1a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2dc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dc1a4:
    // 0x2dc1a4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2dc1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2dc1a8:
    // 0x2dc1a8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2dc1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2dc1ac:
    // 0x2dc1ac: 0xc1058b4  jal         func_4162D0
label_2dc1b0:
    if (ctx->pc == 0x2DC1B0u) {
        ctx->pc = 0x2DC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1ACu;
        // 0x2dc1b0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1B4u;
        goto label_2dc1b4;
    }
    ctx->pc = 0x2DC1ACu;
    SET_GPR_U32(ctx, 31, 0x2DC1B4u);
    ctx->pc = 0x2DC1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1ACu;
    // 0x2dc1b0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4162D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162D0u, 0x2DC1ACu, 0x2DC1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1B4u;
label_2dc1b4:
    // 0x2dc1b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2dc1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2dc1b8:
    // 0x2dc1b8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_2dc1bc:
    if (ctx->pc == 0x2DC1BCu) {
        ctx->pc = 0x2DC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1B8u;
        // 0x2dc1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1C0u;
        goto label_2dc1c0;
    }
    ctx->pc = 0x2DC1B8u;
    {
        const bool branch_taken_0x2dc1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1B8u;
        // 0x2dc1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1b8) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DC1C0u;
label_2dc1c0:
    // 0x2dc1c0: 0xc0a367c  jal         func_28D9F0
label_2dc1c4:
    if (ctx->pc == 0x2DC1C4u) {
        ctx->pc = 0x2DC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1C0u;
        // 0x2dc1c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1C8u;
        goto label_2dc1c8;
    }
    ctx->pc = 0x2DC1C0u;
    SET_GPR_U32(ctx, 31, 0x2DC1C8u);
    ctx->pc = 0x2DC1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1C0u;
    // 0x2dc1c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DC1C0u, 0x2DC1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1C8u;
label_2dc1c8:
    // 0x2dc1c8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2dc1cc:
    if (ctx->pc == 0x2DC1CCu) {
        ctx->pc = 0x2DC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1C8u;
        // 0x2dc1cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1D0u;
        goto label_2dc1d0;
    }
    ctx->pc = 0x2DC1C8u;
    {
        const bool branch_taken_0x2dc1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1C8u;
        // 0x2dc1cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1c8) {
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DC1D0u;
label_2dc1d0:
    // 0x2dc1d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dc1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dc1d4:
    // 0x2dc1d4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2dc1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2dc1d8:
    // 0x2dc1d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dc1d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2dc1dc:
    // 0x2dc1dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dc1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dc1e0:
    // 0x2dc1e0: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x2dc1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_2dc1e4:
    // 0x2dc1e4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2dc1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2dc1e8:
    // 0x2dc1e8: 0xc0be8c0  jal         func_2FA300
label_2dc1ec:
    if (ctx->pc == 0x2DC1ECu) {
        ctx->pc = 0x2DC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1E8u;
        // 0x2dc1ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1F0u;
        goto label_2dc1f0;
    }
    ctx->pc = 0x2DC1E8u;
    SET_GPR_U32(ctx, 31, 0x2DC1F0u);
    ctx->pc = 0x2DC1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1E8u;
    // 0x2dc1ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2DC1E8u, 0x2DC1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1F0u;
label_2dc1f0:
    // 0x2dc1f0: 0x10000018  b           . + 4 + (0x18 << 2)
label_2dc1f4:
    if (ctx->pc == 0x2DC1F4u) {
        ctx->pc = 0x2DC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1F0u;
        // 0x2dc1f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1F8u;
        goto label_2dc1f8;
    }
    ctx->pc = 0x2DC1F0u;
    {
        const bool branch_taken_0x2dc1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1F0u;
        // 0x2dc1f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1f0) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DC1F8u;
label_2dc1f8:
    // 0x2dc1f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dc1fc:
    // 0x2dc1fc: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x2dc1fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2dc200:
    // 0x2dc200: 0x1060fed7  beqz        $v1, . + 4 + (-0x129 << 2)
label_2dc204:
    if (ctx->pc == 0x2DC204u) {
        ctx->pc = 0x2DC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC200u;
        // 0x2dc204: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC208u;
        goto label_2dc208;
    }
    ctx->pc = 0x2DC200u;
    {
        const bool branch_taken_0x2dc200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC200u;
        // 0x2dc204: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc200) {
            ctx->pc = 0x2DBD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbd60;
        }
    }
    ctx->pc = 0x2DC208u;
label_2dc208:
    // 0x2dc208: 0xc0a367c  jal         func_28D9F0
label_2dc20c:
    if (ctx->pc == 0x2DC20Cu) {
        ctx->pc = 0x2DC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC208u;
        // 0x2dc20c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC210u;
        goto label_2dc210;
    }
    ctx->pc = 0x2DC208u;
    SET_GPR_U32(ctx, 31, 0x2DC210u);
    ctx->pc = 0x2DC20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC208u;
    // 0x2dc20c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DC208u, 0x2DC210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC210u;
label_2dc210:
    // 0x2dc210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc214:
    // 0x2dc214: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2dc218:
    if (ctx->pc == 0x2DC218u) {
        ctx->pc = 0x2DC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC214u;
        // 0x2dc218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC21Cu;
        goto label_2dc21c;
    }
    ctx->pc = 0x2DC214u;
    {
        const bool branch_taken_0x2dc214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC214u;
        // 0x2dc218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc214) {
            ctx->pc = 0x2DC254u;
            goto label_2dc254;
        }
    }
    ctx->pc = 0x2DC21Cu;
label_2dc21c:
    // 0x2dc21c: 0xc10587a  jal         func_4161E8
label_2dc220:
    if (ctx->pc == 0x2DC220u) {
        ctx->pc = 0x2DC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC21Cu;
        // 0x2dc220: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC224u;
        goto label_2dc224;
    }
    ctx->pc = 0x2DC21Cu;
    SET_GPR_U32(ctx, 31, 0x2DC224u);
    ctx->pc = 0x2DC220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC21Cu;
    // 0x2dc220: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2DC21Cu, 0x2DC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC224u;
label_2dc224:
    // 0x2dc224: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2dc224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2dc228:
    // 0x2dc228: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x2dc228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dc22c:
    // 0x2dc22c: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2dc22cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2dc230:
    // 0x2dc230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dc234:
    // 0x2dc234: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dc234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dc238:
    // 0x2dc238: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dc238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc23c:
    // 0x2dc23c: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x2dc23cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2dc240:
    // 0x2dc240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dc240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc244:
    // 0x2dc244: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dc244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc248:
    // 0x2dc248: 0xc0bee7a  jal         func_2FB9E8
label_2dc24c:
    if (ctx->pc == 0x2DC24Cu) {
        ctx->pc = 0x2DC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC248u;
        // 0x2dc24c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC250u;
        goto label_2dc250;
    }
    ctx->pc = 0x2DC248u;
    SET_GPR_U32(ctx, 31, 0x2DC250u);
    ctx->pc = 0x2DC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC248u;
    // 0x2dc24c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DC248u, 0x2DC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC250u;
label_2dc250:
    // 0x2dc250: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dc250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc254:
    // 0x2dc254: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2dc254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2dc258:
    // 0x2dc258: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2dc258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2dc25c:
    // 0x2dc25c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2dc25cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2dc260:
    // 0x2dc260: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2dc260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2dc264:
    // 0x2dc264: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2dc264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2dc268:
    // 0x2dc268: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2dc268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2dc26c:
    // 0x2dc26c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2dc26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dc270:
    // 0x2dc270: 0x3e00008  jr          $ra
label_2dc274:
    if (ctx->pc == 0x2DC274u) {
        ctx->pc = 0x2DC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC270u;
        // 0x2dc274: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC278u;
        goto label_fallthrough_0x2dc270;
    }
    ctx->pc = 0x2DC270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC270u;
        // 0x2dc274: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dc270:
    ctx->pc = 0x2DC278u;
}
