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

// Function: sub_002AFA48
// Address: 0x2afa48 - 0x2b04f0
void sub_002AFA48_0x2afa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFA48_0x2afa48");
#endif

    switch (ctx->pc) {
        case 0x2afa48u: goto label_2afa48;
        case 0x2afa4cu: goto label_2afa4c;
        case 0x2afa50u: goto label_2afa50;
        case 0x2afa54u: goto label_2afa54;
        case 0x2afa58u: goto label_2afa58;
        case 0x2afa5cu: goto label_2afa5c;
        case 0x2afa60u: goto label_2afa60;
        case 0x2afa64u: goto label_2afa64;
        case 0x2afa68u: goto label_2afa68;
        case 0x2afa6cu: goto label_2afa6c;
        case 0x2afa70u: goto label_2afa70;
        case 0x2afa74u: goto label_2afa74;
        case 0x2afa78u: goto label_2afa78;
        case 0x2afa7cu: goto label_2afa7c;
        case 0x2afa80u: goto label_2afa80;
        case 0x2afa84u: goto label_2afa84;
        case 0x2afa88u: goto label_2afa88;
        case 0x2afa8cu: goto label_2afa8c;
        case 0x2afa90u: goto label_2afa90;
        case 0x2afa94u: goto label_2afa94;
        case 0x2afa98u: goto label_2afa98;
        case 0x2afa9cu: goto label_2afa9c;
        case 0x2afaa0u: goto label_2afaa0;
        case 0x2afaa4u: goto label_2afaa4;
        case 0x2afaa8u: goto label_2afaa8;
        case 0x2afaacu: goto label_2afaac;
        case 0x2afab0u: goto label_2afab0;
        case 0x2afab4u: goto label_2afab4;
        case 0x2afab8u: goto label_2afab8;
        case 0x2afabcu: goto label_2afabc;
        case 0x2afac0u: goto label_2afac0;
        case 0x2afac4u: goto label_2afac4;
        case 0x2afac8u: goto label_2afac8;
        case 0x2afaccu: goto label_2afacc;
        case 0x2afad0u: goto label_2afad0;
        case 0x2afad4u: goto label_2afad4;
        case 0x2afad8u: goto label_2afad8;
        case 0x2afadcu: goto label_2afadc;
        case 0x2afae0u: goto label_2afae0;
        case 0x2afae4u: goto label_2afae4;
        case 0x2afae8u: goto label_2afae8;
        case 0x2afaecu: goto label_2afaec;
        case 0x2afaf0u: goto label_2afaf0;
        case 0x2afaf4u: goto label_2afaf4;
        case 0x2afaf8u: goto label_2afaf8;
        case 0x2afafcu: goto label_2afafc;
        case 0x2afb00u: goto label_2afb00;
        case 0x2afb04u: goto label_2afb04;
        case 0x2afb08u: goto label_2afb08;
        case 0x2afb0cu: goto label_2afb0c;
        case 0x2afb10u: goto label_2afb10;
        case 0x2afb14u: goto label_2afb14;
        case 0x2afb18u: goto label_2afb18;
        case 0x2afb1cu: goto label_2afb1c;
        case 0x2afb20u: goto label_2afb20;
        case 0x2afb24u: goto label_2afb24;
        case 0x2afb28u: goto label_2afb28;
        case 0x2afb2cu: goto label_2afb2c;
        case 0x2afb30u: goto label_2afb30;
        case 0x2afb34u: goto label_2afb34;
        case 0x2afb38u: goto label_2afb38;
        case 0x2afb3cu: goto label_2afb3c;
        case 0x2afb40u: goto label_2afb40;
        case 0x2afb44u: goto label_2afb44;
        case 0x2afb48u: goto label_2afb48;
        case 0x2afb4cu: goto label_2afb4c;
        case 0x2afb50u: goto label_2afb50;
        case 0x2afb54u: goto label_2afb54;
        case 0x2afb58u: goto label_2afb58;
        case 0x2afb5cu: goto label_2afb5c;
        case 0x2afb60u: goto label_2afb60;
        case 0x2afb64u: goto label_2afb64;
        case 0x2afb68u: goto label_2afb68;
        case 0x2afb6cu: goto label_2afb6c;
        case 0x2afb70u: goto label_2afb70;
        case 0x2afb74u: goto label_2afb74;
        case 0x2afb78u: goto label_2afb78;
        case 0x2afb7cu: goto label_2afb7c;
        case 0x2afb80u: goto label_2afb80;
        case 0x2afb84u: goto label_2afb84;
        case 0x2afb88u: goto label_2afb88;
        case 0x2afb8cu: goto label_2afb8c;
        case 0x2afb90u: goto label_2afb90;
        case 0x2afb94u: goto label_2afb94;
        case 0x2afb98u: goto label_2afb98;
        case 0x2afb9cu: goto label_2afb9c;
        case 0x2afba0u: goto label_2afba0;
        case 0x2afba4u: goto label_2afba4;
        case 0x2afba8u: goto label_2afba8;
        case 0x2afbacu: goto label_2afbac;
        case 0x2afbb0u: goto label_2afbb0;
        case 0x2afbb4u: goto label_2afbb4;
        case 0x2afbb8u: goto label_2afbb8;
        case 0x2afbbcu: goto label_2afbbc;
        case 0x2afbc0u: goto label_2afbc0;
        case 0x2afbc4u: goto label_2afbc4;
        case 0x2afbc8u: goto label_2afbc8;
        case 0x2afbccu: goto label_2afbcc;
        case 0x2afbd0u: goto label_2afbd0;
        case 0x2afbd4u: goto label_2afbd4;
        case 0x2afbd8u: goto label_2afbd8;
        case 0x2afbdcu: goto label_2afbdc;
        case 0x2afbe0u: goto label_2afbe0;
        case 0x2afbe4u: goto label_2afbe4;
        case 0x2afbe8u: goto label_2afbe8;
        case 0x2afbecu: goto label_2afbec;
        case 0x2afbf0u: goto label_2afbf0;
        case 0x2afbf4u: goto label_2afbf4;
        case 0x2afbf8u: goto label_2afbf8;
        case 0x2afbfcu: goto label_2afbfc;
        case 0x2afc00u: goto label_2afc00;
        case 0x2afc04u: goto label_2afc04;
        case 0x2afc08u: goto label_2afc08;
        case 0x2afc0cu: goto label_2afc0c;
        case 0x2afc10u: goto label_2afc10;
        case 0x2afc14u: goto label_2afc14;
        case 0x2afc18u: goto label_2afc18;
        case 0x2afc1cu: goto label_2afc1c;
        case 0x2afc20u: goto label_2afc20;
        case 0x2afc24u: goto label_2afc24;
        case 0x2afc28u: goto label_2afc28;
        case 0x2afc2cu: goto label_2afc2c;
        case 0x2afc30u: goto label_2afc30;
        case 0x2afc34u: goto label_2afc34;
        case 0x2afc38u: goto label_2afc38;
        case 0x2afc3cu: goto label_2afc3c;
        case 0x2afc40u: goto label_2afc40;
        case 0x2afc44u: goto label_2afc44;
        case 0x2afc48u: goto label_2afc48;
        case 0x2afc4cu: goto label_2afc4c;
        case 0x2afc50u: goto label_2afc50;
        case 0x2afc54u: goto label_2afc54;
        case 0x2afc58u: goto label_2afc58;
        case 0x2afc5cu: goto label_2afc5c;
        case 0x2afc60u: goto label_2afc60;
        case 0x2afc64u: goto label_2afc64;
        case 0x2afc68u: goto label_2afc68;
        case 0x2afc6cu: goto label_2afc6c;
        case 0x2afc70u: goto label_2afc70;
        case 0x2afc74u: goto label_2afc74;
        case 0x2afc78u: goto label_2afc78;
        case 0x2afc7cu: goto label_2afc7c;
        case 0x2afc80u: goto label_2afc80;
        case 0x2afc84u: goto label_2afc84;
        case 0x2afc88u: goto label_2afc88;
        case 0x2afc8cu: goto label_2afc8c;
        case 0x2afc90u: goto label_2afc90;
        case 0x2afc94u: goto label_2afc94;
        case 0x2afc98u: goto label_2afc98;
        case 0x2afc9cu: goto label_2afc9c;
        case 0x2afca0u: goto label_2afca0;
        case 0x2afca4u: goto label_2afca4;
        case 0x2afca8u: goto label_2afca8;
        case 0x2afcacu: goto label_2afcac;
        case 0x2afcb0u: goto label_2afcb0;
        case 0x2afcb4u: goto label_2afcb4;
        case 0x2afcb8u: goto label_2afcb8;
        case 0x2afcbcu: goto label_2afcbc;
        case 0x2afcc0u: goto label_2afcc0;
        case 0x2afcc4u: goto label_2afcc4;
        case 0x2afcc8u: goto label_2afcc8;
        case 0x2afcccu: goto label_2afccc;
        case 0x2afcd0u: goto label_2afcd0;
        case 0x2afcd4u: goto label_2afcd4;
        case 0x2afcd8u: goto label_2afcd8;
        case 0x2afcdcu: goto label_2afcdc;
        case 0x2afce0u: goto label_2afce0;
        case 0x2afce4u: goto label_2afce4;
        case 0x2afce8u: goto label_2afce8;
        case 0x2afcecu: goto label_2afcec;
        case 0x2afcf0u: goto label_2afcf0;
        case 0x2afcf4u: goto label_2afcf4;
        case 0x2afcf8u: goto label_2afcf8;
        case 0x2afcfcu: goto label_2afcfc;
        case 0x2afd00u: goto label_2afd00;
        case 0x2afd04u: goto label_2afd04;
        case 0x2afd08u: goto label_2afd08;
        case 0x2afd0cu: goto label_2afd0c;
        case 0x2afd10u: goto label_2afd10;
        case 0x2afd14u: goto label_2afd14;
        case 0x2afd18u: goto label_2afd18;
        case 0x2afd1cu: goto label_2afd1c;
        case 0x2afd20u: goto label_2afd20;
        case 0x2afd24u: goto label_2afd24;
        case 0x2afd28u: goto label_2afd28;
        case 0x2afd2cu: goto label_2afd2c;
        case 0x2afd30u: goto label_2afd30;
        case 0x2afd34u: goto label_2afd34;
        case 0x2afd38u: goto label_2afd38;
        case 0x2afd3cu: goto label_2afd3c;
        case 0x2afd40u: goto label_2afd40;
        case 0x2afd44u: goto label_2afd44;
        case 0x2afd48u: goto label_2afd48;
        case 0x2afd4cu: goto label_2afd4c;
        case 0x2afd50u: goto label_2afd50;
        case 0x2afd54u: goto label_2afd54;
        case 0x2afd58u: goto label_2afd58;
        case 0x2afd5cu: goto label_2afd5c;
        case 0x2afd60u: goto label_2afd60;
        case 0x2afd64u: goto label_2afd64;
        case 0x2afd68u: goto label_2afd68;
        case 0x2afd6cu: goto label_2afd6c;
        case 0x2afd70u: goto label_2afd70;
        case 0x2afd74u: goto label_2afd74;
        case 0x2afd78u: goto label_2afd78;
        case 0x2afd7cu: goto label_2afd7c;
        case 0x2afd80u: goto label_2afd80;
        case 0x2afd84u: goto label_2afd84;
        case 0x2afd88u: goto label_2afd88;
        case 0x2afd8cu: goto label_2afd8c;
        case 0x2afd90u: goto label_2afd90;
        case 0x2afd94u: goto label_2afd94;
        case 0x2afd98u: goto label_2afd98;
        case 0x2afd9cu: goto label_2afd9c;
        case 0x2afda0u: goto label_2afda0;
        case 0x2afda4u: goto label_2afda4;
        case 0x2afda8u: goto label_2afda8;
        case 0x2afdacu: goto label_2afdac;
        case 0x2afdb0u: goto label_2afdb0;
        case 0x2afdb4u: goto label_2afdb4;
        case 0x2afdb8u: goto label_2afdb8;
        case 0x2afdbcu: goto label_2afdbc;
        case 0x2afdc0u: goto label_2afdc0;
        case 0x2afdc4u: goto label_2afdc4;
        case 0x2afdc8u: goto label_2afdc8;
        case 0x2afdccu: goto label_2afdcc;
        case 0x2afdd0u: goto label_2afdd0;
        case 0x2afdd4u: goto label_2afdd4;
        case 0x2afdd8u: goto label_2afdd8;
        case 0x2afddcu: goto label_2afddc;
        case 0x2afde0u: goto label_2afde0;
        case 0x2afde4u: goto label_2afde4;
        case 0x2afde8u: goto label_2afde8;
        case 0x2afdecu: goto label_2afdec;
        case 0x2afdf0u: goto label_2afdf0;
        case 0x2afdf4u: goto label_2afdf4;
        case 0x2afdf8u: goto label_2afdf8;
        case 0x2afdfcu: goto label_2afdfc;
        case 0x2afe00u: goto label_2afe00;
        case 0x2afe04u: goto label_2afe04;
        case 0x2afe08u: goto label_2afe08;
        case 0x2afe0cu: goto label_2afe0c;
        case 0x2afe10u: goto label_2afe10;
        case 0x2afe14u: goto label_2afe14;
        case 0x2afe18u: goto label_2afe18;
        case 0x2afe1cu: goto label_2afe1c;
        case 0x2afe20u: goto label_2afe20;
        case 0x2afe24u: goto label_2afe24;
        case 0x2afe28u: goto label_2afe28;
        case 0x2afe2cu: goto label_2afe2c;
        case 0x2afe30u: goto label_2afe30;
        case 0x2afe34u: goto label_2afe34;
        case 0x2afe38u: goto label_2afe38;
        case 0x2afe3cu: goto label_2afe3c;
        case 0x2afe40u: goto label_2afe40;
        case 0x2afe44u: goto label_2afe44;
        case 0x2afe48u: goto label_2afe48;
        case 0x2afe4cu: goto label_2afe4c;
        case 0x2afe50u: goto label_2afe50;
        case 0x2afe54u: goto label_2afe54;
        case 0x2afe58u: goto label_2afe58;
        case 0x2afe5cu: goto label_2afe5c;
        case 0x2afe60u: goto label_2afe60;
        case 0x2afe64u: goto label_2afe64;
        case 0x2afe68u: goto label_2afe68;
        case 0x2afe6cu: goto label_2afe6c;
        case 0x2afe70u: goto label_2afe70;
        case 0x2afe74u: goto label_2afe74;
        case 0x2afe78u: goto label_2afe78;
        case 0x2afe7cu: goto label_2afe7c;
        case 0x2afe80u: goto label_2afe80;
        case 0x2afe84u: goto label_2afe84;
        case 0x2afe88u: goto label_2afe88;
        case 0x2afe8cu: goto label_2afe8c;
        case 0x2afe90u: goto label_2afe90;
        case 0x2afe94u: goto label_2afe94;
        case 0x2afe98u: goto label_2afe98;
        case 0x2afe9cu: goto label_2afe9c;
        case 0x2afea0u: goto label_2afea0;
        case 0x2afea4u: goto label_2afea4;
        case 0x2afea8u: goto label_2afea8;
        case 0x2afeacu: goto label_2afeac;
        case 0x2afeb0u: goto label_2afeb0;
        case 0x2afeb4u: goto label_2afeb4;
        case 0x2afeb8u: goto label_2afeb8;
        case 0x2afebcu: goto label_2afebc;
        case 0x2afec0u: goto label_2afec0;
        case 0x2afec4u: goto label_2afec4;
        case 0x2afec8u: goto label_2afec8;
        case 0x2afeccu: goto label_2afecc;
        case 0x2afed0u: goto label_2afed0;
        case 0x2afed4u: goto label_2afed4;
        case 0x2afed8u: goto label_2afed8;
        case 0x2afedcu: goto label_2afedc;
        case 0x2afee0u: goto label_2afee0;
        case 0x2afee4u: goto label_2afee4;
        case 0x2afee8u: goto label_2afee8;
        case 0x2afeecu: goto label_2afeec;
        case 0x2afef0u: goto label_2afef0;
        case 0x2afef4u: goto label_2afef4;
        case 0x2afef8u: goto label_2afef8;
        case 0x2afefcu: goto label_2afefc;
        case 0x2aff00u: goto label_2aff00;
        case 0x2aff04u: goto label_2aff04;
        case 0x2aff08u: goto label_2aff08;
        case 0x2aff0cu: goto label_2aff0c;
        case 0x2aff10u: goto label_2aff10;
        case 0x2aff14u: goto label_2aff14;
        case 0x2aff18u: goto label_2aff18;
        case 0x2aff1cu: goto label_2aff1c;
        case 0x2aff20u: goto label_2aff20;
        case 0x2aff24u: goto label_2aff24;
        case 0x2aff28u: goto label_2aff28;
        case 0x2aff2cu: goto label_2aff2c;
        case 0x2aff30u: goto label_2aff30;
        case 0x2aff34u: goto label_2aff34;
        case 0x2aff38u: goto label_2aff38;
        case 0x2aff3cu: goto label_2aff3c;
        case 0x2aff40u: goto label_2aff40;
        case 0x2aff44u: goto label_2aff44;
        case 0x2aff48u: goto label_2aff48;
        case 0x2aff4cu: goto label_2aff4c;
        case 0x2aff50u: goto label_2aff50;
        case 0x2aff54u: goto label_2aff54;
        case 0x2aff58u: goto label_2aff58;
        case 0x2aff5cu: goto label_2aff5c;
        case 0x2aff60u: goto label_2aff60;
        case 0x2aff64u: goto label_2aff64;
        case 0x2aff68u: goto label_2aff68;
        case 0x2aff6cu: goto label_2aff6c;
        case 0x2aff70u: goto label_2aff70;
        case 0x2aff74u: goto label_2aff74;
        case 0x2aff78u: goto label_2aff78;
        case 0x2aff7cu: goto label_2aff7c;
        case 0x2aff80u: goto label_2aff80;
        case 0x2aff84u: goto label_2aff84;
        case 0x2aff88u: goto label_2aff88;
        case 0x2aff8cu: goto label_2aff8c;
        case 0x2aff90u: goto label_2aff90;
        case 0x2aff94u: goto label_2aff94;
        case 0x2aff98u: goto label_2aff98;
        case 0x2aff9cu: goto label_2aff9c;
        case 0x2affa0u: goto label_2affa0;
        case 0x2affa4u: goto label_2affa4;
        case 0x2affa8u: goto label_2affa8;
        case 0x2affacu: goto label_2affac;
        case 0x2affb0u: goto label_2affb0;
        case 0x2affb4u: goto label_2affb4;
        case 0x2affb8u: goto label_2affb8;
        case 0x2affbcu: goto label_2affbc;
        case 0x2affc0u: goto label_2affc0;
        case 0x2affc4u: goto label_2affc4;
        case 0x2affc8u: goto label_2affc8;
        case 0x2affccu: goto label_2affcc;
        case 0x2affd0u: goto label_2affd0;
        case 0x2affd4u: goto label_2affd4;
        case 0x2affd8u: goto label_2affd8;
        case 0x2affdcu: goto label_2affdc;
        case 0x2affe0u: goto label_2affe0;
        case 0x2affe4u: goto label_2affe4;
        case 0x2affe8u: goto label_2affe8;
        case 0x2affecu: goto label_2affec;
        case 0x2afff0u: goto label_2afff0;
        case 0x2afff4u: goto label_2afff4;
        case 0x2afff8u: goto label_2afff8;
        case 0x2afffcu: goto label_2afffc;
        case 0x2b0000u: goto label_2b0000;
        case 0x2b0004u: goto label_2b0004;
        case 0x2b0008u: goto label_2b0008;
        case 0x2b000cu: goto label_2b000c;
        case 0x2b0010u: goto label_2b0010;
        case 0x2b0014u: goto label_2b0014;
        case 0x2b0018u: goto label_2b0018;
        case 0x2b001cu: goto label_2b001c;
        case 0x2b0020u: goto label_2b0020;
        case 0x2b0024u: goto label_2b0024;
        case 0x2b0028u: goto label_2b0028;
        case 0x2b002cu: goto label_2b002c;
        case 0x2b0030u: goto label_2b0030;
        case 0x2b0034u: goto label_2b0034;
        case 0x2b0038u: goto label_2b0038;
        case 0x2b003cu: goto label_2b003c;
        case 0x2b0040u: goto label_2b0040;
        case 0x2b0044u: goto label_2b0044;
        case 0x2b0048u: goto label_2b0048;
        case 0x2b004cu: goto label_2b004c;
        case 0x2b0050u: goto label_2b0050;
        case 0x2b0054u: goto label_2b0054;
        case 0x2b0058u: goto label_2b0058;
        case 0x2b005cu: goto label_2b005c;
        case 0x2b0060u: goto label_2b0060;
        case 0x2b0064u: goto label_2b0064;
        case 0x2b0068u: goto label_2b0068;
        case 0x2b006cu: goto label_2b006c;
        case 0x2b0070u: goto label_2b0070;
        case 0x2b0074u: goto label_2b0074;
        case 0x2b0078u: goto label_2b0078;
        case 0x2b007cu: goto label_2b007c;
        case 0x2b0080u: goto label_2b0080;
        case 0x2b0084u: goto label_2b0084;
        case 0x2b0088u: goto label_2b0088;
        case 0x2b008cu: goto label_2b008c;
        case 0x2b0090u: goto label_2b0090;
        case 0x2b0094u: goto label_2b0094;
        case 0x2b0098u: goto label_2b0098;
        case 0x2b009cu: goto label_2b009c;
        case 0x2b00a0u: goto label_2b00a0;
        case 0x2b00a4u: goto label_2b00a4;
        case 0x2b00a8u: goto label_2b00a8;
        case 0x2b00acu: goto label_2b00ac;
        case 0x2b00b0u: goto label_2b00b0;
        case 0x2b00b4u: goto label_2b00b4;
        case 0x2b00b8u: goto label_2b00b8;
        case 0x2b00bcu: goto label_2b00bc;
        case 0x2b00c0u: goto label_2b00c0;
        case 0x2b00c4u: goto label_2b00c4;
        case 0x2b00c8u: goto label_2b00c8;
        case 0x2b00ccu: goto label_2b00cc;
        case 0x2b00d0u: goto label_2b00d0;
        case 0x2b00d4u: goto label_2b00d4;
        case 0x2b00d8u: goto label_2b00d8;
        case 0x2b00dcu: goto label_2b00dc;
        case 0x2b00e0u: goto label_2b00e0;
        case 0x2b00e4u: goto label_2b00e4;
        case 0x2b00e8u: goto label_2b00e8;
        case 0x2b00ecu: goto label_2b00ec;
        case 0x2b00f0u: goto label_2b00f0;
        case 0x2b00f4u: goto label_2b00f4;
        case 0x2b00f8u: goto label_2b00f8;
        case 0x2b00fcu: goto label_2b00fc;
        case 0x2b0100u: goto label_2b0100;
        case 0x2b0104u: goto label_2b0104;
        case 0x2b0108u: goto label_2b0108;
        case 0x2b010cu: goto label_2b010c;
        case 0x2b0110u: goto label_2b0110;
        case 0x2b0114u: goto label_2b0114;
        case 0x2b0118u: goto label_2b0118;
        case 0x2b011cu: goto label_2b011c;
        case 0x2b0120u: goto label_2b0120;
        case 0x2b0124u: goto label_2b0124;
        case 0x2b0128u: goto label_2b0128;
        case 0x2b012cu: goto label_2b012c;
        case 0x2b0130u: goto label_2b0130;
        case 0x2b0134u: goto label_2b0134;
        case 0x2b0138u: goto label_2b0138;
        case 0x2b013cu: goto label_2b013c;
        case 0x2b0140u: goto label_2b0140;
        case 0x2b0144u: goto label_2b0144;
        case 0x2b0148u: goto label_2b0148;
        case 0x2b014cu: goto label_2b014c;
        case 0x2b0150u: goto label_2b0150;
        case 0x2b0154u: goto label_2b0154;
        case 0x2b0158u: goto label_2b0158;
        case 0x2b015cu: goto label_2b015c;
        case 0x2b0160u: goto label_2b0160;
        case 0x2b0164u: goto label_2b0164;
        case 0x2b0168u: goto label_2b0168;
        case 0x2b016cu: goto label_2b016c;
        case 0x2b0170u: goto label_2b0170;
        case 0x2b0174u: goto label_2b0174;
        case 0x2b0178u: goto label_2b0178;
        case 0x2b017cu: goto label_2b017c;
        case 0x2b0180u: goto label_2b0180;
        case 0x2b0184u: goto label_2b0184;
        case 0x2b0188u: goto label_2b0188;
        case 0x2b018cu: goto label_2b018c;
        case 0x2b0190u: goto label_2b0190;
        case 0x2b0194u: goto label_2b0194;
        case 0x2b0198u: goto label_2b0198;
        case 0x2b019cu: goto label_2b019c;
        case 0x2b01a0u: goto label_2b01a0;
        case 0x2b01a4u: goto label_2b01a4;
        case 0x2b01a8u: goto label_2b01a8;
        case 0x2b01acu: goto label_2b01ac;
        case 0x2b01b0u: goto label_2b01b0;
        case 0x2b01b4u: goto label_2b01b4;
        case 0x2b01b8u: goto label_2b01b8;
        case 0x2b01bcu: goto label_2b01bc;
        case 0x2b01c0u: goto label_2b01c0;
        case 0x2b01c4u: goto label_2b01c4;
        case 0x2b01c8u: goto label_2b01c8;
        case 0x2b01ccu: goto label_2b01cc;
        case 0x2b01d0u: goto label_2b01d0;
        case 0x2b01d4u: goto label_2b01d4;
        case 0x2b01d8u: goto label_2b01d8;
        case 0x2b01dcu: goto label_2b01dc;
        case 0x2b01e0u: goto label_2b01e0;
        case 0x2b01e4u: goto label_2b01e4;
        case 0x2b01e8u: goto label_2b01e8;
        case 0x2b01ecu: goto label_2b01ec;
        case 0x2b01f0u: goto label_2b01f0;
        case 0x2b01f4u: goto label_2b01f4;
        case 0x2b01f8u: goto label_2b01f8;
        case 0x2b01fcu: goto label_2b01fc;
        case 0x2b0200u: goto label_2b0200;
        case 0x2b0204u: goto label_2b0204;
        case 0x2b0208u: goto label_2b0208;
        case 0x2b020cu: goto label_2b020c;
        case 0x2b0210u: goto label_2b0210;
        case 0x2b0214u: goto label_2b0214;
        case 0x2b0218u: goto label_2b0218;
        case 0x2b021cu: goto label_2b021c;
        case 0x2b0220u: goto label_2b0220;
        case 0x2b0224u: goto label_2b0224;
        case 0x2b0228u: goto label_2b0228;
        case 0x2b022cu: goto label_2b022c;
        case 0x2b0230u: goto label_2b0230;
        case 0x2b0234u: goto label_2b0234;
        case 0x2b0238u: goto label_2b0238;
        case 0x2b023cu: goto label_2b023c;
        case 0x2b0240u: goto label_2b0240;
        case 0x2b0244u: goto label_2b0244;
        case 0x2b0248u: goto label_2b0248;
        case 0x2b024cu: goto label_2b024c;
        case 0x2b0250u: goto label_2b0250;
        case 0x2b0254u: goto label_2b0254;
        case 0x2b0258u: goto label_2b0258;
        case 0x2b025cu: goto label_2b025c;
        case 0x2b0260u: goto label_2b0260;
        case 0x2b0264u: goto label_2b0264;
        case 0x2b0268u: goto label_2b0268;
        case 0x2b026cu: goto label_2b026c;
        case 0x2b0270u: goto label_2b0270;
        case 0x2b0274u: goto label_2b0274;
        case 0x2b0278u: goto label_2b0278;
        case 0x2b027cu: goto label_2b027c;
        case 0x2b0280u: goto label_2b0280;
        case 0x2b0284u: goto label_2b0284;
        case 0x2b0288u: goto label_2b0288;
        case 0x2b028cu: goto label_2b028c;
        case 0x2b0290u: goto label_2b0290;
        case 0x2b0294u: goto label_2b0294;
        case 0x2b0298u: goto label_2b0298;
        case 0x2b029cu: goto label_2b029c;
        case 0x2b02a0u: goto label_2b02a0;
        case 0x2b02a4u: goto label_2b02a4;
        case 0x2b02a8u: goto label_2b02a8;
        case 0x2b02acu: goto label_2b02ac;
        case 0x2b02b0u: goto label_2b02b0;
        case 0x2b02b4u: goto label_2b02b4;
        case 0x2b02b8u: goto label_2b02b8;
        case 0x2b02bcu: goto label_2b02bc;
        case 0x2b02c0u: goto label_2b02c0;
        case 0x2b02c4u: goto label_2b02c4;
        case 0x2b02c8u: goto label_2b02c8;
        case 0x2b02ccu: goto label_2b02cc;
        case 0x2b02d0u: goto label_2b02d0;
        case 0x2b02d4u: goto label_2b02d4;
        case 0x2b02d8u: goto label_2b02d8;
        case 0x2b02dcu: goto label_2b02dc;
        case 0x2b02e0u: goto label_2b02e0;
        case 0x2b02e4u: goto label_2b02e4;
        case 0x2b02e8u: goto label_2b02e8;
        case 0x2b02ecu: goto label_2b02ec;
        case 0x2b02f0u: goto label_2b02f0;
        case 0x2b02f4u: goto label_2b02f4;
        case 0x2b02f8u: goto label_2b02f8;
        case 0x2b02fcu: goto label_2b02fc;
        case 0x2b0300u: goto label_2b0300;
        case 0x2b0304u: goto label_2b0304;
        case 0x2b0308u: goto label_2b0308;
        case 0x2b030cu: goto label_2b030c;
        case 0x2b0310u: goto label_2b0310;
        case 0x2b0314u: goto label_2b0314;
        case 0x2b0318u: goto label_2b0318;
        case 0x2b031cu: goto label_2b031c;
        case 0x2b0320u: goto label_2b0320;
        case 0x2b0324u: goto label_2b0324;
        case 0x2b0328u: goto label_2b0328;
        case 0x2b032cu: goto label_2b032c;
        case 0x2b0330u: goto label_2b0330;
        case 0x2b0334u: goto label_2b0334;
        case 0x2b0338u: goto label_2b0338;
        case 0x2b033cu: goto label_2b033c;
        case 0x2b0340u: goto label_2b0340;
        case 0x2b0344u: goto label_2b0344;
        case 0x2b0348u: goto label_2b0348;
        case 0x2b034cu: goto label_2b034c;
        case 0x2b0350u: goto label_2b0350;
        case 0x2b0354u: goto label_2b0354;
        case 0x2b0358u: goto label_2b0358;
        case 0x2b035cu: goto label_2b035c;
        case 0x2b0360u: goto label_2b0360;
        case 0x2b0364u: goto label_2b0364;
        case 0x2b0368u: goto label_2b0368;
        case 0x2b036cu: goto label_2b036c;
        case 0x2b0370u: goto label_2b0370;
        case 0x2b0374u: goto label_2b0374;
        case 0x2b0378u: goto label_2b0378;
        case 0x2b037cu: goto label_2b037c;
        case 0x2b0380u: goto label_2b0380;
        case 0x2b0384u: goto label_2b0384;
        case 0x2b0388u: goto label_2b0388;
        case 0x2b038cu: goto label_2b038c;
        case 0x2b0390u: goto label_2b0390;
        case 0x2b0394u: goto label_2b0394;
        case 0x2b0398u: goto label_2b0398;
        case 0x2b039cu: goto label_2b039c;
        case 0x2b03a0u: goto label_2b03a0;
        case 0x2b03a4u: goto label_2b03a4;
        case 0x2b03a8u: goto label_2b03a8;
        case 0x2b03acu: goto label_2b03ac;
        case 0x2b03b0u: goto label_2b03b0;
        case 0x2b03b4u: goto label_2b03b4;
        case 0x2b03b8u: goto label_2b03b8;
        case 0x2b03bcu: goto label_2b03bc;
        case 0x2b03c0u: goto label_2b03c0;
        case 0x2b03c4u: goto label_2b03c4;
        case 0x2b03c8u: goto label_2b03c8;
        case 0x2b03ccu: goto label_2b03cc;
        case 0x2b03d0u: goto label_2b03d0;
        case 0x2b03d4u: goto label_2b03d4;
        case 0x2b03d8u: goto label_2b03d8;
        case 0x2b03dcu: goto label_2b03dc;
        case 0x2b03e0u: goto label_2b03e0;
        case 0x2b03e4u: goto label_2b03e4;
        case 0x2b03e8u: goto label_2b03e8;
        case 0x2b03ecu: goto label_2b03ec;
        case 0x2b03f0u: goto label_2b03f0;
        case 0x2b03f4u: goto label_2b03f4;
        case 0x2b03f8u: goto label_2b03f8;
        case 0x2b03fcu: goto label_2b03fc;
        case 0x2b0400u: goto label_2b0400;
        case 0x2b0404u: goto label_2b0404;
        case 0x2b0408u: goto label_2b0408;
        case 0x2b040cu: goto label_2b040c;
        case 0x2b0410u: goto label_2b0410;
        case 0x2b0414u: goto label_2b0414;
        case 0x2b0418u: goto label_2b0418;
        case 0x2b041cu: goto label_2b041c;
        case 0x2b0420u: goto label_2b0420;
        case 0x2b0424u: goto label_2b0424;
        case 0x2b0428u: goto label_2b0428;
        case 0x2b042cu: goto label_2b042c;
        case 0x2b0430u: goto label_2b0430;
        case 0x2b0434u: goto label_2b0434;
        case 0x2b0438u: goto label_2b0438;
        case 0x2b043cu: goto label_2b043c;
        case 0x2b0440u: goto label_2b0440;
        case 0x2b0444u: goto label_2b0444;
        case 0x2b0448u: goto label_2b0448;
        case 0x2b044cu: goto label_2b044c;
        case 0x2b0450u: goto label_2b0450;
        case 0x2b0454u: goto label_2b0454;
        case 0x2b0458u: goto label_2b0458;
        case 0x2b045cu: goto label_2b045c;
        case 0x2b0460u: goto label_2b0460;
        case 0x2b0464u: goto label_2b0464;
        case 0x2b0468u: goto label_2b0468;
        case 0x2b046cu: goto label_2b046c;
        case 0x2b0470u: goto label_2b0470;
        case 0x2b0474u: goto label_2b0474;
        case 0x2b0478u: goto label_2b0478;
        case 0x2b047cu: goto label_2b047c;
        case 0x2b0480u: goto label_2b0480;
        case 0x2b0484u: goto label_2b0484;
        case 0x2b0488u: goto label_2b0488;
        case 0x2b048cu: goto label_2b048c;
        case 0x2b0490u: goto label_2b0490;
        case 0x2b0494u: goto label_2b0494;
        case 0x2b0498u: goto label_2b0498;
        case 0x2b049cu: goto label_2b049c;
        case 0x2b04a0u: goto label_2b04a0;
        case 0x2b04a4u: goto label_2b04a4;
        case 0x2b04a8u: goto label_2b04a8;
        case 0x2b04acu: goto label_2b04ac;
        case 0x2b04b0u: goto label_2b04b0;
        case 0x2b04b4u: goto label_2b04b4;
        case 0x2b04b8u: goto label_2b04b8;
        case 0x2b04bcu: goto label_2b04bc;
        case 0x2b04c0u: goto label_2b04c0;
        case 0x2b04c4u: goto label_2b04c4;
        case 0x2b04c8u: goto label_2b04c8;
        case 0x2b04ccu: goto label_2b04cc;
        case 0x2b04d0u: goto label_2b04d0;
        case 0x2b04d4u: goto label_2b04d4;
        case 0x2b04d8u: goto label_2b04d8;
        case 0x2b04dcu: goto label_2b04dc;
        case 0x2b04e0u: goto label_2b04e0;
        case 0x2b04e4u: goto label_2b04e4;
        case 0x2b04e8u: goto label_2b04e8;
        case 0x2b04ecu: goto label_2b04ec;
        default: break;
    }

    ctx->pc = 0x2afa48u;

label_2afa48:
    // 0x2afa48: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2afa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_2afa4c:
    // 0x2afa4c: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2afa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_2afa50:
    // 0x2afa50: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x2afa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_2afa54:
    // 0x2afa54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2afa54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2afa58:
    // 0x2afa58: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2afa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_2afa5c:
    // 0x2afa5c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2afa5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afa60:
    // 0x2afa60: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2afa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_2afa64:
    // 0x2afa64: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2afa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_2afa68:
    // 0x2afa68: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2afa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_2afa6c:
    // 0x2afa6c: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2afa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_2afa70:
    // 0x2afa70: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2afa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_2afa74:
    // 0x2afa74: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2afa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_2afa78:
    // 0x2afa78: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2afa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2afa7c:
    // 0x2afa7c: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x2afa7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2afa80:
    // 0x2afa80: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x2afa80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_2afa84:
    // 0x2afa84: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2afa84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2afa88:
    // 0x2afa88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2afa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afa8c:
    // 0x2afa8c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2afa8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2afa90:
    // 0x2afa90: 0xc08a08a  jal         func_228228
label_2afa94:
    if (ctx->pc == 0x2AFA94u) {
        ctx->pc = 0x2AFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA90u;
        // 0x2afa94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFA98u;
        goto label_2afa98;
    }
    ctx->pc = 0x2AFA90u;
    SET_GPR_U32(ctx, 31, 0x2AFA98u);
    ctx->pc = 0x2AFA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA90u;
    // 0x2afa94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2AFA90u, 0x2AFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA98u;
label_2afa98:
    // 0x2afa98: 0x10570286  beq         $v0, $s7, . + 4 + (0x286 << 2)
label_2afa9c:
    if (ctx->pc == 0x2AFA9Cu) {
        ctx->pc = 0x2AFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA98u;
        // 0x2afa9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFAA0u;
        goto label_2afaa0;
    }
    ctx->pc = 0x2AFA98u;
    {
        const bool branch_taken_0x2afa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x2AFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA98u;
        // 0x2afa9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa98) {
            ctx->pc = 0x2B04B4u;
            goto label_2b04b4;
        }
    }
    ctx->pc = 0x2AFAA0u;
label_2afaa0:
    // 0x2afaa0: 0xc08a10a  jal         func_228428
label_2afaa4:
    if (ctx->pc == 0x2AFAA4u) {
        ctx->pc = 0x2AFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAA0u;
        // 0x2afaa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFAA8u;
        goto label_2afaa8;
    }
    ctx->pc = 0x2AFAA0u;
    SET_GPR_U32(ctx, 31, 0x2AFAA8u);
    ctx->pc = 0x2AFAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFAA0u;
    // 0x2afaa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2AFAA0u, 0x2AFAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFAA8u;
label_2afaa8:
    // 0x2afaa8: 0x10570282  beq         $v0, $s7, . + 4 + (0x282 << 2)
label_2afaac:
    if (ctx->pc == 0x2AFAACu) {
        ctx->pc = 0x2AFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAA8u;
        // 0x2afaac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFAB0u;
        goto label_2afab0;
    }
    ctx->pc = 0x2AFAA8u;
    {
        const bool branch_taken_0x2afaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x2AFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAA8u;
        // 0x2afaac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afaa8) {
            ctx->pc = 0x2B04B4u;
            goto label_2b04b4;
        }
    }
    ctx->pc = 0x2AFAB0u;
label_2afab0:
    // 0x2afab0: 0xc08bfbc  jal         func_22FEF0
label_2afab4:
    if (ctx->pc == 0x2AFAB4u) {
        ctx->pc = 0x2AFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAB0u;
        // 0x2afab4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFAB8u;
        goto label_2afab8;
    }
    ctx->pc = 0x2AFAB0u;
    SET_GPR_U32(ctx, 31, 0x2AFAB8u);
    ctx->pc = 0x2AFAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFAB0u;
    // 0x2afab4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2AFAB0u, 0x2AFAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFAB8u;
label_2afab8:
    // 0x2afab8: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x2afab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_2afabc:
    // 0x2afabc: 0x54570017  bnel        $v0, $s7, . + 4 + (0x17 << 2)
label_2afac0:
    if (ctx->pc == 0x2AFAC0u) {
        ctx->pc = 0x2AFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFABCu;
        // 0x2afac0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFAC4u;
        goto label_2afac4;
    }
    ctx->pc = 0x2AFABCu;
    {
        const bool branch_taken_0x2afabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x2afabc) {
            ctx->pc = 0x2AFAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFABCu;
            // 0x2afac0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFB1Cu;
            goto label_2afb1c;
        }
    }
    ctx->pc = 0x2AFAC4u;
label_2afac4:
    // 0x2afac4: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x2afac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_2afac8:
    // 0x2afac8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2afacc:
    if (ctx->pc == 0x2AFACCu) {
        ctx->pc = 0x2AFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAC8u;
        // 0x2afacc: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFAD0u;
        goto label_2afad0;
    }
    ctx->pc = 0x2AFAC8u;
    {
        const bool branch_taken_0x2afac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afac8) {
            ctx->pc = 0x2AFACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFAC8u;
            // 0x2afacc: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFAD8u;
            goto label_2afad8;
        }
    }
    ctx->pc = 0x2AFAD0u;
label_2afad0:
    // 0x2afad0: 0x10000278  b           . + 4 + (0x278 << 2)
label_2afad4:
    if (ctx->pc == 0x2AFAD4u) {
        ctx->pc = 0x2AFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAD0u;
        // 0x2afad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFAD8u;
        goto label_2afad8;
    }
    ctx->pc = 0x2AFAD0u;
    {
        const bool branch_taken_0x2afad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAD0u;
        // 0x2afad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afad0) {
            ctx->pc = 0x2B04B4u;
            goto label_2b04b4;
        }
    }
    ctx->pc = 0x2AFAD8u;
label_2afad8:
    // 0x2afad8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2afad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2afadc:
    // 0x2afadc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2afadcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afae0:
    // 0x2afae0: 0xc0e409a  jal         func_390268
label_2afae4:
    if (ctx->pc == 0x2AFAE4u) {
        ctx->pc = 0x2AFAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAE0u;
        // 0x2afae4: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFAE8u;
        goto label_2afae8;
    }
    ctx->pc = 0x2AFAE0u;
    SET_GPR_U32(ctx, 31, 0x2AFAE8u);
    ctx->pc = 0x2AFAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFAE0u;
    // 0x2afae4: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AFAE0u, 0x2AFAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFAE8u;
label_2afae8:
    // 0x2afae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2afae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2afaec:
    // 0x2afaec: 0xc0a34d6  jal         func_28D358
label_2afaf0:
    if (ctx->pc == 0x2AFAF0u) {
        ctx->pc = 0x2AFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAECu;
        // 0x2afaf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFAF4u;
        goto label_2afaf4;
    }
    ctx->pc = 0x2AFAECu;
    SET_GPR_U32(ctx, 31, 0x2AFAF4u);
    ctx->pc = 0x2AFAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFAECu;
    // 0x2afaf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2AFAECu, 0x2AFAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFAF4u;
label_2afaf4:
    // 0x2afaf4: 0x1040026e  beqz        $v0, . + 4 + (0x26E << 2)
label_2afaf8:
    if (ctx->pc == 0x2AFAF8u) {
        ctx->pc = 0x2AFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAF4u;
        // 0x2afaf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFAFCu;
        goto label_2afafc;
    }
    ctx->pc = 0x2AFAF4u;
    {
        const bool branch_taken_0x2afaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAF4u;
        // 0x2afaf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afaf4) {
            ctx->pc = 0x2B04B0u;
            goto label_2b04b0;
        }
    }
    ctx->pc = 0x2AFAFCu;
label_2afafc:
    // 0x2afafc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2afafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2afb00:
    // 0x2afb00: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2afb00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2afb04:
    // 0x2afb04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2afb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2afb08:
    // 0x2afb08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2afb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afb0c:
    // 0x2afb0c: 0xc088736  jal         func_221CD8
label_2afb10:
    if (ctx->pc == 0x2AFB10u) {
        ctx->pc = 0x2AFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB0Cu;
        // 0x2afb10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFB14u;
        goto label_2afb14;
    }
    ctx->pc = 0x2AFB0Cu;
    SET_GPR_U32(ctx, 31, 0x2AFB14u);
    ctx->pc = 0x2AFB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFB0Cu;
    // 0x2afb10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221CD8u, 0x2AFB0Cu, 0x2AFB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB14u;
label_2afb14:
    // 0x2afb14: 0x10000267  b           . + 4 + (0x267 << 2)
label_2afb18:
    if (ctx->pc == 0x2AFB18u) {
        ctx->pc = 0x2AFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB14u;
        // 0x2afb18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFB1Cu;
        goto label_2afb1c;
    }
    ctx->pc = 0x2AFB14u;
    {
        const bool branch_taken_0x2afb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB14u;
        // 0x2afb18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb14) {
            ctx->pc = 0x2B04B4u;
            goto label_2b04b4;
        }
    }
    ctx->pc = 0x2AFB1Cu;
label_2afb1c:
    // 0x2afb1c: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x2afb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_2afb20:
    // 0x2afb20: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2afb20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afb24:
    // 0x2afb24: 0xc0e409a  jal         func_390268
label_2afb28:
    if (ctx->pc == 0x2AFB28u) {
        ctx->pc = 0x2AFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB24u;
        // 0x2afb28: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFB2Cu;
        goto label_2afb2c;
    }
    ctx->pc = 0x2AFB24u;
    SET_GPR_U32(ctx, 31, 0x2AFB2Cu);
    ctx->pc = 0x2AFB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFB24u;
    // 0x2afb28: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AFB24u, 0x2AFB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB2Cu;
label_2afb2c:
    // 0x2afb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2afb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2afb30:
    // 0x2afb30: 0xc0a34d6  jal         func_28D358
label_2afb34:
    if (ctx->pc == 0x2AFB34u) {
        ctx->pc = 0x2AFB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB30u;
        // 0x2afb34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFB38u;
        goto label_2afb38;
    }
    ctx->pc = 0x2AFB30u;
    SET_GPR_U32(ctx, 31, 0x2AFB38u);
    ctx->pc = 0x2AFB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFB30u;
    // 0x2afb34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2AFB30u, 0x2AFB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB38u;
label_2afb38:
    // 0x2afb38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2afb38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afb3c:
    // 0x2afb3c: 0x12600168  beqz        $s3, . + 4 + (0x168 << 2)
label_2afb40:
    if (ctx->pc == 0x2AFB40u) {
        ctx->pc = 0x2AFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB3Cu;
        // 0x2afb40: 0x26820090  addiu       $v0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFB44u;
        goto label_2afb44;
    }
    ctx->pc = 0x2AFB3Cu;
    {
        const bool branch_taken_0x2afb3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB3Cu;
        // 0x2afb40: 0x26820090  addiu       $v0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb3c) {
            ctx->pc = 0x2B00E0u;
            goto label_2b00e0;
        }
    }
    ctx->pc = 0x2AFB44u;
label_2afb44:
    // 0x2afb44: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2afb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2afb48:
    // 0x2afb48: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x2afb48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2afb4c:
    // 0x2afb4c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2afb4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afb50:
    // 0x2afb50: 0x24904b00  addiu       $s0, $a0, 0x4B00
    ctx->pc = 0x2afb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2afb54:
    // 0x2afb54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2afb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2afb58:
    // 0x2afb58: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2afb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2afb5c:
    // 0x2afb5c: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2afb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2afb60:
    // 0x2afb60: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2afb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2afb64:
    // 0x2afb64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2afb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2afb68:
    // 0x2afb68: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2afb68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2afb6c:
    // 0x2afb6c: 0x8cb60048  lw          $s6, 0x48($a1)
    ctx->pc = 0x2afb6cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2afb70:
    // 0x2afb70: 0xc087420  jal         func_21D080
label_2afb74:
    if (ctx->pc == 0x2AFB74u) {
        ctx->pc = 0x2AFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB70u;
        // 0x2afb74: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFB78u;
        goto label_2afb78;
    }
    ctx->pc = 0x2AFB70u;
    SET_GPR_U32(ctx, 31, 0x2AFB78u);
    ctx->pc = 0x2AFB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFB70u;
    // 0x2afb74: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2AFB70u, 0x2AFB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB78u;
label_2afb78:
    // 0x2afb78: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2afb78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2afb7c:
    // 0x2afb7c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2afb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2afb80:
    // 0x2afb80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2afb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2afb84:
    // 0x2afb84: 0xc0cdb38  jal         func_336CE0
label_2afb88:
    if (ctx->pc == 0x2AFB88u) {
        ctx->pc = 0x2AFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB84u;
        // 0x2afb88: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFB8Cu;
        goto label_2afb8c;
    }
    ctx->pc = 0x2AFB84u;
    SET_GPR_U32(ctx, 31, 0x2AFB8Cu);
    ctx->pc = 0x2AFB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFB84u;
    // 0x2afb88: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2AFB84u, 0x2AFB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB8Cu;
label_2afb8c:
    // 0x2afb8c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2afb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2afb90:
    // 0x2afb90: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2afb90u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2afb94:
    // 0x2afb94: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x2afb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_2afb98:
    // 0x2afb98: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_2afb9c:
    if (ctx->pc == 0x2AFB9Cu) {
        ctx->pc = 0x2AFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB98u;
        // 0x2afb9c: 0xa2200037  sb          $zero, 0x37($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBA0u;
        goto label_2afba0;
    }
    ctx->pc = 0x2AFB98u;
    {
        const bool branch_taken_0x2afb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB98u;
        // 0x2afb9c: 0xa2200037  sb          $zero, 0x37($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb98) {
            ctx->pc = 0x2AFCDCu;
            goto label_2afcdc;
        }
    }
    ctx->pc = 0x2AFBA0u;
label_2afba0:
    // 0x2afba0: 0x26c207d0  addiu       $v0, $s6, 0x7D0
    ctx->pc = 0x2afba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2000));
label_2afba4:
    // 0x2afba4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2afba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2afba8:
    // 0x2afba8: 0xc08a200  jal         func_228800
label_2afbac:
    if (ctx->pc == 0x2AFBACu) {
        ctx->pc = 0x2AFBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBA8u;
        // 0x2afbac: 0x8e8400cc  lw          $a0, 0xCC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBB0u;
        goto label_2afbb0;
    }
    ctx->pc = 0x2AFBA8u;
    SET_GPR_U32(ctx, 31, 0x2AFBB0u);
    ctx->pc = 0x2AFBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBA8u;
    // 0x2afbac: 0x8e8400cc  lw          $a0, 0xCC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2AFBA8u, 0x2AFBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBB0u;
label_2afbb0:
    // 0x2afbb0: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2afbb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2afbb4:
    // 0x2afbb4: 0x3863000d  xori        $v1, $v1, 0xD
    ctx->pc = 0x2afbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)13);
label_2afbb8:
    // 0x2afbb8: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_2afbbc:
    if (ctx->pc == 0x2AFBBCu) {
        ctx->pc = 0x2AFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBB8u;
        // 0x2afbbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBC0u;
        goto label_2afbc0;
    }
    ctx->pc = 0x2AFBB8u;
    {
        const bool branch_taken_0x2afbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBB8u;
        // 0x2afbbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afbb8) {
            ctx->pc = 0x2AFCE0u;
            goto label_2afce0;
        }
    }
    ctx->pc = 0x2AFBC0u;
label_2afbc0:
    // 0x2afbc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2afbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afbc4:
    // 0x2afbc4: 0x87c50002  lh          $a1, 0x2($fp)
    ctx->pc = 0x2afbc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2afbc8:
    // 0x2afbc8: 0x24520164  addiu       $s2, $v0, 0x164
    ctx->pc = 0x2afbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
label_2afbcc:
    // 0x2afbcc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2afbccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2afbd0:
    // 0x2afbd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2afbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2afbd4:
    // 0x2afbd4: 0xc13b748  jal         func_4EDD20
label_2afbd8:
    if (ctx->pc == 0x2AFBD8u) {
        ctx->pc = 0x2AFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBD4u;
        // 0x2afbd8: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBDCu;
        goto label_2afbdc;
    }
    ctx->pc = 0x2AFBD4u;
    SET_GPR_U32(ctx, 31, 0x2AFBDCu);
    ctx->pc = 0x2AFBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBD4u;
    // 0x2afbd8: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x2AFBD4u, 0x2AFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBDCu;
label_2afbdc:
    // 0x2afbdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2afbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2afbe0:
    // 0x2afbe0: 0xc137826  jal         func_4DE098
label_2afbe4:
    if (ctx->pc == 0x2AFBE4u) {
        ctx->pc = 0x2AFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBE0u;
        // 0x2afbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBE8u;
        goto label_2afbe8;
    }
    ctx->pc = 0x2AFBE0u;
    SET_GPR_U32(ctx, 31, 0x2AFBE8u);
    ctx->pc = 0x2AFBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBE0u;
    // 0x2afbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2AFBE0u, 0x2AFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBE8u;
label_2afbe8:
    // 0x2afbe8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2afbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2afbec:
    // 0x2afbec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2afbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2afbf0:
    // 0x2afbf0: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
label_2afbf4:
    if (ctx->pc == 0x2AFBF4u) {
        ctx->pc = 0x2AFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBF0u;
        // 0x2afbf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBF8u;
        goto label_2afbf8;
    }
    ctx->pc = 0x2AFBF0u;
    {
        const bool branch_taken_0x2afbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBF0u;
        // 0x2afbf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afbf0) {
            ctx->pc = 0x2AFCDCu;
            goto label_2afcdc;
        }
    }
    ctx->pc = 0x2AFBF8u;
label_2afbf8:
    // 0x2afbf8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2afbf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afbfc:
    // 0x2afbfc: 0xc137826  jal         func_4DE098
label_2afc00:
    if (ctx->pc == 0x2AFC00u) {
        ctx->pc = 0x2AFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBFCu;
        // 0x2afc00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC04u;
        goto label_2afc04;
    }
    ctx->pc = 0x2AFBFCu;
    SET_GPR_U32(ctx, 31, 0x2AFC04u);
    ctx->pc = 0x2AFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBFCu;
    // 0x2afc00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2AFBFCu, 0x2AFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC04u;
label_2afc04:
    // 0x2afc04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2afc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2afc08:
    // 0x2afc08: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2afc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_2afc0c:
    // 0x2afc0c: 0xc0e409a  jal         func_390268
label_2afc10:
    if (ctx->pc == 0x2AFC10u) {
        ctx->pc = 0x2AFC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC0Cu;
        // 0x2afc10: 0xafa30088  sw          $v1, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC14u;
        goto label_2afc14;
    }
    ctx->pc = 0x2AFC0Cu;
    SET_GPR_U32(ctx, 31, 0x2AFC14u);
    ctx->pc = 0x2AFC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC0Cu;
    // 0x2afc10: 0xafa30088  sw          $v1, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AFC0Cu, 0x2AFC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC14u;
label_2afc14:
    // 0x2afc14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2afc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2afc18:
    // 0x2afc18: 0xc0a34d6  jal         func_28D358
label_2afc1c:
    if (ctx->pc == 0x2AFC1Cu) {
        ctx->pc = 0x2AFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC18u;
        // 0x2afc1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC20u;
        goto label_2afc20;
    }
    ctx->pc = 0x2AFC18u;
    SET_GPR_U32(ctx, 31, 0x2AFC20u);
    ctx->pc = 0x2AFC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC18u;
    // 0x2afc1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2AFC18u, 0x2AFC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC20u;
label_2afc20:
    // 0x2afc20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2afc20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afc24:
    // 0x2afc24: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_2afc28:
    if (ctx->pc == 0x2AFC28u) {
        ctx->pc = 0x2AFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC24u;
        // 0x2afc28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC2Cu;
        goto label_2afc2c;
    }
    ctx->pc = 0x2AFC24u;
    {
        const bool branch_taken_0x2afc24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC24u;
        // 0x2afc28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc24) {
            ctx->pc = 0x2AFCE0u;
            goto label_2afce0;
        }
    }
    ctx->pc = 0x2AFC2Cu;
label_2afc2c:
    // 0x2afc2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2afc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afc30:
    // 0x2afc30: 0xc4800140  lwc1        $f0, 0x140($a0)
    ctx->pc = 0x2afc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2afc34:
    // 0x2afc34: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2afc34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2afc38:
    // 0x2afc38: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2afc38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2afc3c:
    // 0x2afc3c: 0x0  nop
    ctx->pc = 0x2afc3cu;
    // NOP
label_2afc40:
    // 0x2afc40: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
label_2afc44:
    if (ctx->pc == 0x2AFC44u) {
        ctx->pc = 0x2AFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC40u;
        // 0x2afc44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC48u;
        goto label_2afc48;
    }
    ctx->pc = 0x2AFC40u;
    {
        const bool branch_taken_0x2afc40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2afc40) {
            ctx->pc = 0x2AFC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFC40u;
            // 0x2afc44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFCE0u;
            goto label_2afce0;
        }
    }
    ctx->pc = 0x2AFC48u;
label_2afc48:
    // 0x2afc48: 0xc0a2fc0  jal         func_28BF00
label_2afc4c:
    if (ctx->pc == 0x2AFC4Cu) {
        ctx->pc = 0x2AFC50u;
        goto label_2afc50;
    }
    ctx->pc = 0x2AFC48u;
    SET_GPR_U32(ctx, 31, 0x2AFC50u);
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2AFC48u, 0x2AFC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC50u;
label_2afc50:
    // 0x2afc50: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2afc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2afc54:
    // 0x2afc54: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2afc54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2afc58:
    // 0x2afc58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2afc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2afc5c:
    // 0x2afc5c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2afc5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2afc60:
    // 0x2afc60: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2afc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2afc64:
    // 0x2afc64: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2afc64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2afc68:
    // 0x2afc68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2afc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2afc6c:
    // 0x2afc6c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2afc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2afc70:
    // 0x2afc70: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2afc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2afc74:
    // 0x2afc74: 0xc0888fa  jal         func_2223E8
label_2afc78:
    if (ctx->pc == 0x2AFC78u) {
        ctx->pc = 0x2AFC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC74u;
        // 0x2afc78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC7Cu;
        goto label_2afc7c;
    }
    ctx->pc = 0x2AFC74u;
    SET_GPR_U32(ctx, 31, 0x2AFC7Cu);
    ctx->pc = 0x2AFC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC74u;
    // 0x2afc78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x2AFC74u, 0x2AFC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC7Cu;
label_2afc7c:
    // 0x2afc7c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2afc7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afc80:
    // 0x2afc80: 0x16b70017  bne         $s5, $s7, . + 4 + (0x17 << 2)
label_2afc84:
    if (ctx->pc == 0x2AFC84u) {
        ctx->pc = 0x2AFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC80u;
        // 0x2afc84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC88u;
        goto label_2afc88;
    }
    ctx->pc = 0x2AFC80u;
    {
        const bool branch_taken_0x2afc80 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 23));
        ctx->pc = 0x2AFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC80u;
        // 0x2afc84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc80) {
            ctx->pc = 0x2AFCE0u;
            goto label_2afce0;
        }
    }
    ctx->pc = 0x2AFC88u;
label_2afc88:
    // 0x2afc88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2afc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afc8c:
    // 0x2afc8c: 0xc137826  jal         func_4DE098
label_2afc90:
    if (ctx->pc == 0x2AFC90u) {
        ctx->pc = 0x2AFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC8Cu;
        // 0x2afc90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC94u;
        goto label_2afc94;
    }
    ctx->pc = 0x2AFC8Cu;
    SET_GPR_U32(ctx, 31, 0x2AFC94u);
    ctx->pc = 0x2AFC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC8Cu;
    // 0x2afc90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2AFC8Cu, 0x2AFC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC94u;
label_2afc94:
    // 0x2afc94: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2afc94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2afc98:
    // 0x2afc98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2afc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2afc9c:
    // 0x2afc9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2afc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2afca0:
    // 0x2afca0: 0xc087420  jal         func_21D080
label_2afca4:
    if (ctx->pc == 0x2AFCA4u) {
        ctx->pc = 0x2AFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCA0u;
        // 0x2afca4: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFCA8u;
        goto label_2afca8;
    }
    ctx->pc = 0x2AFCA0u;
    SET_GPR_U32(ctx, 31, 0x2AFCA8u);
    ctx->pc = 0x2AFCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFCA0u;
    // 0x2afca4: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2AFCA0u, 0x2AFCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFCA8u;
label_2afca8:
    // 0x2afca8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2afca8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2afcac:
    // 0x2afcac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2afcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2afcb0:
    // 0x2afcb0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2afcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2afcb4:
    // 0x2afcb4: 0xc0cdb38  jal         func_336CE0
label_2afcb8:
    if (ctx->pc == 0x2AFCB8u) {
        ctx->pc = 0x2AFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCB4u;
        // 0x2afcb8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFCBCu;
        goto label_2afcbc;
    }
    ctx->pc = 0x2AFCB4u;
    SET_GPR_U32(ctx, 31, 0x2AFCBCu);
    ctx->pc = 0x2AFCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFCB4u;
    // 0x2afcb8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2AFCB4u, 0x2AFCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFCBCu;
label_2afcbc:
    // 0x2afcbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2afcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afcc0:
    // 0x2afcc0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2afcc0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2afcc4:
    // 0x2afcc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2afcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2afcc8:
    // 0x2afcc8: 0xc0a33f8  jal         func_28CFE0
label_2afccc:
    if (ctx->pc == 0x2AFCCCu) {
        ctx->pc = 0x2AFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCC8u;
        // 0x2afccc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFCD0u;
        goto label_2afcd0;
    }
    ctx->pc = 0x2AFCC8u;
    SET_GPR_U32(ctx, 31, 0x2AFCD0u);
    ctx->pc = 0x2AFCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFCC8u;
    // 0x2afccc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2AFCC8u, 0x2AFCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFCD0u;
label_2afcd0:
    // 0x2afcd0: 0x8e6201a8  lw          $v0, 0x1A8($s3)
    ctx->pc = 0x2afcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_2afcd4:
    // 0x2afcd4: 0xa2350037  sb          $s5, 0x37($s1)
    ctx->pc = 0x2afcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 21));
label_2afcd8:
    // 0x2afcd8: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2afcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2afcdc:
    // 0x2afcdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2afcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2afce0:
    // 0x2afce0: 0xc087502  jal         func_21D408
label_2afce4:
    if (ctx->pc == 0x2AFCE4u) {
        ctx->pc = 0x2AFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCE0u;
        // 0x2afce4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFCE8u;
        goto label_2afce8;
    }
    ctx->pc = 0x2AFCE0u;
    SET_GPR_U32(ctx, 31, 0x2AFCE8u);
    ctx->pc = 0x2AFCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFCE0u;
    // 0x2afce4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AFCE0u, 0x2AFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFCE8u;
label_2afce8:
    // 0x2afce8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2afce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afcec:
    // 0x2afcec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2afcecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afcf0:
    // 0x2afcf0: 0xc0a3fde  jal         func_28FF78
label_2afcf4:
    if (ctx->pc == 0x2AFCF4u) {
        ctx->pc = 0x2AFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCF0u;
        // 0x2afcf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFCF8u;
        goto label_2afcf8;
    }
    ctx->pc = 0x2AFCF0u;
    SET_GPR_U32(ctx, 31, 0x2AFCF8u);
    ctx->pc = 0x2AFCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFCF0u;
    // 0x2afcf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x2AFCF0u, 0x2AFCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFCF8u;
label_2afcf8:
    // 0x2afcf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2afcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afcfc:
    // 0x2afcfc: 0xc0a3032  jal         func_28C0C8
label_2afd00:
    if (ctx->pc == 0x2AFD00u) {
        ctx->pc = 0x2AFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCFCu;
        // 0x2afd00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD04u;
        goto label_2afd04;
    }
    ctx->pc = 0x2AFCFCu;
    SET_GPR_U32(ctx, 31, 0x2AFD04u);
    ctx->pc = 0x2AFD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFCFCu;
    // 0x2afd00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x2AFCFCu, 0x2AFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD04u;
label_2afd04:
    // 0x2afd04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2afd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afd08:
    // 0x2afd08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2afd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2afd0c:
    // 0x2afd0c: 0xc0a3050  jal         func_28C140
label_2afd10:
    if (ctx->pc == 0x2AFD10u) {
        ctx->pc = 0x2AFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD0Cu;
        // 0x2afd10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD14u;
        goto label_2afd14;
    }
    ctx->pc = 0x2AFD0Cu;
    SET_GPR_U32(ctx, 31, 0x2AFD14u);
    ctx->pc = 0x2AFD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD0Cu;
    // 0x2afd10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C140u, 0x2AFD0Cu, 0x2AFD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD14u;
label_2afd14:
    // 0x2afd14: 0x92e202d4  lbu         $v0, 0x2D4($s7)
    ctx->pc = 0x2afd14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 724)));
label_2afd18:
    // 0x2afd18: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
label_2afd1c:
    if (ctx->pc == 0x2AFD1Cu) {
        ctx->pc = 0x2AFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD18u;
        // 0x2afd1c: 0xaee001ec  sw          $zero, 0x1EC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD20u;
        goto label_2afd20;
    }
    ctx->pc = 0x2AFD18u;
    {
        const bool branch_taken_0x2afd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD18u;
        // 0x2afd1c: 0xaee001ec  sw          $zero, 0x1EC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd18) {
            ctx->pc = 0x2B00E0u;
            goto label_2b00e0;
        }
    }
    ctx->pc = 0x2AFD20u;
label_2afd20:
    // 0x2afd20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2afd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afd24:
    // 0x2afd24: 0xc0a4162  jal         func_290588
label_2afd28:
    if (ctx->pc == 0x2AFD28u) {
        ctx->pc = 0x2AFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD24u;
        // 0x2afd28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD2Cu;
        goto label_2afd2c;
    }
    ctx->pc = 0x2AFD24u;
    SET_GPR_U32(ctx, 31, 0x2AFD2Cu);
    ctx->pc = 0x2AFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD24u;
    // 0x2afd28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x2AFD24u, 0x2AFD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD2Cu;
label_2afd2c:
    // 0x2afd2c: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
label_2afd30:
    if (ctx->pc == 0x2AFD30u) {
        ctx->pc = 0x2AFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD2Cu;
        // 0x2afd30: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD34u;
        goto label_2afd34;
    }
    ctx->pc = 0x2AFD2Cu;
    {
        const bool branch_taken_0x2afd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD2Cu;
        // 0x2afd30: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd2c) {
            ctx->pc = 0x2B00E0u;
            goto label_2b00e0;
        }
    }
    ctx->pc = 0x2AFD34u;
label_2afd34:
    // 0x2afd34: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2afd34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2afd38:
    // 0x2afd38: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2afd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2afd3c:
    // 0x2afd3c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2afd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2afd40:
    // 0x2afd40: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2afd40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2afd44:
    // 0x2afd44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2afd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2afd48:
    // 0x2afd48: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2afd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2afd4c:
    // 0x2afd4c: 0xc0cd8ec  jal         func_3363B0
label_2afd50:
    if (ctx->pc == 0x2AFD50u) {
        ctx->pc = 0x2AFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD4Cu;
        // 0x2afd50: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD54u;
        goto label_2afd54;
    }
    ctx->pc = 0x2AFD4Cu;
    SET_GPR_U32(ctx, 31, 0x2AFD54u);
    ctx->pc = 0x2AFD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD4Cu;
    // 0x2afd50: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2AFD4Cu, 0x2AFD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD54u;
label_2afd54:
    // 0x2afd54: 0xc0cd766  jal         func_335D98
label_2afd58:
    if (ctx->pc == 0x2AFD58u) {
        ctx->pc = 0x2AFD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD54u;
        // 0x2afd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD5Cu;
        goto label_2afd5c;
    }
    ctx->pc = 0x2AFD54u;
    SET_GPR_U32(ctx, 31, 0x2AFD5Cu);
    ctx->pc = 0x2AFD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD54u;
    // 0x2afd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2AFD54u, 0x2AFD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD5Cu;
label_2afd5c:
    // 0x2afd5c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2afd5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2afd60:
    // 0x2afd60: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2afd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2afd64:
    // 0x2afd64: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2afd64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2afd68:
    // 0x2afd68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2afd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2afd6c:
    // 0x2afd6c: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2afd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2afd70:
    // 0x2afd70: 0x4600a881  sub.s       $f2, $f21, $f0
    ctx->pc = 0x2afd70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_2afd74:
    // 0x2afd74: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2afd74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2afd78:
    // 0x2afd78: 0x0  nop
    ctx->pc = 0x2afd78u;
    // NOP
label_2afd7c:
    // 0x2afd7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2afd80:
    if (ctx->pc == 0x2AFD80u) {
        ctx->pc = 0x2AFD84u;
        goto label_2afd84;
    }
    ctx->pc = 0x2AFD7Cu;
    {
        const bool branch_taken_0x2afd7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2afd7c) {
            ctx->pc = 0x2AFD98u;
            goto label_2afd98;
        }
    }
    ctx->pc = 0x2AFD84u;
label_2afd84:
    // 0x2afd84: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2afd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2afd88:
    // 0x2afd88: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2afd88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2afd8c:
    // 0x2afd8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afd8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2afd90:
    // 0x2afd90: 0x0  nop
    ctx->pc = 0x2afd90u;
    // NOP
label_2afd94:
    // 0x2afd94: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2afd94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2afd98:
    // 0x2afd98: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2afd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_2afd9c:
    // 0x2afd9c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2afd9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2afda0:
    // 0x2afda0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2afda4:
    // 0x2afda4: 0x0  nop
    ctx->pc = 0x2afda4u;
    // NOP
label_2afda8:
    // 0x2afda8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2afda8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2afdac:
    // 0x2afdac: 0x0  nop
    ctx->pc = 0x2afdacu;
    // NOP
label_2afdb0:
    // 0x2afdb0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2afdb4:
    if (ctx->pc == 0x2AFDB4u) {
        ctx->pc = 0x2AFDB8u;
        goto label_2afdb8;
    }
    ctx->pc = 0x2AFDB0u;
    {
        const bool branch_taken_0x2afdb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2afdb0) {
            ctx->pc = 0x2AFDCCu;
            goto label_2afdcc;
        }
    }
    ctx->pc = 0x2AFDB8u;
label_2afdb8:
    // 0x2afdb8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2afdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2afdbc:
    // 0x2afdbc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2afdbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2afdc0:
    // 0x2afdc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afdc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2afdc4:
    // 0x2afdc4: 0x0  nop
    ctx->pc = 0x2afdc4u;
    // NOP
label_2afdc8:
    // 0x2afdc8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2afdc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2afdcc:
    // 0x2afdcc: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2afdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_2afdd0:
    // 0x2afdd0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2afdd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2afdd4:
    // 0x2afdd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2afdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2afdd8:
    // 0x2afdd8: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x2afdd8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
label_2afddc:
    // 0x2afddc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2afddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2afde0:
    // 0x2afde0: 0x0  nop
    ctx->pc = 0x2afde0u;
    // NOP
label_2afde4:
    // 0x2afde4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2afde8:
    if (ctx->pc == 0x2AFDE8u) {
        ctx->pc = 0x2AFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDE4u;
        // 0x2afde8: 0xa2350037  sb          $s5, 0x37($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFDECu;
        goto label_2afdec;
    }
    ctx->pc = 0x2AFDE4u;
    {
        const bool branch_taken_0x2afde4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2afde4) {
            ctx->pc = 0x2AFDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFDE4u;
            // 0x2afde8: 0xa2350037  sb          $s5, 0x37($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFDECu;
            goto label_2afdec;
        }
    }
    ctx->pc = 0x2AFDECu;
label_2afdec:
    // 0x2afdec: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2afdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2afdf0:
    // 0x2afdf0: 0xe6350028  swc1        $f21, 0x28($s1)
    ctx->pc = 0x2afdf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2afdf4:
    // 0x2afdf4: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2afdf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2afdf8:
    // 0x2afdf8: 0x0  nop
    ctx->pc = 0x2afdf8u;
    // NOP
label_2afdfc:
    // 0x2afdfc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2afe00:
    if (ctx->pc == 0x2AFE00u) {
        ctx->pc = 0x2AFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDFCu;
        // 0x2afe00: 0x8e7201a8  lw          $s2, 0x1A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE04u;
        goto label_2afe04;
    }
    ctx->pc = 0x2AFDFCu;
    {
        const bool branch_taken_0x2afdfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDFCu;
        // 0x2afe00: 0x8e7201a8  lw          $s2, 0x1A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdfc) {
            ctx->pc = 0x2AFE24u;
            goto label_2afe24;
        }
    }
    ctx->pc = 0x2AFE04u;
label_2afe04:
    // 0x2afe04: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2afe04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_2afe08:
    // 0x2afe08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2afe0c:
    if (ctx->pc == 0x2AFE0Cu) {
        ctx->pc = 0x2AFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE08u;
        // 0x2afe0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE10u;
        goto label_2afe10;
    }
    ctx->pc = 0x2AFE08u;
    {
        const bool branch_taken_0x2afe08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE08u;
        // 0x2afe0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe08) {
            ctx->pc = 0x2AFE1Cu;
            goto label_2afe1c;
        }
    }
    ctx->pc = 0x2AFE10u;
label_2afe10:
    // 0x2afe10: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2afe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2afe14:
    // 0x2afe14: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2afe14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2afe18:
    // 0x2afe18: 0x2a2180a  movz        $v1, $s5, $v0
    ctx->pc = 0x2afe18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
label_2afe1c:
    // 0x2afe1c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2afe20:
    if (ctx->pc == 0x2AFE20u) {
        ctx->pc = 0x2AFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE1Cu;
        // 0x2afe20: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE24u;
        goto label_2afe24;
    }
    ctx->pc = 0x2AFE1Cu;
    {
        const bool branch_taken_0x2afe1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afe1c) {
            ctx->pc = 0x2AFE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFE1Cu;
            // 0x2afe20: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFE30u;
            goto label_2afe30;
        }
    }
    ctx->pc = 0x2AFE24u;
label_2afe24:
    // 0x2afe24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2afe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afe28:
    // 0x2afe28: 0xa2220037  sb          $v0, 0x37($s1)
    ctx->pc = 0x2afe28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
label_2afe2c:
    // 0x2afe2c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2afe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2afe30:
    // 0x2afe30: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x2afe30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_2afe34:
    // 0x2afe34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2afe38:
    if (ctx->pc == 0x2AFE38u) {
        ctx->pc = 0x2AFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE34u;
        // 0x2afe38: 0xae320024  sw          $s2, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE3Cu;
        goto label_2afe3c;
    }
    ctx->pc = 0x2AFE34u;
    {
        const bool branch_taken_0x2afe34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE34u;
        // 0x2afe38: 0xae320024  sw          $s2, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe34) {
            ctx->pc = 0x2AFE4Cu;
            goto label_2afe4c;
        }
    }
    ctx->pc = 0x2AFE3Cu;
label_2afe3c:
    // 0x2afe3c: 0x92230037  lbu         $v1, 0x37($s1)
    ctx->pc = 0x2afe3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
label_2afe40:
    // 0x2afe40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2afe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afe44:
    // 0x2afe44: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_2afe48:
    if (ctx->pc == 0x2AFE48u) {
        ctx->pc = 0x2AFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE44u;
        // 0x2afe48: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE4Cu;
        goto label_2afe4c;
    }
    ctx->pc = 0x2AFE44u;
    {
        const bool branch_taken_0x2afe44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2afe44) {
            ctx->pc = 0x2AFE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFE44u;
            // 0x2afe48: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFE60u;
            goto label_2afe60;
        }
    }
    ctx->pc = 0x2AFE4Cu;
label_2afe4c:
    // 0x2afe4c: 0x26c200fa  addiu       $v0, $s6, 0xFA
    ctx->pc = 0x2afe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 250));
label_2afe50:
    // 0x2afe50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2afe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afe54:
    // 0x2afe54: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2afe54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2afe58:
    // 0x2afe58: 0xa2230037  sb          $v1, 0x37($s1)
    ctx->pc = 0x2afe58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 3));
label_2afe5c:
    // 0x2afe5c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2afe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2afe60:
    // 0x2afe60: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x2afe60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_2afe64:
    // 0x2afe64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2afe68:
    if (ctx->pc == 0x2AFE68u) {
        ctx->pc = 0x2AFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE64u;
        // 0x2afe68: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE6Cu;
        goto label_2afe6c;
    }
    ctx->pc = 0x2AFE64u;
    {
        const bool branch_taken_0x2afe64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE64u;
        // 0x2afe68: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe64) {
            ctx->pc = 0x2AFE90u;
            goto label_2afe90;
        }
    }
    ctx->pc = 0x2AFE6Cu;
label_2afe6c:
    // 0x2afe6c: 0x24050fa0  addiu       $a1, $zero, 0xFA0
    ctx->pc = 0x2afe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2afe70:
    // 0x2afe70: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2afe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2afe74:
    // 0x2afe74: 0xc0cd4fc  jal         func_3353F0
label_2afe78:
    if (ctx->pc == 0x2AFE78u) {
        ctx->pc = 0x2AFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE74u;
        // 0x2afe78: 0x24061194  addiu       $a2, $zero, 0x1194 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE7Cu;
        goto label_2afe7c;
    }
    ctx->pc = 0x2AFE74u;
    SET_GPR_U32(ctx, 31, 0x2AFE7Cu);
    ctx->pc = 0x2AFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE74u;
    // 0x2afe78: 0x24061194  addiu       $a2, $zero, 0x1194 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2AFE74u, 0x2AFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE7Cu;
label_2afe7c:
    // 0x2afe7c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2afe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2afe80:
    // 0x2afe80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2afe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2afe84:
    // 0x2afe84: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2afe84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2afe88:
    // 0x2afe88: 0xc0abe4a  jal         func_2AF928
label_2afe8c:
    if (ctx->pc == 0x2AFE8Cu) {
        ctx->pc = 0x2AFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE88u;
        // 0x2afe8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE90u;
        goto label_2afe90;
    }
    ctx->pc = 0x2AFE88u;
    SET_GPR_U32(ctx, 31, 0x2AFE90u);
    ctx->pc = 0x2AFE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE88u;
    // 0x2afe8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF928u, 0x2AFE88u, 0x2AFE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE90u;
label_2afe90:
    // 0x2afe90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2afe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afe94:
    // 0x2afe94: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2afe94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2afe98:
    // 0x2afe98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2afe9c:
    if (ctx->pc == 0x2AFE9Cu) {
        ctx->pc = 0x2AFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE98u;
        // 0x2afe9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFEA0u;
        goto label_2afea0;
    }
    ctx->pc = 0x2AFE98u;
    {
        const bool branch_taken_0x2afe98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE98u;
        // 0x2afe9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe98) {
            ctx->pc = 0x2AFEACu;
            goto label_2afeac;
        }
    }
    ctx->pc = 0x2AFEA0u;
label_2afea0:
    // 0x2afea0: 0x92220037  lbu         $v0, 0x37($s1)
    ctx->pc = 0x2afea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
label_2afea4:
    // 0x2afea4: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
label_2afea8:
    if (ctx->pc == 0x2AFEA8u) {
        ctx->pc = 0x2AFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEA4u;
        // 0x2afea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFEACu;
        goto label_2afeac;
    }
    ctx->pc = 0x2AFEA4u;
    {
        const bool branch_taken_0x2afea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEA4u;
        // 0x2afea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afea4) {
            ctx->pc = 0x2B04B4u;
            goto label_2b04b4;
        }
    }
    ctx->pc = 0x2AFEACu;
label_2afeac:
    // 0x2afeac: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2afeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2afeb0:
    // 0x2afeb0: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
label_2afeb4:
    if (ctx->pc == 0x2AFEB4u) {
        ctx->pc = 0x2AFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEB0u;
        // 0x2afeb4: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFEB8u;
        goto label_2afeb8;
    }
    ctx->pc = 0x2AFEB0u;
    {
        const bool branch_taken_0x2afeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEB0u;
        // 0x2afeb4: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afeb0) {
            ctx->pc = 0x2B00E0u;
            goto label_2b00e0;
        }
    }
    ctx->pc = 0x2AFEB8u;
label_2afeb8:
    // 0x2afeb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2afeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2afebc:
    // 0x2afebc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2afec0:
    if (ctx->pc == 0x2AFEC0u) {
        ctx->pc = 0x2AFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEBCu;
        // 0x2afec0: 0x24160004  addiu       $s6, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFEC4u;
        goto label_2afec4;
    }
    ctx->pc = 0x2AFEBCu;
    {
        const bool branch_taken_0x2afebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEBCu;
        // 0x2afec0: 0x24160004  addiu       $s6, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afebc) {
            ctx->pc = 0x2AFEE8u;
            goto label_2afee8;
        }
    }
    ctx->pc = 0x2AFEC4u;
label_2afec4:
    // 0x2afec4: 0xc088be8  jal         func_222FA0
label_2afec8:
    if (ctx->pc == 0x2AFEC8u) {
        ctx->pc = 0x2AFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEC4u;
        // 0x2afec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFECCu;
        goto label_2afecc;
    }
    ctx->pc = 0x2AFEC4u;
    SET_GPR_U32(ctx, 31, 0x2AFECCu);
    ctx->pc = 0x2AFEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFEC4u;
    // 0x2afec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FA0u, 0x2AFEC4u, 0x2AFECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFECCu;
label_2afecc:
    // 0x2afecc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2afeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2afed0:
    // 0x2afed0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2afed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2afed4:
    // 0x2afed4: 0x0  nop
    ctx->pc = 0x2afed4u;
    // NOP
label_2afed8:
    // 0x2afed8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2afed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2afedc:
    // 0x2afedc: 0x0  nop
    ctx->pc = 0x2afedcu;
    // NOP
label_2afee0:
    // 0x2afee0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2afee4:
    if (ctx->pc == 0x2AFEE4u) {
        ctx->pc = 0x2AFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEE0u;
        // 0x2afee4: 0x24160005  addiu       $s6, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFEE8u;
        goto label_2afee8;
    }
    ctx->pc = 0x2AFEE0u;
    {
        const bool branch_taken_0x2afee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2afee0) {
            ctx->pc = 0x2AFEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFEE0u;
            // 0x2afee4: 0x24160005  addiu       $s6, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFEE8u;
            goto label_2afee8;
        }
    }
    ctx->pc = 0x2AFEE8u;
label_2afee8:
    // 0x2afee8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2afee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afeec:
    // 0x2afeec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2afeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2afef0:
    // 0x2afef0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2afef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2afef4:
    // 0x2afef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2afef8:
    // 0x2afef8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2afef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2afefc:
    // 0x2afefc: 0xc4540140  lwc1        $f20, 0x140($v0)
    ctx->pc = 0x2afefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2aff00:
    // 0x2aff00: 0xc0a43aa  jal         func_290EA8
label_2aff04:
    if (ctx->pc == 0x2AFF04u) {
        ctx->pc = 0x2AFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF00u;
        // 0x2aff04: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF08u;
        goto label_2aff08;
    }
    ctx->pc = 0x2AFF00u;
    SET_GPR_U32(ctx, 31, 0x2AFF08u);
    ctx->pc = 0x2AFF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF00u;
    // 0x2aff04: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290EA8u, 0x2AFF00u, 0x2AFF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF08u;
label_2aff08:
    // 0x2aff08: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2aff08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2aff0c:
    // 0x2aff0c: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x2aff0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2aff10:
    // 0x2aff10: 0x0  nop
    ctx->pc = 0x2aff10u;
    // NOP
label_2aff14:
    // 0x2aff14: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2aff18:
    if (ctx->pc == 0x2AFF18u) {
        ctx->pc = 0x2AFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF14u;
        // 0x2aff18: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF1Cu;
        goto label_2aff1c;
    }
    ctx->pc = 0x2AFF14u;
    {
        const bool branch_taken_0x2aff14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF14u;
        // 0x2aff18: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff14) {
            ctx->pc = 0x2AFF48u;
            goto label_2aff48;
        }
    }
    ctx->pc = 0x2AFF1Cu;
label_2aff1c:
    // 0x2aff1c: 0xc08a08a  jal         func_228228
label_2aff20:
    if (ctx->pc == 0x2AFF20u) {
        ctx->pc = 0x2AFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF1Cu;
        // 0x2aff20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF24u;
        goto label_2aff24;
    }
    ctx->pc = 0x2AFF1Cu;
    SET_GPR_U32(ctx, 31, 0x2AFF24u);
    ctx->pc = 0x2AFF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF1Cu;
    // 0x2aff20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2AFF1Cu, 0x2AFF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF24u;
label_2aff24:
    // 0x2aff24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aff24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aff28:
    // 0x2aff28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2aff28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2aff2c:
    // 0x2aff2c: 0x92230035  lbu         $v1, 0x35($s1)
    ctx->pc = 0x2aff2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_2aff30:
    // 0x2aff30: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2aff34:
    if (ctx->pc == 0x2AFF34u) {
        ctx->pc = 0x2AFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF30u;
        // 0x2aff34: 0x82800a  movz        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF38u;
        goto label_2aff38;
    }
    ctx->pc = 0x2AFF30u;
    {
        const bool branch_taken_0x2aff30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF30u;
        // 0x2aff34: 0x82800a  movz        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff30) {
            ctx->pc = 0x2AFF48u;
            goto label_2aff48;
        }
    }
    ctx->pc = 0x2AFF38u;
label_2aff38:
    // 0x2aff38: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2aff38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_2aff3c:
    // 0x2aff3c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_2aff40:
    if (ctx->pc == 0x2AFF40u) {
        ctx->pc = 0x2AFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF3Cu;
        // 0x2aff40: 0xa2240035  sb          $a0, 0x35($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF44u;
        goto label_2aff44;
    }
    ctx->pc = 0x2AFF3Cu;
    {
        const bool branch_taken_0x2aff3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff3c) {
            ctx->pc = 0x2AFF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF3Cu;
            // 0x2aff40: 0xa2240035  sb          $a0, 0x35($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFF48u;
            goto label_2aff48;
        }
    }
    ctx->pc = 0x2AFF44u;
label_2aff44:
    // 0x2aff44: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2aff44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aff48:
    // 0x2aff48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aff4c:
    // 0x2aff4c: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
label_2aff50:
    if (ctx->pc == 0x2AFF50u) {
        ctx->pc = 0x2AFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF4Cu;
        // 0x2aff50: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF54u;
        goto label_2aff54;
    }
    ctx->pc = 0x2AFF4Cu;
    {
        const bool branch_taken_0x2aff4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aff4c) {
            ctx->pc = 0x2AFF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF4Cu;
            // 0x2aff50: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFF74u;
            goto label_2aff74;
        }
    }
    ctx->pc = 0x2AFF54u;
label_2aff54:
    // 0x2aff54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aff54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aff58:
    // 0x2aff58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2aff58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2aff5c:
    // 0x2aff5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aff5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aff60:
    // 0x2aff60: 0xc0888a2  jal         func_222288
label_2aff64:
    if (ctx->pc == 0x2AFF64u) {
        ctx->pc = 0x2AFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF60u;
        // 0x2aff64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF68u;
        goto label_2aff68;
    }
    ctx->pc = 0x2AFF60u;
    SET_GPR_U32(ctx, 31, 0x2AFF68u);
    ctx->pc = 0x2AFF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF60u;
    // 0x2aff64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2AFF60u, 0x2AFF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF68u;
label_2aff68:
    // 0x2aff68: 0x1050005d  beq         $v0, $s0, . + 4 + (0x5D << 2)
label_2aff6c:
    if (ctx->pc == 0x2AFF6Cu) {
        ctx->pc = 0x2AFF70u;
        goto label_2aff70;
    }
    ctx->pc = 0x2AFF68u;
    {
        const bool branch_taken_0x2aff68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2aff68) {
            ctx->pc = 0x2B00E0u;
            goto label_2b00e0;
        }
    }
    ctx->pc = 0x2AFF70u;
label_2aff70:
    // 0x2aff70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2aff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2aff74:
    // 0x2aff74: 0x9043028d  lbu         $v1, 0x28D($v0)
    ctx->pc = 0x2aff74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 653)));
label_2aff78:
    // 0x2aff78: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2aff7c:
    if (ctx->pc == 0x2AFF7Cu) {
        ctx->pc = 0x2AFF80u;
        goto label_2aff80;
    }
    ctx->pc = 0x2AFF78u;
    {
        const bool branch_taken_0x2aff78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aff78) {
            ctx->pc = 0x2AFF9Cu;
            goto label_2aff9c;
        }
    }
    ctx->pc = 0x2AFF80u;
label_2aff80:
    // 0x2aff80: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2aff80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_2aff84:
    // 0x2aff84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aff84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2aff88:
    // 0x2aff88: 0x0  nop
    ctx->pc = 0x2aff88u;
    // NOP
label_2aff8c:
    // 0x2aff8c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2aff8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2aff90:
    // 0x2aff90: 0x0  nop
    ctx->pc = 0x2aff90u;
    // NOP
label_2aff94:
    // 0x2aff94: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_2aff98:
    if (ctx->pc == 0x2AFF98u) {
        ctx->pc = 0x2AFF9Cu;
        goto label_2aff9c;
    }
    ctx->pc = 0x2AFF94u;
    {
        const bool branch_taken_0x2aff94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aff94) {
            ctx->pc = 0x2AFFE8u;
            goto label_2affe8;
        }
    }
    ctx->pc = 0x2AFF9Cu;
label_2aff9c:
    // 0x2aff9c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2aff9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2affa0:
    // 0x2affa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2affa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2affa4:
    // 0x2affa4: 0x0  nop
    ctx->pc = 0x2affa4u;
    // NOP
label_2affa8:
    // 0x2affa8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2affa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2affac:
    // 0x2affac: 0x0  nop
    ctx->pc = 0x2affacu;
    // NOP
label_2affb0:
    // 0x2affb0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_2affb4:
    if (ctx->pc == 0x2AFFB4u) {
        ctx->pc = 0x2AFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFB0u;
        // 0x2affb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFFB8u;
        goto label_2affb8;
    }
    ctx->pc = 0x2AFFB0u;
    {
        const bool branch_taken_0x2affb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFB0u;
        // 0x2affb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affb0) {
            ctx->pc = 0x2AFFE8u;
            goto label_2affe8;
        }
    }
    ctx->pc = 0x2AFFB8u;
label_2affb8:
    // 0x2affb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2affb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2affbc:
    // 0x2affbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2affbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2affc0:
    // 0x2affc0: 0xc0888a2  jal         func_222288
label_2affc4:
    if (ctx->pc == 0x2AFFC4u) {
        ctx->pc = 0x2AFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFC0u;
        // 0x2affc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFFC8u;
        goto label_2affc8;
    }
    ctx->pc = 0x2AFFC0u;
    SET_GPR_U32(ctx, 31, 0x2AFFC8u);
    ctx->pc = 0x2AFFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFFC0u;
    // 0x2affc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2AFFC0u, 0x2AFFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFC8u;
label_2affc8:
    // 0x2affc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2affc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2affcc:
    // 0x2affcc: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_2affd0:
    if (ctx->pc == 0x2AFFD0u) {
        ctx->pc = 0x2AFFD4u;
        goto label_2affd4;
    }
    ctx->pc = 0x2AFFCCu;
    {
        const bool branch_taken_0x2affcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2affcc) {
            ctx->pc = 0x2AFFE8u;
            goto label_2affe8;
        }
    }
    ctx->pc = 0x2AFFD4u;
label_2affd4:
    // 0x2affd4: 0x8ee3020c  lw          $v1, 0x20C($s7)
    ctx->pc = 0x2affd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 524)));
label_2affd8:
    // 0x2affd8: 0x906200dc  lbu         $v0, 0xDC($v1)
    ctx->pc = 0x2affd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 220)));
label_2affdc:
    // 0x2affdc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2affdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2affe0:
    // 0x2affe0: 0x5445012d  bnel        $v0, $a1, . + 4 + (0x12D << 2)
label_2affe4:
    if (ctx->pc == 0x2AFFE4u) {
        ctx->pc = 0x2AFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFE0u;
        // 0x2affe4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFFE8u;
        goto label_2affe8;
    }
    ctx->pc = 0x2AFFE0u;
    {
        const bool branch_taken_0x2affe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2affe0) {
            ctx->pc = 0x2AFFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFFE0u;
            // 0x2affe4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0498u;
            goto label_2b0498;
        }
    }
    ctx->pc = 0x2AFFE8u;
label_2affe8:
    // 0x2affe8: 0xc08a200  jal         func_228800
label_2affec:
    if (ctx->pc == 0x2AFFECu) {
        ctx->pc = 0x2AFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFE8u;
        // 0x2affec: 0x8e8400cc  lw          $a0, 0xCC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFFF0u;
        goto label_2afff0;
    }
    ctx->pc = 0x2AFFE8u;
    SET_GPR_U32(ctx, 31, 0x2AFFF0u);
    ctx->pc = 0x2AFFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFFE8u;
    // 0x2affec: 0x8e8400cc  lw          $a0, 0xCC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2AFFE8u, 0x2AFFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFF0u;
label_2afff0:
    // 0x2afff0: 0x9042011b  lbu         $v0, 0x11B($v0)
    ctx->pc = 0x2afff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2afff4:
    // 0x2afff4: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2afff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2afff8:
    // 0x2afff8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2afff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2afffc:
    // 0x2afffc: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2afffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_2b0000:
    // 0x2b0000: 0x24a24b00  addiu       $v0, $a1, 0x4B00
    ctx->pc = 0x2b0000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2b0004:
    // 0x2b0004: 0x87c50002  lh          $a1, 0x2($fp)
    ctx->pc = 0x2b0004u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2b0008:
    // 0x2b0008: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b0008u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b000c:
    // 0x2b000c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b000cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b0010:
    // 0x2b0010: 0xc0cd8ec  jal         func_3363B0
label_2b0014:
    if (ctx->pc == 0x2B0014u) {
        ctx->pc = 0x2B0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0010u;
        // 0x2b0014: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0018u;
        goto label_2b0018;
    }
    ctx->pc = 0x2B0010u;
    SET_GPR_U32(ctx, 31, 0x2B0018u);
    ctx->pc = 0x2B0014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0010u;
    // 0x2b0014: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2B0010u, 0x2B0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0018u;
label_2b0018:
    // 0x2b0018: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2b0018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b001c:
    // 0x2b001c: 0xc0cd780  jal         func_335E00
label_2b0020:
    if (ctx->pc == 0x2B0020u) {
        ctx->pc = 0x2B0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B001Cu;
        // 0x2b0020: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0024u;
        goto label_2b0024;
    }
    ctx->pc = 0x2B001Cu;
    SET_GPR_U32(ctx, 31, 0x2B0024u);
    ctx->pc = 0x2B0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B001Cu;
    // 0x2b0020: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2B001Cu, 0x2B0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0024u;
label_2b0024:
    // 0x2b0024: 0xc0cd742  jal         func_335D08
label_2b0028:
    if (ctx->pc == 0x2B0028u) {
        ctx->pc = 0x2B0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0024u;
        // 0x2b0028: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B002Cu;
        goto label_2b002c;
    }
    ctx->pc = 0x2B0024u;
    SET_GPR_U32(ctx, 31, 0x2B002Cu);
    ctx->pc = 0x2B0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0024u;
    // 0x2b0028: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2B0024u, 0x2B002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B002Cu;
label_2b002c:
    // 0x2b002c: 0xc0a7ace  jal         func_29EB38
label_2b0030:
    if (ctx->pc == 0x2B0030u) {
        ctx->pc = 0x2B0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B002Cu;
        // 0x2b0030: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0034u;
        goto label_2b0034;
    }
    ctx->pc = 0x2B002Cu;
    SET_GPR_U32(ctx, 31, 0x2B0034u);
    ctx->pc = 0x2B0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B002Cu;
    // 0x2b0030: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB38u, 0x2B002Cu, 0x2B0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0034u;
label_2b0034:
    // 0x2b0034: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2b0034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0038:
    // 0x2b0038: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2b0038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b003c:
    // 0x2b003c: 0x0  nop
    ctx->pc = 0x2b003cu;
    // NOP
label_2b0040:
    // 0x2b0040: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
label_2b0044:
    if (ctx->pc == 0x2B0044u) {
        ctx->pc = 0x2B0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0040u;
        // 0x2b0044: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0048u;
        goto label_2b0048;
    }
    ctx->pc = 0x2B0040u;
    {
        const bool branch_taken_0x2b0040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0040u;
        // 0x2b0044: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0040) {
            ctx->pc = 0x2B01F0u;
            goto label_2b01f0;
        }
    }
    ctx->pc = 0x2B0048u;
label_2b0048:
    // 0x2b0048: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2b0048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b004c:
    // 0x2b004c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b004cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b0050:
    // 0x2b0050: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b0054:
    if (ctx->pc == 0x2B0054u) {
        ctx->pc = 0x2B0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0050u;
        // 0x2b0054: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0058u;
        goto label_2b0058;
    }
    ctx->pc = 0x2B0050u;
    {
        const bool branch_taken_0x2b0050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0050u;
        // 0x2b0054: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0050) {
            ctx->pc = 0x2B0068u;
            goto label_2b0068;
        }
    }
    ctx->pc = 0x2B0058u;
label_2b0058:
    // 0x2b0058: 0x92230035  lbu         $v1, 0x35($s1)
    ctx->pc = 0x2b0058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_2b005c:
    // 0x2b005c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0060:
    // 0x2b0060: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2b0064:
    if (ctx->pc == 0x2B0064u) {
        ctx->pc = 0x2B0068u;
        goto label_2b0068;
    }
    ctx->pc = 0x2B0060u;
    {
        const bool branch_taken_0x2b0060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0060) {
            ctx->pc = 0x2B006Cu;
            goto label_2b006c;
        }
    }
    ctx->pc = 0x2B0068u;
label_2b0068:
    // 0x2b0068: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b0068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b006c:
    // 0x2b006c: 0x10800060  beqz        $a0, . + 4 + (0x60 << 2)
label_2b0070:
    if (ctx->pc == 0x2B0070u) {
        ctx->pc = 0x2B0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B006Cu;
        // 0x2b0070: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0074u;
        goto label_2b0074;
    }
    ctx->pc = 0x2B006Cu;
    {
        const bool branch_taken_0x2b006c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B006Cu;
        // 0x2b0070: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b006c) {
            ctx->pc = 0x2B01F0u;
            goto label_2b01f0;
        }
    }
    ctx->pc = 0x2B0074u;
label_2b0074:
    // 0x2b0074: 0xc0a3fa4  jal         func_28FE90
label_2b0078:
    if (ctx->pc == 0x2B0078u) {
        ctx->pc = 0x2B0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0074u;
        // 0x2b0078: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B007Cu;
        goto label_2b007c;
    }
    ctx->pc = 0x2B0074u;
    SET_GPR_U32(ctx, 31, 0x2B007Cu);
    ctx->pc = 0x2B0078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0074u;
    // 0x2b0078: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2B0074u, 0x2B007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B007Cu;
label_2b007c:
    // 0x2b007c: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x2b007cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_2b0080:
    // 0x2b0080: 0xc0e409a  jal         func_390268
label_2b0084:
    if (ctx->pc == 0x2B0084u) {
        ctx->pc = 0x2B0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0080u;
        // 0x2b0084: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0088u;
        goto label_2b0088;
    }
    ctx->pc = 0x2B0080u;
    SET_GPR_U32(ctx, 31, 0x2B0088u);
    ctx->pc = 0x2B0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0080u;
    // 0x2b0084: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B0080u, 0x2B0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0088u;
label_2b0088:
    // 0x2b0088: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b008c:
    if (ctx->pc == 0x2B008Cu) {
        ctx->pc = 0x2B008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0088u;
        // 0x2b008c: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0090u;
        goto label_2b0090;
    }
    ctx->pc = 0x2B0088u;
    {
        const bool branch_taken_0x2b0088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0088) {
            ctx->pc = 0x2B008Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0088u;
            // 0x2b008c: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B009Cu;
            goto label_2b009c;
        }
    }
    ctx->pc = 0x2B0090u;
label_2b0090:
    // 0x2b0090: 0x54540057  bnel        $v0, $s4, . + 4 + (0x57 << 2)
label_2b0094:
    if (ctx->pc == 0x2B0094u) {
        ctx->pc = 0x2B0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0090u;
        // 0x2b0094: 0xa2200035  sb          $zero, 0x35($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0098u;
        goto label_2b0098;
    }
    ctx->pc = 0x2B0090u;
    {
        const bool branch_taken_0x2b0090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2b0090) {
            ctx->pc = 0x2B0094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0090u;
            // 0x2b0094: 0xa2200035  sb          $zero, 0x35($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B01F0u;
            goto label_2b01f0;
        }
    }
    ctx->pc = 0x2B0098u;
label_2b0098:
    // 0x2b0098: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2b0098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b009c:
    // 0x2b009c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2b009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2b00a0:
    // 0x2b00a0: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
label_2b00a4:
    if (ctx->pc == 0x2B00A4u) {
        ctx->pc = 0x2B00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00A0u;
        // 0x2b00a4: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B00A8u;
        goto label_2b00a8;
    }
    ctx->pc = 0x2B00A0u;
    {
        const bool branch_taken_0x2b00a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b00a0) {
            ctx->pc = 0x2B00A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B00A0u;
            // 0x2b00a4: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0144u;
            goto label_2b0144;
        }
    }
    ctx->pc = 0x2B00A8u;
label_2b00a8:
    // 0x2b00a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b00ac:
    // 0x2b00ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b00acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2b00b0:
    // 0x2b00b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b00b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b00b4:
    // 0x2b00b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b00b8:
    if (ctx->pc == 0x2B00B8u) {
        ctx->pc = 0x2B00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00B4u;
        // 0x2b00b8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B00BCu;
        goto label_2b00bc;
    }
    ctx->pc = 0x2B00B4u;
    {
        const bool branch_taken_0x2b00b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00B4u;
        // 0x2b00b8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00b4) {
            ctx->pc = 0x2B00F0u;
            goto label_2b00f0;
        }
    }
    ctx->pc = 0x2B00BCu;
label_2b00bc:
    // 0x2b00bc: 0x68463fcf  ldl         $a2, 0x3FCF($v0)
    ctx->pc = 0x2b00bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b00c0:
    // 0x2b00c0: 0x6c463fc8  ldr         $a2, 0x3FC8($v0)
    ctx->pc = 0x2b00c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b00c4:
    // 0x2b00c4: 0xc0a39c2  jal         func_28E708
label_2b00c8:
    if (ctx->pc == 0x2B00C8u) {
        ctx->pc = 0x2B00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00C4u;
        // 0x2b00c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B00CCu;
        goto label_2b00cc;
    }
    ctx->pc = 0x2B00C4u;
    SET_GPR_U32(ctx, 31, 0x2B00CCu);
    ctx->pc = 0x2B00C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B00C4u;
    // 0x2b00c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B00C4u, 0x2B00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B00CCu;
label_2b00cc:
    // 0x2b00cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b00ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b00d0:
    // 0x2b00d0: 0xc08a6d8  jal         func_229B60
label_2b00d4:
    if (ctx->pc == 0x2B00D4u) {
        ctx->pc = 0x2B00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00D0u;
        // 0x2b00d4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B00D8u;
        goto label_2b00d8;
    }
    ctx->pc = 0x2B00D0u;
    SET_GPR_U32(ctx, 31, 0x2B00D8u);
    ctx->pc = 0x2B00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B00D0u;
    // 0x2b00d4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B60u, 0x2B00D0u, 0x2B00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B00D8u;
label_2b00d8:
    // 0x2b00d8: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_2b00dc:
    if (ctx->pc == 0x2B00DCu) {
        ctx->pc = 0x2B00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00D8u;
        // 0x2b00dc: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B00E0u;
        goto label_2b00e0;
    }
    ctx->pc = 0x2B00D8u;
    {
        const bool branch_taken_0x2b00d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b00d8) {
            ctx->pc = 0x2B00DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B00D8u;
            // 0x2b00dc: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0144u;
            goto label_2b0144;
        }
    }
    ctx->pc = 0x2B00E0u;
label_2b00e0:
    // 0x2b00e0: 0xc0abe82  jal         func_2AFA08
label_2b00e4:
    if (ctx->pc == 0x2B00E4u) {
        ctx->pc = 0x2B00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00E0u;
        // 0x2b00e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B00E8u;
        goto label_2b00e8;
    }
    ctx->pc = 0x2B00E0u;
    SET_GPR_U32(ctx, 31, 0x2B00E8u);
    ctx->pc = 0x2B00E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B00E0u;
    // 0x2b00e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFA08u, 0x2B00E0u, 0x2B00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B00E8u;
label_2b00e8:
    // 0x2b00e8: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_2b00ec:
    if (ctx->pc == 0x2B00ECu) {
        ctx->pc = 0x2B00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00E8u;
        // 0x2b00ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B00F0u;
        goto label_2b00f0;
    }
    ctx->pc = 0x2B00E8u;
    {
        const bool branch_taken_0x2b00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00E8u;
        // 0x2b00ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00e8) {
            ctx->pc = 0x2B04B4u;
            goto label_2b04b4;
        }
    }
    ctx->pc = 0x2B00F0u;
label_2b00f0:
    // 0x2b00f0: 0x8e8400cc  lw          $a0, 0xCC($s4)
    ctx->pc = 0x2b00f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_2b00f4:
    // 0x2b00f4: 0xc08a200  jal         func_228800
label_2b00f8:
    if (ctx->pc == 0x2B00F8u) {
        ctx->pc = 0x2B00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00F4u;
        // 0x2b00f8: 0x24100032  addiu       $s0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B00FCu;
        goto label_2b00fc;
    }
    ctx->pc = 0x2B00F4u;
    SET_GPR_U32(ctx, 31, 0x2B00FCu);
    ctx->pc = 0x2B00F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B00F4u;
    // 0x2b00f8: 0x24100032  addiu       $s0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2B00F4u, 0x2B00FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B00FCu;
label_2b00fc:
    // 0x2b00fc: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2b00fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2b0100:
    // 0x2b0100: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b0100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2b0104:
    // 0x2b0104: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2b0104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2b0108:
    // 0x2b0108: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b0108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2b010c:
    // 0x2b010c: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x2b010cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
label_2b0110:
    // 0x2b0110: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2b0110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2b0114:
    // 0x2b0114: 0xc0cd4ee  jal         func_3353B8
label_2b0118:
    if (ctx->pc == 0x2B0118u) {
        ctx->pc = 0x2B0118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0114u;
        // 0x2b0118: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B011Cu;
        goto label_2b011c;
    }
    ctx->pc = 0x2B0114u;
    SET_GPR_U32(ctx, 31, 0x2B011Cu);
    ctx->pc = 0x2B0118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0114u;
    // 0x2b0118: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B0114u, 0x2B011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B011Cu;
label_2b011c:
    // 0x2b011c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2b011cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2b0120:
    // 0x2b0120: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2b0120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2b0124:
    // 0x2b0124: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2b0124u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2b0128:
    // 0x2b0128: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x2b0128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_2b012c:
    // 0x2b012c: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2b012cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2b0130:
    // 0x2b0130: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2b0130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
label_2b0134:
    // 0x2b0134: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b0138:
    // 0x2b0138: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2b013c:
    if (ctx->pc == 0x2B013Cu) {
        ctx->pc = 0x2B013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0138u;
        // 0x2b013c: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0140u;
        goto label_2b0140;
    }
    ctx->pc = 0x2B0138u;
    {
        const bool branch_taken_0x2b0138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0138) {
            ctx->pc = 0x2B013Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0138u;
            // 0x2b013c: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2B0140u;
label_2b0140:
    // 0x2b0140: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2b0140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b0144:
    // 0x2b0144: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b0144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b0148:
    // 0x2b0148: 0xc0891de  jal         func_224778
label_2b014c:
    if (ctx->pc == 0x2B014Cu) {
        ctx->pc = 0x2B014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0148u;
        // 0x2b014c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0150u;
        goto label_2b0150;
    }
    ctx->pc = 0x2B0148u;
    SET_GPR_U32(ctx, 31, 0x2B0150u);
    ctx->pc = 0x2B014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0148u;
    // 0x2b014c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2B0148u, 0x2B0150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0150u;
label_2b0150:
    // 0x2b0150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0154:
    // 0x2b0154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0158:
    // 0x2b0158: 0x16020026  bne         $s0, $v0, . + 4 + (0x26 << 2)
label_2b015c:
    if (ctx->pc == 0x2B015Cu) {
        ctx->pc = 0x2B015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0158u;
        // 0x2b015c: 0x2aa20003  slti        $v0, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0160u;
        goto label_2b0160;
    }
    ctx->pc = 0x2B0158u;
    {
        const bool branch_taken_0x2b0158 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0158u;
        // 0x2b015c: 0x2aa20003  slti        $v0, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0158) {
            ctx->pc = 0x2B01F4u;
            goto label_2b01f4;
        }
    }
    ctx->pc = 0x2B0160u;
label_2b0160:
    // 0x2b0160: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b0160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b0164:
    // 0x2b0164: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b0164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2b0168:
    // 0x2b0168: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b0168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2b016c:
    // 0x2b016c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2b0170:
    if (ctx->pc == 0x2B0170u) {
        ctx->pc = 0x2B0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B016Cu;
        // 0x2b0170: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0174u;
        goto label_2b0174;
    }
    ctx->pc = 0x2B016Cu;
    {
        const bool branch_taken_0x2b016c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b016c) {
            ctx->pc = 0x2B0170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B016Cu;
            // 0x2b0170: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0188u;
            goto label_2b0188;
        }
    }
    ctx->pc = 0x2B0174u;
label_2b0174:
    // 0x2b0174: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x2b0174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b0178:
    // 0x2b0178: 0xc0cd5ea  jal         func_3357A8
label_2b017c:
    if (ctx->pc == 0x2B017Cu) {
        ctx->pc = 0x2B017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0178u;
        // 0x2b017c: 0xc7ad0030  lwc1        $f13, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0180u;
        goto label_2b0180;
    }
    ctx->pc = 0x2B0178u;
    SET_GPR_U32(ctx, 31, 0x2B0180u);
    ctx->pc = 0x2B017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0178u;
    // 0x2b017c: 0xc7ad0030  lwc1        $f13, 0x30($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x2B0178u, 0x2B0180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0180u;
label_2b0180:
    // 0x2b0180: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b0180u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b0184:
    // 0x2b0184: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b0184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0188:
    // 0x2b0188: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b0188u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2b018c:
    // 0x2b018c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2b018cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b0190:
    // 0x2b0190: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_2b0194:
    if (ctx->pc == 0x2B0194u) {
        ctx->pc = 0x2B0198u;
        goto label_2b0198;
    }
    ctx->pc = 0x2B0190u;
    {
        const bool branch_taken_0x2b0190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b0190) {
            ctx->pc = 0x2B01A8u;
            goto label_2b01a8;
        }
    }
    ctx->pc = 0x2B0198u;
label_2b0198:
    // 0x2b0198: 0xc0a36c8  jal         func_28DB20
label_2b019c:
    if (ctx->pc == 0x2B019Cu) {
        ctx->pc = 0x2B01A0u;
        goto label_2b01a0;
    }
    ctx->pc = 0x2B0198u;
    SET_GPR_U32(ctx, 31, 0x2B01A0u);
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B0198u, 0x2B01A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01A0u;
label_2b01a0:
    // 0x2b01a0: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_2b01a4:
    if (ctx->pc == 0x2B01A4u) {
        ctx->pc = 0x2B01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01A0u;
        // 0x2b01a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01A8u;
        goto label_2b01a8;
    }
    ctx->pc = 0x2B01A0u;
    {
        const bool branch_taken_0x2b01a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01A0u;
        // 0x2b01a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01a0) {
            ctx->pc = 0x2B04B4u;
            goto label_2b04b4;
        }
    }
    ctx->pc = 0x2B01A8u;
label_2b01a8:
    // 0x2b01a8: 0xc0a367c  jal         func_28D9F0
label_2b01ac:
    if (ctx->pc == 0x2B01ACu) {
        ctx->pc = 0x2B01ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01A8u;
        // 0x2b01ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01B0u;
        goto label_2b01b0;
    }
    ctx->pc = 0x2B01A8u;
    SET_GPR_U32(ctx, 31, 0x2B01B0u);
    ctx->pc = 0x2B01ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01A8u;
    // 0x2b01ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B01A8u, 0x2B01B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01B0u;
label_2b01b0:
    // 0x2b01b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b01b4:
    if (ctx->pc == 0x2B01B4u) {
        ctx->pc = 0x2B01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01B0u;
        // 0x2b01b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01B8u;
        goto label_2b01b8;
    }
    ctx->pc = 0x2B01B0u;
    {
        const bool branch_taken_0x2b01b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01B0u;
        // 0x2b01b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01b0) {
            ctx->pc = 0x2B01D4u;
            goto label_2b01d4;
        }
    }
    ctx->pc = 0x2B01B8u;
label_2b01b8:
    // 0x2b01b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b01b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b01bc:
    // 0x2b01bc: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x2b01bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b01c0:
    // 0x2b01c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b01c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b01c4:
    // 0x2b01c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b01c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b01c8:
    // 0x2b01c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b01c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b01cc:
    // 0x2b01cc: 0xc0bea46  jal         func_2FA918
label_2b01d0:
    if (ctx->pc == 0x2B01D0u) {
        ctx->pc = 0x2B01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01CCu;
        // 0x2b01d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01D4u;
        goto label_2b01d4;
    }
    ctx->pc = 0x2B01CCu;
    SET_GPR_U32(ctx, 31, 0x2B01D4u);
    ctx->pc = 0x2B01D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01CCu;
    // 0x2b01d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x2B01CCu, 0x2B01D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01D4u;
label_2b01d4:
    // 0x2b01d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b01d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b01d8:
    // 0x2b01d8: 0xc0a2ab0  jal         func_28AAC0
label_2b01dc:
    if (ctx->pc == 0x2B01DCu) {
        ctx->pc = 0x2B01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01D8u;
        // 0x2b01dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01E0u;
        goto label_2b01e0;
    }
    ctx->pc = 0x2B01D8u;
    SET_GPR_U32(ctx, 31, 0x2B01E0u);
    ctx->pc = 0x2B01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01D8u;
    // 0x2b01dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2B01D8u, 0x2B01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01E0u;
label_2b01e0:
    // 0x2b01e0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2b01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2b01e4:
    // 0x2b01e4: 0xa2200035  sb          $zero, 0x35($s1)
    ctx->pc = 0x2b01e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 0));
label_2b01e8:
    // 0x2b01e8: 0x1000fe39  b           . + 4 + (-0x1C7 << 2)
label_2b01ec:
    if (ctx->pc == 0x2B01ECu) {
        ctx->pc = 0x2B01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01E8u;
        // 0x2b01ec: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01F0u;
        goto label_2b01f0;
    }
    ctx->pc = 0x2B01E8u;
    {
        const bool branch_taken_0x2b01e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01E8u;
        // 0x2b01ec: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01e8) {
            ctx->pc = 0x2AFAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afad0;
        }
    }
    ctx->pc = 0x2B01F0u;
label_2b01f0:
    // 0x2b01f0: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x2b01f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b01f4:
    // 0x2b01f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b01f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b01f8:
    // 0x2b01f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b01fc:
    if (ctx->pc == 0x2B01FCu) {
        ctx->pc = 0x2B01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01F8u;
        // 0x2b01fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0200u;
        goto label_2b0200;
    }
    ctx->pc = 0x2B01F8u;
    {
        const bool branch_taken_0x2b01f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01F8u;
        // 0x2b01fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01f8) {
            ctx->pc = 0x2B0204u;
            goto label_2b0204;
        }
    }
    ctx->pc = 0x2B0200u;
label_2b0200:
    // 0x2b0200: 0x2aa30006  slti        $v1, $s5, 0x6
    ctx->pc = 0x2b0200u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
label_2b0204:
    // 0x2b0204: 0x5060004e  beql        $v1, $zero, . + 4 + (0x4E << 2)
label_2b0208:
    if (ctx->pc == 0x2B0208u) {
        ctx->pc = 0x2B0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0204u;
        // 0x2b0208: 0xc66001ac  lwc1        $f0, 0x1AC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B020Cu;
        goto label_2b020c;
    }
    ctx->pc = 0x2B0204u;
    {
        const bool branch_taken_0x2b0204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0204) {
            ctx->pc = 0x2B0208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0204u;
            // 0x2b0208: 0xc66001ac  lwc1        $f0, 0x1AC($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0340u;
            goto label_2b0340;
        }
    }
    ctx->pc = 0x2B020Cu;
label_2b020c:
    // 0x2b020c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b0210:
    // 0x2b0210: 0x26f001a4  addiu       $s0, $s7, 0x1A4
    ctx->pc = 0x2b0210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 420));
label_2b0214:
    // 0x2b0214: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b0214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b0218:
    // 0x2b0218: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b0218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b021c:
    // 0x2b021c: 0x40f809  jalr        $v0
label_2b0220:
    if (ctx->pc == 0x2B0220u) {
        ctx->pc = 0x2B0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B021Cu;
        // 0x2b0220: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0224u;
        goto label_2b0224;
    }
    ctx->pc = 0x2B021Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0224u);
        ctx->pc = 0x2B0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B021Cu;
        // 0x2b0220: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B021Cu, 0x2B0224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0224u;
label_2b0224:
    // 0x2b0224: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x2b0224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2b0228:
    // 0x2b0228: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2b0228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_2b022c:
    // 0x2b022c: 0xc137882  jal         func_4DE208
label_2b0230:
    if (ctx->pc == 0x2B0230u) {
        ctx->pc = 0x2B0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B022Cu;
        // 0x2b0230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0234u;
        goto label_2b0234;
    }
    ctx->pc = 0x2B022Cu;
    SET_GPR_U32(ctx, 31, 0x2B0234u);
    ctx->pc = 0x2B0230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B022Cu;
    // 0x2b0230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x2B022Cu, 0x2B0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0234u;
label_2b0234:
    // 0x2b0234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b0234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0238:
    // 0x2b0238: 0x18a00040  blez        $a1, . + 4 + (0x40 << 2)
label_2b023c:
    if (ctx->pc == 0x2B023Cu) {
        ctx->pc = 0x2B023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0238u;
        // 0x2b023c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0240u;
        goto label_2b0240;
    }
    ctx->pc = 0x2B0238u;
    {
        const bool branch_taken_0x2b0238 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2B023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0238u;
        // 0x2b023c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0238) {
            ctx->pc = 0x2B033Cu;
            goto label_2b033c;
        }
    }
    ctx->pc = 0x2B0240u;
label_2b0240:
    // 0x2b0240: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b0240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0244:
    // 0x2b0244: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x2b0244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b0248:
    // 0x2b0248: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x2b0248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
label_2b024c:
    // 0x2b024c: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x2b024cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_2b0250:
    // 0x2b0250: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b0250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b0254:
    // 0x2b0254: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2b0254u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2b0258:
    // 0x2b0258: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2b0258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2b025c:
    // 0x2b025c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b025cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b0260:
    // 0x2b0260: 0x0  nop
    ctx->pc = 0x2b0260u;
    // NOP
label_2b0264:
    // 0x2b0264: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2b0268:
    // 0x2b0268: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_2b026c:
    if (ctx->pc == 0x2B026Cu) {
        ctx->pc = 0x2B026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0268u;
        // 0x2b026c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0270u;
        goto label_2b0270;
    }
    ctx->pc = 0x2B0268u;
    {
        const bool branch_taken_0x2b0268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0268u;
        // 0x2b026c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0268) {
            ctx->pc = 0x2B0274u;
            goto label_2b0274;
        }
    }
    ctx->pc = 0x2B0270u;
label_2b0270:
    // 0x2b0270: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b0270u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2b0274:
    // 0x2b0274: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b0274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2b0278:
    // 0x2b0278: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b0278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2b027c:
    // 0x2b027c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2b027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2b0280:
    // 0x2b0280: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2b0280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_2b0284:
    // 0x2b0284: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x2b0284u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2b0288:
    // 0x2b0288: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2b0288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2b028c:
    // 0x2b028c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2b028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2b0290:
    // 0x2b0290: 0xc12e310  jal         func_4B8C40
label_2b0294:
    if (ctx->pc == 0x2B0294u) {
        ctx->pc = 0x2B0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0290u;
        // 0x2b0294: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0298u;
        goto label_2b0298;
    }
    ctx->pc = 0x2B0290u;
    SET_GPR_U32(ctx, 31, 0x2B0298u);
    ctx->pc = 0x2B0294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0290u;
    // 0x2b0294: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2B0290u, 0x2B0298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0298u;
label_2b0298:
    // 0x2b0298: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b0298u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b029c:
    // 0x2b029c: 0xc12e29c  jal         func_4B8A70
label_2b02a0:
    if (ctx->pc == 0x2B02A0u) {
        ctx->pc = 0x2B02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B029Cu;
        // 0x2b02a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B02A4u;
        goto label_2b02a4;
    }
    ctx->pc = 0x2B029Cu;
    SET_GPR_U32(ctx, 31, 0x2B02A4u);
    ctx->pc = 0x2B02A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B029Cu;
    // 0x2b02a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2B029Cu, 0x2B02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02A4u;
label_2b02a4:
    // 0x2b02a4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2b02a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b02a8:
    // 0x2b02a8: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x2b02a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2b02ac:
    // 0x2b02ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b02acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b02b0:
    // 0x2b02b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2b02b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b02b4:
    // 0x2b02b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b02b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2b02b8:
    // 0x2b02b8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b02b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2b02bc:
    // 0x2b02bc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b02bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2b02c0:
    // 0x2b02c0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2b02c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2b02c4:
    // 0x2b02c4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2b02c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2b02c8:
    // 0x2b02c8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2b02c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b02cc:
    // 0x2b02cc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2b02ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b02d0:
    // 0x2b02d0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2b02d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b02d4:
    // 0x2b02d4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b02d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2b02d8:
    // 0x2b02d8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2b02d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b02dc:
    // 0x2b02dc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2b02dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2b02e0:
    // 0x2b02e0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2b02e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b02e4:
    // 0x2b02e4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2b02e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b02e8:
    // 0x2b02e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b02e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b02ec:
    // 0x2b02ec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2b02ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b02f0:
    // 0x2b02f0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2b02f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2b02f4:
    // 0x2b02f4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2b02f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2b02f8:
    // 0x2b02f8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2b02f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2b02fc:
    // 0x2b02fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2b02fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2b0300:
    // 0x2b0300: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2b0300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2b0304:
    // 0x2b0304: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2b0304u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2b0308:
    // 0x2b0308: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2b0308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2b030c:
    // 0x2b030c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b030cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2b0310:
    // 0x2b0310: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2b0310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b0314:
    // 0x2b0314: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2b0314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2b0318:
    // 0x2b0318: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2b0318u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2b031c:
    // 0x2b031c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2b031cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2b0320:
    // 0x2b0320: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2b0320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2b0324:
    // 0x2b0324: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2b0324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2b0328:
    // 0x2b0328: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2b0328u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_2b032c:
    // 0x2b032c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2b0330:
    // 0x2b0330: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2b0330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2b0334:
    // 0x2b0334: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2b0334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2b0338:
    // 0x2b0338: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2b0338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2b033c:
    // 0x2b033c: 0xc66001ac  lwc1        $f0, 0x1AC($s3)
    ctx->pc = 0x2b033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0340:
    // 0x2b0340: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2b0340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0344:
    // 0x2b0344: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2b0344u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2b0348:
    // 0x2b0348: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b0348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b034c:
    // 0x2b034c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2b034cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2b0350:
    // 0x2b0350: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b0350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2b0354:
    // 0x2b0354: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b0354u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2b0358:
    // 0x2b0358: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2b0358u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b035c:
    // 0x2b035c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b035cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b0360:
    // 0x2b0360: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2b0360u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b0364:
    // 0x2b0364: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b0364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b0368:
    // 0x2b0368: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b0368u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2b036c:
    // 0x2b036c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2b036cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2b0370:
    // 0x2b0370: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2b0370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2b0374:
    // 0x2b0374: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2b0374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2b0378:
    // 0x2b0378: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2b0378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2b037c:
    // 0x2b037c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2b037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2b0380:
    // 0x2b0380: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2b0380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2b0384:
    // 0x2b0384: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_2b0388:
    if (ctx->pc == 0x2B0388u) {
        ctx->pc = 0x2B0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0384u;
        // 0x2b0388: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B038Cu;
        goto label_2b038c;
    }
    ctx->pc = 0x2B0384u;
    {
        const bool branch_taken_0x2b0384 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0384u;
        // 0x2b0388: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0384) {
            ctx->pc = 0x2B03A0u;
            goto label_2b03a0;
        }
    }
    ctx->pc = 0x2B038Cu;
label_2b038c:
    // 0x2b038c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b038cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2b0390:
    // 0x2b0390: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2b0390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b0394:
    // 0x2b0394: 0x0  nop
    ctx->pc = 0x2b0394u;
    // NOP
label_2b0398:
    // 0x2b0398: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2b039c:
    if (ctx->pc == 0x2B039Cu) {
        ctx->pc = 0x2B039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0398u;
        // 0x2b039c: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B03A0u;
        goto label_2b03a0;
    }
    ctx->pc = 0x2B0398u;
    {
        const bool branch_taken_0x2b0398 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0398u;
        // 0x2b039c: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0398) {
            ctx->pc = 0x2B03BCu;
            goto label_2b03bc;
        }
    }
    ctx->pc = 0x2B03A0u;
label_2b03a0:
    // 0x2b03a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b03a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b03a4:
    // 0x2b03a4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2b03a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2b03a8:
    // 0x2b03a8: 0xc088878  jal         func_2221E0
label_2b03ac:
    if (ctx->pc == 0x2B03ACu) {
        ctx->pc = 0x2B03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03A8u;
        // 0x2b03ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B03B0u;
        goto label_2b03b0;
    }
    ctx->pc = 0x2B03A8u;
    SET_GPR_U32(ctx, 31, 0x2B03B0u);
    ctx->pc = 0x2B03ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B03A8u;
    // 0x2b03ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2B03A8u, 0x2B03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B03B0u;
label_2b03b0:
    // 0x2b03b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b03b4:
    if (ctx->pc == 0x2B03B4u) {
        ctx->pc = 0x2B03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03B0u;
        // 0x2b03b4: 0x92220034  lbu         $v0, 0x34($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B03B8u;
        goto label_2b03b8;
    }
    ctx->pc = 0x2B03B0u;
    {
        const bool branch_taken_0x2b03b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b03b0) {
            ctx->pc = 0x2B03B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B03B0u;
            // 0x2b03b4: 0x92220034  lbu         $v0, 0x34($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B03C4u;
            goto label_2b03c4;
        }
    }
    ctx->pc = 0x2B03B8u;
label_2b03b8:
    // 0x2b03b8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2b03b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b03bc:
    // 0x2b03bc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2b03bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2b03c0:
    // 0x2b03c0: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x2b03c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_2b03c4:
    // 0x2b03c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b03c8:
    if (ctx->pc == 0x2B03C8u) {
        ctx->pc = 0x2B03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03C4u;
        // 0x2b03c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B03CCu;
        goto label_2b03cc;
    }
    ctx->pc = 0x2B03C4u;
    {
        const bool branch_taken_0x2b03c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03C4u;
        // 0x2b03c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03c4) {
            ctx->pc = 0x2B03D8u;
            goto label_2b03d8;
        }
    }
    ctx->pc = 0x2B03CCu;
label_2b03cc:
    // 0x2b03cc: 0xc0a2ab0  jal         func_28AAC0
label_2b03d0:
    if (ctx->pc == 0x2B03D0u) {
        ctx->pc = 0x2B03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03CCu;
        // 0x2b03d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B03D4u;
        goto label_2b03d4;
    }
    ctx->pc = 0x2B03CCu;
    SET_GPR_U32(ctx, 31, 0x2B03D4u);
    ctx->pc = 0x2B03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B03CCu;
    // 0x2b03d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2B03CCu, 0x2B03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B03D4u;
label_2b03d4:
    // 0x2b03d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b03d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b03d8:
    // 0x2b03d8: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b03d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2b03dc:
    // 0x2b03dc: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_2b03e0:
    if (ctx->pc == 0x2B03E0u) {
        ctx->pc = 0x2B03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03DCu;
        // 0x2b03e0: 0x2902a  slt         $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B03E4u;
        goto label_2b03e4;
    }
    ctx->pc = 0x2B03DCu;
    {
        const bool branch_taken_0x2b03dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03DCu;
        // 0x2b03e0: 0x2902a  slt         $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03dc) {
            ctx->pc = 0x2B0444u;
            goto label_2b0444;
        }
    }
    ctx->pc = 0x2B03E4u;
label_2b03e4:
    // 0x2b03e4: 0xc0a36c2  jal         func_28DB08
label_2b03e8:
    if (ctx->pc == 0x2B03E8u) {
        ctx->pc = 0x2B03ECu;
        goto label_2b03ec;
    }
    ctx->pc = 0x2B03E4u;
    SET_GPR_U32(ctx, 31, 0x2B03ECu);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2B03E4u, 0x2B03ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B03ECu;
label_2b03ec:
    // 0x2b03ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b03ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b03f0:
    // 0x2b03f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b03f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b03f4:
    // 0x2b03f4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2b03f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2b03f8:
    // 0x2b03f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b03fc:
    // 0x2b03fc: 0x40f809  jalr        $v0
label_2b0400:
    if (ctx->pc == 0x2B0400u) {
        ctx->pc = 0x2B0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03FCu;
        // 0x2b0400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0404u;
        goto label_2b0404;
    }
    ctx->pc = 0x2B03FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0404u);
        ctx->pc = 0x2B0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03FCu;
        // 0x2b0400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B03FCu, 0x2B0404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0404u;
label_2b0404:
    // 0x2b0404: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
label_2b0408:
    if (ctx->pc == 0x2B0408u) {
        ctx->pc = 0x2B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0404u;
        // 0x2b0408: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B040Cu;
        goto label_2b040c;
    }
    ctx->pc = 0x2B0404u;
    {
        const bool branch_taken_0x2b0404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0404u;
        // 0x2b0408: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0404) {
            ctx->pc = 0x2B0428u;
            goto label_2b0428;
        }
    }
    ctx->pc = 0x2B040Cu;
label_2b040c:
    // 0x2b040c: 0xc0beefa  jal         func_2FBBE8
label_2b0410:
    if (ctx->pc == 0x2B0410u) {
        ctx->pc = 0x2B0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B040Cu;
        // 0x2b0410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0414u;
        goto label_2b0414;
    }
    ctx->pc = 0x2B040Cu;
    SET_GPR_U32(ctx, 31, 0x2B0414u);
    ctx->pc = 0x2B0410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B040Cu;
    // 0x2b0410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBE8u, 0x2B040Cu, 0x2B0414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0414u;
label_2b0414:
    // 0x2b0414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0418:
    // 0x2b0418: 0xc0bf0fa  jal         func_2FC3E8
label_2b041c:
    if (ctx->pc == 0x2B041Cu) {
        ctx->pc = 0x2B041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0418u;
        // 0x2b041c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0420u;
        goto label_2b0420;
    }
    ctx->pc = 0x2B0418u;
    SET_GPR_U32(ctx, 31, 0x2B0420u);
    ctx->pc = 0x2B041Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0418u;
    // 0x2b041c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E8u, 0x2B0418u, 0x2B0420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0420u;
label_2b0420:
    // 0x2b0420: 0x10000024  b           . + 4 + (0x24 << 2)
label_2b0424:
    if (ctx->pc == 0x2B0424u) {
        ctx->pc = 0x2B0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0420u;
        // 0x2b0424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0428u;
        goto label_2b0428;
    }
    ctx->pc = 0x2B0420u;
    {
        const bool branch_taken_0x2b0420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0420u;
        // 0x2b0424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0420) {
            ctx->pc = 0x2B04B4u;
            goto label_2b04b4;
        }
    }
    ctx->pc = 0x2B0428u;
label_2b0428:
    // 0x2b0428: 0xc0a36c8  jal         func_28DB20
label_2b042c:
    if (ctx->pc == 0x2B042Cu) {
        ctx->pc = 0x2B042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0428u;
        // 0x2b042c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0430u;
        goto label_2b0430;
    }
    ctx->pc = 0x2B0428u;
    SET_GPR_U32(ctx, 31, 0x2B0430u);
    ctx->pc = 0x2B042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0428u;
    // 0x2b042c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B0428u, 0x2B0430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0430u;
label_2b0430:
    // 0x2b0430: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b0430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0434:
    // 0x2b0434: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b0434u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2b0438:
    // 0x2b0438: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2b0438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b043c:
    // 0x2b043c: 0x1052001d  beq         $v0, $s2, . + 4 + (0x1D << 2)
label_2b0440:
    if (ctx->pc == 0x2B0440u) {
        ctx->pc = 0x2B0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B043Cu;
        // 0x2b0440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0444u;
        goto label_2b0444;
    }
    ctx->pc = 0x2B043Cu;
    {
        const bool branch_taken_0x2b043c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B043Cu;
        // 0x2b0440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b043c) {
            ctx->pc = 0x2B04B4u;
            goto label_2b04b4;
        }
    }
    ctx->pc = 0x2B0444u;
label_2b0444:
    // 0x2b0444: 0xc0a367c  jal         func_28D9F0
label_2b0448:
    if (ctx->pc == 0x2B0448u) {
        ctx->pc = 0x2B0448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0444u;
        // 0x2b0448: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B044Cu;
        goto label_2b044c;
    }
    ctx->pc = 0x2B0444u;
    SET_GPR_U32(ctx, 31, 0x2B044Cu);
    ctx->pc = 0x2B0448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0444u;
    // 0x2b0448: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B0444u, 0x2B044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B044Cu;
label_2b044c:
    // 0x2b044c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0450:
    // 0x2b0450: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2b0454:
    if (ctx->pc == 0x2B0454u) {
        ctx->pc = 0x2B0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0450u;
        // 0x2b0454: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0458u;
        goto label_2b0458;
    }
    ctx->pc = 0x2B0450u;
    {
        const bool branch_taken_0x2b0450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0450u;
        // 0x2b0454: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0450) {
            ctx->pc = 0x2B0490u;
            goto label_2b0490;
        }
    }
    ctx->pc = 0x2B0458u;
label_2b0458:
    // 0x2b0458: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b0458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2b045c:
    // 0x2b045c: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x2b045cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_2b0460:
    // 0x2b0460: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b0460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b0464:
    // 0x2b0464: 0x38ab000d  xori        $t3, $a1, 0xD
    ctx->pc = 0x2b0464u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)13);
label_2b0468:
    // 0x2b0468: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b0468u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b046c:
    // 0x2b046c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b046cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0470:
    // 0x2b0470: 0x3480a  movz        $t1, $zero, $v1
    ctx->pc = 0x2b0470u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_2b0474:
    // 0x2b0474: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b0474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2b0478:
    // 0x2b0478: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b0478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b047c:
    // 0x2b047c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2b047cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b0480:
    // 0x2b0480: 0x2d6b0001  sltiu       $t3, $t3, 0x1
    ctx->pc = 0x2b0480u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b0484:
    // 0x2b0484: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2b0484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2b0488:
    // 0x2b0488: 0xc0bee7a  jal         func_2FB9E8
label_2b048c:
    if (ctx->pc == 0x2B048Cu) {
        ctx->pc = 0x2B048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0488u;
        // 0x2b048c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0490u;
        goto label_2b0490;
    }
    ctx->pc = 0x2B0488u;
    SET_GPR_U32(ctx, 31, 0x2B0490u);
    ctx->pc = 0x2B048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0488u;
    // 0x2b048c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B0488u, 0x2B0490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0490u;
label_2b0490:
    // 0x2b0490: 0x1000fd8f  b           . + 4 + (-0x271 << 2)
label_2b0494:
    if (ctx->pc == 0x2B0494u) {
        ctx->pc = 0x2B0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0490u;
        // 0x2b0494: 0xa2200034  sb          $zero, 0x34($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0498u;
        goto label_2b0498;
    }
    ctx->pc = 0x2B0490u;
    {
        const bool branch_taken_0x2b0490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0490u;
        // 0x2b0494: 0xa2200034  sb          $zero, 0x34($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0490) {
            ctx->pc = 0x2AFAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afad0;
        }
    }
    ctx->pc = 0x2B0498u;
label_2b0498:
    // 0x2b0498: 0x9082028d  lbu         $v0, 0x28D($a0)
    ctx->pc = 0x2b0498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 653)));
label_2b049c:
    // 0x2b049c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b049cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b04a0:
    // 0x2b04a0: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
label_2b04a4:
    if (ctx->pc == 0x2B04A4u) {
        ctx->pc = 0x2B04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04A0u;
        // 0x2b04a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B04A8u;
        goto label_2b04a8;
    }
    ctx->pc = 0x2B04A0u;
    {
        const bool branch_taken_0x2b04a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2B04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04A0u;
        // 0x2b04a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04a0) {
            ctx->pc = 0x2B04B4u;
            goto label_2b04b4;
        }
    }
    ctx->pc = 0x2B04A8u;
label_2b04a8:
    // 0x2b04a8: 0xc0a35a8  jal         func_28D6A0
label_2b04ac:
    if (ctx->pc == 0x2B04ACu) {
        ctx->pc = 0x2B04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04A8u;
        // 0x2b04ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B04B0u;
        goto label_2b04b0;
    }
    ctx->pc = 0x2B04A8u;
    SET_GPR_U32(ctx, 31, 0x2B04B0u);
    ctx->pc = 0x2B04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B04A8u;
    // 0x2b04ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D6A0u, 0x2B04A8u, 0x2B04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B04B0u;
label_2b04b0:
    // 0x2b04b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b04b4:
    // 0x2b04b4: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x2b04b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2b04b8:
    // 0x2b04b8: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2b04b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2b04bc:
    // 0x2b04bc: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2b04bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2b04c0:
    // 0x2b04c0: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2b04c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2b04c4:
    // 0x2b04c4: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2b04c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2b04c8:
    // 0x2b04c8: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2b04c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2b04cc:
    // 0x2b04cc: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x2b04ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2b04d0:
    // 0x2b04d0: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x2b04d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2b04d4:
    // 0x2b04d4: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x2b04d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b04d8:
    // 0x2b04d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b04d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b04dc:
    // 0x2b04dc: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x2b04dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2b04e0:
    // 0x2b04e0: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x2b04e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b04e4:
    // 0x2b04e4: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2b04e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b04e8:
    // 0x2b04e8: 0x3e00008  jr          $ra
label_2b04ec:
    if (ctx->pc == 0x2B04ECu) {
        ctx->pc = 0x2B04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04E8u;
        // 0x2b04ec: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B04F0u;
        goto label_fallthrough_0x2b04e8;
    }
    ctx->pc = 0x2B04E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04E8u;
        // 0x2b04ec: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B04E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b04e8:
    ctx->pc = 0x2B04F0u;
}
