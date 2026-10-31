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

// Function: sub_003AFA08
// Address: 0x3afa08 - 0x3b00c8
void sub_003AFA08_0x3afa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFA08_0x3afa08");
#endif

    switch (ctx->pc) {
        case 0x3afa08u: goto label_3afa08;
        case 0x3afa0cu: goto label_3afa0c;
        case 0x3afa10u: goto label_3afa10;
        case 0x3afa14u: goto label_3afa14;
        case 0x3afa18u: goto label_3afa18;
        case 0x3afa1cu: goto label_3afa1c;
        case 0x3afa20u: goto label_3afa20;
        case 0x3afa24u: goto label_3afa24;
        case 0x3afa28u: goto label_3afa28;
        case 0x3afa2cu: goto label_3afa2c;
        case 0x3afa30u: goto label_3afa30;
        case 0x3afa34u: goto label_3afa34;
        case 0x3afa38u: goto label_3afa38;
        case 0x3afa3cu: goto label_3afa3c;
        case 0x3afa40u: goto label_3afa40;
        case 0x3afa44u: goto label_3afa44;
        case 0x3afa48u: goto label_3afa48;
        case 0x3afa4cu: goto label_3afa4c;
        case 0x3afa50u: goto label_3afa50;
        case 0x3afa54u: goto label_3afa54;
        case 0x3afa58u: goto label_3afa58;
        case 0x3afa5cu: goto label_3afa5c;
        case 0x3afa60u: goto label_3afa60;
        case 0x3afa64u: goto label_3afa64;
        case 0x3afa68u: goto label_3afa68;
        case 0x3afa6cu: goto label_3afa6c;
        case 0x3afa70u: goto label_3afa70;
        case 0x3afa74u: goto label_3afa74;
        case 0x3afa78u: goto label_3afa78;
        case 0x3afa7cu: goto label_3afa7c;
        case 0x3afa80u: goto label_3afa80;
        case 0x3afa84u: goto label_3afa84;
        case 0x3afa88u: goto label_3afa88;
        case 0x3afa8cu: goto label_3afa8c;
        case 0x3afa90u: goto label_3afa90;
        case 0x3afa94u: goto label_3afa94;
        case 0x3afa98u: goto label_3afa98;
        case 0x3afa9cu: goto label_3afa9c;
        case 0x3afaa0u: goto label_3afaa0;
        case 0x3afaa4u: goto label_3afaa4;
        case 0x3afaa8u: goto label_3afaa8;
        case 0x3afaacu: goto label_3afaac;
        case 0x3afab0u: goto label_3afab0;
        case 0x3afab4u: goto label_3afab4;
        case 0x3afab8u: goto label_3afab8;
        case 0x3afabcu: goto label_3afabc;
        case 0x3afac0u: goto label_3afac0;
        case 0x3afac4u: goto label_3afac4;
        case 0x3afac8u: goto label_3afac8;
        case 0x3afaccu: goto label_3afacc;
        case 0x3afad0u: goto label_3afad0;
        case 0x3afad4u: goto label_3afad4;
        case 0x3afad8u: goto label_3afad8;
        case 0x3afadcu: goto label_3afadc;
        case 0x3afae0u: goto label_3afae0;
        case 0x3afae4u: goto label_3afae4;
        case 0x3afae8u: goto label_3afae8;
        case 0x3afaecu: goto label_3afaec;
        case 0x3afaf0u: goto label_3afaf0;
        case 0x3afaf4u: goto label_3afaf4;
        case 0x3afaf8u: goto label_3afaf8;
        case 0x3afafcu: goto label_3afafc;
        case 0x3afb00u: goto label_3afb00;
        case 0x3afb04u: goto label_3afb04;
        case 0x3afb08u: goto label_3afb08;
        case 0x3afb0cu: goto label_3afb0c;
        case 0x3afb10u: goto label_3afb10;
        case 0x3afb14u: goto label_3afb14;
        case 0x3afb18u: goto label_3afb18;
        case 0x3afb1cu: goto label_3afb1c;
        case 0x3afb20u: goto label_3afb20;
        case 0x3afb24u: goto label_3afb24;
        case 0x3afb28u: goto label_3afb28;
        case 0x3afb2cu: goto label_3afb2c;
        case 0x3afb30u: goto label_3afb30;
        case 0x3afb34u: goto label_3afb34;
        case 0x3afb38u: goto label_3afb38;
        case 0x3afb3cu: goto label_3afb3c;
        case 0x3afb40u: goto label_3afb40;
        case 0x3afb44u: goto label_3afb44;
        case 0x3afb48u: goto label_3afb48;
        case 0x3afb4cu: goto label_3afb4c;
        case 0x3afb50u: goto label_3afb50;
        case 0x3afb54u: goto label_3afb54;
        case 0x3afb58u: goto label_3afb58;
        case 0x3afb5cu: goto label_3afb5c;
        case 0x3afb60u: goto label_3afb60;
        case 0x3afb64u: goto label_3afb64;
        case 0x3afb68u: goto label_3afb68;
        case 0x3afb6cu: goto label_3afb6c;
        case 0x3afb70u: goto label_3afb70;
        case 0x3afb74u: goto label_3afb74;
        case 0x3afb78u: goto label_3afb78;
        case 0x3afb7cu: goto label_3afb7c;
        case 0x3afb80u: goto label_3afb80;
        case 0x3afb84u: goto label_3afb84;
        case 0x3afb88u: goto label_3afb88;
        case 0x3afb8cu: goto label_3afb8c;
        case 0x3afb90u: goto label_3afb90;
        case 0x3afb94u: goto label_3afb94;
        case 0x3afb98u: goto label_3afb98;
        case 0x3afb9cu: goto label_3afb9c;
        case 0x3afba0u: goto label_3afba0;
        case 0x3afba4u: goto label_3afba4;
        case 0x3afba8u: goto label_3afba8;
        case 0x3afbacu: goto label_3afbac;
        case 0x3afbb0u: goto label_3afbb0;
        case 0x3afbb4u: goto label_3afbb4;
        case 0x3afbb8u: goto label_3afbb8;
        case 0x3afbbcu: goto label_3afbbc;
        case 0x3afbc0u: goto label_3afbc0;
        case 0x3afbc4u: goto label_3afbc4;
        case 0x3afbc8u: goto label_3afbc8;
        case 0x3afbccu: goto label_3afbcc;
        case 0x3afbd0u: goto label_3afbd0;
        case 0x3afbd4u: goto label_3afbd4;
        case 0x3afbd8u: goto label_3afbd8;
        case 0x3afbdcu: goto label_3afbdc;
        case 0x3afbe0u: goto label_3afbe0;
        case 0x3afbe4u: goto label_3afbe4;
        case 0x3afbe8u: goto label_3afbe8;
        case 0x3afbecu: goto label_3afbec;
        case 0x3afbf0u: goto label_3afbf0;
        case 0x3afbf4u: goto label_3afbf4;
        case 0x3afbf8u: goto label_3afbf8;
        case 0x3afbfcu: goto label_3afbfc;
        case 0x3afc00u: goto label_3afc00;
        case 0x3afc04u: goto label_3afc04;
        case 0x3afc08u: goto label_3afc08;
        case 0x3afc0cu: goto label_3afc0c;
        case 0x3afc10u: goto label_3afc10;
        case 0x3afc14u: goto label_3afc14;
        case 0x3afc18u: goto label_3afc18;
        case 0x3afc1cu: goto label_3afc1c;
        case 0x3afc20u: goto label_3afc20;
        case 0x3afc24u: goto label_3afc24;
        case 0x3afc28u: goto label_3afc28;
        case 0x3afc2cu: goto label_3afc2c;
        case 0x3afc30u: goto label_3afc30;
        case 0x3afc34u: goto label_3afc34;
        case 0x3afc38u: goto label_3afc38;
        case 0x3afc3cu: goto label_3afc3c;
        case 0x3afc40u: goto label_3afc40;
        case 0x3afc44u: goto label_3afc44;
        case 0x3afc48u: goto label_3afc48;
        case 0x3afc4cu: goto label_3afc4c;
        case 0x3afc50u: goto label_3afc50;
        case 0x3afc54u: goto label_3afc54;
        case 0x3afc58u: goto label_3afc58;
        case 0x3afc5cu: goto label_3afc5c;
        case 0x3afc60u: goto label_3afc60;
        case 0x3afc64u: goto label_3afc64;
        case 0x3afc68u: goto label_3afc68;
        case 0x3afc6cu: goto label_3afc6c;
        case 0x3afc70u: goto label_3afc70;
        case 0x3afc74u: goto label_3afc74;
        case 0x3afc78u: goto label_3afc78;
        case 0x3afc7cu: goto label_3afc7c;
        case 0x3afc80u: goto label_3afc80;
        case 0x3afc84u: goto label_3afc84;
        case 0x3afc88u: goto label_3afc88;
        case 0x3afc8cu: goto label_3afc8c;
        case 0x3afc90u: goto label_3afc90;
        case 0x3afc94u: goto label_3afc94;
        case 0x3afc98u: goto label_3afc98;
        case 0x3afc9cu: goto label_3afc9c;
        case 0x3afca0u: goto label_3afca0;
        case 0x3afca4u: goto label_3afca4;
        case 0x3afca8u: goto label_3afca8;
        case 0x3afcacu: goto label_3afcac;
        case 0x3afcb0u: goto label_3afcb0;
        case 0x3afcb4u: goto label_3afcb4;
        case 0x3afcb8u: goto label_3afcb8;
        case 0x3afcbcu: goto label_3afcbc;
        case 0x3afcc0u: goto label_3afcc0;
        case 0x3afcc4u: goto label_3afcc4;
        case 0x3afcc8u: goto label_3afcc8;
        case 0x3afcccu: goto label_3afccc;
        case 0x3afcd0u: goto label_3afcd0;
        case 0x3afcd4u: goto label_3afcd4;
        case 0x3afcd8u: goto label_3afcd8;
        case 0x3afcdcu: goto label_3afcdc;
        case 0x3afce0u: goto label_3afce0;
        case 0x3afce4u: goto label_3afce4;
        case 0x3afce8u: goto label_3afce8;
        case 0x3afcecu: goto label_3afcec;
        case 0x3afcf0u: goto label_3afcf0;
        case 0x3afcf4u: goto label_3afcf4;
        case 0x3afcf8u: goto label_3afcf8;
        case 0x3afcfcu: goto label_3afcfc;
        case 0x3afd00u: goto label_3afd00;
        case 0x3afd04u: goto label_3afd04;
        case 0x3afd08u: goto label_3afd08;
        case 0x3afd0cu: goto label_3afd0c;
        case 0x3afd10u: goto label_3afd10;
        case 0x3afd14u: goto label_3afd14;
        case 0x3afd18u: goto label_3afd18;
        case 0x3afd1cu: goto label_3afd1c;
        case 0x3afd20u: goto label_3afd20;
        case 0x3afd24u: goto label_3afd24;
        case 0x3afd28u: goto label_3afd28;
        case 0x3afd2cu: goto label_3afd2c;
        case 0x3afd30u: goto label_3afd30;
        case 0x3afd34u: goto label_3afd34;
        case 0x3afd38u: goto label_3afd38;
        case 0x3afd3cu: goto label_3afd3c;
        case 0x3afd40u: goto label_3afd40;
        case 0x3afd44u: goto label_3afd44;
        case 0x3afd48u: goto label_3afd48;
        case 0x3afd4cu: goto label_3afd4c;
        case 0x3afd50u: goto label_3afd50;
        case 0x3afd54u: goto label_3afd54;
        case 0x3afd58u: goto label_3afd58;
        case 0x3afd5cu: goto label_3afd5c;
        case 0x3afd60u: goto label_3afd60;
        case 0x3afd64u: goto label_3afd64;
        case 0x3afd68u: goto label_3afd68;
        case 0x3afd6cu: goto label_3afd6c;
        case 0x3afd70u: goto label_3afd70;
        case 0x3afd74u: goto label_3afd74;
        case 0x3afd78u: goto label_3afd78;
        case 0x3afd7cu: goto label_3afd7c;
        case 0x3afd80u: goto label_3afd80;
        case 0x3afd84u: goto label_3afd84;
        case 0x3afd88u: goto label_3afd88;
        case 0x3afd8cu: goto label_3afd8c;
        case 0x3afd90u: goto label_3afd90;
        case 0x3afd94u: goto label_3afd94;
        case 0x3afd98u: goto label_3afd98;
        case 0x3afd9cu: goto label_3afd9c;
        case 0x3afda0u: goto label_3afda0;
        case 0x3afda4u: goto label_3afda4;
        case 0x3afda8u: goto label_3afda8;
        case 0x3afdacu: goto label_3afdac;
        case 0x3afdb0u: goto label_3afdb0;
        case 0x3afdb4u: goto label_3afdb4;
        case 0x3afdb8u: goto label_3afdb8;
        case 0x3afdbcu: goto label_3afdbc;
        case 0x3afdc0u: goto label_3afdc0;
        case 0x3afdc4u: goto label_3afdc4;
        case 0x3afdc8u: goto label_3afdc8;
        case 0x3afdccu: goto label_3afdcc;
        case 0x3afdd0u: goto label_3afdd0;
        case 0x3afdd4u: goto label_3afdd4;
        case 0x3afdd8u: goto label_3afdd8;
        case 0x3afddcu: goto label_3afddc;
        case 0x3afde0u: goto label_3afde0;
        case 0x3afde4u: goto label_3afde4;
        case 0x3afde8u: goto label_3afde8;
        case 0x3afdecu: goto label_3afdec;
        case 0x3afdf0u: goto label_3afdf0;
        case 0x3afdf4u: goto label_3afdf4;
        case 0x3afdf8u: goto label_3afdf8;
        case 0x3afdfcu: goto label_3afdfc;
        case 0x3afe00u: goto label_3afe00;
        case 0x3afe04u: goto label_3afe04;
        case 0x3afe08u: goto label_3afe08;
        case 0x3afe0cu: goto label_3afe0c;
        case 0x3afe10u: goto label_3afe10;
        case 0x3afe14u: goto label_3afe14;
        case 0x3afe18u: goto label_3afe18;
        case 0x3afe1cu: goto label_3afe1c;
        case 0x3afe20u: goto label_3afe20;
        case 0x3afe24u: goto label_3afe24;
        case 0x3afe28u: goto label_3afe28;
        case 0x3afe2cu: goto label_3afe2c;
        case 0x3afe30u: goto label_3afe30;
        case 0x3afe34u: goto label_3afe34;
        case 0x3afe38u: goto label_3afe38;
        case 0x3afe3cu: goto label_3afe3c;
        case 0x3afe40u: goto label_3afe40;
        case 0x3afe44u: goto label_3afe44;
        case 0x3afe48u: goto label_3afe48;
        case 0x3afe4cu: goto label_3afe4c;
        case 0x3afe50u: goto label_3afe50;
        case 0x3afe54u: goto label_3afe54;
        case 0x3afe58u: goto label_3afe58;
        case 0x3afe5cu: goto label_3afe5c;
        case 0x3afe60u: goto label_3afe60;
        case 0x3afe64u: goto label_3afe64;
        case 0x3afe68u: goto label_3afe68;
        case 0x3afe6cu: goto label_3afe6c;
        case 0x3afe70u: goto label_3afe70;
        case 0x3afe74u: goto label_3afe74;
        case 0x3afe78u: goto label_3afe78;
        case 0x3afe7cu: goto label_3afe7c;
        case 0x3afe80u: goto label_3afe80;
        case 0x3afe84u: goto label_3afe84;
        case 0x3afe88u: goto label_3afe88;
        case 0x3afe8cu: goto label_3afe8c;
        case 0x3afe90u: goto label_3afe90;
        case 0x3afe94u: goto label_3afe94;
        case 0x3afe98u: goto label_3afe98;
        case 0x3afe9cu: goto label_3afe9c;
        case 0x3afea0u: goto label_3afea0;
        case 0x3afea4u: goto label_3afea4;
        case 0x3afea8u: goto label_3afea8;
        case 0x3afeacu: goto label_3afeac;
        case 0x3afeb0u: goto label_3afeb0;
        case 0x3afeb4u: goto label_3afeb4;
        case 0x3afeb8u: goto label_3afeb8;
        case 0x3afebcu: goto label_3afebc;
        case 0x3afec0u: goto label_3afec0;
        case 0x3afec4u: goto label_3afec4;
        case 0x3afec8u: goto label_3afec8;
        case 0x3afeccu: goto label_3afecc;
        case 0x3afed0u: goto label_3afed0;
        case 0x3afed4u: goto label_3afed4;
        case 0x3afed8u: goto label_3afed8;
        case 0x3afedcu: goto label_3afedc;
        case 0x3afee0u: goto label_3afee0;
        case 0x3afee4u: goto label_3afee4;
        case 0x3afee8u: goto label_3afee8;
        case 0x3afeecu: goto label_3afeec;
        case 0x3afef0u: goto label_3afef0;
        case 0x3afef4u: goto label_3afef4;
        case 0x3afef8u: goto label_3afef8;
        case 0x3afefcu: goto label_3afefc;
        case 0x3aff00u: goto label_3aff00;
        case 0x3aff04u: goto label_3aff04;
        case 0x3aff08u: goto label_3aff08;
        case 0x3aff0cu: goto label_3aff0c;
        case 0x3aff10u: goto label_3aff10;
        case 0x3aff14u: goto label_3aff14;
        case 0x3aff18u: goto label_3aff18;
        case 0x3aff1cu: goto label_3aff1c;
        case 0x3aff20u: goto label_3aff20;
        case 0x3aff24u: goto label_3aff24;
        case 0x3aff28u: goto label_3aff28;
        case 0x3aff2cu: goto label_3aff2c;
        case 0x3aff30u: goto label_3aff30;
        case 0x3aff34u: goto label_3aff34;
        case 0x3aff38u: goto label_3aff38;
        case 0x3aff3cu: goto label_3aff3c;
        case 0x3aff40u: goto label_3aff40;
        case 0x3aff44u: goto label_3aff44;
        case 0x3aff48u: goto label_3aff48;
        case 0x3aff4cu: goto label_3aff4c;
        case 0x3aff50u: goto label_3aff50;
        case 0x3aff54u: goto label_3aff54;
        case 0x3aff58u: goto label_3aff58;
        case 0x3aff5cu: goto label_3aff5c;
        case 0x3aff60u: goto label_3aff60;
        case 0x3aff64u: goto label_3aff64;
        case 0x3aff68u: goto label_3aff68;
        case 0x3aff6cu: goto label_3aff6c;
        case 0x3aff70u: goto label_3aff70;
        case 0x3aff74u: goto label_3aff74;
        case 0x3aff78u: goto label_3aff78;
        case 0x3aff7cu: goto label_3aff7c;
        case 0x3aff80u: goto label_3aff80;
        case 0x3aff84u: goto label_3aff84;
        case 0x3aff88u: goto label_3aff88;
        case 0x3aff8cu: goto label_3aff8c;
        case 0x3aff90u: goto label_3aff90;
        case 0x3aff94u: goto label_3aff94;
        case 0x3aff98u: goto label_3aff98;
        case 0x3aff9cu: goto label_3aff9c;
        case 0x3affa0u: goto label_3affa0;
        case 0x3affa4u: goto label_3affa4;
        case 0x3affa8u: goto label_3affa8;
        case 0x3affacu: goto label_3affac;
        case 0x3affb0u: goto label_3affb0;
        case 0x3affb4u: goto label_3affb4;
        case 0x3affb8u: goto label_3affb8;
        case 0x3affbcu: goto label_3affbc;
        case 0x3affc0u: goto label_3affc0;
        case 0x3affc4u: goto label_3affc4;
        case 0x3affc8u: goto label_3affc8;
        case 0x3affccu: goto label_3affcc;
        case 0x3affd0u: goto label_3affd0;
        case 0x3affd4u: goto label_3affd4;
        case 0x3affd8u: goto label_3affd8;
        case 0x3affdcu: goto label_3affdc;
        case 0x3affe0u: goto label_3affe0;
        case 0x3affe4u: goto label_3affe4;
        case 0x3affe8u: goto label_3affe8;
        case 0x3affecu: goto label_3affec;
        case 0x3afff0u: goto label_3afff0;
        case 0x3afff4u: goto label_3afff4;
        case 0x3afff8u: goto label_3afff8;
        case 0x3afffcu: goto label_3afffc;
        case 0x3b0000u: goto label_3b0000;
        case 0x3b0004u: goto label_3b0004;
        case 0x3b0008u: goto label_3b0008;
        case 0x3b000cu: goto label_3b000c;
        case 0x3b0010u: goto label_3b0010;
        case 0x3b0014u: goto label_3b0014;
        case 0x3b0018u: goto label_3b0018;
        case 0x3b001cu: goto label_3b001c;
        case 0x3b0020u: goto label_3b0020;
        case 0x3b0024u: goto label_3b0024;
        case 0x3b0028u: goto label_3b0028;
        case 0x3b002cu: goto label_3b002c;
        case 0x3b0030u: goto label_3b0030;
        case 0x3b0034u: goto label_3b0034;
        case 0x3b0038u: goto label_3b0038;
        case 0x3b003cu: goto label_3b003c;
        case 0x3b0040u: goto label_3b0040;
        case 0x3b0044u: goto label_3b0044;
        case 0x3b0048u: goto label_3b0048;
        case 0x3b004cu: goto label_3b004c;
        case 0x3b0050u: goto label_3b0050;
        case 0x3b0054u: goto label_3b0054;
        case 0x3b0058u: goto label_3b0058;
        case 0x3b005cu: goto label_3b005c;
        case 0x3b0060u: goto label_3b0060;
        case 0x3b0064u: goto label_3b0064;
        case 0x3b0068u: goto label_3b0068;
        case 0x3b006cu: goto label_3b006c;
        case 0x3b0070u: goto label_3b0070;
        case 0x3b0074u: goto label_3b0074;
        case 0x3b0078u: goto label_3b0078;
        case 0x3b007cu: goto label_3b007c;
        case 0x3b0080u: goto label_3b0080;
        case 0x3b0084u: goto label_3b0084;
        case 0x3b0088u: goto label_3b0088;
        case 0x3b008cu: goto label_3b008c;
        case 0x3b0090u: goto label_3b0090;
        case 0x3b0094u: goto label_3b0094;
        case 0x3b0098u: goto label_3b0098;
        case 0x3b009cu: goto label_3b009c;
        case 0x3b00a0u: goto label_3b00a0;
        case 0x3b00a4u: goto label_3b00a4;
        case 0x3b00a8u: goto label_3b00a8;
        case 0x3b00acu: goto label_3b00ac;
        case 0x3b00b0u: goto label_3b00b0;
        case 0x3b00b4u: goto label_3b00b4;
        case 0x3b00b8u: goto label_3b00b8;
        case 0x3b00bcu: goto label_3b00bc;
        case 0x3b00c0u: goto label_3b00c0;
        case 0x3b00c4u: goto label_3b00c4;
        default: break;
    }

    ctx->pc = 0x3afa08u;

label_3afa08:
    // 0x3afa08: 0x27bdf670  addiu       $sp, $sp, -0x990
    ctx->pc = 0x3afa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964848));
label_3afa0c:
    // 0x3afa0c: 0x7fb00950  sq          $s0, 0x950($sp)
    ctx->pc = 0x3afa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 16));
label_3afa10:
    // 0x3afa10: 0x7fb20930  sq          $s2, 0x930($sp)
    ctx->pc = 0x3afa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 18));
label_3afa14:
    // 0x3afa14: 0x7fb30920  sq          $s3, 0x920($sp)
    ctx->pc = 0x3afa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 19));
label_3afa18:
    // 0x3afa18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3afa18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3afa1c:
    // 0x3afa1c: 0x7fb10940  sq          $s1, 0x940($sp)
    ctx->pc = 0x3afa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 17));
label_3afa20:
    // 0x3afa20: 0x7fb40910  sq          $s4, 0x910($sp)
    ctx->pc = 0x3afa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 20));
label_3afa24:
    // 0x3afa24: 0x7fb50900  sq          $s5, 0x900($sp)
    ctx->pc = 0x3afa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 21));
label_3afa28:
    // 0x3afa28: 0x7fb608f0  sq          $s6, 0x8F0($sp)
    ctx->pc = 0x3afa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 22));
label_3afa2c:
    // 0x3afa2c: 0xffbf08e0  sd          $ra, 0x8E0($sp)
    ctx->pc = 0x3afa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2272), GPR_U64(ctx, 31));
label_3afa30:
    // 0x3afa30: 0xe7b90988  swc1        $f25, 0x988($sp)
    ctx->pc = 0x3afa30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2440), bits); }
label_3afa34:
    // 0x3afa34: 0xe7b80980  swc1        $f24, 0x980($sp)
    ctx->pc = 0x3afa34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2432), bits); }
label_3afa38:
    // 0x3afa38: 0xe7b70978  swc1        $f23, 0x978($sp)
    ctx->pc = 0x3afa38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2424), bits); }
label_3afa3c:
    // 0x3afa3c: 0xe7b60970  swc1        $f22, 0x970($sp)
    ctx->pc = 0x3afa3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2416), bits); }
label_3afa40:
    // 0x3afa40: 0xe7b50968  swc1        $f21, 0x968($sp)
    ctx->pc = 0x3afa40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2408), bits); }
label_3afa44:
    // 0x3afa44: 0xe7b40960  swc1        $f20, 0x960($sp)
    ctx->pc = 0x3afa44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2400), bits); }
label_3afa48:
    // 0x3afa48: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3afa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3afa4c:
    // 0x3afa4c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3afa4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3afa50:
    // 0x3afa50: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3afa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3afa54:
    // 0x3afa54: 0x40f809  jalr        $v0
label_3afa58:
    if (ctx->pc == 0x3AFA58u) {
        ctx->pc = 0x3AFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA54u;
        // 0x3afa58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFA5Cu;
        goto label_3afa5c;
    }
    ctx->pc = 0x3AFA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AFA5Cu);
        ctx->pc = 0x3AFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA54u;
        // 0x3afa58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFA54u, 0x3AFA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AFA5Cu;
label_3afa5c:
    // 0x3afa5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3afa5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3afa60:
    // 0x3afa60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3afa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3afa64:
    // 0x3afa64: 0x27b00430  addiu       $s0, $sp, 0x430
    ctx->pc = 0x3afa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3afa68:
    // 0x3afa68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3afa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3afa6c:
    // 0x3afa6c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3afa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3afa70:
    // 0x3afa70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3afa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3afa74:
    // 0x3afa74: 0x0  nop
    ctx->pc = 0x3afa74u;
    // NOP
label_3afa78:
    // 0x3afa78: 0x0  nop
    ctx->pc = 0x3afa78u;
    // NOP
label_3afa7c:
    // 0x3afa7c: 0x0  nop
    ctx->pc = 0x3afa7cu;
    // NOP
label_3afa80:
    // 0x3afa80: 0x0  nop
    ctx->pc = 0x3afa80u;
    // NOP
label_3afa84:
    // 0x3afa84: 0x0  nop
    ctx->pc = 0x3afa84u;
    // NOP
label_3afa88:
    // 0x3afa88: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3afa8c:
    if (ctx->pc == 0x3AFA8Cu) {
        ctx->pc = 0x3AFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA88u;
        // 0x3afa8c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFA90u;
        goto label_3afa90;
    }
    ctx->pc = 0x3AFA88u;
    {
        const bool branch_taken_0x3afa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA88u;
        // 0x3afa8c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afa88) {
            ctx->pc = 0x3AFA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3afa78;
        }
    }
    ctx->pc = 0x3AFA90u;
label_3afa90:
    // 0x3afa90: 0xc138ddc  jal         func_4E3770
label_3afa94:
    if (ctx->pc == 0x3AFA94u) {
        ctx->pc = 0x3AFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA90u;
        // 0x3afa94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFA98u;
        goto label_3afa98;
    }
    ctx->pc = 0x3AFA90u;
    SET_GPR_U32(ctx, 31, 0x3AFA98u);
    ctx->pc = 0x3AFA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFA90u;
    // 0x3afa94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3AFA90u, 0x3AFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFA98u;
label_3afa98:
    // 0x3afa98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3afa9c:
    // 0x3afa9c: 0xc0e90ca  jal         func_3A4328
label_3afaa0:
    if (ctx->pc == 0x3AFAA0u) {
        ctx->pc = 0x3AFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA9Cu;
        // 0x3afaa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFAA4u;
        goto label_3afaa4;
    }
    ctx->pc = 0x3AFA9Cu;
    SET_GPR_U32(ctx, 31, 0x3AFAA4u);
    ctx->pc = 0x3AFAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFA9Cu;
    // 0x3afaa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3AFA9Cu, 0x3AFAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFAA4u;
label_3afaa4:
    // 0x3afaa4: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3afaa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3afaa8:
    // 0x3afaa8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3afaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3afaac:
    // 0x3afaac: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3afaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3afab0:
    // 0x3afab0: 0x92630020  lbu         $v1, 0x20($s3)
    ctx->pc = 0x3afab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_3afab4:
    // 0x3afab4: 0x50640012  beql        $v1, $a0, . + 4 + (0x12 << 2)
label_3afab8:
    if (ctx->pc == 0x3AFAB8u) {
        ctx->pc = 0x3AFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFAB4u;
        // 0x3afab8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFABCu;
        goto label_3afabc;
    }
    ctx->pc = 0x3AFAB4u;
    {
        const bool branch_taken_0x3afab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3afab4) {
            ctx->pc = 0x3AFAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFAB4u;
            // 0x3afab8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFB00u;
            goto label_3afb00;
        }
    }
    ctx->pc = 0x3AFABCu;
label_3afabc:
    // 0x3afabc: 0xc0e9694  jal         func_3A5A50
label_3afac0:
    if (ctx->pc == 0x3AFAC0u) {
        ctx->pc = 0x3AFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFABCu;
        // 0x3afac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFAC4u;
        goto label_3afac4;
    }
    ctx->pc = 0x3AFABCu;
    SET_GPR_U32(ctx, 31, 0x3AFAC4u);
    ctx->pc = 0x3AFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFABCu;
    // 0x3afac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AFABCu, 0x3AFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFAC4u;
label_3afac4:
    // 0x3afac4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3afac8:
    if (ctx->pc == 0x3AFAC8u) {
        ctx->pc = 0x3AFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFAC4u;
        // 0x3afac8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFACCu;
        goto label_3afacc;
    }
    ctx->pc = 0x3AFAC4u;
    {
        const bool branch_taken_0x3afac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afac4) {
            ctx->pc = 0x3AFAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFAC4u;
            // 0x3afac8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFB00u;
            goto label_3afb00;
        }
    }
    ctx->pc = 0x3AFACCu;
label_3afacc:
    // 0x3afacc: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x3afaccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3afad0:
    // 0x3afad0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3afad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_3afad4:
    // 0x3afad4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3afad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3afad8:
    // 0x3afad8: 0xc0e94a0  jal         func_3A5280
label_3afadc:
    if (ctx->pc == 0x3AFADCu) {
        ctx->pc = 0x3AFADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFAD8u;
        // 0x3afadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFAE0u;
        goto label_3afae0;
    }
    ctx->pc = 0x3AFAD8u;
    SET_GPR_U32(ctx, 31, 0x3AFAE0u);
    ctx->pc = 0x3AFADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFAD8u;
    // 0x3afadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3AFAD8u, 0x3AFAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFAE0u;
label_3afae0:
    // 0x3afae0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3afae4:
    if (ctx->pc == 0x3AFAE4u) {
        ctx->pc = 0x3AFAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFAE0u;
        // 0x3afae4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFAE8u;
        goto label_3afae8;
    }
    ctx->pc = 0x3AFAE0u;
    {
        const bool branch_taken_0x3afae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afae0) {
            ctx->pc = 0x3AFAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFAE0u;
            // 0x3afae4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFB00u;
            goto label_3afb00;
        }
    }
    ctx->pc = 0x3AFAE8u;
label_3afae8:
    // 0x3afae8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3afae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3afaec:
    // 0x3afaec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3afaecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3afaf0:
    // 0x3afaf0: 0xc0e947e  jal         func_3A51F8
label_3afaf4:
    if (ctx->pc == 0x3AFAF4u) {
        ctx->pc = 0x3AFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFAF0u;
        // 0x3afaf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFAF8u;
        goto label_3afaf8;
    }
    ctx->pc = 0x3AFAF0u;
    SET_GPR_U32(ctx, 31, 0x3AFAF8u);
    ctx->pc = 0x3AFAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFAF0u;
    // 0x3afaf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3AFAF0u, 0x3AFAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFAF8u;
label_3afaf8:
    // 0x3afaf8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3afafc:
    if (ctx->pc == 0x3AFAFCu) {
        ctx->pc = 0x3AFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFAF8u;
        // 0x3afafc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFB00u;
        goto label_3afb00;
    }
    ctx->pc = 0x3AFAF8u;
    {
        const bool branch_taken_0x3afaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afaf8) {
            ctx->pc = 0x3AFAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFAF8u;
            // 0x3afafc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFB00u;
            goto label_3afb00;
        }
    }
    ctx->pc = 0x3AFB00u;
label_3afb00:
    // 0x3afb00: 0x16200160  bnez        $s1, . + 4 + (0x160 << 2)
label_3afb04:
    if (ctx->pc == 0x3AFB04u) {
        ctx->pc = 0x3AFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB00u;
        // 0x3afb04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFB08u;
        goto label_3afb08;
    }
    ctx->pc = 0x3AFB00u;
    {
        const bool branch_taken_0x3afb00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB00u;
        // 0x3afb04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb00) {
            ctx->pc = 0x3B0084u;
            goto label_3b0084;
        }
    }
    ctx->pc = 0x3AFB08u;
label_3afb08:
    // 0x3afb08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3afb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3afb0c:
    // 0x3afb0c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3afb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3afb10:
    // 0x3afb10: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3afb10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3afb14:
    // 0x3afb14: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3afb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3afb18:
    // 0x3afb18: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x3afb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_3afb1c:
    // 0x3afb1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3afb20:
    if (ctx->pc == 0x3AFB20u) {
        ctx->pc = 0x3AFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB1Cu;
        // 0x3afb20: 0x7a620000  lq          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFB24u;
        goto label_3afb24;
    }
    ctx->pc = 0x3AFB1Cu;
    {
        const bool branch_taken_0x3afb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afb1c) {
            ctx->pc = 0x3AFB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFB1Cu;
            // 0x3afb20: 0x7a620000  lq          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFB30u;
            goto label_3afb30;
        }
    }
    ctx->pc = 0x3AFB24u;
label_3afb24:
    // 0x3afb24: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3afb24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3afb28:
    // 0x3afb28: 0x10000016  b           . + 4 + (0x16 << 2)
label_3afb2c:
    if (ctx->pc == 0x3AFB2Cu) {
        ctx->pc = 0x3AFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB28u;
        // 0x3afb2c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFB30u;
        goto label_3afb30;
    }
    ctx->pc = 0x3AFB28u;
    {
        const bool branch_taken_0x3afb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB28u;
        // 0x3afb2c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb28) {
            ctx->pc = 0x3AFB84u;
            goto label_3afb84;
        }
    }
    ctx->pc = 0x3AFB30u;
label_3afb30:
    // 0x3afb30: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3afb30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3afb34:
    // 0x3afb34: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3afb34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3afb38:
    // 0x3afb38: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3afb38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3afb3c:
    // 0x3afb3c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3afb3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3afb40:
    // 0x3afb40: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3afb40u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3afb44:
    // 0x3afb44: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3afb44u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3afb48:
    // 0x3afb48: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3afb48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3afb4c:
    // 0x3afb4c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3afb4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3afb50:
    // 0x3afb50: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3afb50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3afb54:
    // 0x3afb54: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3afb54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3afb58:
    // 0x3afb58: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3afb58u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3afb5c:
    // 0x3afb5c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3afb5cu;
    // VWAITQ (Q already resolved in this runtime)
label_3afb60:
    // 0x3afb60: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3afb60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3afb64:
    // 0x3afb64: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x3afb64u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_3afb68:
    // 0x3afb68: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3afb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3afb6c:
    // 0x3afb6c: 0x7fa40430  sq          $a0, 0x430($sp)
    ctx->pc = 0x3afb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 4));
label_3afb70:
    // 0x3afb70: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3afb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3afb74:
    // 0x3afb74: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3afb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3afb78:
    // 0x3afb78: 0x7fa404a0  sq          $a0, 0x4A0($sp)
    ctx->pc = 0x3afb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 4));
label_3afb7c:
    // 0x3afb7c: 0x7fa40490  sq          $a0, 0x490($sp)
    ctx->pc = 0x3afb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 4));
label_3afb80:
    // 0x3afb80: 0x7fa40440  sq          $a0, 0x440($sp)
    ctx->pc = 0x3afb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 4));
label_3afb84:
    // 0x3afb84: 0x92630020  lbu         $v1, 0x20($s3)
    ctx->pc = 0x3afb84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_3afb88:
    // 0x3afb88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3afb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3afb8c:
    // 0x3afb8c: 0x546200af  bnel        $v1, $v0, . + 4 + (0xAF << 2)
label_3afb90:
    if (ctx->pc == 0x3AFB90u) {
        ctx->pc = 0x3AFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB8Cu;
        // 0x3afb90: 0x92620020  lbu         $v0, 0x20($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFB94u;
        goto label_3afb94;
    }
    ctx->pc = 0x3AFB8Cu;
    {
        const bool branch_taken_0x3afb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3afb8c) {
            ctx->pc = 0x3AFB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFB8Cu;
            // 0x3afb90: 0x92620020  lbu         $v0, 0x20($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFE4Cu;
            goto label_3afe4c;
        }
    }
    ctx->pc = 0x3AFB94u;
label_3afb94:
    // 0x3afb94: 0xc0e9694  jal         func_3A5A50
label_3afb98:
    if (ctx->pc == 0x3AFB98u) {
        ctx->pc = 0x3AFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB94u;
        // 0x3afb98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFB9Cu;
        goto label_3afb9c;
    }
    ctx->pc = 0x3AFB94u;
    SET_GPR_U32(ctx, 31, 0x3AFB9Cu);
    ctx->pc = 0x3AFB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFB94u;
    // 0x3afb98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AFB94u, 0x3AFB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFB9Cu;
label_3afb9c:
    // 0x3afb9c: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_3afba0:
    if (ctx->pc == 0x3AFBA0u) {
        ctx->pc = 0x3AFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB9Cu;
        // 0x3afba0: 0x7ba30410  lq          $v1, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFBA4u;
        goto label_3afba4;
    }
    ctx->pc = 0x3AFB9Cu;
    {
        const bool branch_taken_0x3afb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB9Cu;
        // 0x3afba0: 0x7ba30410  lq          $v1, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb9c) {
            ctx->pc = 0x3AFE48u;
            goto label_3afe48;
        }
    }
    ctx->pc = 0x3AFBA4u;
label_3afba4:
    // 0x3afba4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3afba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3afba8:
    // 0x3afba8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3afba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3afbac:
    // 0x3afbac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3afbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3afbb0:
    // 0x3afbb0: 0x27b104b0  addiu       $s1, $sp, 0x4B0
    ctx->pc = 0x3afbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3afbb4:
    // 0x3afbb4: 0x27b40440  addiu       $s4, $sp, 0x440
    ctx->pc = 0x3afbb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3afbb8:
    // 0x3afbb8: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3afbb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3afbbc:
    // 0x3afbbc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3afbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3afbc0:
    // 0x3afbc0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3afbc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3afbc4:
    // 0x3afbc4: 0x26101fa8  addiu       $s0, $s0, 0x1FA8
    ctx->pc = 0x3afbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8104));
label_3afbc8:
    // 0x3afbc8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3afbc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3afbcc:
    // 0x3afbcc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3afbccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3afbd0:
    // 0x3afbd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3afbd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3afbd4:
    // 0x3afbd4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3afbd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3afbd8:
    // 0x3afbd8: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3afbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3afbdc:
    // 0x3afbdc: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3afbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3afbe0:
    // 0x3afbe0: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3afbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3afbe4:
    // 0x3afbe4: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3afbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3afbe8:
    // 0x3afbe8: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3afbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3afbec:
    // 0x3afbec: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3afbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3afbf0:
    // 0x3afbf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3afbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3afbf4:
    // 0x3afbf4: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3afbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3afbf8:
    // 0x3afbf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3afbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3afbfc:
    // 0x3afbfc: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x3afbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3afc00:
    // 0x3afc00: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3afc00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3afc04:
    // 0x3afc04: 0xc0e9fa6  jal         func_3A7E98
label_3afc08:
    if (ctx->pc == 0x3AFC08u) {
        ctx->pc = 0x3AFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC04u;
        // 0x3afc08: 0xafa20470  sw          $v0, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFC0Cu;
        goto label_3afc0c;
    }
    ctx->pc = 0x3AFC04u;
    SET_GPR_U32(ctx, 31, 0x3AFC0Cu);
    ctx->pc = 0x3AFC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFC04u;
    // 0x3afc08: 0xafa20470  sw          $v0, 0x470($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AFC04u, 0x3AFC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFC0Cu;
label_3afc0c:
    // 0x3afc0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3afc10:
    // 0x3afc10: 0xc0f15bc  jal         func_3C56F0
label_3afc14:
    if (ctx->pc == 0x3AFC14u) {
        ctx->pc = 0x3AFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC10u;
        // 0x3afc14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFC18u;
        goto label_3afc18;
    }
    ctx->pc = 0x3AFC10u;
    SET_GPR_U32(ctx, 31, 0x3AFC18u);
    ctx->pc = 0x3AFC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFC10u;
    // 0x3afc14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AFC10u, 0x3AFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFC18u;
label_3afc18:
    // 0x3afc18: 0xc0e8630  jal         func_3A18C0
label_3afc1c:
    if (ctx->pc == 0x3AFC1Cu) {
        ctx->pc = 0x3AFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC18u;
        // 0x3afc1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFC20u;
        goto label_3afc20;
    }
    ctx->pc = 0x3AFC18u;
    SET_GPR_U32(ctx, 31, 0x3AFC20u);
    ctx->pc = 0x3AFC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFC18u;
    // 0x3afc1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3AFC18u, 0x3AFC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFC20u;
label_3afc20:
    // 0x3afc20: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_3afc24:
    if (ctx->pc == 0x3AFC24u) {
        ctx->pc = 0x3AFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC20u;
        // 0x3afc24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFC28u;
        goto label_3afc28;
    }
    ctx->pc = 0x3AFC20u;
    {
        const bool branch_taken_0x3afc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC20u;
        // 0x3afc24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afc20) {
            ctx->pc = 0x3AFD0Cu;
            goto label_3afd0c;
        }
    }
    ctx->pc = 0x3AFC28u;
label_3afc28:
    // 0x3afc28: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3afc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3afc2c:
    // 0x3afc2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3afc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3afc30:
    // 0x3afc30: 0x7ba30430  lq          $v1, 0x430($sp)
    ctx->pc = 0x3afc30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3afc34:
    // 0x3afc34: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3afc34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3afc38:
    // 0x3afc38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3afc38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3afc3c:
    // 0x3afc3c: 0x27b00890  addiu       $s0, $sp, 0x890
    ctx->pc = 0x3afc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3afc40:
    // 0x3afc40: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3afc40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3afc44:
    // 0x3afc44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3afc44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3afc48:
    // 0x3afc48: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3afc48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3afc4c:
    // 0x3afc4c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3afc4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3afc50:
    // 0x3afc50: 0x27b20850  addiu       $s2, $sp, 0x850
    ctx->pc = 0x3afc50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3afc54:
    // 0x3afc54: 0x7fa30880  sq          $v1, 0x880($sp)
    ctx->pc = 0x3afc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 3));
label_3afc58:
    // 0x3afc58: 0x26311fb8  addiu       $s1, $s1, 0x1FB8
    ctx->pc = 0x3afc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8120));
label_3afc5c:
    // 0x3afc5c: 0x7fa30890  sq          $v1, 0x890($sp)
    ctx->pc = 0x3afc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 3));
label_3afc60:
    // 0x3afc60: 0x7fa30870  sq          $v1, 0x870($sp)
    ctx->pc = 0x3afc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 3));
label_3afc64:
    // 0x3afc64: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x3afc64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3afc68:
    // 0x3afc68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3afc68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3afc6c:
    // 0x3afc6c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3afc6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3afc70:
    // 0x3afc70: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3afc70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3afc74:
    // 0x3afc74: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3afc74u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3afc78:
    // 0x3afc78: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3afc78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3afc7c:
    // 0x3afc7c: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3afc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3afc80:
    // 0x3afc80: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3afc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3afc84:
    // 0x3afc84: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3afc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3afc88:
    // 0x3afc88: 0xc0e8630  jal         func_3A18C0
label_3afc8c:
    if (ctx->pc == 0x3AFC8Cu) {
        ctx->pc = 0x3AFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC88u;
        // 0x3afc8c: 0x7fa20860  sq          $v0, 0x860($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFC90u;
        goto label_3afc90;
    }
    ctx->pc = 0x3AFC88u;
    SET_GPR_U32(ctx, 31, 0x3AFC90u);
    ctx->pc = 0x3AFC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFC88u;
    // 0x3afc8c: 0x7fa20860  sq          $v0, 0x860($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3AFC88u, 0x3AFC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFC90u;
label_3afc90:
    // 0x3afc90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3afc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3afc94:
    // 0x3afc94: 0xc0e911e  jal         func_3A4478
label_3afc98:
    if (ctx->pc == 0x3AFC98u) {
        ctx->pc = 0x3AFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC94u;
        // 0x3afc98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFC9Cu;
        goto label_3afc9c;
    }
    ctx->pc = 0x3AFC94u;
    SET_GPR_U32(ctx, 31, 0x3AFC9Cu);
    ctx->pc = 0x3AFC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFC94u;
    // 0x3afc98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3AFC94u, 0x3AFC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFC9Cu;
label_3afc9c:
    // 0x3afc9c: 0x7ba20890  lq          $v0, 0x890($sp)
    ctx->pc = 0x3afc9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3afca0:
    // 0x3afca0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3afca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3afca4:
    // 0x3afca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3afca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3afca8:
    // 0x3afca8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3afca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3afcac:
    // 0x3afcac: 0x27b00880  addiu       $s0, $sp, 0x880
    ctx->pc = 0x3afcacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3afcb0:
    // 0x3afcb0: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3afcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3afcb4:
    // 0x3afcb4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3afcb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3afcb8:
    // 0x3afcb8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3afcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3afcbc:
    // 0x3afcbc: 0xc0cd518  jal         func_335460
label_3afcc0:
    if (ctx->pc == 0x3AFCC0u) {
        ctx->pc = 0x3AFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFCBCu;
        // 0x3afcc0: 0x7fa20880  sq          $v0, 0x880($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFCC4u;
        goto label_3afcc4;
    }
    ctx->pc = 0x3AFCBCu;
    SET_GPR_U32(ctx, 31, 0x3AFCC4u);
    ctx->pc = 0x3AFCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFCBCu;
    // 0x3afcc0: 0x7fa20880  sq          $v0, 0x880($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AFCBCu, 0x3AFCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFCC4u;
label_3afcc4:
    // 0x3afcc4: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3afcc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3afcc8:
    // 0x3afcc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3afcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3afccc:
    // 0x3afccc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3afcccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3afcd0:
    // 0x3afcd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3afcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3afcd4:
    // 0x3afcd4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3afcd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3afcd8:
    // 0x3afcd8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3afcd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3afcdc:
    // 0x3afcdc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3afcdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3afce0:
    // 0x3afce0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3afce0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3afce4:
    // 0x3afce4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3afce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3afce8:
    // 0x3afce8: 0x7fa208a0  sq          $v0, 0x8A0($sp)
    ctx->pc = 0x3afce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 2));
label_3afcec:
    // 0x3afcec: 0x27a708a0  addiu       $a3, $sp, 0x8A0
    ctx->pc = 0x3afcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_3afcf0:
    // 0x3afcf0: 0x7fa208d0  sq          $v0, 0x8D0($sp)
    ctx->pc = 0x3afcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 2));
label_3afcf4:
    // 0x3afcf4: 0x7fa208c0  sq          $v0, 0x8C0($sp)
    ctx->pc = 0x3afcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 2));
label_3afcf8:
    // 0x3afcf8: 0xc0e9fa6  jal         func_3A7E98
label_3afcfc:
    if (ctx->pc == 0x3AFCFCu) {
        ctx->pc = 0x3AFCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFCF8u;
        // 0x3afcfc: 0x7fa208b0  sq          $v0, 0x8B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFD00u;
        goto label_3afd00;
    }
    ctx->pc = 0x3AFCF8u;
    SET_GPR_U32(ctx, 31, 0x3AFD00u);
    ctx->pc = 0x3AFCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFCF8u;
    // 0x3afcfc: 0x7fa208b0  sq          $v0, 0x8B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AFCF8u, 0x3AFD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD00u;
label_3afd00:
    // 0x3afd00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3afd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3afd04:
    // 0x3afd04: 0xc0f15bc  jal         func_3C56F0
label_3afd08:
    if (ctx->pc == 0x3AFD08u) {
        ctx->pc = 0x3AFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD04u;
        // 0x3afd08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFD0Cu;
        goto label_3afd0c;
    }
    ctx->pc = 0x3AFD04u;
    SET_GPR_U32(ctx, 31, 0x3AFD0Cu);
    ctx->pc = 0x3AFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD04u;
    // 0x3afd08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AFD04u, 0x3AFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD0Cu;
label_3afd0c:
    // 0x3afd0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3afd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3afd10:
    // 0x3afd10: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x3afd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3afd14:
    // 0x3afd14: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x3afd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_3afd18:
    // 0x3afd18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3afd18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3afd1c:
    // 0x3afd1c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3afd1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3afd20:
    // 0x3afd20: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3afd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3afd24:
    // 0x3afd24: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3afd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3afd28:
    // 0x3afd28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3afd28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3afd2c:
    // 0x3afd2c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3afd2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3afd30:
    // 0x3afd30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3afd30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3afd34:
    // 0x3afd34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3afd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3afd38:
    // 0x3afd38: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3afd38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3afd3c:
    // 0x3afd3c: 0x27b50460  addiu       $s5, $sp, 0x460
    ctx->pc = 0x3afd3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3afd40:
    // 0x3afd40: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x3afd40u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
label_3afd44:
    // 0x3afd44: 0x27b40850  addiu       $s4, $sp, 0x850
    ctx->pc = 0x3afd44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3afd48:
    // 0x3afd48: 0xc0e9694  jal         func_3A5A50
label_3afd4c:
    if (ctx->pc == 0x3AFD4Cu) {
        ctx->pc = 0x3AFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD48u;
        // 0x3afd4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFD50u;
        goto label_3afd50;
    }
    ctx->pc = 0x3AFD48u;
    SET_GPR_U32(ctx, 31, 0x3AFD50u);
    ctx->pc = 0x3AFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD48u;
    // 0x3afd4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AFD48u, 0x3AFD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD50u;
label_3afd50:
    // 0x3afd50: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_3afd54:
    if (ctx->pc == 0x3AFD54u) {
        ctx->pc = 0x3AFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD50u;
        // 0x3afd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFD58u;
        goto label_3afd58;
    }
    ctx->pc = 0x3AFD50u;
    {
        const bool branch_taken_0x3afd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD50u;
        // 0x3afd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afd50) {
            ctx->pc = 0x3AFE34u;
            goto label_3afe34;
        }
    }
    ctx->pc = 0x3AFD58u;
label_3afd58:
    // 0x3afd58: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3afd58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3afd5c:
    // 0x3afd5c: 0xc0cd518  jal         func_335460
label_3afd60:
    if (ctx->pc == 0x3AFD60u) {
        ctx->pc = 0x3AFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD5Cu;
        // 0x3afd60: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFD64u;
        goto label_3afd64;
    }
    ctx->pc = 0x3AFD5Cu;
    SET_GPR_U32(ctx, 31, 0x3AFD64u);
    ctx->pc = 0x3AFD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD5Cu;
    // 0x3afd60: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AFD5Cu, 0x3AFD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD64u;
label_3afd64:
    // 0x3afd64: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3afd64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3afd68:
    // 0x3afd68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3afd6c:
    // 0x3afd6c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3afd6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3afd70:
    // 0x3afd70: 0xc0cd518  jal         func_335460
label_3afd74:
    if (ctx->pc == 0x3AFD74u) {
        ctx->pc = 0x3AFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD70u;
        // 0x3afd74: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFD78u;
        goto label_3afd78;
    }
    ctx->pc = 0x3AFD70u;
    SET_GPR_U32(ctx, 31, 0x3AFD78u);
    ctx->pc = 0x3AFD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD70u;
    // 0x3afd74: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AFD70u, 0x3AFD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD78u;
label_3afd78:
    // 0x3afd78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3afd78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3afd7c:
    // 0x3afd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3afd80:
    // 0x3afd80: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3afd80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3afd84:
    // 0x3afd84: 0xc0cd518  jal         func_335460
label_3afd88:
    if (ctx->pc == 0x3AFD88u) {
        ctx->pc = 0x3AFD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD84u;
        // 0x3afd88: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFD8Cu;
        goto label_3afd8c;
    }
    ctx->pc = 0x3AFD84u;
    SET_GPR_U32(ctx, 31, 0x3AFD8Cu);
    ctx->pc = 0x3AFD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD84u;
    // 0x3afd88: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AFD84u, 0x3AFD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD8Cu;
label_3afd8c:
    // 0x3afd8c: 0xe7b50460  swc1        $f21, 0x460($sp)
    ctx->pc = 0x3afd8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3afd90:
    // 0x3afd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3afd94:
    // 0x3afd94: 0xe7b40464  swc1        $f20, 0x464($sp)
    ctx->pc = 0x3afd94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_3afd98:
    // 0x3afd98: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3afd98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3afd9c:
    // 0x3afd9c: 0xe7a00468  swc1        $f0, 0x468($sp)
    ctx->pc = 0x3afd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_3afda0:
    // 0x3afda0: 0xe6b8000c  swc1        $f24, 0xC($s5)
    ctx->pc = 0x3afda0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3afda4:
    // 0x3afda4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3afda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3afda8:
    // 0x3afda8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3afda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3afdac:
    // 0x3afdac: 0x7ba30460  lq          $v1, 0x460($sp)
    ctx->pc = 0x3afdacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3afdb0:
    // 0x3afdb0: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3afdb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3afdb4:
    // 0x3afdb4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3afdb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3afdb8:
    // 0x3afdb8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3afdb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3afdbc:
    // 0x3afdbc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3afdbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3afdc0:
    // 0x3afdc0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3afdc0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3afdc4:
    // 0x3afdc4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3afdc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3afdc8:
    // 0x3afdc8: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3afdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3afdcc:
    // 0x3afdcc: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3afdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3afdd0:
    // 0x3afdd0: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3afdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3afdd4:
    // 0x3afdd4: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3afdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3afdd8:
    // 0x3afdd8: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3afdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3afddc:
    // 0x3afddc: 0xc0cd518  jal         func_335460
label_3afde0:
    if (ctx->pc == 0x3AFDE0u) {
        ctx->pc = 0x3AFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFDDCu;
        // 0x3afde0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFDE4u;
        goto label_3afde4;
    }
    ctx->pc = 0x3AFDDCu;
    SET_GPR_U32(ctx, 31, 0x3AFDE4u);
    ctx->pc = 0x3AFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFDDCu;
    // 0x3afde0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AFDDCu, 0x3AFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFDE4u;
label_3afde4:
    // 0x3afde4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3afde4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3afde8:
    // 0x3afde8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3afde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3afdec:
    // 0x3afdec: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3afdecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3afdf0:
    // 0x3afdf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3afdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3afdf4:
    // 0x3afdf4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3afdf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3afdf8:
    // 0x3afdf8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3afdf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3afdfc:
    // 0x3afdfc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3afdfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3afe00:
    // 0x3afe00: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3afe00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3afe04:
    // 0x3afe04: 0x27a60860  addiu       $a2, $sp, 0x860
    ctx->pc = 0x3afe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3afe08:
    // 0x3afe08: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3afe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3afe0c:
    // 0x3afe0c: 0x27a70880  addiu       $a3, $sp, 0x880
    ctx->pc = 0x3afe0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3afe10:
    // 0x3afe10: 0x7fa20860  sq          $v0, 0x860($sp)
    ctx->pc = 0x3afe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
label_3afe14:
    // 0x3afe14: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3afe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3afe18:
    // 0x3afe18: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3afe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3afe1c:
    // 0x3afe1c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x3afe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3afe20:
    // 0x3afe20: 0xc0e9fa6  jal         func_3A7E98
label_3afe24:
    if (ctx->pc == 0x3AFE24u) {
        ctx->pc = 0x3AFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE20u;
        // 0x3afe24: 0xafa30880  sw          $v1, 0x880($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFE28u;
        goto label_3afe28;
    }
    ctx->pc = 0x3AFE20u;
    SET_GPR_U32(ctx, 31, 0x3AFE28u);
    ctx->pc = 0x3AFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFE20u;
    // 0x3afe24: 0xafa30880  sw          $v1, 0x880($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AFE20u, 0x3AFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFE28u;
label_3afe28:
    // 0x3afe28: 0x26c41fc0  addiu       $a0, $s6, 0x1FC0
    ctx->pc = 0x3afe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 8128));
label_3afe2c:
    // 0x3afe2c: 0xc0f15bc  jal         func_3C56F0
label_3afe30:
    if (ctx->pc == 0x3AFE30u) {
        ctx->pc = 0x3AFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE2Cu;
        // 0x3afe30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFE34u;
        goto label_3afe34;
    }
    ctx->pc = 0x3AFE2Cu;
    SET_GPR_U32(ctx, 31, 0x3AFE34u);
    ctx->pc = 0x3AFE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFE2Cu;
    // 0x3afe30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AFE2Cu, 0x3AFE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFE34u;
label_3afe34:
    // 0x3afe34: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3afe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3afe38:
    // 0x3afe38: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x3afe38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3afe3c:
    // 0x3afe3c: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x3afe3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3afe40:
    // 0x3afe40: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
label_3afe44:
    if (ctx->pc == 0x3AFE44u) {
        ctx->pc = 0x3AFE48u;
        goto label_3afe48;
    }
    ctx->pc = 0x3AFE40u;
    {
        const bool branch_taken_0x3afe40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3afe40) {
            ctx->pc = 0x3AFD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3afd48;
        }
    }
    ctx->pc = 0x3AFE48u;
label_3afe48:
    // 0x3afe48: 0x92620020  lbu         $v0, 0x20($s3)
    ctx->pc = 0x3afe48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_3afe4c:
    // 0x3afe4c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3afe4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3afe50:
    // 0x3afe50: 0x54400089  bnel        $v0, $zero, . + 4 + (0x89 << 2)
label_3afe54:
    if (ctx->pc == 0x3AFE54u) {
        ctx->pc = 0x3AFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE50u;
        // 0x3afe54: 0x92630020  lbu         $v1, 0x20($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFE58u;
        goto label_3afe58;
    }
    ctx->pc = 0x3AFE50u;
    {
        const bool branch_taken_0x3afe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3afe50) {
            ctx->pc = 0x3AFE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFE50u;
            // 0x3afe54: 0x92630020  lbu         $v1, 0x20($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0078u;
            goto label_3b0078;
        }
    }
    ctx->pc = 0x3AFE58u;
label_3afe58:
    // 0x3afe58: 0xc0e9694  jal         func_3A5A50
label_3afe5c:
    if (ctx->pc == 0x3AFE5Cu) {
        ctx->pc = 0x3AFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE58u;
        // 0x3afe5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFE60u;
        goto label_3afe60;
    }
    ctx->pc = 0x3AFE58u;
    SET_GPR_U32(ctx, 31, 0x3AFE60u);
    ctx->pc = 0x3AFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFE58u;
    // 0x3afe5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AFE58u, 0x3AFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFE60u;
label_3afe60:
    // 0x3afe60: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_3afe64:
    if (ctx->pc == 0x3AFE64u) {
        ctx->pc = 0x3AFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE60u;
        // 0x3afe64: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFE68u;
        goto label_3afe68;
    }
    ctx->pc = 0x3AFE60u;
    {
        const bool branch_taken_0x3afe60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE60u;
        // 0x3afe64: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afe60) {
            ctx->pc = 0x3B0074u;
            goto label_3b0074;
        }
    }
    ctx->pc = 0x3AFE68u;
label_3afe68:
    // 0x3afe68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3afe68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3afe6c:
    // 0x3afe6c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3afe6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3afe70:
    // 0x3afe70: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3afe70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3afe74:
    // 0x3afe74: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3afe74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3afe78:
    // 0x3afe78: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3afe78u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3afe7c:
    // 0x3afe7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3afe7cu;
    // VWAITQ (Q already resolved in this runtime)
label_3afe80:
    // 0x3afe80: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3afe80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3afe84:
    // 0x3afe84: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x3afe84u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_3afe88:
    // 0x3afe88: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x3afe88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3afe8c:
    // 0x3afe8c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3afe8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3afe90:
    // 0x3afe90: 0x0  nop
    ctx->pc = 0x3afe90u;
    // NOP
label_3afe94:
    // 0x3afe94: 0x46190032  c.eq.s      $f0, $f25
    ctx->pc = 0x3afe94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3afe98:
    // 0x3afe98: 0x0  nop
    ctx->pc = 0x3afe98u;
    // NOP
label_3afe9c:
    // 0x3afe9c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_3afea0:
    if (ctx->pc == 0x3AFEA0u) {
        ctx->pc = 0x3AFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE9Cu;
        // 0x3afea0: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFEA4u;
        goto label_3afea4;
    }
    ctx->pc = 0x3AFE9Cu;
    {
        const bool branch_taken_0x3afe9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE9Cu;
        // 0x3afea0: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afe9c) {
            ctx->pc = 0x3AFEFCu;
            goto label_3afefc;
        }
    }
    ctx->pc = 0x3AFEA4u;
label_3afea4:
    // 0x3afea4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x3afea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3afea8:
    // 0x3afea8: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3afea8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3afeac:
    // 0x3afeac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3afeacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3afeb0:
    // 0x3afeb0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3afeb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3afeb4:
    // 0x3afeb4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3afeb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3afeb8:
    // 0x3afeb8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3afeb8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3afebc:
    // 0x3afebc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3afebcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3afec0:
    // 0x3afec0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3afec0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3afec4:
    // 0x3afec4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3afec4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3afec8:
    // 0x3afec8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3afec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3afecc:
    // 0x3afecc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3afeccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3afed0:
    // 0x3afed0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3afed0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3afed4:
    // 0x3afed4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3afed4u;
    // VWAITQ (Q already resolved in this runtime)
label_3afed8:
    // 0x3afed8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3afed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3afedc:
    // 0x3afedc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x3afedcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_3afee0:
    // 0x3afee0: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3afee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3afee4:
    // 0x3afee4: 0x7fa40430  sq          $a0, 0x430($sp)
    ctx->pc = 0x3afee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 4));
label_3afee8:
    // 0x3afee8: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3afee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3afeec:
    // 0x3afeec: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3afeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3afef0:
    // 0x3afef0: 0x7fa40480  sq          $a0, 0x480($sp)
    ctx->pc = 0x3afef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 4));
label_3afef4:
    // 0x3afef4: 0x7fa40470  sq          $a0, 0x470($sp)
    ctx->pc = 0x3afef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 4));
label_3afef8:
    // 0x3afef8: 0x7fa40440  sq          $a0, 0x440($sp)
    ctx->pc = 0x3afef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 4));
label_3afefc:
    // 0x3afefc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3afefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3aff00:
    // 0x3aff00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aff00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aff04:
    // 0x3aff04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3aff04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3aff08:
    // 0x3aff08: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3aff08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3aff0c:
    // 0x3aff0c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x3aff0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_3aff10:
    // 0x3aff10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aff10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aff14:
    // 0x3aff14: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3aff14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3aff18:
    // 0x3aff18: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3aff18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3aff1c:
    // 0x3aff1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aff20:
    // 0x3aff20: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3aff20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3aff24:
    // 0x3aff24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aff24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aff28:
    // 0x3aff28: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3aff28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3aff2c:
    // 0x3aff2c: 0xc0cd518  jal         func_335460
label_3aff30:
    if (ctx->pc == 0x3AFF30u) {
        ctx->pc = 0x3AFF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFF2Cu;
        // 0x3aff30: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFF34u;
        goto label_3aff34;
    }
    ctx->pc = 0x3AFF2Cu;
    SET_GPR_U32(ctx, 31, 0x3AFF34u);
    ctx->pc = 0x3AFF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFF2Cu;
    // 0x3aff30: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AFF2Cu, 0x3AFF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFF34u;
label_3aff34:
    // 0x3aff34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aff34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aff38:
    // 0x3aff38: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3aff38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3aff3c:
    // 0x3aff3c: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x3aff3cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_3aff40:
    // 0x3aff40: 0xc0cd518  jal         func_335460
label_3aff44:
    if (ctx->pc == 0x3AFF44u) {
        ctx->pc = 0x3AFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFF40u;
        // 0x3aff44: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFF48u;
        goto label_3aff48;
    }
    ctx->pc = 0x3AFF40u;
    SET_GPR_U32(ctx, 31, 0x3AFF48u);
    ctx->pc = 0x3AFF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFF40u;
    // 0x3aff44: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AFF40u, 0x3AFF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFF48u;
label_3aff48:
    // 0x3aff48: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3aff48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3aff4c:
    // 0x3aff4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aff50:
    // 0x3aff50: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3aff50u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3aff54:
    // 0x3aff54: 0xc0cd518  jal         func_335460
label_3aff58:
    if (ctx->pc == 0x3AFF58u) {
        ctx->pc = 0x3AFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFF54u;
        // 0x3aff58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFF5Cu;
        goto label_3aff5c;
    }
    ctx->pc = 0x3AFF54u;
    SET_GPR_U32(ctx, 31, 0x3AFF5Cu);
    ctx->pc = 0x3AFF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFF54u;
    // 0x3aff58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AFF54u, 0x3AFF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFF5Cu;
label_3aff5c:
    // 0x3aff5c: 0xe7b80460  swc1        $f24, 0x460($sp)
    ctx->pc = 0x3aff5cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3aff60:
    // 0x3aff60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aff64:
    // 0x3aff64: 0xe7b60464  swc1        $f22, 0x464($sp)
    ctx->pc = 0x3aff64u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_3aff68:
    // 0x3aff68: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3aff68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3aff6c:
    // 0x3aff6c: 0xe7a00468  swc1        $f0, 0x468($sp)
    ctx->pc = 0x3aff6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_3aff70:
    // 0x3aff70: 0xe7b7046c  swc1        $f23, 0x46C($sp)
    ctx->pc = 0x3aff70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1132), bits); }
label_3aff74:
    // 0x3aff74: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3aff74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3aff78:
    // 0x3aff78: 0x7ba30460  lq          $v1, 0x460($sp)
    ctx->pc = 0x3aff78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3aff7c:
    // 0x3aff7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3aff7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3aff80:
    // 0x3aff80: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3aff80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3aff84:
    // 0x3aff84: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3aff84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3aff88:
    // 0x3aff88: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3aff88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3aff8c:
    // 0x3aff8c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3aff8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3aff90:
    // 0x3aff90: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3aff90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3aff94:
    // 0x3aff94: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3aff94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3aff98:
    // 0x3aff98: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3aff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3aff9c:
    // 0x3aff9c: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3aff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3affa0:
    // 0x3affa0: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3affa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3affa4:
    // 0x3affa4: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3affa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3affa8:
    // 0x3affa8: 0xc0cd518  jal         func_335460
label_3affac:
    if (ctx->pc == 0x3AFFACu) {
        ctx->pc = 0x3AFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFFA8u;
        // 0x3affac: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFFB0u;
        goto label_3affb0;
    }
    ctx->pc = 0x3AFFA8u;
    SET_GPR_U32(ctx, 31, 0x3AFFB0u);
    ctx->pc = 0x3AFFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFFA8u;
    // 0x3affac: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AFFA8u, 0x3AFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFFB0u;
label_3affb0:
    // 0x3affb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3affb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3affb4:
    // 0x3affb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3affb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3affb8:
    // 0x3affb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3affb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3affbc:
    // 0x3affbc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3affbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3affc0:
    // 0x3affc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3affc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3affc4:
    // 0x3affc4: 0xc0cd518  jal         func_335460
label_3affc8:
    if (ctx->pc == 0x3AFFC8u) {
        ctx->pc = 0x3AFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFFC4u;
        // 0x3affc8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFFCCu;
        goto label_3affcc;
    }
    ctx->pc = 0x3AFFC4u;
    SET_GPR_U32(ctx, 31, 0x3AFFCCu);
    ctx->pc = 0x3AFFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFFC4u;
    // 0x3affc8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AFFC4u, 0x3AFFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFFCCu;
label_3affcc:
    // 0x3affcc: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3affccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3affd0:
    // 0x3affd0: 0x27a808a0  addiu       $t0, $sp, 0x8A0
    ctx->pc = 0x3affd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_3affd4:
    // 0x3affd4: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x3affd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3affd8:
    // 0x3affd8: 0x27b10440  addiu       $s1, $sp, 0x440
    ctx->pc = 0x3affd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3affdc:
    // 0x3affdc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3affdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3affe0:
    // 0x3affe0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3affe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3affe4:
    // 0x3affe4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3affe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3affe8:
    // 0x3affe8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3affe8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3affec:
    // 0x3affec: 0x7ba30420  lq          $v1, 0x420($sp)
    ctx->pc = 0x3affecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3afff0:
    // 0x3afff0: 0x7fa208a0  sq          $v0, 0x8A0($sp)
    ctx->pc = 0x3afff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 2));
label_3afff4:
    // 0x3afff4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3afff4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3afff8:
    // 0x3afff8: 0xe7b908a0  swc1        $f25, 0x8A0($sp)
    ctx->pc = 0x3afff8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2208), bits); }
label_3afffc:
    // 0x3afffc: 0x27a50850  addiu       $a1, $sp, 0x850
    ctx->pc = 0x3afffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3b0000:
    // 0x3b0000: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3b0000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3b0004:
    // 0x3b0004: 0x26101fd0  addiu       $s0, $s0, 0x1FD0
    ctx->pc = 0x3b0004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8144));
label_3b0008:
    // 0x3b0008: 0xe7b908a4  swc1        $f25, 0x8A4($sp)
    ctx->pc = 0x3b0008u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2212), bits); }
label_3b000c:
    // 0x3b000c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3b000cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b0010:
    // 0x3b0010: 0xe7a008a8  swc1        $f0, 0x8A8($sp)
    ctx->pc = 0x3b0010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2216), bits); }
label_3b0014:
    // 0x3b0014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0018:
    // 0x3b0018: 0x7fa30850  sq          $v1, 0x850($sp)
    ctx->pc = 0x3b0018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 3));
label_3b001c:
    // 0x3b001c: 0x27a60860  addiu       $a2, $sp, 0x860
    ctx->pc = 0x3b001cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3b0020:
    // 0x3b0020: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3b0020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3b0024:
    // 0x3b0024: 0xe517000c  swc1        $f23, 0xC($t0)
    ctx->pc = 0x3b0024u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_3b0028:
    // 0x3b0028: 0x7ba308a0  lq          $v1, 0x8A0($sp)
    ctx->pc = 0x3b0028u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3b002c:
    // 0x3b002c: 0x7ba20880  lq          $v0, 0x880($sp)
    ctx->pc = 0x3b002cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3b0030:
    // 0x3b0030: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b0030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b0034:
    // 0x3b0034: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b0034u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b0038:
    // 0x3b0038: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b0038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b003c:
    // 0x3b003c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b003cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b0040:
    // 0x3b0040: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b0040u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b0044:
    // 0x3b0044: 0x7fa30890  sq          $v1, 0x890($sp)
    ctx->pc = 0x3b0044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 3));
label_3b0048:
    // 0x3b0048: 0x7fa208a0  sq          $v0, 0x8A0($sp)
    ctx->pc = 0x3b0048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 2));
label_3b004c:
    // 0x3b004c: 0x7fa20860  sq          $v0, 0x860($sp)
    ctx->pc = 0x3b004cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
label_3b0050:
    // 0x3b0050: 0x7fa208b0  sq          $v0, 0x8B0($sp)
    ctx->pc = 0x3b0050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 2));
label_3b0054:
    // 0x3b0054: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3b0054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3b0058:
    // 0x3b0058: 0xc0e9fa6  jal         func_3A7E98
label_3b005c:
    if (ctx->pc == 0x3B005Cu) {
        ctx->pc = 0x3B005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0058u;
        // 0x3b005c: 0xafa008a0  sw          $zero, 0x8A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0060u;
        goto label_3b0060;
    }
    ctx->pc = 0x3B0058u;
    SET_GPR_U32(ctx, 31, 0x3B0060u);
    ctx->pc = 0x3B005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0058u;
    // 0x3b005c: 0xafa008a0  sw          $zero, 0x8A0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B0058u, 0x3B0060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0060u;
label_3b0060:
    // 0x3b0060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0064:
    // 0x3b0064: 0xc0f15bc  jal         func_3C56F0
label_3b0068:
    if (ctx->pc == 0x3B0068u) {
        ctx->pc = 0x3B0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0064u;
        // 0x3b0068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B006Cu;
        goto label_3b006c;
    }
    ctx->pc = 0x3B0064u;
    SET_GPR_U32(ctx, 31, 0x3B006Cu);
    ctx->pc = 0x3B0068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0064u;
    // 0x3b0068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B0064u, 0x3B006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B006Cu;
label_3b006c:
    // 0x3b006c: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3b006cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3b0070:
    // 0x3b0070: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x3b0070u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
label_3b0074:
    // 0x3b0074: 0x92630020  lbu         $v1, 0x20($s3)
    ctx->pc = 0x3b0074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_3b0078:
    // 0x3b0078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b007c:
    // 0x3b007c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b0080:
    // 0x3b0080: 0xa2630020  sb          $v1, 0x20($s3)
    ctx->pc = 0x3b0080u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 3));
label_3b0084:
    // 0x3b0084: 0x7bb00950  lq          $s0, 0x950($sp)
    ctx->pc = 0x3b0084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_3b0088:
    // 0x3b0088: 0x7bb10940  lq          $s1, 0x940($sp)
    ctx->pc = 0x3b0088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_3b008c:
    // 0x3b008c: 0x7bb20930  lq          $s2, 0x930($sp)
    ctx->pc = 0x3b008cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3b0090:
    // 0x3b0090: 0x7bb30920  lq          $s3, 0x920($sp)
    ctx->pc = 0x3b0090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3b0094:
    // 0x3b0094: 0x7bb40910  lq          $s4, 0x910($sp)
    ctx->pc = 0x3b0094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3b0098:
    // 0x3b0098: 0x7bb50900  lq          $s5, 0x900($sp)
    ctx->pc = 0x3b0098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3b009c:
    // 0x3b009c: 0x7bb608f0  lq          $s6, 0x8F0($sp)
    ctx->pc = 0x3b009cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3b00a0:
    // 0x3b00a0: 0xdfbf08e0  ld          $ra, 0x8E0($sp)
    ctx->pc = 0x3b00a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2272)));
label_3b00a4:
    // 0x3b00a4: 0xc7b90988  lwc1        $f25, 0x988($sp)
    ctx->pc = 0x3b00a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3b00a8:
    // 0x3b00a8: 0xc7b80980  lwc1        $f24, 0x980($sp)
    ctx->pc = 0x3b00a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3b00ac:
    // 0x3b00ac: 0xc7b70978  lwc1        $f23, 0x978($sp)
    ctx->pc = 0x3b00acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b00b0:
    // 0x3b00b0: 0xc7b60970  lwc1        $f22, 0x970($sp)
    ctx->pc = 0x3b00b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b00b4:
    // 0x3b00b4: 0xc7b50968  lwc1        $f21, 0x968($sp)
    ctx->pc = 0x3b00b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b00b8:
    // 0x3b00b8: 0xc7b40960  lwc1        $f20, 0x960($sp)
    ctx->pc = 0x3b00b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b00bc:
    // 0x3b00bc: 0x3e00008  jr          $ra
label_3b00c0:
    if (ctx->pc == 0x3B00C0u) {
        ctx->pc = 0x3B00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B00BCu;
        // 0x3b00c0: 0x27bd0990  addiu       $sp, $sp, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B00C4u;
        goto label_3b00c4;
    }
    ctx->pc = 0x3B00BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B00BCu;
        // 0x3b00c0: 0x27bd0990  addiu       $sp, $sp, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B00BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B00C4u;
label_3b00c4:
    // 0x3b00c4: 0x0  nop
    ctx->pc = 0x3b00c4u;
    // NOP
    ctx->pc = 0x3b00c8u;
}
