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

// Function: sub_00490570
// Address: 0x490570 - 0x491750
void sub_00490570_0x490570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490570_0x490570");
#endif

    switch (ctx->pc) {
        case 0x490570u: goto label_490570;
        case 0x490574u: goto label_490574;
        case 0x490578u: goto label_490578;
        case 0x49057cu: goto label_49057c;
        case 0x490580u: goto label_490580;
        case 0x490584u: goto label_490584;
        case 0x490588u: goto label_490588;
        case 0x49058cu: goto label_49058c;
        case 0x490590u: goto label_490590;
        case 0x490594u: goto label_490594;
        case 0x490598u: goto label_490598;
        case 0x49059cu: goto label_49059c;
        case 0x4905a0u: goto label_4905a0;
        case 0x4905a4u: goto label_4905a4;
        case 0x4905a8u: goto label_4905a8;
        case 0x4905acu: goto label_4905ac;
        case 0x4905b0u: goto label_4905b0;
        case 0x4905b4u: goto label_4905b4;
        case 0x4905b8u: goto label_4905b8;
        case 0x4905bcu: goto label_4905bc;
        case 0x4905c0u: goto label_4905c0;
        case 0x4905c4u: goto label_4905c4;
        case 0x4905c8u: goto label_4905c8;
        case 0x4905ccu: goto label_4905cc;
        case 0x4905d0u: goto label_4905d0;
        case 0x4905d4u: goto label_4905d4;
        case 0x4905d8u: goto label_4905d8;
        case 0x4905dcu: goto label_4905dc;
        case 0x4905e0u: goto label_4905e0;
        case 0x4905e4u: goto label_4905e4;
        case 0x4905e8u: goto label_4905e8;
        case 0x4905ecu: goto label_4905ec;
        case 0x4905f0u: goto label_4905f0;
        case 0x4905f4u: goto label_4905f4;
        case 0x4905f8u: goto label_4905f8;
        case 0x4905fcu: goto label_4905fc;
        case 0x490600u: goto label_490600;
        case 0x490604u: goto label_490604;
        case 0x490608u: goto label_490608;
        case 0x49060cu: goto label_49060c;
        case 0x490610u: goto label_490610;
        case 0x490614u: goto label_490614;
        case 0x490618u: goto label_490618;
        case 0x49061cu: goto label_49061c;
        case 0x490620u: goto label_490620;
        case 0x490624u: goto label_490624;
        case 0x490628u: goto label_490628;
        case 0x49062cu: goto label_49062c;
        case 0x490630u: goto label_490630;
        case 0x490634u: goto label_490634;
        case 0x490638u: goto label_490638;
        case 0x49063cu: goto label_49063c;
        case 0x490640u: goto label_490640;
        case 0x490644u: goto label_490644;
        case 0x490648u: goto label_490648;
        case 0x49064cu: goto label_49064c;
        case 0x490650u: goto label_490650;
        case 0x490654u: goto label_490654;
        case 0x490658u: goto label_490658;
        case 0x49065cu: goto label_49065c;
        case 0x490660u: goto label_490660;
        case 0x490664u: goto label_490664;
        case 0x490668u: goto label_490668;
        case 0x49066cu: goto label_49066c;
        case 0x490670u: goto label_490670;
        case 0x490674u: goto label_490674;
        case 0x490678u: goto label_490678;
        case 0x49067cu: goto label_49067c;
        case 0x490680u: goto label_490680;
        case 0x490684u: goto label_490684;
        case 0x490688u: goto label_490688;
        case 0x49068cu: goto label_49068c;
        case 0x490690u: goto label_490690;
        case 0x490694u: goto label_490694;
        case 0x490698u: goto label_490698;
        case 0x49069cu: goto label_49069c;
        case 0x4906a0u: goto label_4906a0;
        case 0x4906a4u: goto label_4906a4;
        case 0x4906a8u: goto label_4906a8;
        case 0x4906acu: goto label_4906ac;
        case 0x4906b0u: goto label_4906b0;
        case 0x4906b4u: goto label_4906b4;
        case 0x4906b8u: goto label_4906b8;
        case 0x4906bcu: goto label_4906bc;
        case 0x4906c0u: goto label_4906c0;
        case 0x4906c4u: goto label_4906c4;
        case 0x4906c8u: goto label_4906c8;
        case 0x4906ccu: goto label_4906cc;
        case 0x4906d0u: goto label_4906d0;
        case 0x4906d4u: goto label_4906d4;
        case 0x4906d8u: goto label_4906d8;
        case 0x4906dcu: goto label_4906dc;
        case 0x4906e0u: goto label_4906e0;
        case 0x4906e4u: goto label_4906e4;
        case 0x4906e8u: goto label_4906e8;
        case 0x4906ecu: goto label_4906ec;
        case 0x4906f0u: goto label_4906f0;
        case 0x4906f4u: goto label_4906f4;
        case 0x4906f8u: goto label_4906f8;
        case 0x4906fcu: goto label_4906fc;
        case 0x490700u: goto label_490700;
        case 0x490704u: goto label_490704;
        case 0x490708u: goto label_490708;
        case 0x49070cu: goto label_49070c;
        case 0x490710u: goto label_490710;
        case 0x490714u: goto label_490714;
        case 0x490718u: goto label_490718;
        case 0x49071cu: goto label_49071c;
        case 0x490720u: goto label_490720;
        case 0x490724u: goto label_490724;
        case 0x490728u: goto label_490728;
        case 0x49072cu: goto label_49072c;
        case 0x490730u: goto label_490730;
        case 0x490734u: goto label_490734;
        case 0x490738u: goto label_490738;
        case 0x49073cu: goto label_49073c;
        case 0x490740u: goto label_490740;
        case 0x490744u: goto label_490744;
        case 0x490748u: goto label_490748;
        case 0x49074cu: goto label_49074c;
        case 0x490750u: goto label_490750;
        case 0x490754u: goto label_490754;
        case 0x490758u: goto label_490758;
        case 0x49075cu: goto label_49075c;
        case 0x490760u: goto label_490760;
        case 0x490764u: goto label_490764;
        case 0x490768u: goto label_490768;
        case 0x49076cu: goto label_49076c;
        case 0x490770u: goto label_490770;
        case 0x490774u: goto label_490774;
        case 0x490778u: goto label_490778;
        case 0x49077cu: goto label_49077c;
        case 0x490780u: goto label_490780;
        case 0x490784u: goto label_490784;
        case 0x490788u: goto label_490788;
        case 0x49078cu: goto label_49078c;
        case 0x490790u: goto label_490790;
        case 0x490794u: goto label_490794;
        case 0x490798u: goto label_490798;
        case 0x49079cu: goto label_49079c;
        case 0x4907a0u: goto label_4907a0;
        case 0x4907a4u: goto label_4907a4;
        case 0x4907a8u: goto label_4907a8;
        case 0x4907acu: goto label_4907ac;
        case 0x4907b0u: goto label_4907b0;
        case 0x4907b4u: goto label_4907b4;
        case 0x4907b8u: goto label_4907b8;
        case 0x4907bcu: goto label_4907bc;
        case 0x4907c0u: goto label_4907c0;
        case 0x4907c4u: goto label_4907c4;
        case 0x4907c8u: goto label_4907c8;
        case 0x4907ccu: goto label_4907cc;
        case 0x4907d0u: goto label_4907d0;
        case 0x4907d4u: goto label_4907d4;
        case 0x4907d8u: goto label_4907d8;
        case 0x4907dcu: goto label_4907dc;
        case 0x4907e0u: goto label_4907e0;
        case 0x4907e4u: goto label_4907e4;
        case 0x4907e8u: goto label_4907e8;
        case 0x4907ecu: goto label_4907ec;
        case 0x4907f0u: goto label_4907f0;
        case 0x4907f4u: goto label_4907f4;
        case 0x4907f8u: goto label_4907f8;
        case 0x4907fcu: goto label_4907fc;
        case 0x490800u: goto label_490800;
        case 0x490804u: goto label_490804;
        case 0x490808u: goto label_490808;
        case 0x49080cu: goto label_49080c;
        case 0x490810u: goto label_490810;
        case 0x490814u: goto label_490814;
        case 0x490818u: goto label_490818;
        case 0x49081cu: goto label_49081c;
        case 0x490820u: goto label_490820;
        case 0x490824u: goto label_490824;
        case 0x490828u: goto label_490828;
        case 0x49082cu: goto label_49082c;
        case 0x490830u: goto label_490830;
        case 0x490834u: goto label_490834;
        case 0x490838u: goto label_490838;
        case 0x49083cu: goto label_49083c;
        case 0x490840u: goto label_490840;
        case 0x490844u: goto label_490844;
        case 0x490848u: goto label_490848;
        case 0x49084cu: goto label_49084c;
        case 0x490850u: goto label_490850;
        case 0x490854u: goto label_490854;
        case 0x490858u: goto label_490858;
        case 0x49085cu: goto label_49085c;
        case 0x490860u: goto label_490860;
        case 0x490864u: goto label_490864;
        case 0x490868u: goto label_490868;
        case 0x49086cu: goto label_49086c;
        case 0x490870u: goto label_490870;
        case 0x490874u: goto label_490874;
        case 0x490878u: goto label_490878;
        case 0x49087cu: goto label_49087c;
        case 0x490880u: goto label_490880;
        case 0x490884u: goto label_490884;
        case 0x490888u: goto label_490888;
        case 0x49088cu: goto label_49088c;
        case 0x490890u: goto label_490890;
        case 0x490894u: goto label_490894;
        case 0x490898u: goto label_490898;
        case 0x49089cu: goto label_49089c;
        case 0x4908a0u: goto label_4908a0;
        case 0x4908a4u: goto label_4908a4;
        case 0x4908a8u: goto label_4908a8;
        case 0x4908acu: goto label_4908ac;
        case 0x4908b0u: goto label_4908b0;
        case 0x4908b4u: goto label_4908b4;
        case 0x4908b8u: goto label_4908b8;
        case 0x4908bcu: goto label_4908bc;
        case 0x4908c0u: goto label_4908c0;
        case 0x4908c4u: goto label_4908c4;
        case 0x4908c8u: goto label_4908c8;
        case 0x4908ccu: goto label_4908cc;
        case 0x4908d0u: goto label_4908d0;
        case 0x4908d4u: goto label_4908d4;
        case 0x4908d8u: goto label_4908d8;
        case 0x4908dcu: goto label_4908dc;
        case 0x4908e0u: goto label_4908e0;
        case 0x4908e4u: goto label_4908e4;
        case 0x4908e8u: goto label_4908e8;
        case 0x4908ecu: goto label_4908ec;
        case 0x4908f0u: goto label_4908f0;
        case 0x4908f4u: goto label_4908f4;
        case 0x4908f8u: goto label_4908f8;
        case 0x4908fcu: goto label_4908fc;
        case 0x490900u: goto label_490900;
        case 0x490904u: goto label_490904;
        case 0x490908u: goto label_490908;
        case 0x49090cu: goto label_49090c;
        case 0x490910u: goto label_490910;
        case 0x490914u: goto label_490914;
        case 0x490918u: goto label_490918;
        case 0x49091cu: goto label_49091c;
        case 0x490920u: goto label_490920;
        case 0x490924u: goto label_490924;
        case 0x490928u: goto label_490928;
        case 0x49092cu: goto label_49092c;
        case 0x490930u: goto label_490930;
        case 0x490934u: goto label_490934;
        case 0x490938u: goto label_490938;
        case 0x49093cu: goto label_49093c;
        case 0x490940u: goto label_490940;
        case 0x490944u: goto label_490944;
        case 0x490948u: goto label_490948;
        case 0x49094cu: goto label_49094c;
        case 0x490950u: goto label_490950;
        case 0x490954u: goto label_490954;
        case 0x490958u: goto label_490958;
        case 0x49095cu: goto label_49095c;
        case 0x490960u: goto label_490960;
        case 0x490964u: goto label_490964;
        case 0x490968u: goto label_490968;
        case 0x49096cu: goto label_49096c;
        case 0x490970u: goto label_490970;
        case 0x490974u: goto label_490974;
        case 0x490978u: goto label_490978;
        case 0x49097cu: goto label_49097c;
        case 0x490980u: goto label_490980;
        case 0x490984u: goto label_490984;
        case 0x490988u: goto label_490988;
        case 0x49098cu: goto label_49098c;
        case 0x490990u: goto label_490990;
        case 0x490994u: goto label_490994;
        case 0x490998u: goto label_490998;
        case 0x49099cu: goto label_49099c;
        case 0x4909a0u: goto label_4909a0;
        case 0x4909a4u: goto label_4909a4;
        case 0x4909a8u: goto label_4909a8;
        case 0x4909acu: goto label_4909ac;
        case 0x4909b0u: goto label_4909b0;
        case 0x4909b4u: goto label_4909b4;
        case 0x4909b8u: goto label_4909b8;
        case 0x4909bcu: goto label_4909bc;
        case 0x4909c0u: goto label_4909c0;
        case 0x4909c4u: goto label_4909c4;
        case 0x4909c8u: goto label_4909c8;
        case 0x4909ccu: goto label_4909cc;
        case 0x4909d0u: goto label_4909d0;
        case 0x4909d4u: goto label_4909d4;
        case 0x4909d8u: goto label_4909d8;
        case 0x4909dcu: goto label_4909dc;
        case 0x4909e0u: goto label_4909e0;
        case 0x4909e4u: goto label_4909e4;
        case 0x4909e8u: goto label_4909e8;
        case 0x4909ecu: goto label_4909ec;
        case 0x4909f0u: goto label_4909f0;
        case 0x4909f4u: goto label_4909f4;
        case 0x4909f8u: goto label_4909f8;
        case 0x4909fcu: goto label_4909fc;
        case 0x490a00u: goto label_490a00;
        case 0x490a04u: goto label_490a04;
        case 0x490a08u: goto label_490a08;
        case 0x490a0cu: goto label_490a0c;
        case 0x490a10u: goto label_490a10;
        case 0x490a14u: goto label_490a14;
        case 0x490a18u: goto label_490a18;
        case 0x490a1cu: goto label_490a1c;
        case 0x490a20u: goto label_490a20;
        case 0x490a24u: goto label_490a24;
        case 0x490a28u: goto label_490a28;
        case 0x490a2cu: goto label_490a2c;
        case 0x490a30u: goto label_490a30;
        case 0x490a34u: goto label_490a34;
        case 0x490a38u: goto label_490a38;
        case 0x490a3cu: goto label_490a3c;
        case 0x490a40u: goto label_490a40;
        case 0x490a44u: goto label_490a44;
        case 0x490a48u: goto label_490a48;
        case 0x490a4cu: goto label_490a4c;
        case 0x490a50u: goto label_490a50;
        case 0x490a54u: goto label_490a54;
        case 0x490a58u: goto label_490a58;
        case 0x490a5cu: goto label_490a5c;
        case 0x490a60u: goto label_490a60;
        case 0x490a64u: goto label_490a64;
        case 0x490a68u: goto label_490a68;
        case 0x490a6cu: goto label_490a6c;
        case 0x490a70u: goto label_490a70;
        case 0x490a74u: goto label_490a74;
        case 0x490a78u: goto label_490a78;
        case 0x490a7cu: goto label_490a7c;
        case 0x490a80u: goto label_490a80;
        case 0x490a84u: goto label_490a84;
        case 0x490a88u: goto label_490a88;
        case 0x490a8cu: goto label_490a8c;
        case 0x490a90u: goto label_490a90;
        case 0x490a94u: goto label_490a94;
        case 0x490a98u: goto label_490a98;
        case 0x490a9cu: goto label_490a9c;
        case 0x490aa0u: goto label_490aa0;
        case 0x490aa4u: goto label_490aa4;
        case 0x490aa8u: goto label_490aa8;
        case 0x490aacu: goto label_490aac;
        case 0x490ab0u: goto label_490ab0;
        case 0x490ab4u: goto label_490ab4;
        case 0x490ab8u: goto label_490ab8;
        case 0x490abcu: goto label_490abc;
        case 0x490ac0u: goto label_490ac0;
        case 0x490ac4u: goto label_490ac4;
        case 0x490ac8u: goto label_490ac8;
        case 0x490accu: goto label_490acc;
        case 0x490ad0u: goto label_490ad0;
        case 0x490ad4u: goto label_490ad4;
        case 0x490ad8u: goto label_490ad8;
        case 0x490adcu: goto label_490adc;
        case 0x490ae0u: goto label_490ae0;
        case 0x490ae4u: goto label_490ae4;
        case 0x490ae8u: goto label_490ae8;
        case 0x490aecu: goto label_490aec;
        case 0x490af0u: goto label_490af0;
        case 0x490af4u: goto label_490af4;
        case 0x490af8u: goto label_490af8;
        case 0x490afcu: goto label_490afc;
        case 0x490b00u: goto label_490b00;
        case 0x490b04u: goto label_490b04;
        case 0x490b08u: goto label_490b08;
        case 0x490b0cu: goto label_490b0c;
        case 0x490b10u: goto label_490b10;
        case 0x490b14u: goto label_490b14;
        case 0x490b18u: goto label_490b18;
        case 0x490b1cu: goto label_490b1c;
        case 0x490b20u: goto label_490b20;
        case 0x490b24u: goto label_490b24;
        case 0x490b28u: goto label_490b28;
        case 0x490b2cu: goto label_490b2c;
        case 0x490b30u: goto label_490b30;
        case 0x490b34u: goto label_490b34;
        case 0x490b38u: goto label_490b38;
        case 0x490b3cu: goto label_490b3c;
        case 0x490b40u: goto label_490b40;
        case 0x490b44u: goto label_490b44;
        case 0x490b48u: goto label_490b48;
        case 0x490b4cu: goto label_490b4c;
        case 0x490b50u: goto label_490b50;
        case 0x490b54u: goto label_490b54;
        case 0x490b58u: goto label_490b58;
        case 0x490b5cu: goto label_490b5c;
        case 0x490b60u: goto label_490b60;
        case 0x490b64u: goto label_490b64;
        case 0x490b68u: goto label_490b68;
        case 0x490b6cu: goto label_490b6c;
        case 0x490b70u: goto label_490b70;
        case 0x490b74u: goto label_490b74;
        case 0x490b78u: goto label_490b78;
        case 0x490b7cu: goto label_490b7c;
        case 0x490b80u: goto label_490b80;
        case 0x490b84u: goto label_490b84;
        case 0x490b88u: goto label_490b88;
        case 0x490b8cu: goto label_490b8c;
        case 0x490b90u: goto label_490b90;
        case 0x490b94u: goto label_490b94;
        case 0x490b98u: goto label_490b98;
        case 0x490b9cu: goto label_490b9c;
        case 0x490ba0u: goto label_490ba0;
        case 0x490ba4u: goto label_490ba4;
        case 0x490ba8u: goto label_490ba8;
        case 0x490bacu: goto label_490bac;
        case 0x490bb0u: goto label_490bb0;
        case 0x490bb4u: goto label_490bb4;
        case 0x490bb8u: goto label_490bb8;
        case 0x490bbcu: goto label_490bbc;
        case 0x490bc0u: goto label_490bc0;
        case 0x490bc4u: goto label_490bc4;
        case 0x490bc8u: goto label_490bc8;
        case 0x490bccu: goto label_490bcc;
        case 0x490bd0u: goto label_490bd0;
        case 0x490bd4u: goto label_490bd4;
        case 0x490bd8u: goto label_490bd8;
        case 0x490bdcu: goto label_490bdc;
        case 0x490be0u: goto label_490be0;
        case 0x490be4u: goto label_490be4;
        case 0x490be8u: goto label_490be8;
        case 0x490becu: goto label_490bec;
        case 0x490bf0u: goto label_490bf0;
        case 0x490bf4u: goto label_490bf4;
        case 0x490bf8u: goto label_490bf8;
        case 0x490bfcu: goto label_490bfc;
        case 0x490c00u: goto label_490c00;
        case 0x490c04u: goto label_490c04;
        case 0x490c08u: goto label_490c08;
        case 0x490c0cu: goto label_490c0c;
        case 0x490c10u: goto label_490c10;
        case 0x490c14u: goto label_490c14;
        case 0x490c18u: goto label_490c18;
        case 0x490c1cu: goto label_490c1c;
        case 0x490c20u: goto label_490c20;
        case 0x490c24u: goto label_490c24;
        case 0x490c28u: goto label_490c28;
        case 0x490c2cu: goto label_490c2c;
        case 0x490c30u: goto label_490c30;
        case 0x490c34u: goto label_490c34;
        case 0x490c38u: goto label_490c38;
        case 0x490c3cu: goto label_490c3c;
        case 0x490c40u: goto label_490c40;
        case 0x490c44u: goto label_490c44;
        case 0x490c48u: goto label_490c48;
        case 0x490c4cu: goto label_490c4c;
        case 0x490c50u: goto label_490c50;
        case 0x490c54u: goto label_490c54;
        case 0x490c58u: goto label_490c58;
        case 0x490c5cu: goto label_490c5c;
        case 0x490c60u: goto label_490c60;
        case 0x490c64u: goto label_490c64;
        case 0x490c68u: goto label_490c68;
        case 0x490c6cu: goto label_490c6c;
        case 0x490c70u: goto label_490c70;
        case 0x490c74u: goto label_490c74;
        case 0x490c78u: goto label_490c78;
        case 0x490c7cu: goto label_490c7c;
        case 0x490c80u: goto label_490c80;
        case 0x490c84u: goto label_490c84;
        case 0x490c88u: goto label_490c88;
        case 0x490c8cu: goto label_490c8c;
        case 0x490c90u: goto label_490c90;
        case 0x490c94u: goto label_490c94;
        case 0x490c98u: goto label_490c98;
        case 0x490c9cu: goto label_490c9c;
        case 0x490ca0u: goto label_490ca0;
        case 0x490ca4u: goto label_490ca4;
        case 0x490ca8u: goto label_490ca8;
        case 0x490cacu: goto label_490cac;
        case 0x490cb0u: goto label_490cb0;
        case 0x490cb4u: goto label_490cb4;
        case 0x490cb8u: goto label_490cb8;
        case 0x490cbcu: goto label_490cbc;
        case 0x490cc0u: goto label_490cc0;
        case 0x490cc4u: goto label_490cc4;
        case 0x490cc8u: goto label_490cc8;
        case 0x490cccu: goto label_490ccc;
        case 0x490cd0u: goto label_490cd0;
        case 0x490cd4u: goto label_490cd4;
        case 0x490cd8u: goto label_490cd8;
        case 0x490cdcu: goto label_490cdc;
        case 0x490ce0u: goto label_490ce0;
        case 0x490ce4u: goto label_490ce4;
        case 0x490ce8u: goto label_490ce8;
        case 0x490cecu: goto label_490cec;
        case 0x490cf0u: goto label_490cf0;
        case 0x490cf4u: goto label_490cf4;
        case 0x490cf8u: goto label_490cf8;
        case 0x490cfcu: goto label_490cfc;
        case 0x490d00u: goto label_490d00;
        case 0x490d04u: goto label_490d04;
        case 0x490d08u: goto label_490d08;
        case 0x490d0cu: goto label_490d0c;
        case 0x490d10u: goto label_490d10;
        case 0x490d14u: goto label_490d14;
        case 0x490d18u: goto label_490d18;
        case 0x490d1cu: goto label_490d1c;
        case 0x490d20u: goto label_490d20;
        case 0x490d24u: goto label_490d24;
        case 0x490d28u: goto label_490d28;
        case 0x490d2cu: goto label_490d2c;
        case 0x490d30u: goto label_490d30;
        case 0x490d34u: goto label_490d34;
        case 0x490d38u: goto label_490d38;
        case 0x490d3cu: goto label_490d3c;
        case 0x490d40u: goto label_490d40;
        case 0x490d44u: goto label_490d44;
        case 0x490d48u: goto label_490d48;
        case 0x490d4cu: goto label_490d4c;
        case 0x490d50u: goto label_490d50;
        case 0x490d54u: goto label_490d54;
        case 0x490d58u: goto label_490d58;
        case 0x490d5cu: goto label_490d5c;
        case 0x490d60u: goto label_490d60;
        case 0x490d64u: goto label_490d64;
        case 0x490d68u: goto label_490d68;
        case 0x490d6cu: goto label_490d6c;
        case 0x490d70u: goto label_490d70;
        case 0x490d74u: goto label_490d74;
        case 0x490d78u: goto label_490d78;
        case 0x490d7cu: goto label_490d7c;
        case 0x490d80u: goto label_490d80;
        case 0x490d84u: goto label_490d84;
        case 0x490d88u: goto label_490d88;
        case 0x490d8cu: goto label_490d8c;
        case 0x490d90u: goto label_490d90;
        case 0x490d94u: goto label_490d94;
        case 0x490d98u: goto label_490d98;
        case 0x490d9cu: goto label_490d9c;
        case 0x490da0u: goto label_490da0;
        case 0x490da4u: goto label_490da4;
        case 0x490da8u: goto label_490da8;
        case 0x490dacu: goto label_490dac;
        case 0x490db0u: goto label_490db0;
        case 0x490db4u: goto label_490db4;
        case 0x490db8u: goto label_490db8;
        case 0x490dbcu: goto label_490dbc;
        case 0x490dc0u: goto label_490dc0;
        case 0x490dc4u: goto label_490dc4;
        case 0x490dc8u: goto label_490dc8;
        case 0x490dccu: goto label_490dcc;
        case 0x490dd0u: goto label_490dd0;
        case 0x490dd4u: goto label_490dd4;
        case 0x490dd8u: goto label_490dd8;
        case 0x490ddcu: goto label_490ddc;
        case 0x490de0u: goto label_490de0;
        case 0x490de4u: goto label_490de4;
        case 0x490de8u: goto label_490de8;
        case 0x490decu: goto label_490dec;
        case 0x490df0u: goto label_490df0;
        case 0x490df4u: goto label_490df4;
        case 0x490df8u: goto label_490df8;
        case 0x490dfcu: goto label_490dfc;
        case 0x490e00u: goto label_490e00;
        case 0x490e04u: goto label_490e04;
        case 0x490e08u: goto label_490e08;
        case 0x490e0cu: goto label_490e0c;
        case 0x490e10u: goto label_490e10;
        case 0x490e14u: goto label_490e14;
        case 0x490e18u: goto label_490e18;
        case 0x490e1cu: goto label_490e1c;
        case 0x490e20u: goto label_490e20;
        case 0x490e24u: goto label_490e24;
        case 0x490e28u: goto label_490e28;
        case 0x490e2cu: goto label_490e2c;
        case 0x490e30u: goto label_490e30;
        case 0x490e34u: goto label_490e34;
        case 0x490e38u: goto label_490e38;
        case 0x490e3cu: goto label_490e3c;
        case 0x490e40u: goto label_490e40;
        case 0x490e44u: goto label_490e44;
        case 0x490e48u: goto label_490e48;
        case 0x490e4cu: goto label_490e4c;
        case 0x490e50u: goto label_490e50;
        case 0x490e54u: goto label_490e54;
        case 0x490e58u: goto label_490e58;
        case 0x490e5cu: goto label_490e5c;
        case 0x490e60u: goto label_490e60;
        case 0x490e64u: goto label_490e64;
        case 0x490e68u: goto label_490e68;
        case 0x490e6cu: goto label_490e6c;
        case 0x490e70u: goto label_490e70;
        case 0x490e74u: goto label_490e74;
        case 0x490e78u: goto label_490e78;
        case 0x490e7cu: goto label_490e7c;
        case 0x490e80u: goto label_490e80;
        case 0x490e84u: goto label_490e84;
        case 0x490e88u: goto label_490e88;
        case 0x490e8cu: goto label_490e8c;
        case 0x490e90u: goto label_490e90;
        case 0x490e94u: goto label_490e94;
        case 0x490e98u: goto label_490e98;
        case 0x490e9cu: goto label_490e9c;
        case 0x490ea0u: goto label_490ea0;
        case 0x490ea4u: goto label_490ea4;
        case 0x490ea8u: goto label_490ea8;
        case 0x490eacu: goto label_490eac;
        case 0x490eb0u: goto label_490eb0;
        case 0x490eb4u: goto label_490eb4;
        case 0x490eb8u: goto label_490eb8;
        case 0x490ebcu: goto label_490ebc;
        case 0x490ec0u: goto label_490ec0;
        case 0x490ec4u: goto label_490ec4;
        case 0x490ec8u: goto label_490ec8;
        case 0x490eccu: goto label_490ecc;
        case 0x490ed0u: goto label_490ed0;
        case 0x490ed4u: goto label_490ed4;
        case 0x490ed8u: goto label_490ed8;
        case 0x490edcu: goto label_490edc;
        case 0x490ee0u: goto label_490ee0;
        case 0x490ee4u: goto label_490ee4;
        case 0x490ee8u: goto label_490ee8;
        case 0x490eecu: goto label_490eec;
        case 0x490ef0u: goto label_490ef0;
        case 0x490ef4u: goto label_490ef4;
        case 0x490ef8u: goto label_490ef8;
        case 0x490efcu: goto label_490efc;
        case 0x490f00u: goto label_490f00;
        case 0x490f04u: goto label_490f04;
        case 0x490f08u: goto label_490f08;
        case 0x490f0cu: goto label_490f0c;
        case 0x490f10u: goto label_490f10;
        case 0x490f14u: goto label_490f14;
        case 0x490f18u: goto label_490f18;
        case 0x490f1cu: goto label_490f1c;
        case 0x490f20u: goto label_490f20;
        case 0x490f24u: goto label_490f24;
        case 0x490f28u: goto label_490f28;
        case 0x490f2cu: goto label_490f2c;
        case 0x490f30u: goto label_490f30;
        case 0x490f34u: goto label_490f34;
        case 0x490f38u: goto label_490f38;
        case 0x490f3cu: goto label_490f3c;
        case 0x490f40u: goto label_490f40;
        case 0x490f44u: goto label_490f44;
        case 0x490f48u: goto label_490f48;
        case 0x490f4cu: goto label_490f4c;
        case 0x490f50u: goto label_490f50;
        case 0x490f54u: goto label_490f54;
        case 0x490f58u: goto label_490f58;
        case 0x490f5cu: goto label_490f5c;
        case 0x490f60u: goto label_490f60;
        case 0x490f64u: goto label_490f64;
        case 0x490f68u: goto label_490f68;
        case 0x490f6cu: goto label_490f6c;
        case 0x490f70u: goto label_490f70;
        case 0x490f74u: goto label_490f74;
        case 0x490f78u: goto label_490f78;
        case 0x490f7cu: goto label_490f7c;
        case 0x490f80u: goto label_490f80;
        case 0x490f84u: goto label_490f84;
        case 0x490f88u: goto label_490f88;
        case 0x490f8cu: goto label_490f8c;
        case 0x490f90u: goto label_490f90;
        case 0x490f94u: goto label_490f94;
        case 0x490f98u: goto label_490f98;
        case 0x490f9cu: goto label_490f9c;
        case 0x490fa0u: goto label_490fa0;
        case 0x490fa4u: goto label_490fa4;
        case 0x490fa8u: goto label_490fa8;
        case 0x490facu: goto label_490fac;
        case 0x490fb0u: goto label_490fb0;
        case 0x490fb4u: goto label_490fb4;
        case 0x490fb8u: goto label_490fb8;
        case 0x490fbcu: goto label_490fbc;
        case 0x490fc0u: goto label_490fc0;
        case 0x490fc4u: goto label_490fc4;
        case 0x490fc8u: goto label_490fc8;
        case 0x490fccu: goto label_490fcc;
        case 0x490fd0u: goto label_490fd0;
        case 0x490fd4u: goto label_490fd4;
        case 0x490fd8u: goto label_490fd8;
        case 0x490fdcu: goto label_490fdc;
        case 0x490fe0u: goto label_490fe0;
        case 0x490fe4u: goto label_490fe4;
        case 0x490fe8u: goto label_490fe8;
        case 0x490fecu: goto label_490fec;
        case 0x490ff0u: goto label_490ff0;
        case 0x490ff4u: goto label_490ff4;
        case 0x490ff8u: goto label_490ff8;
        case 0x490ffcu: goto label_490ffc;
        case 0x491000u: goto label_491000;
        case 0x491004u: goto label_491004;
        case 0x491008u: goto label_491008;
        case 0x49100cu: goto label_49100c;
        case 0x491010u: goto label_491010;
        case 0x491014u: goto label_491014;
        case 0x491018u: goto label_491018;
        case 0x49101cu: goto label_49101c;
        case 0x491020u: goto label_491020;
        case 0x491024u: goto label_491024;
        case 0x491028u: goto label_491028;
        case 0x49102cu: goto label_49102c;
        case 0x491030u: goto label_491030;
        case 0x491034u: goto label_491034;
        case 0x491038u: goto label_491038;
        case 0x49103cu: goto label_49103c;
        case 0x491040u: goto label_491040;
        case 0x491044u: goto label_491044;
        case 0x491048u: goto label_491048;
        case 0x49104cu: goto label_49104c;
        case 0x491050u: goto label_491050;
        case 0x491054u: goto label_491054;
        case 0x491058u: goto label_491058;
        case 0x49105cu: goto label_49105c;
        case 0x491060u: goto label_491060;
        case 0x491064u: goto label_491064;
        case 0x491068u: goto label_491068;
        case 0x49106cu: goto label_49106c;
        case 0x491070u: goto label_491070;
        case 0x491074u: goto label_491074;
        case 0x491078u: goto label_491078;
        case 0x49107cu: goto label_49107c;
        case 0x491080u: goto label_491080;
        case 0x491084u: goto label_491084;
        case 0x491088u: goto label_491088;
        case 0x49108cu: goto label_49108c;
        case 0x491090u: goto label_491090;
        case 0x491094u: goto label_491094;
        case 0x491098u: goto label_491098;
        case 0x49109cu: goto label_49109c;
        case 0x4910a0u: goto label_4910a0;
        case 0x4910a4u: goto label_4910a4;
        case 0x4910a8u: goto label_4910a8;
        case 0x4910acu: goto label_4910ac;
        case 0x4910b0u: goto label_4910b0;
        case 0x4910b4u: goto label_4910b4;
        case 0x4910b8u: goto label_4910b8;
        case 0x4910bcu: goto label_4910bc;
        case 0x4910c0u: goto label_4910c0;
        case 0x4910c4u: goto label_4910c4;
        case 0x4910c8u: goto label_4910c8;
        case 0x4910ccu: goto label_4910cc;
        case 0x4910d0u: goto label_4910d0;
        case 0x4910d4u: goto label_4910d4;
        case 0x4910d8u: goto label_4910d8;
        case 0x4910dcu: goto label_4910dc;
        case 0x4910e0u: goto label_4910e0;
        case 0x4910e4u: goto label_4910e4;
        case 0x4910e8u: goto label_4910e8;
        case 0x4910ecu: goto label_4910ec;
        case 0x4910f0u: goto label_4910f0;
        case 0x4910f4u: goto label_4910f4;
        case 0x4910f8u: goto label_4910f8;
        case 0x4910fcu: goto label_4910fc;
        case 0x491100u: goto label_491100;
        case 0x491104u: goto label_491104;
        case 0x491108u: goto label_491108;
        case 0x49110cu: goto label_49110c;
        case 0x491110u: goto label_491110;
        case 0x491114u: goto label_491114;
        case 0x491118u: goto label_491118;
        case 0x49111cu: goto label_49111c;
        case 0x491120u: goto label_491120;
        case 0x491124u: goto label_491124;
        case 0x491128u: goto label_491128;
        case 0x49112cu: goto label_49112c;
        case 0x491130u: goto label_491130;
        case 0x491134u: goto label_491134;
        case 0x491138u: goto label_491138;
        case 0x49113cu: goto label_49113c;
        case 0x491140u: goto label_491140;
        case 0x491144u: goto label_491144;
        case 0x491148u: goto label_491148;
        case 0x49114cu: goto label_49114c;
        case 0x491150u: goto label_491150;
        case 0x491154u: goto label_491154;
        case 0x491158u: goto label_491158;
        case 0x49115cu: goto label_49115c;
        case 0x491160u: goto label_491160;
        case 0x491164u: goto label_491164;
        case 0x491168u: goto label_491168;
        case 0x49116cu: goto label_49116c;
        case 0x491170u: goto label_491170;
        case 0x491174u: goto label_491174;
        case 0x491178u: goto label_491178;
        case 0x49117cu: goto label_49117c;
        case 0x491180u: goto label_491180;
        case 0x491184u: goto label_491184;
        case 0x491188u: goto label_491188;
        case 0x49118cu: goto label_49118c;
        case 0x491190u: goto label_491190;
        case 0x491194u: goto label_491194;
        case 0x491198u: goto label_491198;
        case 0x49119cu: goto label_49119c;
        case 0x4911a0u: goto label_4911a0;
        case 0x4911a4u: goto label_4911a4;
        case 0x4911a8u: goto label_4911a8;
        case 0x4911acu: goto label_4911ac;
        case 0x4911b0u: goto label_4911b0;
        case 0x4911b4u: goto label_4911b4;
        case 0x4911b8u: goto label_4911b8;
        case 0x4911bcu: goto label_4911bc;
        case 0x4911c0u: goto label_4911c0;
        case 0x4911c4u: goto label_4911c4;
        case 0x4911c8u: goto label_4911c8;
        case 0x4911ccu: goto label_4911cc;
        case 0x4911d0u: goto label_4911d0;
        case 0x4911d4u: goto label_4911d4;
        case 0x4911d8u: goto label_4911d8;
        case 0x4911dcu: goto label_4911dc;
        case 0x4911e0u: goto label_4911e0;
        case 0x4911e4u: goto label_4911e4;
        case 0x4911e8u: goto label_4911e8;
        case 0x4911ecu: goto label_4911ec;
        case 0x4911f0u: goto label_4911f0;
        case 0x4911f4u: goto label_4911f4;
        case 0x4911f8u: goto label_4911f8;
        case 0x4911fcu: goto label_4911fc;
        case 0x491200u: goto label_491200;
        case 0x491204u: goto label_491204;
        case 0x491208u: goto label_491208;
        case 0x49120cu: goto label_49120c;
        case 0x491210u: goto label_491210;
        case 0x491214u: goto label_491214;
        case 0x491218u: goto label_491218;
        case 0x49121cu: goto label_49121c;
        case 0x491220u: goto label_491220;
        case 0x491224u: goto label_491224;
        case 0x491228u: goto label_491228;
        case 0x49122cu: goto label_49122c;
        case 0x491230u: goto label_491230;
        case 0x491234u: goto label_491234;
        case 0x491238u: goto label_491238;
        case 0x49123cu: goto label_49123c;
        case 0x491240u: goto label_491240;
        case 0x491244u: goto label_491244;
        case 0x491248u: goto label_491248;
        case 0x49124cu: goto label_49124c;
        case 0x491250u: goto label_491250;
        case 0x491254u: goto label_491254;
        case 0x491258u: goto label_491258;
        case 0x49125cu: goto label_49125c;
        case 0x491260u: goto label_491260;
        case 0x491264u: goto label_491264;
        case 0x491268u: goto label_491268;
        case 0x49126cu: goto label_49126c;
        case 0x491270u: goto label_491270;
        case 0x491274u: goto label_491274;
        case 0x491278u: goto label_491278;
        case 0x49127cu: goto label_49127c;
        case 0x491280u: goto label_491280;
        case 0x491284u: goto label_491284;
        case 0x491288u: goto label_491288;
        case 0x49128cu: goto label_49128c;
        case 0x491290u: goto label_491290;
        case 0x491294u: goto label_491294;
        case 0x491298u: goto label_491298;
        case 0x49129cu: goto label_49129c;
        case 0x4912a0u: goto label_4912a0;
        case 0x4912a4u: goto label_4912a4;
        case 0x4912a8u: goto label_4912a8;
        case 0x4912acu: goto label_4912ac;
        case 0x4912b0u: goto label_4912b0;
        case 0x4912b4u: goto label_4912b4;
        case 0x4912b8u: goto label_4912b8;
        case 0x4912bcu: goto label_4912bc;
        case 0x4912c0u: goto label_4912c0;
        case 0x4912c4u: goto label_4912c4;
        case 0x4912c8u: goto label_4912c8;
        case 0x4912ccu: goto label_4912cc;
        case 0x4912d0u: goto label_4912d0;
        case 0x4912d4u: goto label_4912d4;
        case 0x4912d8u: goto label_4912d8;
        case 0x4912dcu: goto label_4912dc;
        case 0x4912e0u: goto label_4912e0;
        case 0x4912e4u: goto label_4912e4;
        case 0x4912e8u: goto label_4912e8;
        case 0x4912ecu: goto label_4912ec;
        case 0x4912f0u: goto label_4912f0;
        case 0x4912f4u: goto label_4912f4;
        case 0x4912f8u: goto label_4912f8;
        case 0x4912fcu: goto label_4912fc;
        case 0x491300u: goto label_491300;
        case 0x491304u: goto label_491304;
        case 0x491308u: goto label_491308;
        case 0x49130cu: goto label_49130c;
        case 0x491310u: goto label_491310;
        case 0x491314u: goto label_491314;
        case 0x491318u: goto label_491318;
        case 0x49131cu: goto label_49131c;
        case 0x491320u: goto label_491320;
        case 0x491324u: goto label_491324;
        case 0x491328u: goto label_491328;
        case 0x49132cu: goto label_49132c;
        case 0x491330u: goto label_491330;
        case 0x491334u: goto label_491334;
        case 0x491338u: goto label_491338;
        case 0x49133cu: goto label_49133c;
        case 0x491340u: goto label_491340;
        case 0x491344u: goto label_491344;
        case 0x491348u: goto label_491348;
        case 0x49134cu: goto label_49134c;
        case 0x491350u: goto label_491350;
        case 0x491354u: goto label_491354;
        case 0x491358u: goto label_491358;
        case 0x49135cu: goto label_49135c;
        case 0x491360u: goto label_491360;
        case 0x491364u: goto label_491364;
        case 0x491368u: goto label_491368;
        case 0x49136cu: goto label_49136c;
        case 0x491370u: goto label_491370;
        case 0x491374u: goto label_491374;
        case 0x491378u: goto label_491378;
        case 0x49137cu: goto label_49137c;
        case 0x491380u: goto label_491380;
        case 0x491384u: goto label_491384;
        case 0x491388u: goto label_491388;
        case 0x49138cu: goto label_49138c;
        case 0x491390u: goto label_491390;
        case 0x491394u: goto label_491394;
        case 0x491398u: goto label_491398;
        case 0x49139cu: goto label_49139c;
        case 0x4913a0u: goto label_4913a0;
        case 0x4913a4u: goto label_4913a4;
        case 0x4913a8u: goto label_4913a8;
        case 0x4913acu: goto label_4913ac;
        case 0x4913b0u: goto label_4913b0;
        case 0x4913b4u: goto label_4913b4;
        case 0x4913b8u: goto label_4913b8;
        case 0x4913bcu: goto label_4913bc;
        case 0x4913c0u: goto label_4913c0;
        case 0x4913c4u: goto label_4913c4;
        case 0x4913c8u: goto label_4913c8;
        case 0x4913ccu: goto label_4913cc;
        case 0x4913d0u: goto label_4913d0;
        case 0x4913d4u: goto label_4913d4;
        case 0x4913d8u: goto label_4913d8;
        case 0x4913dcu: goto label_4913dc;
        case 0x4913e0u: goto label_4913e0;
        case 0x4913e4u: goto label_4913e4;
        case 0x4913e8u: goto label_4913e8;
        case 0x4913ecu: goto label_4913ec;
        case 0x4913f0u: goto label_4913f0;
        case 0x4913f4u: goto label_4913f4;
        case 0x4913f8u: goto label_4913f8;
        case 0x4913fcu: goto label_4913fc;
        case 0x491400u: goto label_491400;
        case 0x491404u: goto label_491404;
        case 0x491408u: goto label_491408;
        case 0x49140cu: goto label_49140c;
        case 0x491410u: goto label_491410;
        case 0x491414u: goto label_491414;
        case 0x491418u: goto label_491418;
        case 0x49141cu: goto label_49141c;
        case 0x491420u: goto label_491420;
        case 0x491424u: goto label_491424;
        case 0x491428u: goto label_491428;
        case 0x49142cu: goto label_49142c;
        case 0x491430u: goto label_491430;
        case 0x491434u: goto label_491434;
        case 0x491438u: goto label_491438;
        case 0x49143cu: goto label_49143c;
        case 0x491440u: goto label_491440;
        case 0x491444u: goto label_491444;
        case 0x491448u: goto label_491448;
        case 0x49144cu: goto label_49144c;
        case 0x491450u: goto label_491450;
        case 0x491454u: goto label_491454;
        case 0x491458u: goto label_491458;
        case 0x49145cu: goto label_49145c;
        case 0x491460u: goto label_491460;
        case 0x491464u: goto label_491464;
        case 0x491468u: goto label_491468;
        case 0x49146cu: goto label_49146c;
        case 0x491470u: goto label_491470;
        case 0x491474u: goto label_491474;
        case 0x491478u: goto label_491478;
        case 0x49147cu: goto label_49147c;
        case 0x491480u: goto label_491480;
        case 0x491484u: goto label_491484;
        case 0x491488u: goto label_491488;
        case 0x49148cu: goto label_49148c;
        case 0x491490u: goto label_491490;
        case 0x491494u: goto label_491494;
        case 0x491498u: goto label_491498;
        case 0x49149cu: goto label_49149c;
        case 0x4914a0u: goto label_4914a0;
        case 0x4914a4u: goto label_4914a4;
        case 0x4914a8u: goto label_4914a8;
        case 0x4914acu: goto label_4914ac;
        case 0x4914b0u: goto label_4914b0;
        case 0x4914b4u: goto label_4914b4;
        case 0x4914b8u: goto label_4914b8;
        case 0x4914bcu: goto label_4914bc;
        case 0x4914c0u: goto label_4914c0;
        case 0x4914c4u: goto label_4914c4;
        case 0x4914c8u: goto label_4914c8;
        case 0x4914ccu: goto label_4914cc;
        case 0x4914d0u: goto label_4914d0;
        case 0x4914d4u: goto label_4914d4;
        case 0x4914d8u: goto label_4914d8;
        case 0x4914dcu: goto label_4914dc;
        case 0x4914e0u: goto label_4914e0;
        case 0x4914e4u: goto label_4914e4;
        case 0x4914e8u: goto label_4914e8;
        case 0x4914ecu: goto label_4914ec;
        case 0x4914f0u: goto label_4914f0;
        case 0x4914f4u: goto label_4914f4;
        case 0x4914f8u: goto label_4914f8;
        case 0x4914fcu: goto label_4914fc;
        case 0x491500u: goto label_491500;
        case 0x491504u: goto label_491504;
        case 0x491508u: goto label_491508;
        case 0x49150cu: goto label_49150c;
        case 0x491510u: goto label_491510;
        case 0x491514u: goto label_491514;
        case 0x491518u: goto label_491518;
        case 0x49151cu: goto label_49151c;
        case 0x491520u: goto label_491520;
        case 0x491524u: goto label_491524;
        case 0x491528u: goto label_491528;
        case 0x49152cu: goto label_49152c;
        case 0x491530u: goto label_491530;
        case 0x491534u: goto label_491534;
        case 0x491538u: goto label_491538;
        case 0x49153cu: goto label_49153c;
        case 0x491540u: goto label_491540;
        case 0x491544u: goto label_491544;
        case 0x491548u: goto label_491548;
        case 0x49154cu: goto label_49154c;
        case 0x491550u: goto label_491550;
        case 0x491554u: goto label_491554;
        case 0x491558u: goto label_491558;
        case 0x49155cu: goto label_49155c;
        case 0x491560u: goto label_491560;
        case 0x491564u: goto label_491564;
        case 0x491568u: goto label_491568;
        case 0x49156cu: goto label_49156c;
        case 0x491570u: goto label_491570;
        case 0x491574u: goto label_491574;
        case 0x491578u: goto label_491578;
        case 0x49157cu: goto label_49157c;
        case 0x491580u: goto label_491580;
        case 0x491584u: goto label_491584;
        case 0x491588u: goto label_491588;
        case 0x49158cu: goto label_49158c;
        case 0x491590u: goto label_491590;
        case 0x491594u: goto label_491594;
        case 0x491598u: goto label_491598;
        case 0x49159cu: goto label_49159c;
        case 0x4915a0u: goto label_4915a0;
        case 0x4915a4u: goto label_4915a4;
        case 0x4915a8u: goto label_4915a8;
        case 0x4915acu: goto label_4915ac;
        case 0x4915b0u: goto label_4915b0;
        case 0x4915b4u: goto label_4915b4;
        case 0x4915b8u: goto label_4915b8;
        case 0x4915bcu: goto label_4915bc;
        case 0x4915c0u: goto label_4915c0;
        case 0x4915c4u: goto label_4915c4;
        case 0x4915c8u: goto label_4915c8;
        case 0x4915ccu: goto label_4915cc;
        case 0x4915d0u: goto label_4915d0;
        case 0x4915d4u: goto label_4915d4;
        case 0x4915d8u: goto label_4915d8;
        case 0x4915dcu: goto label_4915dc;
        case 0x4915e0u: goto label_4915e0;
        case 0x4915e4u: goto label_4915e4;
        case 0x4915e8u: goto label_4915e8;
        case 0x4915ecu: goto label_4915ec;
        case 0x4915f0u: goto label_4915f0;
        case 0x4915f4u: goto label_4915f4;
        case 0x4915f8u: goto label_4915f8;
        case 0x4915fcu: goto label_4915fc;
        case 0x491600u: goto label_491600;
        case 0x491604u: goto label_491604;
        case 0x491608u: goto label_491608;
        case 0x49160cu: goto label_49160c;
        case 0x491610u: goto label_491610;
        case 0x491614u: goto label_491614;
        case 0x491618u: goto label_491618;
        case 0x49161cu: goto label_49161c;
        case 0x491620u: goto label_491620;
        case 0x491624u: goto label_491624;
        case 0x491628u: goto label_491628;
        case 0x49162cu: goto label_49162c;
        case 0x491630u: goto label_491630;
        case 0x491634u: goto label_491634;
        case 0x491638u: goto label_491638;
        case 0x49163cu: goto label_49163c;
        case 0x491640u: goto label_491640;
        case 0x491644u: goto label_491644;
        case 0x491648u: goto label_491648;
        case 0x49164cu: goto label_49164c;
        case 0x491650u: goto label_491650;
        case 0x491654u: goto label_491654;
        case 0x491658u: goto label_491658;
        case 0x49165cu: goto label_49165c;
        case 0x491660u: goto label_491660;
        case 0x491664u: goto label_491664;
        case 0x491668u: goto label_491668;
        case 0x49166cu: goto label_49166c;
        case 0x491670u: goto label_491670;
        case 0x491674u: goto label_491674;
        case 0x491678u: goto label_491678;
        case 0x49167cu: goto label_49167c;
        case 0x491680u: goto label_491680;
        case 0x491684u: goto label_491684;
        case 0x491688u: goto label_491688;
        case 0x49168cu: goto label_49168c;
        case 0x491690u: goto label_491690;
        case 0x491694u: goto label_491694;
        case 0x491698u: goto label_491698;
        case 0x49169cu: goto label_49169c;
        case 0x4916a0u: goto label_4916a0;
        case 0x4916a4u: goto label_4916a4;
        case 0x4916a8u: goto label_4916a8;
        case 0x4916acu: goto label_4916ac;
        case 0x4916b0u: goto label_4916b0;
        case 0x4916b4u: goto label_4916b4;
        case 0x4916b8u: goto label_4916b8;
        case 0x4916bcu: goto label_4916bc;
        case 0x4916c0u: goto label_4916c0;
        case 0x4916c4u: goto label_4916c4;
        case 0x4916c8u: goto label_4916c8;
        case 0x4916ccu: goto label_4916cc;
        case 0x4916d0u: goto label_4916d0;
        case 0x4916d4u: goto label_4916d4;
        case 0x4916d8u: goto label_4916d8;
        case 0x4916dcu: goto label_4916dc;
        case 0x4916e0u: goto label_4916e0;
        case 0x4916e4u: goto label_4916e4;
        case 0x4916e8u: goto label_4916e8;
        case 0x4916ecu: goto label_4916ec;
        case 0x4916f0u: goto label_4916f0;
        case 0x4916f4u: goto label_4916f4;
        case 0x4916f8u: goto label_4916f8;
        case 0x4916fcu: goto label_4916fc;
        case 0x491700u: goto label_491700;
        case 0x491704u: goto label_491704;
        case 0x491708u: goto label_491708;
        case 0x49170cu: goto label_49170c;
        case 0x491710u: goto label_491710;
        case 0x491714u: goto label_491714;
        case 0x491718u: goto label_491718;
        case 0x49171cu: goto label_49171c;
        case 0x491720u: goto label_491720;
        case 0x491724u: goto label_491724;
        case 0x491728u: goto label_491728;
        case 0x49172cu: goto label_49172c;
        case 0x491730u: goto label_491730;
        case 0x491734u: goto label_491734;
        case 0x491738u: goto label_491738;
        case 0x49173cu: goto label_49173c;
        case 0x491740u: goto label_491740;
        case 0x491744u: goto label_491744;
        case 0x491748u: goto label_491748;
        case 0x49174cu: goto label_49174c;
        default: break;
    }

    ctx->pc = 0x490570u;

label_490570:
    // 0x490570: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x490570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_490574:
    // 0x490574: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x490574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
label_490578:
    // 0x490578: 0x7fb10220  sq          $s1, 0x220($sp)
    ctx->pc = 0x490578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 17));
label_49057c:
    // 0x49057c: 0x7fb20210  sq          $s2, 0x210($sp)
    ctx->pc = 0x49057cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 18));
label_490580:
    // 0x490580: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x490580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_490584:
    // 0x490584: 0x7fb00230  sq          $s0, 0x230($sp)
    ctx->pc = 0x490584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 16));
label_490588:
    // 0x490588: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x490588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49058c:
    // 0x49058c: 0x7fb30200  sq          $s3, 0x200($sp)
    ctx->pc = 0x49058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 19));
label_490590:
    // 0x490590: 0x2cc2003b  sltiu       $v0, $a2, 0x3B
    ctx->pc = 0x490590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_490594:
    // 0x490594: 0x7fb401f0  sq          $s4, 0x1F0($sp)
    ctx->pc = 0x490594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 20));
label_490598:
    // 0x490598: 0x7fb501e0  sq          $s5, 0x1E0($sp)
    ctx->pc = 0x490598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 21));
label_49059c:
    // 0x49059c: 0x7fb601d0  sq          $s6, 0x1D0($sp)
    ctx->pc = 0x49059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 22));
label_4905a0:
    // 0x4905a0: 0x7fb701c0  sq          $s7, 0x1C0($sp)
    ctx->pc = 0x4905a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 23));
label_4905a4:
    // 0x4905a4: 0x7fbe01b0  sq          $fp, 0x1B0($sp)
    ctx->pc = 0x4905a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 30));
label_4905a8:
    // 0x4905a8: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x4905a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
label_4905ac:
    // 0x4905ac: 0xafa700c4  sw          $a3, 0xC4($sp)
    ctx->pc = 0x4905acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
label_4905b0:
    // 0x4905b0: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x4905b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
label_4905b4:
    // 0x4905b4: 0xafa900cc  sw          $t1, 0xCC($sp)
    ctx->pc = 0x4905b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 9));
label_4905b8:
    // 0x4905b8: 0xafaa00d0  sw          $t2, 0xD0($sp)
    ctx->pc = 0x4905b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 10));
label_4905bc:
    // 0x4905bc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_4905c0:
    if (ctx->pc == 0x4905C0u) {
        ctx->pc = 0x4905C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4905BCu;
        // 0x4905c0: 0xafab00d4  sw          $t3, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4905C4u;
        goto label_4905c4;
    }
    ctx->pc = 0x4905BCu;
    {
        const bool branch_taken_0x4905bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4905C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4905BCu;
        // 0x4905c0: 0xafab00d4  sw          $t3, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4905bc) {
            ctx->pc = 0x490650u;
            goto label_490650;
        }
    }
    ctx->pc = 0x4905C4u;
label_4905c4:
    // 0x4905c4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4905c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4905c8:
    // 0x4905c8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4905c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4905cc:
    // 0x4905cc: 0x2442f320  addiu       $v0, $v0, -0xCE0
    ctx->pc = 0x4905ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
label_4905d0:
    // 0x4905d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4905d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4905d4:
    // 0x4905d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4905d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4905d8:
    // 0x4905d8: 0x800008  jr          $a0
label_4905dc:
    if (ctx->pc == 0x4905DCu) {
        ctx->pc = 0x4905E0u;
        goto label_4905e0;
    }
    ctx->pc = 0x4905D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4905E0u: goto label_4905e0;
            case 0x4905F8u: goto label_4905f8;
            case 0x490610u: goto label_490610;
            case 0x490624u: goto label_490624;
            case 0x49063Cu: goto label_49063c;
            case 0x490650u: goto label_490650;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4905D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4905E0u;
label_4905e0:
    // 0x4905e0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4905e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4905e4:
    // 0x4905e4: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x4905e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4905e8:
    // 0x4905e8: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x4905e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4905ec:
    // 0x4905ec: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x4905ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4905f0:
    // 0x4905f0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_4905f4:
    if (ctx->pc == 0x4905F4u) {
        ctx->pc = 0x4905F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4905F0u;
        // 0x4905f4: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4905F8u;
        goto label_4905f8;
    }
    ctx->pc = 0x4905F0u;
    {
        const bool branch_taken_0x4905f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4905F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4905F0u;
        // 0x4905f4: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4905f0) {
            ctx->pc = 0x490660u;
            goto label_490660;
        }
    }
    ctx->pc = 0x4905F8u;
label_4905f8:
    // 0x4905f8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x4905f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4905fc:
    // 0x4905fc: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x4905fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_490600:
    // 0x490600: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x490600u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_490604:
    // 0x490604: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x490604u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_490608:
    // 0x490608: 0x10000015  b           . + 4 + (0x15 << 2)
label_49060c:
    if (ctx->pc == 0x49060Cu) {
        ctx->pc = 0x49060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490608u;
        // 0x49060c: 0xafa300d8  sw          $v1, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490610u;
        goto label_490610;
    }
    ctx->pc = 0x490608u;
    {
        const bool branch_taken_0x490608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490608u;
        // 0x49060c: 0xafa300d8  sw          $v1, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490608) {
            ctx->pc = 0x490660u;
            goto label_490660;
        }
    }
    ctx->pc = 0x490610u;
label_490610:
    // 0x490610: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x490610u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_490614:
    // 0x490614: 0x24170020  addiu       $s7, $zero, 0x20
    ctx->pc = 0x490614u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_490618:
    // 0x490618: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x490618u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_49061c:
    // 0x49061c: 0x10000010  b           . + 4 + (0x10 << 2)
label_490620:
    if (ctx->pc == 0x490620u) {
        ctx->pc = 0x490620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49061Cu;
        // 0x490620: 0xafad00d8  sw          $t5, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490624u;
        goto label_490624;
    }
    ctx->pc = 0x49061Cu;
    {
        const bool branch_taken_0x49061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49061Cu;
        // 0x490620: 0xafad00d8  sw          $t5, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49061c) {
            ctx->pc = 0x490660u;
            goto label_490660;
        }
    }
    ctx->pc = 0x490624u;
label_490624:
    // 0x490624: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x490624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_490628:
    // 0x490628: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x490628u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_49062c:
    // 0x49062c: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x49062cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_490630:
    // 0x490630: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x490630u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_490634:
    // 0x490634: 0x1000000a  b           . + 4 + (0xA << 2)
label_490638:
    if (ctx->pc == 0x490638u) {
        ctx->pc = 0x490638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490634u;
        // 0x490638: 0xafa400d8  sw          $a0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49063Cu;
        goto label_49063c;
    }
    ctx->pc = 0x490634u;
    {
        const bool branch_taken_0x490634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490634u;
        // 0x490638: 0xafa400d8  sw          $a0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490634) {
            ctx->pc = 0x490660u;
            goto label_490660;
        }
    }
    ctx->pc = 0x49063Cu;
label_49063c:
    // 0x49063c: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x49063cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_490640:
    // 0x490640: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x490640u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_490644:
    // 0x490644: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x490644u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_490648:
    // 0x490648: 0x10000005  b           . + 4 + (0x5 << 2)
label_49064c:
    if (ctx->pc == 0x49064Cu) {
        ctx->pc = 0x49064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490648u;
        // 0x49064c: 0xafad00d8  sw          $t5, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490650u;
        goto label_490650;
    }
    ctx->pc = 0x490648u;
    {
        const bool branch_taken_0x490648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490648u;
        // 0x49064c: 0xafad00d8  sw          $t5, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490648) {
            ctx->pc = 0x490660u;
            goto label_490660;
        }
    }
    ctx->pc = 0x490650u;
label_490650:
    // 0x490650: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x490650u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_490654:
    // 0x490654: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x490654u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_490658:
    // 0x490658: 0xafad00d8  sw          $t5, 0xD8($sp)
    ctx->pc = 0x490658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
label_49065c:
    // 0x49065c: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x49065cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_490660:
    // 0x490660: 0xafb100ec  sw          $s1, 0xEC($sp)
    ctx->pc = 0x490660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 17));
label_490664:
    // 0x490664: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x490664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490668:
    // 0x490668: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x490668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_49066c:
    // 0x49066c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x49066cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_490670:
    // 0x490670: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x490670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_490674:
    // 0x490674: 0x8fac00d8  lw          $t4, 0xD8($sp)
    ctx->pc = 0x490674u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_490678:
    // 0x490678: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x490678u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
label_49067c:
    // 0x49067c: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x49067cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
label_490680:
    // 0x490680: 0x2cc6003b  sltiu       $a2, $a2, 0x3B
    ctx->pc = 0x490680u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_490684:
    // 0x490684: 0xd5982  srl         $t3, $t5, 6
    ctx->pc = 0x490684u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), 6));
label_490688:
    // 0x490688: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x490688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_49068c:
    // 0x49068c: 0x17203c  dsll32      $a0, $s7, 0
    ctx->pc = 0x49068cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 0));
label_490690:
    // 0x490690: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x490690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
label_490694:
    // 0x490694: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x490694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
label_490698:
    // 0x490698: 0xafa700ec  sw          $a3, 0xEC($sp)
    ctx->pc = 0x490698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 7));
label_49069c:
    // 0x49069c: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x49069cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_4906a0:
    // 0x4906a0: 0xafab0130  sw          $t3, 0x130($sp)
    ctx->pc = 0x4906a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 11));
label_4906a4:
    // 0x4906a4: 0x22c1821  addu        $v1, $s1, $t4
    ctx->pc = 0x4906a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
label_4906a8:
    // 0x4906a8: 0xafb00120  sw          $s0, 0x120($sp)
    ctx->pc = 0x4906a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 16));
label_4906ac:
    // 0x4906ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_4906b0:
    if (ctx->pc == 0x4906B0u) {
        ctx->pc = 0x4906B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4906ACu;
        // 0x4906b0: 0xffa40148  sd          $a0, 0x148($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4906B4u;
        goto label_4906b4;
    }
    ctx->pc = 0x4906ACu;
    {
        const bool branch_taken_0x4906ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4906B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4906ACu;
        // 0x4906b0: 0xffa40148  sd          $a0, 0x148($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4906ac) {
            ctx->pc = 0x4906F8u;
            goto label_4906f8;
        }
    }
    ctx->pc = 0x4906B4u;
label_4906b4:
    // 0x4906b4: 0x8f848740  lw          $a0, -0x78C0($gp)
    ctx->pc = 0x4906b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
label_4906b8:
    // 0x4906b8: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x4906b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_4906bc:
    // 0x4906bc: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x4906bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4906c0:
    // 0x4906c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4906c4:
    if (ctx->pc == 0x4906C4u) {
        ctx->pc = 0x4906C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4906C0u;
        // 0x4906c4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4906C8u;
        goto label_4906c8;
    }
    ctx->pc = 0x4906C0u;
    {
        const bool branch_taken_0x4906c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4906C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4906C0u;
        // 0x4906c4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4906c0) {
            ctx->pc = 0x4906FCu;
            goto label_4906fc;
        }
    }
    ctx->pc = 0x4906C8u;
label_4906c8:
    // 0x4906c8: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x4906c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_4906cc:
    // 0x4906cc: 0x0  nop
    ctx->pc = 0x4906ccu;
    // NOP
label_4906d0:
    // 0x4906d0: 0x8fab00dc  lw          $t3, 0xDC($sp)
    ctx->pc = 0x4906d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_4906d4:
    // 0x4906d4: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x4906d4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_4906d8:
    // 0x4906d8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4906d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4906dc:
    // 0x4906dc: 0xafa700ec  sw          $a3, 0xEC($sp)
    ctx->pc = 0x4906dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 7));
label_4906e0:
    // 0x4906e0: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x4906e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_4906e4:
    // 0x4906e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4906e8:
    if (ctx->pc == 0x4906E8u) {
        ctx->pc = 0x4906E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4906E4u;
        // 0x4906e8: 0xafab00dc  sw          $t3, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4906ECu;
        goto label_4906ec;
    }
    ctx->pc = 0x4906E4u;
    {
        const bool branch_taken_0x4906e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4906E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4906E4u;
        // 0x4906e8: 0xafab00dc  sw          $t3, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4906e4) {
            ctx->pc = 0x4906F8u;
            goto label_4906f8;
        }
    }
    ctx->pc = 0x4906ECu;
label_4906ec:
    // 0x4906ec: 0x164102a  slt         $v0, $t3, $a0
    ctx->pc = 0x4906ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4906f0:
    // 0x4906f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4906f4:
    if (ctx->pc == 0x4906F4u) {
        ctx->pc = 0x4906F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4906F0u;
        // 0x4906f4: 0x8fa700ec  lw          $a3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4906F8u;
        goto label_4906f8;
    }
    ctx->pc = 0x4906F0u;
    {
        const bool branch_taken_0x4906f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4906F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4906F0u;
        // 0x4906f4: 0x8fa700ec  lw          $a3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4906f0) {
            ctx->pc = 0x4906D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4906d0;
        }
    }
    ctx->pc = 0x4906F8u;
label_4906f8:
    // 0x4906f8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x4906f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4906fc:
    // 0x4906fc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x4906fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_490700:
    // 0x490700: 0x4d001b  divu        $zero, $v0, $t5
    ctx->pc = 0x490700u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_490704:
    // 0x490704: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x490704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_490708:
    // 0x490708: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x490708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_49070c:
    // 0x49070c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49070cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490710:
    // 0x490710: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x490710u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_490714:
    // 0x490714: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x490714u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
label_490718:
    // 0x490718: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x490718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
label_49071c:
    // 0x49071c: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_490720:
    if (ctx->pc == 0x490720u) {
        ctx->pc = 0x490720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49071Cu;
        // 0x490720: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x490724u;
        goto label_490724;
    }
    ctx->pc = 0x49071Cu;
    {
        const bool branch_taken_0x49071c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x49071c) {
            ctx->pc = 0x490720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49071Cu;
            // 0x490720: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x490724u;
            goto label_490724;
        }
    }
    ctx->pc = 0x490724u;
label_490724:
    // 0x490724: 0x8fb00130  lw          $s0, 0x130($sp)
    ctx->pc = 0x490724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_490728:
    // 0x490728: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x490728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_49072c:
    // 0x49072c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x49072cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_490730:
    // 0x490730: 0x758c0  sll         $t3, $a3, 3
    ctx->pc = 0x490730u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_490734:
    // 0x490734: 0x24ecffff  addiu       $t4, $a3, -0x1
    ctx->pc = 0x490734u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_490738:
    // 0x490738: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x490738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_49073c:
    // 0x49073c: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x49073cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_490740:
    // 0x490740: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x490740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_490744:
    // 0x490744: 0xafab0128  sw          $t3, 0x128($sp)
    ctx->pc = 0x490744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 11));
label_490748:
    // 0x490748: 0xafac0124  sw          $t4, 0x124($sp)
    ctx->pc = 0x490748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 12));
label_49074c:
    // 0x49074c: 0x1012  mflo        $v0
    ctx->pc = 0x49074cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_490750:
    // 0x490750: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x490750u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_490754:
    // 0x490754: 0xc7202a  slt         $a0, $a2, $a3
    ctx->pc = 0x490754u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_490758:
    // 0x490758: 0x1812  mflo        $v1
    ctx->pc = 0x490758u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_49075c:
    // 0x49075c: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x49075cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_490760:
    // 0x490760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x490760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_490764:
    // 0x490764: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x490764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_490768:
    // 0x490768: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x490768u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_49076c:
    // 0x49076c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x49076cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_490770:
    // 0x490770: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x490770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_490774:
    // 0x490774: 0x10800185  beqz        $a0, . + 4 + (0x185 << 2)
label_490778:
    if (ctx->pc == 0x490778u) {
        ctx->pc = 0x490778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490774u;
        // 0x490778: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49077Cu;
        goto label_49077c;
    }
    ctx->pc = 0x490774u;
    {
        const bool branch_taken_0x490774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x490778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490774u;
        // 0x490778: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490774) {
            ctx->pc = 0x490D8Cu;
            goto label_490d8c;
        }
    }
    ctx->pc = 0x49077Cu;
label_49077c:
    // 0x49077c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x49077cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_490780:
    // 0x490780: 0x8fab00c4  lw          $t3, 0xC4($sp)
    ctx->pc = 0x490780u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_490784:
    // 0x490784: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x490784u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_490788:
    // 0x490788: 0x8fb00120  lw          $s0, 0x120($sp)
    ctx->pc = 0x490788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_49078c:
    // 0x49078c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x49078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_490790:
    // 0x490790: 0xafa700f0  sw          $a3, 0xF0($sp)
    ctx->pc = 0x490790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 7));
label_490794:
    // 0x490794: 0xafac0150  sw          $t4, 0x150($sp)
    ctx->pc = 0x490794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 12));
label_490798:
    // 0x490798: 0x27b90080  addiu       $t9, $sp, 0x80
    ctx->pc = 0x490798u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_49079c:
    // 0x49079c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x49079cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_4907a0:
    // 0x4907a0: 0x27af00a0  addiu       $t7, $sp, 0xA0
    ctx->pc = 0x4907a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4907a4:
    // 0x4907a4: 0x25730008  addiu       $s3, $t3, 0x8
    ctx->pc = 0x4907a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_4907a8:
    // 0x4907a8: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x4907a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_4907ac:
    // 0x4907ac: 0x24b40008  addiu       $s4, $a1, 0x8
    ctx->pc = 0x4907acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_4907b0:
    // 0x4907b0: 0x26160004  addiu       $s6, $s0, 0x4
    ctx->pc = 0x4907b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4907b4:
    // 0x4907b4: 0x0  nop
    ctx->pc = 0x4907b4u;
    // NOP
label_4907b8:
    // 0x4907b8: 0x24d102b  sltu        $v0, $s2, $t5
    ctx->pc = 0x4907b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_4907bc:
    // 0x4907bc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_4907c0:
    if (ctx->pc == 0x4907C0u) {
        ctx->pc = 0x4907C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4907BCu;
        // 0x4907c0: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4907C4u;
        goto label_4907c4;
    }
    ctx->pc = 0x4907BCu;
    {
        const bool branch_taken_0x4907bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4907C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4907BCu;
        // 0x4907c0: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4907bc) {
            ctx->pc = 0x490870u;
            goto label_490870;
        }
    }
    ctx->pc = 0x4907C4u;
label_4907c4:
    // 0x4907c4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x4907c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_4907c8:
    // 0x4907c8: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x4907c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4907cc:
    // 0x4907cc: 0x5440008a  bnel        $v0, $zero, . + 4 + (0x8A << 2)
label_4907d0:
    if (ctx->pc == 0x4907D0u) {
        ctx->pc = 0x4907D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4907CCu;
        // 0x4907d0: 0x8ec3fffc  lw          $v1, -0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4907D4u;
        goto label_4907d4;
    }
    ctx->pc = 0x4907CCu;
    {
        const bool branch_taken_0x4907cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4907cc) {
            ctx->pc = 0x4907D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4907CCu;
            // 0x4907d0: 0x8ec3fffc  lw          $v1, -0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4909F8u;
            goto label_4909f8;
        }
    }
    ctx->pc = 0x4907D4u;
label_4907d4:
    // 0x4907d4: 0x257001b  divu        $zero, $s2, $s7
    ctx->pc = 0x4907d4u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_4907d8:
    // 0x4907d8: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x4907d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_4907dc:
    // 0x4907dc: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x4907dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_4907e0:
    // 0x4907e0: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x4907e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_4907e4:
    // 0x4907e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4907e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4907e8:
    // 0x4907e8: 0x112842  srl         $a1, $s1, 1
    ctx->pc = 0x4907e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_4907ec:
    // 0x4907ec: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x4907ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4907f0:
    // 0x4907f0: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_4907f4:
    if (ctx->pc == 0x4907F4u) {
        ctx->pc = 0x4907F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4907F0u;
        // 0x4907f4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4907F8u;
        goto label_4907f8;
    }
    ctx->pc = 0x4907F0u;
    {
        const bool branch_taken_0x4907f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4907f0) {
            ctx->pc = 0x4907F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4907F0u;
            // 0x4907f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4907F8u;
            goto label_4907f8;
        }
    }
    ctx->pc = 0x4907F8u;
label_4907f8:
    // 0x4907f8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4907f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_4907fc:
    // 0x4907fc: 0x8fac0154  lw          $t4, 0x154($sp)
    ctx->pc = 0x4907fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_490800:
    // 0x490800: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x490800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_490804:
    // 0x490804: 0xde68fff8  ld          $t0, -0x8($s3)
    ctx->pc = 0x490804u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_490808:
    // 0x490808: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x490808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49080c:
    // 0x49080c: 0xec5821  addu        $t3, $a3, $t4
    ctx->pc = 0x49080cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_490810:
    // 0x490810: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x490810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_490814:
    // 0x490814: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x490814u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_490818:
    // 0x490818: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x490818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_49081c:
    // 0x49081c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x49081cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_490820:
    // 0x490820: 0x1812  mflo        $v1
    ctx->pc = 0x490820u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_490824:
    // 0x490824: 0x22e001b  divu        $zero, $s1, $t6
    ctx->pc = 0x490824u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_490828:
    // 0x490828: 0x5012  mflo        $t2
    ctx->pc = 0x490828u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_49082c:
    // 0x49082c: 0x4d001b  divu        $zero, $v0, $t5
    ctx->pc = 0x49082cu;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_490830:
    // 0x490830: 0x1012  mflo        $v0
    ctx->pc = 0x490830u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_490834:
    // 0x490834: 0x126001b  divu        $zero, $t1, $a2
    ctx->pc = 0x490834u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
label_490838:
    // 0x490838: 0x4812  mflo        $t1
    ctx->pc = 0x490838u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_49083c:
    // 0x49083c: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x49083cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_490840:
    // 0x490840: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x490840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_490844:
    // 0x490844: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x490844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_490848:
    // 0x490848: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x490848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_49084c:
    // 0x49084c: 0x103402d  daddu       $t0, $t0, $v1
    ctx->pc = 0x49084cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 3));
label_490850:
    // 0x490850: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x490850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_490854:
    // 0x490854: 0xfe680000  sd          $t0, 0x0($s3)
    ctx->pc = 0x490854u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 8));
label_490858:
    // 0x490858: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x490858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_49085c:
    // 0x49085c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x49085cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_490860:
    // 0x490860: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x490860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_490864:
    // 0x490864: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x490864u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
label_490868:
    // 0x490868: 0x10000136  b           . + 4 + (0x136 << 2)
label_49086c:
    if (ctx->pc == 0x49086Cu) {
        ctx->pc = 0x49086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490868u;
        // 0x49086c: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490870u;
        goto label_490870;
    }
    ctx->pc = 0x490868u;
    {
        const bool branch_taken_0x490868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490868u;
        // 0x49086c: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490868) {
            ctx->pc = 0x490D44u;
            goto label_490d44;
        }
    }
    ctx->pc = 0x490870u;
label_490870:
    // 0x490870: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x490870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_490874:
    // 0x490874: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
label_490878:
    if (ctx->pc == 0x490878u) {
        ctx->pc = 0x490878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490874u;
        // 0x490878: 0x8ec2fffc  lw          $v0, -0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49087Cu;
        goto label_49087c;
    }
    ctx->pc = 0x490874u;
    {
        const bool branch_taken_0x490874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x490878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490874u;
        // 0x490878: 0x8ec2fffc  lw          $v0, -0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490874) {
            ctx->pc = 0x490B08u;
            goto label_490b08;
        }
    }
    ctx->pc = 0x49087Cu;
label_49087c:
    // 0x49087c: 0x2f2182b  sltu        $v1, $s7, $s2
    ctx->pc = 0x49087cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_490880:
    // 0x490880: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x490880u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_490884:
    // 0x490884: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x490884u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_490888:
    // 0x490888: 0x2e3480a  movz        $t1, $s7, $v1
    ctx->pc = 0x490888u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 23));
label_49088c:
    // 0x49088c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x49088cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_490890:
    // 0x490890: 0xde83fff8  ld          $v1, -0x8($s4)
    ctx->pc = 0x490890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_490894:
    // 0x490894: 0x8ea2fffc  lw          $v0, -0x4($s5)
    ctx->pc = 0x490894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
label_490898:
    // 0x490898: 0xc95021  addu        $t2, $a2, $t1
    ctx->pc = 0x490898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_49089c:
    // 0x49089c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x49089cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_4908a0:
    // 0x4908a0: 0x14d202b  sltu        $a0, $t2, $t5
    ctx->pc = 0x4908a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_4908a4:
    // 0x4908a4: 0x148000a7  bnez        $a0, . + 4 + (0xA7 << 2)
label_4908a8:
    if (ctx->pc == 0x4908A8u) {
        ctx->pc = 0x4908A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4908A4u;
        // 0x4908a8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4908ACu;
        goto label_4908ac;
    }
    ctx->pc = 0x4908A4u;
    {
        const bool branch_taken_0x4908a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4908A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4908A4u;
        // 0x4908a8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4908a4) {
            ctx->pc = 0x490B44u;
            goto label_490b44;
        }
    }
    ctx->pc = 0x4908ACu;
label_4908ac:
    // 0x4908ac: 0x13c0003c  beqz        $fp, . + 4 + (0x3C << 2)
label_4908b0:
    if (ctx->pc == 0x4908B0u) {
        ctx->pc = 0x4908B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4908ACu;
        // 0x4908b0: 0x27caffff  addiu       $t2, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4908B4u;
        goto label_4908b4;
    }
    ctx->pc = 0x4908ACu;
    {
        const bool branch_taken_0x4908ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4908B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4908ACu;
        // 0x4908b0: 0x27caffff  addiu       $t2, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4908ac) {
            ctx->pc = 0x4909A0u;
            goto label_4909a0;
        }
    }
    ctx->pc = 0x4908B4u;
label_4908b4:
    // 0x4908b4: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x4908b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_4908b8:
    // 0x4908b8: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x4908b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_4908bc:
    // 0x4908bc: 0x8fac0150  lw          $t4, 0x150($sp)
    ctx->pc = 0x4908bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4908c0:
    // 0x4908c0: 0x2e4102b  sltu        $v0, $s7, $a0
    ctx->pc = 0x4908c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4908c4:
    // 0x4908c4: 0x1e74821  addu        $t1, $t7, $a3
    ctx->pc = 0x4908c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_4908c8:
    // 0x4908c8: 0x8fb000c4  lw          $s0, 0xC4($sp)
    ctx->pc = 0x4908c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_4908cc:
    // 0x4908cc: 0x3274021  addu        $t0, $t9, $a3
    ctx->pc = 0x4908ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
label_4908d0:
    // 0x4908d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4908d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4908d4:
    // 0x4908d4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4908d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4908d8:
    // 0x4908d8: 0x2e2300a  movz        $a2, $s7, $v0
    ctx->pc = 0x4908d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 23));
label_4908dc:
    // 0x4908dc: 0x9d250000  lwu         $a1, 0x0($t1)
    ctx->pc = 0x4908dcu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4908e0:
    // 0x4908e0: 0x1901021  addu        $v0, $t4, $s0
    ctx->pc = 0x4908e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
label_4908e4:
    // 0x4908e4: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x4908e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4908e8:
    // 0x4908e8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x4908e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_4908ec:
    // 0x4908ec: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x4908ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4908f0:
    // 0x4908f0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4908f4:
    if (ctx->pc == 0x4908F4u) {
        ctx->pc = 0x4908F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4908F0u;
        // 0x4908f4: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4908F8u;
        goto label_4908f8;
    }
    ctx->pc = 0x4908F0u;
    {
        const bool branch_taken_0x4908f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4908F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4908F0u;
        // 0x4908f4: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4908f0) {
            ctx->pc = 0x49092Cu;
            goto label_49092c;
        }
    }
    ctx->pc = 0x4908F8u;
label_4908f8:
    // 0x4908f8: 0x1971021  addu        $v0, $t4, $s7
    ctx->pc = 0x4908f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 23)));
label_4908fc:
    // 0x4908fc: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_490900:
    if (ctx->pc == 0x490900u) {
        ctx->pc = 0x490900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4908FCu;
        // 0x490900: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x490904u;
        goto label_490904;
    }
    ctx->pc = 0x4908FCu;
    {
        const bool branch_taken_0x4908fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4908fc) {
            ctx->pc = 0x490900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4908FCu;
            // 0x490900: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x490904u;
            goto label_490904;
        }
    }
    ctx->pc = 0x490904u;
label_490904:
    // 0x490904: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x490904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_490908:
    // 0x490908: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x490908u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_49090c:
    // 0x49090c: 0x57001b  divu        $zero, $v0, $s7
    ctx->pc = 0x49090cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_490910:
    // 0x490910: 0x1012  mflo        $v0
    ctx->pc = 0x490910u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_490914:
    // 0x490914: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x490914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_490918:
    // 0x490918: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x490918u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_49091c:
    // 0x49091c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x49091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_490920:
    // 0x490920: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x490920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_490924:
    // 0x490924: 0x1000001b  b           . + 4 + (0x1B << 2)
label_490928:
    if (ctx->pc == 0x490928u) {
        ctx->pc = 0x490928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490924u;
        // 0x490928: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49092Cu;
        goto label_49092c;
    }
    ctx->pc = 0x490924u;
    {
        const bool branch_taken_0x490924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490924u;
        // 0x490928: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490924) {
            ctx->pc = 0x490994u;
            goto label_490994;
        }
    }
    ctx->pc = 0x49092Cu;
label_49092c:
    // 0x49092c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x49092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_490930:
    // 0x490930: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x490930u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_490934:
    // 0x490934: 0x1c2202b  sltu        $a0, $t6, $v0
    ctx->pc = 0x490934u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_490938:
    // 0x490938: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x490938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49093c:
    // 0x49093c: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x49093cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_490940:
    // 0x490940: 0x1c4280a  movz        $a1, $t6, $a0
    ctx->pc = 0x490940u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 14));
label_490944:
    // 0x490944: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x490944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_490948:
    // 0x490948: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x490948u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49094c:
    // 0x49094c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_490950:
    if (ctx->pc == 0x490950u) {
        ctx->pc = 0x490950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49094Cu;
        // 0x490950: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490954u;
        goto label_490954;
    }
    ctx->pc = 0x49094Cu;
    {
        const bool branch_taken_0x49094c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x490950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49094Cu;
        // 0x490950: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49094c) {
            ctx->pc = 0x490990u;
            goto label_490990;
        }
    }
    ctx->pc = 0x490954u;
label_490954:
    // 0x490954: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x490954u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_490958:
    // 0x490958: 0x20e1821  addu        $v1, $s0, $t6
    ctx->pc = 0x490958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
label_49095c:
    // 0x49095c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_490960:
    // 0x490960: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_490964:
    if (ctx->pc == 0x490964u) {
        ctx->pc = 0x490964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490960u;
        // 0x490964: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x490968u;
        goto label_490968;
    }
    ctx->pc = 0x490960u;
    {
        const bool branch_taken_0x490960 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x490960) {
            ctx->pc = 0x490964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490960u;
            // 0x490964: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x490968u;
            goto label_490968;
        }
    }
    ctx->pc = 0x490968u;
label_490968:
    // 0x490968: 0x1012  mflo        $v0
    ctx->pc = 0x490968u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_49096c:
    // 0x49096c: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x49096cu;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_490970:
    // 0x490970: 0x1812  mflo        $v1
    ctx->pc = 0x490970u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_490974:
    // 0x490974: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x490974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_490978:
    // 0x490978: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x490978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_49097c:
    // 0x49097c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x49097cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_490980:
    // 0x490980: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x490980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_490984:
    // 0x490984: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x490984u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_490988:
    // 0x490988: 0x10000002  b           . + 4 + (0x2 << 2)
label_49098c:
    if (ctx->pc == 0x49098Cu) {
        ctx->pc = 0x49098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490988u;
        // 0x49098c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490990u;
        goto label_490990;
    }
    ctx->pc = 0x490988u;
    {
        const bool branch_taken_0x490988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490988u;
        // 0x49098c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490988) {
            ctx->pc = 0x490994u;
            goto label_490994;
        }
    }
    ctx->pc = 0x490990u;
label_490990:
    // 0x490990: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x490990u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_490994:
    // 0x490994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x490994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490998:
    // 0x490998: 0x100000ea  b           . + 4 + (0xEA << 2)
label_49099c:
    if (ctx->pc == 0x49099Cu) {
        ctx->pc = 0x49099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490998u;
        // 0x49099c: 0xafa500e8  sw          $a1, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4909A0u;
        goto label_4909a0;
    }
    ctx->pc = 0x490998u;
    {
        const bool branch_taken_0x490998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490998u;
        // 0x49099c: 0xafa500e8  sw          $a1, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490998) {
            ctx->pc = 0x490D44u;
            goto label_490d44;
        }
    }
    ctx->pc = 0x4909A0u;
label_4909a0:
    // 0x4909a0: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x4909a0u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_4909a4:
    // 0x4909a4: 0x22e1821  addu        $v1, $s1, $t6
    ctx->pc = 0x4909a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_4909a8:
    // 0x4909a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4909a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4909ac:
    // 0x4909ac: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_4909b0:
    if (ctx->pc == 0x4909B0u) {
        ctx->pc = 0x4909B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4909ACu;
        // 0x4909b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4909B4u;
        goto label_4909b4;
    }
    ctx->pc = 0x4909ACu;
    {
        const bool branch_taken_0x4909ac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x4909ac) {
            ctx->pc = 0x4909B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4909ACu;
            // 0x4909b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4909B4u;
            goto label_4909b4;
        }
    }
    ctx->pc = 0x4909B4u;
label_4909b4:
    // 0x4909b4: 0x126042  srl         $t4, $s2, 1
    ctx->pc = 0x4909b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_4909b8:
    // 0x4909b8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x4909b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4909bc:
    // 0x4909bc: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x4909bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_4909c0:
    // 0x4909c0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x4909c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_4909c4:
    // 0x4909c4: 0x8fab00e4  lw          $t3, 0xE4($sp)
    ctx->pc = 0x4909c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_4909c8:
    // 0x4909c8: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x4909c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4909cc:
    // 0x4909cc: 0x1d1202b  sltu        $a0, $t6, $s1
    ctx->pc = 0x4909ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4909d0:
    // 0x4909d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4909d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4909d4:
    // 0x4909d4: 0xdcc5fff8  ld          $a1, -0x8($a2)
    ctx->pc = 0x4909d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_4909d8:
    // 0x4909d8: 0x1c4100a  movz        $v0, $t6, $a0
    ctx->pc = 0x4909d8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
label_4909dc:
    // 0x4909dc: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4909dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_4909e0:
    // 0x4909e0: 0xafab00e4  sw          $t3, 0xE4($sp)
    ctx->pc = 0x4909e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 11));
label_4909e4:
    // 0x4909e4: 0x3812  mflo        $a3
    ctx->pc = 0x4909e4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_4909e8:
    // 0x4909e8: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x4909e8u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4909ec:
    // 0x4909ec: 0x1812  mflo        $v1
    ctx->pc = 0x4909ecu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4909f0:
    // 0x4909f0: 0x10000040  b           . + 4 + (0x40 << 2)
label_4909f4:
    if (ctx->pc == 0x4909F4u) {
        ctx->pc = 0x4909F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4909F0u;
        // 0x4909f4: 0x671818  mult        $v1, $v1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4909F8u;
        goto label_4909f8;
    }
    ctx->pc = 0x4909F0u;
    {
        const bool branch_taken_0x4909f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4909F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4909F0u;
        // 0x4909f4: 0x671818  mult        $v1, $v1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4909f0) {
            ctx->pc = 0x490AF4u;
            goto label_490af4;
        }
    }
    ctx->pc = 0x4909F8u;
label_4909f8:
    // 0x4909f8: 0x1d1202b  sltu        $a0, $t6, $s1
    ctx->pc = 0x4909f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4909fc:
    // 0x4909fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4909fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_490a00:
    // 0x490a00: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x490a00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_490a04:
    // 0x490a04: 0x1c4100a  movz        $v0, $t6, $a0
    ctx->pc = 0x490a04u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
label_490a08:
    // 0x490a08: 0x8fac00e4  lw          $t4, 0xE4($sp)
    ctx->pc = 0x490a08u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_490a0c:
    // 0x490a0c: 0xde84fff8  ld          $a0, -0x8($s4)
    ctx->pc = 0x490a0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_490a10:
    // 0x490a10: 0x1822821  addu        $a1, $t4, $v0
    ctx->pc = 0x490a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_490a14:
    // 0x490a14: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x490a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_490a18:
    // 0x490a18: 0x8ea2fffc  lw          $v0, -0x4($s5)
    ctx->pc = 0x490a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
label_490a1c:
    // 0x490a1c: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x490a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
label_490a20:
    // 0x490a20: 0xb0182b  sltu        $v1, $a1, $s0
    ctx->pc = 0x490a20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_490a24:
    // 0x490a24: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_490a28:
    if (ctx->pc == 0x490A28u) {
        ctx->pc = 0x490A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490A24u;
        // 0x490a28: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490A2Cu;
        goto label_490a2c;
    }
    ctx->pc = 0x490A24u;
    {
        const bool branch_taken_0x490a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x490A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490A24u;
        // 0x490a28: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490a24) {
            ctx->pc = 0x490AACu;
            goto label_490aac;
        }
    }
    ctx->pc = 0x490A2Cu;
label_490a2c:
    // 0x490a2c: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x490a2cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_490a30:
    // 0x490a30: 0x22e8021  addu        $s0, $s1, $t6
    ctx->pc = 0x490a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_490a34:
    // 0x490a34: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x490a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_490a38:
    // 0x490a38: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_490a3c:
    if (ctx->pc == 0x490A3Cu) {
        ctx->pc = 0x490A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490A38u;
        // 0x490a3c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x490A40u;
        goto label_490a40;
    }
    ctx->pc = 0x490A38u;
    {
        const bool branch_taken_0x490a38 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x490a38) {
            ctx->pc = 0x490A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490A38u;
            // 0x490a3c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x490A40u;
            goto label_490a40;
        }
    }
    ctx->pc = 0x490A40u;
label_490a40:
    // 0x490a40: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x490a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
label_490a44:
    // 0x490a44: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x490a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_490a48:
    // 0x490a48: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x490a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_490a4c:
    // 0x490a4c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x490a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_490a50:
    // 0x490a50: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x490a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_490a54:
    // 0x490a54: 0x7faf0180  sq          $t7, 0x180($sp)
    ctx->pc = 0x490a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 15));
label_490a58:
    // 0x490a58: 0x7fb90190  sq          $t9, 0x190($sp)
    ctx->pc = 0x490a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 25));
label_490a5c:
    // 0x490a5c: 0x1012  mflo        $v0
    ctx->pc = 0x490a5cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_490a60:
    // 0x490a60: 0x20e001b  divu        $zero, $s0, $t6
    ctx->pc = 0x490a60u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_490a64:
    // 0x490a64: 0x8012  mflo        $s0
    ctx->pc = 0x490a64u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_490a68:
    // 0x490a68: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x490a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_490a6c:
    // 0x490a6c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x490a6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_490a70:
    // 0x490a70: 0xc10acae  jal         func_42B2B8
label_490a74:
    if (ctx->pc == 0x490A74u) {
        ctx->pc = 0x490A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490A70u;
        // 0x490a74: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490A78u;
        goto label_490a78;
    }
    ctx->pc = 0x490A70u;
    SET_GPR_U32(ctx, 31, 0x490A78u);
    ctx->pc = 0x490A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490A70u;
    // 0x490a74: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x490A70u, 0x490A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490A78u;
label_490a78:
    // 0x490a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x490a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_490a7c:
    // 0x490a7c: 0xc10b602  jal         func_42D808
label_490a80:
    if (ctx->pc == 0x490A80u) {
        ctx->pc = 0x490A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490A7Cu;
        // 0x490a80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490A84u;
        goto label_490a84;
    }
    ctx->pc = 0x490A7Cu;
    SET_GPR_U32(ctx, 31, 0x490A84u);
    ctx->pc = 0x490A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490A7Cu;
    // 0x490a80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x490A7Cu, 0x490A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490A84u;
label_490a84:
    // 0x490a84: 0xde63fff8  ld          $v1, -0x8($s3)
    ctx->pc = 0x490a84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_490a88:
    // 0x490a88: 0x126042  srl         $t4, $s2, 1
    ctx->pc = 0x490a88u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_490a8c:
    // 0x490a8c: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x490a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_490a90:
    // 0x490a90: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x490a90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_490a94:
    // 0x490a94: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x490a94u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_490a98:
    // 0x490a98: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x490a98u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_490a9c:
    // 0x490a9c: 0x7bae0170  lq          $t6, 0x170($sp)
    ctx->pc = 0x490a9cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_490aa0:
    // 0x490aa0: 0x7baf0180  lq          $t7, 0x180($sp)
    ctx->pc = 0x490aa0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_490aa4:
    // 0x490aa4: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_490aa8:
    if (ctx->pc == 0x490AA8u) {
        ctx->pc = 0x490AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490AA4u;
        // 0x490aa8: 0x7bb90190  lq          $t9, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490AACu;
        goto label_490aac;
    }
    ctx->pc = 0x490AA4u;
    {
        const bool branch_taken_0x490aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490AA4u;
        // 0x490aa8: 0x7bb90190  lq          $t9, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490aa4) {
            ctx->pc = 0x490D44u;
            goto label_490d44;
        }
    }
    ctx->pc = 0x490AACu;
label_490aac:
    // 0x490aac: 0x2571821  addu        $v1, $s2, $s7
    ctx->pc = 0x490aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_490ab0:
    // 0x490ab0: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_490ab4:
    if (ctx->pc == 0x490AB4u) {
        ctx->pc = 0x490AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490AB0u;
        // 0x490ab4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x490AB8u;
        goto label_490ab8;
    }
    ctx->pc = 0x490AB0u;
    {
        const bool branch_taken_0x490ab0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x490ab0) {
            ctx->pc = 0x490AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490AB0u;
            // 0x490ab4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x490AB8u;
            goto label_490ab8;
        }
    }
    ctx->pc = 0x490AB8u;
label_490ab8:
    // 0x490ab8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x490ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_490abc:
    // 0x490abc: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x490abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_490ac0:
    // 0x490ac0: 0x77001b  divu        $zero, $v1, $s7
    ctx->pc = 0x490ac0u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_490ac4:
    // 0x490ac4: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x490ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_490ac8:
    // 0x490ac8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x490ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_490acc:
    // 0x490acc: 0x126042  srl         $t4, $s2, 1
    ctx->pc = 0x490accu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_490ad0:
    // 0x490ad0: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x490ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_490ad4:
    // 0x490ad4: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x490ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_490ad8:
    // 0x490ad8: 0x2f2202b  sltu        $a0, $s7, $s2
    ctx->pc = 0x490ad8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_490adc:
    // 0x490adc: 0xdcc5fff8  ld          $a1, -0x8($a2)
    ctx->pc = 0x490adcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_490ae0:
    // 0x490ae0: 0x2e4100a  movz        $v0, $s7, $a0
    ctx->pc = 0x490ae0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
label_490ae4:
    // 0x490ae4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x490ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_490ae8:
    // 0x490ae8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x490ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_490aec:
    // 0x490aec: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x490aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_490af0:
    // 0x490af0: 0x1812  mflo        $v1
    ctx->pc = 0x490af0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_490af4:
    // 0x490af4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x490af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_490af8:
    // 0x490af8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x490af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_490afc:
    // 0x490afc: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x490afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
label_490b00:
    // 0x490b00: 0x10000090  b           . + 4 + (0x90 << 2)
label_490b04:
    if (ctx->pc == 0x490B04u) {
        ctx->pc = 0x490B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490B00u;
        // 0x490b04: 0xfcc50000  sd          $a1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490B08u;
        goto label_490b08;
    }
    ctx->pc = 0x490B00u;
    {
        const bool branch_taken_0x490b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490B00u;
        // 0x490b04: 0xfcc50000  sd          $a1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490b00) {
            ctx->pc = 0x490D44u;
            goto label_490d44;
        }
    }
    ctx->pc = 0x490B08u;
label_490b08:
    // 0x490b08: 0x2f2182b  sltu        $v1, $s7, $s2
    ctx->pc = 0x490b08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_490b0c:
    // 0x490b0c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x490b0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_490b10:
    // 0x490b10: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x490b10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_490b14:
    // 0x490b14: 0x2e3480a  movz        $t1, $s7, $v1
    ctx->pc = 0x490b14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 23));
label_490b18:
    // 0x490b18: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x490b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_490b1c:
    // 0x490b1c: 0xde84fff8  ld          $a0, -0x8($s4)
    ctx->pc = 0x490b1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_490b20:
    // 0x490b20: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x490b20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_490b24:
    // 0x490b24: 0x8ea5fffc  lw          $a1, -0x4($s5)
    ctx->pc = 0x490b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
label_490b28:
    // 0x490b28: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x490b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_490b2c:
    // 0x490b2c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x490b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_490b30:
    // 0x490b30: 0x419b8  dsll        $v1, $a0, 6
    ctx->pc = 0x490b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 6);
label_490b34:
    // 0x490b34: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x490b34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_490b38:
    // 0x490b38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x490b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_490b3c:
    // 0x490b3c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_490b40:
    if (ctx->pc == 0x490B40u) {
        ctx->pc = 0x490B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490B3Cu;
        // 0x490b40: 0xfe840000  sd          $a0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490B44u;
        goto label_490b44;
    }
    ctx->pc = 0x490B3Cu;
    {
        const bool branch_taken_0x490b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x490B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490B3Cu;
        // 0x490b40: 0xfe840000  sd          $a0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490b3c) {
            ctx->pc = 0x490BE0u;
            goto label_490be0;
        }
    }
    ctx->pc = 0x490B44u;
label_490b44:
    // 0x490b44: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x490b44u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_490b48:
    // 0x490b48: 0x22e2821  addu        $a1, $s1, $t6
    ctx->pc = 0x490b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_490b4c:
    // 0x490b4c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x490b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_490b50:
    // 0x490b50: 0x2572021  addu        $a0, $s2, $s7
    ctx->pc = 0x490b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_490b54:
    // 0x490b54: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x490b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_490b58:
    // 0x490b58: 0x8fab00e0  lw          $t3, 0xE0($sp)
    ctx->pc = 0x490b58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_490b5c:
    // 0x490b5c: 0x1e3880  sll         $a3, $fp, 2
    ctx->pc = 0x490b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_490b60:
    // 0x490b60: 0x1d1302b  sltu        $a2, $t6, $s1
    ctx->pc = 0x490b60u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_490b64:
    // 0x490b64: 0x3a71821  addu        $v1, $sp, $a3
    ctx->pc = 0x490b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
label_490b68:
    // 0x490b68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x490b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_490b6c:
    // 0x490b6c: 0xac6b0040  sw          $t3, 0x40($v1)
    ctx->pc = 0x490b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 11));
label_490b70:
    // 0x490b70: 0x1c6100a  movz        $v0, $t6, $a2
    ctx->pc = 0x490b70u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
label_490b74:
    // 0x490b74: 0x3273021  addu        $a2, $t9, $a3
    ctx->pc = 0x490b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
label_490b78:
    // 0x490b78: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x490b78u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_490b7c:
    // 0x490b7c: 0x8fac00f0  lw          $t4, 0xF0($sp)
    ctx->pc = 0x490b7cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_490b80:
    // 0x490b80: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x490b80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_490b84:
    // 0x490b84: 0x1871821  addu        $v1, $t4, $a3
    ctx->pc = 0x490b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_490b88:
    // 0x490b88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x490b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_490b8c:
    // 0x490b8c: 0x1e73821  addu        $a3, $t7, $a3
    ctx->pc = 0x490b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_490b90:
    // 0x490b90: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x490b90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
label_490b94:
    // 0x490b94: 0x126042  srl         $t4, $s2, 1
    ctx->pc = 0x490b94u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_490b98:
    // 0x490b98: 0xafaa00e0  sw          $t2, 0xE0($sp)
    ctx->pc = 0x490b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 10));
label_490b9c:
    // 0x490b9c: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_490ba0:
    if (ctx->pc == 0x490BA0u) {
        ctx->pc = 0x490BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490B9Cu;
        // 0x490ba0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x490BA4u;
        goto label_490ba4;
    }
    ctx->pc = 0x490B9Cu;
    {
        const bool branch_taken_0x490b9c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x490b9c) {
            ctx->pc = 0x490BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490B9Cu;
            // 0x490ba0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x490BA4u;
            goto label_490ba4;
        }
    }
    ctx->pc = 0x490BA4u;
label_490ba4:
    // 0x490ba4: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x490ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_490ba8:
    // 0x490ba8: 0x4012  mflo        $t0
    ctx->pc = 0x490ba8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_490bac:
    // 0x490bac: 0xae001b  divu        $zero, $a1, $t6
    ctx->pc = 0x490bacu;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_490bb0:
    // 0x490bb0: 0x2812  mflo        $a1
    ctx->pc = 0x490bb0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_490bb4:
    // 0x490bb4: 0x97001b  divu        $zero, $a0, $s7
    ctx->pc = 0x490bb4u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_490bb8:
    // 0x490bb8: 0x2012  mflo        $a0
    ctx->pc = 0x490bb8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_490bbc:
    // 0x490bbc: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x490bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_490bc0:
    // 0x490bc0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x490bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_490bc4:
    // 0x490bc4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x490bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_490bc8:
    // 0x490bc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x490bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_490bcc:
    // 0x490bcc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x490bccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_490bd0:
    // 0x490bd0: 0xde62fff8  ld          $v0, -0x8($s3)
    ctx->pc = 0x490bd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_490bd4:
    // 0x490bd4: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x490bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_490bd8:
    // 0x490bd8: 0x1000005a  b           . + 4 + (0x5A << 2)
label_490bdc:
    if (ctx->pc == 0x490BDCu) {
        ctx->pc = 0x490BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490BD8u;
        // 0x490bdc: 0xfe620000  sd          $v0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490BE0u;
        goto label_490be0;
    }
    ctx->pc = 0x490BD8u;
    {
        const bool branch_taken_0x490bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490BD8u;
        // 0x490bdc: 0xfe620000  sd          $v0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490bd8) {
            ctx->pc = 0x490D44u;
            goto label_490d44;
        }
    }
    ctx->pc = 0x490BE0u;
label_490be0:
    // 0x490be0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x490be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_490be4:
    // 0x490be4: 0x1d1182b  sltu        $v1, $t6, $s1
    ctx->pc = 0x490be4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_490be8:
    // 0x490be8: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x490be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_490bec:
    // 0x490bec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x490becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_490bf0:
    // 0x490bf0: 0x1c3100a  movz        $v0, $t6, $v1
    ctx->pc = 0x490bf0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
label_490bf4:
    // 0x490bf4: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x490bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_490bf8:
    // 0x490bf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x490bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_490bfc:
    // 0x490bfc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x490bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_490c00:
    // 0x490c00: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_490c04:
    if (ctx->pc == 0x490C04u) {
        ctx->pc = 0x490C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490C00u;
        // 0x490c04: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490C08u;
        goto label_490c08;
    }
    ctx->pc = 0x490C00u;
    {
        const bool branch_taken_0x490c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x490C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490C00u;
        // 0x490c04: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490c00) {
            ctx->pc = 0x490C6Cu;
            goto label_490c6c;
        }
    }
    ctx->pc = 0x490C08u;
label_490c08:
    // 0x490c08: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
label_490c0c:
    if (ctx->pc == 0x490C0Cu) {
        ctx->pc = 0x490C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490C08u;
        // 0x490c0c: 0x27caffff  addiu       $t2, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490C10u;
        goto label_490c10;
    }
    ctx->pc = 0x490C08u;
    {
        const bool branch_taken_0x490c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x490C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490C08u;
        // 0x490c0c: 0x27caffff  addiu       $t2, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490c08) {
            ctx->pc = 0x490C70u;
            goto label_490c70;
        }
    }
    ctx->pc = 0x490C10u;
label_490c10:
    // 0x490c10: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x490c10u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_490c14:
    // 0x490c14: 0x22e1821  addu        $v1, $s1, $t6
    ctx->pc = 0x490c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_490c18:
    // 0x490c18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x490c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_490c1c:
    // 0x490c1c: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_490c20:
    if (ctx->pc == 0x490C20u) {
        ctx->pc = 0x490C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490C1Cu;
        // 0x490c20: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x490C24u;
        goto label_490c24;
    }
    ctx->pc = 0x490C1Cu;
    {
        const bool branch_taken_0x490c1c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x490c1c) {
            ctx->pc = 0x490C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490C1Cu;
            // 0x490c20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x490C24u;
            goto label_490c24;
        }
    }
    ctx->pc = 0x490C24u;
label_490c24:
    // 0x490c24: 0x126042  srl         $t4, $s2, 1
    ctx->pc = 0x490c24u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_490c28:
    // 0x490c28: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x490c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_490c2c:
    // 0x490c2c: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x490c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_490c30:
    // 0x490c30: 0xde64fff8  ld          $a0, -0x8($s3)
    ctx->pc = 0x490c30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_490c34:
    // 0x490c34: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x490c34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_490c38:
    // 0x490c38: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x490c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_490c3c:
    // 0x490c3c: 0x4e300b  movn        $a2, $v0, $t6
    ctx->pc = 0x490c3cu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_490c40:
    // 0x490c40: 0xafa600e4  sw          $a2, 0xE4($sp)
    ctx->pc = 0x490c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 6));
label_490c44:
    // 0x490c44: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x490c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
label_490c48:
    // 0x490c48: 0x2812  mflo        $a1
    ctx->pc = 0x490c48u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_490c4c:
    // 0x490c4c: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x490c4cu;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_490c50:
    // 0x490c50: 0x1812  mflo        $v1
    ctx->pc = 0x490c50u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_490c54:
    // 0x490c54: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x490c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_490c58:
    // 0x490c58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x490c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_490c5c:
    // 0x490c5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x490c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_490c60:
    // 0x490c60: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x490c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
label_490c64:
    // 0x490c64: 0x10000037  b           . + 4 + (0x37 << 2)
label_490c68:
    if (ctx->pc == 0x490C68u) {
        ctx->pc = 0x490C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490C64u;
        // 0x490c68: 0xfe640000  sd          $a0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490C6Cu;
        goto label_490c6c;
    }
    ctx->pc = 0x490C64u;
    {
        const bool branch_taken_0x490c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490C64u;
        // 0x490c68: 0xfe640000  sd          $a0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490c64) {
            ctx->pc = 0x490D44u;
            goto label_490d44;
        }
    }
    ctx->pc = 0x490C6Cu;
label_490c6c:
    // 0x490c6c: 0x27caffff  addiu       $t2, $fp, -0x1
    ctx->pc = 0x490c6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_490c70:
    // 0x490c70: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x490c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_490c74:
    // 0x490c74: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x490c74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_490c78:
    // 0x490c78: 0x2e3282b  sltu        $a1, $s7, $v1
    ctx->pc = 0x490c78u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_490c7c:
    // 0x490c7c: 0x1e74821  addu        $t1, $t7, $a3
    ctx->pc = 0x490c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_490c80:
    // 0x490c80: 0x3274021  addu        $t0, $t9, $a3
    ctx->pc = 0x490c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
label_490c84:
    // 0x490c84: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x490c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_490c88:
    // 0x490c88: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x490c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_490c8c:
    // 0x490c8c: 0x9d240000  lwu         $a0, 0x0($t1)
    ctx->pc = 0x490c8cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_490c90:
    // 0x490c90: 0x2e5300a  movz        $a2, $s7, $a1
    ctx->pc = 0x490c90u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 23));
label_490c94:
    // 0x490c94: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x490c94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_490c98:
    // 0x490c98: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x490c98u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_490c9c:
    // 0x490c9c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x490c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_490ca0:
    // 0x490ca0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_490ca4:
    if (ctx->pc == 0x490CA4u) {
        ctx->pc = 0x490CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490CA0u;
        // 0x490ca4: 0xfe640000  sd          $a0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490CA8u;
        goto label_490ca8;
    }
    ctx->pc = 0x490CA0u;
    {
        const bool branch_taken_0x490ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x490CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490CA0u;
        // 0x490ca4: 0xfe640000  sd          $a0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490ca0) {
            ctx->pc = 0x490CDCu;
            goto label_490cdc;
        }
    }
    ctx->pc = 0x490CA8u;
label_490ca8:
    // 0x490ca8: 0x1971021  addu        $v0, $t4, $s7
    ctx->pc = 0x490ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 23)));
label_490cac:
    // 0x490cac: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_490cb0:
    if (ctx->pc == 0x490CB0u) {
        ctx->pc = 0x490CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490CACu;
        // 0x490cb0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x490CB4u;
        goto label_490cb4;
    }
    ctx->pc = 0x490CACu;
    {
        const bool branch_taken_0x490cac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x490cac) {
            ctx->pc = 0x490CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490CACu;
            // 0x490cb0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x490CB4u;
            goto label_490cb4;
        }
    }
    ctx->pc = 0x490CB4u;
label_490cb4:
    // 0x490cb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x490cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_490cb8:
    // 0x490cb8: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x490cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_490cbc:
    // 0x490cbc: 0x57001b  divu        $zero, $v0, $s7
    ctx->pc = 0x490cbcu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_490cc0:
    // 0x490cc0: 0x1012  mflo        $v0
    ctx->pc = 0x490cc0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_490cc4:
    // 0x490cc4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x490cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_490cc8:
    // 0x490cc8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x490cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_490ccc:
    // 0x490ccc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x490cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_490cd0:
    // 0x490cd0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x490cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_490cd4:
    // 0x490cd4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_490cd8:
    if (ctx->pc == 0x490CD8u) {
        ctx->pc = 0x490CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490CD4u;
        // 0x490cd8: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490CDCu;
        goto label_490cdc;
    }
    ctx->pc = 0x490CD4u;
    {
        const bool branch_taken_0x490cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490CD4u;
        // 0x490cd8: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490cd4) {
            ctx->pc = 0x490D44u;
            goto label_490d44;
        }
    }
    ctx->pc = 0x490CDCu;
label_490cdc:
    // 0x490cdc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x490cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_490ce0:
    // 0x490ce0: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x490ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_490ce4:
    // 0x490ce4: 0x1c2202b  sltu        $a0, $t6, $v0
    ctx->pc = 0x490ce4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_490ce8:
    // 0x490ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x490ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_490cec:
    // 0x490cec: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x490cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_490cf0:
    // 0x490cf0: 0x1c4280a  movz        $a1, $t6, $a0
    ctx->pc = 0x490cf0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 14));
label_490cf4:
    // 0x490cf4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x490cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_490cf8:
    // 0x490cf8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x490cf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_490cfc:
    // 0x490cfc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_490d00:
    if (ctx->pc == 0x490D00u) {
        ctx->pc = 0x490D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490CFCu;
        // 0x490d00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490D04u;
        goto label_490d04;
    }
    ctx->pc = 0x490CFCu;
    {
        const bool branch_taken_0x490cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x490D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490CFCu;
        // 0x490d00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490cfc) {
            ctx->pc = 0x490D40u;
            goto label_490d40;
        }
    }
    ctx->pc = 0x490D04u;
label_490d04:
    // 0x490d04: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x490d04u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_490d08:
    // 0x490d08: 0x20e1821  addu        $v1, $s0, $t6
    ctx->pc = 0x490d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
label_490d0c:
    // 0x490d0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x490d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_490d10:
    // 0x490d10: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_490d14:
    if (ctx->pc == 0x490D14u) {
        ctx->pc = 0x490D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490D10u;
        // 0x490d14: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x490D18u;
        goto label_490d18;
    }
    ctx->pc = 0x490D10u;
    {
        const bool branch_taken_0x490d10 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x490d10) {
            ctx->pc = 0x490D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490D10u;
            // 0x490d14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x490D18u;
            goto label_490d18;
        }
    }
    ctx->pc = 0x490D18u;
label_490d18:
    // 0x490d18: 0x1012  mflo        $v0
    ctx->pc = 0x490d18u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_490d1c:
    // 0x490d1c: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x490d1cu;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_490d20:
    // 0x490d20: 0x1812  mflo        $v1
    ctx->pc = 0x490d20u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_490d24:
    // 0x490d24: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x490d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_490d28:
    // 0x490d28: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x490d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_490d2c:
    // 0x490d2c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x490d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_490d30:
    // 0x490d30: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x490d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_490d34:
    // 0x490d34: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x490d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_490d38:
    // 0x490d38: 0x10000002  b           . + 4 + (0x2 << 2)
label_490d3c:
    if (ctx->pc == 0x490D3Cu) {
        ctx->pc = 0x490D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490D38u;
        // 0x490d3c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490D40u;
        goto label_490d40;
    }
    ctx->pc = 0x490D38u;
    {
        const bool branch_taken_0x490d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490D38u;
        // 0x490d3c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490d38) {
            ctx->pc = 0x490D44u;
            goto label_490d44;
        }
    }
    ctx->pc = 0x490D40u;
label_490d40:
    // 0x490d40: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x490d40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_490d44:
    // 0x490d44: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x490d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_490d48:
    // 0x490d48: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x490d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_490d4c:
    // 0x490d4c: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x490d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_490d50:
    // 0x490d50: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x490d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_490d54:
    // 0x490d54: 0x8fa70154  lw          $a3, 0x154($sp)
    ctx->pc = 0x490d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_490d58:
    // 0x490d58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x490d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_490d5c:
    // 0x490d5c: 0x8fab00dc  lw          $t3, 0xDC($sp)
    ctx->pc = 0x490d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_490d60:
    // 0x490d60: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x490d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_490d64:
    // 0x490d64: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x490d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_490d68:
    // 0x490d68: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x490d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
label_490d6c:
    // 0x490d6c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x490d6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_490d70:
    // 0x490d70: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x490d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
label_490d74:
    // 0x490d74: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x490d74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_490d78:
    // 0x490d78: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x490d78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_490d7c:
    // 0x490d7c: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x490d7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_490d80:
    // 0x490d80: 0xab102a  slt         $v0, $a1, $t3
    ctx->pc = 0x490d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_490d84:
    // 0x490d84: 0x1440fe8c  bnez        $v0, . + 4 + (-0x174 << 2)
label_490d88:
    if (ctx->pc == 0x490D88u) {
        ctx->pc = 0x490D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490D84u;
        // 0x490d88: 0xafa70154  sw          $a3, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490D8Cu;
        goto label_490d8c;
    }
    ctx->pc = 0x490D84u;
    {
        const bool branch_taken_0x490d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x490D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490D84u;
        // 0x490d88: 0xafa70154  sw          $a3, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490d84) {
            ctx->pc = 0x4907B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4907b8;
        }
    }
    ctx->pc = 0x490D8Cu;
label_490d8c:
    // 0x490d8c: 0x8fac0128  lw          $t4, 0x128($sp)
    ctx->pc = 0x490d8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_490d90:
    // 0x490d90: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x490d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_490d94:
    // 0x490d94: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x490d94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_490d98:
    // 0x490d98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x490d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_490d9c:
    // 0x490d9c: 0x1901021  addu        $v0, $t4, $s0
    ctx->pc = 0x490d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
label_490da0:
    // 0x490da0: 0xdc44fff8  ld          $a0, -0x8($v0)
    ctx->pc = 0x490da0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
label_490da4:
    // 0x490da4: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x490da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_490da8:
    // 0x490da8: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
label_490dac:
    if (ctx->pc == 0x490DACu) {
        ctx->pc = 0x490DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490DA8u;
        // 0x490dac: 0x8fac00c0  lw          $t4, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490DB0u;
        goto label_490db0;
    }
    ctx->pc = 0x490DA8u;
    {
        const bool branch_taken_0x490da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x490DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490DA8u;
        // 0x490dac: 0x8fac00c0  lw          $t4, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490da8) {
            ctx->pc = 0x490E38u;
            goto label_490e38;
        }
    }
    ctx->pc = 0x490DB0u;
label_490db0:
    // 0x490db0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x490db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_490db4:
    // 0x490db4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x490db4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_490db8:
    // 0x490db8: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x490db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_490dbc:
    // 0x490dbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x490dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_490dc0:
    // 0x490dc0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x490dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_490dc4:
    // 0x490dc4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x490dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_490dc8:
    // 0x490dc8: 0x1451001c  bne         $v0, $s1, . + 4 + (0x1C << 2)
label_490dcc:
    if (ctx->pc == 0x490DCCu) {
        ctx->pc = 0x490DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490DC8u;
        // 0x490dcc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490DD0u;
        goto label_490dd0;
    }
    ctx->pc = 0x490DC8u;
    {
        const bool branch_taken_0x490dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x490DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490DC8u;
        // 0x490dcc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490dc8) {
            ctx->pc = 0x490E3Cu;
            goto label_490e3c;
        }
    }
    ctx->pc = 0x490DD0u;
label_490dd0:
    // 0x490dd0: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x490dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_490dd4:
    // 0x490dd4: 0x24c2ffed  addiu       $v0, $a2, -0x13
    ctx->pc = 0x490dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967277));
label_490dd8:
    // 0x490dd8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x490dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_490ddc:
    // 0x490ddc: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_490de0:
    if (ctx->pc == 0x490DE0u) {
        ctx->pc = 0x490DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490DDCu;
        // 0x490de0: 0x8fa70120  lw          $a3, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490DE4u;
        goto label_490de4;
    }
    ctx->pc = 0x490DDCu;
    {
        const bool branch_taken_0x490ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x490DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490DDCu;
        // 0x490de0: 0x8fa70120  lw          $a3, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490ddc) {
            ctx->pc = 0x490F54u;
            goto label_490f54;
        }
    }
    ctx->pc = 0x490DE4u;
label_490de4:
    // 0x490de4: 0xdfab0148  ld          $t3, 0x148($sp)
    ctx->pc = 0x490de4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_490de8:
    // 0x490de8: 0xe58021  addu        $s0, $a3, $a1
    ctx->pc = 0x490de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_490dec:
    // 0x490dec: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x490decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_490df0:
    // 0x490df0: 0xb283e  dsrl32      $a1, $t3, 0
    ctx->pc = 0x490df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) >> (32 + 0));
label_490df4:
    // 0x490df4: 0xc10acae  jal         func_42B2B8
label_490df8:
    if (ctx->pc == 0x490DF8u) {
        ctx->pc = 0x490DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490DF4u;
        // 0x490df8: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490DFCu;
        goto label_490dfc;
    }
    ctx->pc = 0x490DF4u;
    SET_GPR_U32(ctx, 31, 0x490DFCu);
    ctx->pc = 0x490DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490DF4u;
    // 0x490df8: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x490DF4u, 0x490DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490DFCu;
label_490dfc:
    // 0x490dfc: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x490dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
label_490e00:
    // 0x490e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x490e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_490e04:
    // 0x490e04: 0xc10b602  jal         func_42D808
label_490e08:
    if (ctx->pc == 0x490E08u) {
        ctx->pc = 0x490E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490E04u;
        // 0x490e08: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490E0Cu;
        goto label_490e0c;
    }
    ctx->pc = 0x490E04u;
    SET_GPR_U32(ctx, 31, 0x490E0Cu);
    ctx->pc = 0x490E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490E04u;
    // 0x490e08: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x490E04u, 0x490E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490E0Cu;
label_490e0c:
    // 0x490e0c: 0x7bae0170  lq          $t6, 0x170($sp)
    ctx->pc = 0x490e0cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_490e10:
    // 0x490e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x490e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_490e14:
    // 0x490e14: 0xc10acae  jal         func_42B2B8
label_490e18:
    if (ctx->pc == 0x490E18u) {
        ctx->pc = 0x490E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490E14u;
        // 0x490e18: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490E1Cu;
        goto label_490e1c;
    }
    ctx->pc = 0x490E14u;
    SET_GPR_U32(ctx, 31, 0x490E1Cu);
    ctx->pc = 0x490E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490E14u;
    // 0x490e18: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x490E14u, 0x490E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490E1Cu;
label_490e1c:
    // 0x490e1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x490e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_490e20:
    // 0x490e20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x490e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_490e24:
    // 0x490e24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x490e24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_490e28:
    // 0x490e28: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x490e28u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_490e2c:
    // 0x490e2c: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x490e2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_490e30:
    // 0x490e30: 0x10000049  b           . + 4 + (0x49 << 2)
label_490e34:
    if (ctx->pc == 0x490E34u) {
        ctx->pc = 0x490E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490E30u;
        // 0x490e34: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490E38u;
        goto label_490e38;
    }
    ctx->pc = 0x490E30u;
    {
        const bool branch_taken_0x490e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490E30u;
        // 0x490e34: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490e30) {
            ctx->pc = 0x490F58u;
            goto label_490f58;
        }
    }
    ctx->pc = 0x490E38u;
label_490e38:
    // 0x490e38: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x490e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_490e3c:
    // 0x490e3c: 0x15820028  bne         $t4, $v0, . + 4 + (0x28 << 2)
label_490e40:
    if (ctx->pc == 0x490E40u) {
        ctx->pc = 0x490E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490E3Cu;
        // 0x490e40: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490E44u;
        goto label_490e44;
    }
    ctx->pc = 0x490E3Cu;
    {
        const bool branch_taken_0x490e3c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x490E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490E3Cu;
        // 0x490e40: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490e3c) {
            ctx->pc = 0x490EE0u;
            goto label_490ee0;
        }
    }
    ctx->pc = 0x490E44u;
label_490e44:
    // 0x490e44: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x490e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_490e48:
    // 0x490e48: 0x1a0982d  daddu       $s3, $t5, $zero
    ctx->pc = 0x490e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_490e4c:
    // 0x490e4c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x490e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_490e50:
    // 0x490e50: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x490e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_490e54:
    // 0x490e54: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x490e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_490e58:
    // 0x490e58: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x490e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_490e5c:
    // 0x490e5c: 0xdc51fff8  ld          $s1, -0x8($v0)
    ctx->pc = 0x490e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
label_490e60:
    // 0x490e60: 0x49080  sll         $s2, $a0, 2
    ctx->pc = 0x490e60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_490e64:
    // 0x490e64: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x490e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_490e68:
    // 0x490e68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x490e68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_490e6c:
    // 0x490e6c: 0x1189b8  dsll        $s1, $s1, 6
    ctx->pc = 0x490e6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 6);
label_490e70:
    // 0x490e70: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x490e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_490e74:
    // 0x490e74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x490e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_490e78:
    // 0x490e78: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x490e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_490e7c:
    // 0x490e7c: 0xc10acae  jal         func_42B2B8
label_490e80:
    if (ctx->pc == 0x490E80u) {
        ctx->pc = 0x490E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490E7Cu;
        // 0x490e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490E84u;
        goto label_490e84;
    }
    ctx->pc = 0x490E7Cu;
    SET_GPR_U32(ctx, 31, 0x490E84u);
    ctx->pc = 0x490E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490E7Cu;
    // 0x490e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x490E7Cu, 0x490E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490E84u;
label_490e84:
    // 0x490e84: 0x3b21821  addu        $v1, $sp, $s2
    ctx->pc = 0x490e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
label_490e88:
    // 0x490e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x490e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_490e8c:
    // 0x490e8c: 0xc10b602  jal         func_42D808
label_490e90:
    if (ctx->pc == 0x490E90u) {
        ctx->pc = 0x490E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490E8Cu;
        // 0x490e90: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490E94u;
        goto label_490e94;
    }
    ctx->pc = 0x490E8Cu;
    SET_GPR_U32(ctx, 31, 0x490E94u);
    ctx->pc = 0x490E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490E8Cu;
    // 0x490e90: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x490E8Cu, 0x490E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490E94u;
label_490e94:
    // 0x490e94: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x490e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_490e98:
    // 0x490e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x490e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_490e9c:
    // 0x490e9c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x490e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_490ea0:
    // 0x490ea0: 0xc10acae  jal         func_42B2B8
label_490ea4:
    if (ctx->pc == 0x490EA4u) {
        ctx->pc = 0x490EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490EA0u;
        // 0x490ea4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490EA8u;
        goto label_490ea8;
    }
    ctx->pc = 0x490EA0u;
    SET_GPR_U32(ctx, 31, 0x490EA8u);
    ctx->pc = 0x490EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490EA0u;
    // 0x490ea4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x490EA0u, 0x490EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490EA8u;
label_490ea8:
    // 0x490ea8: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x490ea8u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_490eac:
    // 0x490eac: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_490eb0:
    if (ctx->pc == 0x490EB0u) {
        ctx->pc = 0x490EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490EACu;
        // 0x490eb0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x490EB4u;
        goto label_490eb4;
    }
    ctx->pc = 0x490EACu;
    {
        const bool branch_taken_0x490eac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x490eac) {
            ctx->pc = 0x490EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490EACu;
            // 0x490eb0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x490EB4u;
            goto label_490eb4;
        }
    }
    ctx->pc = 0x490EB4u;
label_490eb4:
    // 0x490eb4: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x490eb4u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_490eb8:
    // 0x490eb8: 0x2812  mflo        $a1
    ctx->pc = 0x490eb8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_490ebc:
    // 0x490ebc: 0xc10b602  jal         func_42D808
label_490ec0:
    if (ctx->pc == 0x490EC0u) {
        ctx->pc = 0x490EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490EBCu;
        // 0x490ec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490EC4u;
        goto label_490ec4;
    }
    ctx->pc = 0x490EBCu;
    SET_GPR_U32(ctx, 31, 0x490EC4u);
    ctx->pc = 0x490EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490EBCu;
    // 0x490ec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x490EBCu, 0x490EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490EC4u;
label_490ec4:
    // 0x490ec4: 0x202802f  dsubu       $s0, $s0, $v0
    ctx->pc = 0x490ec4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
label_490ec8:
    // 0x490ec8: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x490ec8u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_490ecc:
    // 0x490ecc: 0x6610fffe  daddiu      $s0, $s0, -0x2
    ctx->pc = 0x490eccu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967294);
label_490ed0:
    // 0x490ed0: 0x10b03c  dsll32      $s6, $s0, 0
    ctx->pc = 0x490ed0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 0));
label_490ed4:
    // 0x490ed4: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x490ed4u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
label_490ed8:
    // 0x490ed8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_490edc:
    if (ctx->pc == 0x490EDCu) {
        ctx->pc = 0x490EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490ED8u;
        // 0x490edc: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490EE0u;
        goto label_490ee0;
    }
    ctx->pc = 0x490ED8u;
    {
        const bool branch_taken_0x490ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490ED8u;
        // 0x490edc: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490ed8) {
            ctx->pc = 0x490F58u;
            goto label_490f58;
        }
    }
    ctx->pc = 0x490EE0u;
label_490ee0:
    // 0x490ee0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x490ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_490ee4:
    // 0x490ee4: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_490ee8:
    if (ctx->pc == 0x490EE8u) {
        ctx->pc = 0x490EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490EE4u;
        // 0x490ee8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490EECu;
        goto label_490eec;
    }
    ctx->pc = 0x490EE4u;
    {
        const bool branch_taken_0x490ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x490EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490EE4u;
        // 0x490ee8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490ee4) {
            ctx->pc = 0x490F58u;
            goto label_490f58;
        }
    }
    ctx->pc = 0x490EECu;
label_490eec:
    // 0x490eec: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x490eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_490ef0:
    // 0x490ef0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x490ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_490ef4:
    // 0x490ef4: 0x8fa60124  lw          $a2, 0x124($sp)
    ctx->pc = 0x490ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_490ef8:
    // 0x490ef8: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x490ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_490efc:
    // 0x490efc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x490efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_490f00:
    // 0x490f00: 0x68880  sll         $s1, $a2, 2
    ctx->pc = 0x490f00u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_490f04:
    // 0x490f04: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x490f04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_490f08:
    // 0x490f08: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x490f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_490f0c:
    // 0x490f0c: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x490f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_490f10:
    // 0x490f10: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x490f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_490f14:
    // 0x490f14: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x490f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_490f18:
    // 0x490f18: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x490f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_490f1c:
    // 0x490f1c: 0xc10acae  jal         func_42B2B8
label_490f20:
    if (ctx->pc == 0x490F20u) {
        ctx->pc = 0x490F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490F1Cu;
        // 0x490f20: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490F24u;
        goto label_490f24;
    }
    ctx->pc = 0x490F1Cu;
    SET_GPR_U32(ctx, 31, 0x490F24u);
    ctx->pc = 0x490F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490F1Cu;
    // 0x490f20: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x490F1Cu, 0x490F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490F24u;
label_490f24:
    // 0x490f24: 0x3b11821  addu        $v1, $sp, $s1
    ctx->pc = 0x490f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_490f28:
    // 0x490f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x490f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_490f2c:
    // 0x490f2c: 0xc10b602  jal         func_42D808
label_490f30:
    if (ctx->pc == 0x490F30u) {
        ctx->pc = 0x490F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490F2Cu;
        // 0x490f30: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490F34u;
        goto label_490f34;
    }
    ctx->pc = 0x490F2Cu;
    SET_GPR_U32(ctx, 31, 0x490F34u);
    ctx->pc = 0x490F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490F2Cu;
    // 0x490f30: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x490F2Cu, 0x490F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490F34u;
label_490f34:
    // 0x490f34: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x490f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_490f38:
    // 0x490f38: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x490f38u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_490f3c:
    // 0x490f3c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x490f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_490f40:
    // 0x490f40: 0x6610ffff  daddiu      $s0, $s0, -0x1
    ctx->pc = 0x490f40u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967295);
label_490f44:
    // 0x490f44: 0x10b03c  dsll32      $s6, $s0, 0
    ctx->pc = 0x490f44u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 0));
label_490f48:
    // 0x490f48: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x490f48u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
label_490f4c:
    // 0x490f4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_490f50:
    if (ctx->pc == 0x490F50u) {
        ctx->pc = 0x490F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490F4Cu;
        // 0x490f50: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490F54u;
        goto label_490f54;
    }
    ctx->pc = 0x490F4Cu;
    {
        const bool branch_taken_0x490f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490F4Cu;
        // 0x490f50: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490f4c) {
            ctx->pc = 0x490F58u;
            goto label_490f58;
        }
    }
    ctx->pc = 0x490F54u;
label_490f54:
    // 0x490f54: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x490f54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_490f58:
    // 0x490f58: 0x8fab00c8  lw          $t3, 0xC8($sp)
    ctx->pc = 0x490f58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_490f5c:
    // 0x490f5c: 0x8fac0020  lw          $t4, 0x20($sp)
    ctx->pc = 0x490f5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_490f60:
    // 0x490f60: 0xdd620000  ld          $v0, 0x0($t3)
    ctx->pc = 0x490f60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 0)));
label_490f64:
    // 0x490f64: 0x8fb000dc  lw          $s0, 0xDC($sp)
    ctx->pc = 0x490f64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_490f68:
    // 0x490f68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x490f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_490f6c:
    // 0x490f6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x490f6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_490f70:
    // 0x490f70: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x490f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_490f74:
    // 0x490f74: 0xafac0110  sw          $t4, 0x110($sp)
    ctx->pc = 0x490f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 12));
label_490f78:
    // 0x490f78: 0x1a000132  blez        $s0, . + 4 + (0x132 << 2)
label_490f7c:
    if (ctx->pc == 0x490F7Cu) {
        ctx->pc = 0x490F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490F78u;
        // 0x490f7c: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490F80u;
        goto label_490f80;
    }
    ctx->pc = 0x490F78u;
    {
        const bool branch_taken_0x490f78 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x490F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490F78u;
        // 0x490f7c: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490f78) {
            ctx->pc = 0x491444u;
            goto label_491444;
        }
    }
    ctx->pc = 0x490F80u;
label_490f80:
    // 0x490f80: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x490f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_490f84:
    // 0x490f84: 0x0  nop
    ctx->pc = 0x490f84u;
    // NOP
label_490f88:
    // 0x490f88: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x490f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_490f8c:
    // 0x490f8c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x490f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_490f90:
    // 0x490f90: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x490f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_490f94:
    // 0x490f94: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x490f94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_490f98:
    // 0x490f98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x490f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_490f9c:
    // 0x490f9c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x490f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_490fa0:
    // 0x490fa0: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x490fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_490fa4:
    // 0x490fa4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x490fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_490fa8:
    // 0x490fa8: 0x1470001f  bne         $v1, $s0, . + 4 + (0x1F << 2)
label_490fac:
    if (ctx->pc == 0x490FACu) {
        ctx->pc = 0x490FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490FA8u;
        // 0x490fac: 0x8fa300ec  lw          $v1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490FB0u;
        goto label_490fb0;
    }
    ctx->pc = 0x490FA8u;
    {
        const bool branch_taken_0x490fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x490FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490FA8u;
        // 0x490fac: 0x8fa300ec  lw          $v1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490fa8) {
            ctx->pc = 0x491028u;
            goto label_491028;
        }
    }
    ctx->pc = 0x490FB0u;
label_490fb0:
    // 0x490fb0: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x490fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_490fb4:
    // 0x490fb4: 0x1c0a02d  daddu       $s4, $t6, $zero
    ctx->pc = 0x490fb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_490fb8:
    // 0x490fb8: 0x8fa70110  lw          $a3, 0x110($sp)
    ctx->pc = 0x490fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_490fbc:
    // 0x490fbc: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x490fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_490fc0:
    // 0x490fc0: 0xdfab0148  ld          $t3, 0x148($sp)
    ctx->pc = 0x490fc0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_490fc4:
    // 0x490fc4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x490fc4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_490fc8:
    // 0x490fc8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x490fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_490fcc:
    // 0x490fcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x490fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_490fd0:
    // 0x490fd0: 0xb983e  dsrl32      $s3, $t3, 0
    ctx->pc = 0x490fd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 11) >> (32 + 0));
label_490fd4:
    // 0x490fd4: 0x82902f  dsubu       $s2, $a0, $v0
    ctx->pc = 0x490fd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_490fd8:
    // 0x490fd8: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x490fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_490fdc:
    // 0x490fdc: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x490fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_490fe0:
    // 0x490fe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x490fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_490fe4:
    // 0x490fe4: 0xc10b602  jal         func_42D808
label_490fe8:
    if (ctx->pc == 0x490FE8u) {
        ctx->pc = 0x490FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490FE4u;
        // 0x490fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x490FECu;
        goto label_490fec;
    }
    ctx->pc = 0x490FE4u;
    SET_GPR_U32(ctx, 31, 0x490FECu);
    ctx->pc = 0x490FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490FE4u;
    // 0x490fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x490FE4u, 0x490FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490FECu;
label_490fec:
    // 0x490fec: 0x8fac0100  lw          $t4, 0x100($sp)
    ctx->pc = 0x490fecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_490ff0:
    // 0x490ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x490ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_490ff4:
    // 0x490ff4: 0xc1980  sll         $v1, $t4, 6
    ctx->pc = 0x490ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_490ff8:
    // 0x490ff8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x490ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_490ffc:
    // 0x490ffc: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x490ffcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
label_491000:
    // 0x491000: 0xc10acae  jal         func_42B2B8
label_491004:
    if (ctx->pc == 0x491004u) {
        ctx->pc = 0x491004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491000u;
        // 0x491004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491008u;
        goto label_491008;
    }
    ctx->pc = 0x491000u;
    SET_GPR_U32(ctx, 31, 0x491008u);
    ctx->pc = 0x491004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491000u;
    // 0x491004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x491000u, 0x491008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491008u;
label_491008:
    // 0x491008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x491008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49100c:
    // 0x49100c: 0xc10b602  jal         func_42D808
label_491010:
    if (ctx->pc == 0x491010u) {
        ctx->pc = 0x491010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49100Cu;
        // 0x491010: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491014u;
        goto label_491014;
    }
    ctx->pc = 0x49100Cu;
    SET_GPR_U32(ctx, 31, 0x491014u);
    ctx->pc = 0x491010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49100Cu;
    // 0x491010: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x49100Cu, 0x491014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491014u;
label_491014:
    // 0x491014: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x491014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
label_491018:
    // 0x491018: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x491018u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_49101c:
    // 0x49101c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_491020:
    if (ctx->pc == 0x491020u) {
        ctx->pc = 0x491020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49101Cu;
        // 0x491020: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491024u;
        goto label_491024;
    }
    ctx->pc = 0x49101Cu;
    {
        const bool branch_taken_0x49101c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49101Cu;
        // 0x491020: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49101c) {
            ctx->pc = 0x491058u;
            goto label_491058;
        }
    }
    ctx->pc = 0x491024u;
label_491024:
    // 0x491024: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x491024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_491028:
    // 0x491028: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x491028u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_49102c:
    // 0x49102c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x49102cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_491030:
    // 0x491030: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x491030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_491034:
    // 0x491034: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x491034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_491038:
    // 0x491038: 0xafb00100  sw          $s0, 0x100($sp)
    ctx->pc = 0x491038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 16));
label_49103c:
    // 0x49103c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x49103cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_491040:
    // 0x491040: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x491040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_491044:
    // 0x491044: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x491044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_491048:
    // 0x491048: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x491048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_49104c:
    // 0x49104c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x49104cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_491050:
    // 0x491050: 0x1000001f  b           . + 4 + (0x1F << 2)
label_491054:
    if (ctx->pc == 0x491054u) {
        ctx->pc = 0x491054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491050u;
        // 0x491054: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491058u;
        goto label_491058;
    }
    ctx->pc = 0x491050u;
    {
        const bool branch_taken_0x491050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491050u;
        // 0x491054: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491050) {
            ctx->pc = 0x4910D0u;
            goto label_4910d0;
        }
    }
    ctx->pc = 0x491058u;
label_491058:
    // 0x491058: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x491058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_49105c:
    // 0x49105c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_491060:
    // 0x491060: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x491060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_491064:
    // 0x491064: 0xc10b602  jal         func_42D808
label_491068:
    if (ctx->pc == 0x491068u) {
        ctx->pc = 0x491068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491064u;
        // 0x491068: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49106Cu;
        goto label_49106c;
    }
    ctx->pc = 0x491064u;
    SET_GPR_U32(ctx, 31, 0x49106Cu);
    ctx->pc = 0x491068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491064u;
    // 0x491068: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x491064u, 0x49106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49106Cu;
label_49106c:
    // 0x49106c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491070:
    // 0x491070: 0xc10f1c0  jal         func_43C700
label_491074:
    if (ctx->pc == 0x491074u) {
        ctx->pc = 0x491074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491070u;
        // 0x491074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491078u;
        goto label_491078;
    }
    ctx->pc = 0x491070u;
    SET_GPR_U32(ctx, 31, 0x491078u);
    ctx->pc = 0x491074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491070u;
    // 0x491074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C700u, 0x491070u, 0x491078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491078u;
label_491078:
    // 0x491078: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x491078u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_49107c:
    // 0x49107c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x49107cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_491080:
    // 0x491080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x491080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_491084:
    // 0x491084: 0xc10b602  jal         func_42D808
label_491088:
    if (ctx->pc == 0x491088u) {
        ctx->pc = 0x491088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491084u;
        // 0x491088: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49108Cu;
        goto label_49108c;
    }
    ctx->pc = 0x491084u;
    SET_GPR_U32(ctx, 31, 0x49108Cu);
    ctx->pc = 0x491088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491084u;
    // 0x491088: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x491084u, 0x49108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49108Cu;
label_49108c:
    // 0x49108c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491090:
    // 0x491090: 0xc10acae  jal         func_42B2B8
label_491094:
    if (ctx->pc == 0x491094u) {
        ctx->pc = 0x491094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491090u;
        // 0x491094: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491098u;
        goto label_491098;
    }
    ctx->pc = 0x491090u;
    SET_GPR_U32(ctx, 31, 0x491098u);
    ctx->pc = 0x491094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491090u;
    // 0x491094: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x491090u, 0x491098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491098u;
label_491098:
    // 0x491098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x491098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49109c:
    // 0x49109c: 0xc10b602  jal         func_42D808
label_4910a0:
    if (ctx->pc == 0x4910A0u) {
        ctx->pc = 0x4910A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49109Cu;
        // 0x4910a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4910A4u;
        goto label_4910a4;
    }
    ctx->pc = 0x49109Cu;
    SET_GPR_U32(ctx, 31, 0x4910A4u);
    ctx->pc = 0x4910A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49109Cu;
    // 0x4910a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x49109Cu, 0x4910A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4910A4u;
label_4910a4:
    // 0x4910a4: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x4910a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_4910a8:
    // 0x4910a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4910a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4910ac:
    // 0x4910ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4910acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4910b0:
    // 0x4910b0: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x4910b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_4910b4:
    // 0x4910b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4910b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4910b8:
    // 0x4910b8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4910b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4910bc:
    // 0x4910bc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4910bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4910c0:
    // 0x4910c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4910c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4910c4:
    // 0x4910c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4910c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4910c8:
    // 0x4910c8: 0x7bae0170  lq          $t6, 0x170($sp)
    ctx->pc = 0x4910c8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4910cc:
    // 0x4910cc: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x4910ccu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_4910d0:
    // 0x4910d0: 0x8fab0100  lw          $t3, 0x100($sp)
    ctx->pc = 0x4910d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_4910d4:
    // 0x4910d4: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_4910d8:
    if (ctx->pc == 0x4910D8u) {
        ctx->pc = 0x4910D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4910D4u;
        // 0x4910d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4910DCu;
        goto label_4910dc;
    }
    ctx->pc = 0x4910D4u;
    {
        const bool branch_taken_0x4910d4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x4910d4) {
            ctx->pc = 0x4910D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4910D4u;
            // 0x4910d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4910DCu;
            goto label_4910dc;
        }
    }
    ctx->pc = 0x4910DCu;
label_4910dc:
    // 0x4910dc: 0xb1980  sll         $v1, $t3, 6
    ctx->pc = 0x4910dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
label_4910e0:
    // 0x4910e0: 0x6d001b  divu        $zero, $v1, $t5
    ctx->pc = 0x4910e0u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4910e4:
    // 0x4910e4: 0x1012  mflo        $v0
    ctx->pc = 0x4910e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_4910e8:
    // 0x4910e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4910e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4910ec:
    // 0x4910ec: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_4910f0:
    if (ctx->pc == 0x4910F0u) {
        ctx->pc = 0x4910F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4910ECu;
        // 0x4910f0: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4910F4u;
        goto label_4910f4;
    }
    ctx->pc = 0x4910ECu;
    {
        const bool branch_taken_0x4910ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4910F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4910ECu;
        // 0x4910f0: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4910ec) {
            ctx->pc = 0x4911C0u;
            goto label_4911c0;
        }
    }
    ctx->pc = 0x4910F4u;
label_4910f4:
    // 0x4910f4: 0x77001b  divu        $zero, $v1, $s7
    ctx->pc = 0x4910f4u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4910f8:
    // 0x4910f8: 0xb8ac0  sll         $s1, $t3, 11
    ctx->pc = 0x4910f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 11), 11));
label_4910fc:
    // 0x4910fc: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_491100:
    if (ctx->pc == 0x491100u) {
        ctx->pc = 0x491100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4910FCu;
        // 0x491100: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491104u;
        goto label_491104;
    }
    ctx->pc = 0x4910FCu;
    {
        const bool branch_taken_0x4910fc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x4910fc) {
            ctx->pc = 0x491100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4910FCu;
            // 0x491100: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x491104u;
            goto label_491104;
        }
    }
    ctx->pc = 0x491104u;
label_491104:
    // 0x491104: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x491104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_491108:
    // 0x491108: 0x3c2a821  addu        $s5, $fp, $v0
    ctx->pc = 0x491108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_49110c:
    // 0x49110c: 0xdeb40000  ld          $s4, 0x0($s5)
    ctx->pc = 0x49110cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_491110:
    // 0x491110: 0x9812  mflo        $s3
    ctx->pc = 0x491110u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_491114:
    // 0x491114: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x491114u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_491118:
    // 0x491118: 0x9012  mflo        $s2
    ctx->pc = 0x491118u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_49111c:
    // 0x49111c: 0x22d001b  divu        $zero, $s1, $t5
    ctx->pc = 0x49111cu;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_491120:
    // 0x491120: 0x2722023  subu        $a0, $s3, $s2
    ctx->pc = 0x491120u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_491124:
    // 0x491124: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x491124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_491128:
    // 0x491128: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x491128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_49112c:
    // 0x49112c: 0x2842024  and         $a0, $s4, $a0
    ctx->pc = 0x49112cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
label_491130:
    // 0x491130: 0x8812  mflo        $s1
    ctx->pc = 0x491130u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_491134:
    // 0x491134: 0x77001b  divu        $zero, $v1, $s7
    ctx->pc = 0x491134u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_491138:
    // 0x491138: 0x2328023  subu        $s0, $s1, $s2
    ctx->pc = 0x491138u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_49113c:
    // 0x49113c: 0x108027  nor         $s0, $zero, $s0
    ctx->pc = 0x49113cu;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
label_491140:
    // 0x491140: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x491140u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_491144:
    // 0x491144: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x491144u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_491148:
    // 0x491148: 0x2908024  and         $s0, $s4, $s0
    ctx->pc = 0x491148u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 16));
label_49114c:
    // 0x49114c: 0x1012  mflo        $v0
    ctx->pc = 0x49114cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_491150:
    // 0x491150: 0x233001b  divu        $zero, $s1, $s3
    ctx->pc = 0x491150u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_491154:
    // 0x491154: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x491154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_491158:
    // 0x491158: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x491158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_49115c:
    // 0x49115c: 0x2812  mflo        $a1
    ctx->pc = 0x49115cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_491160:
    // 0x491160: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x491160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_491164:
    // 0x491164: 0xc10b602  jal         func_42D808
label_491168:
    if (ctx->pc == 0x491168u) {
        ctx->pc = 0x491168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491164u;
        // 0x491168: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49116Cu;
        goto label_49116c;
    }
    ctx->pc = 0x491164u;
    SET_GPR_U32(ctx, 31, 0x49116Cu);
    ctx->pc = 0x491168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491164u;
    // 0x491168: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x491164u, 0x49116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49116Cu;
label_49116c:
    // 0x49116c: 0x272001b  divu        $zero, $s3, $s2
    ctx->pc = 0x49116cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
label_491170:
    // 0x491170: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x491170u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_491174:
    // 0x491174: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x491174u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_491178:
    // 0x491178: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x491178u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_49117c:
    // 0x49117c: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_491180:
    if (ctx->pc == 0x491180u) {
        ctx->pc = 0x491180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49117Cu;
        // 0x491180: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491184u;
        goto label_491184;
    }
    ctx->pc = 0x49117Cu;
    {
        const bool branch_taken_0x49117c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x49117c) {
            ctx->pc = 0x491180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49117Cu;
            // 0x491180: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x491184u;
            goto label_491184;
        }
    }
    ctx->pc = 0x491184u;
label_491184:
    // 0x491184: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x491184u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
label_491188:
    // 0x491188: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x491188u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
label_49118c:
    // 0x49118c: 0x2912024  and         $a0, $s4, $s1
    ctx->pc = 0x49118cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & GPR_U64(ctx, 17));
label_491190:
    // 0x491190: 0x9012  mflo        $s2
    ctx->pc = 0x491190u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_491194:
    // 0x491194: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x491194u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_491198:
    // 0x491198: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x491198u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
label_49119c:
    // 0x49119c: 0x12283e  dsrl32      $a1, $s2, 0
    ctx->pc = 0x49119cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) >> (32 + 0));
label_4911a0:
    // 0x4911a0: 0x1812  mflo        $v1
    ctx->pc = 0x4911a0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4911a4:
    // 0x4911a4: 0xc10acae  jal         func_42B2B8
label_4911a8:
    if (ctx->pc == 0x4911A8u) {
        ctx->pc = 0x4911ACu;
        goto label_4911ac;
    }
    ctx->pc = 0x4911A4u;
    SET_GPR_U32(ctx, 31, 0x4911ACu);
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4911A4u, 0x4911ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4911ACu;
label_4911ac:
    // 0x4911ac: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4911acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4911b0:
    // 0x4911b0: 0xfeb00000  sd          $s0, 0x0($s5)
    ctx->pc = 0x4911b0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 16));
label_4911b4:
    // 0x4911b4: 0x7bae0170  lq          $t6, 0x170($sp)
    ctx->pc = 0x4911b4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4911b8:
    // 0x4911b8: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x4911b8u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_4911bc:
    // 0x4911bc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x4911bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4911c0:
    // 0x4911c0: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_4911c4:
    if (ctx->pc == 0x4911C4u) {
        ctx->pc = 0x4911C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4911C0u;
        // 0x4911c4: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4911C8u;
        goto label_4911c8;
    }
    ctx->pc = 0x4911C0u;
    {
        const bool branch_taken_0x4911c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4911C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4911C0u;
        // 0x4911c4: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4911c0) {
            ctx->pc = 0x491408u;
            goto label_491408;
        }
    }
    ctx->pc = 0x4911C8u;
label_4911c8:
    // 0x4911c8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4911cc:
    // 0x4911cc: 0x2442f410  addiu       $v0, $v0, -0xBF0
    ctx->pc = 0x4911ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964240));
label_4911d0:
    // 0x4911d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4911d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4911d4:
    // 0x4911d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4911d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4911d8:
    // 0x4911d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4911d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4911dc:
    // 0x4911dc: 0x800008  jr          $a0
label_4911e0:
    if (ctx->pc == 0x4911E0u) {
        ctx->pc = 0x4911E4u;
        goto label_4911e4;
    }
    ctx->pc = 0x4911DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4911DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4911E4u;
label_4911e4:
    // 0x4911e4: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x4911e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_4911e8:
    // 0x4911e8: 0x2402ffe1  addiu       $v0, $zero, -0x1F
    ctx->pc = 0x4911e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_4911ec:
    // 0x4911ec: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4911f0:
    if (ctx->pc == 0x4911F0u) {
        ctx->pc = 0x4911F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4911ECu;
        // 0x4911f0: 0x3c62821  addu        $a1, $fp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4911F4u;
        goto label_4911f4;
    }
    ctx->pc = 0x4911ECu;
    {
        const bool branch_taken_0x4911ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4911F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4911ECu;
        // 0x4911f0: 0x3c62821  addu        $a1, $fp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4911ec) {
            ctx->pc = 0x49126Cu;
            goto label_49126c;
        }
    }
    ctx->pc = 0x4911F4u;
label_4911f4:
    // 0x4911f4: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x4911f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_4911f8:
    // 0x4911f8: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x4911f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_4911fc:
    // 0x4911fc: 0x10000030  b           . + 4 + (0x30 << 2)
label_491200:
    if (ctx->pc == 0x491200u) {
        ctx->pc = 0x491200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4911FCu;
        // 0x491200: 0x3c72021  addu        $a0, $fp, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491204u;
        goto label_491204;
    }
    ctx->pc = 0x4911FCu;
    {
        const bool branch_taken_0x4911fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4911FCu;
        // 0x491200: 0x3c72021  addu        $a0, $fp, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4911fc) {
            ctx->pc = 0x4912C0u;
            goto label_4912c0;
        }
    }
    ctx->pc = 0x491204u;
label_491204:
    // 0x491204: 0x8fab00c4  lw          $t3, 0xC4($sp)
    ctx->pc = 0x491204u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_491208:
    // 0x491208: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x491208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_49120c:
    // 0x49120c: 0x3cb2021  addu        $a0, $fp, $t3
    ctx->pc = 0x49120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 11)));
label_491210:
    // 0x491210: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x491210u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_491214:
    // 0x491214: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x491214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_491218:
    // 0x491218: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x491218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_49121c:
    // 0x49121c: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x49121cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_491220:
    // 0x491220: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x491220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_491224:
    // 0x491224: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x491224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_491228:
    // 0x491228: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x491228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
label_49122c:
    // 0x49122c: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x49122cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_491230:
    // 0x491230: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x491230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_491234:
    // 0x491234: 0x30a40010  andi        $a0, $a1, 0x10
    ctx->pc = 0x491234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_491238:
    // 0x491238: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x491238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
label_49123c:
    // 0x49123c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_491240:
    // 0x491240: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x491240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_491244:
    // 0x491244: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x491244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_491248:
    // 0x491248: 0x420ba  dsrl        $a0, $a0, 2
    ctx->pc = 0x491248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 2);
label_49124c:
    // 0x49124c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49124cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_491250:
    // 0x491250: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x491250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_491254:
    // 0x491254: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x491254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_491258:
    // 0x491258: 0x10000071  b           . + 4 + (0x71 << 2)
label_49125c:
    if (ctx->pc == 0x49125Cu) {
        ctx->pc = 0x49125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491258u;
        // 0x49125c: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491260u;
        goto label_491260;
    }
    ctx->pc = 0x491258u;
    {
        const bool branch_taken_0x491258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491258u;
        // 0x49125c: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491258) {
            ctx->pc = 0x491420u;
            goto label_491420;
        }
    }
    ctx->pc = 0x491260u;
label_491260:
    // 0x491260: 0x8fac00c4  lw          $t4, 0xC4($sp)
    ctx->pc = 0x491260u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_491264:
    // 0x491264: 0x2402ffe1  addiu       $v0, $zero, -0x1F
    ctx->pc = 0x491264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_491268:
    // 0x491268: 0x3cc2821  addu        $a1, $fp, $t4
    ctx->pc = 0x491268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
label_49126c:
    // 0x49126c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x49126cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_491270:
    // 0x491270: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x491270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_491274:
    // 0x491274: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x491274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_491278:
    // 0x491278: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x491278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
label_49127c:
    // 0x49127c: 0x30650004  andi        $a1, $v1, 0x4
    ctx->pc = 0x49127cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_491280:
    // 0x491280: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x491280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_491284:
    // 0x491284: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x491284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
label_491288:
    // 0x491288: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x491288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_49128c:
    // 0x49128c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49128cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_491290:
    // 0x491290: 0x420ba  dsrl        $a0, $a0, 2
    ctx->pc = 0x491290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 2);
label_491294:
    // 0x491294: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x491294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_491298:
    // 0x491298: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x491298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_49129c:
    // 0x49129c: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x49129cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_4912a0:
    // 0x4912a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4912a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4912a4:
    // 0x4912a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4912a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4912a8:
    // 0x4912a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4912a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4912ac:
    // 0x4912ac: 0x1000005c  b           . + 4 + (0x5C << 2)
label_4912b0:
    if (ctx->pc == 0x4912B0u) {
        ctx->pc = 0x4912B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4912ACu;
        // 0x4912b0: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4912B4u;
        goto label_4912b4;
    }
    ctx->pc = 0x4912ACu;
    {
        const bool branch_taken_0x4912ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4912B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4912ACu;
        // 0x4912b0: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4912ac) {
            ctx->pc = 0x491420u;
            goto label_491420;
        }
    }
    ctx->pc = 0x4912B4u;
label_4912b4:
    // 0x4912b4: 0x8fb000c4  lw          $s0, 0xC4($sp)
    ctx->pc = 0x4912b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_4912b8:
    // 0x4912b8: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x4912b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_4912bc:
    // 0x4912bc: 0x3d02021  addu        $a0, $fp, $s0
    ctx->pc = 0x4912bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_4912c0:
    // 0x4912c0: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x4912c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_4912c4:
    // 0x4912c4: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x4912c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4912c8:
    // 0x4912c8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4912c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4912cc:
    // 0x4912cc: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x4912ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_4912d0:
    // 0x4912d0: 0x30c40002  andi        $a0, $a2, 0x2
    ctx->pc = 0x4912d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_4912d4:
    // 0x4912d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4912d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4912d8:
    // 0x4912d8: 0x30c50004  andi        $a1, $a2, 0x4
    ctx->pc = 0x4912d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_4912dc:
    // 0x4912dc: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x4912dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
label_4912e0:
    // 0x4912e0: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x4912e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_4912e4:
    // 0x4912e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4912e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4912e8:
    // 0x4912e8: 0x528ba  dsrl        $a1, $a1, 2
    ctx->pc = 0x4912e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
label_4912ec:
    // 0x4912ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4912ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4912f0:
    // 0x4912f0: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x4912f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_4912f4:
    // 0x4912f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4912f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4912f8:
    // 0x4912f8: 0x30c60010  andi        $a2, $a2, 0x10
    ctx->pc = 0x4912f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_4912fc:
    // 0x4912fc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4912fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_491300:
    // 0x491300: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x491300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_491304:
    // 0x491304: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x491304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_491308:
    // 0x491308: 0x10000045  b           . + 4 + (0x45 << 2)
label_49130c:
    if (ctx->pc == 0x49130Cu) {
        ctx->pc = 0x49130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491308u;
        // 0x49130c: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491310u;
        goto label_491310;
    }
    ctx->pc = 0x491308u;
    {
        const bool branch_taken_0x491308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491308u;
        // 0x49130c: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491308) {
            ctx->pc = 0x491420u;
            goto label_491420;
        }
    }
    ctx->pc = 0x491310u;
label_491310:
    // 0x491310: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x491310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_491314:
    // 0x491314: 0x3c22821  addu        $a1, $fp, $v0
    ctx->pc = 0x491314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_491318:
    // 0x491318: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x491318u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_49131c:
    // 0x49131c: 0x2402ffe1  addiu       $v0, $zero, -0x1F
    ctx->pc = 0x49131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_491320:
    // 0x491320: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x491320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_491324:
    // 0x491324: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x491324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_491328:
    // 0x491328: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x491328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
label_49132c:
    // 0x49132c: 0x30650004  andi        $a1, $v1, 0x4
    ctx->pc = 0x49132cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_491330:
    // 0x491330: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x491330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_491334:
    // 0x491334: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x491334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
label_491338:
    // 0x491338: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x491338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_49133c:
    // 0x49133c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49133cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_491340:
    // 0x491340: 0x420ba  dsrl        $a0, $a0, 2
    ctx->pc = 0x491340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 2);
label_491344:
    // 0x491344: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x491344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_491348:
    // 0x491348: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x491348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_49134c:
    // 0x49134c: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x49134cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_491350:
    // 0x491350: 0x10000028  b           . + 4 + (0x28 << 2)
label_491354:
    if (ctx->pc == 0x491354u) {
        ctx->pc = 0x491354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491350u;
        // 0x491354: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491358u;
        goto label_491358;
    }
    ctx->pc = 0x491350u;
    {
        const bool branch_taken_0x491350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491350u;
        // 0x491354: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491350) {
            ctx->pc = 0x4913F4u;
            goto label_4913f4;
        }
    }
    ctx->pc = 0x491358u;
label_491358:
    // 0x491358: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x491358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_49135c:
    // 0x49135c: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x49135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_491360:
    // 0x491360: 0x3c32021  addu        $a0, $fp, $v1
    ctx->pc = 0x491360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_491364:
    // 0x491364: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x491364u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_491368:
    // 0x491368: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x491368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_49136c:
    // 0x49136c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x49136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_491370:
    // 0x491370: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x491370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_491374:
    // 0x491374: 0x30c40002  andi        $a0, $a2, 0x2
    ctx->pc = 0x491374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_491378:
    // 0x491378: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x491378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_49137c:
    // 0x49137c: 0x30c50004  andi        $a1, $a2, 0x4
    ctx->pc = 0x49137cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_491380:
    // 0x491380: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x491380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
label_491384:
    // 0x491384: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x491384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_491388:
    // 0x491388: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x491388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_49138c:
    // 0x49138c: 0x528ba  dsrl        $a1, $a1, 2
    ctx->pc = 0x49138cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
label_491390:
    // 0x491390: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x491390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_491394:
    // 0x491394: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x491394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_491398:
    // 0x491398: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x491398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_49139c:
    // 0x49139c: 0x30c60010  andi        $a2, $a2, 0x10
    ctx->pc = 0x49139cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_4913a0:
    // 0x4913a0: 0x10000014  b           . + 4 + (0x14 << 2)
label_4913a4:
    if (ctx->pc == 0x4913A4u) {
        ctx->pc = 0x4913A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4913A0u;
        // 0x4913a4: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4913A8u;
        goto label_4913a8;
    }
    ctx->pc = 0x4913A0u;
    {
        const bool branch_taken_0x4913a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4913A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4913A0u;
        // 0x4913a4: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4913a0) {
            ctx->pc = 0x4913F4u;
            goto label_4913f4;
        }
    }
    ctx->pc = 0x4913A8u;
label_4913a8:
    // 0x4913a8: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x4913a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_4913ac:
    // 0x4913ac: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x4913acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_4913b0:
    // 0x4913b0: 0x3c52021  addu        $a0, $fp, $a1
    ctx->pc = 0x4913b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_4913b4:
    // 0x4913b4: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x4913b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_4913b8:
    // 0x4913b8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4913b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_4913bc:
    // 0x4913bc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4913bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4913c0:
    // 0x4913c0: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x4913c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_4913c4:
    // 0x4913c4: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x4913c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_4913c8:
    // 0x4913c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4913c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4913cc:
    // 0x4913cc: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x4913ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
label_4913d0:
    // 0x4913d0: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x4913d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_4913d4:
    // 0x4913d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4913d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4913d8:
    // 0x4913d8: 0x30a40010  andi        $a0, $a1, 0x10
    ctx->pc = 0x4913d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_4913dc:
    // 0x4913dc: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x4913dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
label_4913e0:
    // 0x4913e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4913e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4913e4:
    // 0x4913e4: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x4913e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_4913e8:
    // 0x4913e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4913e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4913ec:
    // 0x4913ec: 0x420ba  dsrl        $a0, $a0, 2
    ctx->pc = 0x4913ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 2);
label_4913f0:
    // 0x4913f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4913f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4913f4:
    // 0x4913f4: 0x38420018  xori        $v0, $v0, 0x18
    ctx->pc = 0x4913f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
label_4913f8:
    // 0x4913f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4913f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4913fc:
    // 0x4913fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4913fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_491400:
    // 0x491400: 0x10000007  b           . + 4 + (0x7 << 2)
label_491404:
    if (ctx->pc == 0x491404u) {
        ctx->pc = 0x491404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491400u;
        // 0x491404: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491408u;
        goto label_491408;
    }
    ctx->pc = 0x491400u;
    {
        const bool branch_taken_0x491400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491400u;
        // 0x491404: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491400) {
            ctx->pc = 0x491420u;
            goto label_491420;
        }
    }
    ctx->pc = 0x491408u;
label_491408:
    // 0x491408: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x491408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_49140c:
    // 0x49140c: 0x3c61021  addu        $v0, $fp, $a2
    ctx->pc = 0x49140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_491410:
    // 0x491410: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x491410u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_491414:
    // 0x491414: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x491414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_491418:
    // 0x491418: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x491418u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_49141c:
    // 0x49141c: 0x8fab00ec  lw          $t3, 0xEC($sp)
    ctx->pc = 0x49141cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_491420:
    // 0x491420: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x491420u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_491424:
    // 0x491424: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x491424u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_491428:
    // 0x491428: 0x3c71821  addu        $v1, $fp, $a3
    ctx->pc = 0x491428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
label_49142c:
    // 0x49142c: 0xafab00ec  sw          $t3, 0xEC($sp)
    ctx->pc = 0x49142cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 11));
label_491430:
    // 0x491430: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x491430u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_491434:
    // 0x491434: 0x8fac00dc  lw          $t4, 0xDC($sp)
    ctx->pc = 0x491434u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_491438:
    // 0x491438: 0x16c102a  slt         $v0, $t3, $t4
    ctx->pc = 0x491438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_49143c:
    // 0x49143c: 0x1440fed2  bnez        $v0, . + 4 + (-0x12E << 2)
label_491440:
    if (ctx->pc == 0x491440u) {
        ctx->pc = 0x491440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49143Cu;
        // 0x491440: 0x8fa300ec  lw          $v1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491444u;
        goto label_491444;
    }
    ctx->pc = 0x49143Cu;
    {
        const bool branch_taken_0x49143c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49143Cu;
        // 0x491440: 0x8fa300ec  lw          $v1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49143c) {
            ctx->pc = 0x490F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490f88;
        }
    }
    ctx->pc = 0x491444u;
label_491444:
    // 0x491444: 0x8fb00100  lw          $s0, 0x100($sp)
    ctx->pc = 0x491444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_491448:
    // 0x491448: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_49144c:
    if (ctx->pc == 0x49144Cu) {
        ctx->pc = 0x49144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491448u;
        // 0x49144c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491450u;
        goto label_491450;
    }
    ctx->pc = 0x491448u;
    {
        const bool branch_taken_0x491448 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x491448) {
            ctx->pc = 0x49144Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491448u;
            // 0x49144c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x491450u;
            goto label_491450;
        }
    }
    ctx->pc = 0x491450u;
label_491450:
    // 0x491450: 0x103980  sll         $a3, $s0, 6
    ctx->pc = 0x491450u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_491454:
    // 0x491454: 0xed001b  divu        $zero, $a3, $t5
    ctx->pc = 0x491454u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_491458:
    // 0x491458: 0x1012  mflo        $v0
    ctx->pc = 0x491458u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_49145c:
    // 0x49145c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x49145cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_491460:
    // 0x491460: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_491464:
    if (ctx->pc == 0x491464u) {
        ctx->pc = 0x491464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491460u;
        // 0x491464: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491468u;
        goto label_491468;
    }
    ctx->pc = 0x491460u;
    {
        const bool branch_taken_0x491460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491460u;
        // 0x491464: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491460) {
            ctx->pc = 0x4914D8u;
            goto label_4914d8;
        }
    }
    ctx->pc = 0x491468u;
label_491468:
    // 0x491468: 0xf7001b  divu        $zero, $a3, $s7
    ctx->pc = 0x491468u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_49146c:
    // 0x49146c: 0x1012c0  sll         $v0, $s0, 11
    ctx->pc = 0x49146cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_491470:
    // 0x491470: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_491474:
    if (ctx->pc == 0x491474u) {
        ctx->pc = 0x491474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491470u;
        // 0x491474: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491478u;
        goto label_491478;
    }
    ctx->pc = 0x491470u;
    {
        const bool branch_taken_0x491470 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x491470) {
            ctx->pc = 0x491474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491470u;
            // 0x491474: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x491478u;
            goto label_491478;
        }
    }
    ctx->pc = 0x491478u;
label_491478:
    // 0x491478: 0x1812  mflo        $v1
    ctx->pc = 0x491478u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_49147c:
    // 0x49147c: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x49147cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_491480:
    // 0x491480: 0x2012  mflo        $a0
    ctx->pc = 0x491480u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_491484:
    // 0x491484: 0x4d001b  divu        $zero, $v0, $t5
    ctx->pc = 0x491484u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_491488:
    // 0x491488: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x491488u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_49148c:
    // 0x49148c: 0x2c52824  and         $a1, $s6, $a1
    ctx->pc = 0x49148cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
label_491490:
    // 0x491490: 0x1012  mflo        $v0
    ctx->pc = 0x491490u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_491494:
    // 0x491494: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x491494u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_491498:
    // 0x491498: 0x3012  mflo        $a2
    ctx->pc = 0x491498u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_49149c:
    // 0x49149c: 0xf7001b  divu        $zero, $a3, $s7
    ctx->pc = 0x49149cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_4914a0:
    // 0x4914a0: 0x3812  mflo        $a3
    ctx->pc = 0x4914a0u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_4914a4:
    // 0x4914a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4914a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4914a8:
    // 0x4914a8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x4914a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4914ac:
    // 0x4914ac: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x4914acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_4914b0:
    // 0x4914b0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4914b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4914b4:
    // 0x4914b4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4914b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_4914b8:
    // 0x4914b8: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4914b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_4914bc:
    // 0x4914bc: 0x4012  mflo        $t0
    ctx->pc = 0x4914bcu;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_4914c0:
    // 0x4914c0: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x4914c0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4914c4:
    // 0x4914c4: 0x1812  mflo        $v1
    ctx->pc = 0x4914c4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4914c8:
    // 0x4914c8: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x4914c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4914cc:
    // 0x4914cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4914ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4914d0:
    // 0x4914d0: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x4914d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4914d4:
    // 0x4914d4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x4914d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4914d8:
    // 0x4914d8: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_4914dc:
    if (ctx->pc == 0x4914DCu) {
        ctx->pc = 0x4914DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4914D8u;
        // 0x4914dc: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4914E0u;
        goto label_4914e0;
    }
    ctx->pc = 0x4914D8u;
    {
        const bool branch_taken_0x4914d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4914DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4914D8u;
        // 0x4914dc: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4914d8) {
            ctx->pc = 0x491690u;
            goto label_491690;
        }
    }
    ctx->pc = 0x4914E0u;
label_4914e0:
    // 0x4914e0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4914e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4914e4:
    // 0x4914e4: 0x2442f500  addiu       $v0, $v0, -0xB00
    ctx->pc = 0x4914e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964480));
label_4914e8:
    // 0x4914e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4914e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4914ec:
    // 0x4914ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4914ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4914f0:
    // 0x4914f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4914f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4914f4:
    // 0x4914f4: 0x800008  jr          $a0
label_4914f8:
    if (ctx->pc == 0x4914F8u) {
        ctx->pc = 0x4914FCu;
        goto label_4914fc;
    }
    ctx->pc = 0x4914F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4914F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4914FCu;
label_4914fc:
    // 0x4914fc: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x4914fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_491500:
    // 0x491500: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x491500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_491504:
    // 0x491504: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x491504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_491508:
    // 0x491508: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x491508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_49150c:
    // 0x49150c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_491510:
    // 0x491510: 0x32c40002  andi        $a0, $s6, 0x2
    ctx->pc = 0x491510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_491514:
    // 0x491514: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x491514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_491518:
    // 0x491518: 0x32c20004  andi        $v0, $s6, 0x4
    ctx->pc = 0x491518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_49151c:
    // 0x49151c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49151cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_491520:
    // 0x491520: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x491520u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_491524:
    // 0x491524: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_491528:
    // 0x491528: 0x32c40010  andi        $a0, $s6, 0x10
    ctx->pc = 0x491528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_49152c:
    // 0x49152c: 0x32c20008  andi        $v0, $s6, 0x8
    ctx->pc = 0x49152cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_491530:
    // 0x491530: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x491530u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_491534:
    // 0x491534: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_491538:
    // 0x491538: 0x10000056  b           . + 4 + (0x56 << 2)
label_49153c:
    if (ctx->pc == 0x49153Cu) {
        ctx->pc = 0x49153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491538u;
        // 0x49153c: 0x641025  or          $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491540u;
        goto label_491540;
    }
    ctx->pc = 0x491538u;
    {
        const bool branch_taken_0x491538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491538u;
        // 0x49153c: 0x641025  or          $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491538) {
            ctx->pc = 0x491694u;
            goto label_491694;
        }
    }
    ctx->pc = 0x491540u;
label_491540:
    // 0x491540: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x491540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_491544:
    // 0x491544: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x491544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_491548:
    // 0x491548: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x491548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_49154c:
    // 0x49154c: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x49154cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_491550:
    // 0x491550: 0x32c40004  andi        $a0, $s6, 0x4
    ctx->pc = 0x491550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_491554:
    // 0x491554: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_491558:
    // 0x491558: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x491558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_49155c:
    // 0x49155c: 0x32c50008  andi        $a1, $s6, 0x8
    ctx->pc = 0x49155cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_491560:
    // 0x491560: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x491560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_491564:
    // 0x491564: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x491564u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_491568:
    // 0x491568: 0x32c20010  andi        $v0, $s6, 0x10
    ctx->pc = 0x491568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_49156c:
    // 0x49156c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49156cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_491570:
    // 0x491570: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x491570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_491574:
    // 0x491574: 0x10000047  b           . + 4 + (0x47 << 2)
label_491578:
    if (ctx->pc == 0x491578u) {
        ctx->pc = 0x491578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491574u;
        // 0x491578: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49157Cu;
        goto label_49157c;
    }
    ctx->pc = 0x491574u;
    {
        const bool branch_taken_0x491574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491574u;
        // 0x491578: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491574) {
            ctx->pc = 0x491694u;
            goto label_491694;
        }
    }
    ctx->pc = 0x49157Cu;
label_49157c:
    // 0x49157c: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x49157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_491580:
    // 0x491580: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x491580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_491584:
    // 0x491584: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x491584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_491588:
    // 0x491588: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x491588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_49158c:
    // 0x49158c: 0x32c40002  andi        $a0, $s6, 0x2
    ctx->pc = 0x49158cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_491590:
    // 0x491590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x491590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_491594:
    // 0x491594: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x491594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_491598:
    // 0x491598: 0x32c30004  andi        $v1, $s6, 0x4
    ctx->pc = 0x491598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_49159c:
    // 0x49159c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4915a0:
    // 0x4915a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4915a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4915a4:
    // 0x4915a4: 0x32c40008  andi        $a0, $s6, 0x8
    ctx->pc = 0x4915a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_4915a8:
    // 0x4915a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4915a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4915ac:
    // 0x4915ac: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x4915acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_4915b0:
    // 0x4915b0: 0x32c30010  andi        $v1, $s6, 0x10
    ctx->pc = 0x4915b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_4915b4:
    // 0x4915b4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4915b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4915b8:
    // 0x4915b8: 0x10000036  b           . + 4 + (0x36 << 2)
label_4915bc:
    if (ctx->pc == 0x4915BCu) {
        ctx->pc = 0x4915BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4915B8u;
        // 0x4915bc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4915C0u;
        goto label_4915c0;
    }
    ctx->pc = 0x4915B8u;
    {
        const bool branch_taken_0x4915b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4915BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4915B8u;
        // 0x4915bc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4915b8) {
            ctx->pc = 0x491694u;
            goto label_491694;
        }
    }
    ctx->pc = 0x4915C0u;
label_4915c0:
    // 0x4915c0: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x4915c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_4915c4:
    // 0x4915c4: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x4915c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_4915c8:
    // 0x4915c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4915c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4915cc:
    // 0x4915cc: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x4915ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_4915d0:
    // 0x4915d0: 0x32c40004  andi        $a0, $s6, 0x4
    ctx->pc = 0x4915d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_4915d4:
    // 0x4915d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4915d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4915d8:
    // 0x4915d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4915d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4915dc:
    // 0x4915dc: 0x32c50008  andi        $a1, $s6, 0x8
    ctx->pc = 0x4915dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_4915e0:
    // 0x4915e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4915e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4915e4:
    // 0x4915e4: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x4915e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_4915e8:
    // 0x4915e8: 0x32c20010  andi        $v0, $s6, 0x10
    ctx->pc = 0x4915e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_4915ec:
    // 0x4915ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4915ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_4915f0:
    // 0x4915f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4915f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4915f4:
    // 0x4915f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4915f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4915f8:
    // 0x4915f8: 0x10000026  b           . + 4 + (0x26 << 2)
label_4915fc:
    if (ctx->pc == 0x4915FCu) {
        ctx->pc = 0x4915FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4915F8u;
        // 0x4915fc: 0x38620018  xori        $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491600u;
        goto label_491600;
    }
    ctx->pc = 0x4915F8u;
    {
        const bool branch_taken_0x4915f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4915FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4915F8u;
        // 0x4915fc: 0x38620018  xori        $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4915f8) {
            ctx->pc = 0x491694u;
            goto label_491694;
        }
    }
    ctx->pc = 0x491600u;
label_491600:
    // 0x491600: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x491600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_491604:
    // 0x491604: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x491604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_491608:
    // 0x491608: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x491608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_49160c:
    // 0x49160c: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x49160cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_491610:
    // 0x491610: 0x32c40002  andi        $a0, $s6, 0x2
    ctx->pc = 0x491610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_491614:
    // 0x491614: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x491614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_491618:
    // 0x491618: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x491618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_49161c:
    // 0x49161c: 0x32c30004  andi        $v1, $s6, 0x4
    ctx->pc = 0x49161cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_491620:
    // 0x491620: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x491620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_491624:
    // 0x491624: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x491624u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_491628:
    // 0x491628: 0x32c40008  andi        $a0, $s6, 0x8
    ctx->pc = 0x491628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_49162c:
    // 0x49162c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49162cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_491630:
    // 0x491630: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x491630u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_491634:
    // 0x491634: 0x32c30010  andi        $v1, $s6, 0x10
    ctx->pc = 0x491634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_491638:
    // 0x491638: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x491638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_49163c:
    // 0x49163c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49163cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_491640:
    // 0x491640: 0x10000014  b           . + 4 + (0x14 << 2)
label_491644:
    if (ctx->pc == 0x491644u) {
        ctx->pc = 0x491644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491640u;
        // 0x491644: 0x38420018  xori        $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491648u;
        goto label_491648;
    }
    ctx->pc = 0x491640u;
    {
        const bool branch_taken_0x491640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491640u;
        // 0x491644: 0x38420018  xori        $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491640) {
            ctx->pc = 0x491694u;
            goto label_491694;
        }
    }
    ctx->pc = 0x491648u;
label_491648:
    // 0x491648: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x491648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_49164c:
    // 0x49164c: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x49164cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_491650:
    // 0x491650: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x491650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_491654:
    // 0x491654: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x491654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_491658:
    // 0x491658: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_49165c:
    // 0x49165c: 0x32c40002  andi        $a0, $s6, 0x2
    ctx->pc = 0x49165cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_491660:
    // 0x491660: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x491660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_491664:
    // 0x491664: 0x32c20004  andi        $v0, $s6, 0x4
    ctx->pc = 0x491664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_491668:
    // 0x491668: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x491668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_49166c:
    // 0x49166c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x49166cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_491670:
    // 0x491670: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_491674:
    // 0x491674: 0x32c40010  andi        $a0, $s6, 0x10
    ctx->pc = 0x491674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_491678:
    // 0x491678: 0x32c20008  andi        $v0, $s6, 0x8
    ctx->pc = 0x491678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_49167c:
    // 0x49167c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x49167cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_491680:
    // 0x491680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_491684:
    // 0x491684: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x491684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_491688:
    // 0x491688: 0x10000002  b           . + 4 + (0x2 << 2)
label_49168c:
    if (ctx->pc == 0x49168Cu) {
        ctx->pc = 0x49168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491688u;
        // 0x49168c: 0x38620018  xori        $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x491690u;
        goto label_491690;
    }
    ctx->pc = 0x491688u;
    {
        const bool branch_taken_0x491688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491688u;
        // 0x49168c: 0x38620018  xori        $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491688) {
            ctx->pc = 0x491694u;
            goto label_491694;
        }
    }
    ctx->pc = 0x491690u;
label_491690:
    // 0x491690: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x491690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_491694:
    // 0x491694: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x491694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_491698:
    // 0x491698: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x491698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_49169c:
    // 0x49169c: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x49169cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_4916a0:
    // 0x4916a0: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x4916a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_4916a4:
    // 0x4916a4: 0x8fab0124  lw          $t3, 0x124($sp)
    ctx->pc = 0x4916a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_4916a8:
    // 0x4916a8: 0x8fb00120  lw          $s0, 0x120($sp)
    ctx->pc = 0x4916a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4916ac:
    // 0x4916ac: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x4916acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4916b0:
    // 0x4916b0: 0xb8880  sll         $s1, $t3, 2
    ctx->pc = 0x4916b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4916b4:
    // 0x4916b4: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x4916b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_4916b8:
    // 0x4916b8: 0xdfac0148  ld          $t4, 0x148($sp)
    ctx->pc = 0x4916b8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_4916bc:
    // 0x4916bc: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x4916bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_4916c0:
    // 0x4916c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4916c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4916c4:
    // 0x4916c4: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x4916c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_4916c8:
    // 0x4916c8: 0xc283e  dsrl32      $a1, $t4, 0
    ctx->pc = 0x4916c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) >> (32 + 0));
label_4916cc:
    // 0x4916cc: 0xc10acae  jal         func_42B2B8
label_4916d0:
    if (ctx->pc == 0x4916D0u) {
        ctx->pc = 0x4916D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4916CCu;
        // 0x4916d0: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4916D4u;
        goto label_4916d4;
    }
    ctx->pc = 0x4916CCu;
    SET_GPR_U32(ctx, 31, 0x4916D4u);
    ctx->pc = 0x4916D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4916CCu;
    // 0x4916d0: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4916CCu, 0x4916D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4916D4u;
label_4916d4:
    // 0x4916d4: 0x7bae0170  lq          $t6, 0x170($sp)
    ctx->pc = 0x4916d4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4916d8:
    // 0x4916d8: 0x3b11821  addu        $v1, $sp, $s1
    ctx->pc = 0x4916d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_4916dc:
    // 0x4916dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4916dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4916e0:
    // 0x4916e0: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_4916e4:
    if (ctx->pc == 0x4916E4u) {
        ctx->pc = 0x4916E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4916E0u;
        // 0x4916e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4916E8u;
        goto label_4916e8;
    }
    ctx->pc = 0x4916E0u;
    {
        const bool branch_taken_0x4916e0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x4916e0) {
            ctx->pc = 0x4916E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4916E0u;
            // 0x4916e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4916E8u;
            goto label_4916e8;
        }
    }
    ctx->pc = 0x4916E8u;
label_4916e8:
    // 0x4916e8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4916e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4916ec:
    // 0x4916ec: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x4916ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_4916f0:
    // 0x4916f0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x4916f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4916f4:
    // 0x4916f4: 0xae001b  divu        $zero, $a1, $t6
    ctx->pc = 0x4916f4u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4916f8:
    // 0x4916f8: 0x2812  mflo        $a1
    ctx->pc = 0x4916f8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_4916fc:
    // 0x4916fc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4916fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_491700:
    // 0x491700: 0xc10b602  jal         func_42D808
label_491704:
    if (ctx->pc == 0x491704u) {
        ctx->pc = 0x491704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491700u;
        // 0x491704: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x491708u;
        goto label_491708;
    }
    ctx->pc = 0x491700u;
    SET_GPR_U32(ctx, 31, 0x491708u);
    ctx->pc = 0x491704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491700u;
    // 0x491704: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x491700u, 0x491708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491708u;
label_491708:
    // 0x491708: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x491708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_49170c:
    // 0x49170c: 0x7bb10220  lq          $s1, 0x220($sp)
    ctx->pc = 0x49170cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_491710:
    // 0x491710: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x491710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_491714:
    // 0x491714: 0x1081bc  dsll32      $s0, $s0, 6
    ctx->pc = 0x491714u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 6));
label_491718:
    // 0x491718: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x491718u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_49171c:
    // 0x49171c: 0x7bb20210  lq          $s2, 0x210($sp)
    ctx->pc = 0x49171cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_491720:
    // 0x491720: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x491720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_491724:
    // 0x491724: 0x7bb00230  lq          $s0, 0x230($sp)
    ctx->pc = 0x491724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_491728:
    // 0x491728: 0x7bb30200  lq          $s3, 0x200($sp)
    ctx->pc = 0x491728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_49172c:
    // 0x49172c: 0x7bb401f0  lq          $s4, 0x1F0($sp)
    ctx->pc = 0x49172cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_491730:
    // 0x491730: 0x7bb501e0  lq          $s5, 0x1E0($sp)
    ctx->pc = 0x491730u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_491734:
    // 0x491734: 0x7bb601d0  lq          $s6, 0x1D0($sp)
    ctx->pc = 0x491734u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_491738:
    // 0x491738: 0x7bb701c0  lq          $s7, 0x1C0($sp)
    ctx->pc = 0x491738u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_49173c:
    // 0x49173c: 0x7bbe01b0  lq          $fp, 0x1B0($sp)
    ctx->pc = 0x49173cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_491740:
    // 0x491740: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x491740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_491744:
    // 0x491744: 0x3e00008  jr          $ra
label_491748:
    if (ctx->pc == 0x491748u) {
        ctx->pc = 0x491748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491744u;
        // 0x491748: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49174Cu;
        goto label_49174c;
    }
    ctx->pc = 0x491744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491744u;
        // 0x491748: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49174Cu;
label_49174c:
    // 0x49174c: 0x0  nop
    ctx->pc = 0x49174cu;
    // NOP
    ctx->pc = 0x491750u;
}
