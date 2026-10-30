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

// Function: sub_003EDB28
// Address: 0x3edb28 - 0x3ee170
void sub_003EDB28_0x3edb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDB28_0x3edb28");
#endif

    switch (ctx->pc) {
        case 0x3edb28u: goto label_3edb28;
        case 0x3edb2cu: goto label_3edb2c;
        case 0x3edb30u: goto label_3edb30;
        case 0x3edb34u: goto label_3edb34;
        case 0x3edb38u: goto label_3edb38;
        case 0x3edb3cu: goto label_3edb3c;
        case 0x3edb40u: goto label_3edb40;
        case 0x3edb44u: goto label_3edb44;
        case 0x3edb48u: goto label_3edb48;
        case 0x3edb4cu: goto label_3edb4c;
        case 0x3edb50u: goto label_3edb50;
        case 0x3edb54u: goto label_3edb54;
        case 0x3edb58u: goto label_3edb58;
        case 0x3edb5cu: goto label_3edb5c;
        case 0x3edb60u: goto label_3edb60;
        case 0x3edb64u: goto label_3edb64;
        case 0x3edb68u: goto label_3edb68;
        case 0x3edb6cu: goto label_3edb6c;
        case 0x3edb70u: goto label_3edb70;
        case 0x3edb74u: goto label_3edb74;
        case 0x3edb78u: goto label_3edb78;
        case 0x3edb7cu: goto label_3edb7c;
        case 0x3edb80u: goto label_3edb80;
        case 0x3edb84u: goto label_3edb84;
        case 0x3edb88u: goto label_3edb88;
        case 0x3edb8cu: goto label_3edb8c;
        case 0x3edb90u: goto label_3edb90;
        case 0x3edb94u: goto label_3edb94;
        case 0x3edb98u: goto label_3edb98;
        case 0x3edb9cu: goto label_3edb9c;
        case 0x3edba0u: goto label_3edba0;
        case 0x3edba4u: goto label_3edba4;
        case 0x3edba8u: goto label_3edba8;
        case 0x3edbacu: goto label_3edbac;
        case 0x3edbb0u: goto label_3edbb0;
        case 0x3edbb4u: goto label_3edbb4;
        case 0x3edbb8u: goto label_3edbb8;
        case 0x3edbbcu: goto label_3edbbc;
        case 0x3edbc0u: goto label_3edbc0;
        case 0x3edbc4u: goto label_3edbc4;
        case 0x3edbc8u: goto label_3edbc8;
        case 0x3edbccu: goto label_3edbcc;
        case 0x3edbd0u: goto label_3edbd0;
        case 0x3edbd4u: goto label_3edbd4;
        case 0x3edbd8u: goto label_3edbd8;
        case 0x3edbdcu: goto label_3edbdc;
        case 0x3edbe0u: goto label_3edbe0;
        case 0x3edbe4u: goto label_3edbe4;
        case 0x3edbe8u: goto label_3edbe8;
        case 0x3edbecu: goto label_3edbec;
        case 0x3edbf0u: goto label_3edbf0;
        case 0x3edbf4u: goto label_3edbf4;
        case 0x3edbf8u: goto label_3edbf8;
        case 0x3edbfcu: goto label_3edbfc;
        case 0x3edc00u: goto label_3edc00;
        case 0x3edc04u: goto label_3edc04;
        case 0x3edc08u: goto label_3edc08;
        case 0x3edc0cu: goto label_3edc0c;
        case 0x3edc10u: goto label_3edc10;
        case 0x3edc14u: goto label_3edc14;
        case 0x3edc18u: goto label_3edc18;
        case 0x3edc1cu: goto label_3edc1c;
        case 0x3edc20u: goto label_3edc20;
        case 0x3edc24u: goto label_3edc24;
        case 0x3edc28u: goto label_3edc28;
        case 0x3edc2cu: goto label_3edc2c;
        case 0x3edc30u: goto label_3edc30;
        case 0x3edc34u: goto label_3edc34;
        case 0x3edc38u: goto label_3edc38;
        case 0x3edc3cu: goto label_3edc3c;
        case 0x3edc40u: goto label_3edc40;
        case 0x3edc44u: goto label_3edc44;
        case 0x3edc48u: goto label_3edc48;
        case 0x3edc4cu: goto label_3edc4c;
        case 0x3edc50u: goto label_3edc50;
        case 0x3edc54u: goto label_3edc54;
        case 0x3edc58u: goto label_3edc58;
        case 0x3edc5cu: goto label_3edc5c;
        case 0x3edc60u: goto label_3edc60;
        case 0x3edc64u: goto label_3edc64;
        case 0x3edc68u: goto label_3edc68;
        case 0x3edc6cu: goto label_3edc6c;
        case 0x3edc70u: goto label_3edc70;
        case 0x3edc74u: goto label_3edc74;
        case 0x3edc78u: goto label_3edc78;
        case 0x3edc7cu: goto label_3edc7c;
        case 0x3edc80u: goto label_3edc80;
        case 0x3edc84u: goto label_3edc84;
        case 0x3edc88u: goto label_3edc88;
        case 0x3edc8cu: goto label_3edc8c;
        case 0x3edc90u: goto label_3edc90;
        case 0x3edc94u: goto label_3edc94;
        case 0x3edc98u: goto label_3edc98;
        case 0x3edc9cu: goto label_3edc9c;
        case 0x3edca0u: goto label_3edca0;
        case 0x3edca4u: goto label_3edca4;
        case 0x3edca8u: goto label_3edca8;
        case 0x3edcacu: goto label_3edcac;
        case 0x3edcb0u: goto label_3edcb0;
        case 0x3edcb4u: goto label_3edcb4;
        case 0x3edcb8u: goto label_3edcb8;
        case 0x3edcbcu: goto label_3edcbc;
        case 0x3edcc0u: goto label_3edcc0;
        case 0x3edcc4u: goto label_3edcc4;
        case 0x3edcc8u: goto label_3edcc8;
        case 0x3edcccu: goto label_3edccc;
        case 0x3edcd0u: goto label_3edcd0;
        case 0x3edcd4u: goto label_3edcd4;
        case 0x3edcd8u: goto label_3edcd8;
        case 0x3edcdcu: goto label_3edcdc;
        case 0x3edce0u: goto label_3edce0;
        case 0x3edce4u: goto label_3edce4;
        case 0x3edce8u: goto label_3edce8;
        case 0x3edcecu: goto label_3edcec;
        case 0x3edcf0u: goto label_3edcf0;
        case 0x3edcf4u: goto label_3edcf4;
        case 0x3edcf8u: goto label_3edcf8;
        case 0x3edcfcu: goto label_3edcfc;
        case 0x3edd00u: goto label_3edd00;
        case 0x3edd04u: goto label_3edd04;
        case 0x3edd08u: goto label_3edd08;
        case 0x3edd0cu: goto label_3edd0c;
        case 0x3edd10u: goto label_3edd10;
        case 0x3edd14u: goto label_3edd14;
        case 0x3edd18u: goto label_3edd18;
        case 0x3edd1cu: goto label_3edd1c;
        case 0x3edd20u: goto label_3edd20;
        case 0x3edd24u: goto label_3edd24;
        case 0x3edd28u: goto label_3edd28;
        case 0x3edd2cu: goto label_3edd2c;
        case 0x3edd30u: goto label_3edd30;
        case 0x3edd34u: goto label_3edd34;
        case 0x3edd38u: goto label_3edd38;
        case 0x3edd3cu: goto label_3edd3c;
        case 0x3edd40u: goto label_3edd40;
        case 0x3edd44u: goto label_3edd44;
        case 0x3edd48u: goto label_3edd48;
        case 0x3edd4cu: goto label_3edd4c;
        case 0x3edd50u: goto label_3edd50;
        case 0x3edd54u: goto label_3edd54;
        case 0x3edd58u: goto label_3edd58;
        case 0x3edd5cu: goto label_3edd5c;
        case 0x3edd60u: goto label_3edd60;
        case 0x3edd64u: goto label_3edd64;
        case 0x3edd68u: goto label_3edd68;
        case 0x3edd6cu: goto label_3edd6c;
        case 0x3edd70u: goto label_3edd70;
        case 0x3edd74u: goto label_3edd74;
        case 0x3edd78u: goto label_3edd78;
        case 0x3edd7cu: goto label_3edd7c;
        case 0x3edd80u: goto label_3edd80;
        case 0x3edd84u: goto label_3edd84;
        case 0x3edd88u: goto label_3edd88;
        case 0x3edd8cu: goto label_3edd8c;
        case 0x3edd90u: goto label_3edd90;
        case 0x3edd94u: goto label_3edd94;
        case 0x3edd98u: goto label_3edd98;
        case 0x3edd9cu: goto label_3edd9c;
        case 0x3edda0u: goto label_3edda0;
        case 0x3edda4u: goto label_3edda4;
        case 0x3edda8u: goto label_3edda8;
        case 0x3eddacu: goto label_3eddac;
        case 0x3eddb0u: goto label_3eddb0;
        case 0x3eddb4u: goto label_3eddb4;
        case 0x3eddb8u: goto label_3eddb8;
        case 0x3eddbcu: goto label_3eddbc;
        case 0x3eddc0u: goto label_3eddc0;
        case 0x3eddc4u: goto label_3eddc4;
        case 0x3eddc8u: goto label_3eddc8;
        case 0x3eddccu: goto label_3eddcc;
        case 0x3eddd0u: goto label_3eddd0;
        case 0x3eddd4u: goto label_3eddd4;
        case 0x3eddd8u: goto label_3eddd8;
        case 0x3edddcu: goto label_3edddc;
        case 0x3edde0u: goto label_3edde0;
        case 0x3edde4u: goto label_3edde4;
        case 0x3edde8u: goto label_3edde8;
        case 0x3eddecu: goto label_3eddec;
        case 0x3eddf0u: goto label_3eddf0;
        case 0x3eddf4u: goto label_3eddf4;
        case 0x3eddf8u: goto label_3eddf8;
        case 0x3eddfcu: goto label_3eddfc;
        case 0x3ede00u: goto label_3ede00;
        case 0x3ede04u: goto label_3ede04;
        case 0x3ede08u: goto label_3ede08;
        case 0x3ede0cu: goto label_3ede0c;
        case 0x3ede10u: goto label_3ede10;
        case 0x3ede14u: goto label_3ede14;
        case 0x3ede18u: goto label_3ede18;
        case 0x3ede1cu: goto label_3ede1c;
        case 0x3ede20u: goto label_3ede20;
        case 0x3ede24u: goto label_3ede24;
        case 0x3ede28u: goto label_3ede28;
        case 0x3ede2cu: goto label_3ede2c;
        case 0x3ede30u: goto label_3ede30;
        case 0x3ede34u: goto label_3ede34;
        case 0x3ede38u: goto label_3ede38;
        case 0x3ede3cu: goto label_3ede3c;
        case 0x3ede40u: goto label_3ede40;
        case 0x3ede44u: goto label_3ede44;
        case 0x3ede48u: goto label_3ede48;
        case 0x3ede4cu: goto label_3ede4c;
        case 0x3ede50u: goto label_3ede50;
        case 0x3ede54u: goto label_3ede54;
        case 0x3ede58u: goto label_3ede58;
        case 0x3ede5cu: goto label_3ede5c;
        case 0x3ede60u: goto label_3ede60;
        case 0x3ede64u: goto label_3ede64;
        case 0x3ede68u: goto label_3ede68;
        case 0x3ede6cu: goto label_3ede6c;
        case 0x3ede70u: goto label_3ede70;
        case 0x3ede74u: goto label_3ede74;
        case 0x3ede78u: goto label_3ede78;
        case 0x3ede7cu: goto label_3ede7c;
        case 0x3ede80u: goto label_3ede80;
        case 0x3ede84u: goto label_3ede84;
        case 0x3ede88u: goto label_3ede88;
        case 0x3ede8cu: goto label_3ede8c;
        case 0x3ede90u: goto label_3ede90;
        case 0x3ede94u: goto label_3ede94;
        case 0x3ede98u: goto label_3ede98;
        case 0x3ede9cu: goto label_3ede9c;
        case 0x3edea0u: goto label_3edea0;
        case 0x3edea4u: goto label_3edea4;
        case 0x3edea8u: goto label_3edea8;
        case 0x3edeacu: goto label_3edeac;
        case 0x3edeb0u: goto label_3edeb0;
        case 0x3edeb4u: goto label_3edeb4;
        case 0x3edeb8u: goto label_3edeb8;
        case 0x3edebcu: goto label_3edebc;
        case 0x3edec0u: goto label_3edec0;
        case 0x3edec4u: goto label_3edec4;
        case 0x3edec8u: goto label_3edec8;
        case 0x3edeccu: goto label_3edecc;
        case 0x3eded0u: goto label_3eded0;
        case 0x3eded4u: goto label_3eded4;
        case 0x3eded8u: goto label_3eded8;
        case 0x3ededcu: goto label_3ededc;
        case 0x3edee0u: goto label_3edee0;
        case 0x3edee4u: goto label_3edee4;
        case 0x3edee8u: goto label_3edee8;
        case 0x3edeecu: goto label_3edeec;
        case 0x3edef0u: goto label_3edef0;
        case 0x3edef4u: goto label_3edef4;
        case 0x3edef8u: goto label_3edef8;
        case 0x3edefcu: goto label_3edefc;
        case 0x3edf00u: goto label_3edf00;
        case 0x3edf04u: goto label_3edf04;
        case 0x3edf08u: goto label_3edf08;
        case 0x3edf0cu: goto label_3edf0c;
        case 0x3edf10u: goto label_3edf10;
        case 0x3edf14u: goto label_3edf14;
        case 0x3edf18u: goto label_3edf18;
        case 0x3edf1cu: goto label_3edf1c;
        case 0x3edf20u: goto label_3edf20;
        case 0x3edf24u: goto label_3edf24;
        case 0x3edf28u: goto label_3edf28;
        case 0x3edf2cu: goto label_3edf2c;
        case 0x3edf30u: goto label_3edf30;
        case 0x3edf34u: goto label_3edf34;
        case 0x3edf38u: goto label_3edf38;
        case 0x3edf3cu: goto label_3edf3c;
        case 0x3edf40u: goto label_3edf40;
        case 0x3edf44u: goto label_3edf44;
        case 0x3edf48u: goto label_3edf48;
        case 0x3edf4cu: goto label_3edf4c;
        case 0x3edf50u: goto label_3edf50;
        case 0x3edf54u: goto label_3edf54;
        case 0x3edf58u: goto label_3edf58;
        case 0x3edf5cu: goto label_3edf5c;
        case 0x3edf60u: goto label_3edf60;
        case 0x3edf64u: goto label_3edf64;
        case 0x3edf68u: goto label_3edf68;
        case 0x3edf6cu: goto label_3edf6c;
        case 0x3edf70u: goto label_3edf70;
        case 0x3edf74u: goto label_3edf74;
        case 0x3edf78u: goto label_3edf78;
        case 0x3edf7cu: goto label_3edf7c;
        case 0x3edf80u: goto label_3edf80;
        case 0x3edf84u: goto label_3edf84;
        case 0x3edf88u: goto label_3edf88;
        case 0x3edf8cu: goto label_3edf8c;
        case 0x3edf90u: goto label_3edf90;
        case 0x3edf94u: goto label_3edf94;
        case 0x3edf98u: goto label_3edf98;
        case 0x3edf9cu: goto label_3edf9c;
        case 0x3edfa0u: goto label_3edfa0;
        case 0x3edfa4u: goto label_3edfa4;
        case 0x3edfa8u: goto label_3edfa8;
        case 0x3edfacu: goto label_3edfac;
        case 0x3edfb0u: goto label_3edfb0;
        case 0x3edfb4u: goto label_3edfb4;
        case 0x3edfb8u: goto label_3edfb8;
        case 0x3edfbcu: goto label_3edfbc;
        case 0x3edfc0u: goto label_3edfc0;
        case 0x3edfc4u: goto label_3edfc4;
        case 0x3edfc8u: goto label_3edfc8;
        case 0x3edfccu: goto label_3edfcc;
        case 0x3edfd0u: goto label_3edfd0;
        case 0x3edfd4u: goto label_3edfd4;
        case 0x3edfd8u: goto label_3edfd8;
        case 0x3edfdcu: goto label_3edfdc;
        case 0x3edfe0u: goto label_3edfe0;
        case 0x3edfe4u: goto label_3edfe4;
        case 0x3edfe8u: goto label_3edfe8;
        case 0x3edfecu: goto label_3edfec;
        case 0x3edff0u: goto label_3edff0;
        case 0x3edff4u: goto label_3edff4;
        case 0x3edff8u: goto label_3edff8;
        case 0x3edffcu: goto label_3edffc;
        case 0x3ee000u: goto label_3ee000;
        case 0x3ee004u: goto label_3ee004;
        case 0x3ee008u: goto label_3ee008;
        case 0x3ee00cu: goto label_3ee00c;
        case 0x3ee010u: goto label_3ee010;
        case 0x3ee014u: goto label_3ee014;
        case 0x3ee018u: goto label_3ee018;
        case 0x3ee01cu: goto label_3ee01c;
        case 0x3ee020u: goto label_3ee020;
        case 0x3ee024u: goto label_3ee024;
        case 0x3ee028u: goto label_3ee028;
        case 0x3ee02cu: goto label_3ee02c;
        case 0x3ee030u: goto label_3ee030;
        case 0x3ee034u: goto label_3ee034;
        case 0x3ee038u: goto label_3ee038;
        case 0x3ee03cu: goto label_3ee03c;
        case 0x3ee040u: goto label_3ee040;
        case 0x3ee044u: goto label_3ee044;
        case 0x3ee048u: goto label_3ee048;
        case 0x3ee04cu: goto label_3ee04c;
        case 0x3ee050u: goto label_3ee050;
        case 0x3ee054u: goto label_3ee054;
        case 0x3ee058u: goto label_3ee058;
        case 0x3ee05cu: goto label_3ee05c;
        case 0x3ee060u: goto label_3ee060;
        case 0x3ee064u: goto label_3ee064;
        case 0x3ee068u: goto label_3ee068;
        case 0x3ee06cu: goto label_3ee06c;
        case 0x3ee070u: goto label_3ee070;
        case 0x3ee074u: goto label_3ee074;
        case 0x3ee078u: goto label_3ee078;
        case 0x3ee07cu: goto label_3ee07c;
        case 0x3ee080u: goto label_3ee080;
        case 0x3ee084u: goto label_3ee084;
        case 0x3ee088u: goto label_3ee088;
        case 0x3ee08cu: goto label_3ee08c;
        case 0x3ee090u: goto label_3ee090;
        case 0x3ee094u: goto label_3ee094;
        case 0x3ee098u: goto label_3ee098;
        case 0x3ee09cu: goto label_3ee09c;
        case 0x3ee0a0u: goto label_3ee0a0;
        case 0x3ee0a4u: goto label_3ee0a4;
        case 0x3ee0a8u: goto label_3ee0a8;
        case 0x3ee0acu: goto label_3ee0ac;
        case 0x3ee0b0u: goto label_3ee0b0;
        case 0x3ee0b4u: goto label_3ee0b4;
        case 0x3ee0b8u: goto label_3ee0b8;
        case 0x3ee0bcu: goto label_3ee0bc;
        case 0x3ee0c0u: goto label_3ee0c0;
        case 0x3ee0c4u: goto label_3ee0c4;
        case 0x3ee0c8u: goto label_3ee0c8;
        case 0x3ee0ccu: goto label_3ee0cc;
        case 0x3ee0d0u: goto label_3ee0d0;
        case 0x3ee0d4u: goto label_3ee0d4;
        case 0x3ee0d8u: goto label_3ee0d8;
        case 0x3ee0dcu: goto label_3ee0dc;
        case 0x3ee0e0u: goto label_3ee0e0;
        case 0x3ee0e4u: goto label_3ee0e4;
        case 0x3ee0e8u: goto label_3ee0e8;
        case 0x3ee0ecu: goto label_3ee0ec;
        case 0x3ee0f0u: goto label_3ee0f0;
        case 0x3ee0f4u: goto label_3ee0f4;
        case 0x3ee0f8u: goto label_3ee0f8;
        case 0x3ee0fcu: goto label_3ee0fc;
        case 0x3ee100u: goto label_3ee100;
        case 0x3ee104u: goto label_3ee104;
        case 0x3ee108u: goto label_3ee108;
        case 0x3ee10cu: goto label_3ee10c;
        case 0x3ee110u: goto label_3ee110;
        case 0x3ee114u: goto label_3ee114;
        case 0x3ee118u: goto label_3ee118;
        case 0x3ee11cu: goto label_3ee11c;
        case 0x3ee120u: goto label_3ee120;
        case 0x3ee124u: goto label_3ee124;
        case 0x3ee128u: goto label_3ee128;
        case 0x3ee12cu: goto label_3ee12c;
        case 0x3ee130u: goto label_3ee130;
        case 0x3ee134u: goto label_3ee134;
        case 0x3ee138u: goto label_3ee138;
        case 0x3ee13cu: goto label_3ee13c;
        case 0x3ee140u: goto label_3ee140;
        case 0x3ee144u: goto label_3ee144;
        case 0x3ee148u: goto label_3ee148;
        case 0x3ee14cu: goto label_3ee14c;
        case 0x3ee150u: goto label_3ee150;
        case 0x3ee154u: goto label_3ee154;
        case 0x3ee158u: goto label_3ee158;
        case 0x3ee15cu: goto label_3ee15c;
        case 0x3ee160u: goto label_3ee160;
        case 0x3ee164u: goto label_3ee164;
        case 0x3ee168u: goto label_3ee168;
        case 0x3ee16cu: goto label_3ee16c;
        default: break;
    }

    ctx->pc = 0x3edb28u;

label_3edb28:
    // 0x3edb28: 0x27bdfa20  addiu       $sp, $sp, -0x5E0
    ctx->pc = 0x3edb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965792));
label_3edb2c:
    // 0x3edb2c: 0x7fb005d0  sq          $s0, 0x5D0($sp)
    ctx->pc = 0x3edb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), GPR_VEC(ctx, 16));
label_3edb30:
    // 0x3edb30: 0x7fb50580  sq          $s5, 0x580($sp)
    ctx->pc = 0x3edb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 21));
label_3edb34:
    // 0x3edb34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3edb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3edb38:
    // 0x3edb38: 0x7fb60570  sq          $s6, 0x570($sp)
    ctx->pc = 0x3edb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 22));
label_3edb3c:
    // 0x3edb3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3edb3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3edb40:
    // 0x3edb40: 0x7fbe0550  sq          $fp, 0x550($sp)
    ctx->pc = 0x3edb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 30));
label_3edb44:
    // 0x3edb44: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3edb44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3edb48:
    // 0x3edb48: 0x7fb105c0  sq          $s1, 0x5C0($sp)
    ctx->pc = 0x3edb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 17));
label_3edb4c:
    // 0x3edb4c: 0x7fb205b0  sq          $s2, 0x5B0($sp)
    ctx->pc = 0x3edb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 18));
label_3edb50:
    // 0x3edb50: 0x7fb305a0  sq          $s3, 0x5A0($sp)
    ctx->pc = 0x3edb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 19));
label_3edb54:
    // 0x3edb54: 0x7fb40590  sq          $s4, 0x590($sp)
    ctx->pc = 0x3edb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 20));
label_3edb58:
    // 0x3edb58: 0x7fb70560  sq          $s7, 0x560($sp)
    ctx->pc = 0x3edb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 23));
label_3edb5c:
    // 0x3edb5c: 0xffbf0540  sd          $ra, 0x540($sp)
    ctx->pc = 0x3edb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1344), GPR_U64(ctx, 31));
label_3edb60:
    // 0x3edb60: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3edb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3edb64:
    // 0x3edb64: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3edb64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3edb68:
    // 0x3edb68: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3edb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3edb6c:
    // 0x3edb6c: 0x40f809  jalr        $v0
label_3edb70:
    if (ctx->pc == 0x3EDB70u) {
        ctx->pc = 0x3EDB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB6Cu;
        // 0x3edb70: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDB74u;
        goto label_3edb74;
    }
    ctx->pc = 0x3EDB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EDB74u);
        ctx->pc = 0x3EDB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB6Cu;
        // 0x3edb70: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDB6Cu, 0x3EDB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EDB74u;
label_3edb74:
    // 0x3edb74: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3edb74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3edb78:
    // 0x3edb78: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3edb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3edb7c:
    // 0x3edb7c: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_3edb80:
    if (ctx->pc == 0x3EDB80u) {
        ctx->pc = 0x3EDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB7Cu;
        // 0x3edb80: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDB84u;
        goto label_3edb84;
    }
    ctx->pc = 0x3EDB7Cu;
    {
        const bool branch_taken_0x3edb7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB7Cu;
        // 0x3edb80: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb7c) {
            ctx->pc = 0x3EDBB8u;
            goto label_3edbb8;
        }
    }
    ctx->pc = 0x3EDB84u;
label_3edb84:
    // 0x3edb84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3edb88:
    if (ctx->pc == 0x3EDB88u) {
        ctx->pc = 0x3EDB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB84u;
        // 0x3edb88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDB8Cu;
        goto label_3edb8c;
    }
    ctx->pc = 0x3EDB84u;
    {
        const bool branch_taken_0x3edb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB84u;
        // 0x3edb88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb84) {
            ctx->pc = 0x3EDB9Cu;
            goto label_3edb9c;
        }
    }
    ctx->pc = 0x3EDB8Cu;
label_3edb8c:
    // 0x3edb8c: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_3edb90:
    if (ctx->pc == 0x3EDB90u) {
        ctx->pc = 0x3EDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB8Cu;
        // 0x3edb90: 0x7bb005d0  lq          $s0, 0x5D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDB94u;
        goto label_3edb94;
    }
    ctx->pc = 0x3EDB8Cu;
    {
        const bool branch_taken_0x3edb8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB8Cu;
        // 0x3edb90: 0x7bb005d0  lq          $s0, 0x5D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb8c) {
            ctx->pc = 0x3EDBD4u;
            goto label_3edbd4;
        }
    }
    ctx->pc = 0x3EDB94u;
label_3edb94:
    // 0x3edb94: 0x1000016b  b           . + 4 + (0x16B << 2)
label_3edb98:
    if (ctx->pc == 0x3EDB98u) {
        ctx->pc = 0x3EDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB94u;
        // 0x3edb98: 0x7bb105c0  lq          $s1, 0x5C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDB9Cu;
        goto label_3edb9c;
    }
    ctx->pc = 0x3EDB94u;
    {
        const bool branch_taken_0x3edb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB94u;
        // 0x3edb98: 0x7bb105c0  lq          $s1, 0x5C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb94) {
            ctx->pc = 0x3EE144u;
            goto label_3ee144;
        }
    }
    ctx->pc = 0x3EDB9Cu;
label_3edb9c:
    // 0x3edb9c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3edb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3edba0:
    // 0x3edba0: 0x16020167  bne         $s0, $v0, . + 4 + (0x167 << 2)
label_3edba4:
    if (ctx->pc == 0x3EDBA4u) {
        ctx->pc = 0x3EDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBA0u;
        // 0x3edba4: 0x7bb005d0  lq          $s0, 0x5D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDBA8u;
        goto label_3edba8;
    }
    ctx->pc = 0x3EDBA0u;
    {
        const bool branch_taken_0x3edba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBA0u;
        // 0x3edba4: 0x7bb005d0  lq          $s0, 0x5D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edba0) {
            ctx->pc = 0x3EE140u;
            goto label_3ee140;
        }
    }
    ctx->pc = 0x3EDBA8u;
label_3edba8:
    // 0x3edba8: 0xc0ea146  jal         func_3A8518
label_3edbac:
    if (ctx->pc == 0x3EDBACu) {
        ctx->pc = 0x3EDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBA8u;
        // 0x3edbac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDBB0u;
        goto label_3edbb0;
    }
    ctx->pc = 0x3EDBA8u;
    SET_GPR_U32(ctx, 31, 0x3EDBB0u);
    ctx->pc = 0x3EDBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDBA8u;
    // 0x3edbac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EDBA8u, 0x3EDBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDBB0u;
label_3edbb0:
    // 0x3edbb0: 0x10000162  b           . + 4 + (0x162 << 2)
label_3edbb4:
    if (ctx->pc == 0x3EDBB4u) {
        ctx->pc = 0x3EDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBB0u;
        // 0x3edbb4: 0xafc20008  sw          $v0, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDBB8u;
        goto label_3edbb8;
    }
    ctx->pc = 0x3EDBB0u;
    {
        const bool branch_taken_0x3edbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBB0u;
        // 0x3edbb4: 0xafc20008  sw          $v0, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edbb0) {
            ctx->pc = 0x3EE13Cu;
            goto label_3ee13c;
        }
    }
    ctx->pc = 0x3EDBB8u;
label_3edbb8:
    // 0x3edbb8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3edbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3edbbc:
    // 0x3edbbc: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3edbbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3edbc0:
    // 0x3edbc0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3edbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3edbc4:
    // 0x3edbc4: 0x60f809  jalr        $v1
label_3edbc8:
    if (ctx->pc == 0x3EDBC8u) {
        ctx->pc = 0x3EDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBC4u;
        // 0x3edbc8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDBCCu;
        goto label_3edbcc;
    }
    ctx->pc = 0x3EDBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EDBCCu);
        ctx->pc = 0x3EDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBC4u;
        // 0x3edbc8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDBC4u, 0x3EDBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EDBCCu;
label_3edbcc:
    // 0x3edbcc: 0x1000015c  b           . + 4 + (0x15C << 2)
label_3edbd0:
    if (ctx->pc == 0x3EDBD0u) {
        ctx->pc = 0x3EDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBCCu;
        // 0x3edbd0: 0x7bb005d0  lq          $s0, 0x5D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDBD4u;
        goto label_3edbd4;
    }
    ctx->pc = 0x3EDBCCu;
    {
        const bool branch_taken_0x3edbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBCCu;
        // 0x3edbd0: 0x7bb005d0  lq          $s0, 0x5D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edbcc) {
            ctx->pc = 0x3EE140u;
            goto label_3ee140;
        }
    }
    ctx->pc = 0x3EDBD4u;
label_3edbd4:
    // 0x3edbd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3edbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3edbd8:
    // 0x3edbd8: 0xc0ea12a  jal         func_3A84A8
label_3edbdc:
    if (ctx->pc == 0x3EDBDCu) {
        ctx->pc = 0x3EDBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBD8u;
        // 0x3edbdc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDBE0u;
        goto label_3edbe0;
    }
    ctx->pc = 0x3EDBD8u;
    SET_GPR_U32(ctx, 31, 0x3EDBE0u);
    ctx->pc = 0x3EDBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDBD8u;
    // 0x3edbdc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EDBD8u, 0x3EDBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDBE0u;
label_3edbe0:
    // 0x3edbe0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3edbe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3edbe4:
    // 0x3edbe4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3edbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3edbe8:
    // 0x3edbe8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3edbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3edbec:
    // 0x3edbec: 0xc0ea12a  jal         func_3A84A8
label_3edbf0:
    if (ctx->pc == 0x3EDBF0u) {
        ctx->pc = 0x3EDBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBECu;
        // 0x3edbf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDBF4u;
        goto label_3edbf4;
    }
    ctx->pc = 0x3EDBECu;
    SET_GPR_U32(ctx, 31, 0x3EDBF4u);
    ctx->pc = 0x3EDBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDBECu;
    // 0x3edbf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EDBECu, 0x3EDBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDBF4u;
label_3edbf4:
    // 0x3edbf4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3edbf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3edbf8:
    // 0x3edbf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3edbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3edbfc:
    // 0x3edbfc: 0xc0ea146  jal         func_3A8518
label_3edc00:
    if (ctx->pc == 0x3EDC00u) {
        ctx->pc = 0x3EDC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBFCu;
        // 0x3edc00: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDC04u;
        goto label_3edc04;
    }
    ctx->pc = 0x3EDBFCu;
    SET_GPR_U32(ctx, 31, 0x3EDC04u);
    ctx->pc = 0x3EDC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDBFCu;
    // 0x3edc00: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EDBFCu, 0x3EDC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC04u;
label_3edc04:
    // 0x3edc04: 0xc0ea146  jal         func_3A8518
label_3edc08:
    if (ctx->pc == 0x3EDC08u) {
        ctx->pc = 0x3EDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC04u;
        // 0x3edc08: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDC0Cu;
        goto label_3edc0c;
    }
    ctx->pc = 0x3EDC04u;
    SET_GPR_U32(ctx, 31, 0x3EDC0Cu);
    ctx->pc = 0x3EDC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC04u;
    // 0x3edc08: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EDC04u, 0x3EDC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC0Cu;
label_3edc0c:
    // 0x3edc0c: 0xc0ea14c  jal         func_3A8530
label_3edc10:
    if (ctx->pc == 0x3EDC10u) {
        ctx->pc = 0x3EDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC0Cu;
        // 0x3edc10: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDC14u;
        goto label_3edc14;
    }
    ctx->pc = 0x3EDC0Cu;
    SET_GPR_U32(ctx, 31, 0x3EDC14u);
    ctx->pc = 0x3EDC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC0Cu;
    // 0x3edc10: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EDC0Cu, 0x3EDC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC14u;
label_3edc14:
    // 0x3edc14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3edc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3edc18:
    // 0x3edc18: 0xc0ea14c  jal         func_3A8530
label_3edc1c:
    if (ctx->pc == 0x3EDC1Cu) {
        ctx->pc = 0x3EDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC18u;
        // 0x3edc1c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDC20u;
        goto label_3edc20;
    }
    ctx->pc = 0x3EDC18u;
    SET_GPR_U32(ctx, 31, 0x3EDC20u);
    ctx->pc = 0x3EDC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC18u;
    // 0x3edc1c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EDC18u, 0x3EDC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC20u;
label_3edc20:
    // 0x3edc20: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3edc20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3edc24:
    // 0x3edc24: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3edc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3edc28:
    // 0x3edc28: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3edc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3edc2c:
    // 0x3edc2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3edc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3edc30:
    // 0x3edc30: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3edc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3edc34:
    // 0x3edc34: 0xc136b24  jal         func_4DAC90
label_3edc38:
    if (ctx->pc == 0x3EDC38u) {
        ctx->pc = 0x3EDC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC34u;
        // 0x3edc38: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDC3Cu;
        goto label_3edc3c;
    }
    ctx->pc = 0x3EDC34u;
    SET_GPR_U32(ctx, 31, 0x3EDC3Cu);
    ctx->pc = 0x3EDC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC34u;
    // 0x3edc38: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3EDC34u, 0x3EDC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC3Cu;
label_3edc3c:
    // 0x3edc3c: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x3edc3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_3edc40:
    // 0x3edc40: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x3edc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3edc44:
    // 0x3edc44: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3edc44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3edc48:
    // 0x3edc48: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x3edc48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_3edc4c:
    // 0x3edc4c: 0x7ba60090  lq          $a2, 0x90($sp)
    ctx->pc = 0x3edc4cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3edc50:
    // 0x3edc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3edc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3edc54:
    // 0x3edc54: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3edc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3edc58:
    // 0x3edc58: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x3edc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
label_3edc5c:
    // 0x3edc5c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3edc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3edc60:
    // 0x3edc60: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x3edc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
label_3edc64:
    // 0x3edc64: 0x24e85c68  addiu       $t0, $a3, 0x5C68
    ctx->pc = 0x3edc64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 23656));
label_3edc68:
    // 0x3edc68: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x3edc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3edc6c:
    // 0x3edc6c: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x3edc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3edc70:
    // 0x3edc70: 0x6903000f  ldl         $v1, 0xF($t0)
    ctx->pc = 0x3edc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3edc74:
    // 0x3edc74: 0x6d030008  ldr         $v1, 0x8($t0)
    ctx->pc = 0x3edc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3edc78:
    // 0x3edc78: 0xb3a20087  sdl         $v0, 0x87($sp)
    ctx->pc = 0x3edc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3edc7c:
    // 0x3edc7c: 0xb7a20080  sdr         $v0, 0x80($sp)
    ctx->pc = 0x3edc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3edc80:
    // 0x3edc80: 0xb3a3008f  sdl         $v1, 0x8F($sp)
    ctx->pc = 0x3edc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3edc84:
    // 0x3edc84: 0xb7a30088  sdr         $v1, 0x88($sp)
    ctx->pc = 0x3edc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3edc88:
    // 0x3edc88: 0xc0e90ca  jal         func_3A4328
label_3edc8c:
    if (ctx->pc == 0x3EDC8Cu) {
        ctx->pc = 0x3EDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC88u;
        // 0x3edc8c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDC90u;
        goto label_3edc90;
    }
    ctx->pc = 0x3EDC88u;
    SET_GPR_U32(ctx, 31, 0x3EDC90u);
    ctx->pc = 0x3EDC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC88u;
    // 0x3edc8c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3EDC88u, 0x3EDC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC90u;
label_3edc90:
    // 0x3edc90: 0x3c04f4ba  lui         $a0, 0xF4BA
    ctx->pc = 0x3edc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62650 << 16));
label_3edc94:
    // 0x3edc94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3edc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3edc98:
    // 0x3edc98: 0xc045c8e  jal         func_117238
label_3edc9c:
    if (ctx->pc == 0x3EDC9Cu) {
        ctx->pc = 0x3EDC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC98u;
        // 0x3edc9c: 0x3484d950  ori         $a0, $a0, 0xD950 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55632);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDCA0u;
        goto label_3edca0;
    }
    ctx->pc = 0x3EDC98u;
    SET_GPR_U32(ctx, 31, 0x3EDCA0u);
    ctx->pc = 0x3EDC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC98u;
    // 0x3edc9c: 0x3484d950  ori         $a0, $a0, 0xD950 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55632);
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3EDC98u, 0x3EDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDCA0u;
label_3edca0:
    // 0x3edca0: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3edca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3edca4:
    // 0x3edca4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3edca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3edca8:
    // 0x3edca8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3edca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3edcac:
    // 0x3edcac: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_3edcb0:
    if (ctx->pc == 0x3EDCB0u) {
        ctx->pc = 0x3EDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCACu;
        // 0x3edcb0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDCB4u;
        goto label_3edcb4;
    }
    ctx->pc = 0x3EDCACu;
    {
        const bool branch_taken_0x3edcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCACu;
        // 0x3edcb0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edcac) {
            ctx->pc = 0x3EDDF8u;
            goto label_3eddf8;
        }
    }
    ctx->pc = 0x3EDCB4u;
label_3edcb4:
    // 0x3edcb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3edcb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3edcb8:
    // 0x3edcb8: 0x10000046  b           . + 4 + (0x46 << 2)
label_3edcbc:
    if (ctx->pc == 0x3EDCBCu) {
        ctx->pc = 0x3EDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCB8u;
        // 0x3edcbc: 0xafc20004  sw          $v0, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDCC0u;
        goto label_3edcc0;
    }
    ctx->pc = 0x3EDCB8u;
    {
        const bool branch_taken_0x3edcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCB8u;
        // 0x3edcbc: 0xafc20004  sw          $v0, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edcb8) {
            ctx->pc = 0x3EDDD4u;
            goto label_3eddd4;
        }
    }
    ctx->pc = 0x3EDCC0u;
label_3edcc0:
    // 0x3edcc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3edcc4:
    if (ctx->pc == 0x3EDCC4u) {
        ctx->pc = 0x3EDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCC0u;
        // 0x3edcc4: 0x241400ff  addiu       $s4, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDCC8u;
        goto label_3edcc8;
    }
    ctx->pc = 0x3EDCC0u;
    {
        const bool branch_taken_0x3edcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCC0u;
        // 0x3edcc4: 0x241400ff  addiu       $s4, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edcc0) {
            ctx->pc = 0x3EDCD8u;
            goto label_3edcd8;
        }
    }
    ctx->pc = 0x3EDCC8u;
label_3edcc8:
    // 0x3edcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3edcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3edccc:
    // 0x3edccc: 0xc0cd4ee  jal         func_3353B8
label_3edcd0:
    if (ctx->pc == 0x3EDCD0u) {
        ctx->pc = 0x3EDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCCCu;
        // 0x3edcd0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDCD4u;
        goto label_3edcd4;
    }
    ctx->pc = 0x3EDCCCu;
    SET_GPR_U32(ctx, 31, 0x3EDCD4u);
    ctx->pc = 0x3EDCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDCCCu;
    // 0x3edcd0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EDCCCu, 0x3EDCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDCD4u;
label_3edcd4:
    // 0x3edcd4: 0x24540080  addiu       $s4, $v0, 0x80
    ctx->pc = 0x3edcd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_3edcd8:
    // 0x3edcd8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3edcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3edcdc:
    // 0x3edcdc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3edcdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3edce0:
    // 0x3edce0: 0x24631720  addiu       $v1, $v1, 0x1720
    ctx->pc = 0x3edce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
label_3edce4:
    // 0x3edce4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3edce4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3edce8:
    // 0x3edce8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3edce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3edcec:
    // 0x3edcec: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x3edcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
label_3edcf0:
    // 0x3edcf0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3edcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3edcf4:
    // 0x3edcf4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3edcf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3edcf8:
    // 0x3edcf8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3edcf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3edcfc:
    // 0x3edcfc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3edcfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3edd00:
    // 0x3edd00: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3edd00u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3edd04:
    // 0x3edd04: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3edd04u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3edd08:
    // 0x3edd08: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3edd08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3edd0c:
    // 0x3edd0c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3edd0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3edd10:
    // 0x3edd10: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3edd10u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3edd14:
    // 0x3edd14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3edd14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3edd18:
    // 0x3edd18: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3edd18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3edd1c:
    // 0x3edd1c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3edd1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3edd20:
    // 0x3edd20: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3edd20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3edd24:
    // 0x3edd24: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3edd24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3edd28:
    // 0x3edd28: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3edd28u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3edd2c:
    // 0x3edd2c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3edd2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3edd30:
    // 0x3edd30: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3edd30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3edd34:
    // 0x3edd34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3edd34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3edd38:
    // 0x3edd38: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3edd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3edd3c:
    // 0x3edd3c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3edd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3edd40:
    // 0x3edd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3edd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3edd44:
    // 0x3edd44: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x3edd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_3edd48:
    // 0x3edd48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3edd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3edd4c:
    // 0x3edd4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3edd4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3edd50:
    // 0x3edd50: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3edd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3edd54:
    // 0x3edd54: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3edd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_3edd58:
    // 0x3edd58: 0xc0cd518  jal         func_335460
label_3edd5c:
    if (ctx->pc == 0x3EDD5Cu) {
        ctx->pc = 0x3EDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD58u;
        // 0x3edd5c: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDD60u;
        goto label_3edd60;
    }
    ctx->pc = 0x3EDD58u;
    SET_GPR_U32(ctx, 31, 0x3EDD60u);
    ctx->pc = 0x3EDD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDD58u;
    // 0x3edd5c: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EDD58u, 0x3EDD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDD60u;
label_3edd60:
    // 0x3edd60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3edd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3edd64:
    // 0x3edd64: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3edd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3edd68:
    // 0x3edd68: 0xc136b24  jal         func_4DAC90
label_3edd6c:
    if (ctx->pc == 0x3EDD6Cu) {
        ctx->pc = 0x3EDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD68u;
        // 0x3edd6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDD70u;
        goto label_3edd70;
    }
    ctx->pc = 0x3EDD68u;
    SET_GPR_U32(ctx, 31, 0x3EDD70u);
    ctx->pc = 0x3EDD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDD68u;
    // 0x3edd6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3EDD68u, 0x3EDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDD70u;
label_3edd70:
    // 0x3edd70: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x3edd70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3edd74:
    // 0x3edd74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3edd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3edd78:
    // 0x3edd78: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3edd78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3edd7c:
    // 0x3edd7c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3edd7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3edd80:
    // 0x3edd80: 0x27b20120  addiu       $s2, $sp, 0x120
    ctx->pc = 0x3edd80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3edd84:
    // 0x3edd84: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3edd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3edd88:
    // 0x3edd88: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x3edd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3edd8c:
    // 0x3edd8c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3edd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3edd90:
    // 0x3edd90: 0x26315c78  addiu       $s1, $s1, 0x5C78
    ctx->pc = 0x3edd90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23672));
label_3edd94:
    // 0x3edd94: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3edd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3edd98:
    // 0x3edd98: 0xc0cd4ee  jal         func_3353B8
label_3edd9c:
    if (ctx->pc == 0x3EDD9Cu) {
        ctx->pc = 0x3EDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD98u;
        // 0x3edd9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDDA0u;
        goto label_3edda0;
    }
    ctx->pc = 0x3EDD98u;
    SET_GPR_U32(ctx, 31, 0x3EDDA0u);
    ctx->pc = 0x3EDD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDD98u;
    // 0x3edd9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EDD98u, 0x3EDDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDDA0u;
label_3edda0:
    // 0x3edda0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3edda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3edda4:
    // 0x3edda4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3edda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3edda8:
    // 0x3edda8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3edda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3eddac:
    // 0x3eddac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3eddacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3eddb0:
    // 0x3eddb0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x3eddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_3eddb4:
    // 0x3eddb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3eddb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eddb8:
    // 0x3eddb8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x3eddb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3eddbc:
    // 0x3eddbc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x3eddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_3eddc0:
    // 0x3eddc0: 0xc0e9fa6  jal         func_3A7E98
label_3eddc4:
    if (ctx->pc == 0x3EDDC4u) {
        ctx->pc = 0x3EDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDC0u;
        // 0x3eddc4: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDDC8u;
        goto label_3eddc8;
    }
    ctx->pc = 0x3EDDC0u;
    SET_GPR_U32(ctx, 31, 0x3EDDC8u);
    ctx->pc = 0x3EDDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDDC0u;
    // 0x3eddc4: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3EDDC0u, 0x3EDDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDDC8u;
label_3eddc8:
    // 0x3eddc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eddc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eddcc:
    // 0x3eddcc: 0xc0f15bc  jal         func_3C56F0
label_3eddd0:
    if (ctx->pc == 0x3EDDD0u) {
        ctx->pc = 0x3EDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDCCu;
        // 0x3eddd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDDD4u;
        goto label_3eddd4;
    }
    ctx->pc = 0x3EDDCCu;
    SET_GPR_U32(ctx, 31, 0x3EDDD4u);
    ctx->pc = 0x3EDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDDCCu;
    // 0x3eddd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3EDDCCu, 0x3EDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDDD4u;
label_3eddd4:
    // 0x3eddd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3eddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3eddd8:
    // 0x3eddd8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3eddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3edddc:
    // 0x3edddc: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3edddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3edde0:
    // 0x3edde0: 0xc0cd4ee  jal         func_3353B8
label_3edde4:
    if (ctx->pc == 0x3EDDE4u) {
        ctx->pc = 0x3EDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDE0u;
        // 0x3edde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDDE8u;
        goto label_3edde8;
    }
    ctx->pc = 0x3EDDE0u;
    SET_GPR_U32(ctx, 31, 0x3EDDE8u);
    ctx->pc = 0x3EDDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDDE0u;
    // 0x3edde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EDDE0u, 0x3EDDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDDE8u;
label_3edde8:
    // 0x3edde8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3edde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eddec:
    // 0x3eddec: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3eddecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3eddf0:
    // 0x3eddf0: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_3eddf4:
    if (ctx->pc == 0x3EDDF4u) {
        ctx->pc = 0x3EDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDF0u;
        // 0x3eddf4: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDDF8u;
        goto label_3eddf8;
    }
    ctx->pc = 0x3EDDF0u;
    {
        const bool branch_taken_0x3eddf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDF0u;
        // 0x3eddf4: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eddf0) {
            ctx->pc = 0x3EDCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3edcc0;
        }
    }
    ctx->pc = 0x3EDDF8u;
label_3eddf8:
    // 0x3eddf8: 0xc7cc0004  lwc1        $f12, 0x4($fp)
    ctx->pc = 0x3eddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3eddfc:
    // 0x3eddfc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3eddfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3ede00:
    // 0x3ede00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ede00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ede04:
    // 0x3ede04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ede04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ede08:
    // 0x3ede08: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x3ede08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ede0c:
    // 0x3ede0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ede0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ede10:
    // 0x3ede10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ede10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ede14:
    // 0x3ede14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3ede14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ede18:
    // 0x3ede18: 0x0  nop
    ctx->pc = 0x3ede18u;
    // NOP
label_3ede1c:
    // 0x3ede1c: 0x0  nop
    ctx->pc = 0x3ede1cu;
    // NOP
label_3ede20:
    // 0x3ede20: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x3ede20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_3ede24:
    // 0x3ede24: 0xc0e9312  jal         func_3A4C48
label_3ede28:
    if (ctx->pc == 0x3EDE28u) {
        ctx->pc = 0x3EDE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE24u;
        // 0x3ede28: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDE2Cu;
        goto label_3ede2c;
    }
    ctx->pc = 0x3EDE24u;
    SET_GPR_U32(ctx, 31, 0x3EDE2Cu);
    ctx->pc = 0x3EDE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDE24u;
    // 0x3ede28: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4C48u, 0x3EDE24u, 0x3EDE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE2Cu;
label_3ede2c:
    // 0x3ede2c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3ede2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3ede30:
    // 0x3ede30: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3ede30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3ede34:
    // 0x3ede34: 0x146200c2  bne         $v1, $v0, . + 4 + (0xC2 << 2)
label_3ede38:
    if (ctx->pc == 0x3EDE38u) {
        ctx->pc = 0x3EDE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE34u;
        // 0x3ede38: 0x7bb005d0  lq          $s0, 0x5D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDE3Cu;
        goto label_3ede3c;
    }
    ctx->pc = 0x3EDE34u;
    {
        const bool branch_taken_0x3ede34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EDE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE34u;
        // 0x3ede38: 0x7bb005d0  lq          $s0, 0x5D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede34) {
            ctx->pc = 0x3EE140u;
            goto label_3ee140;
        }
    }
    ctx->pc = 0x3EDE3Cu;
label_3ede3c:
    // 0x3ede3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ede3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ede40:
    // 0x3ede40: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x3ede40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3ede44:
    // 0x3ede44: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3ede44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3ede48:
    // 0x3ede48: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x3ede48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ede4c:
    // 0x3ede4c: 0xafa30534  sw          $v1, 0x534($sp)
    ctx->pc = 0x3ede4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1332), GPR_U32(ctx, 3));
label_3ede50:
    // 0x3ede50: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x3ede50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3ede54:
    // 0x3ede54: 0xafa60530  sw          $a2, 0x530($sp)
    ctx->pc = 0x3ede54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1328), GPR_U32(ctx, 6));
label_3ede58:
    // 0x3ede58: 0x10000047  b           . + 4 + (0x47 << 2)
label_3ede5c:
    if (ctx->pc == 0x3EDE5Cu) {
        ctx->pc = 0x3EDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE58u;
        // 0x3ede5c: 0xafa80538  sw          $t0, 0x538($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDE60u;
        goto label_3ede60;
    }
    ctx->pc = 0x3EDE58u;
    {
        const bool branch_taken_0x3ede58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE58u;
        // 0x3ede5c: 0xafa80538  sw          $t0, 0x538($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede58) {
            ctx->pc = 0x3EDF78u;
            goto label_3edf78;
        }
    }
    ctx->pc = 0x3EDE60u;
label_3ede60:
    // 0x3ede60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ede64:
    if (ctx->pc == 0x3EDE64u) {
        ctx->pc = 0x3EDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE60u;
        // 0x3ede64: 0x241400ff  addiu       $s4, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDE68u;
        goto label_3ede68;
    }
    ctx->pc = 0x3EDE60u;
    {
        const bool branch_taken_0x3ede60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE60u;
        // 0x3ede64: 0x241400ff  addiu       $s4, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede60) {
            ctx->pc = 0x3EDE78u;
            goto label_3ede78;
        }
    }
    ctx->pc = 0x3EDE68u;
label_3ede68:
    // 0x3ede68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ede68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ede6c:
    // 0x3ede6c: 0xc0cd4ee  jal         func_3353B8
label_3ede70:
    if (ctx->pc == 0x3EDE70u) {
        ctx->pc = 0x3EDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE6Cu;
        // 0x3ede70: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDE74u;
        goto label_3ede74;
    }
    ctx->pc = 0x3EDE6Cu;
    SET_GPR_U32(ctx, 31, 0x3EDE74u);
    ctx->pc = 0x3EDE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDE6Cu;
    // 0x3ede70: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EDE6Cu, 0x3EDE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE74u;
label_3ede74:
    // 0x3ede74: 0x24540080  addiu       $s4, $v0, 0x80
    ctx->pc = 0x3ede74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_3ede78:
    // 0x3ede78: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ede78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ede7c:
    // 0x3ede7c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3ede7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ede80:
    // 0x3ede80: 0x24631720  addiu       $v1, $v1, 0x1720
    ctx->pc = 0x3ede80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
label_3ede84:
    // 0x3ede84: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3ede84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3ede88:
    // 0x3ede88: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3ede88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3ede8c:
    // 0x3ede8c: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x3ede8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
label_3ede90:
    // 0x3ede90: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3ede90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3ede94:
    // 0x3ede94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ede94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ede98:
    // 0x3ede98: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3ede98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3ede9c:
    // 0x3ede9c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3ede9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3edea0:
    // 0x3edea0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3edea0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3edea4:
    // 0x3edea4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3edea4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3edea8:
    // 0x3edea8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3edea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3edeac:
    // 0x3edeac: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3edeacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3edeb0:
    // 0x3edeb0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3edeb0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3edeb4:
    // 0x3edeb4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3edeb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3edeb8:
    // 0x3edeb8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3edeb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3edebc:
    // 0x3edebc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3edebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3edec0:
    // 0x3edec0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3edec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3edec4:
    // 0x3edec4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3edec4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3edec8:
    // 0x3edec8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3edec8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3edecc:
    // 0x3edecc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3edeccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eded0:
    // 0x3eded0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3eded0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eded4:
    // 0x3eded4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3eded4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3eded8:
    // 0x3eded8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3eded8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3ededc:
    // 0x3ededc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ededcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3edee0:
    // 0x3edee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3edee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3edee4:
    // 0x3edee4: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x3edee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_3edee8:
    // 0x3edee8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3edee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3edeec:
    // 0x3edeec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3edeecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3edef0:
    // 0x3edef0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3edef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3edef4:
    // 0x3edef4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3edef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_3edef8:
    // 0x3edef8: 0xc0cd518  jal         func_335460
label_3edefc:
    if (ctx->pc == 0x3EDEFCu) {
        ctx->pc = 0x3EDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDEF8u;
        // 0x3edefc: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDF00u;
        goto label_3edf00;
    }
    ctx->pc = 0x3EDEF8u;
    SET_GPR_U32(ctx, 31, 0x3EDF00u);
    ctx->pc = 0x3EDEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDEF8u;
    // 0x3edefc: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EDEF8u, 0x3EDF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDF00u;
label_3edf00:
    // 0x3edf00: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3edf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3edf04:
    // 0x3edf04: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3edf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3edf08:
    // 0x3edf08: 0xc136b24  jal         func_4DAC90
label_3edf0c:
    if (ctx->pc == 0x3EDF0Cu) {
        ctx->pc = 0x3EDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF08u;
        // 0x3edf0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDF10u;
        goto label_3edf10;
    }
    ctx->pc = 0x3EDF08u;
    SET_GPR_U32(ctx, 31, 0x3EDF10u);
    ctx->pc = 0x3EDF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDF08u;
    // 0x3edf0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3EDF08u, 0x3EDF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDF10u;
label_3edf10:
    // 0x3edf10: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3edf10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3edf14:
    // 0x3edf14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3edf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3edf18:
    // 0x3edf18: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3edf18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3edf1c:
    // 0x3edf1c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3edf1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3edf20:
    // 0x3edf20: 0x27b004a0  addiu       $s0, $sp, 0x4A0
    ctx->pc = 0x3edf20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3edf24:
    // 0x3edf24: 0x27b204b0  addiu       $s2, $sp, 0x4B0
    ctx->pc = 0x3edf24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3edf28:
    // 0x3edf28: 0x7fa304a0  sq          $v1, 0x4A0($sp)
    ctx->pc = 0x3edf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
label_3edf2c:
    // 0x3edf2c: 0x26315c78  addiu       $s1, $s1, 0x5C78
    ctx->pc = 0x3edf2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23672));
label_3edf30:
    // 0x3edf30: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x3edf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
label_3edf34:
    // 0x3edf34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3edf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3edf38:
    // 0x3edf38: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3edf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3edf3c:
    // 0x3edf3c: 0xc0cd4ee  jal         func_3353B8
label_3edf40:
    if (ctx->pc == 0x3EDF40u) {
        ctx->pc = 0x3EDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF3Cu;
        // 0x3edf40: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDF44u;
        goto label_3edf44;
    }
    ctx->pc = 0x3EDF3Cu;
    SET_GPR_U32(ctx, 31, 0x3EDF44u);
    ctx->pc = 0x3EDF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDF3Cu;
    // 0x3edf40: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EDF3Cu, 0x3EDF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDF44u;
label_3edf44:
    // 0x3edf44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3edf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3edf48:
    // 0x3edf48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3edf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3edf4c:
    // 0x3edf4c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3edf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3edf50:
    // 0x3edf50: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3edf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3edf54:
    // 0x3edf54: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x3edf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_3edf58:
    // 0x3edf58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3edf58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3edf5c:
    // 0x3edf5c: 0x27a704c0  addiu       $a3, $sp, 0x4C0
    ctx->pc = 0x3edf5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3edf60:
    // 0x3edf60: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x3edf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_3edf64:
    // 0x3edf64: 0xc0e9fa6  jal         func_3A7E98
label_3edf68:
    if (ctx->pc == 0x3EDF68u) {
        ctx->pc = 0x3EDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF64u;
        // 0x3edf68: 0xafa204c0  sw          $v0, 0x4C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDF6Cu;
        goto label_3edf6c;
    }
    ctx->pc = 0x3EDF64u;
    SET_GPR_U32(ctx, 31, 0x3EDF6Cu);
    ctx->pc = 0x3EDF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDF64u;
    // 0x3edf68: 0xafa204c0  sw          $v0, 0x4C0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3EDF64u, 0x3EDF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDF6Cu;
label_3edf6c:
    // 0x3edf6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3edf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3edf70:
    // 0x3edf70: 0xc0f15bc  jal         func_3C56F0
label_3edf74:
    if (ctx->pc == 0x3EDF74u) {
        ctx->pc = 0x3EDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF70u;
        // 0x3edf74: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDF78u;
        goto label_3edf78;
    }
    ctx->pc = 0x3EDF70u;
    SET_GPR_U32(ctx, 31, 0x3EDF78u);
    ctx->pc = 0x3EDF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDF70u;
    // 0x3edf74: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3EDF70u, 0x3EDF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDF78u;
label_3edf78:
    // 0x3edf78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3edf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3edf7c:
    // 0x3edf7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3edf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3edf80:
    // 0x3edf80: 0x2452b8b8  addiu       $s2, $v0, -0x4748
    ctx->pc = 0x3edf80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3edf84:
    // 0x3edf84: 0xc0cd4ee  jal         func_3353B8
label_3edf88:
    if (ctx->pc == 0x3EDF88u) {
        ctx->pc = 0x3EDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF84u;
        // 0x3edf88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDF8Cu;
        goto label_3edf8c;
    }
    ctx->pc = 0x3EDF84u;
    SET_GPR_U32(ctx, 31, 0x3EDF8Cu);
    ctx->pc = 0x3EDF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDF84u;
    // 0x3edf88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EDF84u, 0x3EDF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDF8Cu;
label_3edf8c:
    // 0x3edf8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3edf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3edf90:
    // 0x3edf90: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3edf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3edf94:
    // 0x3edf94: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_3edf98:
    if (ctx->pc == 0x3EDF98u) {
        ctx->pc = 0x3EDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF94u;
        // 0x3edf98: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDF9Cu;
        goto label_3edf9c;
    }
    ctx->pc = 0x3EDF94u;
    {
        const bool branch_taken_0x3edf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF94u;
        // 0x3edf98: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edf94) {
            ctx->pc = 0x3EDE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ede60;
        }
    }
    ctx->pc = 0x3EDF9Cu;
label_3edf9c:
    // 0x3edf9c: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x3edf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_3edfa0:
    // 0x3edfa0: 0x3421d9f1  ori         $at, $at, 0xD9F1
    ctx->pc = 0x3edfa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55793);
label_3edfa4:
    // 0x3edfa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3edfa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3edfa8:
    // 0x3edfa8: 0x8fa30534  lw          $v1, 0x534($sp)
    ctx->pc = 0x3edfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_3edfac:
    // 0x3edfac: 0x3c01be3b  lui         $at, 0xBE3B
    ctx->pc = 0x3edfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48699 << 16));
label_3edfb0:
    // 0x3edfb0: 0x342167c3  ori         $at, $at, 0x67C3
    ctx->pc = 0x3edfb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26563);
label_3edfb4:
    // 0x3edfb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3edfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edfb8:
    // 0x3edfb8: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x3edfb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3edfbc:
    // 0x3edfbc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3edfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3edfc0:
    // 0x3edfc0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3edfc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3edfc4:
    // 0x3edfc4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3edfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3edfc8:
    // 0x3edfc8: 0x3c01c00f  lui         $at, 0xC00F
    ctx->pc = 0x3edfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49167 << 16));
label_3edfcc:
    // 0x3edfcc: 0x3421381d  ori         $at, $at, 0x381D
    ctx->pc = 0x3edfccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14365);
label_3edfd0:
    // 0x3edfd0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3edfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3edfd4:
    // 0x3edfd4: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3edfd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3edfd8:
    // 0x3edfd8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3edfd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3edfdc:
    // 0x3edfdc: 0x3c01bd93  lui         $at, 0xBD93
    ctx->pc = 0x3edfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48531 << 16));
label_3edfe0:
    // 0x3edfe0: 0x3421a2e0  ori         $at, $at, 0xA2E0
    ctx->pc = 0x3edfe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41696);
label_3edfe4:
    // 0x3edfe4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3edfe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3edfe8:
    // 0x3edfe8: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x3edfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_3edfec:
    // 0x3edfec: 0x342191bc  ori         $at, $at, 0x91BC
    ctx->pc = 0x3edfecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37308);
label_3edff0:
    // 0x3edff0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3edff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3edff4:
    // 0x3edff4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3edff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3edff8:
    // 0x3edff8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3edff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edffc:
    // 0x3edffc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3edffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3ee000:
    // 0x3ee000: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3ee000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3ee004:
    // 0x3ee004: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3ee004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3ee008:
    // 0x3ee008: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x3ee008u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3ee00c:
    // 0x3ee00c: 0xe6e0000c  swc1        $f0, 0xC($s7)
    ctx->pc = 0x3ee00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_3ee010:
    // 0x3ee010: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x3ee010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_3ee014:
    // 0x3ee014: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x3ee014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_3ee018:
    // 0x3ee018: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x3ee018u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ee01c:
    // 0x3ee01c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3ee01cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ee020:
    // 0x3ee020: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3ee020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_3ee024:
    // 0x3ee024: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3ee024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3ee028:
    // 0x3ee028: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ee028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ee02c:
    // 0x3ee02c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3ee02cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ee030:
    // 0x3ee030: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3ee030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ee034:
    // 0x3ee034: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3ee034u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ee038:
    // 0x3ee038: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3ee038u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ee03c:
    // 0x3ee03c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ee03cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ee040:
    // 0x3ee040: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3ee040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ee044:
    // 0x3ee044: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3ee044u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ee048:
    // 0x3ee048: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ee048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ee04c:
    // 0x3ee04c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3ee04cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ee050:
    // 0x3ee050: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3ee050u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ee054:
    // 0x3ee054: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3ee054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ee058:
    // 0x3ee058: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3ee058u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ee05c:
    // 0x3ee05c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3ee05cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ee060:
    // 0x3ee060: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3ee060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ee064:
    // 0x3ee064: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3ee064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ee068:
    // 0x3ee068: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3ee068u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3ee06c:
    // 0x3ee06c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x3ee06cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_3ee070:
    // 0x3ee070: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x3ee070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_3ee074:
    // 0x3ee074: 0x24c45c88  addiu       $a0, $a2, 0x5C88
    ctx->pc = 0x3ee074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 23688));
label_3ee078:
    // 0x3ee078: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ee078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ee07c:
    // 0x3ee07c: 0x8fa60538  lw          $a2, 0x538($sp)
    ctx->pc = 0x3ee07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
label_3ee080:
    // 0x3ee080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ee080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee084:
    // 0x3ee084: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3ee084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3ee088:
    // 0x3ee088: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3ee088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_3ee08c:
    // 0x3ee08c: 0xc0e94fc  jal         func_3A53F0
label_3ee090:
    if (ctx->pc == 0x3EE090u) {
        ctx->pc = 0x3EE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE08Cu;
        // 0x3ee090: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE094u;
        goto label_3ee094;
    }
    ctx->pc = 0x3EE08Cu;
    SET_GPR_U32(ctx, 31, 0x3EE094u);
    ctx->pc = 0x3EE090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE08Cu;
    // 0x3ee090: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3EE08Cu, 0x3EE094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE094u;
label_3ee094:
    // 0x3ee094: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3ee094u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ee098:
    // 0x3ee098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ee098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ee09c:
    // 0x3ee09c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3ee09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3ee0a0:
    // 0x3ee0a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3ee0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ee0a4:
    // 0x3ee0a4: 0xc0ea158  jal         func_3A8560
label_3ee0a8:
    if (ctx->pc == 0x3EE0A8u) {
        ctx->pc = 0x3EE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0A4u;
        // 0x3ee0a8: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE0ACu;
        goto label_3ee0ac;
    }
    ctx->pc = 0x3EE0A4u;
    SET_GPR_U32(ctx, 31, 0x3EE0ACu);
    ctx->pc = 0x3EE0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE0A4u;
    // 0x3ee0a8: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3EE0A4u, 0x3EE0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE0ACu;
label_3ee0ac:
    // 0x3ee0ac: 0x3c014116  lui         $at, 0x4116
    ctx->pc = 0x3ee0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16662 << 16));
label_3ee0b0:
    // 0x3ee0b0: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x3ee0b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_3ee0b4:
    // 0x3ee0b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ee0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ee0b8:
    // 0x3ee0b8: 0x3c01c116  lui         $at, 0xC116
    ctx->pc = 0x3ee0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49430 << 16));
label_3ee0bc:
    // 0x3ee0bc: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x3ee0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_3ee0c0:
    // 0x3ee0c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ee0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ee0c4:
    // 0x3ee0c4: 0xc0cd518  jal         func_335460
label_3ee0c8:
    if (ctx->pc == 0x3EE0C8u) {
        ctx->pc = 0x3EE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0C4u;
        // 0x3ee0c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE0CCu;
        goto label_3ee0cc;
    }
    ctx->pc = 0x3EE0C4u;
    SET_GPR_U32(ctx, 31, 0x3EE0CCu);
    ctx->pc = 0x3EE0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE0C4u;
    // 0x3ee0c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EE0C4u, 0x3EE0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE0CCu;
label_3ee0cc:
    // 0x3ee0cc: 0x8fa40534  lw          $a0, 0x534($sp)
    ctx->pc = 0x3ee0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_3ee0d0:
    // 0x3ee0d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ee0d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3ee0d4:
    // 0x3ee0d4: 0xc136b24  jal         func_4DAC90
label_3ee0d8:
    if (ctx->pc == 0x3EE0D8u) {
        ctx->pc = 0x3EE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0D4u;
        // 0x3ee0d8: 0x8fa50538  lw          $a1, 0x538($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE0DCu;
        goto label_3ee0dc;
    }
    ctx->pc = 0x3EE0D4u;
    SET_GPR_U32(ctx, 31, 0x3EE0DCu);
    ctx->pc = 0x3EE0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE0D4u;
    // 0x3ee0d8: 0x8fa50538  lw          $a1, 0x538($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3EE0D4u, 0x3EE0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE0DCu;
label_3ee0dc:
    // 0x3ee0dc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3ee0dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ee0e0:
    // 0x3ee0e0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3ee0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3ee0e4:
    // 0x3ee0e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3ee0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ee0e8:
    // 0x3ee0e8: 0xc0ea158  jal         func_3A8560
label_3ee0ec:
    if (ctx->pc == 0x3EE0ECu) {
        ctx->pc = 0x3EE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0E8u;
        // 0x3ee0ec: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE0F0u;
        goto label_3ee0f0;
    }
    ctx->pc = 0x3EE0E8u;
    SET_GPR_U32(ctx, 31, 0x3EE0F0u);
    ctx->pc = 0x3EE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE0E8u;
    // 0x3ee0ec: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3EE0E8u, 0x3EE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE0F0u;
label_3ee0f0:
    // 0x3ee0f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ee0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ee0f4:
    // 0x3ee0f4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3ee0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ee0f8:
    // 0x3ee0f8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3ee0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3ee0fc:
    // 0x3ee0fc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ee0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ee100:
    // 0x3ee100: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ee100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ee104:
    // 0x3ee104: 0x60f809  jalr        $v1
label_3ee108:
    if (ctx->pc == 0x3EE108u) {
        ctx->pc = 0x3EE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE104u;
        // 0x3ee108: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE10Cu;
        goto label_3ee10c;
    }
    ctx->pc = 0x3EE104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EE10Cu);
        ctx->pc = 0x3EE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE104u;
        // 0x3ee108: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE104u, 0x3EE10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EE10Cu;
label_3ee10c:
    // 0x3ee10c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3ee10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3ee110:
    // 0x3ee110: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3ee110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3ee114:
    // 0x3ee114: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3ee114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ee118:
    // 0x3ee118: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3ee118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3ee11c:
    // 0x3ee11c: 0xc0e90ca  jal         func_3A4328
label_3ee120:
    if (ctx->pc == 0x3EE120u) {
        ctx->pc = 0x3EE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE11Cu;
        // 0x3ee120: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE124u;
        goto label_3ee124;
    }
    ctx->pc = 0x3EE11Cu;
    SET_GPR_U32(ctx, 31, 0x3EE124u);
    ctx->pc = 0x3EE120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE11Cu;
    // 0x3ee120: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3EE11Cu, 0x3EE124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE124u;
label_3ee124:
    // 0x3ee124: 0x3c04e108  lui         $a0, 0xE108
    ctx->pc = 0x3ee124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57608 << 16));
label_3ee128:
    // 0x3ee128: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3ee128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3ee12c:
    // 0x3ee12c: 0xc045c8e  jal         func_117238
label_3ee130:
    if (ctx->pc == 0x3EE130u) {
        ctx->pc = 0x3EE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE12Cu;
        // 0x3ee130: 0x3484f888  ori         $a0, $a0, 0xF888 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63624);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE134u;
        goto label_3ee134;
    }
    ctx->pc = 0x3EE12Cu;
    SET_GPR_U32(ctx, 31, 0x3EE134u);
    ctx->pc = 0x3EE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE12Cu;
    // 0x3ee130: 0x3484f888  ori         $a0, $a0, 0xF888 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63624);
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3EE12Cu, 0x3EE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE134u;
label_3ee134:
    // 0x3ee134: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3ee134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3ee138:
    // 0x3ee138: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x3ee138u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_3ee13c:
    // 0x3ee13c: 0x7bb005d0  lq          $s0, 0x5D0($sp)
    ctx->pc = 0x3ee13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
label_3ee140:
    // 0x3ee140: 0x7bb105c0  lq          $s1, 0x5C0($sp)
    ctx->pc = 0x3ee140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
label_3ee144:
    // 0x3ee144: 0x7bb205b0  lq          $s2, 0x5B0($sp)
    ctx->pc = 0x3ee144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
label_3ee148:
    // 0x3ee148: 0x7bb305a0  lq          $s3, 0x5A0($sp)
    ctx->pc = 0x3ee148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
label_3ee14c:
    // 0x3ee14c: 0x7bb40590  lq          $s4, 0x590($sp)
    ctx->pc = 0x3ee14cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
label_3ee150:
    // 0x3ee150: 0x7bb50580  lq          $s5, 0x580($sp)
    ctx->pc = 0x3ee150u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_3ee154:
    // 0x3ee154: 0x7bb60570  lq          $s6, 0x570($sp)
    ctx->pc = 0x3ee154u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_3ee158:
    // 0x3ee158: 0x7bb70560  lq          $s7, 0x560($sp)
    ctx->pc = 0x3ee158u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_3ee15c:
    // 0x3ee15c: 0x7bbe0550  lq          $fp, 0x550($sp)
    ctx->pc = 0x3ee15cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3ee160:
    // 0x3ee160: 0xdfbf0540  ld          $ra, 0x540($sp)
    ctx->pc = 0x3ee160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1344)));
label_3ee164:
    // 0x3ee164: 0x3e00008  jr          $ra
label_3ee168:
    if (ctx->pc == 0x3EE168u) {
        ctx->pc = 0x3EE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE164u;
        // 0x3ee168: 0x27bd05e0  addiu       $sp, $sp, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE16Cu;
        goto label_3ee16c;
    }
    ctx->pc = 0x3EE164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE164u;
        // 0x3ee168: 0x27bd05e0  addiu       $sp, $sp, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE16Cu;
label_3ee16c:
    // 0x3ee16c: 0x0  nop
    ctx->pc = 0x3ee16cu;
    // NOP
    ctx->pc = 0x3ee170u;
}
