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

// Function: sub_004DBB68
// Address: 0x4dbb68 - 0x4dc5a8
void sub_004DBB68_0x4dbb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DBB68_0x4dbb68");
#endif

    switch (ctx->pc) {
        case 0x4dbb68u: goto label_4dbb68;
        case 0x4dbb6cu: goto label_4dbb6c;
        case 0x4dbb70u: goto label_4dbb70;
        case 0x4dbb74u: goto label_4dbb74;
        case 0x4dbb78u: goto label_4dbb78;
        case 0x4dbb7cu: goto label_4dbb7c;
        case 0x4dbb80u: goto label_4dbb80;
        case 0x4dbb84u: goto label_4dbb84;
        case 0x4dbb88u: goto label_4dbb88;
        case 0x4dbb8cu: goto label_4dbb8c;
        case 0x4dbb90u: goto label_4dbb90;
        case 0x4dbb94u: goto label_4dbb94;
        case 0x4dbb98u: goto label_4dbb98;
        case 0x4dbb9cu: goto label_4dbb9c;
        case 0x4dbba0u: goto label_4dbba0;
        case 0x4dbba4u: goto label_4dbba4;
        case 0x4dbba8u: goto label_4dbba8;
        case 0x4dbbacu: goto label_4dbbac;
        case 0x4dbbb0u: goto label_4dbbb0;
        case 0x4dbbb4u: goto label_4dbbb4;
        case 0x4dbbb8u: goto label_4dbbb8;
        case 0x4dbbbcu: goto label_4dbbbc;
        case 0x4dbbc0u: goto label_4dbbc0;
        case 0x4dbbc4u: goto label_4dbbc4;
        case 0x4dbbc8u: goto label_4dbbc8;
        case 0x4dbbccu: goto label_4dbbcc;
        case 0x4dbbd0u: goto label_4dbbd0;
        case 0x4dbbd4u: goto label_4dbbd4;
        case 0x4dbbd8u: goto label_4dbbd8;
        case 0x4dbbdcu: goto label_4dbbdc;
        case 0x4dbbe0u: goto label_4dbbe0;
        case 0x4dbbe4u: goto label_4dbbe4;
        case 0x4dbbe8u: goto label_4dbbe8;
        case 0x4dbbecu: goto label_4dbbec;
        case 0x4dbbf0u: goto label_4dbbf0;
        case 0x4dbbf4u: goto label_4dbbf4;
        case 0x4dbbf8u: goto label_4dbbf8;
        case 0x4dbbfcu: goto label_4dbbfc;
        case 0x4dbc00u: goto label_4dbc00;
        case 0x4dbc04u: goto label_4dbc04;
        case 0x4dbc08u: goto label_4dbc08;
        case 0x4dbc0cu: goto label_4dbc0c;
        case 0x4dbc10u: goto label_4dbc10;
        case 0x4dbc14u: goto label_4dbc14;
        case 0x4dbc18u: goto label_4dbc18;
        case 0x4dbc1cu: goto label_4dbc1c;
        case 0x4dbc20u: goto label_4dbc20;
        case 0x4dbc24u: goto label_4dbc24;
        case 0x4dbc28u: goto label_4dbc28;
        case 0x4dbc2cu: goto label_4dbc2c;
        case 0x4dbc30u: goto label_4dbc30;
        case 0x4dbc34u: goto label_4dbc34;
        case 0x4dbc38u: goto label_4dbc38;
        case 0x4dbc3cu: goto label_4dbc3c;
        case 0x4dbc40u: goto label_4dbc40;
        case 0x4dbc44u: goto label_4dbc44;
        case 0x4dbc48u: goto label_4dbc48;
        case 0x4dbc4cu: goto label_4dbc4c;
        case 0x4dbc50u: goto label_4dbc50;
        case 0x4dbc54u: goto label_4dbc54;
        case 0x4dbc58u: goto label_4dbc58;
        case 0x4dbc5cu: goto label_4dbc5c;
        case 0x4dbc60u: goto label_4dbc60;
        case 0x4dbc64u: goto label_4dbc64;
        case 0x4dbc68u: goto label_4dbc68;
        case 0x4dbc6cu: goto label_4dbc6c;
        case 0x4dbc70u: goto label_4dbc70;
        case 0x4dbc74u: goto label_4dbc74;
        case 0x4dbc78u: goto label_4dbc78;
        case 0x4dbc7cu: goto label_4dbc7c;
        case 0x4dbc80u: goto label_4dbc80;
        case 0x4dbc84u: goto label_4dbc84;
        case 0x4dbc88u: goto label_4dbc88;
        case 0x4dbc8cu: goto label_4dbc8c;
        case 0x4dbc90u: goto label_4dbc90;
        case 0x4dbc94u: goto label_4dbc94;
        case 0x4dbc98u: goto label_4dbc98;
        case 0x4dbc9cu: goto label_4dbc9c;
        case 0x4dbca0u: goto label_4dbca0;
        case 0x4dbca4u: goto label_4dbca4;
        case 0x4dbca8u: goto label_4dbca8;
        case 0x4dbcacu: goto label_4dbcac;
        case 0x4dbcb0u: goto label_4dbcb0;
        case 0x4dbcb4u: goto label_4dbcb4;
        case 0x4dbcb8u: goto label_4dbcb8;
        case 0x4dbcbcu: goto label_4dbcbc;
        case 0x4dbcc0u: goto label_4dbcc0;
        case 0x4dbcc4u: goto label_4dbcc4;
        case 0x4dbcc8u: goto label_4dbcc8;
        case 0x4dbcccu: goto label_4dbccc;
        case 0x4dbcd0u: goto label_4dbcd0;
        case 0x4dbcd4u: goto label_4dbcd4;
        case 0x4dbcd8u: goto label_4dbcd8;
        case 0x4dbcdcu: goto label_4dbcdc;
        case 0x4dbce0u: goto label_4dbce0;
        case 0x4dbce4u: goto label_4dbce4;
        case 0x4dbce8u: goto label_4dbce8;
        case 0x4dbcecu: goto label_4dbcec;
        case 0x4dbcf0u: goto label_4dbcf0;
        case 0x4dbcf4u: goto label_4dbcf4;
        case 0x4dbcf8u: goto label_4dbcf8;
        case 0x4dbcfcu: goto label_4dbcfc;
        case 0x4dbd00u: goto label_4dbd00;
        case 0x4dbd04u: goto label_4dbd04;
        case 0x4dbd08u: goto label_4dbd08;
        case 0x4dbd0cu: goto label_4dbd0c;
        case 0x4dbd10u: goto label_4dbd10;
        case 0x4dbd14u: goto label_4dbd14;
        case 0x4dbd18u: goto label_4dbd18;
        case 0x4dbd1cu: goto label_4dbd1c;
        case 0x4dbd20u: goto label_4dbd20;
        case 0x4dbd24u: goto label_4dbd24;
        case 0x4dbd28u: goto label_4dbd28;
        case 0x4dbd2cu: goto label_4dbd2c;
        case 0x4dbd30u: goto label_4dbd30;
        case 0x4dbd34u: goto label_4dbd34;
        case 0x4dbd38u: goto label_4dbd38;
        case 0x4dbd3cu: goto label_4dbd3c;
        case 0x4dbd40u: goto label_4dbd40;
        case 0x4dbd44u: goto label_4dbd44;
        case 0x4dbd48u: goto label_4dbd48;
        case 0x4dbd4cu: goto label_4dbd4c;
        case 0x4dbd50u: goto label_4dbd50;
        case 0x4dbd54u: goto label_4dbd54;
        case 0x4dbd58u: goto label_4dbd58;
        case 0x4dbd5cu: goto label_4dbd5c;
        case 0x4dbd60u: goto label_4dbd60;
        case 0x4dbd64u: goto label_4dbd64;
        case 0x4dbd68u: goto label_4dbd68;
        case 0x4dbd6cu: goto label_4dbd6c;
        case 0x4dbd70u: goto label_4dbd70;
        case 0x4dbd74u: goto label_4dbd74;
        case 0x4dbd78u: goto label_4dbd78;
        case 0x4dbd7cu: goto label_4dbd7c;
        case 0x4dbd80u: goto label_4dbd80;
        case 0x4dbd84u: goto label_4dbd84;
        case 0x4dbd88u: goto label_4dbd88;
        case 0x4dbd8cu: goto label_4dbd8c;
        case 0x4dbd90u: goto label_4dbd90;
        case 0x4dbd94u: goto label_4dbd94;
        case 0x4dbd98u: goto label_4dbd98;
        case 0x4dbd9cu: goto label_4dbd9c;
        case 0x4dbda0u: goto label_4dbda0;
        case 0x4dbda4u: goto label_4dbda4;
        case 0x4dbda8u: goto label_4dbda8;
        case 0x4dbdacu: goto label_4dbdac;
        case 0x4dbdb0u: goto label_4dbdb0;
        case 0x4dbdb4u: goto label_4dbdb4;
        case 0x4dbdb8u: goto label_4dbdb8;
        case 0x4dbdbcu: goto label_4dbdbc;
        case 0x4dbdc0u: goto label_4dbdc0;
        case 0x4dbdc4u: goto label_4dbdc4;
        case 0x4dbdc8u: goto label_4dbdc8;
        case 0x4dbdccu: goto label_4dbdcc;
        case 0x4dbdd0u: goto label_4dbdd0;
        case 0x4dbdd4u: goto label_4dbdd4;
        case 0x4dbdd8u: goto label_4dbdd8;
        case 0x4dbddcu: goto label_4dbddc;
        case 0x4dbde0u: goto label_4dbde0;
        case 0x4dbde4u: goto label_4dbde4;
        case 0x4dbde8u: goto label_4dbde8;
        case 0x4dbdecu: goto label_4dbdec;
        case 0x4dbdf0u: goto label_4dbdf0;
        case 0x4dbdf4u: goto label_4dbdf4;
        case 0x4dbdf8u: goto label_4dbdf8;
        case 0x4dbdfcu: goto label_4dbdfc;
        case 0x4dbe00u: goto label_4dbe00;
        case 0x4dbe04u: goto label_4dbe04;
        case 0x4dbe08u: goto label_4dbe08;
        case 0x4dbe0cu: goto label_4dbe0c;
        case 0x4dbe10u: goto label_4dbe10;
        case 0x4dbe14u: goto label_4dbe14;
        case 0x4dbe18u: goto label_4dbe18;
        case 0x4dbe1cu: goto label_4dbe1c;
        case 0x4dbe20u: goto label_4dbe20;
        case 0x4dbe24u: goto label_4dbe24;
        case 0x4dbe28u: goto label_4dbe28;
        case 0x4dbe2cu: goto label_4dbe2c;
        case 0x4dbe30u: goto label_4dbe30;
        case 0x4dbe34u: goto label_4dbe34;
        case 0x4dbe38u: goto label_4dbe38;
        case 0x4dbe3cu: goto label_4dbe3c;
        case 0x4dbe40u: goto label_4dbe40;
        case 0x4dbe44u: goto label_4dbe44;
        case 0x4dbe48u: goto label_4dbe48;
        case 0x4dbe4cu: goto label_4dbe4c;
        case 0x4dbe50u: goto label_4dbe50;
        case 0x4dbe54u: goto label_4dbe54;
        case 0x4dbe58u: goto label_4dbe58;
        case 0x4dbe5cu: goto label_4dbe5c;
        case 0x4dbe60u: goto label_4dbe60;
        case 0x4dbe64u: goto label_4dbe64;
        case 0x4dbe68u: goto label_4dbe68;
        case 0x4dbe6cu: goto label_4dbe6c;
        case 0x4dbe70u: goto label_4dbe70;
        case 0x4dbe74u: goto label_4dbe74;
        case 0x4dbe78u: goto label_4dbe78;
        case 0x4dbe7cu: goto label_4dbe7c;
        case 0x4dbe80u: goto label_4dbe80;
        case 0x4dbe84u: goto label_4dbe84;
        case 0x4dbe88u: goto label_4dbe88;
        case 0x4dbe8cu: goto label_4dbe8c;
        case 0x4dbe90u: goto label_4dbe90;
        case 0x4dbe94u: goto label_4dbe94;
        case 0x4dbe98u: goto label_4dbe98;
        case 0x4dbe9cu: goto label_4dbe9c;
        case 0x4dbea0u: goto label_4dbea0;
        case 0x4dbea4u: goto label_4dbea4;
        case 0x4dbea8u: goto label_4dbea8;
        case 0x4dbeacu: goto label_4dbeac;
        case 0x4dbeb0u: goto label_4dbeb0;
        case 0x4dbeb4u: goto label_4dbeb4;
        case 0x4dbeb8u: goto label_4dbeb8;
        case 0x4dbebcu: goto label_4dbebc;
        case 0x4dbec0u: goto label_4dbec0;
        case 0x4dbec4u: goto label_4dbec4;
        case 0x4dbec8u: goto label_4dbec8;
        case 0x4dbeccu: goto label_4dbecc;
        case 0x4dbed0u: goto label_4dbed0;
        case 0x4dbed4u: goto label_4dbed4;
        case 0x4dbed8u: goto label_4dbed8;
        case 0x4dbedcu: goto label_4dbedc;
        case 0x4dbee0u: goto label_4dbee0;
        case 0x4dbee4u: goto label_4dbee4;
        case 0x4dbee8u: goto label_4dbee8;
        case 0x4dbeecu: goto label_4dbeec;
        case 0x4dbef0u: goto label_4dbef0;
        case 0x4dbef4u: goto label_4dbef4;
        case 0x4dbef8u: goto label_4dbef8;
        case 0x4dbefcu: goto label_4dbefc;
        case 0x4dbf00u: goto label_4dbf00;
        case 0x4dbf04u: goto label_4dbf04;
        case 0x4dbf08u: goto label_4dbf08;
        case 0x4dbf0cu: goto label_4dbf0c;
        case 0x4dbf10u: goto label_4dbf10;
        case 0x4dbf14u: goto label_4dbf14;
        case 0x4dbf18u: goto label_4dbf18;
        case 0x4dbf1cu: goto label_4dbf1c;
        case 0x4dbf20u: goto label_4dbf20;
        case 0x4dbf24u: goto label_4dbf24;
        case 0x4dbf28u: goto label_4dbf28;
        case 0x4dbf2cu: goto label_4dbf2c;
        case 0x4dbf30u: goto label_4dbf30;
        case 0x4dbf34u: goto label_4dbf34;
        case 0x4dbf38u: goto label_4dbf38;
        case 0x4dbf3cu: goto label_4dbf3c;
        case 0x4dbf40u: goto label_4dbf40;
        case 0x4dbf44u: goto label_4dbf44;
        case 0x4dbf48u: goto label_4dbf48;
        case 0x4dbf4cu: goto label_4dbf4c;
        case 0x4dbf50u: goto label_4dbf50;
        case 0x4dbf54u: goto label_4dbf54;
        case 0x4dbf58u: goto label_4dbf58;
        case 0x4dbf5cu: goto label_4dbf5c;
        case 0x4dbf60u: goto label_4dbf60;
        case 0x4dbf64u: goto label_4dbf64;
        case 0x4dbf68u: goto label_4dbf68;
        case 0x4dbf6cu: goto label_4dbf6c;
        case 0x4dbf70u: goto label_4dbf70;
        case 0x4dbf74u: goto label_4dbf74;
        case 0x4dbf78u: goto label_4dbf78;
        case 0x4dbf7cu: goto label_4dbf7c;
        case 0x4dbf80u: goto label_4dbf80;
        case 0x4dbf84u: goto label_4dbf84;
        case 0x4dbf88u: goto label_4dbf88;
        case 0x4dbf8cu: goto label_4dbf8c;
        case 0x4dbf90u: goto label_4dbf90;
        case 0x4dbf94u: goto label_4dbf94;
        case 0x4dbf98u: goto label_4dbf98;
        case 0x4dbf9cu: goto label_4dbf9c;
        case 0x4dbfa0u: goto label_4dbfa0;
        case 0x4dbfa4u: goto label_4dbfa4;
        case 0x4dbfa8u: goto label_4dbfa8;
        case 0x4dbfacu: goto label_4dbfac;
        case 0x4dbfb0u: goto label_4dbfb0;
        case 0x4dbfb4u: goto label_4dbfb4;
        case 0x4dbfb8u: goto label_4dbfb8;
        case 0x4dbfbcu: goto label_4dbfbc;
        case 0x4dbfc0u: goto label_4dbfc0;
        case 0x4dbfc4u: goto label_4dbfc4;
        case 0x4dbfc8u: goto label_4dbfc8;
        case 0x4dbfccu: goto label_4dbfcc;
        case 0x4dbfd0u: goto label_4dbfd0;
        case 0x4dbfd4u: goto label_4dbfd4;
        case 0x4dbfd8u: goto label_4dbfd8;
        case 0x4dbfdcu: goto label_4dbfdc;
        case 0x4dbfe0u: goto label_4dbfe0;
        case 0x4dbfe4u: goto label_4dbfe4;
        case 0x4dbfe8u: goto label_4dbfe8;
        case 0x4dbfecu: goto label_4dbfec;
        case 0x4dbff0u: goto label_4dbff0;
        case 0x4dbff4u: goto label_4dbff4;
        case 0x4dbff8u: goto label_4dbff8;
        case 0x4dbffcu: goto label_4dbffc;
        case 0x4dc000u: goto label_4dc000;
        case 0x4dc004u: goto label_4dc004;
        case 0x4dc008u: goto label_4dc008;
        case 0x4dc00cu: goto label_4dc00c;
        case 0x4dc010u: goto label_4dc010;
        case 0x4dc014u: goto label_4dc014;
        case 0x4dc018u: goto label_4dc018;
        case 0x4dc01cu: goto label_4dc01c;
        case 0x4dc020u: goto label_4dc020;
        case 0x4dc024u: goto label_4dc024;
        case 0x4dc028u: goto label_4dc028;
        case 0x4dc02cu: goto label_4dc02c;
        case 0x4dc030u: goto label_4dc030;
        case 0x4dc034u: goto label_4dc034;
        case 0x4dc038u: goto label_4dc038;
        case 0x4dc03cu: goto label_4dc03c;
        case 0x4dc040u: goto label_4dc040;
        case 0x4dc044u: goto label_4dc044;
        case 0x4dc048u: goto label_4dc048;
        case 0x4dc04cu: goto label_4dc04c;
        case 0x4dc050u: goto label_4dc050;
        case 0x4dc054u: goto label_4dc054;
        case 0x4dc058u: goto label_4dc058;
        case 0x4dc05cu: goto label_4dc05c;
        case 0x4dc060u: goto label_4dc060;
        case 0x4dc064u: goto label_4dc064;
        case 0x4dc068u: goto label_4dc068;
        case 0x4dc06cu: goto label_4dc06c;
        case 0x4dc070u: goto label_4dc070;
        case 0x4dc074u: goto label_4dc074;
        case 0x4dc078u: goto label_4dc078;
        case 0x4dc07cu: goto label_4dc07c;
        case 0x4dc080u: goto label_4dc080;
        case 0x4dc084u: goto label_4dc084;
        case 0x4dc088u: goto label_4dc088;
        case 0x4dc08cu: goto label_4dc08c;
        case 0x4dc090u: goto label_4dc090;
        case 0x4dc094u: goto label_4dc094;
        case 0x4dc098u: goto label_4dc098;
        case 0x4dc09cu: goto label_4dc09c;
        case 0x4dc0a0u: goto label_4dc0a0;
        case 0x4dc0a4u: goto label_4dc0a4;
        case 0x4dc0a8u: goto label_4dc0a8;
        case 0x4dc0acu: goto label_4dc0ac;
        case 0x4dc0b0u: goto label_4dc0b0;
        case 0x4dc0b4u: goto label_4dc0b4;
        case 0x4dc0b8u: goto label_4dc0b8;
        case 0x4dc0bcu: goto label_4dc0bc;
        case 0x4dc0c0u: goto label_4dc0c0;
        case 0x4dc0c4u: goto label_4dc0c4;
        case 0x4dc0c8u: goto label_4dc0c8;
        case 0x4dc0ccu: goto label_4dc0cc;
        case 0x4dc0d0u: goto label_4dc0d0;
        case 0x4dc0d4u: goto label_4dc0d4;
        case 0x4dc0d8u: goto label_4dc0d8;
        case 0x4dc0dcu: goto label_4dc0dc;
        case 0x4dc0e0u: goto label_4dc0e0;
        case 0x4dc0e4u: goto label_4dc0e4;
        case 0x4dc0e8u: goto label_4dc0e8;
        case 0x4dc0ecu: goto label_4dc0ec;
        case 0x4dc0f0u: goto label_4dc0f0;
        case 0x4dc0f4u: goto label_4dc0f4;
        case 0x4dc0f8u: goto label_4dc0f8;
        case 0x4dc0fcu: goto label_4dc0fc;
        case 0x4dc100u: goto label_4dc100;
        case 0x4dc104u: goto label_4dc104;
        case 0x4dc108u: goto label_4dc108;
        case 0x4dc10cu: goto label_4dc10c;
        case 0x4dc110u: goto label_4dc110;
        case 0x4dc114u: goto label_4dc114;
        case 0x4dc118u: goto label_4dc118;
        case 0x4dc11cu: goto label_4dc11c;
        case 0x4dc120u: goto label_4dc120;
        case 0x4dc124u: goto label_4dc124;
        case 0x4dc128u: goto label_4dc128;
        case 0x4dc12cu: goto label_4dc12c;
        case 0x4dc130u: goto label_4dc130;
        case 0x4dc134u: goto label_4dc134;
        case 0x4dc138u: goto label_4dc138;
        case 0x4dc13cu: goto label_4dc13c;
        case 0x4dc140u: goto label_4dc140;
        case 0x4dc144u: goto label_4dc144;
        case 0x4dc148u: goto label_4dc148;
        case 0x4dc14cu: goto label_4dc14c;
        case 0x4dc150u: goto label_4dc150;
        case 0x4dc154u: goto label_4dc154;
        case 0x4dc158u: goto label_4dc158;
        case 0x4dc15cu: goto label_4dc15c;
        case 0x4dc160u: goto label_4dc160;
        case 0x4dc164u: goto label_4dc164;
        case 0x4dc168u: goto label_4dc168;
        case 0x4dc16cu: goto label_4dc16c;
        case 0x4dc170u: goto label_4dc170;
        case 0x4dc174u: goto label_4dc174;
        case 0x4dc178u: goto label_4dc178;
        case 0x4dc17cu: goto label_4dc17c;
        case 0x4dc180u: goto label_4dc180;
        case 0x4dc184u: goto label_4dc184;
        case 0x4dc188u: goto label_4dc188;
        case 0x4dc18cu: goto label_4dc18c;
        case 0x4dc190u: goto label_4dc190;
        case 0x4dc194u: goto label_4dc194;
        case 0x4dc198u: goto label_4dc198;
        case 0x4dc19cu: goto label_4dc19c;
        case 0x4dc1a0u: goto label_4dc1a0;
        case 0x4dc1a4u: goto label_4dc1a4;
        case 0x4dc1a8u: goto label_4dc1a8;
        case 0x4dc1acu: goto label_4dc1ac;
        case 0x4dc1b0u: goto label_4dc1b0;
        case 0x4dc1b4u: goto label_4dc1b4;
        case 0x4dc1b8u: goto label_4dc1b8;
        case 0x4dc1bcu: goto label_4dc1bc;
        case 0x4dc1c0u: goto label_4dc1c0;
        case 0x4dc1c4u: goto label_4dc1c4;
        case 0x4dc1c8u: goto label_4dc1c8;
        case 0x4dc1ccu: goto label_4dc1cc;
        case 0x4dc1d0u: goto label_4dc1d0;
        case 0x4dc1d4u: goto label_4dc1d4;
        case 0x4dc1d8u: goto label_4dc1d8;
        case 0x4dc1dcu: goto label_4dc1dc;
        case 0x4dc1e0u: goto label_4dc1e0;
        case 0x4dc1e4u: goto label_4dc1e4;
        case 0x4dc1e8u: goto label_4dc1e8;
        case 0x4dc1ecu: goto label_4dc1ec;
        case 0x4dc1f0u: goto label_4dc1f0;
        case 0x4dc1f4u: goto label_4dc1f4;
        case 0x4dc1f8u: goto label_4dc1f8;
        case 0x4dc1fcu: goto label_4dc1fc;
        case 0x4dc200u: goto label_4dc200;
        case 0x4dc204u: goto label_4dc204;
        case 0x4dc208u: goto label_4dc208;
        case 0x4dc20cu: goto label_4dc20c;
        case 0x4dc210u: goto label_4dc210;
        case 0x4dc214u: goto label_4dc214;
        case 0x4dc218u: goto label_4dc218;
        case 0x4dc21cu: goto label_4dc21c;
        case 0x4dc220u: goto label_4dc220;
        case 0x4dc224u: goto label_4dc224;
        case 0x4dc228u: goto label_4dc228;
        case 0x4dc22cu: goto label_4dc22c;
        case 0x4dc230u: goto label_4dc230;
        case 0x4dc234u: goto label_4dc234;
        case 0x4dc238u: goto label_4dc238;
        case 0x4dc23cu: goto label_4dc23c;
        case 0x4dc240u: goto label_4dc240;
        case 0x4dc244u: goto label_4dc244;
        case 0x4dc248u: goto label_4dc248;
        case 0x4dc24cu: goto label_4dc24c;
        case 0x4dc250u: goto label_4dc250;
        case 0x4dc254u: goto label_4dc254;
        case 0x4dc258u: goto label_4dc258;
        case 0x4dc25cu: goto label_4dc25c;
        case 0x4dc260u: goto label_4dc260;
        case 0x4dc264u: goto label_4dc264;
        case 0x4dc268u: goto label_4dc268;
        case 0x4dc26cu: goto label_4dc26c;
        case 0x4dc270u: goto label_4dc270;
        case 0x4dc274u: goto label_4dc274;
        case 0x4dc278u: goto label_4dc278;
        case 0x4dc27cu: goto label_4dc27c;
        case 0x4dc280u: goto label_4dc280;
        case 0x4dc284u: goto label_4dc284;
        case 0x4dc288u: goto label_4dc288;
        case 0x4dc28cu: goto label_4dc28c;
        case 0x4dc290u: goto label_4dc290;
        case 0x4dc294u: goto label_4dc294;
        case 0x4dc298u: goto label_4dc298;
        case 0x4dc29cu: goto label_4dc29c;
        case 0x4dc2a0u: goto label_4dc2a0;
        case 0x4dc2a4u: goto label_4dc2a4;
        case 0x4dc2a8u: goto label_4dc2a8;
        case 0x4dc2acu: goto label_4dc2ac;
        case 0x4dc2b0u: goto label_4dc2b0;
        case 0x4dc2b4u: goto label_4dc2b4;
        case 0x4dc2b8u: goto label_4dc2b8;
        case 0x4dc2bcu: goto label_4dc2bc;
        case 0x4dc2c0u: goto label_4dc2c0;
        case 0x4dc2c4u: goto label_4dc2c4;
        case 0x4dc2c8u: goto label_4dc2c8;
        case 0x4dc2ccu: goto label_4dc2cc;
        case 0x4dc2d0u: goto label_4dc2d0;
        case 0x4dc2d4u: goto label_4dc2d4;
        case 0x4dc2d8u: goto label_4dc2d8;
        case 0x4dc2dcu: goto label_4dc2dc;
        case 0x4dc2e0u: goto label_4dc2e0;
        case 0x4dc2e4u: goto label_4dc2e4;
        case 0x4dc2e8u: goto label_4dc2e8;
        case 0x4dc2ecu: goto label_4dc2ec;
        case 0x4dc2f0u: goto label_4dc2f0;
        case 0x4dc2f4u: goto label_4dc2f4;
        case 0x4dc2f8u: goto label_4dc2f8;
        case 0x4dc2fcu: goto label_4dc2fc;
        case 0x4dc300u: goto label_4dc300;
        case 0x4dc304u: goto label_4dc304;
        case 0x4dc308u: goto label_4dc308;
        case 0x4dc30cu: goto label_4dc30c;
        case 0x4dc310u: goto label_4dc310;
        case 0x4dc314u: goto label_4dc314;
        case 0x4dc318u: goto label_4dc318;
        case 0x4dc31cu: goto label_4dc31c;
        case 0x4dc320u: goto label_4dc320;
        case 0x4dc324u: goto label_4dc324;
        case 0x4dc328u: goto label_4dc328;
        case 0x4dc32cu: goto label_4dc32c;
        case 0x4dc330u: goto label_4dc330;
        case 0x4dc334u: goto label_4dc334;
        case 0x4dc338u: goto label_4dc338;
        case 0x4dc33cu: goto label_4dc33c;
        case 0x4dc340u: goto label_4dc340;
        case 0x4dc344u: goto label_4dc344;
        case 0x4dc348u: goto label_4dc348;
        case 0x4dc34cu: goto label_4dc34c;
        case 0x4dc350u: goto label_4dc350;
        case 0x4dc354u: goto label_4dc354;
        case 0x4dc358u: goto label_4dc358;
        case 0x4dc35cu: goto label_4dc35c;
        case 0x4dc360u: goto label_4dc360;
        case 0x4dc364u: goto label_4dc364;
        case 0x4dc368u: goto label_4dc368;
        case 0x4dc36cu: goto label_4dc36c;
        case 0x4dc370u: goto label_4dc370;
        case 0x4dc374u: goto label_4dc374;
        case 0x4dc378u: goto label_4dc378;
        case 0x4dc37cu: goto label_4dc37c;
        case 0x4dc380u: goto label_4dc380;
        case 0x4dc384u: goto label_4dc384;
        case 0x4dc388u: goto label_4dc388;
        case 0x4dc38cu: goto label_4dc38c;
        case 0x4dc390u: goto label_4dc390;
        case 0x4dc394u: goto label_4dc394;
        case 0x4dc398u: goto label_4dc398;
        case 0x4dc39cu: goto label_4dc39c;
        case 0x4dc3a0u: goto label_4dc3a0;
        case 0x4dc3a4u: goto label_4dc3a4;
        case 0x4dc3a8u: goto label_4dc3a8;
        case 0x4dc3acu: goto label_4dc3ac;
        case 0x4dc3b0u: goto label_4dc3b0;
        case 0x4dc3b4u: goto label_4dc3b4;
        case 0x4dc3b8u: goto label_4dc3b8;
        case 0x4dc3bcu: goto label_4dc3bc;
        case 0x4dc3c0u: goto label_4dc3c0;
        case 0x4dc3c4u: goto label_4dc3c4;
        case 0x4dc3c8u: goto label_4dc3c8;
        case 0x4dc3ccu: goto label_4dc3cc;
        case 0x4dc3d0u: goto label_4dc3d0;
        case 0x4dc3d4u: goto label_4dc3d4;
        case 0x4dc3d8u: goto label_4dc3d8;
        case 0x4dc3dcu: goto label_4dc3dc;
        case 0x4dc3e0u: goto label_4dc3e0;
        case 0x4dc3e4u: goto label_4dc3e4;
        case 0x4dc3e8u: goto label_4dc3e8;
        case 0x4dc3ecu: goto label_4dc3ec;
        case 0x4dc3f0u: goto label_4dc3f0;
        case 0x4dc3f4u: goto label_4dc3f4;
        case 0x4dc3f8u: goto label_4dc3f8;
        case 0x4dc3fcu: goto label_4dc3fc;
        case 0x4dc400u: goto label_4dc400;
        case 0x4dc404u: goto label_4dc404;
        case 0x4dc408u: goto label_4dc408;
        case 0x4dc40cu: goto label_4dc40c;
        case 0x4dc410u: goto label_4dc410;
        case 0x4dc414u: goto label_4dc414;
        case 0x4dc418u: goto label_4dc418;
        case 0x4dc41cu: goto label_4dc41c;
        case 0x4dc420u: goto label_4dc420;
        case 0x4dc424u: goto label_4dc424;
        case 0x4dc428u: goto label_4dc428;
        case 0x4dc42cu: goto label_4dc42c;
        case 0x4dc430u: goto label_4dc430;
        case 0x4dc434u: goto label_4dc434;
        case 0x4dc438u: goto label_4dc438;
        case 0x4dc43cu: goto label_4dc43c;
        case 0x4dc440u: goto label_4dc440;
        case 0x4dc444u: goto label_4dc444;
        case 0x4dc448u: goto label_4dc448;
        case 0x4dc44cu: goto label_4dc44c;
        case 0x4dc450u: goto label_4dc450;
        case 0x4dc454u: goto label_4dc454;
        case 0x4dc458u: goto label_4dc458;
        case 0x4dc45cu: goto label_4dc45c;
        case 0x4dc460u: goto label_4dc460;
        case 0x4dc464u: goto label_4dc464;
        case 0x4dc468u: goto label_4dc468;
        case 0x4dc46cu: goto label_4dc46c;
        case 0x4dc470u: goto label_4dc470;
        case 0x4dc474u: goto label_4dc474;
        case 0x4dc478u: goto label_4dc478;
        case 0x4dc47cu: goto label_4dc47c;
        case 0x4dc480u: goto label_4dc480;
        case 0x4dc484u: goto label_4dc484;
        case 0x4dc488u: goto label_4dc488;
        case 0x4dc48cu: goto label_4dc48c;
        case 0x4dc490u: goto label_4dc490;
        case 0x4dc494u: goto label_4dc494;
        case 0x4dc498u: goto label_4dc498;
        case 0x4dc49cu: goto label_4dc49c;
        case 0x4dc4a0u: goto label_4dc4a0;
        case 0x4dc4a4u: goto label_4dc4a4;
        case 0x4dc4a8u: goto label_4dc4a8;
        case 0x4dc4acu: goto label_4dc4ac;
        case 0x4dc4b0u: goto label_4dc4b0;
        case 0x4dc4b4u: goto label_4dc4b4;
        case 0x4dc4b8u: goto label_4dc4b8;
        case 0x4dc4bcu: goto label_4dc4bc;
        case 0x4dc4c0u: goto label_4dc4c0;
        case 0x4dc4c4u: goto label_4dc4c4;
        case 0x4dc4c8u: goto label_4dc4c8;
        case 0x4dc4ccu: goto label_4dc4cc;
        case 0x4dc4d0u: goto label_4dc4d0;
        case 0x4dc4d4u: goto label_4dc4d4;
        case 0x4dc4d8u: goto label_4dc4d8;
        case 0x4dc4dcu: goto label_4dc4dc;
        case 0x4dc4e0u: goto label_4dc4e0;
        case 0x4dc4e4u: goto label_4dc4e4;
        case 0x4dc4e8u: goto label_4dc4e8;
        case 0x4dc4ecu: goto label_4dc4ec;
        case 0x4dc4f0u: goto label_4dc4f0;
        case 0x4dc4f4u: goto label_4dc4f4;
        case 0x4dc4f8u: goto label_4dc4f8;
        case 0x4dc4fcu: goto label_4dc4fc;
        case 0x4dc500u: goto label_4dc500;
        case 0x4dc504u: goto label_4dc504;
        case 0x4dc508u: goto label_4dc508;
        case 0x4dc50cu: goto label_4dc50c;
        case 0x4dc510u: goto label_4dc510;
        case 0x4dc514u: goto label_4dc514;
        case 0x4dc518u: goto label_4dc518;
        case 0x4dc51cu: goto label_4dc51c;
        case 0x4dc520u: goto label_4dc520;
        case 0x4dc524u: goto label_4dc524;
        case 0x4dc528u: goto label_4dc528;
        case 0x4dc52cu: goto label_4dc52c;
        case 0x4dc530u: goto label_4dc530;
        case 0x4dc534u: goto label_4dc534;
        case 0x4dc538u: goto label_4dc538;
        case 0x4dc53cu: goto label_4dc53c;
        case 0x4dc540u: goto label_4dc540;
        case 0x4dc544u: goto label_4dc544;
        case 0x4dc548u: goto label_4dc548;
        case 0x4dc54cu: goto label_4dc54c;
        case 0x4dc550u: goto label_4dc550;
        case 0x4dc554u: goto label_4dc554;
        case 0x4dc558u: goto label_4dc558;
        case 0x4dc55cu: goto label_4dc55c;
        case 0x4dc560u: goto label_4dc560;
        case 0x4dc564u: goto label_4dc564;
        case 0x4dc568u: goto label_4dc568;
        case 0x4dc56cu: goto label_4dc56c;
        case 0x4dc570u: goto label_4dc570;
        case 0x4dc574u: goto label_4dc574;
        case 0x4dc578u: goto label_4dc578;
        case 0x4dc57cu: goto label_4dc57c;
        case 0x4dc580u: goto label_4dc580;
        case 0x4dc584u: goto label_4dc584;
        case 0x4dc588u: goto label_4dc588;
        case 0x4dc58cu: goto label_4dc58c;
        case 0x4dc590u: goto label_4dc590;
        case 0x4dc594u: goto label_4dc594;
        case 0x4dc598u: goto label_4dc598;
        case 0x4dc59cu: goto label_4dc59c;
        case 0x4dc5a0u: goto label_4dc5a0;
        case 0x4dc5a4u: goto label_4dc5a4;
        default: break;
    }

    ctx->pc = 0x4dbb68u;

label_4dbb68:
    // 0x4dbb68: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4dbb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4dbb6c:
    // 0x4dbb6c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x4dbb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_4dbb70:
    // 0x4dbb70: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x4dbb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_4dbb74:
    // 0x4dbb74: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4dbb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4dbb78:
    // 0x4dbb78: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x4dbb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_4dbb7c:
    // 0x4dbb7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dbb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dbb80:
    // 0x4dbb80: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x4dbb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_4dbb84:
    // 0x4dbb84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4dbb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dbb88:
    // 0x4dbb88: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x4dbb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_4dbb8c:
    // 0x4dbb8c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4dbb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dbb90:
    // 0x4dbb90: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x4dbb90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_4dbb94:
    // 0x4dbb94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4dbb94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dbb98:
    // 0x4dbb98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4dbb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4dbb9c:
    // 0x4dbb9c: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x4dbb9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_4dbba0:
    // 0x4dbba0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x4dbba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_4dbba4:
    // 0x4dbba4: 0x922203ed  lbu         $v0, 0x3ED($s1)
    ctx->pc = 0x4dbba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
label_4dbba8:
    // 0x4dbba8: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_4dbbac:
    if (ctx->pc == 0x4DBBACu) {
        ctx->pc = 0x4DBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBBA8u;
        // 0x4dbbac: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBBB0u;
        goto label_4dbbb0;
    }
    ctx->pc = 0x4DBBA8u;
    {
        const bool branch_taken_0x4dbba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBBA8u;
        // 0x4dbbac: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbba8) {
            ctx->pc = 0x4DBCBCu;
            goto label_4dbcbc;
        }
    }
    ctx->pc = 0x4DBBB0u;
label_4dbbb0:
    // 0x4dbbb0: 0xc136afa  jal         func_4DABE8
label_4dbbb4:
    if (ctx->pc == 0x4DBBB4u) {
        ctx->pc = 0x4DBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBBB0u;
        // 0x4dbbb4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBBB8u;
        goto label_4dbbb8;
    }
    ctx->pc = 0x4DBBB0u;
    SET_GPR_U32(ctx, 31, 0x4DBBB8u);
    ctx->pc = 0x4DBBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBBB0u;
    // 0x4dbbb4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DBBB0u, 0x4DBBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBBB8u;
label_4dbbb8:
    // 0x4dbbb8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x4dbbb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_4dbbbc:
    // 0x4dbbbc: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x4dbbbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_4dbbc0:
    // 0x4dbbc0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dbbc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dbbc4:
    // 0x4dbbc4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dbbc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dbbc8:
    // 0x4dbbc8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dbbc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbbcc:
    // 0x4dbbcc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dbbccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbbd0:
    // 0x4dbbd0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dbbd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbbd4:
    // 0x4dbbd4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x4dbbd4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dbbd8:
    // 0x4dbbd8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x4dbbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dbbdc:
    // 0x4dbbdc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4dbbdcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dbbe0:
    // 0x4dbbe0: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x4dbbe0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dbbe4:
    // 0x4dbbe4: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x4dbbe4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4dbbe8:
    // 0x4dbbe8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x4dbbe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dbbec:
    // 0x4dbbec: 0x0  nop
    ctx->pc = 0x4dbbecu;
    // NOP
label_4dbbf0:
    // 0x4dbbf0: 0x4500025d  bc1f        . + 4 + (0x25D << 2)
label_4dbbf4:
    if (ctx->pc == 0x4DBBF4u) {
        ctx->pc = 0x4DBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBBF0u;
        // 0x4dbbf4: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBBF8u;
        goto label_4dbbf8;
    }
    ctx->pc = 0x4DBBF0u;
    {
        const bool branch_taken_0x4dbbf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4DBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBBF0u;
        // 0x4dbbf4: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbbf0) {
            ctx->pc = 0x4DC568u;
            goto label_4dc568;
        }
    }
    ctx->pc = 0x4DBBF8u;
label_4dbbf8:
    // 0x4dbbf8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x4dbbf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_4dbbfc:
    // 0x4dbbfc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dbbfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dbc00:
    // 0x4dbc00: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dbc00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbc04:
    // 0x4dbc04: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dbc04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbc08:
    // 0x4dbc08: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dbc08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbc0c:
    // 0x4dbc0c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x4dbc0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dbc10:
    // 0x4dbc10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dbc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dbc14:
    // 0x4dbc14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4dbc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dbc18:
    // 0x4dbc18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4dbc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dbc1c:
    // 0x4dbc1c: 0xc136b24  jal         func_4DAC90
label_4dbc20:
    if (ctx->pc == 0x4DBC20u) {
        ctx->pc = 0x4DBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBC1Cu;
        // 0x4dbc20: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBC24u;
        goto label_4dbc24;
    }
    ctx->pc = 0x4DBC1Cu;
    SET_GPR_U32(ctx, 31, 0x4DBC24u);
    ctx->pc = 0x4DBC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBC1Cu;
    // 0x4dbc20: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DBC1Cu, 0x4DBC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBC24u;
label_4dbc24:
    // 0x4dbc24: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x4dbc24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dbc28:
    // 0x4dbc28: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4dbc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dbc2c:
    // 0x4dbc2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4dbc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4dbc30:
    // 0x4dbc30: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4dbc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dbc34:
    // 0x4dbc34: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x4dbc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_4dbc38:
    // 0x4dbc38: 0xc136afa  jal         func_4DABE8
label_4dbc3c:
    if (ctx->pc == 0x4DBC3Cu) {
        ctx->pc = 0x4DBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBC38u;
        // 0x4dbc3c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBC40u;
        goto label_4dbc40;
    }
    ctx->pc = 0x4DBC38u;
    SET_GPR_U32(ctx, 31, 0x4DBC40u);
    ctx->pc = 0x4DBC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBC38u;
    // 0x4dbc3c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DBC38u, 0x4DBC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBC40u;
label_4dbc40:
    // 0x4dbc40: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x4dbc40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_4dbc44:
    // 0x4dbc44: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x4dbc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_4dbc48:
    // 0x4dbc48: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x4dbc48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_4dbc4c:
    // 0x4dbc4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4dbc4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dbc50:
    // 0x4dbc50: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x4dbc50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dbc54:
    // 0x4dbc54: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4dbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dbc58:
    // 0x4dbc58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dbc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dbc5c:
    // 0x4dbc5c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x4dbc5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_4dbc60:
    // 0x4dbc60: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x4dbc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_4dbc64:
    // 0x4dbc64: 0xc136b24  jal         func_4DAC90
label_4dbc68:
    if (ctx->pc == 0x4DBC68u) {
        ctx->pc = 0x4DBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBC64u;
        // 0x4dbc68: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBC6Cu;
        goto label_4dbc6c;
    }
    ctx->pc = 0x4DBC64u;
    SET_GPR_U32(ctx, 31, 0x4DBC6Cu);
    ctx->pc = 0x4DBC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBC64u;
    // 0x4dbc68: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DBC64u, 0x4DBC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBC6Cu;
label_4dbc6c:
    // 0x4dbc6c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x4dbc6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dbc70:
    // 0x4dbc70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4dbc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dbc74:
    // 0x4dbc74: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4dbc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4dbc78:
    // 0x4dbc78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4dbc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dbc7c:
    // 0x4dbc7c: 0xc136b18  jal         func_4DAC60
label_4dbc80:
    if (ctx->pc == 0x4DBC80u) {
        ctx->pc = 0x4DBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBC7Cu;
        // 0x4dbc80: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBC84u;
        goto label_4dbc84;
    }
    ctx->pc = 0x4DBC7Cu;
    SET_GPR_U32(ctx, 31, 0x4DBC84u);
    ctx->pc = 0x4DBC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBC7Cu;
    // 0x4dbc80: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DBC7Cu, 0x4DBC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBC84u;
label_4dbc84:
    // 0x4dbc84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4dbc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4dbc88:
    // 0x4dbc88: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4dbc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dbc8c:
    // 0x4dbc8c: 0xc136b18  jal         func_4DAC60
label_4dbc90:
    if (ctx->pc == 0x4DBC90u) {
        ctx->pc = 0x4DBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBC8Cu;
        // 0x4dbc90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBC94u;
        goto label_4dbc94;
    }
    ctx->pc = 0x4DBC8Cu;
    SET_GPR_U32(ctx, 31, 0x4DBC94u);
    ctx->pc = 0x4DBC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBC8Cu;
    // 0x4dbc90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DBC8Cu, 0x4DBC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBC94u;
label_4dbc94:
    // 0x4dbc94: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x4dbc94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dbc98:
    // 0x4dbc98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4dbc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4dbc9c:
    // 0x4dbc9c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4dbc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dbca0:
    // 0x4dbca0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4dbca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4dbca4:
    // 0x4dbca4: 0xc136b18  jal         func_4DAC60
label_4dbca8:
    if (ctx->pc == 0x4DBCA8u) {
        ctx->pc = 0x4DBCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBCA4u;
        // 0x4dbca8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBCACu;
        goto label_4dbcac;
    }
    ctx->pc = 0x4DBCA4u;
    SET_GPR_U32(ctx, 31, 0x4DBCACu);
    ctx->pc = 0x4DBCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBCA4u;
    // 0x4dbca8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DBCA4u, 0x4DBCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBCACu;
label_4dbcac:
    // 0x4dbcac: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x4dbcacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dbcb0:
    // 0x4dbcb0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x4dbcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_4dbcb4:
    // 0x4dbcb4: 0x1000022c  b           . + 4 + (0x22C << 2)
label_4dbcb8:
    if (ctx->pc == 0x4DBCB8u) {
        ctx->pc = 0x4DBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBCB4u;
        // 0x4dbcb8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBCBCu;
        goto label_4dbcbc;
    }
    ctx->pc = 0x4DBCB4u;
    {
        const bool branch_taken_0x4dbcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBCB4u;
        // 0x4dbcb8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbcb4) {
            ctx->pc = 0x4DC568u;
            goto label_4dc568;
        }
    }
    ctx->pc = 0x4DBCBCu;
label_4dbcbc:
    // 0x4dbcbc: 0x922203e6  lbu         $v0, 0x3E6($s1)
    ctx->pc = 0x4dbcbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 998)));
label_4dbcc0:
    // 0x4dbcc0: 0x104001ab  beqz        $v0, . + 4 + (0x1AB << 2)
label_4dbcc4:
    if (ctx->pc == 0x4DBCC4u) {
        ctx->pc = 0x4DBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBCC0u;
        // 0x4dbcc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBCC8u;
        goto label_4dbcc8;
    }
    ctx->pc = 0x4DBCC0u;
    {
        const bool branch_taken_0x4dbcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBCC0u;
        // 0x4dbcc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbcc0) {
            ctx->pc = 0x4DC370u;
            goto label_4dc370;
        }
    }
    ctx->pc = 0x4DBCC8u;
label_4dbcc8:
    // 0x4dbcc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4dbcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dbccc:
    // 0x4dbccc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4dbcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_4dbcd0:
    // 0x4dbcd0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4dbcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4dbcd4:
    // 0x4dbcd4: 0xc136afa  jal         func_4DABE8
label_4dbcd8:
    if (ctx->pc == 0x4DBCD8u) {
        ctx->pc = 0x4DBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBCD4u;
        // 0x4dbcd8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBCDCu;
        goto label_4dbcdc;
    }
    ctx->pc = 0x4DBCD4u;
    SET_GPR_U32(ctx, 31, 0x4DBCDCu);
    ctx->pc = 0x4DBCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBCD4u;
    // 0x4dbcd8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DBCD4u, 0x4DBCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBCDCu;
label_4dbcdc:
    // 0x4dbcdc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x4dbcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4dbce0:
    // 0x4dbce0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x4dbce0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dbce4:
    // 0x4dbce4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x4dbce4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_4dbce8:
    // 0x4dbce8: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x4dbce8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dbcec:
    // 0x4dbcec: 0x18a00084  blez        $a1, . + 4 + (0x84 << 2)
label_4dbcf0:
    if (ctx->pc == 0x4DBCF0u) {
        ctx->pc = 0x4DBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBCECu;
        // 0x4dbcf0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBCF4u;
        goto label_4dbcf4;
    }
    ctx->pc = 0x4DBCECu;
    {
        const bool branch_taken_0x4dbcec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4DBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBCECu;
        // 0x4dbcf0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbcec) {
            ctx->pc = 0x4DBF00u;
            goto label_4dbf00;
        }
    }
    ctx->pc = 0x4DBCF4u;
label_4dbcf4:
    // 0x4dbcf4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4dbcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4dbcf8:
    // 0x4dbcf8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dbcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbcfc:
    // 0x4dbcfc: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x4dbcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_4dbd00:
    // 0x4dbd00: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4dbd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dbd04:
    // 0x4dbd04: 0x24a501e0  addiu       $a1, $a1, 0x1E0
    ctx->pc = 0x4dbd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
label_4dbd08:
    // 0x4dbd08: 0xc136afa  jal         func_4DABE8
label_4dbd0c:
    if (ctx->pc == 0x4DBD0Cu) {
        ctx->pc = 0x4DBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBD08u;
        // 0x4dbd0c: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBD10u;
        goto label_4dbd10;
    }
    ctx->pc = 0x4DBD08u;
    SET_GPR_U32(ctx, 31, 0x4DBD10u);
    ctx->pc = 0x4DBD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBD08u;
    // 0x4dbd0c: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DBD08u, 0x4DBD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBD10u;
label_4dbd10:
    // 0x4dbd10: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x4dbd10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dbd14:
    // 0x4dbd14: 0x26051740  addiu       $a1, $s0, 0x1740
    ctx->pc = 0x4dbd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
label_4dbd18:
    // 0x4dbd18: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x4dbd18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dbd1c:
    // 0x4dbd1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dbd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbd20:
    // 0x4dbd20: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4dbd20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4dbd24:
    // 0x4dbd24: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4dbd24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4dbd28:
    // 0x4dbd28: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x4dbd28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dbd2c:
    // 0x4dbd2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x4dbd2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dbd30:
    // 0x4dbd30: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x4dbd30u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_4dbd34:
    // 0x4dbd34: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x4dbd34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dbd38:
    // 0x4dbd38: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x4dbd38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_4dbd3c:
    // 0x4dbd3c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x4dbd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_4dbd40:
    // 0x4dbd40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dbd40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dbd44:
    // 0x4dbd44: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x4dbd44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dbd48:
    // 0x4dbd48: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x4dbd48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dbd4c:
    // 0x4dbd4c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x4dbd4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dbd50:
    // 0x4dbd50: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x4dbd50u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_4dbd54:
    // 0x4dbd54: 0x4a0003bf  vwaitq
    ctx->pc = 0x4dbd54u;
    // VWAITQ (Q already resolved in this runtime)
label_4dbd58:
    // 0x4dbd58: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x4dbd58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_4dbd5c:
    // 0x4dbd5c: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x4dbd5cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_4dbd60:
    // 0x4dbd60: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x4dbd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_4dbd64:
    // 0x4dbd64: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x4dbd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_4dbd68:
    // 0x4dbd68: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x4dbd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_4dbd6c:
    // 0x4dbd6c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x4dbd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_4dbd70:
    // 0x4dbd70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4dbd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4dbd74:
    // 0x4dbd74: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x4dbd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_4dbd78:
    // 0x4dbd78: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x4dbd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_4dbd7c:
    // 0x4dbd7c: 0xc136afa  jal         func_4DABE8
label_4dbd80:
    if (ctx->pc == 0x4DBD80u) {
        ctx->pc = 0x4DBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBD7Cu;
        // 0x4dbd80: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBD84u;
        goto label_4dbd84;
    }
    ctx->pc = 0x4DBD7Cu;
    SET_GPR_U32(ctx, 31, 0x4DBD84u);
    ctx->pc = 0x4DBD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBD7Cu;
    // 0x4dbd80: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DBD7Cu, 0x4DBD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBD84u;
label_4dbd84:
    // 0x4dbd84: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x4dbd84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dbd88:
    // 0x4dbd88: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x4dbd88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dbd8c:
    // 0x4dbd8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dbd8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dbd90:
    // 0x4dbd90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dbd90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dbd94:
    // 0x4dbd94: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dbd94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbd98:
    // 0x4dbd98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dbd98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbd9c:
    // 0x4dbd9c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dbd9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbda0:
    // 0x4dbda0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x4dbda0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dbda4:
    // 0x4dbda4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4dbda4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dbda8:
    // 0x4dbda8: 0x0  nop
    ctx->pc = 0x4dbda8u;
    // NOP
label_4dbdac:
    // 0x4dbdac: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4dbdacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dbdb0:
    // 0x4dbdb0: 0x0  nop
    ctx->pc = 0x4dbdb0u;
    // NOP
label_4dbdb4:
    // 0x4dbdb4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4dbdb8:
    if (ctx->pc == 0x4DBDB8u) {
        ctx->pc = 0x4DBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBDB4u;
        // 0x4dbdb8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBDBCu;
        goto label_4dbdbc;
    }
    ctx->pc = 0x4DBDB4u;
    {
        const bool branch_taken_0x4dbdb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4DBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBDB4u;
        // 0x4dbdb8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbdb4) {
            ctx->pc = 0x4DBDD0u;
            goto label_4dbdd0;
        }
    }
    ctx->pc = 0x4DBDBCu;
label_4dbdbc:
    // 0x4dbdbc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4dbdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dbdc0:
    // 0x4dbdc0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x4dbdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_4dbdc4:
    // 0x4dbdc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4dbdc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dbdc8:
    // 0x4dbdc8: 0xc136b24  jal         func_4DAC90
label_4dbdcc:
    if (ctx->pc == 0x4DBDCCu) {
        ctx->pc = 0x4DBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBDC8u;
        // 0x4dbdcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBDD0u;
        goto label_4dbdd0;
    }
    ctx->pc = 0x4DBDC8u;
    SET_GPR_U32(ctx, 31, 0x4DBDD0u);
    ctx->pc = 0x4DBDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBDC8u;
    // 0x4dbdcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DBDC8u, 0x4DBDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBDD0u;
label_4dbdd0:
    // 0x4dbdd0: 0x86230352  lh          $v1, 0x352($s1)
    ctx->pc = 0x4dbdd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dbdd4:
    // 0x4dbdd4: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x4dbdd4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dbdd8:
    // 0x4dbdd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4dbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4dbddc:
    // 0x4dbddc: 0x7a450000  lq          $a1, 0x0($s2)
    ctx->pc = 0x4dbddcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_4dbde0:
    // 0x4dbde0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4dbde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4dbde4:
    // 0x4dbde4: 0x786201e0  lq          $v0, 0x1E0($v1)
    ctx->pc = 0x4dbde4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 480)));
label_4dbde8:
    // 0x4dbde8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x4dbde8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_4dbdec:
    // 0x4dbdec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x4dbdecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dbdf0:
    // 0x4dbdf0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dbdf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbdf4:
    // 0x4dbdf4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dbdf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbdf8:
    // 0x4dbdf8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dbdf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbdfc:
    // 0x4dbdfc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x4dbdfcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dbe00:
    // 0x4dbe00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4dbe00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dbe04:
    // 0x4dbe04: 0x0  nop
    ctx->pc = 0x4dbe04u;
    // NOP
label_4dbe08:
    // 0x4dbe08: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x4dbe08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_4dbe0c:
    // 0x4dbe0c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x4dbe0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dbe10:
    // 0x4dbe10: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x4dbe10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_4dbe14:
    // 0x4dbe14: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dbe14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dbe18:
    // 0x4dbe18: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x4dbe18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbe1c:
    // 0x4dbe1c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dbe1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbe20:
    // 0x4dbe20: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x4dbe20u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dbe24:
    // 0x4dbe24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4dbe24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dbe28:
    // 0x4dbe28: 0x0  nop
    ctx->pc = 0x4dbe28u;
    // NOP
label_4dbe2c:
    // 0x4dbe2c: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x4dbe2cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4dbe30:
    // 0x4dbe30: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x4dbe30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dbe34:
    // 0x4dbe34: 0x0  nop
    ctx->pc = 0x4dbe34u;
    // NOP
label_4dbe38:
    // 0x4dbe38: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_4dbe3c:
    if (ctx->pc == 0x4DBE3Cu) {
        ctx->pc = 0x4DBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBE38u;
        // 0x4dbe3c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBE40u;
        goto label_4dbe40;
    }
    ctx->pc = 0x4DBE38u;
    {
        const bool branch_taken_0x4dbe38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4DBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBE38u;
        // 0x4dbe3c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbe38) {
            ctx->pc = 0x4DBF00u;
            goto label_4dbf00;
        }
    }
    ctx->pc = 0x4DBE40u;
label_4dbe40:
    // 0x4dbe40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dbe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbe44:
    // 0x4dbe44: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dbe44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dbe48:
    // 0x4dbe48: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dbe48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dbe4c:
    // 0x4dbe4c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dbe4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbe50:
    // 0x4dbe50: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dbe50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbe54:
    // 0x4dbe54: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dbe54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbe58:
    // 0x4dbe58: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x4dbe58u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dbe5c:
    // 0x4dbe5c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4dbe5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dbe60:
    // 0x4dbe60: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x4dbe60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dbe64:
    // 0x4dbe64: 0xc136b24  jal         func_4DAC90
label_4dbe68:
    if (ctx->pc == 0x4DBE68u) {
        ctx->pc = 0x4DBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBE64u;
        // 0x4dbe68: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBE6Cu;
        goto label_4dbe6c;
    }
    ctx->pc = 0x4DBE64u;
    SET_GPR_U32(ctx, 31, 0x4DBE6Cu);
    ctx->pc = 0x4DBE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBE64u;
    // 0x4dbe68: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DBE64u, 0x4DBE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBE6Cu;
label_4dbe6c:
    // 0x4dbe6c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dbe6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dbe70:
    // 0x4dbe70: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dbe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbe74:
    // 0x4dbe74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4dbe74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4dbe78:
    // 0x4dbe78: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4dbe78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dbe7c:
    // 0x4dbe7c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x4dbe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_4dbe80:
    // 0x4dbe80: 0xc136afa  jal         func_4DABE8
label_4dbe84:
    if (ctx->pc == 0x4DBE84u) {
        ctx->pc = 0x4DBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBE80u;
        // 0x4dbe84: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBE88u;
        goto label_4dbe88;
    }
    ctx->pc = 0x4DBE80u;
    SET_GPR_U32(ctx, 31, 0x4DBE88u);
    ctx->pc = 0x4DBE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBE80u;
    // 0x4dbe84: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DBE80u, 0x4DBE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBE88u;
label_4dbe88:
    // 0x4dbe88: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x4dbe88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_4dbe8c:
    // 0x4dbe8c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x4dbe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_4dbe90:
    // 0x4dbe90: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x4dbe90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_4dbe94:
    // 0x4dbe94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4dbe94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dbe98:
    // 0x4dbe98: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dbe98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dbe9c:
    // 0x4dbe9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dbe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbea0:
    // 0x4dbea0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4dbea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dbea4:
    // 0x4dbea4: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x4dbea4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_4dbea8:
    // 0x4dbea8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x4dbea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_4dbeac:
    // 0x4dbeac: 0xc136b24  jal         func_4DAC90
label_4dbeb0:
    if (ctx->pc == 0x4DBEB0u) {
        ctx->pc = 0x4DBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBEACu;
        // 0x4dbeb0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBEB4u;
        goto label_4dbeb4;
    }
    ctx->pc = 0x4DBEACu;
    SET_GPR_U32(ctx, 31, 0x4DBEB4u);
    ctx->pc = 0x4DBEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBEACu;
    // 0x4dbeb0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DBEACu, 0x4DBEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBEB4u;
label_4dbeb4:
    // 0x4dbeb4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dbeb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dbeb8:
    // 0x4dbeb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4dbeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dbebc:
    // 0x4dbebc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4dbebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4dbec0:
    // 0x4dbec0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4dbec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dbec4:
    // 0x4dbec4: 0xc136b18  jal         func_4DAC60
label_4dbec8:
    if (ctx->pc == 0x4DBEC8u) {
        ctx->pc = 0x4DBEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBEC4u;
        // 0x4dbec8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBECCu;
        goto label_4dbecc;
    }
    ctx->pc = 0x4DBEC4u;
    SET_GPR_U32(ctx, 31, 0x4DBECCu);
    ctx->pc = 0x4DBEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBEC4u;
    // 0x4dbec8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DBEC4u, 0x4DBECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBECCu;
label_4dbecc:
    // 0x4dbecc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4dbeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dbed0:
    // 0x4dbed0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4dbed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dbed4:
    // 0x4dbed4: 0xc136b18  jal         func_4DAC60
label_4dbed8:
    if (ctx->pc == 0x4DBED8u) {
        ctx->pc = 0x4DBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBED4u;
        // 0x4dbed8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBEDCu;
        goto label_4dbedc;
    }
    ctx->pc = 0x4DBED4u;
    SET_GPR_U32(ctx, 31, 0x4DBEDCu);
    ctx->pc = 0x4DBED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBED4u;
    // 0x4dbed8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DBED4u, 0x4DBEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBEDCu;
label_4dbedc:
    // 0x4dbedc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x4dbedcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dbee0:
    // 0x4dbee0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4dbee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dbee4:
    // 0x4dbee4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4dbee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbee8:
    // 0x4dbee8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4dbee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4dbeec:
    // 0x4dbeec: 0xc136b18  jal         func_4DAC60
label_4dbef0:
    if (ctx->pc == 0x4DBEF0u) {
        ctx->pc = 0x4DBEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBEECu;
        // 0x4dbef0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBEF4u;
        goto label_4dbef4;
    }
    ctx->pc = 0x4DBEECu;
    SET_GPR_U32(ctx, 31, 0x4DBEF4u);
    ctx->pc = 0x4DBEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBEECu;
    // 0x4dbef0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DBEECu, 0x4DBEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBEF4u;
label_4dbef4:
    // 0x4dbef4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x4dbef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dbef8:
    // 0x4dbef8: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x4dbef8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_4dbefc:
    // 0x4dbefc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x4dbefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_4dbf00:
    // 0x4dbf00: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dbf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbf04:
    // 0x4dbf04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4dbf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4dbf08:
    // 0x4dbf08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4dbf08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4dbf0c:
    // 0x4dbf0c: 0xc136afa  jal         func_4DABE8
label_4dbf10:
    if (ctx->pc == 0x4DBF10u) {
        ctx->pc = 0x4DBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBF0Cu;
        // 0x4dbf10: 0x26101740  addiu       $s0, $s0, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBF14u;
        goto label_4dbf14;
    }
    ctx->pc = 0x4DBF0Cu;
    SET_GPR_U32(ctx, 31, 0x4DBF14u);
    ctx->pc = 0x4DBF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBF0Cu;
    // 0x4dbf10: 0x26101740  addiu       $s0, $s0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DBF0Cu, 0x4DBF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBF14u;
label_4dbf14:
    // 0x4dbf14: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x4dbf14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_4dbf18:
    // 0x4dbf18: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x4dbf18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dbf1c:
    // 0x4dbf1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbf20:
    // 0x4dbf20: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dbf20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dbf24:
    // 0x4dbf24: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4dbf24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4dbf28:
    // 0x4dbf28: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x4dbf28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_4dbf2c:
    // 0x4dbf2c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4dbf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_4dbf30:
    // 0x4dbf30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4dbf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dbf34:
    // 0x4dbf34: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x4dbf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_4dbf38:
    // 0x4dbf38: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x4dbf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_4dbf3c:
    // 0x4dbf3c: 0xc136afa  jal         func_4DABE8
label_4dbf40:
    if (ctx->pc == 0x4DBF40u) {
        ctx->pc = 0x4DBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBF3Cu;
        // 0x4dbf40: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBF44u;
        goto label_4dbf44;
    }
    ctx->pc = 0x4DBF3Cu;
    SET_GPR_U32(ctx, 31, 0x4DBF44u);
    ctx->pc = 0x4DBF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBF3Cu;
    // 0x4dbf40: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DBF3Cu, 0x4DBF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBF44u;
label_4dbf44:
    // 0x4dbf44: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x4dbf44u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dbf48:
    // 0x4dbf48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dbf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbf4c:
    // 0x4dbf4c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x4dbf4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dbf50:
    // 0x4dbf50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4dbf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4dbf54:
    // 0x4dbf54: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4dbf54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_4dbf58:
    // 0x4dbf58: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4dbf58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4dbf5c:
    // 0x4dbf5c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x4dbf5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dbf60:
    // 0x4dbf60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x4dbf60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dbf64:
    // 0x4dbf64: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x4dbf64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_4dbf68:
    // 0x4dbf68: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x4dbf68u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dbf6c:
    // 0x4dbf6c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x4dbf6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_4dbf70:
    // 0x4dbf70: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x4dbf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_4dbf74:
    // 0x4dbf74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dbf74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dbf78:
    // 0x4dbf78: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x4dbf78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dbf7c:
    // 0x4dbf7c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x4dbf7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dbf80:
    // 0x4dbf80: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x4dbf80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dbf84:
    // 0x4dbf84: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x4dbf84u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_4dbf88:
    // 0x4dbf88: 0x4a0003bf  vwaitq
    ctx->pc = 0x4dbf88u;
    // VWAITQ (Q already resolved in this runtime)
label_4dbf8c:
    // 0x4dbf8c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x4dbf8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_4dbf90:
    // 0x4dbf90: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x4dbf90u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_4dbf94:
    // 0x4dbf94: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x4dbf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_4dbf98:
    // 0x4dbf98: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x4dbf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_4dbf9c:
    // 0x4dbf9c: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x4dbf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_4dbfa0:
    // 0x4dbfa0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x4dbfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_4dbfa4:
    // 0x4dbfa4: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x4dbfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_4dbfa8:
    // 0x4dbfa8: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x4dbfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_4dbfac:
    // 0x4dbfac: 0xc136afa  jal         func_4DABE8
label_4dbfb0:
    if (ctx->pc == 0x4DBFB0u) {
        ctx->pc = 0x4DBFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBFACu;
        // 0x4dbfb0: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBFB4u;
        goto label_4dbfb4;
    }
    ctx->pc = 0x4DBFACu;
    SET_GPR_U32(ctx, 31, 0x4DBFB4u);
    ctx->pc = 0x4DBFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBFACu;
    // 0x4dbfb0: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DBFACu, 0x4DBFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBFB4u;
label_4dbfb4:
    // 0x4dbfb4: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x4dbfb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dbfb8:
    // 0x4dbfb8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x4dbfb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dbfbc:
    // 0x4dbfbc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dbfbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dbfc0:
    // 0x4dbfc0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dbfc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dbfc4:
    // 0x4dbfc4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dbfc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbfc8:
    // 0x4dbfc8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dbfc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbfcc:
    // 0x4dbfcc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dbfccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dbfd0:
    // 0x4dbfd0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x4dbfd0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dbfd4:
    // 0x4dbfd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4dbfd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dbfd8:
    // 0x4dbfd8: 0x0  nop
    ctx->pc = 0x4dbfd8u;
    // NOP
label_4dbfdc:
    // 0x4dbfdc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x4dbfdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dbfe0:
    // 0x4dbfe0: 0x0  nop
    ctx->pc = 0x4dbfe0u;
    // NOP
label_4dbfe4:
    // 0x4dbfe4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4dbfe8:
    if (ctx->pc == 0x4DBFE8u) {
        ctx->pc = 0x4DBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBFE4u;
        // 0x4dbfe8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DBFECu;
        goto label_4dbfec;
    }
    ctx->pc = 0x4DBFE4u;
    {
        const bool branch_taken_0x4dbfe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4DBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBFE4u;
        // 0x4dbfe8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbfe4) {
            ctx->pc = 0x4DC000u;
            goto label_4dc000;
        }
    }
    ctx->pc = 0x4DBFECu;
label_4dbfec:
    // 0x4dbfec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4dbfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dbff0:
    // 0x4dbff0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x4dbff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_4dbff4:
    // 0x4dbff4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4dbff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dbff8:
    // 0x4dbff8: 0xc136b24  jal         func_4DAC90
label_4dbffc:
    if (ctx->pc == 0x4DBFFCu) {
        ctx->pc = 0x4DBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBFF8u;
        // 0x4dbffc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC000u;
        goto label_4dc000;
    }
    ctx->pc = 0x4DBFF8u;
    SET_GPR_U32(ctx, 31, 0x4DC000u);
    ctx->pc = 0x4DBFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBFF8u;
    // 0x4dbffc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DBFF8u, 0x4DC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC000u;
label_4dc000:
    // 0x4dc000: 0x86230352  lh          $v1, 0x352($s1)
    ctx->pc = 0x4dc000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dc004:
    // 0x4dc004: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x4dc004u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc008:
    // 0x4dc008: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4dc008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4dc00c:
    // 0x4dc00c: 0x7a450000  lq          $a1, 0x0($s2)
    ctx->pc = 0x4dc00cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_4dc010:
    // 0x4dc010: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4dc010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4dc014:
    // 0x4dc014: 0x786201e0  lq          $v0, 0x1E0($v1)
    ctx->pc = 0x4dc014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 480)));
label_4dc018:
    // 0x4dc018: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x4dc018u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_4dc01c:
    // 0x4dc01c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x4dc01cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dc020:
    // 0x4dc020: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dc020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc024:
    // 0x4dc024: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dc024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc028:
    // 0x4dc028: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dc028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc02c:
    // 0x4dc02c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x4dc02cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dc030:
    // 0x4dc030: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4dc030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dc034:
    // 0x4dc034: 0x0  nop
    ctx->pc = 0x4dc034u;
    // NOP
label_4dc038:
    // 0x4dc038: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x4dc038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_4dc03c:
    // 0x4dc03c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x4dc03cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc040:
    // 0x4dc040: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x4dc040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_4dc044:
    // 0x4dc044: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dc044u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dc048:
    // 0x4dc048: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x4dc048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc04c:
    // 0x4dc04c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dc04cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc050:
    // 0x4dc050: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x4dc050u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dc054:
    // 0x4dc054: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4dc054u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dc058:
    // 0x4dc058: 0x0  nop
    ctx->pc = 0x4dc058u;
    // NOP
label_4dc05c:
    // 0x4dc05c: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x4dc05cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4dc060:
    // 0x4dc060: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x4dc060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dc064:
    // 0x4dc064: 0x0  nop
    ctx->pc = 0x4dc064u;
    // NOP
label_4dc068:
    // 0x4dc068: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_4dc06c:
    if (ctx->pc == 0x4DC06Cu) {
        ctx->pc = 0x4DC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC068u;
        // 0x4dc06c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC070u;
        goto label_4dc070;
    }
    ctx->pc = 0x4DC068u;
    {
        const bool branch_taken_0x4dc068 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4DC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC068u;
        // 0x4dc06c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc068) {
            ctx->pc = 0x4DC130u;
            goto label_4dc130;
        }
    }
    ctx->pc = 0x4DC070u;
label_4dc070:
    // 0x4dc070: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dc070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dc074:
    // 0x4dc074: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dc074u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dc078:
    // 0x4dc078: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dc078u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dc07c:
    // 0x4dc07c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dc07cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc080:
    // 0x4dc080: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dc080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc084:
    // 0x4dc084: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dc084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc088:
    // 0x4dc088: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x4dc088u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dc08c:
    // 0x4dc08c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4dc08cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dc090:
    // 0x4dc090: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x4dc090u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dc094:
    // 0x4dc094: 0xc136b24  jal         func_4DAC90
label_4dc098:
    if (ctx->pc == 0x4DC098u) {
        ctx->pc = 0x4DC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC094u;
        // 0x4dc098: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC09Cu;
        goto label_4dc09c;
    }
    ctx->pc = 0x4DC094u;
    SET_GPR_U32(ctx, 31, 0x4DC09Cu);
    ctx->pc = 0x4DC098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC094u;
    // 0x4dc098: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DC094u, 0x4DC09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC09Cu;
label_4dc09c:
    // 0x4dc09c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dc09cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc0a0:
    // 0x4dc0a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dc0a4:
    // 0x4dc0a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4dc0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4dc0a8:
    // 0x4dc0a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4dc0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dc0ac:
    // 0x4dc0ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x4dc0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_4dc0b0:
    // 0x4dc0b0: 0xc136afa  jal         func_4DABE8
label_4dc0b4:
    if (ctx->pc == 0x4DC0B4u) {
        ctx->pc = 0x4DC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC0B0u;
        // 0x4dc0b4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC0B8u;
        goto label_4dc0b8;
    }
    ctx->pc = 0x4DC0B0u;
    SET_GPR_U32(ctx, 31, 0x4DC0B8u);
    ctx->pc = 0x4DC0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC0B0u;
    // 0x4dc0b4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DC0B0u, 0x4DC0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC0B8u;
label_4dc0b8:
    // 0x4dc0b8: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x4dc0b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_4dc0bc:
    // 0x4dc0bc: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x4dc0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_4dc0c0:
    // 0x4dc0c0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x4dc0c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_4dc0c4:
    // 0x4dc0c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4dc0c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dc0c8:
    // 0x4dc0c8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dc0c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc0cc:
    // 0x4dc0cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dc0d0:
    // 0x4dc0d0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4dc0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dc0d4:
    // 0x4dc0d4: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x4dc0d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_4dc0d8:
    // 0x4dc0d8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x4dc0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_4dc0dc:
    // 0x4dc0dc: 0xc136b24  jal         func_4DAC90
label_4dc0e0:
    if (ctx->pc == 0x4DC0E0u) {
        ctx->pc = 0x4DC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC0DCu;
        // 0x4dc0e0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC0E4u;
        goto label_4dc0e4;
    }
    ctx->pc = 0x4DC0DCu;
    SET_GPR_U32(ctx, 31, 0x4DC0E4u);
    ctx->pc = 0x4DC0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC0DCu;
    // 0x4dc0e0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DC0DCu, 0x4DC0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC0E4u;
label_4dc0e4:
    // 0x4dc0e4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dc0e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc0e8:
    // 0x4dc0e8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4dc0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dc0ec:
    // 0x4dc0ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4dc0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4dc0f0:
    // 0x4dc0f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4dc0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc0f4:
    // 0x4dc0f4: 0xc136b18  jal         func_4DAC60
label_4dc0f8:
    if (ctx->pc == 0x4DC0F8u) {
        ctx->pc = 0x4DC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC0F4u;
        // 0x4dc0f8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC0FCu;
        goto label_4dc0fc;
    }
    ctx->pc = 0x4DC0F4u;
    SET_GPR_U32(ctx, 31, 0x4DC0FCu);
    ctx->pc = 0x4DC0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC0F4u;
    // 0x4dc0f8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DC0F4u, 0x4DC0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC0FCu;
label_4dc0fc:
    // 0x4dc0fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4dc0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dc100:
    // 0x4dc100: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4dc100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dc104:
    // 0x4dc104: 0xc136b18  jal         func_4DAC60
label_4dc108:
    if (ctx->pc == 0x4DC108u) {
        ctx->pc = 0x4DC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC104u;
        // 0x4dc108: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC10Cu;
        goto label_4dc10c;
    }
    ctx->pc = 0x4DC104u;
    SET_GPR_U32(ctx, 31, 0x4DC10Cu);
    ctx->pc = 0x4DC108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC104u;
    // 0x4dc108: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DC104u, 0x4DC10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC10Cu;
label_4dc10c:
    // 0x4dc10c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x4dc10cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dc110:
    // 0x4dc110: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4dc110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dc114:
    // 0x4dc114: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4dc114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dc118:
    // 0x4dc118: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4dc118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4dc11c:
    // 0x4dc11c: 0xc136b18  jal         func_4DAC60
label_4dc120:
    if (ctx->pc == 0x4DC120u) {
        ctx->pc = 0x4DC120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC11Cu;
        // 0x4dc120: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC124u;
        goto label_4dc124;
    }
    ctx->pc = 0x4DC11Cu;
    SET_GPR_U32(ctx, 31, 0x4DC124u);
    ctx->pc = 0x4DC120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC11Cu;
    // 0x4dc120: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DC11Cu, 0x4DC124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC124u;
label_4dc124:
    // 0x4dc124: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x4dc124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dc128:
    // 0x4dc128: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x4dc128u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_4dc12c:
    // 0x4dc12c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x4dc12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_4dc130:
    // 0x4dc130: 0x86220350  lh          $v0, 0x350($s1)
    ctx->pc = 0x4dc130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_4dc134:
    // 0x4dc134: 0x86230352  lh          $v1, 0x352($s1)
    ctx->pc = 0x4dc134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dc138:
    // 0x4dc138: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x4dc138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_4dc13c:
    // 0x4dc13c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x4dc13cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4dc140:
    // 0x4dc140: 0x10600109  beqz        $v1, . + 4 + (0x109 << 2)
label_4dc144:
    if (ctx->pc == 0x4DC144u) {
        ctx->pc = 0x4DC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC140u;
        // 0x4dc144: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC148u;
        goto label_4dc148;
    }
    ctx->pc = 0x4DC140u;
    {
        const bool branch_taken_0x4dc140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC140u;
        // 0x4dc144: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc140) {
            ctx->pc = 0x4DC568u;
            goto label_4dc568;
        }
    }
    ctx->pc = 0x4DC148u;
label_4dc148:
    // 0x4dc148: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4dc148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4dc14c:
    // 0x4dc14c: 0xc136afa  jal         func_4DABE8
label_4dc150:
    if (ctx->pc == 0x4DC150u) {
        ctx->pc = 0x4DC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC14Cu;
        // 0x4dc150: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC154u;
        goto label_4dc154;
    }
    ctx->pc = 0x4DC14Cu;
    SET_GPR_U32(ctx, 31, 0x4DC154u);
    ctx->pc = 0x4DC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC14Cu;
    // 0x4dc150: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DC14Cu, 0x4DC154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC154u;
label_4dc154:
    // 0x4dc154: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x4dc154u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dc158:
    // 0x4dc158: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dc158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dc15c:
    // 0x4dc15c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dc15cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc160:
    // 0x4dc160: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4dc160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4dc164:
    // 0x4dc164: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x4dc164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_4dc168:
    // 0x4dc168: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4dc168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_4dc16c:
    // 0x4dc16c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4dc16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dc170:
    // 0x4dc170: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x4dc170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_4dc174:
    // 0x4dc174: 0x24c601f0  addiu       $a2, $a2, 0x1F0
    ctx->pc = 0x4dc174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
label_4dc178:
    // 0x4dc178: 0xc136afa  jal         func_4DABE8
label_4dc17c:
    if (ctx->pc == 0x4DC17Cu) {
        ctx->pc = 0x4DC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC178u;
        // 0x4dc17c: 0x24a50200  addiu       $a1, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC180u;
        goto label_4dc180;
    }
    ctx->pc = 0x4DC178u;
    SET_GPR_U32(ctx, 31, 0x4DC180u);
    ctx->pc = 0x4DC17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC178u;
    // 0x4dc17c: 0x24a50200  addiu       $a1, $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DC178u, 0x4DC180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC180u;
label_4dc180:
    // 0x4dc180: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x4dc180u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dc184:
    // 0x4dc184: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dc184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dc188:
    // 0x4dc188: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x4dc188u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc18c:
    // 0x4dc18c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4dc18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4dc190:
    // 0x4dc190: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4dc190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_4dc194:
    // 0x4dc194: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4dc194u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4dc198:
    // 0x4dc198: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x4dc198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dc19c:
    // 0x4dc19c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x4dc19cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dc1a0:
    // 0x4dc1a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x4dc1a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_4dc1a4:
    // 0x4dc1a4: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x4dc1a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dc1a8:
    // 0x4dc1a8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x4dc1a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_4dc1ac:
    // 0x4dc1ac: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x4dc1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_4dc1b0:
    // 0x4dc1b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dc1b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dc1b4:
    // 0x4dc1b4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x4dc1b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dc1b8:
    // 0x4dc1b8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x4dc1b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dc1bc:
    // 0x4dc1bc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x4dc1bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dc1c0:
    // 0x4dc1c0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x4dc1c0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_4dc1c4:
    // 0x4dc1c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x4dc1c4u;
    // VWAITQ (Q already resolved in this runtime)
label_4dc1c8:
    // 0x4dc1c8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x4dc1c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_4dc1cc:
    // 0x4dc1cc: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x4dc1ccu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_4dc1d0:
    // 0x4dc1d0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x4dc1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_4dc1d4:
    // 0x4dc1d4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x4dc1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_4dc1d8:
    // 0x4dc1d8: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x4dc1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_4dc1dc:
    // 0x4dc1dc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x4dc1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_4dc1e0:
    // 0x4dc1e0: 0x24c601f0  addiu       $a2, $a2, 0x1F0
    ctx->pc = 0x4dc1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
label_4dc1e4:
    // 0x4dc1e4: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x4dc1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_4dc1e8:
    // 0x4dc1e8: 0xc136afa  jal         func_4DABE8
label_4dc1ec:
    if (ctx->pc == 0x4DC1ECu) {
        ctx->pc = 0x4DC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC1E8u;
        // 0x4dc1ec: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC1F0u;
        goto label_4dc1f0;
    }
    ctx->pc = 0x4DC1E8u;
    SET_GPR_U32(ctx, 31, 0x4DC1F0u);
    ctx->pc = 0x4DC1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC1E8u;
    // 0x4dc1ec: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DC1E8u, 0x4DC1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC1F0u;
label_4dc1f0:
    // 0x4dc1f0: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x4dc1f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc1f4:
    // 0x4dc1f4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x4dc1f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc1f8:
    // 0x4dc1f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dc1f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dc1fc:
    // 0x4dc1fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dc1fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dc200:
    // 0x4dc200: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dc200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc204:
    // 0x4dc204: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dc204u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc208:
    // 0x4dc208: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dc208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc20c:
    // 0x4dc20c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x4dc20cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dc210:
    // 0x4dc210: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4dc210u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dc214:
    // 0x4dc214: 0x0  nop
    ctx->pc = 0x4dc214u;
    // NOP
label_4dc218:
    // 0x4dc218: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x4dc218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dc21c:
    // 0x4dc21c: 0x0  nop
    ctx->pc = 0x4dc21cu;
    // NOP
label_4dc220:
    // 0x4dc220: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4dc224:
    if (ctx->pc == 0x4DC224u) {
        ctx->pc = 0x4DC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC220u;
        // 0x4dc224: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC228u;
        goto label_4dc228;
    }
    ctx->pc = 0x4DC220u;
    {
        const bool branch_taken_0x4dc220 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4DC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC220u;
        // 0x4dc224: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc220) {
            ctx->pc = 0x4DC23Cu;
            goto label_4dc23c;
        }
    }
    ctx->pc = 0x4DC228u;
label_4dc228:
    // 0x4dc228: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4dc228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dc22c:
    // 0x4dc22c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x4dc22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_4dc230:
    // 0x4dc230: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4dc230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dc234:
    // 0x4dc234: 0xc136b24  jal         func_4DAC90
label_4dc238:
    if (ctx->pc == 0x4DC238u) {
        ctx->pc = 0x4DC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC234u;
        // 0x4dc238: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC23Cu;
        goto label_4dc23c;
    }
    ctx->pc = 0x4DC234u;
    SET_GPR_U32(ctx, 31, 0x4DC23Cu);
    ctx->pc = 0x4DC238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC234u;
    // 0x4dc238: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DC234u, 0x4DC23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC23Cu;
label_4dc23c:
    // 0x4dc23c: 0x86230352  lh          $v1, 0x352($s1)
    ctx->pc = 0x4dc23cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dc240:
    // 0x4dc240: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x4dc240u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc244:
    // 0x4dc244: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4dc244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4dc248:
    // 0x4dc248: 0x7a450000  lq          $a1, 0x0($s2)
    ctx->pc = 0x4dc248u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_4dc24c:
    // 0x4dc24c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4dc24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4dc250:
    // 0x4dc250: 0x786201f0  lq          $v0, 0x1F0($v1)
    ctx->pc = 0x4dc250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 496)));
label_4dc254:
    // 0x4dc254: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x4dc254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_4dc258:
    // 0x4dc258: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x4dc258u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dc25c:
    // 0x4dc25c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dc25cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc260:
    // 0x4dc260: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dc260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc264:
    // 0x4dc264: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dc264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc268:
    // 0x4dc268: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x4dc268u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dc26c:
    // 0x4dc26c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4dc26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dc270:
    // 0x4dc270: 0x0  nop
    ctx->pc = 0x4dc270u;
    // NOP
label_4dc274:
    // 0x4dc274: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x4dc274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_4dc278:
    // 0x4dc278: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x4dc278u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc27c:
    // 0x4dc27c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x4dc27cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_4dc280:
    // 0x4dc280: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dc280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dc284:
    // 0x4dc284: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x4dc284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc288:
    // 0x4dc288: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dc288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc28c:
    // 0x4dc28c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x4dc28cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dc290:
    // 0x4dc290: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4dc290u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dc294:
    // 0x4dc294: 0x0  nop
    ctx->pc = 0x4dc294u;
    // NOP
label_4dc298:
    // 0x4dc298: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x4dc298u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4dc29c:
    // 0x4dc29c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x4dc29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dc2a0:
    // 0x4dc2a0: 0x0  nop
    ctx->pc = 0x4dc2a0u;
    // NOP
label_4dc2a4:
    // 0x4dc2a4: 0x450000b0  bc1f        . + 4 + (0xB0 << 2)
label_4dc2a8:
    if (ctx->pc == 0x4DC2A8u) {
        ctx->pc = 0x4DC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC2A4u;
        // 0x4dc2a8: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC2ACu;
        goto label_4dc2ac;
    }
    ctx->pc = 0x4DC2A4u;
    {
        const bool branch_taken_0x4dc2a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4DC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC2A4u;
        // 0x4dc2a8: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc2a4) {
            ctx->pc = 0x4DC568u;
            goto label_4dc568;
        }
    }
    ctx->pc = 0x4DC2ACu;
label_4dc2ac:
    // 0x4dc2ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dc2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dc2b0:
    // 0x4dc2b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dc2b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dc2b4:
    // 0x4dc2b4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dc2b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dc2b8:
    // 0x4dc2b8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x4dc2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc2bc:
    // 0x4dc2bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dc2bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc2c0:
    // 0x4dc2c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dc2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc2c4:
    // 0x4dc2c4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x4dc2c4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dc2c8:
    // 0x4dc2c8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4dc2c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dc2cc:
    // 0x4dc2cc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x4dc2ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dc2d0:
    // 0x4dc2d0: 0xc136b24  jal         func_4DAC90
label_4dc2d4:
    if (ctx->pc == 0x4DC2D4u) {
        ctx->pc = 0x4DC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC2D0u;
        // 0x4dc2d4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC2D8u;
        goto label_4dc2d8;
    }
    ctx->pc = 0x4DC2D0u;
    SET_GPR_U32(ctx, 31, 0x4DC2D8u);
    ctx->pc = 0x4DC2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC2D0u;
    // 0x4dc2d4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DC2D0u, 0x4DC2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC2D8u;
label_4dc2d8:
    // 0x4dc2d8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dc2d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc2dc:
    // 0x4dc2dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dc2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dc2e0:
    // 0x4dc2e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4dc2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4dc2e4:
    // 0x4dc2e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4dc2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dc2e8:
    // 0x4dc2e8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x4dc2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_4dc2ec:
    // 0x4dc2ec: 0xc136afa  jal         func_4DABE8
label_4dc2f0:
    if (ctx->pc == 0x4DC2F0u) {
        ctx->pc = 0x4DC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC2ECu;
        // 0x4dc2f0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC2F4u;
        goto label_4dc2f4;
    }
    ctx->pc = 0x4DC2ECu;
    SET_GPR_U32(ctx, 31, 0x4DC2F4u);
    ctx->pc = 0x4DC2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC2ECu;
    // 0x4dc2f0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DC2ECu, 0x4DC2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC2F4u;
label_4dc2f4:
    // 0x4dc2f4: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x4dc2f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_4dc2f8:
    // 0x4dc2f8: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x4dc2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_4dc2fc:
    // 0x4dc2fc: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x4dc2fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_4dc300:
    // 0x4dc300: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4dc300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dc304:
    // 0x4dc304: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dc304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc308:
    // 0x4dc308: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dc308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dc30c:
    // 0x4dc30c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4dc30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dc310:
    // 0x4dc310: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x4dc310u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_4dc314:
    // 0x4dc314: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x4dc314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_4dc318:
    // 0x4dc318: 0xc136b24  jal         func_4DAC90
label_4dc31c:
    if (ctx->pc == 0x4DC31Cu) {
        ctx->pc = 0x4DC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC318u;
        // 0x4dc31c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC320u;
        goto label_4dc320;
    }
    ctx->pc = 0x4DC318u;
    SET_GPR_U32(ctx, 31, 0x4DC320u);
    ctx->pc = 0x4DC31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC318u;
    // 0x4dc31c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DC318u, 0x4DC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC320u;
label_4dc320:
    // 0x4dc320: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4dc320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc324:
    // 0x4dc324: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4dc324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dc328:
    // 0x4dc328: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4dc328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4dc32c:
    // 0x4dc32c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4dc32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc330:
    // 0x4dc330: 0xc136b18  jal         func_4DAC60
label_4dc334:
    if (ctx->pc == 0x4DC334u) {
        ctx->pc = 0x4DC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC330u;
        // 0x4dc334: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC338u;
        goto label_4dc338;
    }
    ctx->pc = 0x4DC330u;
    SET_GPR_U32(ctx, 31, 0x4DC338u);
    ctx->pc = 0x4DC334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC330u;
    // 0x4dc334: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DC330u, 0x4DC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC338u;
label_4dc338:
    // 0x4dc338: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4dc338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dc33c:
    // 0x4dc33c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4dc33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dc340:
    // 0x4dc340: 0xc136b18  jal         func_4DAC60
label_4dc344:
    if (ctx->pc == 0x4DC344u) {
        ctx->pc = 0x4DC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC340u;
        // 0x4dc344: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC348u;
        goto label_4dc348;
    }
    ctx->pc = 0x4DC340u;
    SET_GPR_U32(ctx, 31, 0x4DC348u);
    ctx->pc = 0x4DC344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC340u;
    // 0x4dc344: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DC340u, 0x4DC348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC348u;
label_4dc348:
    // 0x4dc348: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x4dc348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dc34c:
    // 0x4dc34c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4dc34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dc350:
    // 0x4dc350: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4dc350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dc354:
    // 0x4dc354: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4dc354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4dc358:
    // 0x4dc358: 0xc136b18  jal         func_4DAC60
label_4dc35c:
    if (ctx->pc == 0x4DC35Cu) {
        ctx->pc = 0x4DC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC358u;
        // 0x4dc35c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC360u;
        goto label_4dc360;
    }
    ctx->pc = 0x4DC358u;
    SET_GPR_U32(ctx, 31, 0x4DC360u);
    ctx->pc = 0x4DC35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC358u;
    // 0x4dc35c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DC358u, 0x4DC360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC360u;
label_4dc360:
    // 0x4dc360: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x4dc360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dc364:
    // 0x4dc364: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x4dc364u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_4dc368:
    // 0x4dc368: 0x1000007f  b           . + 4 + (0x7F << 2)
label_4dc36c:
    if (ctx->pc == 0x4DC36Cu) {
        ctx->pc = 0x4DC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC368u;
        // 0x4dc36c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC370u;
        goto label_4dc370;
    }
    ctx->pc = 0x4DC368u;
    {
        const bool branch_taken_0x4dc368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC368u;
        // 0x4dc36c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc368) {
            ctx->pc = 0x4DC568u;
            goto label_4dc568;
        }
    }
    ctx->pc = 0x4DC370u;
label_4dc370:
    // 0x4dc370: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dc370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4dc374:
    // 0x4dc374: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x4dc374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_4dc378:
    // 0x4dc378: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x4dc378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_4dc37c:
    // 0x4dc37c: 0x40f809  jalr        $v0
label_4dc380:
    if (ctx->pc == 0x4DC380u) {
        ctx->pc = 0x4DC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC37Cu;
        // 0x4dc380: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC384u;
        goto label_4dc384;
    }
    ctx->pc = 0x4DC37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DC384u);
        ctx->pc = 0x4DC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC37Cu;
        // 0x4dc380: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC37Cu, 0x4DC384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC384u;
label_4dc384:
    // 0x4dc384: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4dc384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dc388:
    // 0x4dc388: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x4dc388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dc38c:
    // 0x4dc38c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4dc390:
    // 0x4dc390: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4dc390u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4dc394:
    // 0x4dc394: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x4dc394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_4dc398:
    // 0x4dc398: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x4dc398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_4dc39c:
    // 0x4dc39c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4dc39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4dc3a0:
    // 0x4dc3a0: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x4dc3a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_4dc3a4:
    // 0x4dc3a4: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x4dc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_4dc3a8:
    // 0x4dc3a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4dc3a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4dc3ac:
    // 0x4dc3ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4dc3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_4dc3b0:
    // 0x4dc3b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4dc3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dc3b4:
    // 0x4dc3b4: 0x0  nop
    ctx->pc = 0x4dc3b4u;
    // NOP
label_4dc3b8:
    // 0x4dc3b8: 0x46010528  max.s       $f20, $f0, $f1
    ctx->pc = 0x4dc3b8u;
    ctx->f[20] = std::max(ctx->f[0], ctx->f[1]);
label_4dc3bc:
    // 0x4dc3bc: 0x40f809  jalr        $v0
label_4dc3c0:
    if (ctx->pc == 0x4DC3C0u) {
        ctx->pc = 0x4DC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC3BCu;
        // 0x4dc3c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC3C4u;
        goto label_4dc3c4;
    }
    ctx->pc = 0x4DC3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DC3C4u);
        ctx->pc = 0x4DC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC3BCu;
        // 0x4dc3c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC3BCu, 0x4DC3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC3C4u;
label_4dc3c4:
    // 0x4dc3c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4dc3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc3c8:
    // 0x4dc3c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4dc3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dc3cc:
    // 0x4dc3cc: 0xc136afa  jal         func_4DABE8
label_4dc3d0:
    if (ctx->pc == 0x4DC3D0u) {
        ctx->pc = 0x4DC3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC3CCu;
        // 0x4dc3d0: 0x26260180  addiu       $a2, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC3D4u;
        goto label_4dc3d4;
    }
    ctx->pc = 0x4DC3CCu;
    SET_GPR_U32(ctx, 31, 0x4DC3D4u);
    ctx->pc = 0x4DC3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC3CCu;
    // 0x4dc3d0: 0x26260180  addiu       $a2, $s1, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DC3CCu, 0x4DC3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC3D4u;
label_4dc3d4:
    // 0x4dc3d4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x4dc3d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc3d8:
    // 0x4dc3d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dc3d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dc3dc:
    // 0x4dc3dc: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x4dc3dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc3e0:
    // 0x4dc3e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dc3e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc3e4:
    // 0x4dc3e4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x4dc3e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_4dc3e8:
    // 0x4dc3e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x4dc3e8u;
    // VWAITQ (Q already resolved in this runtime)
label_4dc3ec:
    // 0x4dc3ec: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x4dc3ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc3f0:
    // 0x4dc3f0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x4dc3f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dc3f4:
    // 0x4dc3f4: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x4dc3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4dc3f8:
    // 0x4dc3f8: 0x0  nop
    ctx->pc = 0x4dc3f8u;
    // NOP
label_4dc3fc:
    // 0x4dc3fc: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x4dc3fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dc400:
    // 0x4dc400: 0x0  nop
    ctx->pc = 0x4dc400u;
    // NOP
label_4dc404:
    // 0x4dc404: 0x45000058  bc1f        . + 4 + (0x58 << 2)
label_4dc408:
    if (ctx->pc == 0x4DC408u) {
        ctx->pc = 0x4DC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC404u;
        // 0x4dc408: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC40Cu;
        goto label_4dc40c;
    }
    ctx->pc = 0x4DC404u;
    {
        const bool branch_taken_0x4dc404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4DC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC404u;
        // 0x4dc408: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc404) {
            ctx->pc = 0x4DC568u;
            goto label_4dc568;
        }
    }
    ctx->pc = 0x4DC40Cu;
label_4dc40c:
    // 0x4dc40c: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x4dc40cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dc410:
    // 0x4dc410: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4dc410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dc414:
    // 0x4dc414: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4dc414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4dc418:
    // 0x4dc418: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x4dc418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_4dc41c:
    // 0x4dc41c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4dc41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dc420:
    // 0x4dc420: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x4dc420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_4dc424:
    // 0x4dc424: 0xc136afa  jal         func_4DABE8
label_4dc428:
    if (ctx->pc == 0x4DC428u) {
        ctx->pc = 0x4DC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC424u;
        // 0x4dc428: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC42Cu;
        goto label_4dc42c;
    }
    ctx->pc = 0x4DC424u;
    SET_GPR_U32(ctx, 31, 0x4DC42Cu);
    ctx->pc = 0x4DC428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC424u;
    // 0x4dc428: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DC424u, 0x4DC42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC42Cu;
label_4dc42c:
    // 0x4dc42c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x4dc42cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc430:
    // 0x4dc430: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dc430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4dc434:
    // 0x4dc434: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4dc434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_4dc438:
    // 0x4dc438: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x4dc438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_4dc43c:
    // 0x4dc43c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x4dc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_4dc440:
    // 0x4dc440: 0x40f809  jalr        $v0
label_4dc444:
    if (ctx->pc == 0x4DC444u) {
        ctx->pc = 0x4DC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC440u;
        // 0x4dc444: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC448u;
        goto label_4dc448;
    }
    ctx->pc = 0x4DC440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DC448u);
        ctx->pc = 0x4DC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC440u;
        // 0x4dc444: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC440u, 0x4DC448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC448u;
label_4dc448:
    // 0x4dc448: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x4dc448u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_4dc44c:
    // 0x4dc44c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4dc44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc450:
    // 0x4dc450: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4dc450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4dc454:
    // 0x4dc454: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4dc454u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4dc458:
    // 0x4dc458: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x4dc458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_4dc45c:
    // 0x4dc45c: 0xc136afa  jal         func_4DABE8
label_4dc460:
    if (ctx->pc == 0x4DC460u) {
        ctx->pc = 0x4DC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC45Cu;
        // 0x4dc460: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC464u;
        goto label_4dc464;
    }
    ctx->pc = 0x4DC45Cu;
    SET_GPR_U32(ctx, 31, 0x4DC464u);
    ctx->pc = 0x4DC460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC45Cu;
    // 0x4dc460: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4DC45Cu, 0x4DC464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC464u;
label_4dc464:
    // 0x4dc464: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x4dc464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc468:
    // 0x4dc468: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dc468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dc46c:
    // 0x4dc46c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x4dc46cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc470:
    // 0x4dc470: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dc470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc474:
    // 0x4dc474: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dc474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc478:
    // 0x4dc478: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x4dc478u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_4dc47c:
    // 0x4dc47c: 0x4a0003bf  vwaitq
    ctx->pc = 0x4dc47cu;
    // VWAITQ (Q already resolved in this runtime)
label_4dc480:
    // 0x4dc480: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x4dc480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc484:
    // 0x4dc484: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x4dc484u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dc488:
    // 0x4dc488: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x4dc488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dc48c:
    // 0x4dc48c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4dc48cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dc490:
    // 0x4dc490: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x4dc490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4dc494:
    // 0x4dc494: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x4dc494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc498:
    // 0x4dc498: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x4dc498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc49c:
    // 0x4dc49c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x4dc49cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc4a0:
    // 0x4dc4a0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x4dc4a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_4dc4a4:
    // 0x4dc4a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x4dc4a4u;
    // VWAITQ (Q already resolved in this runtime)
label_4dc4a8:
    // 0x4dc4a8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x4dc4a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_4dc4ac:
    // 0x4dc4ac: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x4dc4acu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_4dc4b0:
    // 0x4dc4b0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4dc4b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dc4b4:
    // 0x4dc4b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dc4b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4dc4b8:
    // 0x4dc4b8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x4dc4b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dc4bc:
    // 0x4dc4bc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x4dc4bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dc4c0:
    // 0x4dc4c0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x4dc4c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4dc4c4:
    // 0x4dc4c4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x4dc4c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_4dc4c8:
    // 0x4dc4c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x4dc4c8u;
    // VWAITQ (Q already resolved in this runtime)
label_4dc4cc:
    // 0x4dc4cc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x4dc4ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_4dc4d0:
    // 0x4dc4d0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x4dc4d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_4dc4d4:
    // 0x4dc4d4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x4dc4d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_4dc4d8:
    // 0x4dc4d8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x4dc4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_4dc4dc:
    // 0x4dc4dc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4dc4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_4dc4e0:
    // 0x4dc4e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4dc4e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dc4e4:
    // 0x4dc4e4: 0x0  nop
    ctx->pc = 0x4dc4e4u;
    // NOP
label_4dc4e8:
    // 0x4dc4e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4dc4ec:
    if (ctx->pc == 0x4DC4ECu) {
        ctx->pc = 0x4DC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC4E8u;
        // 0x4dc4ec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC4F0u;
        goto label_4dc4f0;
    }
    ctx->pc = 0x4DC4E8u;
    {
        const bool branch_taken_0x4dc4e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4DC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC4E8u;
        // 0x4dc4ec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc4e8) {
            ctx->pc = 0x4DC504u;
            goto label_4dc504;
        }
    }
    ctx->pc = 0x4DC4F0u;
label_4dc4f0:
    // 0x4dc4f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x4dc4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_4dc4f4:
    // 0x4dc4f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4dc4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dc4f8:
    // 0x4dc4f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4dc4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4dc4fc:
    // 0x4dc4fc: 0xc136b24  jal         func_4DAC90
label_4dc500:
    if (ctx->pc == 0x4DC500u) {
        ctx->pc = 0x4DC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC4FCu;
        // 0x4dc500: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC504u;
        goto label_4dc504;
    }
    ctx->pc = 0x4DC4FCu;
    SET_GPR_U32(ctx, 31, 0x4DC504u);
    ctx->pc = 0x4DC500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC4FCu;
    // 0x4dc500: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DC4FCu, 0x4DC504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC504u;
label_4dc504:
    // 0x4dc504: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dc504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4dc508:
    // 0x4dc508: 0x847001b8  lh          $s0, 0x1B8($v1)
    ctx->pc = 0x4dc508u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_4dc50c:
    // 0x4dc50c: 0x247201b8  addiu       $s2, $v1, 0x1B8
    ctx->pc = 0x4dc50cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 440));
label_4dc510:
    // 0x4dc510: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x4dc510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_4dc514:
    // 0x4dc514: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x4dc514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_4dc518:
    // 0x4dc518: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x4dc518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_4dc51c:
    // 0x4dc51c: 0x40f809  jalr        $v0
label_4dc520:
    if (ctx->pc == 0x4DC520u) {
        ctx->pc = 0x4DC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC51Cu;
        // 0x4dc520: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC524u;
        goto label_4dc524;
    }
    ctx->pc = 0x4DC51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DC524u);
        ctx->pc = 0x4DC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC51Cu;
        // 0x4dc520: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC51Cu, 0x4DC524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC524u;
label_4dc524:
    // 0x4dc524: 0x4615a301  sub.s       $f12, $f20, $f21
    ctx->pc = 0x4dc524u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_4dc528:
    // 0x4dc528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4dc528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc52c:
    // 0x4dc52c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4dc52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dc530:
    // 0x4dc530: 0xc136b24  jal         func_4DAC90
label_4dc534:
    if (ctx->pc == 0x4DC534u) {
        ctx->pc = 0x4DC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC530u;
        // 0x4dc534: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC538u;
        goto label_4dc538;
    }
    ctx->pc = 0x4DC530u;
    SET_GPR_U32(ctx, 31, 0x4DC538u);
    ctx->pc = 0x4DC534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC530u;
    // 0x4dc534: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4DC530u, 0x4DC538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC538u;
label_4dc538:
    // 0x4dc538: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x4dc538u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc53c:
    // 0x4dc53c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4dc53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dc540:
    // 0x4dc540: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4dc540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dc544:
    // 0x4dc544: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4dc544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4dc548:
    // 0x4dc548: 0xc136b18  jal         func_4DAC60
label_4dc54c:
    if (ctx->pc == 0x4DC54Cu) {
        ctx->pc = 0x4DC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC548u;
        // 0x4dc54c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC550u;
        goto label_4dc550;
    }
    ctx->pc = 0x4DC548u;
    SET_GPR_U32(ctx, 31, 0x4DC550u);
    ctx->pc = 0x4DC54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC548u;
    // 0x4dc54c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4DC548u, 0x4DC550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC550u;
label_4dc550:
    // 0x4dc550: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x4dc550u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc554:
    // 0x4dc554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dc554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dc558:
    // 0x4dc558: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x4dc558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_4dc55c:
    // 0x4dc55c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4dc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4dc560:
    // 0x4dc560: 0x40f809  jalr        $v0
label_4dc564:
    if (ctx->pc == 0x4DC564u) {
        ctx->pc = 0x4DC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC560u;
        // 0x4dc564: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC568u;
        goto label_4dc568;
    }
    ctx->pc = 0x4DC560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DC568u);
        ctx->pc = 0x4DC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC560u;
        // 0x4dc564: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC560u, 0x4DC568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC568u;
label_4dc568:
    // 0x4dc568: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4dc568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4dc56c:
    // 0x4dc56c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4dc56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4dc570:
    // 0x4dc570: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4dc570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4dc574:
    // 0x4dc574: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4dc574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4dc578:
    // 0x4dc578: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4dc578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4dc57c:
    // 0x4dc57c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x4dc57cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4dc580:
    // 0x4dc580: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4dc580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4dc584:
    // 0x4dc584: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x4dc584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4dc588:
    // 0x4dc588: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x4dc588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4dc58c:
    // 0x4dc58c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x4dc58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4dc590:
    // 0x4dc590: 0x3e00008  jr          $ra
label_4dc594:
    if (ctx->pc == 0x4DC594u) {
        ctx->pc = 0x4DC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC590u;
        // 0x4dc594: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC598u;
        goto label_4dc598;
    }
    ctx->pc = 0x4DC590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC590u;
        // 0x4dc594: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC598u;
label_4dc598:
    // 0x4dc598: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x4dc598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4dc59c:
    // 0x4dc59c: 0x0  nop
    ctx->pc = 0x4dc59cu;
    // NOP
label_4dc5a0:
    // 0x4dc5a0: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x4dc5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4dc5a4:
    // 0x4dc5a4: 0x0  nop
    ctx->pc = 0x4dc5a4u;
    // NOP
    ctx->pc = 0x4dc5a8u;
}
