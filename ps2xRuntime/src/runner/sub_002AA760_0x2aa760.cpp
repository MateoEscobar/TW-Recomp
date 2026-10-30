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

// Function: sub_002AA760
// Address: 0x2aa760 - 0x2aae30
void sub_002AA760_0x2aa760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA760_0x2aa760");
#endif

    switch (ctx->pc) {
        case 0x2aa760u: goto label_2aa760;
        case 0x2aa764u: goto label_2aa764;
        case 0x2aa768u: goto label_2aa768;
        case 0x2aa76cu: goto label_2aa76c;
        case 0x2aa770u: goto label_2aa770;
        case 0x2aa774u: goto label_2aa774;
        case 0x2aa778u: goto label_2aa778;
        case 0x2aa77cu: goto label_2aa77c;
        case 0x2aa780u: goto label_2aa780;
        case 0x2aa784u: goto label_2aa784;
        case 0x2aa788u: goto label_2aa788;
        case 0x2aa78cu: goto label_2aa78c;
        case 0x2aa790u: goto label_2aa790;
        case 0x2aa794u: goto label_2aa794;
        case 0x2aa798u: goto label_2aa798;
        case 0x2aa79cu: goto label_2aa79c;
        case 0x2aa7a0u: goto label_2aa7a0;
        case 0x2aa7a4u: goto label_2aa7a4;
        case 0x2aa7a8u: goto label_2aa7a8;
        case 0x2aa7acu: goto label_2aa7ac;
        case 0x2aa7b0u: goto label_2aa7b0;
        case 0x2aa7b4u: goto label_2aa7b4;
        case 0x2aa7b8u: goto label_2aa7b8;
        case 0x2aa7bcu: goto label_2aa7bc;
        case 0x2aa7c0u: goto label_2aa7c0;
        case 0x2aa7c4u: goto label_2aa7c4;
        case 0x2aa7c8u: goto label_2aa7c8;
        case 0x2aa7ccu: goto label_2aa7cc;
        case 0x2aa7d0u: goto label_2aa7d0;
        case 0x2aa7d4u: goto label_2aa7d4;
        case 0x2aa7d8u: goto label_2aa7d8;
        case 0x2aa7dcu: goto label_2aa7dc;
        case 0x2aa7e0u: goto label_2aa7e0;
        case 0x2aa7e4u: goto label_2aa7e4;
        case 0x2aa7e8u: goto label_2aa7e8;
        case 0x2aa7ecu: goto label_2aa7ec;
        case 0x2aa7f0u: goto label_2aa7f0;
        case 0x2aa7f4u: goto label_2aa7f4;
        case 0x2aa7f8u: goto label_2aa7f8;
        case 0x2aa7fcu: goto label_2aa7fc;
        case 0x2aa800u: goto label_2aa800;
        case 0x2aa804u: goto label_2aa804;
        case 0x2aa808u: goto label_2aa808;
        case 0x2aa80cu: goto label_2aa80c;
        case 0x2aa810u: goto label_2aa810;
        case 0x2aa814u: goto label_2aa814;
        case 0x2aa818u: goto label_2aa818;
        case 0x2aa81cu: goto label_2aa81c;
        case 0x2aa820u: goto label_2aa820;
        case 0x2aa824u: goto label_2aa824;
        case 0x2aa828u: goto label_2aa828;
        case 0x2aa82cu: goto label_2aa82c;
        case 0x2aa830u: goto label_2aa830;
        case 0x2aa834u: goto label_2aa834;
        case 0x2aa838u: goto label_2aa838;
        case 0x2aa83cu: goto label_2aa83c;
        case 0x2aa840u: goto label_2aa840;
        case 0x2aa844u: goto label_2aa844;
        case 0x2aa848u: goto label_2aa848;
        case 0x2aa84cu: goto label_2aa84c;
        case 0x2aa850u: goto label_2aa850;
        case 0x2aa854u: goto label_2aa854;
        case 0x2aa858u: goto label_2aa858;
        case 0x2aa85cu: goto label_2aa85c;
        case 0x2aa860u: goto label_2aa860;
        case 0x2aa864u: goto label_2aa864;
        case 0x2aa868u: goto label_2aa868;
        case 0x2aa86cu: goto label_2aa86c;
        case 0x2aa870u: goto label_2aa870;
        case 0x2aa874u: goto label_2aa874;
        case 0x2aa878u: goto label_2aa878;
        case 0x2aa87cu: goto label_2aa87c;
        case 0x2aa880u: goto label_2aa880;
        case 0x2aa884u: goto label_2aa884;
        case 0x2aa888u: goto label_2aa888;
        case 0x2aa88cu: goto label_2aa88c;
        case 0x2aa890u: goto label_2aa890;
        case 0x2aa894u: goto label_2aa894;
        case 0x2aa898u: goto label_2aa898;
        case 0x2aa89cu: goto label_2aa89c;
        case 0x2aa8a0u: goto label_2aa8a0;
        case 0x2aa8a4u: goto label_2aa8a4;
        case 0x2aa8a8u: goto label_2aa8a8;
        case 0x2aa8acu: goto label_2aa8ac;
        case 0x2aa8b0u: goto label_2aa8b0;
        case 0x2aa8b4u: goto label_2aa8b4;
        case 0x2aa8b8u: goto label_2aa8b8;
        case 0x2aa8bcu: goto label_2aa8bc;
        case 0x2aa8c0u: goto label_2aa8c0;
        case 0x2aa8c4u: goto label_2aa8c4;
        case 0x2aa8c8u: goto label_2aa8c8;
        case 0x2aa8ccu: goto label_2aa8cc;
        case 0x2aa8d0u: goto label_2aa8d0;
        case 0x2aa8d4u: goto label_2aa8d4;
        case 0x2aa8d8u: goto label_2aa8d8;
        case 0x2aa8dcu: goto label_2aa8dc;
        case 0x2aa8e0u: goto label_2aa8e0;
        case 0x2aa8e4u: goto label_2aa8e4;
        case 0x2aa8e8u: goto label_2aa8e8;
        case 0x2aa8ecu: goto label_2aa8ec;
        case 0x2aa8f0u: goto label_2aa8f0;
        case 0x2aa8f4u: goto label_2aa8f4;
        case 0x2aa8f8u: goto label_2aa8f8;
        case 0x2aa8fcu: goto label_2aa8fc;
        case 0x2aa900u: goto label_2aa900;
        case 0x2aa904u: goto label_2aa904;
        case 0x2aa908u: goto label_2aa908;
        case 0x2aa90cu: goto label_2aa90c;
        case 0x2aa910u: goto label_2aa910;
        case 0x2aa914u: goto label_2aa914;
        case 0x2aa918u: goto label_2aa918;
        case 0x2aa91cu: goto label_2aa91c;
        case 0x2aa920u: goto label_2aa920;
        case 0x2aa924u: goto label_2aa924;
        case 0x2aa928u: goto label_2aa928;
        case 0x2aa92cu: goto label_2aa92c;
        case 0x2aa930u: goto label_2aa930;
        case 0x2aa934u: goto label_2aa934;
        case 0x2aa938u: goto label_2aa938;
        case 0x2aa93cu: goto label_2aa93c;
        case 0x2aa940u: goto label_2aa940;
        case 0x2aa944u: goto label_2aa944;
        case 0x2aa948u: goto label_2aa948;
        case 0x2aa94cu: goto label_2aa94c;
        case 0x2aa950u: goto label_2aa950;
        case 0x2aa954u: goto label_2aa954;
        case 0x2aa958u: goto label_2aa958;
        case 0x2aa95cu: goto label_2aa95c;
        case 0x2aa960u: goto label_2aa960;
        case 0x2aa964u: goto label_2aa964;
        case 0x2aa968u: goto label_2aa968;
        case 0x2aa96cu: goto label_2aa96c;
        case 0x2aa970u: goto label_2aa970;
        case 0x2aa974u: goto label_2aa974;
        case 0x2aa978u: goto label_2aa978;
        case 0x2aa97cu: goto label_2aa97c;
        case 0x2aa980u: goto label_2aa980;
        case 0x2aa984u: goto label_2aa984;
        case 0x2aa988u: goto label_2aa988;
        case 0x2aa98cu: goto label_2aa98c;
        case 0x2aa990u: goto label_2aa990;
        case 0x2aa994u: goto label_2aa994;
        case 0x2aa998u: goto label_2aa998;
        case 0x2aa99cu: goto label_2aa99c;
        case 0x2aa9a0u: goto label_2aa9a0;
        case 0x2aa9a4u: goto label_2aa9a4;
        case 0x2aa9a8u: goto label_2aa9a8;
        case 0x2aa9acu: goto label_2aa9ac;
        case 0x2aa9b0u: goto label_2aa9b0;
        case 0x2aa9b4u: goto label_2aa9b4;
        case 0x2aa9b8u: goto label_2aa9b8;
        case 0x2aa9bcu: goto label_2aa9bc;
        case 0x2aa9c0u: goto label_2aa9c0;
        case 0x2aa9c4u: goto label_2aa9c4;
        case 0x2aa9c8u: goto label_2aa9c8;
        case 0x2aa9ccu: goto label_2aa9cc;
        case 0x2aa9d0u: goto label_2aa9d0;
        case 0x2aa9d4u: goto label_2aa9d4;
        case 0x2aa9d8u: goto label_2aa9d8;
        case 0x2aa9dcu: goto label_2aa9dc;
        case 0x2aa9e0u: goto label_2aa9e0;
        case 0x2aa9e4u: goto label_2aa9e4;
        case 0x2aa9e8u: goto label_2aa9e8;
        case 0x2aa9ecu: goto label_2aa9ec;
        case 0x2aa9f0u: goto label_2aa9f0;
        case 0x2aa9f4u: goto label_2aa9f4;
        case 0x2aa9f8u: goto label_2aa9f8;
        case 0x2aa9fcu: goto label_2aa9fc;
        case 0x2aaa00u: goto label_2aaa00;
        case 0x2aaa04u: goto label_2aaa04;
        case 0x2aaa08u: goto label_2aaa08;
        case 0x2aaa0cu: goto label_2aaa0c;
        case 0x2aaa10u: goto label_2aaa10;
        case 0x2aaa14u: goto label_2aaa14;
        case 0x2aaa18u: goto label_2aaa18;
        case 0x2aaa1cu: goto label_2aaa1c;
        case 0x2aaa20u: goto label_2aaa20;
        case 0x2aaa24u: goto label_2aaa24;
        case 0x2aaa28u: goto label_2aaa28;
        case 0x2aaa2cu: goto label_2aaa2c;
        case 0x2aaa30u: goto label_2aaa30;
        case 0x2aaa34u: goto label_2aaa34;
        case 0x2aaa38u: goto label_2aaa38;
        case 0x2aaa3cu: goto label_2aaa3c;
        case 0x2aaa40u: goto label_2aaa40;
        case 0x2aaa44u: goto label_2aaa44;
        case 0x2aaa48u: goto label_2aaa48;
        case 0x2aaa4cu: goto label_2aaa4c;
        case 0x2aaa50u: goto label_2aaa50;
        case 0x2aaa54u: goto label_2aaa54;
        case 0x2aaa58u: goto label_2aaa58;
        case 0x2aaa5cu: goto label_2aaa5c;
        case 0x2aaa60u: goto label_2aaa60;
        case 0x2aaa64u: goto label_2aaa64;
        case 0x2aaa68u: goto label_2aaa68;
        case 0x2aaa6cu: goto label_2aaa6c;
        case 0x2aaa70u: goto label_2aaa70;
        case 0x2aaa74u: goto label_2aaa74;
        case 0x2aaa78u: goto label_2aaa78;
        case 0x2aaa7cu: goto label_2aaa7c;
        case 0x2aaa80u: goto label_2aaa80;
        case 0x2aaa84u: goto label_2aaa84;
        case 0x2aaa88u: goto label_2aaa88;
        case 0x2aaa8cu: goto label_2aaa8c;
        case 0x2aaa90u: goto label_2aaa90;
        case 0x2aaa94u: goto label_2aaa94;
        case 0x2aaa98u: goto label_2aaa98;
        case 0x2aaa9cu: goto label_2aaa9c;
        case 0x2aaaa0u: goto label_2aaaa0;
        case 0x2aaaa4u: goto label_2aaaa4;
        case 0x2aaaa8u: goto label_2aaaa8;
        case 0x2aaaacu: goto label_2aaaac;
        case 0x2aaab0u: goto label_2aaab0;
        case 0x2aaab4u: goto label_2aaab4;
        case 0x2aaab8u: goto label_2aaab8;
        case 0x2aaabcu: goto label_2aaabc;
        case 0x2aaac0u: goto label_2aaac0;
        case 0x2aaac4u: goto label_2aaac4;
        case 0x2aaac8u: goto label_2aaac8;
        case 0x2aaaccu: goto label_2aaacc;
        case 0x2aaad0u: goto label_2aaad0;
        case 0x2aaad4u: goto label_2aaad4;
        case 0x2aaad8u: goto label_2aaad8;
        case 0x2aaadcu: goto label_2aaadc;
        case 0x2aaae0u: goto label_2aaae0;
        case 0x2aaae4u: goto label_2aaae4;
        case 0x2aaae8u: goto label_2aaae8;
        case 0x2aaaecu: goto label_2aaaec;
        case 0x2aaaf0u: goto label_2aaaf0;
        case 0x2aaaf4u: goto label_2aaaf4;
        case 0x2aaaf8u: goto label_2aaaf8;
        case 0x2aaafcu: goto label_2aaafc;
        case 0x2aab00u: goto label_2aab00;
        case 0x2aab04u: goto label_2aab04;
        case 0x2aab08u: goto label_2aab08;
        case 0x2aab0cu: goto label_2aab0c;
        case 0x2aab10u: goto label_2aab10;
        case 0x2aab14u: goto label_2aab14;
        case 0x2aab18u: goto label_2aab18;
        case 0x2aab1cu: goto label_2aab1c;
        case 0x2aab20u: goto label_2aab20;
        case 0x2aab24u: goto label_2aab24;
        case 0x2aab28u: goto label_2aab28;
        case 0x2aab2cu: goto label_2aab2c;
        case 0x2aab30u: goto label_2aab30;
        case 0x2aab34u: goto label_2aab34;
        case 0x2aab38u: goto label_2aab38;
        case 0x2aab3cu: goto label_2aab3c;
        case 0x2aab40u: goto label_2aab40;
        case 0x2aab44u: goto label_2aab44;
        case 0x2aab48u: goto label_2aab48;
        case 0x2aab4cu: goto label_2aab4c;
        case 0x2aab50u: goto label_2aab50;
        case 0x2aab54u: goto label_2aab54;
        case 0x2aab58u: goto label_2aab58;
        case 0x2aab5cu: goto label_2aab5c;
        case 0x2aab60u: goto label_2aab60;
        case 0x2aab64u: goto label_2aab64;
        case 0x2aab68u: goto label_2aab68;
        case 0x2aab6cu: goto label_2aab6c;
        case 0x2aab70u: goto label_2aab70;
        case 0x2aab74u: goto label_2aab74;
        case 0x2aab78u: goto label_2aab78;
        case 0x2aab7cu: goto label_2aab7c;
        case 0x2aab80u: goto label_2aab80;
        case 0x2aab84u: goto label_2aab84;
        case 0x2aab88u: goto label_2aab88;
        case 0x2aab8cu: goto label_2aab8c;
        case 0x2aab90u: goto label_2aab90;
        case 0x2aab94u: goto label_2aab94;
        case 0x2aab98u: goto label_2aab98;
        case 0x2aab9cu: goto label_2aab9c;
        case 0x2aaba0u: goto label_2aaba0;
        case 0x2aaba4u: goto label_2aaba4;
        case 0x2aaba8u: goto label_2aaba8;
        case 0x2aabacu: goto label_2aabac;
        case 0x2aabb0u: goto label_2aabb0;
        case 0x2aabb4u: goto label_2aabb4;
        case 0x2aabb8u: goto label_2aabb8;
        case 0x2aabbcu: goto label_2aabbc;
        case 0x2aabc0u: goto label_2aabc0;
        case 0x2aabc4u: goto label_2aabc4;
        case 0x2aabc8u: goto label_2aabc8;
        case 0x2aabccu: goto label_2aabcc;
        case 0x2aabd0u: goto label_2aabd0;
        case 0x2aabd4u: goto label_2aabd4;
        case 0x2aabd8u: goto label_2aabd8;
        case 0x2aabdcu: goto label_2aabdc;
        case 0x2aabe0u: goto label_2aabe0;
        case 0x2aabe4u: goto label_2aabe4;
        case 0x2aabe8u: goto label_2aabe8;
        case 0x2aabecu: goto label_2aabec;
        case 0x2aabf0u: goto label_2aabf0;
        case 0x2aabf4u: goto label_2aabf4;
        case 0x2aabf8u: goto label_2aabf8;
        case 0x2aabfcu: goto label_2aabfc;
        case 0x2aac00u: goto label_2aac00;
        case 0x2aac04u: goto label_2aac04;
        case 0x2aac08u: goto label_2aac08;
        case 0x2aac0cu: goto label_2aac0c;
        case 0x2aac10u: goto label_2aac10;
        case 0x2aac14u: goto label_2aac14;
        case 0x2aac18u: goto label_2aac18;
        case 0x2aac1cu: goto label_2aac1c;
        case 0x2aac20u: goto label_2aac20;
        case 0x2aac24u: goto label_2aac24;
        case 0x2aac28u: goto label_2aac28;
        case 0x2aac2cu: goto label_2aac2c;
        case 0x2aac30u: goto label_2aac30;
        case 0x2aac34u: goto label_2aac34;
        case 0x2aac38u: goto label_2aac38;
        case 0x2aac3cu: goto label_2aac3c;
        case 0x2aac40u: goto label_2aac40;
        case 0x2aac44u: goto label_2aac44;
        case 0x2aac48u: goto label_2aac48;
        case 0x2aac4cu: goto label_2aac4c;
        case 0x2aac50u: goto label_2aac50;
        case 0x2aac54u: goto label_2aac54;
        case 0x2aac58u: goto label_2aac58;
        case 0x2aac5cu: goto label_2aac5c;
        case 0x2aac60u: goto label_2aac60;
        case 0x2aac64u: goto label_2aac64;
        case 0x2aac68u: goto label_2aac68;
        case 0x2aac6cu: goto label_2aac6c;
        case 0x2aac70u: goto label_2aac70;
        case 0x2aac74u: goto label_2aac74;
        case 0x2aac78u: goto label_2aac78;
        case 0x2aac7cu: goto label_2aac7c;
        case 0x2aac80u: goto label_2aac80;
        case 0x2aac84u: goto label_2aac84;
        case 0x2aac88u: goto label_2aac88;
        case 0x2aac8cu: goto label_2aac8c;
        case 0x2aac90u: goto label_2aac90;
        case 0x2aac94u: goto label_2aac94;
        case 0x2aac98u: goto label_2aac98;
        case 0x2aac9cu: goto label_2aac9c;
        case 0x2aaca0u: goto label_2aaca0;
        case 0x2aaca4u: goto label_2aaca4;
        case 0x2aaca8u: goto label_2aaca8;
        case 0x2aacacu: goto label_2aacac;
        case 0x2aacb0u: goto label_2aacb0;
        case 0x2aacb4u: goto label_2aacb4;
        case 0x2aacb8u: goto label_2aacb8;
        case 0x2aacbcu: goto label_2aacbc;
        case 0x2aacc0u: goto label_2aacc0;
        case 0x2aacc4u: goto label_2aacc4;
        case 0x2aacc8u: goto label_2aacc8;
        case 0x2aacccu: goto label_2aaccc;
        case 0x2aacd0u: goto label_2aacd0;
        case 0x2aacd4u: goto label_2aacd4;
        case 0x2aacd8u: goto label_2aacd8;
        case 0x2aacdcu: goto label_2aacdc;
        case 0x2aace0u: goto label_2aace0;
        case 0x2aace4u: goto label_2aace4;
        case 0x2aace8u: goto label_2aace8;
        case 0x2aacecu: goto label_2aacec;
        case 0x2aacf0u: goto label_2aacf0;
        case 0x2aacf4u: goto label_2aacf4;
        case 0x2aacf8u: goto label_2aacf8;
        case 0x2aacfcu: goto label_2aacfc;
        case 0x2aad00u: goto label_2aad00;
        case 0x2aad04u: goto label_2aad04;
        case 0x2aad08u: goto label_2aad08;
        case 0x2aad0cu: goto label_2aad0c;
        case 0x2aad10u: goto label_2aad10;
        case 0x2aad14u: goto label_2aad14;
        case 0x2aad18u: goto label_2aad18;
        case 0x2aad1cu: goto label_2aad1c;
        case 0x2aad20u: goto label_2aad20;
        case 0x2aad24u: goto label_2aad24;
        case 0x2aad28u: goto label_2aad28;
        case 0x2aad2cu: goto label_2aad2c;
        case 0x2aad30u: goto label_2aad30;
        case 0x2aad34u: goto label_2aad34;
        case 0x2aad38u: goto label_2aad38;
        case 0x2aad3cu: goto label_2aad3c;
        case 0x2aad40u: goto label_2aad40;
        case 0x2aad44u: goto label_2aad44;
        case 0x2aad48u: goto label_2aad48;
        case 0x2aad4cu: goto label_2aad4c;
        case 0x2aad50u: goto label_2aad50;
        case 0x2aad54u: goto label_2aad54;
        case 0x2aad58u: goto label_2aad58;
        case 0x2aad5cu: goto label_2aad5c;
        case 0x2aad60u: goto label_2aad60;
        case 0x2aad64u: goto label_2aad64;
        case 0x2aad68u: goto label_2aad68;
        case 0x2aad6cu: goto label_2aad6c;
        case 0x2aad70u: goto label_2aad70;
        case 0x2aad74u: goto label_2aad74;
        case 0x2aad78u: goto label_2aad78;
        case 0x2aad7cu: goto label_2aad7c;
        case 0x2aad80u: goto label_2aad80;
        case 0x2aad84u: goto label_2aad84;
        case 0x2aad88u: goto label_2aad88;
        case 0x2aad8cu: goto label_2aad8c;
        case 0x2aad90u: goto label_2aad90;
        case 0x2aad94u: goto label_2aad94;
        case 0x2aad98u: goto label_2aad98;
        case 0x2aad9cu: goto label_2aad9c;
        case 0x2aada0u: goto label_2aada0;
        case 0x2aada4u: goto label_2aada4;
        case 0x2aada8u: goto label_2aada8;
        case 0x2aadacu: goto label_2aadac;
        case 0x2aadb0u: goto label_2aadb0;
        case 0x2aadb4u: goto label_2aadb4;
        case 0x2aadb8u: goto label_2aadb8;
        case 0x2aadbcu: goto label_2aadbc;
        case 0x2aadc0u: goto label_2aadc0;
        case 0x2aadc4u: goto label_2aadc4;
        case 0x2aadc8u: goto label_2aadc8;
        case 0x2aadccu: goto label_2aadcc;
        case 0x2aadd0u: goto label_2aadd0;
        case 0x2aadd4u: goto label_2aadd4;
        case 0x2aadd8u: goto label_2aadd8;
        case 0x2aaddcu: goto label_2aaddc;
        case 0x2aade0u: goto label_2aade0;
        case 0x2aade4u: goto label_2aade4;
        case 0x2aade8u: goto label_2aade8;
        case 0x2aadecu: goto label_2aadec;
        case 0x2aadf0u: goto label_2aadf0;
        case 0x2aadf4u: goto label_2aadf4;
        case 0x2aadf8u: goto label_2aadf8;
        case 0x2aadfcu: goto label_2aadfc;
        case 0x2aae00u: goto label_2aae00;
        case 0x2aae04u: goto label_2aae04;
        case 0x2aae08u: goto label_2aae08;
        case 0x2aae0cu: goto label_2aae0c;
        case 0x2aae10u: goto label_2aae10;
        case 0x2aae14u: goto label_2aae14;
        case 0x2aae18u: goto label_2aae18;
        case 0x2aae1cu: goto label_2aae1c;
        case 0x2aae20u: goto label_2aae20;
        case 0x2aae24u: goto label_2aae24;
        case 0x2aae28u: goto label_2aae28;
        case 0x2aae2cu: goto label_2aae2c;
        default: break;
    }

    ctx->pc = 0x2aa760u;

label_2aa760:
    // 0x2aa760: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2aa760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2aa764:
    // 0x2aa764: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2aa764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2aa768:
    // 0x2aa768: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2aa768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2aa76c:
    // 0x2aa76c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aa76cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aa770:
    // 0x2aa770: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2aa770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_2aa774:
    // 0x2aa774: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2aa774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2aa778:
    // 0x2aa778: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2aa778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2aa77c:
    // 0x2aa77c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2aa77cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa780:
    // 0x2aa780: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2aa780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2aa784:
    // 0x2aa784: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2aa784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2aa788:
    // 0x2aa788: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2aa788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2aa78c:
    // 0x2aa78c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2aa78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2aa790:
    // 0x2aa790: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2aa794:
    // 0x2aa794: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2aa794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2aa798:
    // 0x2aa798: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2aa798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aa79c:
    // 0x2aa79c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2aa79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2aa7a0:
    // 0x2aa7a0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2aa7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2aa7a4:
    // 0x2aa7a4: 0xc0e409a  jal         func_390268
label_2aa7a8:
    if (ctx->pc == 0x2AA7A8u) {
        ctx->pc = 0x2AA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7A4u;
        // 0x2aa7a8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA7ACu;
        goto label_2aa7ac;
    }
    ctx->pc = 0x2AA7A4u;
    SET_GPR_U32(ctx, 31, 0x2AA7ACu);
    ctx->pc = 0x2AA7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA7A4u;
    // 0x2aa7a8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AA7A4u, 0x2AA7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA7ACu;
label_2aa7ac:
    // 0x2aa7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aa7b0:
    // 0x2aa7b0: 0xc0a34d6  jal         func_28D358
label_2aa7b4:
    if (ctx->pc == 0x2AA7B4u) {
        ctx->pc = 0x2AA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7B0u;
        // 0x2aa7b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA7B8u;
        goto label_2aa7b8;
    }
    ctx->pc = 0x2AA7B0u;
    SET_GPR_U32(ctx, 31, 0x2AA7B8u);
    ctx->pc = 0x2AA7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA7B0u;
    // 0x2aa7b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2AA7B0u, 0x2AA7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA7B8u;
label_2aa7b8:
    // 0x2aa7b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2aa7b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa7bc:
    // 0x2aa7bc: 0x52800017  beql        $s4, $zero, . + 4 + (0x17 << 2)
label_2aa7c0:
    if (ctx->pc == 0x2AA7C0u) {
        ctx->pc = 0x2AA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7BCu;
        // 0x2aa7c0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA7C4u;
        goto label_2aa7c4;
    }
    ctx->pc = 0x2AA7BCu;
    {
        const bool branch_taken_0x2aa7bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa7bc) {
            ctx->pc = 0x2AA7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA7BCu;
            // 0x2aa7c0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA81Cu;
            goto label_2aa81c;
        }
    }
    ctx->pc = 0x2AA7C4u;
label_2aa7c4:
    // 0x2aa7c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2aa7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aa7c8:
    // 0x2aa7c8: 0xc0a3792  jal         func_28DE48
label_2aa7cc:
    if (ctx->pc == 0x2AA7CCu) {
        ctx->pc = 0x2AA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7C8u;
        // 0x2aa7cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA7D0u;
        goto label_2aa7d0;
    }
    ctx->pc = 0x2AA7C8u;
    SET_GPR_U32(ctx, 31, 0x2AA7D0u);
    ctx->pc = 0x2AA7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA7C8u;
    // 0x2aa7cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2AA7C8u, 0x2AA7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA7D0u;
label_2aa7d0:
    // 0x2aa7d0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2aa7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2aa7d4:
    // 0x2aa7d4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2aa7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aa7d8:
    // 0x2aa7d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2aa7dc:
    if (ctx->pc == 0x2AA7DCu) {
        ctx->pc = 0x2AA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7D8u;
        // 0x2aa7dc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA7E0u;
        goto label_2aa7e0;
    }
    ctx->pc = 0x2AA7D8u;
    {
        const bool branch_taken_0x2aa7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa7d8) {
            ctx->pc = 0x2AA7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA7D8u;
            // 0x2aa7dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA7E0u;
            goto label_2aa7e0;
        }
    }
    ctx->pc = 0x2AA7E0u;
label_2aa7e0:
    // 0x2aa7e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2aa7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2aa7e4:
    // 0x2aa7e4: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x2aa7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2aa7e8:
    // 0x2aa7e8: 0x2c5e0001  sltiu       $fp, $v0, 0x1
    ctx->pc = 0x2aa7e8u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2aa7ec:
    // 0x2aa7ec: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2aa7ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2aa7f0:
    // 0x2aa7f0: 0x1010  mfhi        $v0
    ctx->pc = 0x2aa7f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2aa7f4:
    // 0x2aa7f4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2aa7f8:
    if (ctx->pc == 0x2AA7F8u) {
        ctx->pc = 0x2AA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7F4u;
        // 0x2aa7f8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA7FCu;
        goto label_2aa7fc;
    }
    ctx->pc = 0x2AA7F4u;
    {
        const bool branch_taken_0x2aa7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa7f4) {
            ctx->pc = 0x2AA7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA7F4u;
            // 0x2aa7f8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA81Cu;
            goto label_2aa81c;
        }
    }
    ctx->pc = 0x2AA7FCu;
label_2aa7fc:
    // 0x2aa7fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2aa800:
    // 0x2aa800: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aa804:
    // 0x2aa804: 0x26240284  addiu       $a0, $s1, 0x284
    ctx->pc = 0x2aa804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
label_2aa808:
    // 0x2aa808: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2aa808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aa80c:
    // 0x2aa80c: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2aa80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2aa810:
    // 0x2aa810: 0xc0a6800  jal         func_29A000
label_2aa814:
    if (ctx->pc == 0x2AA814u) {
        ctx->pc = 0x2AA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA810u;
        // 0x2aa814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA818u;
        goto label_2aa818;
    }
    ctx->pc = 0x2AA810u;
    SET_GPR_U32(ctx, 31, 0x2AA818u);
    ctx->pc = 0x2AA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA810u;
    // 0x2aa814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2AA810u, 0x2AA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA818u;
label_2aa818:
    // 0x2aa818: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2aa818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aa81c:
    // 0x2aa81c: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2aa81cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2aa820:
    // 0x2aa820: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_2aa824:
    if (ctx->pc == 0x2AA824u) {
        ctx->pc = 0x2AA824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA820u;
        // 0x2aa824: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA828u;
        goto label_2aa828;
    }
    ctx->pc = 0x2AA820u;
    {
        const bool branch_taken_0x2aa820 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AA824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA820u;
        // 0x2aa824: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa820) {
            ctx->pc = 0x2AA884u;
            goto label_2aa884;
        }
    }
    ctx->pc = 0x2AA828u;
label_2aa828:
    // 0x2aa828: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2aa828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2aa82c:
    // 0x2aa82c: 0x10a0016c  beqz        $a1, . + 4 + (0x16C << 2)
label_2aa830:
    if (ctx->pc == 0x2AA830u) {
        ctx->pc = 0x2AA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA82Cu;
        // 0x2aa830: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA834u;
        goto label_2aa834;
    }
    ctx->pc = 0x2AA82Cu;
    {
        const bool branch_taken_0x2aa82c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA82Cu;
        // 0x2aa830: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa82c) {
            ctx->pc = 0x2AADE0u;
            goto label_2aade0;
        }
    }
    ctx->pc = 0x2AA834u;
label_2aa834:
    // 0x2aa834: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2aa834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2aa838:
    // 0x2aa838: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2aa838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2aa83c:
    // 0x2aa83c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2aa83cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2aa840:
    // 0x2aa840: 0x10600168  beqz        $v1, . + 4 + (0x168 << 2)
label_2aa844:
    if (ctx->pc == 0x2AA844u) {
        ctx->pc = 0x2AA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA840u;
        // 0x2aa844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA848u;
        goto label_2aa848;
    }
    ctx->pc = 0x2AA840u;
    {
        const bool branch_taken_0x2aa840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA840u;
        // 0x2aa844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa840) {
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AA848u;
label_2aa848:
    // 0x2aa848: 0x57d30166  bnel        $fp, $s3, . + 4 + (0x166 << 2)
label_2aa84c:
    if (ctx->pc == 0x2AA84Cu) {
        ctx->pc = 0x2AA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA848u;
        // 0x2aa84c: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA850u;
        goto label_2aa850;
    }
    ctx->pc = 0x2AA848u;
    {
        const bool branch_taken_0x2aa848 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 19));
        if (branch_taken_0x2aa848) {
            ctx->pc = 0x2AA84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA848u;
            // 0x2aa84c: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AA850u;
label_2aa850:
    // 0x2aa850: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2aa850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2aa854:
    // 0x2aa854: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2aa858:
    // 0x2aa858: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aa85c:
    // 0x2aa85c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2aa85cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2aa860:
    // 0x2aa860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa864:
    // 0x2aa864: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2aa864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2aa868:
    // 0x2aa868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aa868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa86c:
    // 0x2aa86c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa870:
    // 0x2aa870: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aa870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa874:
    // 0x2aa874: 0xc088178  jal         func_2205E0
label_2aa878:
    if (ctx->pc == 0x2AA878u) {
        ctx->pc = 0x2AA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA874u;
        // 0x2aa878: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA87Cu;
        goto label_2aa87c;
    }
    ctx->pc = 0x2AA874u;
    SET_GPR_U32(ctx, 31, 0x2AA87Cu);
    ctx->pc = 0x2AA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA874u;
    // 0x2aa878: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AA874u, 0x2AA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA87Cu;
label_2aa87c:
    // 0x2aa87c: 0x10000158  b           . + 4 + (0x158 << 2)
label_2aa880:
    if (ctx->pc == 0x2AA880u) {
        ctx->pc = 0x2AA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA87Cu;
        // 0x2aa880: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA884u;
        goto label_2aa884;
    }
    ctx->pc = 0x2AA87Cu;
    {
        const bool branch_taken_0x2aa87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA87Cu;
        // 0x2aa880: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa87c) {
            ctx->pc = 0x2AADE0u;
            goto label_2aade0;
        }
    }
    ctx->pc = 0x2AA884u;
label_2aa884:
    // 0x2aa884: 0xc08a08a  jal         func_228228
label_2aa888:
    if (ctx->pc == 0x2AA888u) {
        ctx->pc = 0x2AA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA884u;
        // 0x2aa888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA88Cu;
        goto label_2aa88c;
    }
    ctx->pc = 0x2AA884u;
    SET_GPR_U32(ctx, 31, 0x2AA88Cu);
    ctx->pc = 0x2AA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA884u;
    // 0x2aa888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2AA884u, 0x2AA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA88Cu;
label_2aa88c:
    // 0x2aa88c: 0x14530008  bne         $v0, $s3, . + 4 + (0x8 << 2)
label_2aa890:
    if (ctx->pc == 0x2AA890u) {
        ctx->pc = 0x2AA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA88Cu;
        // 0x2aa890: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA894u;
        goto label_2aa894;
    }
    ctx->pc = 0x2AA88Cu;
    {
        const bool branch_taken_0x2aa88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2AA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA88Cu;
        // 0x2aa890: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa88c) {
            ctx->pc = 0x2AA8B0u;
            goto label_2aa8b0;
        }
    }
    ctx->pc = 0x2AA894u;
label_2aa894:
    // 0x2aa894: 0xc08a024  jal         func_228090
label_2aa898:
    if (ctx->pc == 0x2AA898u) {
        ctx->pc = 0x2AA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA894u;
        // 0x2aa898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA89Cu;
        goto label_2aa89c;
    }
    ctx->pc = 0x2AA894u;
    SET_GPR_U32(ctx, 31, 0x2AA89Cu);
    ctx->pc = 0x2AA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA894u;
    // 0x2aa898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x2AA894u, 0x2AA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA89Cu;
label_2aa89c:
    // 0x2aa89c: 0x9643001a  lhu         $v1, 0x1A($s2)
    ctx->pc = 0x2aa89cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
label_2aa8a0:
    // 0x2aa8a0: 0xa6530018  sh          $s3, 0x18($s2)
    ctx->pc = 0x2aa8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 19));
label_2aa8a4:
    // 0x2aa8a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2aa8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2aa8a8:
    // 0x2aa8a8: 0x1000014d  b           . + 4 + (0x14D << 2)
label_2aa8ac:
    if (ctx->pc == 0x2AA8ACu) {
        ctx->pc = 0x2AA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8A8u;
        // 0x2aa8ac: 0xa643001a  sh          $v1, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA8B0u;
        goto label_2aa8b0;
    }
    ctx->pc = 0x2AA8A8u;
    {
        const bool branch_taken_0x2aa8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8A8u;
        // 0x2aa8ac: 0xa643001a  sh          $v1, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8a8) {
            ctx->pc = 0x2AADE0u;
            goto label_2aade0;
        }
    }
    ctx->pc = 0x2AA8B0u;
label_2aa8b0:
    // 0x2aa8b0: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2aa8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2aa8b4:
    // 0x2aa8b4: 0x8ea3b734  lw          $v1, -0x48CC($s5)
    ctx->pc = 0x2aa8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
label_2aa8b8:
    // 0x2aa8b8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2aa8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2aa8bc:
    // 0x2aa8bc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2aa8bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2aa8c0:
    // 0x2aa8c0: 0x14400147  bnez        $v0, . + 4 + (0x147 << 2)
label_2aa8c4:
    if (ctx->pc == 0x2AA8C4u) {
        ctx->pc = 0x2AA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8C0u;
        // 0x2aa8c4: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA8C8u;
        goto label_2aa8c8;
    }
    ctx->pc = 0x2AA8C0u;
    {
        const bool branch_taken_0x2aa8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8C0u;
        // 0x2aa8c4: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8c0) {
            ctx->pc = 0x2AADE0u;
            goto label_2aade0;
        }
    }
    ctx->pc = 0x2AA8C8u;
label_2aa8c8:
    // 0x2aa8c8: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2aa8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2aa8cc:
    // 0x2aa8cc: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2aa8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_2aa8d0:
    // 0x2aa8d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa8d4:
    // 0x2aa8d4: 0xc089998  jal         func_226660
label_2aa8d8:
    if (ctx->pc == 0x2AA8D8u) {
        ctx->pc = 0x2AA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8D4u;
        // 0x2aa8d8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA8DCu;
        goto label_2aa8dc;
    }
    ctx->pc = 0x2AA8D4u;
    SET_GPR_U32(ctx, 31, 0x2AA8DCu);
    ctx->pc = 0x2AA8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA8D4u;
    // 0x2aa8d8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2AA8D4u, 0x2AA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA8DCu;
label_2aa8dc:
    // 0x2aa8dc: 0x50530141  beql        $v0, $s3, . + 4 + (0x141 << 2)
label_2aa8e0:
    if (ctx->pc == 0x2AA8E0u) {
        ctx->pc = 0x2AA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8DCu;
        // 0x2aa8e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA8E4u;
        goto label_2aa8e4;
    }
    ctx->pc = 0x2AA8DCu;
    {
        const bool branch_taken_0x2aa8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2aa8dc) {
            ctx->pc = 0x2AA8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA8DCu;
            // 0x2aa8e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AA8E4u;
label_2aa8e4:
    // 0x2aa8e4: 0x528000b4  beql        $s4, $zero, . + 4 + (0xB4 << 2)
label_2aa8e8:
    if (ctx->pc == 0x2AA8E8u) {
        ctx->pc = 0x2AA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8E4u;
        // 0x2aa8e8: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA8ECu;
        goto label_2aa8ec;
    }
    ctx->pc = 0x2AA8E4u;
    {
        const bool branch_taken_0x2aa8e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa8e4) {
            ctx->pc = 0x2AA8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA8E4u;
            // 0x2aa8e8: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABB8u;
            goto label_2aabb8;
        }
    }
    ctx->pc = 0x2AA8ECu;
label_2aa8ec:
    // 0x2aa8ec: 0x86430018  lh          $v1, 0x18($s2)
    ctx->pc = 0x2aa8ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_2aa8f0:
    // 0x2aa8f0: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
label_2aa8f4:
    if (ctx->pc == 0x2AA8F4u) {
        ctx->pc = 0x2AA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8F0u;
        // 0x2aa8f4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA8F8u;
        goto label_2aa8f8;
    }
    ctx->pc = 0x2AA8F0u;
    {
        const bool branch_taken_0x2aa8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8F0u;
        // 0x2aa8f4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8f0) {
            ctx->pc = 0x2AA9F4u;
            goto label_2aa9f4;
        }
    }
    ctx->pc = 0x2AA8F8u;
label_2aa8f8:
    // 0x2aa8f8: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2aa8f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2aa8fc:
    // 0x2aa8fc: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2aa8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2aa900:
    // 0x2aa900: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x2aa900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_2aa904:
    // 0x2aa904: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2aa904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_2aa908:
    // 0x2aa908: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aa90c:
    // 0x2aa90c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2aa90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2aa910:
    // 0x2aa910: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2aa910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2aa914:
    // 0x2aa914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2aa914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2aa918:
    // 0x2aa918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa91c:
    // 0x2aa91c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2aa91cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2aa920:
    // 0x2aa920: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2aa920u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa924:
    // 0x2aa924: 0xc088708  jal         func_221C20
label_2aa928:
    if (ctx->pc == 0x2AA928u) {
        ctx->pc = 0x2AA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA924u;
        // 0x2aa928: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA92Cu;
        goto label_2aa92c;
    }
    ctx->pc = 0x2AA924u;
    SET_GPR_U32(ctx, 31, 0x2AA92Cu);
    ctx->pc = 0x2AA928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA924u;
    // 0x2aa928: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2AA924u, 0x2AA92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA92Cu;
label_2aa92c:
    // 0x2aa92c: 0xc087502  jal         func_21D408
label_2aa930:
    if (ctx->pc == 0x2AA930u) {
        ctx->pc = 0x2AA930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA92Cu;
        // 0x2aa930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA934u;
        goto label_2aa934;
    }
    ctx->pc = 0x2AA92Cu;
    SET_GPR_U32(ctx, 31, 0x2AA934u);
    ctx->pc = 0x2AA930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA92Cu;
    // 0x2aa930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AA92Cu, 0x2AA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA934u;
label_2aa934:
    // 0x2aa934: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2aa934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aa938:
    // 0x2aa938: 0xc0a408c  jal         func_290230
label_2aa93c:
    if (ctx->pc == 0x2AA93Cu) {
        ctx->pc = 0x2AA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA938u;
        // 0x2aa93c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA940u;
        goto label_2aa940;
    }
    ctx->pc = 0x2AA938u;
    SET_GPR_U32(ctx, 31, 0x2AA940u);
    ctx->pc = 0x2AA93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA938u;
    // 0x2aa93c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2AA938u, 0x2AA940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA940u;
label_2aa940:
    // 0x2aa940: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2aa944:
    if (ctx->pc == 0x2AA944u) {
        ctx->pc = 0x2AA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA940u;
        // 0x2aa944: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA948u;
        goto label_2aa948;
    }
    ctx->pc = 0x2AA940u;
    {
        const bool branch_taken_0x2aa940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA940u;
        // 0x2aa944: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa940) {
            ctx->pc = 0x2AA9B4u;
            goto label_2aa9b4;
        }
    }
    ctx->pc = 0x2AA948u;
label_2aa948:
    // 0x2aa948: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2aa948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aa94c:
    // 0x2aa94c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2aa94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2aa950:
    // 0x2aa950: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2aa950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2aa954:
    // 0x2aa954: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_2aa958:
    if (ctx->pc == 0x2AA958u) {
        ctx->pc = 0x2AA95Cu;
        goto label_2aa95c;
    }
    ctx->pc = 0x2AA954u;
    {
        const bool branch_taken_0x2aa954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2aa954) {
            ctx->pc = 0x2AA9B4u;
            goto label_2aa9b4;
        }
    }
    ctx->pc = 0x2AA95Cu;
label_2aa95c:
    // 0x2aa95c: 0x822203b8  lb          $v0, 0x3B8($s1)
    ctx->pc = 0x2aa95cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 952)));
label_2aa960:
    // 0x2aa960: 0x14530014  bne         $v0, $s3, . + 4 + (0x14 << 2)
label_2aa964:
    if (ctx->pc == 0x2AA964u) {
        ctx->pc = 0x2AA968u;
        goto label_2aa968;
    }
    ctx->pc = 0x2AA960u;
    {
        const bool branch_taken_0x2aa960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2aa960) {
            ctx->pc = 0x2AA9B4u;
            goto label_2aa9b4;
        }
    }
    ctx->pc = 0x2AA968u;
label_2aa968:
    // 0x2aa968: 0xc0a447e  jal         func_2911F8
label_2aa96c:
    if (ctx->pc == 0x2AA96Cu) {
        ctx->pc = 0x2AA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA968u;
        // 0x2aa96c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA970u;
        goto label_2aa970;
    }
    ctx->pc = 0x2AA968u;
    SET_GPR_U32(ctx, 31, 0x2AA970u);
    ctx->pc = 0x2AA96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA968u;
    // 0x2aa96c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911F8u, 0x2AA968u, 0x2AA970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA970u;
label_2aa970:
    // 0x2aa970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aa970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa974:
    // 0x2aa974: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2aa978:
    if (ctx->pc == 0x2AA978u) {
        ctx->pc = 0x2AA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA974u;
        // 0x2aa978: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA97Cu;
        goto label_2aa97c;
    }
    ctx->pc = 0x2AA974u;
    {
        const bool branch_taken_0x2aa974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA974u;
        // 0x2aa978: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa974) {
            ctx->pc = 0x2AA9B0u;
            goto label_2aa9b0;
        }
    }
    ctx->pc = 0x2AA97Cu;
label_2aa97c:
    // 0x2aa97c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2aa97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2aa980:
    // 0x2aa980: 0xc0cd4ee  jal         func_3353B8
label_2aa984:
    if (ctx->pc == 0x2AA984u) {
        ctx->pc = 0x2AA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA980u;
        // 0x2aa984: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA988u;
        goto label_2aa988;
    }
    ctx->pc = 0x2AA980u;
    SET_GPR_U32(ctx, 31, 0x2AA988u);
    ctx->pc = 0x2AA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA980u;
    // 0x2aa984: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2AA980u, 0x2AA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA988u;
label_2aa988:
    // 0x2aa988: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2aa988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2aa98c:
    // 0x2aa98c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2aa990:
    if (ctx->pc == 0x2AA990u) {
        ctx->pc = 0x2AA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA98Cu;
        // 0x2aa990: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA994u;
        goto label_2aa994;
    }
    ctx->pc = 0x2AA98Cu;
    {
        const bool branch_taken_0x2aa98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA98Cu;
        // 0x2aa990: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa98c) {
            ctx->pc = 0x2AA9B4u;
            goto label_2aa9b4;
        }
    }
    ctx->pc = 0x2AA994u;
label_2aa994:
    // 0x2aa994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa998:
    // 0x2aa998: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2aa998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aa99c:
    // 0x2aa99c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2aa99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2aa9a0:
    // 0x2aa9a0: 0xc0891de  jal         func_224778
label_2aa9a4:
    if (ctx->pc == 0x2AA9A4u) {
        ctx->pc = 0x2AA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9A0u;
        // 0x2aa9a4: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA9A8u;
        goto label_2aa9a8;
    }
    ctx->pc = 0x2AA9A0u;
    SET_GPR_U32(ctx, 31, 0x2AA9A8u);
    ctx->pc = 0x2AA9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA9A0u;
    // 0x2aa9a4: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2AA9A0u, 0x2AA9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA9A8u;
label_2aa9a8:
    // 0x2aa9a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2aa9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2aa9ac:
    // 0x2aa9ac: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x2aa9acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_2aa9b0:
    // 0x2aa9b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2aa9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa9b4:
    // 0x2aa9b4: 0x16b00009  bne         $s5, $s0, . + 4 + (0x9 << 2)
label_2aa9b8:
    if (ctx->pc == 0x2AA9B8u) {
        ctx->pc = 0x2AA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9B4u;
        // 0x2aa9b8: 0x8ec4b734  lw          $a0, -0x48CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA9BCu;
        goto label_2aa9bc;
    }
    ctx->pc = 0x2AA9B4u;
    {
        const bool branch_taken_0x2aa9b4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x2AA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9B4u;
        // 0x2aa9b8: 0x8ec4b734  lw          $a0, -0x48CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9b4) {
            ctx->pc = 0x2AA9DCu;
            goto label_2aa9dc;
        }
    }
    ctx->pc = 0x2AA9BCu;
label_2aa9bc:
    // 0x2aa9bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2aa9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aa9c0:
    // 0x2aa9c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2aa9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aa9c4:
    // 0x2aa9c4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2aa9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2aa9c8:
    // 0x2aa9c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aa9cc:
    // 0x2aa9cc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2aa9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2aa9d0:
    // 0x2aa9d0: 0xc0a3892  jal         func_28E248
label_2aa9d4:
    if (ctx->pc == 0x2AA9D4u) {
        ctx->pc = 0x2AA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9D0u;
        // 0x2aa9d4: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA9D8u;
        goto label_2aa9d8;
    }
    ctx->pc = 0x2AA9D0u;
    SET_GPR_U32(ctx, 31, 0x2AA9D8u);
    ctx->pc = 0x2AA9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA9D0u;
    // 0x2aa9d4: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2AA9D0u, 0x2AA9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA9D8u;
label_2aa9d8:
    // 0x2aa9d8: 0x8ec4b734  lw          $a0, -0x48CC($s6)
    ctx->pc = 0x2aa9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
label_2aa9dc:
    // 0x2aa9dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa9e0:
    // 0x2aa9e0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2aa9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2aa9e4:
    // 0x2aa9e4: 0xa6500018  sh          $s0, 0x18($s2)
    ctx->pc = 0x2aa9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 16));
label_2aa9e8:
    // 0x2aa9e8: 0x246300c8  addiu       $v1, $v1, 0xC8
    ctx->pc = 0x2aa9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
label_2aa9ec:
    // 0x2aa9ec: 0x100000fd  b           . + 4 + (0xFD << 2)
label_2aa9f0:
    if (ctx->pc == 0x2AA9F0u) {
        ctx->pc = 0x2AA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9ECu;
        // 0x2aa9f0: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA9F4u;
        goto label_2aa9f4;
    }
    ctx->pc = 0x2AA9ECu;
    {
        const bool branch_taken_0x2aa9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9ECu;
        // 0x2aa9f0: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9ec) {
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AA9F4u;
label_2aa9f4:
    // 0x2aa9f4: 0x147300fb  bne         $v1, $s3, . + 4 + (0xFB << 2)
label_2aa9f8:
    if (ctx->pc == 0x2AA9F8u) {
        ctx->pc = 0x2AA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9F4u;
        // 0x2aa9f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA9FCu;
        goto label_2aa9fc;
    }
    ctx->pc = 0x2AA9F4u;
    {
        const bool branch_taken_0x2aa9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2AA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9F4u;
        // 0x2aa9f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9f4) {
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AA9FCu;
label_2aa9fc:
    // 0x2aa9fc: 0x828201b0  lb          $v0, 0x1B0($s4)
    ctx->pc = 0x2aa9fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
label_2aaa00:
    // 0x2aaa00: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2aaa00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2aaa04:
    // 0x2aaa04: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
label_2aaa08:
    if (ctx->pc == 0x2AAA08u) {
        ctx->pc = 0x2AAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA04u;
        // 0x2aaa08: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAA0Cu;
        goto label_2aaa0c;
    }
    ctx->pc = 0x2AAA04u;
    {
        const bool branch_taken_0x2aaa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaa04) {
            ctx->pc = 0x2AAA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAA04u;
            // 0x2aaa08: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABB8u;
            goto label_2aabb8;
        }
    }
    ctx->pc = 0x2AAA0Cu;
label_2aaa0c:
    // 0x2aaa0c: 0x8650001a  lh          $s0, 0x1A($s2)
    ctx->pc = 0x2aaa0cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
label_2aaa10:
    // 0x2aaa10: 0x56030069  bnel        $s0, $v1, . + 4 + (0x69 << 2)
label_2aaa14:
    if (ctx->pc == 0x2AAA14u) {
        ctx->pc = 0x2AAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA10u;
        // 0x2aaa14: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAA18u;
        goto label_2aaa18;
    }
    ctx->pc = 0x2AAA10u;
    {
        const bool branch_taken_0x2aaa10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2aaa10) {
            ctx->pc = 0x2AAA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAA10u;
            // 0x2aaa14: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABB8u;
            goto label_2aabb8;
        }
    }
    ctx->pc = 0x2AAA18u;
label_2aaa18:
    // 0x2aaa18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2aaa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aaa1c:
    // 0x2aaa1c: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x2aaa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_2aaa20:
    // 0x2aaa20: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2aaa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2aaa24:
    // 0x2aaa24: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
label_2aaa28:
    if (ctx->pc == 0x2AAA28u) {
        ctx->pc = 0x2AAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA24u;
        // 0x2aaa28: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAA2Cu;
        goto label_2aaa2c;
    }
    ctx->pc = 0x2AAA24u;
    {
        const bool branch_taken_0x2aaa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaa24) {
            ctx->pc = 0x2AAA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAA24u;
            // 0x2aaa28: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABB8u;
            goto label_2aabb8;
        }
    }
    ctx->pc = 0x2AAA2Cu;
label_2aaa2c:
    // 0x2aaa2c: 0xc088bbc  jal         func_222EF0
label_2aaa30:
    if (ctx->pc == 0x2AAA30u) {
        ctx->pc = 0x2AAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA2Cu;
        // 0x2aaa30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAA34u;
        goto label_2aaa34;
    }
    ctx->pc = 0x2AAA2Cu;
    SET_GPR_U32(ctx, 31, 0x2AAA34u);
    ctx->pc = 0x2AAA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAA2Cu;
    // 0x2aaa30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2AAA2Cu, 0x2AAA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA34u;
label_2aaa34:
    // 0x2aaa34: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2aaa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2aaa38:
    // 0x2aaa38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aaa38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2aaa3c:
    // 0x2aaa3c: 0x0  nop
    ctx->pc = 0x2aaa3cu;
    // NOP
label_2aaa40:
    // 0x2aaa40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2aaa40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2aaa44:
    // 0x2aaa44: 0x0  nop
    ctx->pc = 0x2aaa44u;
    // NOP
label_2aaa48:
    // 0x2aaa48: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
label_2aaa4c:
    if (ctx->pc == 0x2AAA4Cu) {
        ctx->pc = 0x2AAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA48u;
        // 0x2aaa4c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAA50u;
        goto label_2aaa50;
    }
    ctx->pc = 0x2AAA48u;
    {
        const bool branch_taken_0x2aaa48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA48u;
        // 0x2aaa4c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa48) {
            ctx->pc = 0x2AABB4u;
            goto label_2aabb4;
        }
    }
    ctx->pc = 0x2AAA50u;
label_2aaa50:
    // 0x2aaa50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aaa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aaa54:
    // 0x2aaa54: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2aaa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2aaa58:
    // 0x2aaa58: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2aaa58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aaa5c:
    // 0x2aaa5c: 0xc1073e0  jal         func_41CF80
label_2aaa60:
    if (ctx->pc == 0x2AAA60u) {
        ctx->pc = 0x2AAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA5Cu;
        // 0x2aaa60: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAA64u;
        goto label_2aaa64;
    }
    ctx->pc = 0x2AAA5Cu;
    SET_GPR_U32(ctx, 31, 0x2AAA64u);
    ctx->pc = 0x2AAA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAA5Cu;
    // 0x2aaa60: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF80u, 0x2AAA5Cu, 0x2AAA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA64u;
label_2aaa64:
    // 0x2aaa64: 0x54500054  bnel        $v0, $s0, . + 4 + (0x54 << 2)
label_2aaa68:
    if (ctx->pc == 0x2AAA68u) {
        ctx->pc = 0x2AAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA64u;
        // 0x2aaa68: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAA6Cu;
        goto label_2aaa6c;
    }
    ctx->pc = 0x2AAA64u;
    {
        const bool branch_taken_0x2aaa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2aaa64) {
            ctx->pc = 0x2AAA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAA64u;
            // 0x2aaa68: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABB8u;
            goto label_2aabb8;
        }
    }
    ctx->pc = 0x2AAA6Cu;
label_2aaa6c:
    // 0x2aaa6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aaa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aaa70:
    // 0x2aaa70: 0xc087502  jal         func_21D408
label_2aaa74:
    if (ctx->pc == 0x2AAA74u) {
        ctx->pc = 0x2AAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA70u;
        // 0x2aaa74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAA78u;
        goto label_2aaa78;
    }
    ctx->pc = 0x2AAA70u;
    SET_GPR_U32(ctx, 31, 0x2AAA78u);
    ctx->pc = 0x2AAA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAA70u;
    // 0x2aaa74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AAA70u, 0x2AAA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA78u;
label_2aaa78:
    // 0x2aaa78: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2aaa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2aaa7c:
    // 0x2aaa7c: 0x8c6405f4  lw          $a0, 0x5F4($v1)
    ctx->pc = 0x2aaa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
label_2aaa80:
    // 0x2aaa80: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2aaa84:
    if (ctx->pc == 0x2AAA84u) {
        ctx->pc = 0x2AAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA80u;
        // 0x2aaa84: 0x8ea2b734  lw          $v0, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAA88u;
        goto label_2aaa88;
    }
    ctx->pc = 0x2AAA80u;
    {
        const bool branch_taken_0x2aaa80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA80u;
        // 0x2aaa84: 0x8ea2b734  lw          $v0, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa80) {
            ctx->pc = 0x2AAAA0u;
            goto label_2aaaa0;
        }
    }
    ctx->pc = 0x2AAA88u;
label_2aaa88:
    // 0x2aaa88: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2aaa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2aaa8c:
    // 0x2aaa8c: 0x24027530  addiu       $v0, $zero, 0x7530
    ctx->pc = 0x2aaa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
label_2aaa90:
    // 0x2aaa90: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2aaa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2aaa94:
    // 0x2aaa94: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2aaa94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2aaa98:
    // 0x2aaa98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2aaa9c:
    if (ctx->pc == 0x2AAA9Cu) {
        ctx->pc = 0x2AAA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA98u;
        // 0x2aaa9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAAA0u;
        goto label_2aaaa0;
    }
    ctx->pc = 0x2AAA98u;
    {
        const bool branch_taken_0x2aaa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA98u;
        // 0x2aaa9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa98) {
            ctx->pc = 0x2AAAA8u;
            goto label_2aaaa8;
        }
    }
    ctx->pc = 0x2AAAA0u;
label_2aaaa0:
    // 0x2aaaa0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2aaaa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aaaa4:
    // 0x2aaaa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aaaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aaaa8:
    // 0x2aaaa8: 0x56620043  bnel        $s3, $v0, . + 4 + (0x43 << 2)
label_2aaaac:
    if (ctx->pc == 0x2AAAACu) {
        ctx->pc = 0x2AAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAA8u;
        // 0x2aaaac: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAAB0u;
        goto label_2aaab0;
    }
    ctx->pc = 0x2AAAA8u;
    {
        const bool branch_taken_0x2aaaa8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aaaa8) {
            ctx->pc = 0x2AAAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAAA8u;
            // 0x2aaaac: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABB8u;
            goto label_2aabb8;
        }
    }
    ctx->pc = 0x2AAAB0u;
label_2aaab0:
    // 0x2aaab0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2aaab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2aaab4:
    // 0x2aaab4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2aaab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2aaab8:
    // 0x2aaab8: 0xc0cd4ee  jal         func_3353B8
label_2aaabc:
    if (ctx->pc == 0x2AAABCu) {
        ctx->pc = 0x2AAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAB8u;
        // 0x2aaabc: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAAC0u;
        goto label_2aaac0;
    }
    ctx->pc = 0x2AAAB8u;
    SET_GPR_U32(ctx, 31, 0x2AAAC0u);
    ctx->pc = 0x2AAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAAB8u;
    // 0x2aaabc: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2AAAB8u, 0x2AAAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAAC0u;
label_2aaac0:
    // 0x2aaac0: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x2aaac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2aaac4:
    // 0x2aaac4: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_2aaac8:
    if (ctx->pc == 0x2AAAC8u) {
        ctx->pc = 0x2AAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAC4u;
        // 0x2aaac8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAACCu;
        goto label_2aaacc;
    }
    ctx->pc = 0x2AAAC4u;
    {
        const bool branch_taken_0x2aaac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAC4u;
        // 0x2aaac8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaac4) {
            ctx->pc = 0x2AABB4u;
            goto label_2aabb4;
        }
    }
    ctx->pc = 0x2AAACCu;
label_2aaacc:
    // 0x2aaacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aaaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aaad0:
    // 0x2aaad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aaad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aaad4:
    // 0x2aaad4: 0xc0888a2  jal         func_222288
label_2aaad8:
    if (ctx->pc == 0x2AAAD8u) {
        ctx->pc = 0x2AAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAD4u;
        // 0x2aaad8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAADCu;
        goto label_2aaadc;
    }
    ctx->pc = 0x2AAAD4u;
    SET_GPR_U32(ctx, 31, 0x2AAADCu);
    ctx->pc = 0x2AAAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAAD4u;
    // 0x2aaad8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2AAAD4u, 0x2AAADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAADCu;
label_2aaadc:
    // 0x2aaadc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aaadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aaae0:
    // 0x2aaae0: 0x56130035  bnel        $s0, $s3, . + 4 + (0x35 << 2)
label_2aaae4:
    if (ctx->pc == 0x2AAAE4u) {
        ctx->pc = 0x2AAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAE0u;
        // 0x2aaae4: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAAE8u;
        goto label_2aaae8;
    }
    ctx->pc = 0x2AAAE0u;
    {
        const bool branch_taken_0x2aaae0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x2aaae0) {
            ctx->pc = 0x2AAAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAAE0u;
            // 0x2aaae4: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABB8u;
            goto label_2aabb8;
        }
    }
    ctx->pc = 0x2AAAE8u;
label_2aaae8:
    // 0x2aaae8: 0xc05b2de  jal         func_16CB78
label_2aaaec:
    if (ctx->pc == 0x2AAAECu) {
        ctx->pc = 0x2AAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAE8u;
        // 0x2aaaec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAAF0u;
        goto label_2aaaf0;
    }
    ctx->pc = 0x2AAAE8u;
    SET_GPR_U32(ctx, 31, 0x2AAAF0u);
    ctx->pc = 0x2AAAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAAE8u;
    // 0x2aaaec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB78u, 0x2AAAE8u, 0x2AAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAAF0u;
label_2aaaf0:
    // 0x2aaaf0: 0x54500031  bnel        $v0, $s0, . + 4 + (0x31 << 2)
label_2aaaf4:
    if (ctx->pc == 0x2AAAF4u) {
        ctx->pc = 0x2AAAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAF0u;
        // 0x2aaaf4: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAAF8u;
        goto label_2aaaf8;
    }
    ctx->pc = 0x2AAAF0u;
    {
        const bool branch_taken_0x2aaaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2aaaf0) {
            ctx->pc = 0x2AAAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAAF0u;
            // 0x2aaaf4: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABB8u;
            goto label_2aabb8;
        }
    }
    ctx->pc = 0x2AAAF8u;
label_2aaaf8:
    // 0x2aaaf8: 0x8ec2489c  lw          $v0, 0x489C($s6)
    ctx->pc = 0x2aaaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_2aaafc:
    // 0x2aaafc: 0x90430294  lbu         $v1, 0x294($v0)
    ctx->pc = 0x2aaafcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 660)));
label_2aab00:
    // 0x2aab00: 0x5060002d  beql        $v1, $zero, . + 4 + (0x2D << 2)
label_2aab04:
    if (ctx->pc == 0x2AAB04u) {
        ctx->pc = 0x2AAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB00u;
        // 0x2aab04: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAB08u;
        goto label_2aab08;
    }
    ctx->pc = 0x2AAB00u;
    {
        const bool branch_taken_0x2aab00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aab00) {
            ctx->pc = 0x2AAB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAB00u;
            // 0x2aab04: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABB8u;
            goto label_2aabb8;
        }
    }
    ctx->pc = 0x2AAB08u;
label_2aab08:
    // 0x2aab08: 0xc08bfbc  jal         func_22FEF0
label_2aab0c:
    if (ctx->pc == 0x2AAB0Cu) {
        ctx->pc = 0x2AAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB08u;
        // 0x2aab0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAB10u;
        goto label_2aab10;
    }
    ctx->pc = 0x2AAB08u;
    SET_GPR_U32(ctx, 31, 0x2AAB10u);
    ctx->pc = 0x2AAB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAB08u;
    // 0x2aab0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2AAB08u, 0x2AAB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB10u;
label_2aab10:
    // 0x2aab10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2aab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2aab14:
    // 0x2aab14: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2aab14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2aab18:
    // 0x2aab18: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2aab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2aab1c:
    // 0x2aab1c: 0x40f809  jalr        $v0
label_2aab20:
    if (ctx->pc == 0x2AAB20u) {
        ctx->pc = 0x2AAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB1Cu;
        // 0x2aab20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAB24u;
        goto label_2aab24;
    }
    ctx->pc = 0x2AAB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AAB24u);
        ctx->pc = 0x2AAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB1Cu;
        // 0x2aab20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAB1Cu, 0x2AAB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AAB24u;
label_2aab24:
    // 0x2aab24: 0x8ec4489c  lw          $a0, 0x489C($s6)
    ctx->pc = 0x2aab24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_2aab28:
    // 0x2aab28: 0xc1073fa  jal         func_41CFE8
label_2aab2c:
    if (ctx->pc == 0x2AAB2Cu) {
        ctx->pc = 0x2AAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB28u;
        // 0x2aab2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAB30u;
        goto label_2aab30;
    }
    ctx->pc = 0x2AAB28u;
    SET_GPR_U32(ctx, 31, 0x2AAB30u);
    ctx->pc = 0x2AAB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAB28u;
    // 0x2aab2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFE8u, 0x2AAB28u, 0x2AAB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB30u;
label_2aab30:
    // 0x2aab30: 0xa640001a  sh          $zero, 0x1A($s2)
    ctx->pc = 0x2aab30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
label_2aab34:
    // 0x2aab34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2aab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2aab38:
    // 0x2aab38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2aab38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2aab3c:
    // 0x2aab3c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2aab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2aab40:
    // 0x2aab40: 0x40f809  jalr        $v0
label_2aab44:
    if (ctx->pc == 0x2AAB44u) {
        ctx->pc = 0x2AAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB40u;
        // 0x2aab44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAB48u;
        goto label_2aab48;
    }
    ctx->pc = 0x2AAB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AAB48u);
        ctx->pc = 0x2AAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB40u;
        // 0x2aab44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAB40u, 0x2AAB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AAB48u;
label_2aab48:
    // 0x2aab48: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aab48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2aab4c:
    // 0x2aab4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2aab4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aab50:
    // 0x2aab50: 0x86900092  lh          $s0, 0x92($s4)
    ctx->pc = 0x2aab50u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2aab54:
    // 0x2aab54: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2aab54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2aab58:
    // 0x2aab58: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x2aab58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_2aab5c:
    // 0x2aab5c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2aab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2aab60:
    // 0x2aab60: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2aab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2aab64:
    // 0x2aab64: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2aab64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2aab68:
    // 0x2aab68: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2aab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2aab6c:
    // 0x2aab6c: 0x40f809  jalr        $v0
label_2aab70:
    if (ctx->pc == 0x2AAB70u) {
        ctx->pc = 0x2AAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB6Cu;
        // 0x2aab70: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAB74u;
        goto label_2aab74;
    }
    ctx->pc = 0x2AAB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AAB74u);
        ctx->pc = 0x2AAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB6Cu;
        // 0x2aab70: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAB6Cu, 0x2AAB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AAB74u;
label_2aab74:
    // 0x2aab74: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2aab74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2aab78:
    // 0x2aab78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aab78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aab7c:
    // 0x2aab7c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2aab7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2aab80:
    // 0x2aab80: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2aab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2aab84:
    // 0x2aab84: 0x40f809  jalr        $v0
label_2aab88:
    if (ctx->pc == 0x2AAB88u) {
        ctx->pc = 0x2AAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB84u;
        // 0x2aab88: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAB8Cu;
        goto label_2aab8c;
    }
    ctx->pc = 0x2AAB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AAB8Cu);
        ctx->pc = 0x2AAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB84u;
        // 0x2aab88: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAB84u, 0x2AAB8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AAB8Cu;
label_2aab8c:
    // 0x2aab8c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2aab8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2aab90:
    // 0x2aab90: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2aab90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aab94:
    // 0x2aab94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2aab98:
    // 0x2aab98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aab98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aab9c:
    // 0x2aab9c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2aab9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aaba0:
    // 0x2aaba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aaba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aaba4:
    // 0x2aaba4: 0xc0a9f56  jal         func_2A7D58
label_2aaba8:
    if (ctx->pc == 0x2AABA8u) {
        ctx->pc = 0x2AABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABA4u;
        // 0x2aaba8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AABACu;
        goto label_2aabac;
    }
    ctx->pc = 0x2AABA4u;
    SET_GPR_U32(ctx, 31, 0x2AABACu);
    ctx->pc = 0x2AABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AABA4u;
    // 0x2aaba8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D58u, 0x2AABA4u, 0x2AABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AABACu;
label_2aabac:
    // 0x2aabac: 0x1000008d  b           . + 4 + (0x8D << 2)
label_2aabb0:
    if (ctx->pc == 0x2AABB0u) {
        ctx->pc = 0x2AABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABACu;
        // 0x2aabb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AABB4u;
        goto label_2aabb4;
    }
    ctx->pc = 0x2AABACu;
    {
        const bool branch_taken_0x2aabac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABACu;
        // 0x2aabb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabac) {
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AABB4u;
label_2aabb4:
    // 0x2aabb4: 0xa640001a  sh          $zero, 0x1A($s2)
    ctx->pc = 0x2aabb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
label_2aabb8:
    // 0x2aabb8: 0xc08c716  jal         func_231C58
label_2aabbc:
    if (ctx->pc == 0x2AABBCu) {
        ctx->pc = 0x2AABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABB8u;
        // 0x2aabbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AABC0u;
        goto label_2aabc0;
    }
    ctx->pc = 0x2AABB8u;
    SET_GPR_U32(ctx, 31, 0x2AABC0u);
    ctx->pc = 0x2AABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AABB8u;
    // 0x2aabbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C58u, 0x2AABB8u, 0x2AABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AABC0u;
label_2aabc0:
    // 0x2aabc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2aabc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2aabc4:
    // 0x2aabc4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2aabc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2aabc8:
    // 0x2aabc8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2aabc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2aabcc:
    // 0x2aabcc: 0x40f809  jalr        $v0
label_2aabd0:
    if (ctx->pc == 0x2AABD0u) {
        ctx->pc = 0x2AABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABCCu;
        // 0x2aabd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AABD4u;
        goto label_2aabd4;
    }
    ctx->pc = 0x2AABCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AABD4u);
        ctx->pc = 0x2AABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABCCu;
        // 0x2aabd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AABCCu, 0x2AABD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AABD4u;
label_2aabd4:
    // 0x2aabd4: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x2aabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_2aabd8:
    // 0x2aabd8: 0xc08a200  jal         func_228800
label_2aabdc:
    if (ctx->pc == 0x2AABDCu) {
        ctx->pc = 0x2AABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABD8u;
        // 0x2aabdc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AABE0u;
        goto label_2aabe0;
    }
    ctx->pc = 0x2AABD8u;
    SET_GPR_U32(ctx, 31, 0x2AABE0u);
    ctx->pc = 0x2AABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AABD8u;
    // 0x2aabdc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2AABD8u, 0x2AABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AABE0u;
label_2aabe0:
    // 0x2aabe0: 0x9056011b  lbu         $s6, 0x11B($v0)
    ctx->pc = 0x2aabe0u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2aabe4:
    // 0x2aabe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aabe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aabe8:
    // 0x2aabe8: 0xc105bc2  jal         func_416F08
label_2aabec:
    if (ctx->pc == 0x2AABECu) {
        ctx->pc = 0x2AABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABE8u;
        // 0x2aabec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AABF0u;
        goto label_2aabf0;
    }
    ctx->pc = 0x2AABE8u;
    SET_GPR_U32(ctx, 31, 0x2AABF0u);
    ctx->pc = 0x2AABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AABE8u;
    // 0x2aabec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416F08u, 0x2AABE8u, 0x2AABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AABF0u;
label_2aabf0:
    // 0x2aabf0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2aabf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aabf4:
    // 0x2aabf4: 0x12a00066  beqz        $s5, . + 4 + (0x66 << 2)
label_2aabf8:
    if (ctx->pc == 0x2AABF8u) {
        ctx->pc = 0x2AABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABF4u;
        // 0x2aabf8: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AABFCu;
        goto label_2aabfc;
    }
    ctx->pc = 0x2AABF4u;
    {
        const bool branch_taken_0x2aabf4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABF4u;
        // 0x2aabf8: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabf4) {
            ctx->pc = 0x2AAD90u;
            goto label_2aad90;
        }
    }
    ctx->pc = 0x2AABFCu;
label_2aabfc:
    // 0x2aabfc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2aabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2aac00:
    // 0x2aac00: 0x86f00002  lh          $s0, 0x2($s7)
    ctx->pc = 0x2aac00u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2aac04:
    // 0x2aac04: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2aac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2aac08:
    // 0x2aac08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aac0c:
    // 0x2aac0c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2aac0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2aac10:
    // 0x2aac10: 0xc10587a  jal         func_4161E8
label_2aac14:
    if (ctx->pc == 0x2AAC14u) {
        ctx->pc = 0x2AAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC10u;
        // 0x2aac14: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAC18u;
        goto label_2aac18;
    }
    ctx->pc = 0x2AAC10u;
    SET_GPR_U32(ctx, 31, 0x2AAC18u);
    ctx->pc = 0x2AAC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAC10u;
    // 0x2aac14: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2AAC10u, 0x2AAC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC18u;
label_2aac18:
    // 0x2aac18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aac1c:
    // 0x2aac1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aac1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aac20:
    // 0x2aac20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aac20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aac24:
    // 0x2aac24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aac24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aac28:
    // 0x2aac28: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aac28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aac2c:
    // 0x2aac2c: 0xc09381e  jal         func_24E078
label_2aac30:
    if (ctx->pc == 0x2AAC30u) {
        ctx->pc = 0x2AAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC2Cu;
        // 0x2aac30: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAC34u;
        goto label_2aac34;
    }
    ctx->pc = 0x2AAC2Cu;
    SET_GPR_U32(ctx, 31, 0x2AAC34u);
    ctx->pc = 0x2AAC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAC2Cu;
    // 0x2aac30: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2AAC2Cu, 0x2AAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC34u;
label_2aac34:
    // 0x2aac34: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2aac38:
    if (ctx->pc == 0x2AAC38u) {
        ctx->pc = 0x2AAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC34u;
        // 0x2aac38: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAC3Cu;
        goto label_2aac3c;
    }
    ctx->pc = 0x2AAC34u;
    {
        const bool branch_taken_0x2aac34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aac34) {
            ctx->pc = 0x2AAC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAC34u;
            // 0x2aac38: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAC60u;
            goto label_2aac60;
        }
    }
    ctx->pc = 0x2AAC3Cu;
label_2aac3c:
    // 0x2aac3c: 0xc08bfbc  jal         func_22FEF0
label_2aac40:
    if (ctx->pc == 0x2AAC40u) {
        ctx->pc = 0x2AAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC3Cu;
        // 0x2aac40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAC44u;
        goto label_2aac44;
    }
    ctx->pc = 0x2AAC3Cu;
    SET_GPR_U32(ctx, 31, 0x2AAC44u);
    ctx->pc = 0x2AAC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAC3Cu;
    // 0x2aac40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2AAC3Cu, 0x2AAC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC44u;
label_2aac44:
    // 0x2aac44: 0x3ac2000b  xori        $v0, $s6, 0xB
    ctx->pc = 0x2aac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)11);
label_2aac48:
    // 0x2aac48: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_2aac4c:
    if (ctx->pc == 0x2AAC4Cu) {
        ctx->pc = 0x2AAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC48u;
        // 0x2aac4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAC50u;
        goto label_2aac50;
    }
    ctx->pc = 0x2AAC48u;
    {
        const bool branch_taken_0x2aac48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC48u;
        // 0x2aac4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac48) {
            ctx->pc = 0x2AADB4u;
            goto label_2aadb4;
        }
    }
    ctx->pc = 0x2AAC50u;
label_2aac50:
    // 0x2aac50: 0xc0b530e  jal         func_2D4C38
label_2aac54:
    if (ctx->pc == 0x2AAC54u) {
        ctx->pc = 0x2AAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC50u;
        // 0x2aac54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAC58u;
        goto label_2aac58;
    }
    ctx->pc = 0x2AAC50u;
    SET_GPR_U32(ctx, 31, 0x2AAC58u);
    ctx->pc = 0x2AAC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAC50u;
    // 0x2aac54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C38u, 0x2AAC50u, 0x2AAC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC58u;
label_2aac58:
    // 0x2aac58: 0x10000062  b           . + 4 + (0x62 << 2)
label_2aac5c:
    if (ctx->pc == 0x2AAC5Cu) {
        ctx->pc = 0x2AAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC58u;
        // 0x2aac5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAC60u;
        goto label_2aac60;
    }
    ctx->pc = 0x2AAC58u;
    {
        const bool branch_taken_0x2aac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC58u;
        // 0x2aac5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac58) {
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AAC60u;
label_2aac60:
    // 0x2aac60: 0x17d3000b  bne         $fp, $s3, . + 4 + (0xB << 2)
label_2aac64:
    if (ctx->pc == 0x2AAC64u) {
        ctx->pc = 0x2AAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC60u;
        // 0x2aac64: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAC68u;
        goto label_2aac68;
    }
    ctx->pc = 0x2AAC60u;
    {
        const bool branch_taken_0x2aac60 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 19));
        ctx->pc = 0x2AAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC60u;
        // 0x2aac64: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac60) {
            ctx->pc = 0x2AAC90u;
            goto label_2aac90;
        }
    }
    ctx->pc = 0x2AAC68u;
label_2aac68:
    // 0x2aac68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aac68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2aac6c:
    // 0x2aac6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aac6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aac70:
    // 0x2aac70: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2aac70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2aac74:
    // 0x2aac74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aac78:
    // 0x2aac78: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2aac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2aac7c:
    // 0x2aac7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aac7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aac80:
    // 0x2aac80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2aac80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aac84:
    // 0x2aac84: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aac84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aac88:
    // 0x2aac88: 0xc088178  jal         func_2205E0
label_2aac8c:
    if (ctx->pc == 0x2AAC8Cu) {
        ctx->pc = 0x2AAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC88u;
        // 0x2aac8c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAC90u;
        goto label_2aac90;
    }
    ctx->pc = 0x2AAC88u;
    SET_GPR_U32(ctx, 31, 0x2AAC90u);
    ctx->pc = 0x2AAC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAC88u;
    // 0x2aac8c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AAC88u, 0x2AAC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC90u;
label_2aac90:
    // 0x2aac90: 0xc0a4e54  jal         func_293950
label_2aac94:
    if (ctx->pc == 0x2AAC94u) {
        ctx->pc = 0x2AAC98u;
        goto label_2aac98;
    }
    ctx->pc = 0x2AAC90u;
    SET_GPR_U32(ctx, 31, 0x2AAC98u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2AAC90u, 0x2AAC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC98u;
label_2aac98:
    // 0x2aac98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aac98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aac9c:
    // 0x2aac9c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2aaca0:
    if (ctx->pc == 0x2AACA0u) {
        ctx->pc = 0x2AACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC9Cu;
        // 0x2aaca0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AACA4u;
        goto label_2aaca4;
    }
    ctx->pc = 0x2AAC9Cu;
    {
        const bool branch_taken_0x2aac9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC9Cu;
        // 0x2aaca0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac9c) {
            ctx->pc = 0x2AACC8u;
            goto label_2aacc8;
        }
    }
    ctx->pc = 0x2AACA4u;
label_2aaca4:
    // 0x2aaca4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2aaca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aaca8:
    // 0x2aaca8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2aaca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aacac:
    // 0x2aacac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aacacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aacb0:
    // 0x2aacb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aacb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2aacb4:
    // 0x2aacb4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2aacb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2aacb8:
    // 0x2aacb8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2aacb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2aacbc:
    // 0x2aacbc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2aacbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2aacc0:
    // 0x2aacc0: 0xc0b6a3e  jal         func_2DA8F8
label_2aacc4:
    if (ctx->pc == 0x2AACC4u) {
        ctx->pc = 0x2AACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACC0u;
        // 0x2aacc4: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AACC8u;
        goto label_2aacc8;
    }
    ctx->pc = 0x2AACC0u;
    SET_GPR_U32(ctx, 31, 0x2AACC8u);
    ctx->pc = 0x2AACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AACC0u;
    // 0x2aacc4: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F8u, 0x2AACC0u, 0x2AACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACC8u;
label_2aacc8:
    // 0x2aacc8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2aacc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aaccc:
    // 0x2aaccc: 0xc0a35d6  jal         func_28D758
label_2aacd0:
    if (ctx->pc == 0x2AACD0u) {
        ctx->pc = 0x2AACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACCCu;
        // 0x2aacd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AACD4u;
        goto label_2aacd4;
    }
    ctx->pc = 0x2AACCCu;
    SET_GPR_U32(ctx, 31, 0x2AACD4u);
    ctx->pc = 0x2AACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AACCCu;
    // 0x2aacd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2AACCCu, 0x2AACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACD4u;
label_2aacd4:
    // 0x2aacd4: 0x12800042  beqz        $s4, . + 4 + (0x42 << 2)
label_2aacd8:
    if (ctx->pc == 0x2AACD8u) {
        ctx->pc = 0x2AACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACD4u;
        // 0x2aacd8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AACDCu;
        goto label_2aacdc;
    }
    ctx->pc = 0x2AACD4u;
    {
        const bool branch_taken_0x2aacd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACD4u;
        // 0x2aacd8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacd4) {
            ctx->pc = 0x2AADE0u;
            goto label_2aade0;
        }
    }
    ctx->pc = 0x2AACDCu;
label_2aacdc:
    // 0x2aacdc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2aacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aace0:
    // 0x2aace0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2aace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2aace4:
    // 0x2aace4: 0x1464003f  bne         $v1, $a0, . + 4 + (0x3F << 2)
label_2aace8:
    if (ctx->pc == 0x2AACE8u) {
        ctx->pc = 0x2AACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACE4u;
        // 0x2aace8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AACECu;
        goto label_2aacec;
    }
    ctx->pc = 0x2AACE4u;
    {
        const bool branch_taken_0x2aace4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACE4u;
        // 0x2aace8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aace4) {
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AACECu;
label_2aacec:
    // 0x2aacec: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2aacecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2aacf0:
    // 0x2aacf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aacf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aacf4:
    // 0x2aacf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2aacf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aacf8:
    // 0x2aacf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aacf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aacfc:
    // 0x2aacfc: 0xc0b6750  jal         func_2D9D40
label_2aad00:
    if (ctx->pc == 0x2AAD00u) {
        ctx->pc = 0x2AAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACFCu;
        // 0x2aad00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAD04u;
        goto label_2aad04;
    }
    ctx->pc = 0x2AACFCu;
    SET_GPR_U32(ctx, 31, 0x2AAD04u);
    ctx->pc = 0x2AAD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AACFCu;
    // 0x2aad00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2AACFCu, 0x2AAD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD04u;
label_2aad04:
    // 0x2aad04: 0x14530037  bne         $v0, $s3, . + 4 + (0x37 << 2)
label_2aad08:
    if (ctx->pc == 0x2AAD08u) {
        ctx->pc = 0x2AAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD04u;
        // 0x2aad08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAD0Cu;
        goto label_2aad0c;
    }
    ctx->pc = 0x2AAD04u;
    {
        const bool branch_taken_0x2aad04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2AAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD04u;
        // 0x2aad08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad04) {
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AAD0Cu;
label_2aad0c:
    // 0x2aad0c: 0xc0a367c  jal         func_28D9F0
label_2aad10:
    if (ctx->pc == 0x2AAD10u) {
        ctx->pc = 0x2AAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD0Cu;
        // 0x2aad10: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAD14u;
        goto label_2aad14;
    }
    ctx->pc = 0x2AAD0Cu;
    SET_GPR_U32(ctx, 31, 0x2AAD14u);
    ctx->pc = 0x2AAD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD0Cu;
    // 0x2aad10: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AAD0Cu, 0x2AAD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD14u;
label_2aad14:
    // 0x2aad14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aad14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aad18:
    // 0x2aad18: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2aad1c:
    if (ctx->pc == 0x2AAD1Cu) {
        ctx->pc = 0x2AAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD18u;
        // 0x2aad1c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAD20u;
        goto label_2aad20;
    }
    ctx->pc = 0x2AAD18u;
    {
        const bool branch_taken_0x2aad18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD18u;
        // 0x2aad1c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad18) {
            ctx->pc = 0x2AAD4Cu;
            goto label_2aad4c;
        }
    }
    ctx->pc = 0x2AAD20u;
label_2aad20:
    // 0x2aad20: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2aad20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aad24:
    // 0x2aad24: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2aad24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2aad28:
    // 0x2aad28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2aad28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2aad2c:
    // 0x2aad2c: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2aad2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2aad30:
    // 0x2aad30: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2aad30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2aad34:
    // 0x2aad34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aad34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aad38:
    // 0x2aad38: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2aad38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2aad3c:
    // 0x2aad3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aad3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aad40:
    // 0x2aad40: 0x24090063  addiu       $t1, $zero, 0x63
    ctx->pc = 0x2aad40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2aad44:
    // 0x2aad44: 0xc0bee7a  jal         func_2FB9E8
label_2aad48:
    if (ctx->pc == 0x2AAD48u) {
        ctx->pc = 0x2AAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD44u;
        // 0x2aad48: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAD4Cu;
        goto label_2aad4c;
    }
    ctx->pc = 0x2AAD44u;
    SET_GPR_U32(ctx, 31, 0x2AAD4Cu);
    ctx->pc = 0x2AAD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD44u;
    // 0x2aad48: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2AAD44u, 0x2AAD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD4Cu;
label_2aad4c:
    // 0x2aad4c: 0x86e40002  lh          $a0, 0x2($s7)
    ctx->pc = 0x2aad4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2aad50:
    // 0x2aad50: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2aad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2aad54:
    // 0x2aad54: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2aad54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2aad58:
    // 0x2aad58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2aad58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2aad5c:
    // 0x2aad5c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2aad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2aad60:
    // 0x2aad60: 0xc0cd780  jal         func_335E00
label_2aad64:
    if (ctx->pc == 0x2AAD64u) {
        ctx->pc = 0x2AAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD60u;
        // 0x2aad64: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAD68u;
        goto label_2aad68;
    }
    ctx->pc = 0x2AAD60u;
    SET_GPR_U32(ctx, 31, 0x2AAD68u);
    ctx->pc = 0x2AAD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD60u;
    // 0x2aad64: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2AAD60u, 0x2AAD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD68u;
label_2aad68:
    // 0x2aad68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2aad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aad6c:
    // 0x2aad6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2aad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2aad70:
    // 0x2aad70: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x2aad70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_2aad74:
    // 0x2aad74: 0xc0a2ab0  jal         func_28AAC0
label_2aad78:
    if (ctx->pc == 0x2AAD78u) {
        ctx->pc = 0x2AAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD74u;
        // 0x2aad78: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAD7Cu;
        goto label_2aad7c;
    }
    ctx->pc = 0x2AAD74u;
    SET_GPR_U32(ctx, 31, 0x2AAD7Cu);
    ctx->pc = 0x2AAD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD74u;
    // 0x2aad78: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2AAD74u, 0x2AAD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD7Cu;
label_2aad7c:
    // 0x2aad7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aad7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aad80:
    // 0x2aad80: 0xc0899aa  jal         func_2266A8
label_2aad84:
    if (ctx->pc == 0x2AAD84u) {
        ctx->pc = 0x2AAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD80u;
        // 0x2aad84: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAD88u;
        goto label_2aad88;
    }
    ctx->pc = 0x2AAD80u;
    SET_GPR_U32(ctx, 31, 0x2AAD88u);
    ctx->pc = 0x2AAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD80u;
    // 0x2aad84: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2AAD80u, 0x2AAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD88u;
label_2aad88:
    // 0x2aad88: 0x10000016  b           . + 4 + (0x16 << 2)
label_2aad8c:
    if (ctx->pc == 0x2AAD8Cu) {
        ctx->pc = 0x2AAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD88u;
        // 0x2aad8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAD90u;
        goto label_2aad90;
    }
    ctx->pc = 0x2AAD88u;
    {
        const bool branch_taken_0x2aad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD88u;
        // 0x2aad8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad88) {
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AAD90u;
label_2aad90:
    // 0x2aad90: 0xc08bfbc  jal         func_22FEF0
label_2aad94:
    if (ctx->pc == 0x2AAD94u) {
        ctx->pc = 0x2AAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD90u;
        // 0x2aad94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAD98u;
        goto label_2aad98;
    }
    ctx->pc = 0x2AAD90u;
    SET_GPR_U32(ctx, 31, 0x2AAD98u);
    ctx->pc = 0x2AAD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD90u;
    // 0x2aad94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2AAD90u, 0x2AAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD98u;
label_2aad98:
    // 0x2aad98: 0x3ac2000b  xori        $v0, $s6, 0xB
    ctx->pc = 0x2aad98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)11);
label_2aad9c:
    // 0x2aad9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2aada0:
    if (ctx->pc == 0x2AADA0u) {
        ctx->pc = 0x2AADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD9Cu;
        // 0x2aada0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AADA4u;
        goto label_2aada4;
    }
    ctx->pc = 0x2AAD9Cu;
    {
        const bool branch_taken_0x2aad9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD9Cu;
        // 0x2aada0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad9c) {
            ctx->pc = 0x2AADB4u;
            goto label_2aadb4;
        }
    }
    ctx->pc = 0x2AADA4u;
label_2aada4:
    // 0x2aada4: 0xc0b530e  jal         func_2D4C38
label_2aada8:
    if (ctx->pc == 0x2AADA8u) {
        ctx->pc = 0x2AADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADA4u;
        // 0x2aada8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AADACu;
        goto label_2aadac;
    }
    ctx->pc = 0x2AADA4u;
    SET_GPR_U32(ctx, 31, 0x2AADACu);
    ctx->pc = 0x2AADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AADA4u;
    // 0x2aada8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C38u, 0x2AADA4u, 0x2AADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AADACu;
label_2aadac:
    // 0x2aadac: 0x1000000d  b           . + 4 + (0xD << 2)
label_2aadb0:
    if (ctx->pc == 0x2AADB0u) {
        ctx->pc = 0x2AADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADACu;
        // 0x2aadb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AADB4u;
        goto label_2aadb4;
    }
    ctx->pc = 0x2AADACu;
    {
        const bool branch_taken_0x2aadac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADACu;
        // 0x2aadb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadac) {
            ctx->pc = 0x2AADE4u;
            goto label_2aade4;
        }
    }
    ctx->pc = 0x2AADB4u;
label_2aadb4:
    // 0x2aadb4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2aadb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2aadb8:
    // 0x2aadb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2aadb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2aadbc:
    // 0x2aadbc: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2aadbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_2aadc0:
    // 0x2aadc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aadc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aadc4:
    // 0x2aadc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aadc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aadc8:
    // 0x2aadc8: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x2aadc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_2aadcc:
    // 0x2aadcc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2aadccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2aadd0:
    // 0x2aadd0: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2aadd0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_2aadd4:
    // 0x2aadd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aadd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aadd8:
    // 0x2aadd8: 0xc0b8c24  jal         func_2E3090
label_2aaddc:
    if (ctx->pc == 0x2AADDCu) {
        ctx->pc = 0x2AADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADD8u;
        // 0x2aaddc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AADE0u;
        goto label_2aade0;
    }
    ctx->pc = 0x2AADD8u;
    SET_GPR_U32(ctx, 31, 0x2AADE0u);
    ctx->pc = 0x2AADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AADD8u;
    // 0x2aaddc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3090u, 0x2AADD8u, 0x2AADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AADE0u;
label_2aade0:
    // 0x2aade0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aade0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aade4:
    // 0x2aade4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2aade4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2aade8:
    // 0x2aade8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2aade8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2aadec:
    // 0x2aadec: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2aadecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2aadf0:
    // 0x2aadf0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2aadf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2aadf4:
    // 0x2aadf4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2aadf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2aadf8:
    // 0x2aadf8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2aadf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2aadfc:
    // 0x2aadfc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2aadfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2aae00:
    // 0x2aae00: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2aae00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2aae04:
    // 0x2aae04: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2aae04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2aae08:
    // 0x2aae08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aae08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aae0c:
    // 0x2aae0c: 0x3e00008  jr          $ra
label_2aae10:
    if (ctx->pc == 0x2AAE10u) {
        ctx->pc = 0x2AAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE0Cu;
        // 0x2aae10: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AAE14u;
        goto label_2aae14;
    }
    ctx->pc = 0x2AAE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE0Cu;
        // 0x2aae10: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAE14u;
label_2aae14:
    // 0x2aae14: 0x0  nop
    ctx->pc = 0x2aae14u;
    // NOP
label_2aae18:
    // 0x2aae18: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2aae18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2aae1c:
    // 0x2aae1c: 0x0  nop
    ctx->pc = 0x2aae1cu;
    // NOP
label_2aae20:
    // 0x2aae20: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2aae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2aae24:
    // 0x2aae24: 0x0  nop
    ctx->pc = 0x2aae24u;
    // NOP
label_2aae28:
    // 0x2aae28: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2aae28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2aae2c:
    // 0x2aae2c: 0x0  nop
    ctx->pc = 0x2aae2cu;
    // NOP
    ctx->pc = 0x2aae30u;
}
