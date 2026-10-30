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

// Function: sub_001AE980
// Address: 0x1ae980 - 0x1aef50
void sub_001AE980_0x1ae980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE980_0x1ae980");
#endif

    switch (ctx->pc) {
        case 0x1ae980u: goto label_1ae980;
        case 0x1ae984u: goto label_1ae984;
        case 0x1ae988u: goto label_1ae988;
        case 0x1ae98cu: goto label_1ae98c;
        case 0x1ae990u: goto label_1ae990;
        case 0x1ae994u: goto label_1ae994;
        case 0x1ae998u: goto label_1ae998;
        case 0x1ae99cu: goto label_1ae99c;
        case 0x1ae9a0u: goto label_1ae9a0;
        case 0x1ae9a4u: goto label_1ae9a4;
        case 0x1ae9a8u: goto label_1ae9a8;
        case 0x1ae9acu: goto label_1ae9ac;
        case 0x1ae9b0u: goto label_1ae9b0;
        case 0x1ae9b4u: goto label_1ae9b4;
        case 0x1ae9b8u: goto label_1ae9b8;
        case 0x1ae9bcu: goto label_1ae9bc;
        case 0x1ae9c0u: goto label_1ae9c0;
        case 0x1ae9c4u: goto label_1ae9c4;
        case 0x1ae9c8u: goto label_1ae9c8;
        case 0x1ae9ccu: goto label_1ae9cc;
        case 0x1ae9d0u: goto label_1ae9d0;
        case 0x1ae9d4u: goto label_1ae9d4;
        case 0x1ae9d8u: goto label_1ae9d8;
        case 0x1ae9dcu: goto label_1ae9dc;
        case 0x1ae9e0u: goto label_1ae9e0;
        case 0x1ae9e4u: goto label_1ae9e4;
        case 0x1ae9e8u: goto label_1ae9e8;
        case 0x1ae9ecu: goto label_1ae9ec;
        case 0x1ae9f0u: goto label_1ae9f0;
        case 0x1ae9f4u: goto label_1ae9f4;
        case 0x1ae9f8u: goto label_1ae9f8;
        case 0x1ae9fcu: goto label_1ae9fc;
        case 0x1aea00u: goto label_1aea00;
        case 0x1aea04u: goto label_1aea04;
        case 0x1aea08u: goto label_1aea08;
        case 0x1aea0cu: goto label_1aea0c;
        case 0x1aea10u: goto label_1aea10;
        case 0x1aea14u: goto label_1aea14;
        case 0x1aea18u: goto label_1aea18;
        case 0x1aea1cu: goto label_1aea1c;
        case 0x1aea20u: goto label_1aea20;
        case 0x1aea24u: goto label_1aea24;
        case 0x1aea28u: goto label_1aea28;
        case 0x1aea2cu: goto label_1aea2c;
        case 0x1aea30u: goto label_1aea30;
        case 0x1aea34u: goto label_1aea34;
        case 0x1aea38u: goto label_1aea38;
        case 0x1aea3cu: goto label_1aea3c;
        case 0x1aea40u: goto label_1aea40;
        case 0x1aea44u: goto label_1aea44;
        case 0x1aea48u: goto label_1aea48;
        case 0x1aea4cu: goto label_1aea4c;
        case 0x1aea50u: goto label_1aea50;
        case 0x1aea54u: goto label_1aea54;
        case 0x1aea58u: goto label_1aea58;
        case 0x1aea5cu: goto label_1aea5c;
        case 0x1aea60u: goto label_1aea60;
        case 0x1aea64u: goto label_1aea64;
        case 0x1aea68u: goto label_1aea68;
        case 0x1aea6cu: goto label_1aea6c;
        case 0x1aea70u: goto label_1aea70;
        case 0x1aea74u: goto label_1aea74;
        case 0x1aea78u: goto label_1aea78;
        case 0x1aea7cu: goto label_1aea7c;
        case 0x1aea80u: goto label_1aea80;
        case 0x1aea84u: goto label_1aea84;
        case 0x1aea88u: goto label_1aea88;
        case 0x1aea8cu: goto label_1aea8c;
        case 0x1aea90u: goto label_1aea90;
        case 0x1aea94u: goto label_1aea94;
        case 0x1aea98u: goto label_1aea98;
        case 0x1aea9cu: goto label_1aea9c;
        case 0x1aeaa0u: goto label_1aeaa0;
        case 0x1aeaa4u: goto label_1aeaa4;
        case 0x1aeaa8u: goto label_1aeaa8;
        case 0x1aeaacu: goto label_1aeaac;
        case 0x1aeab0u: goto label_1aeab0;
        case 0x1aeab4u: goto label_1aeab4;
        case 0x1aeab8u: goto label_1aeab8;
        case 0x1aeabcu: goto label_1aeabc;
        case 0x1aeac0u: goto label_1aeac0;
        case 0x1aeac4u: goto label_1aeac4;
        case 0x1aeac8u: goto label_1aeac8;
        case 0x1aeaccu: goto label_1aeacc;
        case 0x1aead0u: goto label_1aead0;
        case 0x1aead4u: goto label_1aead4;
        case 0x1aead8u: goto label_1aead8;
        case 0x1aeadcu: goto label_1aeadc;
        case 0x1aeae0u: goto label_1aeae0;
        case 0x1aeae4u: goto label_1aeae4;
        case 0x1aeae8u: goto label_1aeae8;
        case 0x1aeaecu: goto label_1aeaec;
        case 0x1aeaf0u: goto label_1aeaf0;
        case 0x1aeaf4u: goto label_1aeaf4;
        case 0x1aeaf8u: goto label_1aeaf8;
        case 0x1aeafcu: goto label_1aeafc;
        case 0x1aeb00u: goto label_1aeb00;
        case 0x1aeb04u: goto label_1aeb04;
        case 0x1aeb08u: goto label_1aeb08;
        case 0x1aeb0cu: goto label_1aeb0c;
        case 0x1aeb10u: goto label_1aeb10;
        case 0x1aeb14u: goto label_1aeb14;
        case 0x1aeb18u: goto label_1aeb18;
        case 0x1aeb1cu: goto label_1aeb1c;
        case 0x1aeb20u: goto label_1aeb20;
        case 0x1aeb24u: goto label_1aeb24;
        case 0x1aeb28u: goto label_1aeb28;
        case 0x1aeb2cu: goto label_1aeb2c;
        case 0x1aeb30u: goto label_1aeb30;
        case 0x1aeb34u: goto label_1aeb34;
        case 0x1aeb38u: goto label_1aeb38;
        case 0x1aeb3cu: goto label_1aeb3c;
        case 0x1aeb40u: goto label_1aeb40;
        case 0x1aeb44u: goto label_1aeb44;
        case 0x1aeb48u: goto label_1aeb48;
        case 0x1aeb4cu: goto label_1aeb4c;
        case 0x1aeb50u: goto label_1aeb50;
        case 0x1aeb54u: goto label_1aeb54;
        case 0x1aeb58u: goto label_1aeb58;
        case 0x1aeb5cu: goto label_1aeb5c;
        case 0x1aeb60u: goto label_1aeb60;
        case 0x1aeb64u: goto label_1aeb64;
        case 0x1aeb68u: goto label_1aeb68;
        case 0x1aeb6cu: goto label_1aeb6c;
        case 0x1aeb70u: goto label_1aeb70;
        case 0x1aeb74u: goto label_1aeb74;
        case 0x1aeb78u: goto label_1aeb78;
        case 0x1aeb7cu: goto label_1aeb7c;
        case 0x1aeb80u: goto label_1aeb80;
        case 0x1aeb84u: goto label_1aeb84;
        case 0x1aeb88u: goto label_1aeb88;
        case 0x1aeb8cu: goto label_1aeb8c;
        case 0x1aeb90u: goto label_1aeb90;
        case 0x1aeb94u: goto label_1aeb94;
        case 0x1aeb98u: goto label_1aeb98;
        case 0x1aeb9cu: goto label_1aeb9c;
        case 0x1aeba0u: goto label_1aeba0;
        case 0x1aeba4u: goto label_1aeba4;
        case 0x1aeba8u: goto label_1aeba8;
        case 0x1aebacu: goto label_1aebac;
        case 0x1aebb0u: goto label_1aebb0;
        case 0x1aebb4u: goto label_1aebb4;
        case 0x1aebb8u: goto label_1aebb8;
        case 0x1aebbcu: goto label_1aebbc;
        case 0x1aebc0u: goto label_1aebc0;
        case 0x1aebc4u: goto label_1aebc4;
        case 0x1aebc8u: goto label_1aebc8;
        case 0x1aebccu: goto label_1aebcc;
        case 0x1aebd0u: goto label_1aebd0;
        case 0x1aebd4u: goto label_1aebd4;
        case 0x1aebd8u: goto label_1aebd8;
        case 0x1aebdcu: goto label_1aebdc;
        case 0x1aebe0u: goto label_1aebe0;
        case 0x1aebe4u: goto label_1aebe4;
        case 0x1aebe8u: goto label_1aebe8;
        case 0x1aebecu: goto label_1aebec;
        case 0x1aebf0u: goto label_1aebf0;
        case 0x1aebf4u: goto label_1aebf4;
        case 0x1aebf8u: goto label_1aebf8;
        case 0x1aebfcu: goto label_1aebfc;
        case 0x1aec00u: goto label_1aec00;
        case 0x1aec04u: goto label_1aec04;
        case 0x1aec08u: goto label_1aec08;
        case 0x1aec0cu: goto label_1aec0c;
        case 0x1aec10u: goto label_1aec10;
        case 0x1aec14u: goto label_1aec14;
        case 0x1aec18u: goto label_1aec18;
        case 0x1aec1cu: goto label_1aec1c;
        case 0x1aec20u: goto label_1aec20;
        case 0x1aec24u: goto label_1aec24;
        case 0x1aec28u: goto label_1aec28;
        case 0x1aec2cu: goto label_1aec2c;
        case 0x1aec30u: goto label_1aec30;
        case 0x1aec34u: goto label_1aec34;
        case 0x1aec38u: goto label_1aec38;
        case 0x1aec3cu: goto label_1aec3c;
        case 0x1aec40u: goto label_1aec40;
        case 0x1aec44u: goto label_1aec44;
        case 0x1aec48u: goto label_1aec48;
        case 0x1aec4cu: goto label_1aec4c;
        case 0x1aec50u: goto label_1aec50;
        case 0x1aec54u: goto label_1aec54;
        case 0x1aec58u: goto label_1aec58;
        case 0x1aec5cu: goto label_1aec5c;
        case 0x1aec60u: goto label_1aec60;
        case 0x1aec64u: goto label_1aec64;
        case 0x1aec68u: goto label_1aec68;
        case 0x1aec6cu: goto label_1aec6c;
        case 0x1aec70u: goto label_1aec70;
        case 0x1aec74u: goto label_1aec74;
        case 0x1aec78u: goto label_1aec78;
        case 0x1aec7cu: goto label_1aec7c;
        case 0x1aec80u: goto label_1aec80;
        case 0x1aec84u: goto label_1aec84;
        case 0x1aec88u: goto label_1aec88;
        case 0x1aec8cu: goto label_1aec8c;
        case 0x1aec90u: goto label_1aec90;
        case 0x1aec94u: goto label_1aec94;
        case 0x1aec98u: goto label_1aec98;
        case 0x1aec9cu: goto label_1aec9c;
        case 0x1aeca0u: goto label_1aeca0;
        case 0x1aeca4u: goto label_1aeca4;
        case 0x1aeca8u: goto label_1aeca8;
        case 0x1aecacu: goto label_1aecac;
        case 0x1aecb0u: goto label_1aecb0;
        case 0x1aecb4u: goto label_1aecb4;
        case 0x1aecb8u: goto label_1aecb8;
        case 0x1aecbcu: goto label_1aecbc;
        case 0x1aecc0u: goto label_1aecc0;
        case 0x1aecc4u: goto label_1aecc4;
        case 0x1aecc8u: goto label_1aecc8;
        case 0x1aecccu: goto label_1aeccc;
        case 0x1aecd0u: goto label_1aecd0;
        case 0x1aecd4u: goto label_1aecd4;
        case 0x1aecd8u: goto label_1aecd8;
        case 0x1aecdcu: goto label_1aecdc;
        case 0x1aece0u: goto label_1aece0;
        case 0x1aece4u: goto label_1aece4;
        case 0x1aece8u: goto label_1aece8;
        case 0x1aececu: goto label_1aecec;
        case 0x1aecf0u: goto label_1aecf0;
        case 0x1aecf4u: goto label_1aecf4;
        case 0x1aecf8u: goto label_1aecf8;
        case 0x1aecfcu: goto label_1aecfc;
        case 0x1aed00u: goto label_1aed00;
        case 0x1aed04u: goto label_1aed04;
        case 0x1aed08u: goto label_1aed08;
        case 0x1aed0cu: goto label_1aed0c;
        case 0x1aed10u: goto label_1aed10;
        case 0x1aed14u: goto label_1aed14;
        case 0x1aed18u: goto label_1aed18;
        case 0x1aed1cu: goto label_1aed1c;
        case 0x1aed20u: goto label_1aed20;
        case 0x1aed24u: goto label_1aed24;
        case 0x1aed28u: goto label_1aed28;
        case 0x1aed2cu: goto label_1aed2c;
        case 0x1aed30u: goto label_1aed30;
        case 0x1aed34u: goto label_1aed34;
        case 0x1aed38u: goto label_1aed38;
        case 0x1aed3cu: goto label_1aed3c;
        case 0x1aed40u: goto label_1aed40;
        case 0x1aed44u: goto label_1aed44;
        case 0x1aed48u: goto label_1aed48;
        case 0x1aed4cu: goto label_1aed4c;
        case 0x1aed50u: goto label_1aed50;
        case 0x1aed54u: goto label_1aed54;
        case 0x1aed58u: goto label_1aed58;
        case 0x1aed5cu: goto label_1aed5c;
        case 0x1aed60u: goto label_1aed60;
        case 0x1aed64u: goto label_1aed64;
        case 0x1aed68u: goto label_1aed68;
        case 0x1aed6cu: goto label_1aed6c;
        case 0x1aed70u: goto label_1aed70;
        case 0x1aed74u: goto label_1aed74;
        case 0x1aed78u: goto label_1aed78;
        case 0x1aed7cu: goto label_1aed7c;
        case 0x1aed80u: goto label_1aed80;
        case 0x1aed84u: goto label_1aed84;
        case 0x1aed88u: goto label_1aed88;
        case 0x1aed8cu: goto label_1aed8c;
        case 0x1aed90u: goto label_1aed90;
        case 0x1aed94u: goto label_1aed94;
        case 0x1aed98u: goto label_1aed98;
        case 0x1aed9cu: goto label_1aed9c;
        case 0x1aeda0u: goto label_1aeda0;
        case 0x1aeda4u: goto label_1aeda4;
        case 0x1aeda8u: goto label_1aeda8;
        case 0x1aedacu: goto label_1aedac;
        case 0x1aedb0u: goto label_1aedb0;
        case 0x1aedb4u: goto label_1aedb4;
        case 0x1aedb8u: goto label_1aedb8;
        case 0x1aedbcu: goto label_1aedbc;
        case 0x1aedc0u: goto label_1aedc0;
        case 0x1aedc4u: goto label_1aedc4;
        case 0x1aedc8u: goto label_1aedc8;
        case 0x1aedccu: goto label_1aedcc;
        case 0x1aedd0u: goto label_1aedd0;
        case 0x1aedd4u: goto label_1aedd4;
        case 0x1aedd8u: goto label_1aedd8;
        case 0x1aeddcu: goto label_1aeddc;
        case 0x1aede0u: goto label_1aede0;
        case 0x1aede4u: goto label_1aede4;
        case 0x1aede8u: goto label_1aede8;
        case 0x1aedecu: goto label_1aedec;
        case 0x1aedf0u: goto label_1aedf0;
        case 0x1aedf4u: goto label_1aedf4;
        case 0x1aedf8u: goto label_1aedf8;
        case 0x1aedfcu: goto label_1aedfc;
        case 0x1aee00u: goto label_1aee00;
        case 0x1aee04u: goto label_1aee04;
        case 0x1aee08u: goto label_1aee08;
        case 0x1aee0cu: goto label_1aee0c;
        case 0x1aee10u: goto label_1aee10;
        case 0x1aee14u: goto label_1aee14;
        case 0x1aee18u: goto label_1aee18;
        case 0x1aee1cu: goto label_1aee1c;
        case 0x1aee20u: goto label_1aee20;
        case 0x1aee24u: goto label_1aee24;
        case 0x1aee28u: goto label_1aee28;
        case 0x1aee2cu: goto label_1aee2c;
        case 0x1aee30u: goto label_1aee30;
        case 0x1aee34u: goto label_1aee34;
        case 0x1aee38u: goto label_1aee38;
        case 0x1aee3cu: goto label_1aee3c;
        case 0x1aee40u: goto label_1aee40;
        case 0x1aee44u: goto label_1aee44;
        case 0x1aee48u: goto label_1aee48;
        case 0x1aee4cu: goto label_1aee4c;
        case 0x1aee50u: goto label_1aee50;
        case 0x1aee54u: goto label_1aee54;
        case 0x1aee58u: goto label_1aee58;
        case 0x1aee5cu: goto label_1aee5c;
        case 0x1aee60u: goto label_1aee60;
        case 0x1aee64u: goto label_1aee64;
        case 0x1aee68u: goto label_1aee68;
        case 0x1aee6cu: goto label_1aee6c;
        case 0x1aee70u: goto label_1aee70;
        case 0x1aee74u: goto label_1aee74;
        case 0x1aee78u: goto label_1aee78;
        case 0x1aee7cu: goto label_1aee7c;
        case 0x1aee80u: goto label_1aee80;
        case 0x1aee84u: goto label_1aee84;
        case 0x1aee88u: goto label_1aee88;
        case 0x1aee8cu: goto label_1aee8c;
        case 0x1aee90u: goto label_1aee90;
        case 0x1aee94u: goto label_1aee94;
        case 0x1aee98u: goto label_1aee98;
        case 0x1aee9cu: goto label_1aee9c;
        case 0x1aeea0u: goto label_1aeea0;
        case 0x1aeea4u: goto label_1aeea4;
        case 0x1aeea8u: goto label_1aeea8;
        case 0x1aeeacu: goto label_1aeeac;
        case 0x1aeeb0u: goto label_1aeeb0;
        case 0x1aeeb4u: goto label_1aeeb4;
        case 0x1aeeb8u: goto label_1aeeb8;
        case 0x1aeebcu: goto label_1aeebc;
        case 0x1aeec0u: goto label_1aeec0;
        case 0x1aeec4u: goto label_1aeec4;
        case 0x1aeec8u: goto label_1aeec8;
        case 0x1aeeccu: goto label_1aeecc;
        case 0x1aeed0u: goto label_1aeed0;
        case 0x1aeed4u: goto label_1aeed4;
        case 0x1aeed8u: goto label_1aeed8;
        case 0x1aeedcu: goto label_1aeedc;
        case 0x1aeee0u: goto label_1aeee0;
        case 0x1aeee4u: goto label_1aeee4;
        case 0x1aeee8u: goto label_1aeee8;
        case 0x1aeeecu: goto label_1aeeec;
        case 0x1aeef0u: goto label_1aeef0;
        case 0x1aeef4u: goto label_1aeef4;
        case 0x1aeef8u: goto label_1aeef8;
        case 0x1aeefcu: goto label_1aeefc;
        case 0x1aef00u: goto label_1aef00;
        case 0x1aef04u: goto label_1aef04;
        case 0x1aef08u: goto label_1aef08;
        case 0x1aef0cu: goto label_1aef0c;
        case 0x1aef10u: goto label_1aef10;
        case 0x1aef14u: goto label_1aef14;
        case 0x1aef18u: goto label_1aef18;
        case 0x1aef1cu: goto label_1aef1c;
        case 0x1aef20u: goto label_1aef20;
        case 0x1aef24u: goto label_1aef24;
        case 0x1aef28u: goto label_1aef28;
        case 0x1aef2cu: goto label_1aef2c;
        case 0x1aef30u: goto label_1aef30;
        case 0x1aef34u: goto label_1aef34;
        case 0x1aef38u: goto label_1aef38;
        case 0x1aef3cu: goto label_1aef3c;
        case 0x1aef40u: goto label_1aef40;
        case 0x1aef44u: goto label_1aef44;
        case 0x1aef48u: goto label_1aef48;
        case 0x1aef4cu: goto label_1aef4c;
        default: break;
    }

    ctx->pc = 0x1ae980u;

label_1ae980:
    // 0x1ae980: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ae980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1ae984:
    // 0x1ae984: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ae984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ae988:
    // 0x1ae988: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1ae988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1ae98c:
    // 0x1ae98c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1ae98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1ae990:
    // 0x1ae990: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ae990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae994:
    // 0x1ae994: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1ae994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1ae998:
    // 0x1ae998: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1ae998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1ae99c:
    // 0x1ae99c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1ae99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1ae9a0:
    // 0x1ae9a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ae9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1ae9a4:
    // 0x1ae9a4: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x1ae9a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
label_1ae9a8:
    // 0x1ae9a8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1ae9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1ae9ac:
    // 0x1ae9ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae9b0:
    // 0x1ae9b0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1ae9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1ae9b4:
    // 0x1ae9b4: 0x3415fea0  ori         $s5, $zero, 0xFEA0
    ctx->pc = 0x1ae9b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65184);
label_1ae9b8:
    // 0x1ae9b8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1ae9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1ae9bc:
    // 0x1ae9bc: 0x3416ebc0  ori         $s6, $zero, 0xEBC0
    ctx->pc = 0x1ae9bcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60352);
label_1ae9c0:
    // 0x1ae9c0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1ae9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_1ae9c4:
    // 0x1ae9c4: 0x243b821  addu        $s7, $s2, $v1
    ctx->pc = 0x1ae9c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1ae9c8:
    // 0x1ae9c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1ae9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1ae9cc:
    // 0x1ae9cc: 0x3414f420  ori         $s4, $zero, 0xF420
    ctx->pc = 0x1ae9ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62496);
label_1ae9d0:
    // 0x1ae9d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ae9d4:
    // 0x1ae9d4: 0x367314c0  ori         $s3, $s3, 0x14C0
    ctx->pc = 0x1ae9d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)5312);
label_1ae9d8:
    // 0x1ae9d8: 0xac4077a4  sw          $zero, 0x77A4($v0)
    ctx->pc = 0x1ae9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30628), GPR_U32(ctx, 0));
label_1ae9dc:
    // 0x1ae9dc: 0x3c1e0055  lui         $fp, 0x55
    ctx->pc = 0x1ae9dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)85 << 16));
label_1ae9e0:
    // 0x1ae9e0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae9e4:
    // 0x1ae9e4: 0x0  nop
    ctx->pc = 0x1ae9e4u;
    // NOP
label_1ae9e8:
    // 0x1ae9e8: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x1ae9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1ae9ec:
    // 0x1ae9ec: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1ae9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ae9f0:
    // 0x1ae9f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ae9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae9f4:
    // 0x1ae9f4: 0x8ca24120  lw          $v0, 0x4120($a1)
    ctx->pc = 0x1ae9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_1ae9f8:
    // 0x1ae9f8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1ae9f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1ae9fc:
    // 0x1ae9fc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1ae9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1aea00:
    // 0x1aea00: 0x60f809  jalr        $v1
label_1aea04:
    if (ctx->pc == 0x1AEA04u) {
        ctx->pc = 0x1AEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA00u;
        // 0x1aea04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA08u;
        goto label_1aea08;
    }
    ctx->pc = 0x1AEA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AEA08u);
        ctx->pc = 0x1AEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA00u;
        // 0x1aea04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEA00u, 0x1AEA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEA08u;
label_1aea08:
    // 0x1aea08: 0x92e225d5  lbu         $v0, 0x25D5($s7)
    ctx->pc = 0x1aea08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 9685)));
label_1aea0c:
    // 0x1aea0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1aea10:
    if (ctx->pc == 0x1AEA10u) {
        ctx->pc = 0x1AEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA0Cu;
        // 0x1aea10: 0x27c54618  addiu       $a1, $fp, 0x4618 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 17944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA14u;
        goto label_1aea14;
    }
    ctx->pc = 0x1AEA0Cu;
    {
        const bool branch_taken_0x1aea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA0Cu;
        // 0x1aea10: 0x27c54618  addiu       $a1, $fp, 0x4618 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 17944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea0c) {
            ctx->pc = 0x1AEA24u;
            goto label_1aea24;
        }
    }
    ctx->pc = 0x1AEA14u;
label_1aea14:
    // 0x1aea14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1aea14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aea18:
    // 0x1aea18: 0xc13929e  jal         func_4E4A78
label_1aea1c:
    if (ctx->pc == 0x1AEA1Cu) {
        ctx->pc = 0x1AEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA18u;
        // 0x1aea1c: 0x24060269  addiu       $a2, $zero, 0x269 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA20u;
        goto label_1aea20;
    }
    ctx->pc = 0x1AEA18u;
    SET_GPR_U32(ctx, 31, 0x1AEA20u);
    ctx->pc = 0x1AEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA18u;
    // 0x1aea1c: 0x24060269  addiu       $a2, $zero, 0x269 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4A78u, 0x1AEA18u, 0x1AEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA20u;
label_1aea20:
    // 0x1aea20: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1aea20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1aea24:
    // 0x1aea24: 0x24040430  addiu       $a0, $zero, 0x430
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
label_1aea28:
    // 0x1aea28: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1aea28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1aea2c:
    // 0x1aea2c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1aea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1aea30:
    // 0x1aea30: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1aea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1aea34:
    // 0x1aea34: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x1aea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_1aea38:
    // 0x1aea38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aea3c:
    // 0x1aea3c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1aea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1aea40:
    // 0x1aea40: 0x84650068  lh          $a1, 0x68($v1)
    ctx->pc = 0x1aea40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aea44:
    // 0x1aea44: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1aea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aea48:
    // 0x1aea48: 0x40f809  jalr        $v0
label_1aea4c:
    if (ctx->pc == 0x1AEA4Cu) {
        ctx->pc = 0x1AEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA48u;
        // 0x1aea4c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA50u;
        goto label_1aea50;
    }
    ctx->pc = 0x1AEA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEA50u);
        ctx->pc = 0x1AEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA48u;
        // 0x1aea4c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEA48u, 0x1AEA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEA50u;
label_1aea50:
    // 0x1aea50: 0x24040b10  addiu       $a0, $zero, 0xB10
    ctx->pc = 0x1aea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
label_1aea54:
    // 0x1aea54: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1aea54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1aea58:
    // 0x1aea58: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1aea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1aea5c:
    // 0x1aea5c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1aea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1aea60:
    // 0x1aea60: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x1aea60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_1aea64:
    // 0x1aea64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aea68:
    // 0x1aea68: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1aea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1aea6c:
    // 0x1aea6c: 0x84650068  lh          $a1, 0x68($v1)
    ctx->pc = 0x1aea6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aea70:
    // 0x1aea70: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1aea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aea74:
    // 0x1aea74: 0x40f809  jalr        $v0
label_1aea78:
    if (ctx->pc == 0x1AEA78u) {
        ctx->pc = 0x1AEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA74u;
        // 0x1aea78: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA7Cu;
        goto label_1aea7c;
    }
    ctx->pc = 0x1AEA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEA7Cu);
        ctx->pc = 0x1AEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA74u;
        // 0x1aea78: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEA74u, 0x1AEA7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEA7Cu;
label_1aea7c:
    // 0x1aea7c: 0x24040540  addiu       $a0, $zero, 0x540
    ctx->pc = 0x1aea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
label_1aea80:
    // 0x1aea80: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1aea80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1aea84:
    // 0x1aea84: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1aea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1aea88:
    // 0x1aea88: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1aea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1aea8c:
    // 0x1aea8c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1aea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1aea90:
    // 0x1aea90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aea94:
    // 0x1aea94: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1aea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1aea98:
    // 0x1aea98: 0x84650068  lh          $a1, 0x68($v1)
    ctx->pc = 0x1aea98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aea9c:
    // 0x1aea9c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1aea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aeaa0:
    // 0x1aeaa0: 0x40f809  jalr        $v0
label_1aeaa4:
    if (ctx->pc == 0x1AEAA4u) {
        ctx->pc = 0x1AEAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAA0u;
        // 0x1aeaa4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAA8u;
        goto label_1aeaa8;
    }
    ctx->pc = 0x1AEAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEAA8u);
        ctx->pc = 0x1AEAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAA0u;
        // 0x1aeaa4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEAA0u, 0x1AEAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEAA8u;
label_1aeaa8:
    // 0x1aeaa8: 0x24040450  addiu       $a0, $zero, 0x450
    ctx->pc = 0x1aeaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
label_1aeaac:
    // 0x1aeaac: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1aeaacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1aeab0:
    // 0x1aeab0: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1aeab4:
    // 0x1aeab4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1aeab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1aeab8:
    // 0x1aeab8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1aeab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1aeabc:
    // 0x1aeabc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aeabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aeac0:
    // 0x1aeac0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1aeac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1aeac4:
    // 0x1aeac4: 0x84650068  lh          $a1, 0x68($v1)
    ctx->pc = 0x1aeac4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aeac8:
    // 0x1aeac8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1aeac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aeacc:
    // 0x1aeacc: 0x40f809  jalr        $v0
label_1aead0:
    if (ctx->pc == 0x1AEAD0u) {
        ctx->pc = 0x1AEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEACCu;
        // 0x1aead0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAD4u;
        goto label_1aead4;
    }
    ctx->pc = 0x1AEACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEAD4u);
        ctx->pc = 0x1AEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEACCu;
        // 0x1aead0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEACCu, 0x1AEAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEAD4u;
label_1aead4:
    // 0x1aead4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aead4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aead8:
    // 0x1aead8: 0xc06cf88  jal         func_1B3E20
label_1aeadc:
    if (ctx->pc == 0x1AEADCu) {
        ctx->pc = 0x1AEADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAD8u;
        // 0x1aeadc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAE0u;
        goto label_1aeae0;
    }
    ctx->pc = 0x1AEAD8u;
    SET_GPR_U32(ctx, 31, 0x1AEAE0u);
    ctx->pc = 0x1AEADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAD8u;
    // 0x1aeadc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E20u, 0x1AEAD8u, 0x1AEAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAE0u;
label_1aeae0:
    // 0x1aeae0: 0x24040590  addiu       $a0, $zero, 0x590
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
label_1aeae4:
    // 0x1aeae4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1aeae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1aeae8:
    // 0x1aeae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aeae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1aeaec:
    // 0x1aeaec: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1aeaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1aeaf0:
    // 0x1aeaf0: 0x8c436b40  lw          $v1, 0x6B40($v0)
    ctx->pc = 0x1aeaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27456)));
label_1aeaf4:
    // 0x1aeaf4: 0x24846b40  addiu       $a0, $a0, 0x6B40
    ctx->pc = 0x1aeaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27456));
label_1aeaf8:
    // 0x1aeaf8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1aeaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1aeafc:
    // 0x1aeafc: 0x84620068  lh          $v0, 0x68($v1)
    ctx->pc = 0x1aeafcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aeb00:
    // 0x1aeb00: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1aeb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aeb04:
    // 0x1aeb04: 0xa0f809  jalr        $a1
label_1aeb08:
    if (ctx->pc == 0x1AEB08u) {
        ctx->pc = 0x1AEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB04u;
        // 0x1aeb08: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB0Cu;
        goto label_1aeb0c;
    }
    ctx->pc = 0x1AEB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AEB0Cu);
        ctx->pc = 0x1AEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB04u;
        // 0x1aeb08: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB04u, 0x1AEB0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEB0Cu;
label_1aeb0c:
    // 0x1aeb0c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1aeb0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1aeb10:
    // 0x1aeb10: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_1aeb14:
    if (ctx->pc == 0x1AEB14u) {
        ctx->pc = 0x1AEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB10u;
        // 0x1aeb14: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB18u;
        goto label_1aeb18;
    }
    ctx->pc = 0x1AEB10u;
    {
        const bool branch_taken_0x1aeb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB10u;
        // 0x1aeb14: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb10) {
            ctx->pc = 0x1AE9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae9e8;
        }
    }
    ctx->pc = 0x1AEB18u;
label_1aeb18:
    // 0x1aeb18: 0x264415b0  addiu       $a0, $s2, 0x15B0
    ctx->pc = 0x1aeb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5552));
label_1aeb1c:
    // 0x1aeb1c: 0xc06a3c8  jal         func_1A8F20
label_1aeb20:
    if (ctx->pc == 0x1AEB20u) {
        ctx->pc = 0x1AEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB1Cu;
        // 0x1aeb20: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB24u;
        goto label_1aeb24;
    }
    ctx->pc = 0x1AEB1Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB24u);
    ctx->pc = 0x1AEB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB1Cu;
    // 0x1aeb20: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F20u, 0x1AEB1Cu, 0x1AEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB24u;
label_1aeb24:
    // 0x1aeb24: 0x26547660  addiu       $s4, $s2, 0x7660
    ctx->pc = 0x1aeb24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 30304));
label_1aeb28:
    // 0x1aeb28: 0x264415d0  addiu       $a0, $s2, 0x15D0
    ctx->pc = 0x1aeb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
label_1aeb2c:
    // 0x1aeb2c: 0xc071068  jal         func_1C41A0
label_1aeb30:
    if (ctx->pc == 0x1AEB30u) {
        ctx->pc = 0x1AEB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB2Cu;
        // 0x1aeb30: 0x26550010  addiu       $s5, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB34u;
        goto label_1aeb34;
    }
    ctx->pc = 0x1AEB2Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB34u);
    ctx->pc = 0x1AEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB2Cu;
    // 0x1aeb30: 0x26550010  addiu       $s5, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C41A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41A0u, 0x1AEB2Cu, 0x1AEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB34u;
label_1aeb34:
    // 0x1aeb34: 0xc071068  jal         func_1C41A0
label_1aeb38:
    if (ctx->pc == 0x1AEB38u) {
        ctx->pc = 0x1AEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB34u;
        // 0x1aeb38: 0x26443f10  addiu       $a0, $s2, 0x3F10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB3Cu;
        goto label_1aeb3c;
    }
    ctx->pc = 0x1AEB34u;
    SET_GPR_U32(ctx, 31, 0x1AEB3Cu);
    ctx->pc = 0x1AEB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB34u;
    // 0x1aeb38: 0x26443f10  addiu       $a0, $s2, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C41A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41A0u, 0x1AEB34u, 0x1AEB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB3Cu;
label_1aeb3c:
    // 0x1aeb3c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1aeb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1aeb40:
    // 0x1aeb40: 0x34846b30  ori         $a0, $a0, 0x6B30
    ctx->pc = 0x1aeb40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27440);
label_1aeb44:
    // 0x1aeb44: 0xc06d9b8  jal         func_1B66E0
label_1aeb48:
    if (ctx->pc == 0x1AEB48u) {
        ctx->pc = 0x1AEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB44u;
        // 0x1aeb48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB4Cu;
        goto label_1aeb4c;
    }
    ctx->pc = 0x1AEB44u;
    SET_GPR_U32(ctx, 31, 0x1AEB4Cu);
    ctx->pc = 0x1AEB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB44u;
    // 0x1aeb48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B66E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B66E0u, 0x1AEB44u, 0x1AEB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB4Cu;
label_1aeb4c:
    // 0x1aeb4c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1aeb50:
    // 0x1aeb50: 0x344237e0  ori         $v0, $v0, 0x37E0
    ctx->pc = 0x1aeb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14304);
label_1aeb54:
    // 0x1aeb54: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1aeb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1aeb58:
    // 0x1aeb58: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1aeb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb5c:
    // 0x1aeb5c: 0x0  nop
    ctx->pc = 0x1aeb5cu;
    // NOP
label_1aeb60:
    // 0x1aeb60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1aeb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1aeb64:
    // 0x1aeb64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1aeb64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1aeb68:
    // 0x1aeb68: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1aeb68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1aeb6c:
    // 0x1aeb6c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1aeb6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1aeb70:
    // 0x1aeb70: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1aeb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1aeb74:
    // 0x1aeb74: 0x40f809  jalr        $v0
label_1aeb78:
    if (ctx->pc == 0x1AEB78u) {
        ctx->pc = 0x1AEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB74u;
        // 0x1aeb78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB7Cu;
        goto label_1aeb7c;
    }
    ctx->pc = 0x1AEB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEB7Cu);
        ctx->pc = 0x1AEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB74u;
        // 0x1aeb78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB74u, 0x1AEB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEB7Cu;
label_1aeb7c:
    // 0x1aeb7c: 0x2e620013  sltiu       $v0, $s3, 0x13
    ctx->pc = 0x1aeb7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1aeb80:
    // 0x1aeb80: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1aeb84:
    if (ctx->pc == 0x1AEB84u) {
        ctx->pc = 0x1AEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB80u;
        // 0x1aeb84: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB88u;
        goto label_1aeb88;
    }
    ctx->pc = 0x1AEB80u;
    {
        const bool branch_taken_0x1aeb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB80u;
        // 0x1aeb84: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb80) {
            ctx->pc = 0x1AEB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeb60;
        }
    }
    ctx->pc = 0x1AEB88u;
label_1aeb88:
    // 0x1aeb88: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1aeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1aeb8c:
    // 0x1aeb8c: 0x344277d0  ori         $v0, $v0, 0x77D0
    ctx->pc = 0x1aeb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30672);
label_1aeb90:
    // 0x1aeb90: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1aeb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1aeb94:
    // 0x1aeb94: 0xc06a9ae  jal         func_1AA6B8
label_1aeb98:
    if (ctx->pc == 0x1AEB98u) {
        ctx->pc = 0x1AEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB94u;
        // 0x1aeb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB9Cu;
        goto label_1aeb9c;
    }
    ctx->pc = 0x1AEB94u;
    SET_GPR_U32(ctx, 31, 0x1AEB9Cu);
    ctx->pc = 0x1AEB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB94u;
    // 0x1aeb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA6B8u, 0x1AEB94u, 0x1AEB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB9Cu;
label_1aeb9c:
    // 0x1aeb9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aeba0:
    if (ctx->pc == 0x1AEBA0u) {
        ctx->pc = 0x1AEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB9Cu;
        // 0x1aeba0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBA4u;
        goto label_1aeba4;
    }
    ctx->pc = 0x1AEB9Cu;
    {
        const bool branch_taken_0x1aeb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB9Cu;
        // 0x1aeba0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb9c) {
            ctx->pc = 0x1AEBB0u;
            goto label_1aebb0;
        }
    }
    ctx->pc = 0x1AEBA4u;
label_1aeba4:
    // 0x1aeba4: 0xc06a970  jal         func_1AA5C0
label_1aeba8:
    if (ctx->pc == 0x1AEBA8u) {
        ctx->pc = 0x1AEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBA4u;
        // 0x1aeba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBACu;
        goto label_1aebac;
    }
    ctx->pc = 0x1AEBA4u;
    SET_GPR_U32(ctx, 31, 0x1AEBACu);
    ctx->pc = 0x1AEBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBA4u;
    // 0x1aeba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA5C0u, 0x1AEBA4u, 0x1AEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBACu;
label_1aebac:
    // 0x1aebac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1aebacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1aebb0:
    // 0x1aebb0: 0x34428280  ori         $v0, $v0, 0x8280
    ctx->pc = 0x1aebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33408);
label_1aebb4:
    // 0x1aebb4: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1aebb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1aebb8:
    // 0x1aebb8: 0xc06a9ae  jal         func_1AA6B8
label_1aebbc:
    if (ctx->pc == 0x1AEBBCu) {
        ctx->pc = 0x1AEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBB8u;
        // 0x1aebbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBC0u;
        goto label_1aebc0;
    }
    ctx->pc = 0x1AEBB8u;
    SET_GPR_U32(ctx, 31, 0x1AEBC0u);
    ctx->pc = 0x1AEBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBB8u;
    // 0x1aebbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA6B8u, 0x1AEBB8u, 0x1AEBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBC0u;
label_1aebc0:
    // 0x1aebc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1aebc4:
    if (ctx->pc == 0x1AEBC4u) {
        ctx->pc = 0x1AEBC8u;
        goto label_1aebc8;
    }
    ctx->pc = 0x1AEBC0u;
    {
        const bool branch_taken_0x1aebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aebc0) {
            ctx->pc = 0x1AEBD0u;
            goto label_1aebd0;
        }
    }
    ctx->pc = 0x1AEBC8u;
label_1aebc8:
    // 0x1aebc8: 0xc06a970  jal         func_1AA5C0
label_1aebcc:
    if (ctx->pc == 0x1AEBCCu) {
        ctx->pc = 0x1AEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBC8u;
        // 0x1aebcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBD0u;
        goto label_1aebd0;
    }
    ctx->pc = 0x1AEBC8u;
    SET_GPR_U32(ctx, 31, 0x1AEBD0u);
    ctx->pc = 0x1AEBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBC8u;
    // 0x1aebcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA5C0u, 0x1AEBC8u, 0x1AEBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBD0u;
label_1aebd0:
    // 0x1aebd0: 0xc06edf0  jal         func_1BB7C0
label_1aebd4:
    if (ctx->pc == 0x1AEBD4u) {
        ctx->pc = 0x1AEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBD0u;
        // 0x1aebd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBD8u;
        goto label_1aebd8;
    }
    ctx->pc = 0x1AEBD0u;
    SET_GPR_U32(ctx, 31, 0x1AEBD8u);
    ctx->pc = 0x1AEBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBD0u;
    // 0x1aebd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB7C0u, 0x1AEBD0u, 0x1AEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBD8u;
label_1aebd8:
    // 0x1aebd8: 0x3410acb0  ori         $s0, $zero, 0xACB0
    ctx->pc = 0x1aebd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44208);
label_1aebdc:
    // 0x1aebdc: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1aebdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1aebe0:
    // 0x1aebe0: 0xc070bcc  jal         func_1C2F30
label_1aebe4:
    if (ctx->pc == 0x1AEBE4u) {
        ctx->pc = 0x1AEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBE0u;
        // 0x1aebe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBE8u;
        goto label_1aebe8;
    }
    ctx->pc = 0x1AEBE0u;
    SET_GPR_U32(ctx, 31, 0x1AEBE8u);
    ctx->pc = 0x1AEBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBE0u;
    // 0x1aebe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F30u, 0x1AEBE0u, 0x1AEBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBE8u;
label_1aebe8:
    // 0x1aebe8: 0xc067f40  jal         func_19FD00
label_1aebec:
    if (ctx->pc == 0x1AEBECu) {
        ctx->pc = 0x1AEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBE8u;
        // 0x1aebec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBF0u;
        goto label_1aebf0;
    }
    ctx->pc = 0x1AEBE8u;
    SET_GPR_U32(ctx, 31, 0x1AEBF0u);
    ctx->pc = 0x1AEBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBE8u;
    // 0x1aebec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FD00u, 0x1AEBE8u, 0x1AEBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBF0u;
label_1aebf0:
    // 0x1aebf0: 0x34048dd0  ori         $a0, $zero, 0x8DD0
    ctx->pc = 0x1aebf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36304);
label_1aebf4:
    // 0x1aebf4: 0xc0722a8  jal         func_1C8AA0
label_1aebf8:
    if (ctx->pc == 0x1AEBF8u) {
        ctx->pc = 0x1AEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBF4u;
        // 0x1aebf8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBFCu;
        goto label_1aebfc;
    }
    ctx->pc = 0x1AEBF4u;
    SET_GPR_U32(ctx, 31, 0x1AEBFCu);
    ctx->pc = 0x1AEBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBF4u;
    // 0x1aebf8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8AA0u, 0x1AEBF4u, 0x1AEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBFCu;
label_1aebfc:
    // 0x1aebfc: 0x34048a10  ori         $a0, $zero, 0x8A10
    ctx->pc = 0x1aebfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35344);
label_1aec00:
    // 0x1aec00: 0xc073708  jal         func_1CDC20
label_1aec04:
    if (ctx->pc == 0x1AEC04u) {
        ctx->pc = 0x1AEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC00u;
        // 0x1aec04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC08u;
        goto label_1aec08;
    }
    ctx->pc = 0x1AEC00u;
    SET_GPR_U32(ctx, 31, 0x1AEC08u);
    ctx->pc = 0x1AEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC00u;
    // 0x1aec04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDC20u, 0x1AEC00u, 0x1AEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC08u;
label_1aec08:
    // 0x1aec08: 0x34049350  ori         $a0, $zero, 0x9350
    ctx->pc = 0x1aec08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37712);
label_1aec0c:
    // 0x1aec0c: 0xc06b33e  jal         func_1ACCF8
label_1aec10:
    if (ctx->pc == 0x1AEC10u) {
        ctx->pc = 0x1AEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC0Cu;
        // 0x1aec10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC14u;
        goto label_1aec14;
    }
    ctx->pc = 0x1AEC0Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC14u);
    ctx->pc = 0x1AEC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC0Cu;
    // 0x1aec10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACCF8u, 0x1AEC0Cu, 0x1AEC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC14u;
label_1aec14:
    // 0x1aec14: 0x34049640  ori         $a0, $zero, 0x9640
    ctx->pc = 0x1aec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38464);
label_1aec18:
    // 0x1aec18: 0xc069002  jal         func_1A4008
label_1aec1c:
    if (ctx->pc == 0x1AEC1Cu) {
        ctx->pc = 0x1AEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC18u;
        // 0x1aec1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC20u;
        goto label_1aec20;
    }
    ctx->pc = 0x1AEC18u;
    SET_GPR_U32(ctx, 31, 0x1AEC20u);
    ctx->pc = 0x1AEC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC18u;
    // 0x1aec1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4008u, 0x1AEC18u, 0x1AEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC20u;
label_1aec20:
    // 0x1aec20: 0x34049540  ori         $a0, $zero, 0x9540
    ctx->pc = 0x1aec20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38208);
label_1aec24:
    // 0x1aec24: 0xc072dde  jal         func_1CB778
label_1aec28:
    if (ctx->pc == 0x1AEC28u) {
        ctx->pc = 0x1AEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC24u;
        // 0x1aec28: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC2Cu;
        goto label_1aec2c;
    }
    ctx->pc = 0x1AEC24u;
    SET_GPR_U32(ctx, 31, 0x1AEC2Cu);
    ctx->pc = 0x1AEC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC24u;
    // 0x1aec28: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB778u, 0x1AEC24u, 0x1AEC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC2Cu;
label_1aec2c:
    // 0x1aec2c: 0xc070bcc  jal         func_1C2F30
label_1aec30:
    if (ctx->pc == 0x1AEC30u) {
        ctx->pc = 0x1AEC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC2Cu;
        // 0x1aec30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC34u;
        goto label_1aec34;
    }
    ctx->pc = 0x1AEC2Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC34u);
    ctx->pc = 0x1AEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC2Cu;
    // 0x1aec30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F30u, 0x1AEC2Cu, 0x1AEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC34u;
label_1aec34:
    // 0x1aec34: 0x3404e150  ori         $a0, $zero, 0xE150
    ctx->pc = 0x1aec34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57680);
label_1aec38:
    // 0x1aec38: 0xc06e4a4  jal         func_1B9290
label_1aec3c:
    if (ctx->pc == 0x1AEC3Cu) {
        ctx->pc = 0x1AEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC38u;
        // 0x1aec3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC40u;
        goto label_1aec40;
    }
    ctx->pc = 0x1AEC38u;
    SET_GPR_U32(ctx, 31, 0x1AEC40u);
    ctx->pc = 0x1AEC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC38u;
    // 0x1aec3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1AEC38u, 0x1AEC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC40u;
label_1aec40:
    // 0x1aec40: 0x3404e340  ori         $a0, $zero, 0xE340
    ctx->pc = 0x1aec40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58176);
label_1aec44:
    // 0x1aec44: 0xc06e4a4  jal         func_1B9290
label_1aec48:
    if (ctx->pc == 0x1AEC48u) {
        ctx->pc = 0x1AEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC44u;
        // 0x1aec48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC4Cu;
        goto label_1aec4c;
    }
    ctx->pc = 0x1AEC44u;
    SET_GPR_U32(ctx, 31, 0x1AEC4Cu);
    ctx->pc = 0x1AEC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC44u;
    // 0x1aec48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1AEC44u, 0x1AEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC4Cu;
label_1aec4c:
    // 0x1aec4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aec50:
    // 0x1aec50: 0xc107444  jal         func_41D110
label_1aec54:
    if (ctx->pc == 0x1AEC54u) {
        ctx->pc = 0x1AEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC50u;
        // 0x1aec54: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC58u;
        goto label_1aec58;
    }
    ctx->pc = 0x1AEC50u;
    SET_GPR_U32(ctx, 31, 0x1AEC58u);
    ctx->pc = 0x1AEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC50u;
    // 0x1aec54: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1AEC50u, 0x1AEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC58u;
label_1aec58:
    // 0x1aec58: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1aec5c:
    if (ctx->pc == 0x1AEC5Cu) {
        ctx->pc = 0x1AEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC58u;
        // 0x1aec5c: 0x3404e650  ori         $a0, $zero, 0xE650 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC60u;
        goto label_1aec60;
    }
    ctx->pc = 0x1AEC58u;
    {
        const bool branch_taken_0x1aec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC58u;
        // 0x1aec5c: 0x3404e650  ori         $a0, $zero, 0xE650 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec58) {
            ctx->pc = 0x1AECE0u;
            goto label_1aece0;
        }
    }
    ctx->pc = 0x1AEC60u;
label_1aec60:
    // 0x1aec60: 0xc06797e  jal         func_19E5F8
label_1aec64:
    if (ctx->pc == 0x1AEC64u) {
        ctx->pc = 0x1AEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC60u;
        // 0x1aec64: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC68u;
        goto label_1aec68;
    }
    ctx->pc = 0x1AEC60u;
    SET_GPR_U32(ctx, 31, 0x1AEC68u);
    ctx->pc = 0x1AEC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC60u;
    // 0x1aec64: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E5F8u, 0x1AEC60u, 0x1AEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC68u;
label_1aec68:
    // 0x1aec68: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1aec68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1aec6c:
    // 0x1aec6c: 0x34848ee0  ori         $a0, $a0, 0x8EE0
    ctx->pc = 0x1aec6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36576);
label_1aec70:
    // 0x1aec70: 0xc06e4a4  jal         func_1B9290
label_1aec74:
    if (ctx->pc == 0x1AEC74u) {
        ctx->pc = 0x1AEC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC70u;
        // 0x1aec74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC78u;
        goto label_1aec78;
    }
    ctx->pc = 0x1AEC70u;
    SET_GPR_U32(ctx, 31, 0x1AEC78u);
    ctx->pc = 0x1AEC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC70u;
    // 0x1aec74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1AEC70u, 0x1AEC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC78u;
label_1aec78:
    // 0x1aec78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1aec78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1aec7c:
    // 0x1aec7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1aec7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1aec80:
    // 0x1aec80: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1aec80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1aec84:
    // 0x1aec84: 0x8e05111c  lw          $a1, 0x111C($s0)
    ctx->pc = 0x1aec84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4380)));
label_1aec88:
    // 0x1aec88: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_1aec8c:
    if (ctx->pc == 0x1AEC8Cu) {
        ctx->pc = 0x1AEC90u;
        goto label_1aec90;
    }
    ctx->pc = 0x1AEC88u;
    {
        const bool branch_taken_0x1aec88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec88) {
            ctx->pc = 0x1AECE0u;
            goto label_1aece0;
        }
    }
    ctx->pc = 0x1AEC90u;
label_1aec90:
    // 0x1aec90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1aec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1aec94:
    // 0x1aec94: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x1aec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_1aec98:
    // 0x1aec98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1aec98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1aec9c:
    // 0x1aec9c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1aeca0:
    if (ctx->pc == 0x1AECA0u) {
        ctx->pc = 0x1AECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC9Cu;
        // 0x1aeca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECA4u;
        goto label_1aeca4;
    }
    ctx->pc = 0x1AEC9Cu;
    {
        const bool branch_taken_0x1aec9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC9Cu;
        // 0x1aeca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec9c) {
            ctx->pc = 0x1AECACu;
            goto label_1aecac;
        }
    }
    ctx->pc = 0x1AECA4u;
label_1aeca4:
    // 0x1aeca4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1aeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1aeca8:
    // 0x1aeca8: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1aeca8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1aecac:
    // 0x1aecac: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1aecb0:
    if (ctx->pc == 0x1AECB0u) {
        ctx->pc = 0x1AECB4u;
        goto label_1aecb4;
    }
    ctx->pc = 0x1AECACu;
    {
        const bool branch_taken_0x1aecac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aecac) {
            ctx->pc = 0x1AECE0u;
            goto label_1aece0;
        }
    }
    ctx->pc = 0x1AECB4u;
label_1aecb4:
    // 0x1aecb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1aecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1aecb8:
    // 0x1aecb8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1aecb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1aecbc:
    // 0x1aecbc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1aecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1aecc0:
    // 0x1aecc0: 0x60f809  jalr        $v1
label_1aecc4:
    if (ctx->pc == 0x1AECC4u) {
        ctx->pc = 0x1AECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECC0u;
        // 0x1aecc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECC8u;
        goto label_1aecc8;
    }
    ctx->pc = 0x1AECC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AECC8u);
        ctx->pc = 0x1AECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECC0u;
        // 0x1aecc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AECC0u, 0x1AECC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AECC8u;
label_1aecc8:
    // 0x1aecc8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1aecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1aeccc:
    // 0x1aeccc: 0x8e04111c  lw          $a0, 0x111C($s0)
    ctx->pc = 0x1aecccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4380)));
label_1aecd0:
    // 0x1aecd0: 0x24a54618  addiu       $a1, $a1, 0x4618
    ctx->pc = 0x1aecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17944));
label_1aecd4:
    // 0x1aecd4: 0xc138e72  jal         func_4E39C8
label_1aecd8:
    if (ctx->pc == 0x1AECD8u) {
        ctx->pc = 0x1AECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECD4u;
        // 0x1aecd8: 0x24060293  addiu       $a2, $zero, 0x293 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 659));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECDCu;
        goto label_1aecdc;
    }
    ctx->pc = 0x1AECD4u;
    SET_GPR_U32(ctx, 31, 0x1AECDCu);
    ctx->pc = 0x1AECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECD4u;
    // 0x1aecd8: 0x24060293  addiu       $a2, $zero, 0x293 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 659));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1AECD4u, 0x1AECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECDCu;
label_1aecdc:
    // 0x1aecdc: 0xae00111c  sw          $zero, 0x111C($s0)
    ctx->pc = 0x1aecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4380), GPR_U32(ctx, 0));
label_1aece0:
    // 0x1aece0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x1aece0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_1aece4:
    // 0x1aece4: 0x3402f420  ori         $v0, $zero, 0xF420
    ctx->pc = 0x1aece4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62496);
label_1aece8:
    // 0x1aece8: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1aece8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1aecec:
    // 0x1aecec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aececu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aecf0:
    // 0x1aecf0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x1aecf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_1aecf4:
    // 0x1aecf4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1aecf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aecf8:
    // 0x1aecf8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1aecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1aecfc:
    // 0x1aecfc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1aed00:
    if (ctx->pc == 0x1AED00u) {
        ctx->pc = 0x1AED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECFCu;
        // 0x1aed00: 0x112200  sll         $a0, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED04u;
        goto label_1aed04;
    }
    ctx->pc = 0x1AECFCu;
    {
        const bool branch_taken_0x1aecfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aecfc) {
            ctx->pc = 0x1AED00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AECFCu;
            // 0x1aed00: 0x112200  sll         $a0, $s1, 8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AED1Cu;
            goto label_1aed1c;
        }
    }
    ctx->pc = 0x1AED04u;
label_1aed04:
    // 0x1aed04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aed08:
    // 0x1aed08: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1aed08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1aed0c:
    // 0x1aed0c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1aed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1aed10:
    // 0x1aed10: 0x60f809  jalr        $v1
label_1aed14:
    if (ctx->pc == 0x1AED14u) {
        ctx->pc = 0x1AED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED10u;
        // 0x1aed14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED18u;
        goto label_1aed18;
    }
    ctx->pc = 0x1AED10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AED18u);
        ctx->pc = 0x1AED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED10u;
        // 0x1aed14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AED10u, 0x1AED18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AED18u;
label_1aed18:
    // 0x1aed18: 0x112200  sll         $a0, $s1, 8
    ctx->pc = 0x1aed18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
label_1aed1c:
    // 0x1aed1c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1aed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_1aed20:
    // 0x1aed20: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x1aed20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1aed24:
    // 0x1aed24: 0x34a535e0  ori         $a1, $a1, 0x35E0
    ctx->pc = 0x1aed24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13792);
label_1aed28:
    // 0x1aed28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1aed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1aed2c:
    // 0x1aed2c: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1aed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1aed30:
    // 0x1aed30: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
label_1aed34:
    if (ctx->pc == 0x1AED34u) {
        ctx->pc = 0x1AED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED30u;
        // 0x1aed34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED38u;
        goto label_1aed38;
    }
    ctx->pc = 0x1AED30u;
    {
        const bool branch_taken_0x1aed30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED30u;
        // 0x1aed34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed30) {
            ctx->pc = 0x1AED44u;
            goto label_1aed44;
        }
    }
    ctx->pc = 0x1AED38u;
label_1aed38:
    // 0x1aed38: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1aed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1aed3c:
    // 0x1aed3c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1aed3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1aed40:
    // 0x1aed40: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x1aed40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_1aed44:
    // 0x1aed44: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_1aed48:
    if (ctx->pc == 0x1AED48u) {
        ctx->pc = 0x1AED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED44u;
        // 0x1aed48: 0x921021  addu        $v0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED4Cu;
        goto label_1aed4c;
    }
    ctx->pc = 0x1AED44u;
    {
        const bool branch_taken_0x1aed44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED44u;
        // 0x1aed48: 0x921021  addu        $v0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed44) {
            ctx->pc = 0x1AED6Cu;
            goto label_1aed6c;
        }
    }
    ctx->pc = 0x1AED4Cu;
label_1aed4c:
    // 0x1aed4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1aed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1aed50:
    // 0x1aed50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1aed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1aed54:
    // 0x1aed54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aed54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aed58:
    // 0x1aed58: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1aed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1aed5c:
    // 0x1aed5c: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x1aed5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1aed60:
    // 0x1aed60: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1aed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1aed64:
    // 0x1aed64: 0x40f809  jalr        $v0
label_1aed68:
    if (ctx->pc == 0x1AED68u) {
        ctx->pc = 0x1AED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED64u;
        // 0x1aed68: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED6Cu;
        goto label_1aed6c;
    }
    ctx->pc = 0x1AED64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AED6Cu);
        ctx->pc = 0x1AED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED64u;
        // 0x1aed68: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AED64u, 0x1AED6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AED6Cu;
label_1aed6c:
    // 0x1aed6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aed6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1aed70:
    // 0x1aed70: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1aed70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1aed74:
    // 0x1aed74: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_1aed78:
    if (ctx->pc == 0x1AED78u) {
        ctx->pc = 0x1AED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED74u;
        // 0x1aed78: 0x26100540  addiu       $s0, $s0, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED7Cu;
        goto label_1aed7c;
    }
    ctx->pc = 0x1AED74u;
    {
        const bool branch_taken_0x1aed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED74u;
        // 0x1aed78: 0x26100540  addiu       $s0, $s0, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed74) {
            ctx->pc = 0x1AECF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aecf8;
        }
    }
    ctx->pc = 0x1AED7Cu;
label_1aed7c:
    // 0x1aed7c: 0x3402a940  ori         $v0, $zero, 0xA940
    ctx->pc = 0x1aed7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43328);
label_1aed80:
    // 0x1aed80: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1aed80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1aed84:
    // 0x1aed84: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1aed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1aed88:
    // 0x1aed88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1aed8c:
    if (ctx->pc == 0x1AED8Cu) {
        ctx->pc = 0x1AED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED88u;
        // 0x1aed8c: 0x34029970  ori         $v0, $zero, 0x9970 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED90u;
        goto label_1aed90;
    }
    ctx->pc = 0x1AED88u;
    {
        const bool branch_taken_0x1aed88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED88u;
        // 0x1aed8c: 0x34029970  ori         $v0, $zero, 0x9970 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed88) {
            ctx->pc = 0x1AED9Cu;
            goto label_1aed9c;
        }
    }
    ctx->pc = 0x1AED90u;
label_1aed90:
    // 0x1aed90: 0xc068e36  jal         func_1A38D8
label_1aed94:
    if (ctx->pc == 0x1AED94u) {
        ctx->pc = 0x1AED98u;
        goto label_1aed98;
    }
    ctx->pc = 0x1AED90u;
    SET_GPR_U32(ctx, 31, 0x1AED98u);
    ctx->pc = 0x1A38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A38D8u, 0x1AED90u, 0x1AED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED98u;
label_1aed98:
    // 0x1aed98: 0x34029970  ori         $v0, $zero, 0x9970
    ctx->pc = 0x1aed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39280);
label_1aed9c:
    // 0x1aed9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aed9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeda0:
    // 0x1aeda0: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1aeda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1aeda4:
    // 0x1aeda4: 0x0  nop
    ctx->pc = 0x1aeda4u;
    // NOP
label_1aeda8:
    // 0x1aeda8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1aeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1aedac:
    // 0x1aedac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1aedb0:
    if (ctx->pc == 0x1AEDB0u) {
        ctx->pc = 0x1AEDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDACu;
        // 0x1aedb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDB4u;
        goto label_1aedb4;
    }
    ctx->pc = 0x1AEDACu;
    {
        const bool branch_taken_0x1aedac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aedac) {
            ctx->pc = 0x1AEDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEDACu;
            // 0x1aedb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEDCCu;
            goto label_1aedcc;
        }
    }
    ctx->pc = 0x1AEDB4u;
label_1aedb4:
    // 0x1aedb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aedb8:
    // 0x1aedb8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1aedb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1aedbc:
    // 0x1aedbc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1aedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1aedc0:
    // 0x1aedc0: 0x60f809  jalr        $v1
label_1aedc4:
    if (ctx->pc == 0x1AEDC4u) {
        ctx->pc = 0x1AEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDC0u;
        // 0x1aedc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDC8u;
        goto label_1aedc8;
    }
    ctx->pc = 0x1AEDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AEDC8u);
        ctx->pc = 0x1AEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDC0u;
        // 0x1aedc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEDC0u, 0x1AEDC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEDC8u;
label_1aedc8:
    // 0x1aedc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aedc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1aedcc:
    // 0x1aedcc: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1aedccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1aedd0:
    // 0x1aedd0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1aedd4:
    if (ctx->pc == 0x1AEDD4u) {
        ctx->pc = 0x1AEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDD0u;
        // 0x1aedd4: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDD8u;
        goto label_1aedd8;
    }
    ctx->pc = 0x1AEDD0u;
    {
        const bool branch_taken_0x1aedd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDD0u;
        // 0x1aedd4: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedd0) {
            ctx->pc = 0x1AEDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeda8;
        }
    }
    ctx->pc = 0x1AEDD8u;
label_1aedd8:
    // 0x1aedd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1aedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1aeddc:
    // 0x1aeddc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aeddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aede0:
    // 0x1aede0: 0x34424ae0  ori         $v0, $v0, 0x4AE0
    ctx->pc = 0x1aede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19168);
label_1aede4:
    // 0x1aede4: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1aede4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1aede8:
    // 0x1aede8: 0x8e020434  lw          $v0, 0x434($s0)
    ctx->pc = 0x1aede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
label_1aedec:
    // 0x1aedec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1aedf0:
    if (ctx->pc == 0x1AEDF0u) {
        ctx->pc = 0x1AEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDECu;
        // 0x1aedf0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDF4u;
        goto label_1aedf4;
    }
    ctx->pc = 0x1AEDECu;
    {
        const bool branch_taken_0x1aedec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aedec) {
            ctx->pc = 0x1AEDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEDECu;
            // 0x1aedf0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEE0Cu;
            goto label_1aee0c;
        }
    }
    ctx->pc = 0x1AEDF4u;
label_1aedf4:
    // 0x1aedf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aedf8:
    // 0x1aedf8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1aedf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1aedfc:
    // 0x1aedfc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1aedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1aee00:
    // 0x1aee00: 0x60f809  jalr        $v1
label_1aee04:
    if (ctx->pc == 0x1AEE04u) {
        ctx->pc = 0x1AEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE00u;
        // 0x1aee04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE08u;
        goto label_1aee08;
    }
    ctx->pc = 0x1AEE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AEE08u);
        ctx->pc = 0x1AEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE00u;
        // 0x1aee04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE00u, 0x1AEE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEE08u;
label_1aee08:
    // 0x1aee08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aee08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1aee0c:
    // 0x1aee0c: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x1aee0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1aee10:
    // 0x1aee10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1aee14:
    if (ctx->pc == 0x1AEE14u) {
        ctx->pc = 0x1AEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE10u;
        // 0x1aee14: 0x26100560  addiu       $s0, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE18u;
        goto label_1aee18;
    }
    ctx->pc = 0x1AEE10u;
    {
        const bool branch_taken_0x1aee10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE10u;
        // 0x1aee14: 0x26100560  addiu       $s0, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee10) {
            ctx->pc = 0x1AEDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aede8;
        }
    }
    ctx->pc = 0x1AEE18u;
label_1aee18:
    // 0x1aee18: 0x34029970  ori         $v0, $zero, 0x9970
    ctx->pc = 0x1aee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39280);
label_1aee1c:
    // 0x1aee1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aee1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aee20:
    // 0x1aee20: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1aee20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1aee24:
    // 0x1aee24: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1aee24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aee28:
    // 0x1aee28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1aee28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1aee2c:
    // 0x1aee2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1aee2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1aee30:
    // 0x1aee30: 0x263103f0  addiu       $s1, $s1, 0x3F0
    ctx->pc = 0x1aee30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
label_1aee34:
    // 0x1aee34: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1aee34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aee38:
    // 0x1aee38: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1aee38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aee3c:
    // 0x1aee3c: 0x40f809  jalr        $v0
label_1aee40:
    if (ctx->pc == 0x1AEE40u) {
        ctx->pc = 0x1AEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE3Cu;
        // 0x1aee40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE44u;
        goto label_1aee44;
    }
    ctx->pc = 0x1AEE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEE44u);
        ctx->pc = 0x1AEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE3Cu;
        // 0x1aee40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE3Cu, 0x1AEE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEE44u;
label_1aee44:
    // 0x1aee44: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1aee44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1aee48:
    // 0x1aee48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1aee4c:
    if (ctx->pc == 0x1AEE4Cu) {
        ctx->pc = 0x1AEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE48u;
        // 0x1aee4c: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE50u;
        goto label_1aee50;
    }
    ctx->pc = 0x1AEE48u;
    {
        const bool branch_taken_0x1aee48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE48u;
        // 0x1aee4c: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee48) {
            ctx->pc = 0x1AEE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aee28;
        }
    }
    ctx->pc = 0x1AEE50u;
label_1aee50:
    // 0x1aee50: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1aee50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1aee54:
    // 0x1aee54: 0x348434a0  ori         $a0, $a0, 0x34A0
    ctx->pc = 0x1aee54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13472);
label_1aee58:
    // 0x1aee58: 0xc0687c4  jal         func_1A1F10
label_1aee5c:
    if (ctx->pc == 0x1AEE5Cu) {
        ctx->pc = 0x1AEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE58u;
        // 0x1aee5c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE60u;
        goto label_1aee60;
    }
    ctx->pc = 0x1AEE58u;
    SET_GPR_U32(ctx, 31, 0x1AEE60u);
    ctx->pc = 0x1AEE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE58u;
    // 0x1aee5c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1AEE58u, 0x1AEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE60u;
label_1aee60:
    // 0x1aee60: 0x3404a940  ori         $a0, $zero, 0xA940
    ctx->pc = 0x1aee60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43328);
label_1aee64:
    // 0x1aee64: 0xc068e36  jal         func_1A38D8
label_1aee68:
    if (ctx->pc == 0x1AEE68u) {
        ctx->pc = 0x1AEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE64u;
        // 0x1aee68: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE6Cu;
        goto label_1aee6c;
    }
    ctx->pc = 0x1AEE64u;
    SET_GPR_U32(ctx, 31, 0x1AEE6Cu);
    ctx->pc = 0x1AEE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE64u;
    // 0x1aee68: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A38D8u, 0x1AEE64u, 0x1AEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE6Cu;
label_1aee6c:
    // 0x1aee6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aee70:
    // 0x1aee70: 0x8c46eddc  lw          $a2, -0x1224($v0)
    ctx->pc = 0x1aee70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_1aee74:
    // 0x1aee74: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1aee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1aee78:
    // 0x1aee78: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1aee78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aee7c:
    // 0x1aee7c: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1aee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aee80:
    // 0x1aee80: 0xa0f809  jalr        $a1
label_1aee84:
    if (ctx->pc == 0x1AEE84u) {
        ctx->pc = 0x1AEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE80u;
        // 0x1aee84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE88u;
        goto label_1aee88;
    }
    ctx->pc = 0x1AEE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AEE88u);
        ctx->pc = 0x1AEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE80u;
        // 0x1aee84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE80u, 0x1AEE88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEE88u;
label_1aee88:
    // 0x1aee88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aee88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aee8c:
    // 0x1aee8c: 0x8c46ec34  lw          $a2, -0x13CC($v0)
    ctx->pc = 0x1aee8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
label_1aee90:
    // 0x1aee90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1aee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1aee94:
    // 0x1aee94: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1aee94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aee98:
    // 0x1aee98: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1aee98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aee9c:
    // 0x1aee9c: 0xa0f809  jalr        $a1
label_1aeea0:
    if (ctx->pc == 0x1AEEA0u) {
        ctx->pc = 0x1AEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE9Cu;
        // 0x1aeea0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEEA4u;
        goto label_1aeea4;
    }
    ctx->pc = 0x1AEE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AEEA4u);
        ctx->pc = 0x1AEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE9Cu;
        // 0x1aeea0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE9Cu, 0x1AEEA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEEA4u;
label_1aeea4:
    // 0x1aeea4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aeea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aeea8:
    // 0x1aeea8: 0x8c46ecec  lw          $a2, -0x1314($v0)
    ctx->pc = 0x1aeea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
label_1aeeac:
    // 0x1aeeac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1aeeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1aeeb0:
    // 0x1aeeb0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1aeeb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aeeb4:
    // 0x1aeeb4: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1aeeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aeeb8:
    // 0x1aeeb8: 0xa0f809  jalr        $a1
label_1aeebc:
    if (ctx->pc == 0x1AEEBCu) {
        ctx->pc = 0x1AEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEB8u;
        // 0x1aeebc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEEC0u;
        goto label_1aeec0;
    }
    ctx->pc = 0x1AEEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AEEC0u);
        ctx->pc = 0x1AEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEB8u;
        // 0x1aeebc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEEB8u, 0x1AEEC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEEC0u;
label_1aeec0:
    // 0x1aeec0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aeec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aeec4:
    // 0x1aeec4: 0x8c46ec8c  lw          $a2, -0x1374($v0)
    ctx->pc = 0x1aeec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962316)));
label_1aeec8:
    // 0x1aeec8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1aeec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1aeecc:
    // 0x1aeecc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1aeeccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aeed0:
    // 0x1aeed0: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1aeed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aeed4:
    // 0x1aeed4: 0xa0f809  jalr        $a1
label_1aeed8:
    if (ctx->pc == 0x1AEED8u) {
        ctx->pc = 0x1AEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEED4u;
        // 0x1aeed8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEEDCu;
        goto label_1aeedc;
    }
    ctx->pc = 0x1AEED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AEEDCu);
        ctx->pc = 0x1AEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEED4u;
        // 0x1aeed8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEED4u, 0x1AEEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEEDCu;
label_1aeedc:
    // 0x1aeedc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aeedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aeee0:
    // 0x1aeee0: 0x8c46ee94  lw          $a2, -0x116C($v0)
    ctx->pc = 0x1aeee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962836)));
label_1aeee4:
    // 0x1aeee4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1aeee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1aeee8:
    // 0x1aeee8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1aeee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aeeec:
    // 0x1aeeec: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1aeeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aeef0:
    // 0x1aeef0: 0xa0f809  jalr        $a1
label_1aeef4:
    if (ctx->pc == 0x1AEEF4u) {
        ctx->pc = 0x1AEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEF0u;
        // 0x1aeef4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEEF8u;
        goto label_1aeef8;
    }
    ctx->pc = 0x1AEEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AEEF8u);
        ctx->pc = 0x1AEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEF0u;
        // 0x1aeef4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEEF0u, 0x1AEEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEEF8u;
label_1aeef8:
    // 0x1aeef8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aeef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aeefc:
    // 0x1aeefc: 0x8c45ebec  lw          $a1, -0x1414($v0)
    ctx->pc = 0x1aeefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962156)));
label_1aef00:
    // 0x1aef00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1aef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1aef04:
    // 0x1aef04: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1aef04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aef08:
    // 0x1aef08: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1aef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1aef0c:
    // 0x1aef0c: 0x40f809  jalr        $v0
label_1aef10:
    if (ctx->pc == 0x1AEF10u) {
        ctx->pc = 0x1AEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF0Cu;
        // 0x1aef10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF14u;
        goto label_1aef14;
    }
    ctx->pc = 0x1AEF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEF14u);
        ctx->pc = 0x1AEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF0Cu;
        // 0x1aef10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF0Cu, 0x1AEF14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEF14u;
label_1aef14:
    // 0x1aef14: 0x34048960  ori         $a0, $zero, 0x8960
    ctx->pc = 0x1aef14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35168);
label_1aef18:
    // 0x1aef18: 0xc0709e2  jal         func_1C2788
label_1aef1c:
    if (ctx->pc == 0x1AEF1Cu) {
        ctx->pc = 0x1AEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF18u;
        // 0x1aef1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF20u;
        goto label_1aef20;
    }
    ctx->pc = 0x1AEF18u;
    SET_GPR_U32(ctx, 31, 0x1AEF20u);
    ctx->pc = 0x1AEF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF18u;
    // 0x1aef1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2788u, 0x1AEF18u, 0x1AEF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF20u;
label_1aef20:
    // 0x1aef20: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1aef20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1aef24:
    // 0x1aef24: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1aef24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1aef28:
    // 0x1aef28: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1aef28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1aef2c:
    // 0x1aef2c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1aef2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aef30:
    // 0x1aef30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1aef30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aef34:
    // 0x1aef34: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1aef34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aef38:
    // 0x1aef38: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1aef38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aef3c:
    // 0x1aef3c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1aef3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aef40:
    // 0x1aef40: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1aef40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aef44:
    // 0x1aef44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aef44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aef48:
    // 0x1aef48: 0x3e00008  jr          $ra
label_1aef4c:
    if (ctx->pc == 0x1AEF4Cu) {
        ctx->pc = 0x1AEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF48u;
        // 0x1aef4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF50u;
        goto label_fallthrough_0x1aef48;
    }
    ctx->pc = 0x1AEF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF48u;
        // 0x1aef4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aef48:
    ctx->pc = 0x1AEF50u;
}
