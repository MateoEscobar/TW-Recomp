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

// Function: sub_001E5618
// Address: 0x1e5618 - 0x1e6530
void sub_001E5618_0x1e5618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5618_0x1e5618");
#endif

    switch (ctx->pc) {
        case 0x1e5618u: goto label_1e5618;
        case 0x1e561cu: goto label_1e561c;
        case 0x1e5620u: goto label_1e5620;
        case 0x1e5624u: goto label_1e5624;
        case 0x1e5628u: goto label_1e5628;
        case 0x1e562cu: goto label_1e562c;
        case 0x1e5630u: goto label_1e5630;
        case 0x1e5634u: goto label_1e5634;
        case 0x1e5638u: goto label_1e5638;
        case 0x1e563cu: goto label_1e563c;
        case 0x1e5640u: goto label_1e5640;
        case 0x1e5644u: goto label_1e5644;
        case 0x1e5648u: goto label_1e5648;
        case 0x1e564cu: goto label_1e564c;
        case 0x1e5650u: goto label_1e5650;
        case 0x1e5654u: goto label_1e5654;
        case 0x1e5658u: goto label_1e5658;
        case 0x1e565cu: goto label_1e565c;
        case 0x1e5660u: goto label_1e5660;
        case 0x1e5664u: goto label_1e5664;
        case 0x1e5668u: goto label_1e5668;
        case 0x1e566cu: goto label_1e566c;
        case 0x1e5670u: goto label_1e5670;
        case 0x1e5674u: goto label_1e5674;
        case 0x1e5678u: goto label_1e5678;
        case 0x1e567cu: goto label_1e567c;
        case 0x1e5680u: goto label_1e5680;
        case 0x1e5684u: goto label_1e5684;
        case 0x1e5688u: goto label_1e5688;
        case 0x1e568cu: goto label_1e568c;
        case 0x1e5690u: goto label_1e5690;
        case 0x1e5694u: goto label_1e5694;
        case 0x1e5698u: goto label_1e5698;
        case 0x1e569cu: goto label_1e569c;
        case 0x1e56a0u: goto label_1e56a0;
        case 0x1e56a4u: goto label_1e56a4;
        case 0x1e56a8u: goto label_1e56a8;
        case 0x1e56acu: goto label_1e56ac;
        case 0x1e56b0u: goto label_1e56b0;
        case 0x1e56b4u: goto label_1e56b4;
        case 0x1e56b8u: goto label_1e56b8;
        case 0x1e56bcu: goto label_1e56bc;
        case 0x1e56c0u: goto label_1e56c0;
        case 0x1e56c4u: goto label_1e56c4;
        case 0x1e56c8u: goto label_1e56c8;
        case 0x1e56ccu: goto label_1e56cc;
        case 0x1e56d0u: goto label_1e56d0;
        case 0x1e56d4u: goto label_1e56d4;
        case 0x1e56d8u: goto label_1e56d8;
        case 0x1e56dcu: goto label_1e56dc;
        case 0x1e56e0u: goto label_1e56e0;
        case 0x1e56e4u: goto label_1e56e4;
        case 0x1e56e8u: goto label_1e56e8;
        case 0x1e56ecu: goto label_1e56ec;
        case 0x1e56f0u: goto label_1e56f0;
        case 0x1e56f4u: goto label_1e56f4;
        case 0x1e56f8u: goto label_1e56f8;
        case 0x1e56fcu: goto label_1e56fc;
        case 0x1e5700u: goto label_1e5700;
        case 0x1e5704u: goto label_1e5704;
        case 0x1e5708u: goto label_1e5708;
        case 0x1e570cu: goto label_1e570c;
        case 0x1e5710u: goto label_1e5710;
        case 0x1e5714u: goto label_1e5714;
        case 0x1e5718u: goto label_1e5718;
        case 0x1e571cu: goto label_1e571c;
        case 0x1e5720u: goto label_1e5720;
        case 0x1e5724u: goto label_1e5724;
        case 0x1e5728u: goto label_1e5728;
        case 0x1e572cu: goto label_1e572c;
        case 0x1e5730u: goto label_1e5730;
        case 0x1e5734u: goto label_1e5734;
        case 0x1e5738u: goto label_1e5738;
        case 0x1e573cu: goto label_1e573c;
        case 0x1e5740u: goto label_1e5740;
        case 0x1e5744u: goto label_1e5744;
        case 0x1e5748u: goto label_1e5748;
        case 0x1e574cu: goto label_1e574c;
        case 0x1e5750u: goto label_1e5750;
        case 0x1e5754u: goto label_1e5754;
        case 0x1e5758u: goto label_1e5758;
        case 0x1e575cu: goto label_1e575c;
        case 0x1e5760u: goto label_1e5760;
        case 0x1e5764u: goto label_1e5764;
        case 0x1e5768u: goto label_1e5768;
        case 0x1e576cu: goto label_1e576c;
        case 0x1e5770u: goto label_1e5770;
        case 0x1e5774u: goto label_1e5774;
        case 0x1e5778u: goto label_1e5778;
        case 0x1e577cu: goto label_1e577c;
        case 0x1e5780u: goto label_1e5780;
        case 0x1e5784u: goto label_1e5784;
        case 0x1e5788u: goto label_1e5788;
        case 0x1e578cu: goto label_1e578c;
        case 0x1e5790u: goto label_1e5790;
        case 0x1e5794u: goto label_1e5794;
        case 0x1e5798u: goto label_1e5798;
        case 0x1e579cu: goto label_1e579c;
        case 0x1e57a0u: goto label_1e57a0;
        case 0x1e57a4u: goto label_1e57a4;
        case 0x1e57a8u: goto label_1e57a8;
        case 0x1e57acu: goto label_1e57ac;
        case 0x1e57b0u: goto label_1e57b0;
        case 0x1e57b4u: goto label_1e57b4;
        case 0x1e57b8u: goto label_1e57b8;
        case 0x1e57bcu: goto label_1e57bc;
        case 0x1e57c0u: goto label_1e57c0;
        case 0x1e57c4u: goto label_1e57c4;
        case 0x1e57c8u: goto label_1e57c8;
        case 0x1e57ccu: goto label_1e57cc;
        case 0x1e57d0u: goto label_1e57d0;
        case 0x1e57d4u: goto label_1e57d4;
        case 0x1e57d8u: goto label_1e57d8;
        case 0x1e57dcu: goto label_1e57dc;
        case 0x1e57e0u: goto label_1e57e0;
        case 0x1e57e4u: goto label_1e57e4;
        case 0x1e57e8u: goto label_1e57e8;
        case 0x1e57ecu: goto label_1e57ec;
        case 0x1e57f0u: goto label_1e57f0;
        case 0x1e57f4u: goto label_1e57f4;
        case 0x1e57f8u: goto label_1e57f8;
        case 0x1e57fcu: goto label_1e57fc;
        case 0x1e5800u: goto label_1e5800;
        case 0x1e5804u: goto label_1e5804;
        case 0x1e5808u: goto label_1e5808;
        case 0x1e580cu: goto label_1e580c;
        case 0x1e5810u: goto label_1e5810;
        case 0x1e5814u: goto label_1e5814;
        case 0x1e5818u: goto label_1e5818;
        case 0x1e581cu: goto label_1e581c;
        case 0x1e5820u: goto label_1e5820;
        case 0x1e5824u: goto label_1e5824;
        case 0x1e5828u: goto label_1e5828;
        case 0x1e582cu: goto label_1e582c;
        case 0x1e5830u: goto label_1e5830;
        case 0x1e5834u: goto label_1e5834;
        case 0x1e5838u: goto label_1e5838;
        case 0x1e583cu: goto label_1e583c;
        case 0x1e5840u: goto label_1e5840;
        case 0x1e5844u: goto label_1e5844;
        case 0x1e5848u: goto label_1e5848;
        case 0x1e584cu: goto label_1e584c;
        case 0x1e5850u: goto label_1e5850;
        case 0x1e5854u: goto label_1e5854;
        case 0x1e5858u: goto label_1e5858;
        case 0x1e585cu: goto label_1e585c;
        case 0x1e5860u: goto label_1e5860;
        case 0x1e5864u: goto label_1e5864;
        case 0x1e5868u: goto label_1e5868;
        case 0x1e586cu: goto label_1e586c;
        case 0x1e5870u: goto label_1e5870;
        case 0x1e5874u: goto label_1e5874;
        case 0x1e5878u: goto label_1e5878;
        case 0x1e587cu: goto label_1e587c;
        case 0x1e5880u: goto label_1e5880;
        case 0x1e5884u: goto label_1e5884;
        case 0x1e5888u: goto label_1e5888;
        case 0x1e588cu: goto label_1e588c;
        case 0x1e5890u: goto label_1e5890;
        case 0x1e5894u: goto label_1e5894;
        case 0x1e5898u: goto label_1e5898;
        case 0x1e589cu: goto label_1e589c;
        case 0x1e58a0u: goto label_1e58a0;
        case 0x1e58a4u: goto label_1e58a4;
        case 0x1e58a8u: goto label_1e58a8;
        case 0x1e58acu: goto label_1e58ac;
        case 0x1e58b0u: goto label_1e58b0;
        case 0x1e58b4u: goto label_1e58b4;
        case 0x1e58b8u: goto label_1e58b8;
        case 0x1e58bcu: goto label_1e58bc;
        case 0x1e58c0u: goto label_1e58c0;
        case 0x1e58c4u: goto label_1e58c4;
        case 0x1e58c8u: goto label_1e58c8;
        case 0x1e58ccu: goto label_1e58cc;
        case 0x1e58d0u: goto label_1e58d0;
        case 0x1e58d4u: goto label_1e58d4;
        case 0x1e58d8u: goto label_1e58d8;
        case 0x1e58dcu: goto label_1e58dc;
        case 0x1e58e0u: goto label_1e58e0;
        case 0x1e58e4u: goto label_1e58e4;
        case 0x1e58e8u: goto label_1e58e8;
        case 0x1e58ecu: goto label_1e58ec;
        case 0x1e58f0u: goto label_1e58f0;
        case 0x1e58f4u: goto label_1e58f4;
        case 0x1e58f8u: goto label_1e58f8;
        case 0x1e58fcu: goto label_1e58fc;
        case 0x1e5900u: goto label_1e5900;
        case 0x1e5904u: goto label_1e5904;
        case 0x1e5908u: goto label_1e5908;
        case 0x1e590cu: goto label_1e590c;
        case 0x1e5910u: goto label_1e5910;
        case 0x1e5914u: goto label_1e5914;
        case 0x1e5918u: goto label_1e5918;
        case 0x1e591cu: goto label_1e591c;
        case 0x1e5920u: goto label_1e5920;
        case 0x1e5924u: goto label_1e5924;
        case 0x1e5928u: goto label_1e5928;
        case 0x1e592cu: goto label_1e592c;
        case 0x1e5930u: goto label_1e5930;
        case 0x1e5934u: goto label_1e5934;
        case 0x1e5938u: goto label_1e5938;
        case 0x1e593cu: goto label_1e593c;
        case 0x1e5940u: goto label_1e5940;
        case 0x1e5944u: goto label_1e5944;
        case 0x1e5948u: goto label_1e5948;
        case 0x1e594cu: goto label_1e594c;
        case 0x1e5950u: goto label_1e5950;
        case 0x1e5954u: goto label_1e5954;
        case 0x1e5958u: goto label_1e5958;
        case 0x1e595cu: goto label_1e595c;
        case 0x1e5960u: goto label_1e5960;
        case 0x1e5964u: goto label_1e5964;
        case 0x1e5968u: goto label_1e5968;
        case 0x1e596cu: goto label_1e596c;
        case 0x1e5970u: goto label_1e5970;
        case 0x1e5974u: goto label_1e5974;
        case 0x1e5978u: goto label_1e5978;
        case 0x1e597cu: goto label_1e597c;
        case 0x1e5980u: goto label_1e5980;
        case 0x1e5984u: goto label_1e5984;
        case 0x1e5988u: goto label_1e5988;
        case 0x1e598cu: goto label_1e598c;
        case 0x1e5990u: goto label_1e5990;
        case 0x1e5994u: goto label_1e5994;
        case 0x1e5998u: goto label_1e5998;
        case 0x1e599cu: goto label_1e599c;
        case 0x1e59a0u: goto label_1e59a0;
        case 0x1e59a4u: goto label_1e59a4;
        case 0x1e59a8u: goto label_1e59a8;
        case 0x1e59acu: goto label_1e59ac;
        case 0x1e59b0u: goto label_1e59b0;
        case 0x1e59b4u: goto label_1e59b4;
        case 0x1e59b8u: goto label_1e59b8;
        case 0x1e59bcu: goto label_1e59bc;
        case 0x1e59c0u: goto label_1e59c0;
        case 0x1e59c4u: goto label_1e59c4;
        case 0x1e59c8u: goto label_1e59c8;
        case 0x1e59ccu: goto label_1e59cc;
        case 0x1e59d0u: goto label_1e59d0;
        case 0x1e59d4u: goto label_1e59d4;
        case 0x1e59d8u: goto label_1e59d8;
        case 0x1e59dcu: goto label_1e59dc;
        case 0x1e59e0u: goto label_1e59e0;
        case 0x1e59e4u: goto label_1e59e4;
        case 0x1e59e8u: goto label_1e59e8;
        case 0x1e59ecu: goto label_1e59ec;
        case 0x1e59f0u: goto label_1e59f0;
        case 0x1e59f4u: goto label_1e59f4;
        case 0x1e59f8u: goto label_1e59f8;
        case 0x1e59fcu: goto label_1e59fc;
        case 0x1e5a00u: goto label_1e5a00;
        case 0x1e5a04u: goto label_1e5a04;
        case 0x1e5a08u: goto label_1e5a08;
        case 0x1e5a0cu: goto label_1e5a0c;
        case 0x1e5a10u: goto label_1e5a10;
        case 0x1e5a14u: goto label_1e5a14;
        case 0x1e5a18u: goto label_1e5a18;
        case 0x1e5a1cu: goto label_1e5a1c;
        case 0x1e5a20u: goto label_1e5a20;
        case 0x1e5a24u: goto label_1e5a24;
        case 0x1e5a28u: goto label_1e5a28;
        case 0x1e5a2cu: goto label_1e5a2c;
        case 0x1e5a30u: goto label_1e5a30;
        case 0x1e5a34u: goto label_1e5a34;
        case 0x1e5a38u: goto label_1e5a38;
        case 0x1e5a3cu: goto label_1e5a3c;
        case 0x1e5a40u: goto label_1e5a40;
        case 0x1e5a44u: goto label_1e5a44;
        case 0x1e5a48u: goto label_1e5a48;
        case 0x1e5a4cu: goto label_1e5a4c;
        case 0x1e5a50u: goto label_1e5a50;
        case 0x1e5a54u: goto label_1e5a54;
        case 0x1e5a58u: goto label_1e5a58;
        case 0x1e5a5cu: goto label_1e5a5c;
        case 0x1e5a60u: goto label_1e5a60;
        case 0x1e5a64u: goto label_1e5a64;
        case 0x1e5a68u: goto label_1e5a68;
        case 0x1e5a6cu: goto label_1e5a6c;
        case 0x1e5a70u: goto label_1e5a70;
        case 0x1e5a74u: goto label_1e5a74;
        case 0x1e5a78u: goto label_1e5a78;
        case 0x1e5a7cu: goto label_1e5a7c;
        case 0x1e5a80u: goto label_1e5a80;
        case 0x1e5a84u: goto label_1e5a84;
        case 0x1e5a88u: goto label_1e5a88;
        case 0x1e5a8cu: goto label_1e5a8c;
        case 0x1e5a90u: goto label_1e5a90;
        case 0x1e5a94u: goto label_1e5a94;
        case 0x1e5a98u: goto label_1e5a98;
        case 0x1e5a9cu: goto label_1e5a9c;
        case 0x1e5aa0u: goto label_1e5aa0;
        case 0x1e5aa4u: goto label_1e5aa4;
        case 0x1e5aa8u: goto label_1e5aa8;
        case 0x1e5aacu: goto label_1e5aac;
        case 0x1e5ab0u: goto label_1e5ab0;
        case 0x1e5ab4u: goto label_1e5ab4;
        case 0x1e5ab8u: goto label_1e5ab8;
        case 0x1e5abcu: goto label_1e5abc;
        case 0x1e5ac0u: goto label_1e5ac0;
        case 0x1e5ac4u: goto label_1e5ac4;
        case 0x1e5ac8u: goto label_1e5ac8;
        case 0x1e5accu: goto label_1e5acc;
        case 0x1e5ad0u: goto label_1e5ad0;
        case 0x1e5ad4u: goto label_1e5ad4;
        case 0x1e5ad8u: goto label_1e5ad8;
        case 0x1e5adcu: goto label_1e5adc;
        case 0x1e5ae0u: goto label_1e5ae0;
        case 0x1e5ae4u: goto label_1e5ae4;
        case 0x1e5ae8u: goto label_1e5ae8;
        case 0x1e5aecu: goto label_1e5aec;
        case 0x1e5af0u: goto label_1e5af0;
        case 0x1e5af4u: goto label_1e5af4;
        case 0x1e5af8u: goto label_1e5af8;
        case 0x1e5afcu: goto label_1e5afc;
        case 0x1e5b00u: goto label_1e5b00;
        case 0x1e5b04u: goto label_1e5b04;
        case 0x1e5b08u: goto label_1e5b08;
        case 0x1e5b0cu: goto label_1e5b0c;
        case 0x1e5b10u: goto label_1e5b10;
        case 0x1e5b14u: goto label_1e5b14;
        case 0x1e5b18u: goto label_1e5b18;
        case 0x1e5b1cu: goto label_1e5b1c;
        case 0x1e5b20u: goto label_1e5b20;
        case 0x1e5b24u: goto label_1e5b24;
        case 0x1e5b28u: goto label_1e5b28;
        case 0x1e5b2cu: goto label_1e5b2c;
        case 0x1e5b30u: goto label_1e5b30;
        case 0x1e5b34u: goto label_1e5b34;
        case 0x1e5b38u: goto label_1e5b38;
        case 0x1e5b3cu: goto label_1e5b3c;
        case 0x1e5b40u: goto label_1e5b40;
        case 0x1e5b44u: goto label_1e5b44;
        case 0x1e5b48u: goto label_1e5b48;
        case 0x1e5b4cu: goto label_1e5b4c;
        case 0x1e5b50u: goto label_1e5b50;
        case 0x1e5b54u: goto label_1e5b54;
        case 0x1e5b58u: goto label_1e5b58;
        case 0x1e5b5cu: goto label_1e5b5c;
        case 0x1e5b60u: goto label_1e5b60;
        case 0x1e5b64u: goto label_1e5b64;
        case 0x1e5b68u: goto label_1e5b68;
        case 0x1e5b6cu: goto label_1e5b6c;
        case 0x1e5b70u: goto label_1e5b70;
        case 0x1e5b74u: goto label_1e5b74;
        case 0x1e5b78u: goto label_1e5b78;
        case 0x1e5b7cu: goto label_1e5b7c;
        case 0x1e5b80u: goto label_1e5b80;
        case 0x1e5b84u: goto label_1e5b84;
        case 0x1e5b88u: goto label_1e5b88;
        case 0x1e5b8cu: goto label_1e5b8c;
        case 0x1e5b90u: goto label_1e5b90;
        case 0x1e5b94u: goto label_1e5b94;
        case 0x1e5b98u: goto label_1e5b98;
        case 0x1e5b9cu: goto label_1e5b9c;
        case 0x1e5ba0u: goto label_1e5ba0;
        case 0x1e5ba4u: goto label_1e5ba4;
        case 0x1e5ba8u: goto label_1e5ba8;
        case 0x1e5bacu: goto label_1e5bac;
        case 0x1e5bb0u: goto label_1e5bb0;
        case 0x1e5bb4u: goto label_1e5bb4;
        case 0x1e5bb8u: goto label_1e5bb8;
        case 0x1e5bbcu: goto label_1e5bbc;
        case 0x1e5bc0u: goto label_1e5bc0;
        case 0x1e5bc4u: goto label_1e5bc4;
        case 0x1e5bc8u: goto label_1e5bc8;
        case 0x1e5bccu: goto label_1e5bcc;
        case 0x1e5bd0u: goto label_1e5bd0;
        case 0x1e5bd4u: goto label_1e5bd4;
        case 0x1e5bd8u: goto label_1e5bd8;
        case 0x1e5bdcu: goto label_1e5bdc;
        case 0x1e5be0u: goto label_1e5be0;
        case 0x1e5be4u: goto label_1e5be4;
        case 0x1e5be8u: goto label_1e5be8;
        case 0x1e5becu: goto label_1e5bec;
        case 0x1e5bf0u: goto label_1e5bf0;
        case 0x1e5bf4u: goto label_1e5bf4;
        case 0x1e5bf8u: goto label_1e5bf8;
        case 0x1e5bfcu: goto label_1e5bfc;
        case 0x1e5c00u: goto label_1e5c00;
        case 0x1e5c04u: goto label_1e5c04;
        case 0x1e5c08u: goto label_1e5c08;
        case 0x1e5c0cu: goto label_1e5c0c;
        case 0x1e5c10u: goto label_1e5c10;
        case 0x1e5c14u: goto label_1e5c14;
        case 0x1e5c18u: goto label_1e5c18;
        case 0x1e5c1cu: goto label_1e5c1c;
        case 0x1e5c20u: goto label_1e5c20;
        case 0x1e5c24u: goto label_1e5c24;
        case 0x1e5c28u: goto label_1e5c28;
        case 0x1e5c2cu: goto label_1e5c2c;
        case 0x1e5c30u: goto label_1e5c30;
        case 0x1e5c34u: goto label_1e5c34;
        case 0x1e5c38u: goto label_1e5c38;
        case 0x1e5c3cu: goto label_1e5c3c;
        case 0x1e5c40u: goto label_1e5c40;
        case 0x1e5c44u: goto label_1e5c44;
        case 0x1e5c48u: goto label_1e5c48;
        case 0x1e5c4cu: goto label_1e5c4c;
        case 0x1e5c50u: goto label_1e5c50;
        case 0x1e5c54u: goto label_1e5c54;
        case 0x1e5c58u: goto label_1e5c58;
        case 0x1e5c5cu: goto label_1e5c5c;
        case 0x1e5c60u: goto label_1e5c60;
        case 0x1e5c64u: goto label_1e5c64;
        case 0x1e5c68u: goto label_1e5c68;
        case 0x1e5c6cu: goto label_1e5c6c;
        case 0x1e5c70u: goto label_1e5c70;
        case 0x1e5c74u: goto label_1e5c74;
        case 0x1e5c78u: goto label_1e5c78;
        case 0x1e5c7cu: goto label_1e5c7c;
        case 0x1e5c80u: goto label_1e5c80;
        case 0x1e5c84u: goto label_1e5c84;
        case 0x1e5c88u: goto label_1e5c88;
        case 0x1e5c8cu: goto label_1e5c8c;
        case 0x1e5c90u: goto label_1e5c90;
        case 0x1e5c94u: goto label_1e5c94;
        case 0x1e5c98u: goto label_1e5c98;
        case 0x1e5c9cu: goto label_1e5c9c;
        case 0x1e5ca0u: goto label_1e5ca0;
        case 0x1e5ca4u: goto label_1e5ca4;
        case 0x1e5ca8u: goto label_1e5ca8;
        case 0x1e5cacu: goto label_1e5cac;
        case 0x1e5cb0u: goto label_1e5cb0;
        case 0x1e5cb4u: goto label_1e5cb4;
        case 0x1e5cb8u: goto label_1e5cb8;
        case 0x1e5cbcu: goto label_1e5cbc;
        case 0x1e5cc0u: goto label_1e5cc0;
        case 0x1e5cc4u: goto label_1e5cc4;
        case 0x1e5cc8u: goto label_1e5cc8;
        case 0x1e5cccu: goto label_1e5ccc;
        case 0x1e5cd0u: goto label_1e5cd0;
        case 0x1e5cd4u: goto label_1e5cd4;
        case 0x1e5cd8u: goto label_1e5cd8;
        case 0x1e5cdcu: goto label_1e5cdc;
        case 0x1e5ce0u: goto label_1e5ce0;
        case 0x1e5ce4u: goto label_1e5ce4;
        case 0x1e5ce8u: goto label_1e5ce8;
        case 0x1e5cecu: goto label_1e5cec;
        case 0x1e5cf0u: goto label_1e5cf0;
        case 0x1e5cf4u: goto label_1e5cf4;
        case 0x1e5cf8u: goto label_1e5cf8;
        case 0x1e5cfcu: goto label_1e5cfc;
        case 0x1e5d00u: goto label_1e5d00;
        case 0x1e5d04u: goto label_1e5d04;
        case 0x1e5d08u: goto label_1e5d08;
        case 0x1e5d0cu: goto label_1e5d0c;
        case 0x1e5d10u: goto label_1e5d10;
        case 0x1e5d14u: goto label_1e5d14;
        case 0x1e5d18u: goto label_1e5d18;
        case 0x1e5d1cu: goto label_1e5d1c;
        case 0x1e5d20u: goto label_1e5d20;
        case 0x1e5d24u: goto label_1e5d24;
        case 0x1e5d28u: goto label_1e5d28;
        case 0x1e5d2cu: goto label_1e5d2c;
        case 0x1e5d30u: goto label_1e5d30;
        case 0x1e5d34u: goto label_1e5d34;
        case 0x1e5d38u: goto label_1e5d38;
        case 0x1e5d3cu: goto label_1e5d3c;
        case 0x1e5d40u: goto label_1e5d40;
        case 0x1e5d44u: goto label_1e5d44;
        case 0x1e5d48u: goto label_1e5d48;
        case 0x1e5d4cu: goto label_1e5d4c;
        case 0x1e5d50u: goto label_1e5d50;
        case 0x1e5d54u: goto label_1e5d54;
        case 0x1e5d58u: goto label_1e5d58;
        case 0x1e5d5cu: goto label_1e5d5c;
        case 0x1e5d60u: goto label_1e5d60;
        case 0x1e5d64u: goto label_1e5d64;
        case 0x1e5d68u: goto label_1e5d68;
        case 0x1e5d6cu: goto label_1e5d6c;
        case 0x1e5d70u: goto label_1e5d70;
        case 0x1e5d74u: goto label_1e5d74;
        case 0x1e5d78u: goto label_1e5d78;
        case 0x1e5d7cu: goto label_1e5d7c;
        case 0x1e5d80u: goto label_1e5d80;
        case 0x1e5d84u: goto label_1e5d84;
        case 0x1e5d88u: goto label_1e5d88;
        case 0x1e5d8cu: goto label_1e5d8c;
        case 0x1e5d90u: goto label_1e5d90;
        case 0x1e5d94u: goto label_1e5d94;
        case 0x1e5d98u: goto label_1e5d98;
        case 0x1e5d9cu: goto label_1e5d9c;
        case 0x1e5da0u: goto label_1e5da0;
        case 0x1e5da4u: goto label_1e5da4;
        case 0x1e5da8u: goto label_1e5da8;
        case 0x1e5dacu: goto label_1e5dac;
        case 0x1e5db0u: goto label_1e5db0;
        case 0x1e5db4u: goto label_1e5db4;
        case 0x1e5db8u: goto label_1e5db8;
        case 0x1e5dbcu: goto label_1e5dbc;
        case 0x1e5dc0u: goto label_1e5dc0;
        case 0x1e5dc4u: goto label_1e5dc4;
        case 0x1e5dc8u: goto label_1e5dc8;
        case 0x1e5dccu: goto label_1e5dcc;
        case 0x1e5dd0u: goto label_1e5dd0;
        case 0x1e5dd4u: goto label_1e5dd4;
        case 0x1e5dd8u: goto label_1e5dd8;
        case 0x1e5ddcu: goto label_1e5ddc;
        case 0x1e5de0u: goto label_1e5de0;
        case 0x1e5de4u: goto label_1e5de4;
        case 0x1e5de8u: goto label_1e5de8;
        case 0x1e5decu: goto label_1e5dec;
        case 0x1e5df0u: goto label_1e5df0;
        case 0x1e5df4u: goto label_1e5df4;
        case 0x1e5df8u: goto label_1e5df8;
        case 0x1e5dfcu: goto label_1e5dfc;
        case 0x1e5e00u: goto label_1e5e00;
        case 0x1e5e04u: goto label_1e5e04;
        case 0x1e5e08u: goto label_1e5e08;
        case 0x1e5e0cu: goto label_1e5e0c;
        case 0x1e5e10u: goto label_1e5e10;
        case 0x1e5e14u: goto label_1e5e14;
        case 0x1e5e18u: goto label_1e5e18;
        case 0x1e5e1cu: goto label_1e5e1c;
        case 0x1e5e20u: goto label_1e5e20;
        case 0x1e5e24u: goto label_1e5e24;
        case 0x1e5e28u: goto label_1e5e28;
        case 0x1e5e2cu: goto label_1e5e2c;
        case 0x1e5e30u: goto label_1e5e30;
        case 0x1e5e34u: goto label_1e5e34;
        case 0x1e5e38u: goto label_1e5e38;
        case 0x1e5e3cu: goto label_1e5e3c;
        case 0x1e5e40u: goto label_1e5e40;
        case 0x1e5e44u: goto label_1e5e44;
        case 0x1e5e48u: goto label_1e5e48;
        case 0x1e5e4cu: goto label_1e5e4c;
        case 0x1e5e50u: goto label_1e5e50;
        case 0x1e5e54u: goto label_1e5e54;
        case 0x1e5e58u: goto label_1e5e58;
        case 0x1e5e5cu: goto label_1e5e5c;
        case 0x1e5e60u: goto label_1e5e60;
        case 0x1e5e64u: goto label_1e5e64;
        case 0x1e5e68u: goto label_1e5e68;
        case 0x1e5e6cu: goto label_1e5e6c;
        case 0x1e5e70u: goto label_1e5e70;
        case 0x1e5e74u: goto label_1e5e74;
        case 0x1e5e78u: goto label_1e5e78;
        case 0x1e5e7cu: goto label_1e5e7c;
        case 0x1e5e80u: goto label_1e5e80;
        case 0x1e5e84u: goto label_1e5e84;
        case 0x1e5e88u: goto label_1e5e88;
        case 0x1e5e8cu: goto label_1e5e8c;
        case 0x1e5e90u: goto label_1e5e90;
        case 0x1e5e94u: goto label_1e5e94;
        case 0x1e5e98u: goto label_1e5e98;
        case 0x1e5e9cu: goto label_1e5e9c;
        case 0x1e5ea0u: goto label_1e5ea0;
        case 0x1e5ea4u: goto label_1e5ea4;
        case 0x1e5ea8u: goto label_1e5ea8;
        case 0x1e5eacu: goto label_1e5eac;
        case 0x1e5eb0u: goto label_1e5eb0;
        case 0x1e5eb4u: goto label_1e5eb4;
        case 0x1e5eb8u: goto label_1e5eb8;
        case 0x1e5ebcu: goto label_1e5ebc;
        case 0x1e5ec0u: goto label_1e5ec0;
        case 0x1e5ec4u: goto label_1e5ec4;
        case 0x1e5ec8u: goto label_1e5ec8;
        case 0x1e5eccu: goto label_1e5ecc;
        case 0x1e5ed0u: goto label_1e5ed0;
        case 0x1e5ed4u: goto label_1e5ed4;
        case 0x1e5ed8u: goto label_1e5ed8;
        case 0x1e5edcu: goto label_1e5edc;
        case 0x1e5ee0u: goto label_1e5ee0;
        case 0x1e5ee4u: goto label_1e5ee4;
        case 0x1e5ee8u: goto label_1e5ee8;
        case 0x1e5eecu: goto label_1e5eec;
        case 0x1e5ef0u: goto label_1e5ef0;
        case 0x1e5ef4u: goto label_1e5ef4;
        case 0x1e5ef8u: goto label_1e5ef8;
        case 0x1e5efcu: goto label_1e5efc;
        case 0x1e5f00u: goto label_1e5f00;
        case 0x1e5f04u: goto label_1e5f04;
        case 0x1e5f08u: goto label_1e5f08;
        case 0x1e5f0cu: goto label_1e5f0c;
        case 0x1e5f10u: goto label_1e5f10;
        case 0x1e5f14u: goto label_1e5f14;
        case 0x1e5f18u: goto label_1e5f18;
        case 0x1e5f1cu: goto label_1e5f1c;
        case 0x1e5f20u: goto label_1e5f20;
        case 0x1e5f24u: goto label_1e5f24;
        case 0x1e5f28u: goto label_1e5f28;
        case 0x1e5f2cu: goto label_1e5f2c;
        case 0x1e5f30u: goto label_1e5f30;
        case 0x1e5f34u: goto label_1e5f34;
        case 0x1e5f38u: goto label_1e5f38;
        case 0x1e5f3cu: goto label_1e5f3c;
        case 0x1e5f40u: goto label_1e5f40;
        case 0x1e5f44u: goto label_1e5f44;
        case 0x1e5f48u: goto label_1e5f48;
        case 0x1e5f4cu: goto label_1e5f4c;
        case 0x1e5f50u: goto label_1e5f50;
        case 0x1e5f54u: goto label_1e5f54;
        case 0x1e5f58u: goto label_1e5f58;
        case 0x1e5f5cu: goto label_1e5f5c;
        case 0x1e5f60u: goto label_1e5f60;
        case 0x1e5f64u: goto label_1e5f64;
        case 0x1e5f68u: goto label_1e5f68;
        case 0x1e5f6cu: goto label_1e5f6c;
        case 0x1e5f70u: goto label_1e5f70;
        case 0x1e5f74u: goto label_1e5f74;
        case 0x1e5f78u: goto label_1e5f78;
        case 0x1e5f7cu: goto label_1e5f7c;
        case 0x1e5f80u: goto label_1e5f80;
        case 0x1e5f84u: goto label_1e5f84;
        case 0x1e5f88u: goto label_1e5f88;
        case 0x1e5f8cu: goto label_1e5f8c;
        case 0x1e5f90u: goto label_1e5f90;
        case 0x1e5f94u: goto label_1e5f94;
        case 0x1e5f98u: goto label_1e5f98;
        case 0x1e5f9cu: goto label_1e5f9c;
        case 0x1e5fa0u: goto label_1e5fa0;
        case 0x1e5fa4u: goto label_1e5fa4;
        case 0x1e5fa8u: goto label_1e5fa8;
        case 0x1e5facu: goto label_1e5fac;
        case 0x1e5fb0u: goto label_1e5fb0;
        case 0x1e5fb4u: goto label_1e5fb4;
        case 0x1e5fb8u: goto label_1e5fb8;
        case 0x1e5fbcu: goto label_1e5fbc;
        case 0x1e5fc0u: goto label_1e5fc0;
        case 0x1e5fc4u: goto label_1e5fc4;
        case 0x1e5fc8u: goto label_1e5fc8;
        case 0x1e5fccu: goto label_1e5fcc;
        case 0x1e5fd0u: goto label_1e5fd0;
        case 0x1e5fd4u: goto label_1e5fd4;
        case 0x1e5fd8u: goto label_1e5fd8;
        case 0x1e5fdcu: goto label_1e5fdc;
        case 0x1e5fe0u: goto label_1e5fe0;
        case 0x1e5fe4u: goto label_1e5fe4;
        case 0x1e5fe8u: goto label_1e5fe8;
        case 0x1e5fecu: goto label_1e5fec;
        case 0x1e5ff0u: goto label_1e5ff0;
        case 0x1e5ff4u: goto label_1e5ff4;
        case 0x1e5ff8u: goto label_1e5ff8;
        case 0x1e5ffcu: goto label_1e5ffc;
        case 0x1e6000u: goto label_1e6000;
        case 0x1e6004u: goto label_1e6004;
        case 0x1e6008u: goto label_1e6008;
        case 0x1e600cu: goto label_1e600c;
        case 0x1e6010u: goto label_1e6010;
        case 0x1e6014u: goto label_1e6014;
        case 0x1e6018u: goto label_1e6018;
        case 0x1e601cu: goto label_1e601c;
        case 0x1e6020u: goto label_1e6020;
        case 0x1e6024u: goto label_1e6024;
        case 0x1e6028u: goto label_1e6028;
        case 0x1e602cu: goto label_1e602c;
        case 0x1e6030u: goto label_1e6030;
        case 0x1e6034u: goto label_1e6034;
        case 0x1e6038u: goto label_1e6038;
        case 0x1e603cu: goto label_1e603c;
        case 0x1e6040u: goto label_1e6040;
        case 0x1e6044u: goto label_1e6044;
        case 0x1e6048u: goto label_1e6048;
        case 0x1e604cu: goto label_1e604c;
        case 0x1e6050u: goto label_1e6050;
        case 0x1e6054u: goto label_1e6054;
        case 0x1e6058u: goto label_1e6058;
        case 0x1e605cu: goto label_1e605c;
        case 0x1e6060u: goto label_1e6060;
        case 0x1e6064u: goto label_1e6064;
        case 0x1e6068u: goto label_1e6068;
        case 0x1e606cu: goto label_1e606c;
        case 0x1e6070u: goto label_1e6070;
        case 0x1e6074u: goto label_1e6074;
        case 0x1e6078u: goto label_1e6078;
        case 0x1e607cu: goto label_1e607c;
        case 0x1e6080u: goto label_1e6080;
        case 0x1e6084u: goto label_1e6084;
        case 0x1e6088u: goto label_1e6088;
        case 0x1e608cu: goto label_1e608c;
        case 0x1e6090u: goto label_1e6090;
        case 0x1e6094u: goto label_1e6094;
        case 0x1e6098u: goto label_1e6098;
        case 0x1e609cu: goto label_1e609c;
        case 0x1e60a0u: goto label_1e60a0;
        case 0x1e60a4u: goto label_1e60a4;
        case 0x1e60a8u: goto label_1e60a8;
        case 0x1e60acu: goto label_1e60ac;
        case 0x1e60b0u: goto label_1e60b0;
        case 0x1e60b4u: goto label_1e60b4;
        case 0x1e60b8u: goto label_1e60b8;
        case 0x1e60bcu: goto label_1e60bc;
        case 0x1e60c0u: goto label_1e60c0;
        case 0x1e60c4u: goto label_1e60c4;
        case 0x1e60c8u: goto label_1e60c8;
        case 0x1e60ccu: goto label_1e60cc;
        case 0x1e60d0u: goto label_1e60d0;
        case 0x1e60d4u: goto label_1e60d4;
        case 0x1e60d8u: goto label_1e60d8;
        case 0x1e60dcu: goto label_1e60dc;
        case 0x1e60e0u: goto label_1e60e0;
        case 0x1e60e4u: goto label_1e60e4;
        case 0x1e60e8u: goto label_1e60e8;
        case 0x1e60ecu: goto label_1e60ec;
        case 0x1e60f0u: goto label_1e60f0;
        case 0x1e60f4u: goto label_1e60f4;
        case 0x1e60f8u: goto label_1e60f8;
        case 0x1e60fcu: goto label_1e60fc;
        case 0x1e6100u: goto label_1e6100;
        case 0x1e6104u: goto label_1e6104;
        case 0x1e6108u: goto label_1e6108;
        case 0x1e610cu: goto label_1e610c;
        case 0x1e6110u: goto label_1e6110;
        case 0x1e6114u: goto label_1e6114;
        case 0x1e6118u: goto label_1e6118;
        case 0x1e611cu: goto label_1e611c;
        case 0x1e6120u: goto label_1e6120;
        case 0x1e6124u: goto label_1e6124;
        case 0x1e6128u: goto label_1e6128;
        case 0x1e612cu: goto label_1e612c;
        case 0x1e6130u: goto label_1e6130;
        case 0x1e6134u: goto label_1e6134;
        case 0x1e6138u: goto label_1e6138;
        case 0x1e613cu: goto label_1e613c;
        case 0x1e6140u: goto label_1e6140;
        case 0x1e6144u: goto label_1e6144;
        case 0x1e6148u: goto label_1e6148;
        case 0x1e614cu: goto label_1e614c;
        case 0x1e6150u: goto label_1e6150;
        case 0x1e6154u: goto label_1e6154;
        case 0x1e6158u: goto label_1e6158;
        case 0x1e615cu: goto label_1e615c;
        case 0x1e6160u: goto label_1e6160;
        case 0x1e6164u: goto label_1e6164;
        case 0x1e6168u: goto label_1e6168;
        case 0x1e616cu: goto label_1e616c;
        case 0x1e6170u: goto label_1e6170;
        case 0x1e6174u: goto label_1e6174;
        case 0x1e6178u: goto label_1e6178;
        case 0x1e617cu: goto label_1e617c;
        case 0x1e6180u: goto label_1e6180;
        case 0x1e6184u: goto label_1e6184;
        case 0x1e6188u: goto label_1e6188;
        case 0x1e618cu: goto label_1e618c;
        case 0x1e6190u: goto label_1e6190;
        case 0x1e6194u: goto label_1e6194;
        case 0x1e6198u: goto label_1e6198;
        case 0x1e619cu: goto label_1e619c;
        case 0x1e61a0u: goto label_1e61a0;
        case 0x1e61a4u: goto label_1e61a4;
        case 0x1e61a8u: goto label_1e61a8;
        case 0x1e61acu: goto label_1e61ac;
        case 0x1e61b0u: goto label_1e61b0;
        case 0x1e61b4u: goto label_1e61b4;
        case 0x1e61b8u: goto label_1e61b8;
        case 0x1e61bcu: goto label_1e61bc;
        case 0x1e61c0u: goto label_1e61c0;
        case 0x1e61c4u: goto label_1e61c4;
        case 0x1e61c8u: goto label_1e61c8;
        case 0x1e61ccu: goto label_1e61cc;
        case 0x1e61d0u: goto label_1e61d0;
        case 0x1e61d4u: goto label_1e61d4;
        case 0x1e61d8u: goto label_1e61d8;
        case 0x1e61dcu: goto label_1e61dc;
        case 0x1e61e0u: goto label_1e61e0;
        case 0x1e61e4u: goto label_1e61e4;
        case 0x1e61e8u: goto label_1e61e8;
        case 0x1e61ecu: goto label_1e61ec;
        case 0x1e61f0u: goto label_1e61f0;
        case 0x1e61f4u: goto label_1e61f4;
        case 0x1e61f8u: goto label_1e61f8;
        case 0x1e61fcu: goto label_1e61fc;
        case 0x1e6200u: goto label_1e6200;
        case 0x1e6204u: goto label_1e6204;
        case 0x1e6208u: goto label_1e6208;
        case 0x1e620cu: goto label_1e620c;
        case 0x1e6210u: goto label_1e6210;
        case 0x1e6214u: goto label_1e6214;
        case 0x1e6218u: goto label_1e6218;
        case 0x1e621cu: goto label_1e621c;
        case 0x1e6220u: goto label_1e6220;
        case 0x1e6224u: goto label_1e6224;
        case 0x1e6228u: goto label_1e6228;
        case 0x1e622cu: goto label_1e622c;
        case 0x1e6230u: goto label_1e6230;
        case 0x1e6234u: goto label_1e6234;
        case 0x1e6238u: goto label_1e6238;
        case 0x1e623cu: goto label_1e623c;
        case 0x1e6240u: goto label_1e6240;
        case 0x1e6244u: goto label_1e6244;
        case 0x1e6248u: goto label_1e6248;
        case 0x1e624cu: goto label_1e624c;
        case 0x1e6250u: goto label_1e6250;
        case 0x1e6254u: goto label_1e6254;
        case 0x1e6258u: goto label_1e6258;
        case 0x1e625cu: goto label_1e625c;
        case 0x1e6260u: goto label_1e6260;
        case 0x1e6264u: goto label_1e6264;
        case 0x1e6268u: goto label_1e6268;
        case 0x1e626cu: goto label_1e626c;
        case 0x1e6270u: goto label_1e6270;
        case 0x1e6274u: goto label_1e6274;
        case 0x1e6278u: goto label_1e6278;
        case 0x1e627cu: goto label_1e627c;
        case 0x1e6280u: goto label_1e6280;
        case 0x1e6284u: goto label_1e6284;
        case 0x1e6288u: goto label_1e6288;
        case 0x1e628cu: goto label_1e628c;
        case 0x1e6290u: goto label_1e6290;
        case 0x1e6294u: goto label_1e6294;
        case 0x1e6298u: goto label_1e6298;
        case 0x1e629cu: goto label_1e629c;
        case 0x1e62a0u: goto label_1e62a0;
        case 0x1e62a4u: goto label_1e62a4;
        case 0x1e62a8u: goto label_1e62a8;
        case 0x1e62acu: goto label_1e62ac;
        case 0x1e62b0u: goto label_1e62b0;
        case 0x1e62b4u: goto label_1e62b4;
        case 0x1e62b8u: goto label_1e62b8;
        case 0x1e62bcu: goto label_1e62bc;
        case 0x1e62c0u: goto label_1e62c0;
        case 0x1e62c4u: goto label_1e62c4;
        case 0x1e62c8u: goto label_1e62c8;
        case 0x1e62ccu: goto label_1e62cc;
        case 0x1e62d0u: goto label_1e62d0;
        case 0x1e62d4u: goto label_1e62d4;
        case 0x1e62d8u: goto label_1e62d8;
        case 0x1e62dcu: goto label_1e62dc;
        case 0x1e62e0u: goto label_1e62e0;
        case 0x1e62e4u: goto label_1e62e4;
        case 0x1e62e8u: goto label_1e62e8;
        case 0x1e62ecu: goto label_1e62ec;
        case 0x1e62f0u: goto label_1e62f0;
        case 0x1e62f4u: goto label_1e62f4;
        case 0x1e62f8u: goto label_1e62f8;
        case 0x1e62fcu: goto label_1e62fc;
        case 0x1e6300u: goto label_1e6300;
        case 0x1e6304u: goto label_1e6304;
        case 0x1e6308u: goto label_1e6308;
        case 0x1e630cu: goto label_1e630c;
        case 0x1e6310u: goto label_1e6310;
        case 0x1e6314u: goto label_1e6314;
        case 0x1e6318u: goto label_1e6318;
        case 0x1e631cu: goto label_1e631c;
        case 0x1e6320u: goto label_1e6320;
        case 0x1e6324u: goto label_1e6324;
        case 0x1e6328u: goto label_1e6328;
        case 0x1e632cu: goto label_1e632c;
        case 0x1e6330u: goto label_1e6330;
        case 0x1e6334u: goto label_1e6334;
        case 0x1e6338u: goto label_1e6338;
        case 0x1e633cu: goto label_1e633c;
        case 0x1e6340u: goto label_1e6340;
        case 0x1e6344u: goto label_1e6344;
        case 0x1e6348u: goto label_1e6348;
        case 0x1e634cu: goto label_1e634c;
        case 0x1e6350u: goto label_1e6350;
        case 0x1e6354u: goto label_1e6354;
        case 0x1e6358u: goto label_1e6358;
        case 0x1e635cu: goto label_1e635c;
        case 0x1e6360u: goto label_1e6360;
        case 0x1e6364u: goto label_1e6364;
        case 0x1e6368u: goto label_1e6368;
        case 0x1e636cu: goto label_1e636c;
        case 0x1e6370u: goto label_1e6370;
        case 0x1e6374u: goto label_1e6374;
        case 0x1e6378u: goto label_1e6378;
        case 0x1e637cu: goto label_1e637c;
        case 0x1e6380u: goto label_1e6380;
        case 0x1e6384u: goto label_1e6384;
        case 0x1e6388u: goto label_1e6388;
        case 0x1e638cu: goto label_1e638c;
        case 0x1e6390u: goto label_1e6390;
        case 0x1e6394u: goto label_1e6394;
        case 0x1e6398u: goto label_1e6398;
        case 0x1e639cu: goto label_1e639c;
        case 0x1e63a0u: goto label_1e63a0;
        case 0x1e63a4u: goto label_1e63a4;
        case 0x1e63a8u: goto label_1e63a8;
        case 0x1e63acu: goto label_1e63ac;
        case 0x1e63b0u: goto label_1e63b0;
        case 0x1e63b4u: goto label_1e63b4;
        case 0x1e63b8u: goto label_1e63b8;
        case 0x1e63bcu: goto label_1e63bc;
        case 0x1e63c0u: goto label_1e63c0;
        case 0x1e63c4u: goto label_1e63c4;
        case 0x1e63c8u: goto label_1e63c8;
        case 0x1e63ccu: goto label_1e63cc;
        case 0x1e63d0u: goto label_1e63d0;
        case 0x1e63d4u: goto label_1e63d4;
        case 0x1e63d8u: goto label_1e63d8;
        case 0x1e63dcu: goto label_1e63dc;
        case 0x1e63e0u: goto label_1e63e0;
        case 0x1e63e4u: goto label_1e63e4;
        case 0x1e63e8u: goto label_1e63e8;
        case 0x1e63ecu: goto label_1e63ec;
        case 0x1e63f0u: goto label_1e63f0;
        case 0x1e63f4u: goto label_1e63f4;
        case 0x1e63f8u: goto label_1e63f8;
        case 0x1e63fcu: goto label_1e63fc;
        case 0x1e6400u: goto label_1e6400;
        case 0x1e6404u: goto label_1e6404;
        case 0x1e6408u: goto label_1e6408;
        case 0x1e640cu: goto label_1e640c;
        case 0x1e6410u: goto label_1e6410;
        case 0x1e6414u: goto label_1e6414;
        case 0x1e6418u: goto label_1e6418;
        case 0x1e641cu: goto label_1e641c;
        case 0x1e6420u: goto label_1e6420;
        case 0x1e6424u: goto label_1e6424;
        case 0x1e6428u: goto label_1e6428;
        case 0x1e642cu: goto label_1e642c;
        case 0x1e6430u: goto label_1e6430;
        case 0x1e6434u: goto label_1e6434;
        case 0x1e6438u: goto label_1e6438;
        case 0x1e643cu: goto label_1e643c;
        case 0x1e6440u: goto label_1e6440;
        case 0x1e6444u: goto label_1e6444;
        case 0x1e6448u: goto label_1e6448;
        case 0x1e644cu: goto label_1e644c;
        case 0x1e6450u: goto label_1e6450;
        case 0x1e6454u: goto label_1e6454;
        case 0x1e6458u: goto label_1e6458;
        case 0x1e645cu: goto label_1e645c;
        case 0x1e6460u: goto label_1e6460;
        case 0x1e6464u: goto label_1e6464;
        case 0x1e6468u: goto label_1e6468;
        case 0x1e646cu: goto label_1e646c;
        case 0x1e6470u: goto label_1e6470;
        case 0x1e6474u: goto label_1e6474;
        case 0x1e6478u: goto label_1e6478;
        case 0x1e647cu: goto label_1e647c;
        case 0x1e6480u: goto label_1e6480;
        case 0x1e6484u: goto label_1e6484;
        case 0x1e6488u: goto label_1e6488;
        case 0x1e648cu: goto label_1e648c;
        case 0x1e6490u: goto label_1e6490;
        case 0x1e6494u: goto label_1e6494;
        case 0x1e6498u: goto label_1e6498;
        case 0x1e649cu: goto label_1e649c;
        case 0x1e64a0u: goto label_1e64a0;
        case 0x1e64a4u: goto label_1e64a4;
        case 0x1e64a8u: goto label_1e64a8;
        case 0x1e64acu: goto label_1e64ac;
        case 0x1e64b0u: goto label_1e64b0;
        case 0x1e64b4u: goto label_1e64b4;
        case 0x1e64b8u: goto label_1e64b8;
        case 0x1e64bcu: goto label_1e64bc;
        case 0x1e64c0u: goto label_1e64c0;
        case 0x1e64c4u: goto label_1e64c4;
        case 0x1e64c8u: goto label_1e64c8;
        case 0x1e64ccu: goto label_1e64cc;
        case 0x1e64d0u: goto label_1e64d0;
        case 0x1e64d4u: goto label_1e64d4;
        case 0x1e64d8u: goto label_1e64d8;
        case 0x1e64dcu: goto label_1e64dc;
        case 0x1e64e0u: goto label_1e64e0;
        case 0x1e64e4u: goto label_1e64e4;
        case 0x1e64e8u: goto label_1e64e8;
        case 0x1e64ecu: goto label_1e64ec;
        case 0x1e64f0u: goto label_1e64f0;
        case 0x1e64f4u: goto label_1e64f4;
        case 0x1e64f8u: goto label_1e64f8;
        case 0x1e64fcu: goto label_1e64fc;
        case 0x1e6500u: goto label_1e6500;
        case 0x1e6504u: goto label_1e6504;
        case 0x1e6508u: goto label_1e6508;
        case 0x1e650cu: goto label_1e650c;
        case 0x1e6510u: goto label_1e6510;
        case 0x1e6514u: goto label_1e6514;
        case 0x1e6518u: goto label_1e6518;
        case 0x1e651cu: goto label_1e651c;
        case 0x1e6520u: goto label_1e6520;
        case 0x1e6524u: goto label_1e6524;
        case 0x1e6528u: goto label_1e6528;
        case 0x1e652cu: goto label_1e652c;
        default: break;
    }

    ctx->pc = 0x1e5618u;

label_1e5618:
    // 0x1e5618: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1e5618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1e561c:
    // 0x1e561c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e5620:
    // 0x1e5620: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1e5620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1e5624:
    // 0x1e5624: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1e5624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1e5628:
    // 0x1e5628: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e5628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e562c:
    // 0x1e562c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1e562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1e5630:
    // 0x1e5630: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1e5630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1e5634:
    // 0x1e5634: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1e5634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1e5638:
    // 0x1e5638: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1e5638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1e563c:
    // 0x1e563c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1e563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1e5640:
    // 0x1e5640: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1e5640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1e5644:
    // 0x1e5644: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1e5644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1e5648:
    // 0x1e5648: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e5648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1e564c:
    // 0x1e564c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e5650:
    // 0x1e5650: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1e5650u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1e5654:
    // 0x1e5654: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1e5654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1e5658:
    // 0x1e5658: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e5658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e565c:
    // 0x1e565c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1e5660:
    // 0x1e5660: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
label_1e5664:
    if (ctx->pc == 0x1E5664u) {
        ctx->pc = 0x1E5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5660u;
        // 0x1e5664: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5668u;
        goto label_1e5668;
    }
    ctx->pc = 0x1E5660u;
    {
        const bool branch_taken_0x1e5660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5660u;
        // 0x1e5664: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5660) {
            ctx->pc = 0x1E5B78u;
            goto label_1e5b78;
        }
    }
    ctx->pc = 0x1E5668u;
label_1e5668:
    // 0x1e5668: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e5668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e566c:
    // 0x1e566c: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_1e5670:
    if (ctx->pc == 0x1E5670u) {
        ctx->pc = 0x1E5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E566Cu;
        // 0x1e5670: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5674u;
        goto label_1e5674;
    }
    ctx->pc = 0x1E566Cu;
    {
        const bool branch_taken_0x1e566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E566Cu;
        // 0x1e5670: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e566c) {
            ctx->pc = 0x1E58F8u;
            goto label_1e58f8;
        }
    }
    ctx->pc = 0x1E5674u;
label_1e5674:
    // 0x1e5674: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1e5674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1e5678:
    // 0x1e5678: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e5678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1e567c:
    // 0x1e567c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e567cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e5680:
    // 0x1e5680: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1e5680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1e5684:
    // 0x1e5684: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e5684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1e5688:
    // 0x1e5688: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e5688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1e568c:
    // 0x1e568c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1e568cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1e5690:
    // 0x1e5690: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1e5690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_1e5694:
    // 0x1e5694: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1e5694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1e5698:
    // 0x1e5698: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e5698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1e569c:
    // 0x1e569c: 0x2642f110  addiu       $v0, $s2, -0xEF0
    ctx->pc = 0x1e569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963472));
label_1e56a0:
    // 0x1e56a0: 0x3c01be2e  lui         $at, 0xBE2E
    ctx->pc = 0x1e56a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48686 << 16));
label_1e56a4:
    // 0x1e56a4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1e56a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1e56a8:
    // 0x1e56a8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1e56a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e56ac:
    // 0x1e56ac: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1e56acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1e56b0:
    // 0x1e56b0: 0xe524f104  swc1        $f4, -0xEFC($t1)
    ctx->pc = 0x1e56b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294963460), bits); }
label_1e56b4:
    // 0x1e56b4: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1e56b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_1e56b8:
    // 0x1e56b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e56b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e56bc:
    // 0x1e56bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e56bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e56c0:
    // 0x1e56c0: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x1e56c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1e56c4:
    // 0x1e56c4: 0x3c01bdb6  lui         $at, 0xBDB6
    ctx->pc = 0x1e56c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48566 << 16));
label_1e56c8:
    // 0x1e56c8: 0x342145a2  ori         $at, $at, 0x45A2
    ctx->pc = 0x1e56c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17826);
label_1e56cc:
    // 0x1e56cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e56ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e56d0:
    // 0x1e56d0: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x1e56d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1e56d4:
    // 0x1e56d4: 0xe4450040  swc1        $f5, 0x40($v0)
    ctx->pc = 0x1e56d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_1e56d8:
    // 0x1e56d8: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x1e56d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1e56dc:
    // 0x1e56dc: 0xe4460020  swc1        $f6, 0x20($v0)
    ctx->pc = 0x1e56dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1e56e0:
    // 0x1e56e0: 0x244800e0  addiu       $t0, $v0, 0xE0
    ctx->pc = 0x1e56e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_1e56e4:
    // 0x1e56e4: 0xe4470030  swc1        $f7, 0x30($v0)
    ctx->pc = 0x1e56e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_1e56e8:
    // 0x1e56e8: 0x244a0100  addiu       $t2, $v0, 0x100
    ctx->pc = 0x1e56e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1e56ec:
    // 0x1e56ec: 0x3c01bccc  lui         $at, 0xBCCC
    ctx->pc = 0x1e56ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48332 << 16));
label_1e56f0:
    // 0x1e56f0: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x1e56f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_1e56f4:
    // 0x1e56f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e56f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e56f8:
    // 0x1e56f8: 0x24490060  addiu       $t1, $v0, 0x60
    ctx->pc = 0x1e56f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e56fc:
    // 0x1e56fc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1e56fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1e5700:
    // 0x1e5700: 0x244e00f0  addiu       $t6, $v0, 0xF0
    ctx->pc = 0x1e5700u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_1e5704:
    // 0x1e5704: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1e5704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1e5708:
    // 0x1e5708: 0x244f0080  addiu       $t7, $v0, 0x80
    ctx->pc = 0x1e5708u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1e570c:
    // 0x1e570c: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x1e570cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1e5710:
    // 0x1e5710: 0x245100a0  addiu       $s1, $v0, 0xA0
    ctx->pc = 0x1e5710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1e5714:
    // 0x1e5714: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1e5714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1e5718:
    // 0x1e5718: 0x24500110  addiu       $s0, $v0, 0x110
    ctx->pc = 0x1e5718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_1e571c:
    // 0x1e571c: 0x3c01bc75  lui         $at, 0xBC75
    ctx->pc = 0x1e571cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48245 << 16));
label_1e5720:
    // 0x1e5720: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e5720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1e5724:
    // 0x1e5724: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1e5724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e5728:
    // 0x1e5728: 0x244d0090  addiu       $t5, $v0, 0x90
    ctx->pc = 0x1e5728u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1e572c:
    // 0x1e572c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1e572cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1e5730:
    // 0x1e5730: 0x244c0050  addiu       $t4, $v0, 0x50
    ctx->pc = 0x1e5730u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1e5734:
    // 0x1e5734: 0xe44800c0  swc1        $f8, 0xC0($v0)
    ctx->pc = 0x1e5734u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_1e5738:
    // 0x1e5738: 0x244b0070  addiu       $t3, $v0, 0x70
    ctx->pc = 0x1e5738u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1e573c:
    // 0x1e573c: 0x3c01be23  lui         $at, 0xBE23
    ctx->pc = 0x1e573cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48675 << 16));
label_1e5740:
    // 0x1e5740: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e5740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e5744:
    // 0x1e5744: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1e5744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1e5748:
    // 0x1e5748: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1e5748u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1e574c:
    // 0x1e574c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1e574cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_1e5750:
    // 0x1e5750: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e5750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e5754:
    // 0x1e5754: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1e5754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1e5758:
    // 0x1e5758: 0xe4e90008  swc1        $f9, 0x8($a3)
    ctx->pc = 0x1e5758u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1e575c:
    // 0x1e575c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1e575cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_1e5760:
    // 0x1e5760: 0xe64ef110  swc1        $f14, -0xEF0($s2)
    ctx->pc = 0x1e5760u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294963472), bits); }
label_1e5764:
    // 0x1e5764: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1e5764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_1e5768:
    // 0x1e5768: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e5768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1e576c:
    // 0x1e576c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e576cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e5770:
    // 0x1e5770: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e5770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e5774:
    // 0x1e5774: 0xe44e0008  swc1        $f14, 0x8($v0)
    ctx->pc = 0x1e5774u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e5778:
    // 0x1e5778: 0xe50d0008  swc1        $f13, 0x8($t0)
    ctx->pc = 0x1e5778u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_1e577c:
    // 0x1e577c: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x1e577cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_1e5780:
    // 0x1e5780: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x1e5780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_1e5784:
    // 0x1e5784: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1e5784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1e5788:
    // 0x1e5788: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1e5788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1e578c:
    // 0x1e578c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1e578cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1e5790:
    // 0x1e5790: 0xe44b00b0  swc1        $f11, 0xB0($v0)
    ctx->pc = 0x1e5790u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
label_1e5794:
    // 0x1e5794: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1e5794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1e5798:
    // 0x1e5798: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1e5798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1e579c:
    // 0x1e579c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e579cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e57a0:
    // 0x1e57a0: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1e57a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1e57a4:
    // 0x1e57a4: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1e57a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1e57a8:
    // 0x1e57a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e57a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e57ac:
    // 0x1e57ac: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1e57acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1e57b0:
    // 0x1e57b0: 0xe44c00d0  swc1        $f12, 0xD0($v0)
    ctx->pc = 0x1e57b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_1e57b4:
    // 0x1e57b4: 0xe4aa0004  swc1        $f10, 0x4($a1)
    ctx->pc = 0x1e57b4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1e57b8:
    // 0x1e57b8: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x1e57b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1e57bc:
    // 0x1e57bc: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x1e57bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
label_1e57c0:
    // 0x1e57c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e57c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e57c4:
    // 0x1e57c4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1e57c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1e57c8:
    // 0x1e57c8: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x1e57c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1e57cc:
    // 0x1e57cc: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x1e57ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1e57d0:
    // 0x1e57d0: 0xe44f0010  swc1        $f15, 0x10($v0)
    ctx->pc = 0x1e57d0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1e57d4:
    // 0x1e57d4: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x1e57d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1e57d8:
    // 0x1e57d8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1e57d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1e57dc:
    // 0x1e57dc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e57dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1e57e0:
    // 0x1e57e0: 0xe44b00e0  swc1        $f11, 0xE0($v0)
    ctx->pc = 0x1e57e0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
label_1e57e4:
    // 0x1e57e4: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x1e57e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_1e57e8:
    // 0x1e57e8: 0xe44c0100  swc1        $f12, 0x100($v0)
    ctx->pc = 0x1e57e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1e57ec:
    // 0x1e57ec: 0xe54a0004  swc1        $f10, 0x4($t2)
    ctx->pc = 0x1e57ecu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_1e57f0:
    // 0x1e57f0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1e57f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1e57f4:
    // 0x1e57f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e57f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e57f8:
    // 0x1e57f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e57f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e57fc:
    // 0x1e57fc: 0xe5420008  swc1        $f2, 0x8($t2)
    ctx->pc = 0x1e57fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_1e5800:
    // 0x1e5800: 0xe4410060  swc1        $f1, 0x60($v0)
    ctx->pc = 0x1e5800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_1e5804:
    // 0x1e5804: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x1e5804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_1e5808:
    // 0x1e5808: 0x3c01bd0f  lui         $at, 0xBD0F
    ctx->pc = 0x1e5808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48399 << 16));
label_1e580c:
    // 0x1e580c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1e580cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1e5810:
    // 0x1e5810: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e5810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e5814:
    // 0x1e5814: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x1e5814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
label_1e5818:
    // 0x1e5818: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1e5818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1e581c:
    // 0x1e581c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e581cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e5820:
    // 0x1e5820: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e5820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e5824:
    // 0x1e5824: 0xe44300f0  swc1        $f3, 0xF0($v0)
    ctx->pc = 0x1e5824u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_1e5828:
    // 0x1e5828: 0x3c01bd85  lui         $at, 0xBD85
    ctx->pc = 0x1e5828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48517 << 16));
label_1e582c:
    // 0x1e582c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1e582cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1e5830:
    // 0x1e5830: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e5830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1e5834:
    // 0x1e5834: 0xe5c40008  swc1        $f4, 0x8($t6)
    ctx->pc = 0x1e5834u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_1e5838:
    // 0x1e5838: 0xe5c0000c  swc1        $f0, 0xC($t6)
    ctx->pc = 0x1e5838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
label_1e583c:
    // 0x1e583c: 0xe5e50008  swc1        $f5, 0x8($t7)
    ctx->pc = 0x1e583cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
label_1e5840:
    // 0x1e5840: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x1e5840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
label_1e5844:
    // 0x1e5844: 0x3c01be75  lui         $at, 0xBE75
    ctx->pc = 0x1e5844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48757 << 16));
label_1e5848:
    // 0x1e5848: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e5848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1e584c:
    // 0x1e584c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e584cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1e5850:
    // 0x1e5850: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1e5850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1e5854:
    // 0x1e5854: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1e5854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1e5858:
    // 0x1e5858: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1e5858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1e585c:
    // 0x1e585c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1e585cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e5860:
    // 0x1e5860: 0xe4460110  swc1        $f6, 0x110($v0)
    ctx->pc = 0x1e5860u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1e5864:
    // 0x1e5864: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1e5864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1e5868:
    // 0x1e5868: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e5868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e586c:
    // 0x1e586c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1e586cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e5870:
    // 0x1e5870: 0xe6070008  swc1        $f7, 0x8($s0)
    ctx->pc = 0x1e5870u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1e5874:
    // 0x1e5874: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1e5874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1e5878:
    // 0x1e5878: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x1e5878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
label_1e587c:
    // 0x1e587c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e587cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e5880:
    // 0x1e5880: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1e5880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1e5884:
    // 0x1e5884: 0xe4480090  swc1        $f8, 0x90($v0)
    ctx->pc = 0x1e5884u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_1e5888:
    // 0x1e5888: 0xe5a90008  swc1        $f9, 0x8($t5)
    ctx->pc = 0x1e5888u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
label_1e588c:
    // 0x1e588c: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x1e588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
label_1e5890:
    // 0x1e5890: 0x3c01bdd7  lui         $at, 0xBDD7
    ctx->pc = 0x1e5890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48599 << 16));
label_1e5894:
    // 0x1e5894: 0x34210a3e  ori         $at, $at, 0xA3E
    ctx->pc = 0x1e5894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2622);
label_1e5898:
    // 0x1e5898: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e5898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e589c:
    // 0x1e589c: 0xe44b0050  swc1        $f11, 0x50($v0)
    ctx->pc = 0x1e589cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_1e58a0:
    // 0x1e58a0: 0xe58d0008  swc1        $f13, 0x8($t4)
    ctx->pc = 0x1e58a0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_1e58a4:
    // 0x1e58a4: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x1e58a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_1e58a8:
    // 0x1e58a8: 0xe44c0070  swc1        $f12, 0x70($v0)
    ctx->pc = 0x1e58a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_1e58ac:
    // 0x1e58ac: 0xe56a0004  swc1        $f10, 0x4($t3)
    ctx->pc = 0x1e58acu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_1e58b0:
    // 0x1e58b0: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x1e58b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_1e58b4:
    // 0x1e58b4: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x1e58b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_1e58b8:
    // 0x1e58b8: 0xe52f0008  swc1        $f15, 0x8($t1)
    ctx->pc = 0x1e58b8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_1e58bc:
    // 0x1e58bc: 0xe5c20004  swc1        $f2, 0x4($t6)
    ctx->pc = 0x1e58bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_1e58c0:
    // 0x1e58c0: 0xe44b0080  swc1        $f11, 0x80($v0)
    ctx->pc = 0x1e58c0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_1e58c4:
    // 0x1e58c4: 0xe5e20004  swc1        $f2, 0x4($t7)
    ctx->pc = 0x1e58c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
label_1e58c8:
    // 0x1e58c8: 0xe44c00a0  swc1        $f12, 0xA0($v0)
    ctx->pc = 0x1e58c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
label_1e58cc:
    // 0x1e58cc: 0xe62a0004  swc1        $f10, 0x4($s1)
    ctx->pc = 0x1e58ccu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1e58d0:
    // 0x1e58d0: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1e58d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1e58d4:
    // 0x1e58d4: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1e58d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1e58d8:
    // 0x1e58d8: 0xe5a20004  swc1        $f2, 0x4($t5)
    ctx->pc = 0x1e58d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
label_1e58dc:
    // 0x1e58dc: 0xe5820004  swc1        $f2, 0x4($t4)
    ctx->pc = 0x1e58dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_1e58e0:
    // 0x1e58e0: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x1e58e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_1e58e4:
    // 0x1e58e4: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1e58e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1e58e8:
    // 0x1e58e8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1e58e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1e58ec:
    // 0x1e58ec: 0xe5620008  swc1        $f2, 0x8($t3)
    ctx->pc = 0x1e58ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_1e58f0:
    // 0x1e58f0: 0x100000fa  b           . + 4 + (0xFA << 2)
label_1e58f4:
    if (ctx->pc == 0x1E58F4u) {
        ctx->pc = 0x1E58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58F0u;
        // 0x1e58f4: 0xe66ef2b8  swc1        $f14, -0xD48($s3) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294963896), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E58F8u;
        goto label_1e58f8;
    }
    ctx->pc = 0x1E58F0u;
    {
        const bool branch_taken_0x1e58f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58F0u;
        // 0x1e58f4: 0xe66ef2b8  swc1        $f14, -0xD48($s3) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294963896), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58f0) {
            ctx->pc = 0x1E5CDCu;
            goto label_1e5cdc;
        }
    }
    ctx->pc = 0x1E58F8u;
label_1e58f8:
    // 0x1e58f8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1e58f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1e58fc:
    // 0x1e58fc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e58fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1e5900:
    // 0x1e5900: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e5900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e5904:
    // 0x1e5904: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1e5904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1e5908:
    // 0x1e5908: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e5908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1e590c:
    // 0x1e590c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e590cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e5910:
    // 0x1e5910: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1e5910u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1e5914:
    // 0x1e5914: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1e5914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_1e5918:
    // 0x1e5918: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1e5918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1e591c:
    // 0x1e591c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e591cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e5920:
    // 0x1e5920: 0x2642f110  addiu       $v0, $s2, -0xEF0
    ctx->pc = 0x1e5920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963472));
label_1e5924:
    // 0x1e5924: 0xe522f104  swc1        $f2, -0xEFC($t1)
    ctx->pc = 0x1e5924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294963460), bits); }
label_1e5928:
    // 0x1e5928: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1e5928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1e592c:
    // 0x1e592c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e592cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e5930:
    // 0x1e5930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e5930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5934:
    // 0x1e5934: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x1e5934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_1e5938:
    // 0x1e5938: 0x3c01bdb6  lui         $at, 0xBDB6
    ctx->pc = 0x1e5938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48566 << 16));
label_1e593c:
    // 0x1e593c: 0x342145a2  ori         $at, $at, 0x45A2
    ctx->pc = 0x1e593cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17826);
label_1e5940:
    // 0x1e5940: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e5940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1e5944:
    // 0x1e5944: 0x244700d0  addiu       $a3, $v0, 0xD0
    ctx->pc = 0x1e5944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1e5948:
    // 0x1e5948: 0xe4430040  swc1        $f3, 0x40($v0)
    ctx->pc = 0x1e5948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_1e594c:
    // 0x1e594c: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x1e594cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1e5950:
    // 0x1e5950: 0xe4440020  swc1        $f4, 0x20($v0)
    ctx->pc = 0x1e5950u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1e5954:
    // 0x1e5954: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1e5954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1e5958:
    // 0x1e5958: 0x3c01bd38  lui         $at, 0xBD38
    ctx->pc = 0x1e5958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48440 << 16));
label_1e595c:
    // 0x1e595c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1e595cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1e5960:
    // 0x1e5960: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e5960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1e5964:
    // 0x1e5964: 0x244800e0  addiu       $t0, $v0, 0xE0
    ctx->pc = 0x1e5964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_1e5968:
    // 0x1e5968: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x1e5968u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1e596c:
    // 0x1e596c: 0x244a0100  addiu       $t2, $v0, 0x100
    ctx->pc = 0x1e596cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1e5970:
    // 0x1e5970: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1e5970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1e5974:
    // 0x1e5974: 0x24490060  addiu       $t1, $v0, 0x60
    ctx->pc = 0x1e5974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e5978:
    // 0x1e5978: 0xe4a60008  swc1        $f6, 0x8($a1)
    ctx->pc = 0x1e5978u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1e597c:
    // 0x1e597c: 0x244e00f0  addiu       $t6, $v0, 0xF0
    ctx->pc = 0x1e597cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_1e5980:
    // 0x1e5980: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1e5980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1e5984:
    // 0x1e5984: 0x244f0080  addiu       $t7, $v0, 0x80
    ctx->pc = 0x1e5984u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1e5988:
    // 0x1e5988: 0x3c01bc75  lui         $at, 0xBC75
    ctx->pc = 0x1e5988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48245 << 16));
label_1e598c:
    // 0x1e598c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e598cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1e5990:
    // 0x1e5990: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1e5990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1e5994:
    // 0x1e5994: 0x245100a0  addiu       $s1, $v0, 0xA0
    ctx->pc = 0x1e5994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1e5998:
    // 0x1e5998: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1e5998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_1e599c:
    // 0x1e599c: 0x24500110  addiu       $s0, $v0, 0x110
    ctx->pc = 0x1e599cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_1e59a0:
    // 0x1e59a0: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1e59a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_1e59a4:
    // 0x1e59a4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e59a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e59a8:
    // 0x1e59a8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1e59a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e59ac:
    // 0x1e59ac: 0x244d0090  addiu       $t5, $v0, 0x90
    ctx->pc = 0x1e59acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1e59b0:
    // 0x1e59b0: 0xe44900c0  swc1        $f9, 0xC0($v0)
    ctx->pc = 0x1e59b0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_1e59b4:
    // 0x1e59b4: 0x244c0050  addiu       $t4, $v0, 0x50
    ctx->pc = 0x1e59b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1e59b8:
    // 0x1e59b8: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x1e59b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
label_1e59bc:
    // 0x1e59bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e59bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e59c0:
    // 0x1e59c0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1e59c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e59c4:
    // 0x1e59c4: 0x244b0070  addiu       $t3, $v0, 0x70
    ctx->pc = 0x1e59c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1e59c8:
    // 0x1e59c8: 0xe4c70008  swc1        $f7, 0x8($a2)
    ctx->pc = 0x1e59c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1e59cc:
    // 0x1e59cc: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1e59ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1e59d0:
    // 0x1e59d0: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1e59d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_1e59d4:
    // 0x1e59d4: 0x3c01be2e  lui         $at, 0xBE2E
    ctx->pc = 0x1e59d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48686 << 16));
label_1e59d8:
    // 0x1e59d8: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1e59d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1e59dc:
    // 0x1e59dc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1e59dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1e59e0:
    // 0x1e59e0: 0xe4480010  swc1        $f8, 0x10($v0)
    ctx->pc = 0x1e59e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1e59e4:
    // 0x1e59e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e59e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e59e8:
    // 0x1e59e8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1e59e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1e59ec:
    // 0x1e59ec: 0xe46f0008  swc1        $f15, 0x8($v1)
    ctx->pc = 0x1e59ecu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1e59f0:
    // 0x1e59f0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1e59f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1e59f4:
    // 0x1e59f4: 0xe64ef110  swc1        $f14, -0xEF0($s2)
    ctx->pc = 0x1e59f4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294963472), bits); }
label_1e59f8:
    // 0x1e59f8: 0x3c01bba3  lui         $at, 0xBBA3
    ctx->pc = 0x1e59f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48035 << 16));
label_1e59fc:
    // 0x1e59fc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e59fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e5a00:
    // 0x1e5a00: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e5a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e5a04:
    // 0x1e5a04: 0xe44e0008  swc1        $f14, 0x8($v0)
    ctx->pc = 0x1e5a04u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e5a08:
    // 0x1e5a08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e5a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e5a0c:
    // 0x1e5a0c: 0xe50d0008  swc1        $f13, 0x8($t0)
    ctx->pc = 0x1e5a0cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_1e5a10:
    // 0x1e5a10: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x1e5a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_1e5a14:
    // 0x1e5a14: 0xe44f0030  swc1        $f15, 0x30($v0)
    ctx->pc = 0x1e5a14u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_1e5a18:
    // 0x1e5a18: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x1e5a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_1e5a1c:
    // 0x1e5a1c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1e5a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1e5a20:
    // 0x1e5a20: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1e5a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1e5a24:
    // 0x1e5a24: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1e5a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1e5a28:
    // 0x1e5a28: 0xe44b00b0  swc1        $f11, 0xB0($v0)
    ctx->pc = 0x1e5a28u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
label_1e5a2c:
    // 0x1e5a2c: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1e5a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1e5a30:
    // 0x1e5a30: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1e5a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1e5a34:
    // 0x1e5a34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e5a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e5a38:
    // 0x1e5a38: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1e5a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1e5a3c:
    // 0x1e5a3c: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1e5a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1e5a40:
    // 0x1e5a40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e5a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e5a44:
    // 0x1e5a44: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1e5a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1e5a48:
    // 0x1e5a48: 0xe44c00d0  swc1        $f12, 0xD0($v0)
    ctx->pc = 0x1e5a48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_1e5a4c:
    // 0x1e5a4c: 0xe4ea0004  swc1        $f10, 0x4($a3)
    ctx->pc = 0x1e5a4cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1e5a50:
    // 0x1e5a50: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x1e5a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1e5a54:
    // 0x1e5a54: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1e5a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1e5a58:
    // 0x1e5a58: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1e5a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1e5a5c:
    // 0x1e5a5c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1e5a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1e5a60:
    // 0x1e5a60: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e5a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1e5a64:
    // 0x1e5a64: 0xe44b00e0  swc1        $f11, 0xE0($v0)
    ctx->pc = 0x1e5a64u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
label_1e5a68:
    // 0x1e5a68: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x1e5a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_1e5a6c:
    // 0x1e5a6c: 0xe44c0100  swc1        $f12, 0x100($v0)
    ctx->pc = 0x1e5a6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1e5a70:
    // 0x1e5a70: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1e5a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1e5a74:
    // 0x1e5a74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e5a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e5a78:
    // 0x1e5a78: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e5a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e5a7c:
    // 0x1e5a7c: 0xe54a0004  swc1        $f10, 0x4($t2)
    ctx->pc = 0x1e5a7cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_1e5a80:
    // 0x1e5a80: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x1e5a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_1e5a84:
    // 0x1e5a84: 0xe44d0060  swc1        $f13, 0x60($v0)
    ctx->pc = 0x1e5a84u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_1e5a88:
    // 0x1e5a88: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x1e5a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_1e5a8c:
    // 0x1e5a8c: 0x3c01bd0f  lui         $at, 0xBD0F
    ctx->pc = 0x1e5a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48399 << 16));
label_1e5a90:
    // 0x1e5a90: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1e5a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1e5a94:
    // 0x1e5a94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e5a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e5a98:
    // 0x1e5a98: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x1e5a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
label_1e5a9c:
    // 0x1e5a9c: 0xe44200f0  swc1        $f2, 0xF0($v0)
    ctx->pc = 0x1e5a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_1e5aa0:
    // 0x1e5aa0: 0x3c01bdae  lui         $at, 0xBDAE
    ctx->pc = 0x1e5aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48558 << 16));
label_1e5aa4:
    // 0x1e5aa4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1e5aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1e5aa8:
    // 0x1e5aa8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e5aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e5aac:
    // 0x1e5aac: 0xe5c0000c  swc1        $f0, 0xC($t6)
    ctx->pc = 0x1e5aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
label_1e5ab0:
    // 0x1e5ab0: 0xe5e30008  swc1        $f3, 0x8($t7)
    ctx->pc = 0x1e5ab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
label_1e5ab4:
    // 0x1e5ab4: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x1e5ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
label_1e5ab8:
    // 0x1e5ab8: 0x3c01be75  lui         $at, 0xBE75
    ctx->pc = 0x1e5ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48757 << 16));
label_1e5abc:
    // 0x1e5abc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e5abcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1e5ac0:
    // 0x1e5ac0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e5ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e5ac4:
    // 0x1e5ac4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1e5ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1e5ac8:
    // 0x1e5ac8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1e5ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1e5acc:
    // 0x1e5acc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e5accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e5ad0:
    // 0x1e5ad0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e5ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1e5ad4:
    // 0x1e5ad4: 0xe4440110  swc1        $f4, 0x110($v0)
    ctx->pc = 0x1e5ad4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1e5ad8:
    // 0x1e5ad8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1e5ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1e5adc:
    // 0x1e5adc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e5adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e5ae0:
    // 0x1e5ae0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e5ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1e5ae4:
    // 0x1e5ae4: 0xe6050008  swc1        $f5, 0x8($s0)
    ctx->pc = 0x1e5ae4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1e5ae8:
    // 0x1e5ae8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1e5ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1e5aec:
    // 0x1e5aec: 0x3c01bd75  lui         $at, 0xBD75
    ctx->pc = 0x1e5aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48501 << 16));
label_1e5af0:
    // 0x1e5af0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e5af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1e5af4:
    // 0x1e5af4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1e5af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e5af8:
    // 0x1e5af8: 0xe4460090  swc1        $f6, 0x90($v0)
    ctx->pc = 0x1e5af8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_1e5afc:
    // 0x1e5afc: 0xe5a70008  swc1        $f7, 0x8($t5)
    ctx->pc = 0x1e5afcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
label_1e5b00:
    // 0x1e5b00: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x1e5b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
label_1e5b04:
    // 0x1e5b04: 0x3c01be00  lui         $at, 0xBE00
    ctx->pc = 0x1e5b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48640 << 16));
label_1e5b08:
    // 0x1e5b08: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1e5b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e5b0c:
    // 0x1e5b0c: 0xe44b0050  swc1        $f11, 0x50($v0)
    ctx->pc = 0x1e5b0cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_1e5b10:
    // 0x1e5b10: 0xe5880008  swc1        $f8, 0x8($t4)
    ctx->pc = 0x1e5b10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_1e5b14:
    // 0x1e5b14: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x1e5b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_1e5b18:
    // 0x1e5b18: 0xe44c0070  swc1        $f12, 0x70($v0)
    ctx->pc = 0x1e5b18u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_1e5b1c:
    // 0x1e5b1c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1e5b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_1e5b20:
    // 0x1e5b20: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e5b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e5b24:
    // 0x1e5b24: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1e5b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1e5b28:
    // 0x1e5b28: 0xe56a0004  swc1        $f10, 0x4($t3)
    ctx->pc = 0x1e5b28u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_1e5b2c:
    // 0x1e5b2c: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x1e5b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_1e5b30:
    // 0x1e5b30: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x1e5b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_1e5b34:
    // 0x1e5b34: 0xe5290008  swc1        $f9, 0x8($t1)
    ctx->pc = 0x1e5b34u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_1e5b38:
    // 0x1e5b38: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x1e5b38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_1e5b3c:
    // 0x1e5b3c: 0xe5cd0008  swc1        $f13, 0x8($t6)
    ctx->pc = 0x1e5b3cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_1e5b40:
    // 0x1e5b40: 0xe44b0080  swc1        $f11, 0x80($v0)
    ctx->pc = 0x1e5b40u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_1e5b44:
    // 0x1e5b44: 0xe5e10004  swc1        $f1, 0x4($t7)
    ctx->pc = 0x1e5b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
label_1e5b48:
    // 0x1e5b48: 0xe44c00a0  swc1        $f12, 0xA0($v0)
    ctx->pc = 0x1e5b48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
label_1e5b4c:
    // 0x1e5b4c: 0xe62a0004  swc1        $f10, 0x4($s1)
    ctx->pc = 0x1e5b4cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1e5b50:
    // 0x1e5b50: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1e5b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1e5b54:
    // 0x1e5b54: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1e5b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1e5b58:
    // 0x1e5b58: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x1e5b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
label_1e5b5c:
    // 0x1e5b5c: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x1e5b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_1e5b60:
    // 0x1e5b60: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x1e5b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_1e5b64:
    // 0x1e5b64: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1e5b64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1e5b68:
    // 0x1e5b68: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1e5b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1e5b6c:
    // 0x1e5b6c: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x1e5b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_1e5b70:
    // 0x1e5b70: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1e5b74:
    if (ctx->pc == 0x1E5B74u) {
        ctx->pc = 0x1E5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B70u;
        // 0x1e5b74: 0xe66ef2b8  swc1        $f14, -0xD48($s3) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294963896), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B78u;
        goto label_1e5b78;
    }
    ctx->pc = 0x1E5B70u;
    {
        const bool branch_taken_0x1e5b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B70u;
        // 0x1e5b74: 0xe66ef2b8  swc1        $f14, -0xD48($s3) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294963896), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b70) {
            ctx->pc = 0x1E5CDCu;
            goto label_1e5cdc;
        }
    }
    ctx->pc = 0x1E5B78u;
label_1e5b78:
    // 0x1e5b78: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1e5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1e5b7c:
    // 0x1e5b7c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_1e5b80:
    if (ctx->pc == 0x1E5B80u) {
        ctx->pc = 0x1E5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B7Cu;
        // 0x1e5b80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B84u;
        goto label_1e5b84;
    }
    ctx->pc = 0x1E5B7Cu;
    {
        const bool branch_taken_0x1e5b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B7Cu;
        // 0x1e5b80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b7c) {
            ctx->pc = 0x1E5CBCu;
            goto label_1e5cbc;
        }
    }
    ctx->pc = 0x1E5B84u;
label_1e5b84:
    // 0x1e5b84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e5b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e5b88:
    // 0x1e5b88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e5b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e5b8c:
    // 0x1e5b8c: 0x2442f110  addiu       $v0, $v0, -0xEF0
    ctx->pc = 0x1e5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963472));
label_1e5b90:
    // 0x1e5b90: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1e5b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1e5b94:
    // 0x1e5b94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e5b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e5b98:
    // 0x1e5b98: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1e5b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1e5b9c:
    // 0x1e5b9c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1e5b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1e5ba0:
    // 0x1e5ba0: 0x3c013bc4  lui         $at, 0x3BC4
    ctx->pc = 0x1e5ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15300 << 16));
label_1e5ba4:
    // 0x1e5ba4: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1e5ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1e5ba8:
    // 0x1e5ba8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e5ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1e5bac:
    // 0x1e5bac: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1e5bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1e5bb0:
    // 0x1e5bb0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1e5bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1e5bb4:
    // 0x1e5bb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e5bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5bb8:
    // 0x1e5bb8: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x1e5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1e5bbc:
    // 0x1e5bbc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1e5bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1e5bc0:
    // 0x1e5bc0: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x1e5bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1e5bc4:
    // 0x1e5bc4: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1e5bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_1e5bc8:
    // 0x1e5bc8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e5bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e5bcc:
    // 0x1e5bcc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e5bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e5bd0:
    // 0x1e5bd0: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e5bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_1e5bd4:
    // 0x1e5bd4: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1e5bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_1e5bd8:
    // 0x1e5bd8: 0xe4490008  swc1        $f9, 0x8($v0)
    ctx->pc = 0x1e5bd8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e5bdc:
    // 0x1e5bdc: 0xe4460090  swc1        $f6, 0x90($v0)
    ctx->pc = 0x1e5bdcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_1e5be0:
    // 0x1e5be0: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1e5be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_1e5be4:
    // 0x1e5be4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e5be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e5be8:
    // 0x1e5be8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e5be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e5bec:
    // 0x1e5bec: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x1e5becu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1e5bf0:
    // 0x1e5bf0: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x1e5bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_1e5bf4:
    // 0x1e5bf4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1e5bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1e5bf8:
    // 0x1e5bf8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e5bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e5bfc:
    // 0x1e5bfc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e5bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1e5c00:
    // 0x1e5c00: 0xe44400c0  swc1        $f4, 0xC0($v0)
    ctx->pc = 0x1e5c00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_1e5c04:
    // 0x1e5c04: 0x3c01bd30  lui         $at, 0xBD30
    ctx->pc = 0x1e5c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48432 << 16));
label_1e5c08:
    // 0x1e5c08: 0x342120c5  ori         $at, $at, 0x20C5
    ctx->pc = 0x1e5c08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8389);
label_1e5c0c:
    // 0x1e5c0c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1e5c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e5c10:
    // 0x1e5c10: 0xe4a50008  swc1        $f5, 0x8($a1)
    ctx->pc = 0x1e5c10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1e5c14:
    // 0x1e5c14: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x1e5c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1e5c18:
    // 0x1e5c18: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x1e5c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
label_1e5c1c:
    // 0x1e5c1c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1e5c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1e5c20:
    // 0x1e5c20: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1e5c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e5c24:
    // 0x1e5c24: 0xe44700f0  swc1        $f7, 0xF0($v0)
    ctx->pc = 0x1e5c24u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_1e5c28:
    // 0x1e5c28: 0x3c01bdb8  lui         $at, 0xBDB8
    ctx->pc = 0x1e5c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48568 << 16));
label_1e5c2c:
    // 0x1e5c2c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1e5c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1e5c30:
    // 0x1e5c30: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1e5c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1e5c34:
    // 0x1e5c34: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x1e5c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_1e5c38:
    // 0x1e5c38: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1e5c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1e5c3c:
    // 0x1e5c3c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1e5c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1e5c40:
    // 0x1e5c40: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1e5c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_1e5c44:
    // 0x1e5c44: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e5c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1e5c48:
    // 0x1e5c48: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1e5c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1e5c4c:
    // 0x1e5c4c: 0xe4880008  swc1        $f8, 0x8($a0)
    ctx->pc = 0x1e5c4cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1e5c50:
    // 0x1e5c50: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1e5c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1e5c54:
    // 0x1e5c54: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e5c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e5c58:
    // 0x1e5c58: 0x3c01be66  lui         $at, 0xBE66
    ctx->pc = 0x1e5c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48742 << 16));
label_1e5c5c:
    // 0x1e5c5c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1e5c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1e5c60:
    // 0x1e5c60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e5c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e5c64:
    // 0x1e5c64: 0xe44a0118  swc1        $f10, 0x118($v0)
    ctx->pc = 0x1e5c64u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1e5c68:
    // 0x1e5c68: 0xe44b0040  swc1        $f11, 0x40($v0)
    ctx->pc = 0x1e5c68u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_1e5c6c:
    // 0x1e5c6c: 0xe4500010  swc1        $f16, 0x10($v0)
    ctx->pc = 0x1e5c6cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1e5c70:
    // 0x1e5c70: 0x3c01bdf5  lui         $at, 0xBDF5
    ctx->pc = 0x1e5c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48629 << 16));
label_1e5c74:
    // 0x1e5c74: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e5c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1e5c78:
    // 0x1e5c78: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e5c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e5c7c:
    // 0x1e5c7c: 0x3c01bd61  lui         $at, 0xBD61
    ctx->pc = 0x1e5c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48481 << 16));
label_1e5c80:
    // 0x1e5c80: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1e5c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1e5c84:
    // 0x1e5c84: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1e5c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1e5c88:
    // 0x1e5c88: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1e5c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1e5c8c:
    // 0x1e5c8c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e5c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e5c90:
    // 0x1e5c90: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1e5c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1e5c94:
    // 0x1e5c94: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1e5c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1e5c98:
    // 0x1e5c98: 0xe46c0008  swc1        $f12, 0x8($v1)
    ctx->pc = 0x1e5c98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1e5c9c:
    // 0x1e5c9c: 0xe44d0058  swc1        $f13, 0x58($v0)
    ctx->pc = 0x1e5c9cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_1e5ca0:
    // 0x1e5ca0: 0xe44e0088  swc1        $f14, 0x88($v0)
    ctx->pc = 0x1e5ca0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_1e5ca4:
    // 0x1e5ca4: 0xe44f00b8  swc1        $f15, 0xB8($v0)
    ctx->pc = 0x1e5ca4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_1e5ca8:
    // 0x1e5ca8: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x1e5ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1e5cac:
    // 0x1e5cac: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x1e5cacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1e5cb0:
    // 0x1e5cb0: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1e5cb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1e5cb4:
    // 0x1e5cb4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e5cb8:
    if (ctx->pc == 0x1E5CB8u) {
        ctx->pc = 0x1E5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CB4u;
        // 0x1e5cb8: 0xe4500038  swc1        $f16, 0x38($v0) (Delay Slot)
        { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5CBCu;
        goto label_1e5cbc;
    }
    ctx->pc = 0x1E5CB4u;
    {
        const bool branch_taken_0x1e5cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CB4u;
        // 0x1e5cb8: 0xe4500038  swc1        $f16, 0x38($v0) (Delay Slot)
        { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cb4) {
            ctx->pc = 0x1E5CDCu;
            goto label_1e5cdc;
        }
    }
    ctx->pc = 0x1E5CBCu;
label_1e5cbc:
    // 0x1e5cbc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e5cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e5cc0:
    // 0x1e5cc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e5cc4:
    if (ctx->pc == 0x1E5CC4u) {
        ctx->pc = 0x1E5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CC0u;
        // 0x1e5cc4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5CC8u;
        goto label_1e5cc8;
    }
    ctx->pc = 0x1E5CC0u;
    {
        const bool branch_taken_0x1e5cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CC0u;
        // 0x1e5cc4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cc0) {
            ctx->pc = 0x1E5CDCu;
            goto label_1e5cdc;
        }
    }
    ctx->pc = 0x1E5CC8u;
label_1e5cc8:
    // 0x1e5cc8: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x1e5cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_1e5ccc:
    // 0x1e5ccc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1e5cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1e5cd0:
    // 0x1e5cd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e5cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5cd4:
    // 0x1e5cd4: 0x0  nop
    ctx->pc = 0x1e5cd4u;
    // NOP
label_1e5cd8:
    // 0x1e5cd8: 0xe440f118  swc1        $f0, -0xEE8($v0)
    ctx->pc = 0x1e5cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294963480), bits); }
label_1e5cdc:
    // 0x1e5cdc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e5cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1e5ce0:
    // 0x1e5ce0: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1e5ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1e5ce4:
    // 0x1e5ce4: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x1e5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1e5ce8:
    // 0x1e5ce8: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1e5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_1e5cec:
    // 0x1e5cec: 0xc0e409a  jal         func_390268
label_1e5cf0:
    if (ctx->pc == 0x1E5CF0u) {
        ctx->pc = 0x1E5CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CECu;
        // 0x1e5cf0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5CF4u;
        goto label_1e5cf4;
    }
    ctx->pc = 0x1E5CECu;
    SET_GPR_U32(ctx, 31, 0x1E5CF4u);
    ctx->pc = 0x1E5CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CECu;
    // 0x1e5cf0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1E5CECu, 0x1E5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CF4u;
label_1e5cf4:
    // 0x1e5cf4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e5cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1e5cf8:
    // 0x1e5cf8: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1e5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_1e5cfc:
    // 0x1e5cfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e5cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e5d00:
    // 0x1e5d00: 0xc06ba26  jal         func_1AE898
label_1e5d04:
    if (ctx->pc == 0x1E5D04u) {
        ctx->pc = 0x1E5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D00u;
        // 0x1e5d04: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D08u;
        goto label_1e5d08;
    }
    ctx->pc = 0x1E5D00u;
    SET_GPR_U32(ctx, 31, 0x1E5D08u);
    ctx->pc = 0x1E5D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D00u;
    // 0x1e5d04: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1E5D00u, 0x1E5D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D08u;
label_1e5d08:
    // 0x1e5d08: 0xaee20040  sw          $v0, 0x40($s7)
    ctx->pc = 0x1e5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 2));
label_1e5d0c:
    // 0x1e5d0c: 0xc08a55c  jal         func_229570
label_1e5d10:
    if (ctx->pc == 0x1E5D10u) {
        ctx->pc = 0x1E5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D0Cu;
        // 0x1e5d10: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D14u;
        goto label_1e5d14;
    }
    ctx->pc = 0x1E5D0Cu;
    SET_GPR_U32(ctx, 31, 0x1E5D14u);
    ctx->pc = 0x1E5D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D0Cu;
    // 0x1e5d10: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229570u, 0x1E5D0Cu, 0x1E5D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D14u;
label_1e5d14:
    // 0x1e5d14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e5d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5d18:
    // 0x1e5d18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5d1c:
    // 0x1e5d1c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1e5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1e5d20:
    // 0x1e5d20: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1e5d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1e5d24:
    // 0x1e5d24: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1e5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1e5d28:
    // 0x1e5d28: 0x60f809  jalr        $v1
label_1e5d2c:
    if (ctx->pc == 0x1E5D2Cu) {
        ctx->pc = 0x1E5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D28u;
        // 0x1e5d2c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D30u;
        goto label_1e5d30;
    }
    ctx->pc = 0x1E5D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E5D30u);
        ctx->pc = 0x1E5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D28u;
        // 0x1e5d2c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5D28u, 0x1E5D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5D30u;
label_1e5d30:
    // 0x1e5d30: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x1e5d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1e5d34:
    // 0x1e5d34: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1e5d38:
    if (ctx->pc == 0x1E5D38u) {
        ctx->pc = 0x1E5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D34u;
        // 0x1e5d38: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D3Cu;
        goto label_1e5d3c;
    }
    ctx->pc = 0x1E5D34u;
    {
        const bool branch_taken_0x1e5d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D34u;
        // 0x1e5d38: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d34) {
            ctx->pc = 0x1E5E08u;
            goto label_1e5e08;
        }
    }
    ctx->pc = 0x1E5D3Cu;
label_1e5d3c:
    // 0x1e5d3c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e5d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1e5d40:
    // 0x1e5d40: 0x244268b0  addiu       $v0, $v0, 0x68B0
    ctx->pc = 0x1e5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
label_1e5d44:
    // 0x1e5d44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e5d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e5d48:
    // 0x1e5d48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e5d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5d4c:
    // 0x1e5d4c: 0x800008  jr          $a0
label_1e5d50:
    if (ctx->pc == 0x1E5D50u) {
        ctx->pc = 0x1E5D54u;
        goto label_1e5d54;
    }
    ctx->pc = 0x1E5D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5D54u: goto label_1e5d54;
            case 0x1E5D68u: goto label_1e5d68;
            case 0x1E5D7Cu: goto label_1e5d7c;
            case 0x1E5D90u: goto label_1e5d90;
            case 0x1E5DA4u: goto label_1e5da4;
            case 0x1E5DB8u: goto label_1e5db8;
            case 0x1E5DCCu: goto label_1e5dcc;
            case 0x1E5DE0u: goto label_1e5de0;
            case 0x1E5DF4u: goto label_1e5df4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5D4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E5D54u;
label_1e5d54:
    // 0x1e5d54: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x1e5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
label_1e5d58:
    // 0x1e5d58: 0x3c140031  lui         $s4, 0x31
    ctx->pc = 0x1e5d58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)49 << 16));
label_1e5d5c:
    // 0x1e5d5c: 0x3c150197  lui         $s5, 0x197
    ctx->pc = 0x1e5d5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)407 << 16));
label_1e5d60:
    // 0x1e5d60: 0x10000031  b           . + 4 + (0x31 << 2)
label_1e5d64:
    if (ctx->pc == 0x1E5D64u) {
        ctx->pc = 0x1E5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D60u;
        // 0x1e5d64: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D68u;
        goto label_1e5d68;
    }
    ctx->pc = 0x1E5D60u;
    {
        const bool branch_taken_0x1e5d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D60u;
        // 0x1e5d64: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d60) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5D68u;
label_1e5d68:
    // 0x1e5d68: 0x240200ec  addiu       $v0, $zero, 0xEC
    ctx->pc = 0x1e5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_1e5d6c:
    // 0x1e5d6c: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1e5d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
label_1e5d70:
    // 0x1e5d70: 0x3c150192  lui         $s5, 0x192
    ctx->pc = 0x1e5d70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)402 << 16));
label_1e5d74:
    // 0x1e5d74: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1e5d78:
    if (ctx->pc == 0x1E5D78u) {
        ctx->pc = 0x1E5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D74u;
        // 0x1e5d78: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D7Cu;
        goto label_1e5d7c;
    }
    ctx->pc = 0x1E5D74u;
    {
        const bool branch_taken_0x1e5d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D74u;
        // 0x1e5d78: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d74) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5D7Cu;
label_1e5d7c:
    // 0x1e5d7c: 0x240200ed  addiu       $v0, $zero, 0xED
    ctx->pc = 0x1e5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
label_1e5d80:
    // 0x1e5d80: 0x3c140023  lui         $s4, 0x23
    ctx->pc = 0x1e5d80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)35 << 16));
label_1e5d84:
    // 0x1e5d84: 0x3c150193  lui         $s5, 0x193
    ctx->pc = 0x1e5d84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)403 << 16));
label_1e5d88:
    // 0x1e5d88: 0x10000027  b           . + 4 + (0x27 << 2)
label_1e5d8c:
    if (ctx->pc == 0x1E5D8Cu) {
        ctx->pc = 0x1E5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D88u;
        // 0x1e5d8c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D90u;
        goto label_1e5d90;
    }
    ctx->pc = 0x1E5D88u;
    {
        const bool branch_taken_0x1e5d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D88u;
        // 0x1e5d8c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d88) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5D90u;
label_1e5d90:
    // 0x1e5d90: 0x240200ea  addiu       $v0, $zero, 0xEA
    ctx->pc = 0x1e5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
label_1e5d94:
    // 0x1e5d94: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x1e5d94u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
label_1e5d98:
    // 0x1e5d98: 0x3c150190  lui         $s5, 0x190
    ctx->pc = 0x1e5d98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)400 << 16));
label_1e5d9c:
    // 0x1e5d9c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1e5da0:
    if (ctx->pc == 0x1E5DA0u) {
        ctx->pc = 0x1E5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D9Cu;
        // 0x1e5da0: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5DA4u;
        goto label_1e5da4;
    }
    ctx->pc = 0x1E5D9Cu;
    {
        const bool branch_taken_0x1e5d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D9Cu;
        // 0x1e5da0: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d9c) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5DA4u;
label_1e5da4:
    // 0x1e5da4: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1e5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1e5da8:
    // 0x1e5da8: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x1e5da8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
label_1e5dac:
    // 0x1e5dac: 0x3c150195  lui         $s5, 0x195
    ctx->pc = 0x1e5dacu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)405 << 16));
label_1e5db0:
    // 0x1e5db0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1e5db4:
    if (ctx->pc == 0x1E5DB4u) {
        ctx->pc = 0x1E5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DB0u;
        // 0x1e5db4: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5DB8u;
        goto label_1e5db8;
    }
    ctx->pc = 0x1E5DB0u;
    {
        const bool branch_taken_0x1e5db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DB0u;
        // 0x1e5db4: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5db0) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5DB8u;
label_1e5db8:
    // 0x1e5db8: 0x240200ee  addiu       $v0, $zero, 0xEE
    ctx->pc = 0x1e5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
label_1e5dbc:
    // 0x1e5dbc: 0x3c140024  lui         $s4, 0x24
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)36 << 16));
label_1e5dc0:
    // 0x1e5dc0: 0x3c150194  lui         $s5, 0x194
    ctx->pc = 0x1e5dc0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)404 << 16));
label_1e5dc4:
    // 0x1e5dc4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1e5dc8:
    if (ctx->pc == 0x1E5DC8u) {
        ctx->pc = 0x1E5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DC4u;
        // 0x1e5dc8: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5DCCu;
        goto label_1e5dcc;
    }
    ctx->pc = 0x1E5DC4u;
    {
        const bool branch_taken_0x1e5dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DC4u;
        // 0x1e5dc8: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5dc4) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5DCCu;
label_1e5dcc:
    // 0x1e5dcc: 0x240200ef  addiu       $v0, $zero, 0xEF
    ctx->pc = 0x1e5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
label_1e5dd0:
    // 0x1e5dd0: 0x3c140032  lui         $s4, 0x32
    ctx->pc = 0x1e5dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)50 << 16));
label_1e5dd4:
    // 0x1e5dd4: 0x3c150198  lui         $s5, 0x198
    ctx->pc = 0x1e5dd4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)408 << 16));
label_1e5dd8:
    // 0x1e5dd8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1e5ddc:
    if (ctx->pc == 0x1E5DDCu) {
        ctx->pc = 0x1E5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DD8u;
        // 0x1e5ddc: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5DE0u;
        goto label_1e5de0;
    }
    ctx->pc = 0x1E5DD8u;
    {
        const bool branch_taken_0x1e5dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DD8u;
        // 0x1e5ddc: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5dd8) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5DE0u;
label_1e5de0:
    // 0x1e5de0: 0x240200f1  addiu       $v0, $zero, 0xF1
    ctx->pc = 0x1e5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_1e5de4:
    // 0x1e5de4: 0x3c140030  lui         $s4, 0x30
    ctx->pc = 0x1e5de4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
label_1e5de8:
    // 0x1e5de8: 0x3c150196  lui         $s5, 0x196
    ctx->pc = 0x1e5de8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)406 << 16));
label_1e5dec:
    // 0x1e5dec: 0x1000000e  b           . + 4 + (0xE << 2)
label_1e5df0:
    if (ctx->pc == 0x1E5DF0u) {
        ctx->pc = 0x1E5DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DECu;
        // 0x1e5df0: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5DF4u;
        goto label_1e5df4;
    }
    ctx->pc = 0x1E5DECu;
    {
        const bool branch_taken_0x1e5dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DECu;
        // 0x1e5df0: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5dec) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5DF4u;
label_1e5df4:
    // 0x1e5df4: 0x240200eb  addiu       $v0, $zero, 0xEB
    ctx->pc = 0x1e5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
label_1e5df8:
    // 0x1e5df8: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x1e5df8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
label_1e5dfc:
    // 0x1e5dfc: 0x3c150191  lui         $s5, 0x191
    ctx->pc = 0x1e5dfcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)401 << 16));
label_1e5e00:
    // 0x1e5e00: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e5e04:
    if (ctx->pc == 0x1E5E04u) {
        ctx->pc = 0x1E5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E00u;
        // 0x1e5e04: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E08u;
        goto label_1e5e08;
    }
    ctx->pc = 0x1E5E00u;
    {
        const bool branch_taken_0x1e5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E00u;
        // 0x1e5e04: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e00) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5E08u;
label_1e5e08:
    // 0x1e5e08: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1e5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1e5e0c:
    // 0x1e5e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5e10:
    // 0x1e5e10: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1e5e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1e5e14:
    // 0x1e5e14: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1e5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1e5e18:
    // 0x1e5e18: 0x60f809  jalr        $v1
label_1e5e1c:
    if (ctx->pc == 0x1E5E1Cu) {
        ctx->pc = 0x1E5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E18u;
        // 0x1e5e1c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E20u;
        goto label_1e5e20;
    }
    ctx->pc = 0x1E5E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E5E20u);
        ctx->pc = 0x1E5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E18u;
        // 0x1e5e1c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5E18u, 0x1E5E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5E20u;
label_1e5e20:
    // 0x1e5e20: 0x100001b5  b           . + 4 + (0x1B5 << 2)
label_1e5e24:
    if (ctx->pc == 0x1E5E24u) {
        ctx->pc = 0x1E5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E20u;
        // 0x1e5e24: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E28u;
        goto label_1e5e28;
    }
    ctx->pc = 0x1E5E20u;
    {
        const bool branch_taken_0x1e5e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E20u;
        // 0x1e5e24: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e20) {
            ctx->pc = 0x1E64F8u;
            goto label_1e64f8;
        }
    }
    ctx->pc = 0x1E5E28u;
label_1e5e28:
    // 0x1e5e28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e5e2c:
    // 0x1e5e2c: 0x8e03489c  lw          $v1, 0x489C($s0)
    ctx->pc = 0x1e5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1e5e30:
    // 0x1e5e30: 0x2456f110  addiu       $s6, $v0, -0xEF0
    ctx->pc = 0x1e5e30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963472));
label_1e5e34:
    // 0x1e5e34: 0x7ac40000  lq          $a0, 0x0($s6)
    ctx->pc = 0x1e5e34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_1e5e38:
    // 0x1e5e38: 0x7ee41d60  sq          $a0, 0x1D60($s7)
    ctx->pc = 0x1e5e38u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 7520), GPR_VEC(ctx, 4));
label_1e5e3c:
    // 0x1e5e3c: 0x90720154  lbu         $s2, 0x154($v1)
    ctx->pc = 0x1e5e3cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 340)));
label_1e5e40:
    // 0x1e5e40: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1e5e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1e5e44:
    // 0x1e5e44: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1e5e48:
    if (ctx->pc == 0x1E5E48u) {
        ctx->pc = 0x1E5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E44u;
        // 0x1e5e48: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E4Cu;
        goto label_1e5e4c;
    }
    ctx->pc = 0x1E5E44u;
    {
        const bool branch_taken_0x1e5e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e44) {
            ctx->pc = 0x1E5E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5E44u;
            // 0x1e5e48: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5E4Cu;
            goto label_1e5e4c;
        }
    }
    ctx->pc = 0x1E5E4Cu;
label_1e5e4c:
    // 0x1e5e4c: 0x7ac30010  lq          $v1, 0x10($s6)
    ctx->pc = 0x1e5e4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_1e5e50:
    // 0x1e5e50: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1e5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1e5e54:
    // 0x1e5e54: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e5e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e5e58:
    // 0x1e5e58: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1e5e58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1e5e5c:
    // 0x1e5e5c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e5e5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e5e60:
    // 0x1e5e60: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e5e60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e5e64:
    // 0x1e5e64: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1e5e64u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e5e68:
    // 0x1e5e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e5e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e5e6c:
    // 0x1e5e6c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1e5e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1e5e70:
    // 0x1e5e70: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1e5e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1e5e74:
    // 0x1e5e74: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1e5e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e5e78:
    // 0x1e5e78: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x1e5e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e5e7c:
    // 0x1e5e7c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x1e5e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_1e5e80:
    // 0x1e5e80: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x1e5e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_1e5e84:
    // 0x1e5e84: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1e5e84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1e5e88:
    // 0x1e5e88: 0x8c46ee30  lw          $a2, -0x11D0($v0)
    ctx->pc = 0x1e5e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962736)));
label_1e5e8c:
    // 0x1e5e8c: 0x325e00ff  andi        $fp, $s2, 0xFF
    ctx->pc = 0x1e5e8cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1e5e90:
    // 0x1e5e90: 0x3c01466a  lui         $at, 0x466A
    ctx->pc = 0x1e5e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18026 << 16));
label_1e5e94:
    // 0x1e5e94: 0x34216000  ori         $at, $at, 0x6000
    ctx->pc = 0x1e5e94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24576);
label_1e5e98:
    // 0x1e5e98: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e5e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e5e9c:
    // 0x1e5e9c: 0x26e407b0  addiu       $a0, $s7, 0x7B0
    ctx->pc = 0x1e5e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1968));
label_1e5ea0:
    // 0x1e5ea0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1e5ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1e5ea4:
    // 0x1e5ea4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e5ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e5ea8:
    // 0x1e5ea8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e5ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e5eac:
    // 0x1e5eac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e5eacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e5eb0:
    // 0x1e5eb0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1e5eb4:
    // 0x1e5eb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e5eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5eb8:
    // 0x1e5eb8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e5eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ebc:
    // 0x1e5ebc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1e5ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e5ec0:
    // 0x1e5ec0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1e5ec0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1e5ec4:
    // 0x1e5ec4: 0xc06876e  jal         func_1A1DB8
label_1e5ec8:
    if (ctx->pc == 0x1E5EC8u) {
        ctx->pc = 0x1E5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5EC4u;
        // 0x1e5ec8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5ECCu;
        goto label_1e5ecc;
    }
    ctx->pc = 0x1E5EC4u;
    SET_GPR_U32(ctx, 31, 0x1E5ECCu);
    ctx->pc = 0x1E5EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5EC4u;
    // 0x1e5ec8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1E5EC4u, 0x1E5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5ECCu;
label_1e5ecc:
    // 0x1e5ecc: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1e5eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e5ed0:
    // 0x1e5ed0: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1e5ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_1e5ed4:
    // 0x1e5ed4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e5ed8:
    // 0x1e5ed8: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1e5ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
label_1e5edc:
    // 0x1e5edc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1e5edcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1e5ee0:
    // 0x1e5ee0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1e5ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1e5ee4:
    // 0x1e5ee4: 0x26e408b0  addiu       $a0, $s7, 0x8B0
    ctx->pc = 0x1e5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2224));
label_1e5ee8:
    // 0x1e5ee8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1e5ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e5eec:
    // 0x1e5eec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e5eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e5ef0:
    // 0x1e5ef0: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1e5ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1e5ef4:
    // 0x1e5ef4: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1e5ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1e5ef8:
    // 0x1e5ef8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e5ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e5efc:
    // 0x1e5efc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e5efcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e5f00:
    // 0x1e5f00: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e5f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5f04:
    // 0x1e5f04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e5f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5f08:
    // 0x1e5f08: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1e5f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1e5f0c:
    // 0x1e5f0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e5f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5f10:
    // 0x1e5f10: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e5f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e5f14:
    // 0x1e5f14: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1e5f14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f18:
    // 0x1e5f18: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e5f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1e5f1c:
    // 0x1e5f1c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1e5f1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1e5f20:
    // 0x1e5f20: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1e5f20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5f24:
    // 0x1e5f24: 0xc06876e  jal         func_1A1DB8
label_1e5f28:
    if (ctx->pc == 0x1E5F28u) {
        ctx->pc = 0x1E5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F24u;
        // 0x1e5f28: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5F2Cu;
        goto label_1e5f2c;
    }
    ctx->pc = 0x1E5F24u;
    SET_GPR_U32(ctx, 31, 0x1E5F2Cu);
    ctx->pc = 0x1E5F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F24u;
    // 0x1e5f28: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1E5F24u, 0x1E5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F2Cu;
label_1e5f2c:
    // 0x1e5f2c: 0x26f30bb0  addiu       $s3, $s7, 0xBB0
    ctx->pc = 0x1e5f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 2992));
label_1e5f30:
    // 0x1e5f30: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1e5f30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
label_1e5f34:
    // 0x1e5f34: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x1e5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1e5f38:
    // 0x1e5f38: 0xafb30064  sw          $s3, 0x64($sp)
    ctx->pc = 0x1e5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
label_1e5f3c:
    // 0x1e5f3c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1e5f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1e5f40:
    // 0x1e5f40: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1e5f40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
label_1e5f44:
    // 0x1e5f44: 0x26e409b0  addiu       $a0, $s7, 0x9B0
    ctx->pc = 0x1e5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2480));
label_1e5f48:
    // 0x1e5f48: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1e5f48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1e5f4c:
    // 0x1e5f4c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1e5f4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f50:
    // 0x1e5f50: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1e5f50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e5f54:
    // 0x1e5f54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e5f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f58:
    // 0x1e5f58: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1e5f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1e5f5c:
    // 0x1e5f5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e5f5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e5f60:
    // 0x1e5f60: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1e5f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1e5f64:
    // 0x1e5f64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e5f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5f68:
    // 0x1e5f68: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e5f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e5f6c:
    // 0x1e5f6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e5f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5f70:
    // 0x1e5f70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1e5f74:
    // 0x1e5f74: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1e5f74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1e5f78:
    // 0x1e5f78: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1e5f78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5f7c:
    // 0x1e5f7c: 0xc06876e  jal         func_1A1DB8
label_1e5f80:
    if (ctx->pc == 0x1E5F80u) {
        ctx->pc = 0x1E5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F7Cu;
        // 0x1e5f80: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5F84u;
        goto label_1e5f84;
    }
    ctx->pc = 0x1E5F7Cu;
    SET_GPR_U32(ctx, 31, 0x1E5F84u);
    ctx->pc = 0x1E5F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F7Cu;
    // 0x1e5f80: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1E5F7Cu, 0x1E5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F84u;
label_1e5f84:
    // 0x1e5f84: 0x7ac30030  lq          $v1, 0x30($s6)
    ctx->pc = 0x1e5f84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 48)));
label_1e5f88:
    // 0x1e5f88: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1e5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e5f8c:
    // 0x1e5f8c: 0x7ae21d60  lq          $v0, 0x1D60($s7)
    ctx->pc = 0x1e5f8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 7520)));
label_1e5f90:
    // 0x1e5f90: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1e5f90u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1e5f94:
    // 0x1e5f94: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1e5f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1e5f98:
    // 0x1e5f98: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e5f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e5f9c:
    // 0x1e5f9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e5f9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e5fa0:
    // 0x1e5fa0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e5fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e5fa4:
    // 0x1e5fa4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e5fa4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e5fa8:
    // 0x1e5fa8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e5fa8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e5fac:
    // 0x1e5fac: 0xa3b00048  sb          $s0, 0x48($sp)
    ctx->pc = 0x1e5facu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 16));
label_1e5fb0:
    // 0x1e5fb0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1e5fb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1e5fb4:
    // 0x1e5fb4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e5fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e5fb8:
    // 0x1e5fb8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e5fb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5fbc:
    // 0x1e5fbc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e5fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1e5fc0:
    // 0x1e5fc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e5fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e5fc4:
    // 0x1e5fc4: 0xa0900003  sb          $s0, 0x3($a0)
    ctx->pc = 0x1e5fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 16));
label_1e5fc8:
    // 0x1e5fc8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1e5fc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e5fcc:
    // 0x1e5fcc: 0xa0900001  sb          $s0, 0x1($a0)
    ctx->pc = 0x1e5fccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 16));
label_1e5fd0:
    // 0x1e5fd0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1e5fd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1e5fd4:
    // 0x1e5fd4: 0xa0900002  sb          $s0, 0x2($a0)
    ctx->pc = 0x1e5fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 16));
label_1e5fd8:
    // 0x1e5fd8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e5fd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e5fdc:
    // 0x1e5fdc: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1e5fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1e5fe0:
    // 0x1e5fe0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e5fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5fe4:
    // 0x1e5fe4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1e5fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e5fe8:
    // 0x1e5fe8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e5fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5fec:
    // 0x1e5fec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e5ff0:
    // 0x1e5ff0: 0x26e40ab0  addiu       $a0, $s7, 0xAB0
    ctx->pc = 0x1e5ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2736));
label_1e5ff4:
    // 0x1e5ff4: 0xc06876e  jal         func_1A1DB8
label_1e5ff8:
    if (ctx->pc == 0x1E5FF8u) {
        ctx->pc = 0x1E5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FF4u;
        // 0x1e5ff8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5FFCu;
        goto label_1e5ffc;
    }
    ctx->pc = 0x1E5FF4u;
    SET_GPR_U32(ctx, 31, 0x1E5FFCu);
    ctx->pc = 0x1E5FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FF4u;
    // 0x1e5ff8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1E5FF4u, 0x1E5FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FFCu;
label_1e5ffc:
    // 0x1e5ffc: 0x7ac30050  lq          $v1, 0x50($s6)
    ctx->pc = 0x1e5ffcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 80)));
label_1e6000:
    // 0x1e6000: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x1e6000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1e6004:
    // 0x1e6004: 0x7ae21d60  lq          $v0, 0x1D60($s7)
    ctx->pc = 0x1e6004u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 7520)));
label_1e6008:
    // 0x1e6008: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1e6008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1e600c:
    // 0x1e600c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1e600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1e6010:
    // 0x1e6010: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6014:
    // 0x1e6014: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6018:
    // 0x1e6018: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e601c:
    // 0x1e601c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e601cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6020:
    // 0x1e6020: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6020u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6024:
    // 0x1e6024: 0xa3a6004c  sb          $a2, 0x4C($sp)
    ctx->pc = 0x1e6024u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 6));
label_1e6028:
    // 0x1e6028: 0x240400f3  addiu       $a0, $zero, 0xF3
    ctx->pc = 0x1e6028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
label_1e602c:
    // 0x1e602c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e602cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e6030:
    // 0x1e6030: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e6030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1e6034:
    // 0x1e6034: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1e6034u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
label_1e6038:
    // 0x1e6038: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x1e6038u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
label_1e603c:
    // 0x1e603c: 0xa0b00003  sb          $s0, 0x3($a1)
    ctx->pc = 0x1e603cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 16));
label_1e6040:
    // 0x1e6040: 0xc067b9c  jal         func_19EE70
label_1e6044:
    if (ctx->pc == 0x1E6044u) {
        ctx->pc = 0x1E6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6040u;
        // 0x1e6044: 0x8fb0004c  lw          $s0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6048u;
        goto label_1e6048;
    }
    ctx->pc = 0x1E6040u;
    SET_GPR_U32(ctx, 31, 0x1E6048u);
    ctx->pc = 0x1E6044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6040u;
    // 0x1e6044: 0x8fb0004c  lw          $s0, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E6040u, 0x1E6048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6048u;
label_1e6048:
    // 0x1e6048: 0xc6cd0074  lwc1        $f13, 0x74($s6)
    ctx->pc = 0x1e6048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e604c:
    // 0x1e604c: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1e604cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
label_1e6050:
    // 0x1e6050: 0xc6cc0070  lwc1        $f12, 0x70($s6)
    ctx->pc = 0x1e6050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6054:
    // 0x1e6054: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e6054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6058:
    // 0x1e6058: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e6058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e605c:
    // 0x1e605c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1e605cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_1e6060:
    // 0x1e6060: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e6060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e6064:
    // 0x1e6064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e6064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6068:
    // 0x1e6068: 0x35080036  ori         $t0, $t0, 0x36
    ctx->pc = 0x1e6068u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54);
label_1e606c:
    // 0x1e606c: 0xc0707e0  jal         func_1C1F80
label_1e6070:
    if (ctx->pc == 0x1E6070u) {
        ctx->pc = 0x1E6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E606Cu;
        // 0x1e6070: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6074u;
        goto label_1e6074;
    }
    ctx->pc = 0x1E606Cu;
    SET_GPR_U32(ctx, 31, 0x1E6074u);
    ctx->pc = 0x1E6070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E606Cu;
    // 0x1e6070: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F80u, 0x1E606Cu, 0x1E6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6074u;
label_1e6074:
    // 0x1e6074: 0xc088ad6  jal         func_222B58
label_1e6078:
    if (ctx->pc == 0x1E6078u) {
        ctx->pc = 0x1E6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6074u;
        // 0x1e6078: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E607Cu;
        goto label_1e607c;
    }
    ctx->pc = 0x1E6074u;
    SET_GPR_U32(ctx, 31, 0x1E607Cu);
    ctx->pc = 0x1E6078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6074u;
    // 0x1e6078: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x1E6074u, 0x1E607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E607Cu;
label_1e607c:
    // 0x1e607c: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1e607cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_1e6080:
    // 0x1e6080: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e6084:
    if (ctx->pc == 0x1E6084u) {
        ctx->pc = 0x1E6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6080u;
        // 0x1e6084: 0x24120028  addiu       $s2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6088u;
        goto label_1e6088;
    }
    ctx->pc = 0x1E6080u;
    {
        const bool branch_taken_0x1e6080 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6080u;
        // 0x1e6084: 0x24120028  addiu       $s2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6080) {
            ctx->pc = 0x1E609Cu;
            goto label_1e609c;
        }
    }
    ctx->pc = 0x1E6088u;
label_1e6088:
    // 0x1e6088: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e608c:
    // 0x1e608c: 0x0  nop
    ctx->pc = 0x1e608cu;
    // NOP
label_1e6090:
    // 0x1e6090: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1e6090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e6094:
    // 0x1e6094: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e6098:
    if (ctx->pc == 0x1E6098u) {
        ctx->pc = 0x1E6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6094u;
        // 0x1e6098: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E609Cu;
        goto label_1e609c;
    }
    ctx->pc = 0x1E6094u;
    {
        const bool branch_taken_0x1e6094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6094u;
        // 0x1e6098: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6094) {
            ctx->pc = 0x1E60BCu;
            goto label_1e60bc;
        }
    }
    ctx->pc = 0x1E609Cu;
label_1e609c:
    // 0x1e609c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e609cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1e60a0:
    // 0x1e60a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e60a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e60a4:
    // 0x1e60a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e60a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e60a8:
    // 0x1e60a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e60a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e60ac:
    // 0x1e60ac: 0x0  nop
    ctx->pc = 0x1e60acu;
    // NOP
label_1e60b0:
    // 0x1e60b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1e60b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e60b4:
    // 0x1e60b4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1e60b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1e60b8:
    // 0x1e60b8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e60b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1e60bc:
    // 0x1e60bc: 0x3d29018  mult        $s2, $fp, $s2
    ctx->pc = 0x1e60bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_1e60c0:
    // 0x1e60c0: 0x2610f230  addiu       $s0, $s0, -0xDD0
    ctx->pc = 0x1e60c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963760));
label_1e60c4:
    // 0x1e60c4: 0x26fe1390  addiu       $fp, $s7, 0x1390
    ctx->pc = 0x1e60c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 5008));
label_1e60c8:
    // 0x1e60c8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x1e60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1e60cc:
    // 0x1e60cc: 0x24140025  addiu       $s4, $zero, 0x25
    ctx->pc = 0x1e60ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1e60d0:
    // 0x1e60d0: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1e60d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e60d4:
    // 0x1e60d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e60d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e60d8:
    // 0x1e60d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e60d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e60dc:
    // 0x1e60dc: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1e60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1e60e0:
    // 0x1e60e0: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1e60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1e60e4:
    // 0x1e60e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e60e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e60e8:
    // 0x1e60e8: 0xafbe0068  sw          $fp, 0x68($sp)
    ctx->pc = 0x1e60e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 30));
label_1e60ec:
    // 0x1e60ec: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x1e60ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_1e60f0:
    // 0x1e60f0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e60f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e60f4:
    // 0x1e60f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e60f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e60f8:
    // 0x1e60f8: 0x0  nop
    ctx->pc = 0x1e60f8u;
    // NOP
label_1e60fc:
    // 0x1e60fc: 0x0  nop
    ctx->pc = 0x1e60fcu;
    // NOP
label_1e6100:
    // 0x1e6100: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1e6100u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_1e6104:
    // 0x1e6104: 0xc07094c  jal         func_1C2530
label_1e6108:
    if (ctx->pc == 0x1E6108u) {
        ctx->pc = 0x1E6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6104u;
        // 0x1e6108: 0x26f50fa0  addiu       $s5, $s7, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 4000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E610Cu;
        goto label_1e610c;
    }
    ctx->pc = 0x1E6104u;
    SET_GPR_U32(ctx, 31, 0x1E610Cu);
    ctx->pc = 0x1E6108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6104u;
    // 0x1e6108: 0x26f50fa0  addiu       $s5, $s7, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2530u, 0x1E6104u, 0x1E610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E610Cu;
label_1e610c:
    // 0x1e610c: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x1e610cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1e6110:
    // 0x1e6110: 0xc0708a4  jal         func_1C2290
label_1e6114:
    if (ctx->pc == 0x1E6114u) {
        ctx->pc = 0x1E6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6110u;
        // 0x1e6114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6118u;
        goto label_1e6118;
    }
    ctx->pc = 0x1E6110u;
    SET_GPR_U32(ctx, 31, 0x1E6118u);
    ctx->pc = 0x1E6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6110u;
    // 0x1e6114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x1E6110u, 0x1E6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6118u;
label_1e6118:
    // 0x1e6118: 0x7ae21d60  lq          $v0, 0x1D60($s7)
    ctx->pc = 0x1e6118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 7520)));
label_1e611c:
    // 0x1e611c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1e611cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1e6120:
    // 0x1e6120: 0xa3b40050  sb          $s4, 0x50($sp)
    ctx->pc = 0x1e6120u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 20));
label_1e6124:
    // 0x1e6124: 0x2631f190  addiu       $s1, $s1, -0xE70
    ctx->pc = 0x1e6124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963600));
label_1e6128:
    // 0x1e6128: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e6128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e612c:
    // 0x1e612c: 0x240400f4  addiu       $a0, $zero, 0xF4
    ctx->pc = 0x1e612cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_1e6130:
    // 0x1e6130: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x1e6130u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1e6134:
    // 0x1e6134: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6138:
    // 0x1e6138: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6138u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e613c:
    // 0x1e613c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e613cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6140:
    // 0x1e6140: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6140u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6144:
    // 0x1e6144: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6144u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6148:
    // 0x1e6148: 0x2631ff80  addiu       $s1, $s1, -0x80
    ctx->pc = 0x1e6148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967168));
label_1e614c:
    // 0x1e614c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1e614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1e6150:
    // 0x1e6150: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e6150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e6154:
    // 0x1e6154: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e6154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1e6158:
    // 0x1e6158: 0xa0b60003  sb          $s6, 0x3($a1)
    ctx->pc = 0x1e6158u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 22));
label_1e615c:
    // 0x1e615c: 0xa0b40001  sb          $s4, 0x1($a1)
    ctx->pc = 0x1e615cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 20));
label_1e6160:
    // 0x1e6160: 0xa0b40002  sb          $s4, 0x2($a1)
    ctx->pc = 0x1e6160u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 20));
label_1e6164:
    // 0x1e6164: 0xc067b9c  jal         func_19EE70
label_1e6168:
    if (ctx->pc == 0x1E6168u) {
        ctx->pc = 0x1E6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6164u;
        // 0x1e6168: 0x8fb30050  lw          $s3, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E616Cu;
        goto label_1e616c;
    }
    ctx->pc = 0x1E6164u;
    SET_GPR_U32(ctx, 31, 0x1E616Cu);
    ctx->pc = 0x1E6168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6164u;
    // 0x1e6168: 0x8fb30050  lw          $s3, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E6164u, 0x1E616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E616Cu;
label_1e616c:
    // 0x1e616c: 0xc62d00a4  lwc1        $f13, 0xA4($s1)
    ctx->pc = 0x1e616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e6170:
    // 0x1e6170: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1e6170u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
label_1e6174:
    // 0x1e6174: 0xc62c00a0  lwc1        $f12, 0xA0($s1)
    ctx->pc = 0x1e6174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6178:
    // 0x1e6178: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e617c:
    // 0x1e617c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e617cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e6180:
    // 0x1e6180: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e6180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6184:
    // 0x1e6184: 0x35080036  ori         $t0, $t0, 0x36
    ctx->pc = 0x1e6184u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54);
label_1e6188:
    // 0x1e6188: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1e6188u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1e618c:
    // 0x1e618c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e618cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6190:
    // 0x1e6190: 0xc0707e0  jal         func_1C1F80
label_1e6194:
    if (ctx->pc == 0x1E6194u) {
        ctx->pc = 0x1E6194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6190u;
        // 0x1e6194: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6198u;
        goto label_1e6198;
    }
    ctx->pc = 0x1E6190u;
    SET_GPR_U32(ctx, 31, 0x1E6198u);
    ctx->pc = 0x1E6194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6190u;
    // 0x1e6194: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F80u, 0x1E6190u, 0x1E6198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6198u;
label_1e6198:
    // 0x1e6198: 0xc088c1a  jal         func_223068
label_1e619c:
    if (ctx->pc == 0x1E619Cu) {
        ctx->pc = 0x1E619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6198u;
        // 0x1e619c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61A0u;
        goto label_1e61a0;
    }
    ctx->pc = 0x1E6198u;
    SET_GPR_U32(ctx, 31, 0x1E61A0u);
    ctx->pc = 0x1E619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6198u;
    // 0x1e619c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x1E6198u, 0x1E61A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E61A0u;
label_1e61a0:
    // 0x1e61a0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e61a4:
    // 0x1e61a4: 0xc088c62  jal         func_223188
label_1e61a8:
    if (ctx->pc == 0x1E61A8u) {
        ctx->pc = 0x1E61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61A4u;
        // 0x1e61a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61ACu;
        goto label_1e61ac;
    }
    ctx->pc = 0x1E61A4u;
    SET_GPR_U32(ctx, 31, 0x1E61ACu);
    ctx->pc = 0x1E61A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E61A4u;
    // 0x1e61a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223188u, 0x1E61A4u, 0x1E61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E61ACu;
label_1e61ac:
    // 0x1e61ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e61acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e61b0:
    // 0x1e61b0: 0x0  nop
    ctx->pc = 0x1e61b0u;
    // NOP
label_1e61b4:
    // 0x1e61b4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1e61b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1e61b8:
    // 0x1e61b8: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x1e61b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1e61bc:
    // 0x1e61bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e61bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e61c0:
    // 0x1e61c0: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1e61c0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e61c4:
    // 0x1e61c4: 0x0  nop
    ctx->pc = 0x1e61c4u;
    // NOP
label_1e61c8:
    // 0x1e61c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e61c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e61cc:
    // 0x1e61cc: 0xc4840014  lwc1        $f4, 0x14($a0)
    ctx->pc = 0x1e61ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e61d0:
    // 0x1e61d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e61d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e61d4:
    // 0x1e61d4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e61d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e61d8:
    // 0x1e61d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e61d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e61dc:
    // 0x1e61dc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e61dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1e61e0:
    // 0x1e61e0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1e61e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e61e4:
    // 0x1e61e4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1e61e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1e61e8:
    // 0x1e61e8: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1e61e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e61ec:
    // 0x1e61ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e61ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e61f0:
    // 0x1e61f0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e61f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1e61f4:
    // 0x1e61f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e61f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1e61f8:
    // 0x1e61f8: 0x46030b00  add.s       $f12, $f1, $f3
    ctx->pc = 0x1e61f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1e61fc:
    // 0x1e61fc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e61fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e6200:
    // 0x1e6200: 0x0  nop
    ctx->pc = 0x1e6200u;
    // NOP
label_1e6204:
    // 0x1e6204: 0x0  nop
    ctx->pc = 0x1e6204u;
    // NOP
label_1e6208:
    // 0x1e6208: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1e6208u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_1e620c:
    // 0x1e620c: 0x46146329  min.s       $f12, $f12, $f20
    ctx->pc = 0x1e620cu;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[20]);
label_1e6210:
    // 0x1e6210: 0xc07094c  jal         func_1C2530
label_1e6214:
    if (ctx->pc == 0x1E6214u) {
        ctx->pc = 0x1E6218u;
        goto label_1e6218;
    }
    ctx->pc = 0x1E6210u;
    SET_GPR_U32(ctx, 31, 0x1E6218u);
    ctx->pc = 0x1C2530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2530u, 0x1E6210u, 0x1E6218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6218u;
label_1e6218:
    // 0x1e6218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e621c:
    // 0x1e621c: 0xc0708a4  jal         func_1C2290
label_1e6220:
    if (ctx->pc == 0x1E6220u) {
        ctx->pc = 0x1E6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E621Cu;
        // 0x1e6220: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6224u;
        goto label_1e6224;
    }
    ctx->pc = 0x1E621Cu;
    SET_GPR_U32(ctx, 31, 0x1E6224u);
    ctx->pc = 0x1E6220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E621Cu;
    // 0x1e6220: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x1E621Cu, 0x1E6224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6224u;
label_1e6224:
    // 0x1e6224: 0x7a2300b0  lq          $v1, 0xB0($s1)
    ctx->pc = 0x1e6224u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 176)));
label_1e6228:
    // 0x1e6228: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x1e6228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1e622c:
    // 0x1e622c: 0x7ae21d60  lq          $v0, 0x1D60($s7)
    ctx->pc = 0x1e622cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 7520)));
label_1e6230:
    // 0x1e6230: 0x240400f5  addiu       $a0, $zero, 0xF5
    ctx->pc = 0x1e6230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_1e6234:
    // 0x1e6234: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1e6234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1e6238:
    // 0x1e6238: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6238u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e623c:
    // 0x1e623c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e623cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6240:
    // 0x1e6240: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6244:
    // 0x1e6244: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6244u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6248:
    // 0x1e6248: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6248u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e624c:
    // 0x1e624c: 0xa3b40054  sb          $s4, 0x54($sp)
    ctx->pc = 0x1e624cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 20));
label_1e6250:
    // 0x1e6250: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e6250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e6254:
    // 0x1e6254: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e6254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1e6258:
    // 0x1e6258: 0xa0b60003  sb          $s6, 0x3($a1)
    ctx->pc = 0x1e6258u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 22));
label_1e625c:
    // 0x1e625c: 0xa0b40002  sb          $s4, 0x2($a1)
    ctx->pc = 0x1e625cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 20));
label_1e6260:
    // 0x1e6260: 0xa0b40001  sb          $s4, 0x1($a1)
    ctx->pc = 0x1e6260u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 20));
label_1e6264:
    // 0x1e6264: 0xc067b9c  jal         func_19EE70
label_1e6268:
    if (ctx->pc == 0x1E6268u) {
        ctx->pc = 0x1E6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6264u;
        // 0x1e6268: 0x8fb00054  lw          $s0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E626Cu;
        goto label_1e626c;
    }
    ctx->pc = 0x1E6264u;
    SET_GPR_U32(ctx, 31, 0x1E626Cu);
    ctx->pc = 0x1E6268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6264u;
    // 0x1e6268: 0x8fb00054  lw          $s0, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E6264u, 0x1E626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E626Cu;
label_1e626c:
    // 0x1e626c: 0xc62d00d4  lwc1        $f13, 0xD4($s1)
    ctx->pc = 0x1e626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e6270:
    // 0x1e6270: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1e6270u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
label_1e6274:
    // 0x1e6274: 0xc62c00d0  lwc1        $f12, 0xD0($s1)
    ctx->pc = 0x1e6274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6278:
    // 0x1e6278: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e6278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e627c:
    // 0x1e627c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e627cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6280:
    // 0x1e6280: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1e6280u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1e6284:
    // 0x1e6284: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e6284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e6288:
    // 0x1e6288: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e6288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e628c:
    // 0x1e628c: 0x35080036  ori         $t0, $t0, 0x36
    ctx->pc = 0x1e628cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54);
label_1e6290:
    // 0x1e6290: 0xc0707e0  jal         func_1C1F80
label_1e6294:
    if (ctx->pc == 0x1E6294u) {
        ctx->pc = 0x1E6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6290u;
        // 0x1e6294: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6298u;
        goto label_1e6298;
    }
    ctx->pc = 0x1E6290u;
    SET_GPR_U32(ctx, 31, 0x1E6298u);
    ctx->pc = 0x1E6294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6290u;
    // 0x1e6294: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F80u, 0x1E6290u, 0x1E6298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6298u;
label_1e6298:
    // 0x1e6298: 0xc088ade  jal         func_222B78
label_1e629c:
    if (ctx->pc == 0x1E629Cu) {
        ctx->pc = 0x1E629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6298u;
        // 0x1e629c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62A0u;
        goto label_1e62a0;
    }
    ctx->pc = 0x1E6298u;
    SET_GPR_U32(ctx, 31, 0x1E62A0u);
    ctx->pc = 0x1E629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6298u;
    // 0x1e629c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x1E6298u, 0x1E62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E62A0u;
label_1e62a0:
    // 0x1e62a0: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x1e62a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
label_1e62a4:
    // 0x1e62a4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e62a8:
    if (ctx->pc == 0x1E62A8u) {
        ctx->pc = 0x1E62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A4u;
        // 0x1e62a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62ACu;
        goto label_1e62ac;
    }
    ctx->pc = 0x1E62A4u;
    {
        const bool branch_taken_0x1e62a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A4u;
        // 0x1e62a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62a4) {
            ctx->pc = 0x1E62C0u;
            goto label_1e62c0;
        }
    }
    ctx->pc = 0x1E62ACu;
label_1e62ac:
    // 0x1e62ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e62acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e62b0:
    // 0x1e62b0: 0x0  nop
    ctx->pc = 0x1e62b0u;
    // NOP
label_1e62b4:
    // 0x1e62b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e62b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e62b8:
    // 0x1e62b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e62bc:
    if (ctx->pc == 0x1E62BCu) {
        ctx->pc = 0x1E62C0u;
        goto label_1e62c0;
    }
    ctx->pc = 0x1E62B8u;
    {
        const bool branch_taken_0x1e62b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e62b8) {
            ctx->pc = 0x1E62D8u;
            goto label_1e62d8;
        }
    }
    ctx->pc = 0x1E62C0u;
label_1e62c0:
    // 0x1e62c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e62c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e62c4:
    // 0x1e62c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e62c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e62c8:
    // 0x1e62c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e62c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e62cc:
    // 0x1e62cc: 0x0  nop
    ctx->pc = 0x1e62ccu;
    // NOP
label_1e62d0:
    // 0x1e62d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e62d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e62d4:
    // 0x1e62d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e62d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e62d8:
    // 0x1e62d8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1e62d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1e62dc:
    // 0x1e62dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e62dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e62e0:
    // 0x1e62e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e62e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e62e4:
    // 0x1e62e4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e62e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e62e8:
    // 0x1e62e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e62e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e62ec:
    // 0x1e62ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e62ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e62f0:
    // 0x1e62f0: 0x26f21780  addiu       $s2, $s7, 0x1780
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 6016));
label_1e62f4:
    // 0x1e62f4: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1e62f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1e62f8:
    // 0x1e62f8: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1e62f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e62fc:
    // 0x1e62fc: 0x460ca329  min.s       $f12, $f20, $f12
    ctx->pc = 0x1e62fcu;
    ctx->f[12] = std::min(ctx->f[20], ctx->f[12]);
label_1e6300:
    // 0x1e6300: 0xc07094c  jal         func_1C2530
label_1e6304:
    if (ctx->pc == 0x1E6304u) {
        ctx->pc = 0x1E6304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6300u;
        // 0x1e6304: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6308u;
        goto label_1e6308;
    }
    ctx->pc = 0x1E6300u;
    SET_GPR_U32(ctx, 31, 0x1E6308u);
    ctx->pc = 0x1E6304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6300u;
    // 0x1e6304: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2530u, 0x1E6300u, 0x1E6308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6308u;
label_1e6308:
    // 0x1e6308: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1e6308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1e630c:
    // 0x1e630c: 0xc0708a4  jal         func_1C2290
label_1e6310:
    if (ctx->pc == 0x1E6310u) {
        ctx->pc = 0x1E6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E630Cu;
        // 0x1e6310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6314u;
        goto label_1e6314;
    }
    ctx->pc = 0x1E630Cu;
    SET_GPR_U32(ctx, 31, 0x1E6314u);
    ctx->pc = 0x1E6310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E630Cu;
    // 0x1e6310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x1E630Cu, 0x1E6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6314u;
label_1e6314:
    // 0x1e6314: 0x7ae21d60  lq          $v0, 0x1D60($s7)
    ctx->pc = 0x1e6314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 7520)));
label_1e6318:
    // 0x1e6318: 0x2610f1f0  addiu       $s0, $s0, -0xE10
    ctx->pc = 0x1e6318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963696));
label_1e631c:
    // 0x1e631c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x1e631cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1e6320:
    // 0x1e6320: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1e6320u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6324:
    // 0x1e6324: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1e6324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e6328:
    // 0x1e6328: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6328u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e632c:
    // 0x1e632c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e632cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6330:
    // 0x1e6330: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6334:
    // 0x1e6334: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6334u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6338:
    // 0x1e6338: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6338u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e633c:
    // 0x1e633c: 0xa3a60058  sb          $a2, 0x58($sp)
    ctx->pc = 0x1e633cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 6));
label_1e6340:
    // 0x1e6340: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1e6340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1e6344:
    // 0x1e6344: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1e6344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e6348:
    // 0x1e6348: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e6348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e634c:
    // 0x1e634c: 0x2610ff20  addiu       $s0, $s0, -0xE0
    ctx->pc = 0x1e634cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967072));
label_1e6350:
    // 0x1e6350: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e6350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1e6354:
    // 0x1e6354: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x1e6354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
label_1e6358:
    // 0x1e6358: 0xa0a70003  sb          $a3, 0x3($a1)
    ctx->pc = 0x1e6358u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 7));
label_1e635c:
    // 0x1e635c: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1e635cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
label_1e6360:
    // 0x1e6360: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x1e6360u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
label_1e6364:
    // 0x1e6364: 0xc067b9c  jal         func_19EE70
label_1e6368:
    if (ctx->pc == 0x1E6368u) {
        ctx->pc = 0x1E6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6364u;
        // 0x1e6368: 0x8fb10058  lw          $s1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E636Cu;
        goto label_1e636c;
    }
    ctx->pc = 0x1E6364u;
    SET_GPR_U32(ctx, 31, 0x1E636Cu);
    ctx->pc = 0x1E6368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6364u;
    // 0x1e6368: 0x8fb10058  lw          $s1, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E6364u, 0x1E636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E636Cu;
label_1e636c:
    // 0x1e636c: 0xc60d0104  lwc1        $f13, 0x104($s0)
    ctx->pc = 0x1e636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e6370:
    // 0x1e6370: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1e6370u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
label_1e6374:
    // 0x1e6374: 0xc60c0100  lwc1        $f12, 0x100($s0)
    ctx->pc = 0x1e6374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6378:
    // 0x1e6378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e6378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e637c:
    // 0x1e637c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e637cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6380:
    // 0x1e6380: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e6380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6384:
    // 0x1e6384: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1e6384u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1e6388:
    // 0x1e6388: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e6388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e638c:
    // 0x1e638c: 0x35080036  ori         $t0, $t0, 0x36
    ctx->pc = 0x1e638cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54);
label_1e6390:
    // 0x1e6390: 0xc0707e0  jal         func_1C1F80
label_1e6394:
    if (ctx->pc == 0x1E6394u) {
        ctx->pc = 0x1E6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6390u;
        // 0x1e6394: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6398u;
        goto label_1e6398;
    }
    ctx->pc = 0x1E6390u;
    SET_GPR_U32(ctx, 31, 0x1E6398u);
    ctx->pc = 0x1E6394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6390u;
    // 0x1e6394: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F80u, 0x1E6390u, 0x1E6398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6398u;
label_1e6398:
    // 0x1e6398: 0xc088c98  jal         func_223260
label_1e639c:
    if (ctx->pc == 0x1E639Cu) {
        ctx->pc = 0x1E639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6398u;
        // 0x1e639c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63A0u;
        goto label_1e63a0;
    }
    ctx->pc = 0x1E6398u;
    SET_GPR_U32(ctx, 31, 0x1E63A0u);
    ctx->pc = 0x1E639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6398u;
    // 0x1e639c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x1E6398u, 0x1E63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E63A0u;
label_1e63a0:
    // 0x1e63a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e63a4:
    if (ctx->pc == 0x1E63A4u) {
        ctx->pc = 0x1E63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63A0u;
        // 0x1e63a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63A8u;
        goto label_1e63a8;
    }
    ctx->pc = 0x1E63A0u;
    {
        const bool branch_taken_0x1e63a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63A0u;
        // 0x1e63a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63a0) {
            ctx->pc = 0x1E63BCu;
            goto label_1e63bc;
        }
    }
    ctx->pc = 0x1E63A8u;
label_1e63a8:
    // 0x1e63a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e63a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e63ac:
    // 0x1e63ac: 0x0  nop
    ctx->pc = 0x1e63acu;
    // NOP
label_1e63b0:
    // 0x1e63b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e63b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e63b4:
    // 0x1e63b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e63b8:
    if (ctx->pc == 0x1E63B8u) {
        ctx->pc = 0x1E63BCu;
        goto label_1e63bc;
    }
    ctx->pc = 0x1E63B4u;
    {
        const bool branch_taken_0x1e63b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e63b4) {
            ctx->pc = 0x1E63D4u;
            goto label_1e63d4;
        }
    }
    ctx->pc = 0x1E63BCu;
label_1e63bc:
    // 0x1e63bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e63bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e63c0:
    // 0x1e63c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e63c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e63c4:
    // 0x1e63c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e63c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e63c8:
    // 0x1e63c8: 0x0  nop
    ctx->pc = 0x1e63c8u;
    // NOP
label_1e63cc:
    // 0x1e63cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e63ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e63d0:
    // 0x1e63d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e63d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e63d4:
    // 0x1e63d4: 0x3c013bda  lui         $at, 0x3BDA
    ctx->pc = 0x1e63d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15322 << 16));
label_1e63d8:
    // 0x1e63d8: 0x3421740e  ori         $at, $at, 0x740E
    ctx->pc = 0x1e63d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29710);
label_1e63dc:
    // 0x1e63dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e63dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e63e0:
    // 0x1e63e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e63e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e63e4:
    // 0x1e63e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e63e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e63e8:
    // 0x1e63e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e63e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e63ec:
    // 0x1e63ec: 0x26f01b70  addiu       $s0, $s7, 0x1B70
    ctx->pc = 0x1e63ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 7024));
label_1e63f0:
    // 0x1e63f0: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1e63f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1e63f4:
    // 0x1e63f4: 0x460ca329  min.s       $f12, $f20, $f12
    ctx->pc = 0x1e63f4u;
    ctx->f[12] = std::min(ctx->f[20], ctx->f[12]);
label_1e63f8:
    // 0x1e63f8: 0xc07094c  jal         func_1C2530
label_1e63fc:
    if (ctx->pc == 0x1E63FCu) {
        ctx->pc = 0x1E6400u;
        goto label_1e6400;
    }
    ctx->pc = 0x1E63F8u;
    SET_GPR_U32(ctx, 31, 0x1E6400u);
    ctx->pc = 0x1C2530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2530u, 0x1E63F8u, 0x1E6400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6400u;
label_1e6400:
    // 0x1e6400: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e6400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e6404:
    // 0x1e6404: 0xc0708a4  jal         func_1C2290
label_1e6408:
    if (ctx->pc == 0x1E6408u) {
        ctx->pc = 0x1E6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6404u;
        // 0x1e6408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E640Cu;
        goto label_1e640c;
    }
    ctx->pc = 0x1E6404u;
    SET_GPR_U32(ctx, 31, 0x1E640Cu);
    ctx->pc = 0x1E6408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6404u;
    // 0x1e6408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x1E6404u, 0x1E640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E640Cu;
label_1e640c:
    // 0x1e640c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e6410:
    // 0x1e6410: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e6410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1e6414:
    // 0x1e6414: 0x2442f220  addiu       $v0, $v0, -0xDE0
    ctx->pc = 0x1e6414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963744));
label_1e6418:
    // 0x1e6418: 0x8c91d310  lw          $s1, -0x2CF0($a0)
    ctx->pc = 0x1e6418u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_1e641c:
    // 0x1e641c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1e641cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6420:
    // 0x1e6420: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e6420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e6424:
    // 0x1e6424: 0x7ae21d60  lq          $v0, 0x1D60($s7)
    ctx->pc = 0x1e6424u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 7520)));
label_1e6428:
    // 0x1e6428: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e6428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e642c:
    // 0x1e642c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1e642cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1e6430:
    // 0x1e6430: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6434:
    // 0x1e6434: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6438:
    // 0x1e6438: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e643c:
    // 0x1e643c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e643cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6440:
    // 0x1e6440: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6440u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6444:
    // 0x1e6444: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e6444u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e6448:
    // 0x1e6448: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e6448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e644c:
    // 0x1e644c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1e6450:
    // 0x1e6450: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e6450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6454:
    // 0x1e6454: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e6454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e6458:
    // 0x1e6458: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e6458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e645c:
    // 0x1e645c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e645cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6460:
    // 0x1e6460: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e6460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6464:
    // 0x1e6464: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1e6464u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e6468:
    // 0x1e6468: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e6468u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e646c:
    // 0x1e646c: 0xc06e424  jal         func_1B9090
label_1e6470:
    if (ctx->pc == 0x1E6470u) {
        ctx->pc = 0x1E6470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E646Cu;
        // 0x1e6470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6474u;
        goto label_1e6474;
    }
    ctx->pc = 0x1E646Cu;
    SET_GPR_U32(ctx, 31, 0x1E6474u);
    ctx->pc = 0x1E6470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E646Cu;
    // 0x1e6470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1E646Cu, 0x1E6474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6474u;
label_1e6474:
    // 0x1e6474: 0xc067b9c  jal         func_19EE70
label_1e6478:
    if (ctx->pc == 0x1E6478u) {
        ctx->pc = 0x1E6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6474u;
        // 0x1e6478: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E647Cu;
        goto label_1e647c;
    }
    ctx->pc = 0x1E6474u;
    SET_GPR_U32(ctx, 31, 0x1E647Cu);
    ctx->pc = 0x1E6478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6474u;
    // 0x1e6478: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E6474u, 0x1E647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E647Cu;
label_1e647c:
    // 0x1e647c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e647cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6480:
    // 0x1e6480: 0xc06ec94  jal         func_1BB250
label_1e6484:
    if (ctx->pc == 0x1E6484u) {
        ctx->pc = 0x1E6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6480u;
        // 0x1e6484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6488u;
        goto label_1e6488;
    }
    ctx->pc = 0x1E6480u;
    SET_GPR_U32(ctx, 31, 0x1E6488u);
    ctx->pc = 0x1E6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6480u;
    // 0x1e6484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1E6480u, 0x1E6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6488u;
label_1e6488:
    // 0x1e6488: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1e6488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1e648c:
    // 0x1e648c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e648cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e6490:
    // 0x1e6490: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e6490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6494:
    // 0x1e6494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6498:
    // 0x1e6498: 0xc06ece4  jal         func_1BB390
label_1e649c:
    if (ctx->pc == 0x1E649Cu) {
        ctx->pc = 0x1E649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6498u;
        // 0x1e649c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64A0u;
        goto label_1e64a0;
    }
    ctx->pc = 0x1E6498u;
    SET_GPR_U32(ctx, 31, 0x1E64A0u);
    ctx->pc = 0x1E649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6498u;
    // 0x1e649c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1E6498u, 0x1E64A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E64A0u;
label_1e64a0:
    // 0x1e64a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e64a4:
    // 0x1e64a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e64a8:
    // 0x1e64a8: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x1e64a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
label_1e64ac:
    // 0x1e64ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e64acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e64b0:
    // 0x1e64b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e64b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e64b4:
    // 0x1e64b4: 0xae0201a0  sw          $v0, 0x1A0($s0)
    ctx->pc = 0x1e64b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
label_1e64b8:
    // 0x1e64b8: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x1e64b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
label_1e64bc:
    // 0x1e64bc: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x1e64bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
label_1e64c0:
    // 0x1e64c0: 0xc06e534  jal         func_1B94D0
label_1e64c4:
    if (ctx->pc == 0x1E64C4u) {
        ctx->pc = 0x1E64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64C0u;
        // 0x1e64c4: 0xae020188  sw          $v0, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64C8u;
        goto label_1e64c8;
    }
    ctx->pc = 0x1E64C0u;
    SET_GPR_U32(ctx, 31, 0x1E64C8u);
    ctx->pc = 0x1E64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64C0u;
    // 0x1e64c4: 0xae020188  sw          $v0, 0x188($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1E64C0u, 0x1E64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E64C8u;
label_1e64c8:
    // 0x1e64c8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e64cc:
    // 0x1e64cc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1e64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1e64d0:
    // 0x1e64d0: 0xa2e21d70  sb          $v0, 0x1D70($s7)
    ctx->pc = 0x1e64d0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 7536), (uint8_t)GPR_U32(ctx, 2));
label_1e64d4:
    // 0x1e64d4: 0xaee007a0  sw          $zero, 0x7A0($s7)
    ctx->pc = 0x1e64d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1952), GPR_U32(ctx, 0));
label_1e64d8:
    // 0x1e64d8: 0x8c85b8b8  lw          $a1, -0x4748($a0)
    ctx->pc = 0x1e64d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949048)));
label_1e64dc:
    // 0x1e64dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e64e0:
    // 0x1e64e0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e64e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e64e4:
    // 0x1e64e4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e64e8:
    // 0x1e64e8: 0x40f809  jalr        $v0
label_1e64ec:
    if (ctx->pc == 0x1E64ECu) {
        ctx->pc = 0x1E64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64E8u;
        // 0x1e64ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64F0u;
        goto label_1e64f0;
    }
    ctx->pc = 0x1E64E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E64F0u);
        ctx->pc = 0x1E64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64E8u;
        // 0x1e64ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E64E8u, 0x1E64F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E64F0u;
label_1e64f0:
    // 0x1e64f0: 0xaee20790  sw          $v0, 0x790($s7)
    ctx->pc = 0x1e64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1936), GPR_U32(ctx, 2));
label_1e64f4:
    // 0x1e64f4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1e64f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1e64f8:
    // 0x1e64f8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1e64f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1e64fc:
    // 0x1e64fc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1e64fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1e6500:
    // 0x1e6500: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1e6500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1e6504:
    // 0x1e6504: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1e6504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e6508:
    // 0x1e6508: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1e6508u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e650c:
    // 0x1e650c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1e650cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e6510:
    // 0x1e6510: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1e6510u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e6514:
    // 0x1e6514: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e6514u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e6518:
    // 0x1e6518: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e6518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e651c:
    // 0x1e651c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1e651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e6520:
    // 0x1e6520: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1e6520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e6524:
    // 0x1e6524: 0x3e00008  jr          $ra
label_1e6528:
    if (ctx->pc == 0x1E6528u) {
        ctx->pc = 0x1E6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6524u;
        // 0x1e6528: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E652Cu;
        goto label_1e652c;
    }
    ctx->pc = 0x1E6524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6524u;
        // 0x1e6528: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E652Cu;
label_1e652c:
    // 0x1e652c: 0x0  nop
    ctx->pc = 0x1e652cu;
    // NOP
    ctx->pc = 0x1e6530u;
}
