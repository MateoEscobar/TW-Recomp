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

// Function: sub_00400800
// Address: 0x400800 - 0x402000
void sub_00400800_0x400800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400800_0x400800");
#endif

    switch (ctx->pc) {
        case 0x400800u: goto label_400800;
        case 0x400804u: goto label_400804;
        case 0x400808u: goto label_400808;
        case 0x40080cu: goto label_40080c;
        case 0x400810u: goto label_400810;
        case 0x400814u: goto label_400814;
        case 0x400818u: goto label_400818;
        case 0x40081cu: goto label_40081c;
        case 0x400820u: goto label_400820;
        case 0x400824u: goto label_400824;
        case 0x400828u: goto label_400828;
        case 0x40082cu: goto label_40082c;
        case 0x400830u: goto label_400830;
        case 0x400834u: goto label_400834;
        case 0x400838u: goto label_400838;
        case 0x40083cu: goto label_40083c;
        case 0x400840u: goto label_400840;
        case 0x400844u: goto label_400844;
        case 0x400848u: goto label_400848;
        case 0x40084cu: goto label_40084c;
        case 0x400850u: goto label_400850;
        case 0x400854u: goto label_400854;
        case 0x400858u: goto label_400858;
        case 0x40085cu: goto label_40085c;
        case 0x400860u: goto label_400860;
        case 0x400864u: goto label_400864;
        case 0x400868u: goto label_400868;
        case 0x40086cu: goto label_40086c;
        case 0x400870u: goto label_400870;
        case 0x400874u: goto label_400874;
        case 0x400878u: goto label_400878;
        case 0x40087cu: goto label_40087c;
        case 0x400880u: goto label_400880;
        case 0x400884u: goto label_400884;
        case 0x400888u: goto label_400888;
        case 0x40088cu: goto label_40088c;
        case 0x400890u: goto label_400890;
        case 0x400894u: goto label_400894;
        case 0x400898u: goto label_400898;
        case 0x40089cu: goto label_40089c;
        case 0x4008a0u: goto label_4008a0;
        case 0x4008a4u: goto label_4008a4;
        case 0x4008a8u: goto label_4008a8;
        case 0x4008acu: goto label_4008ac;
        case 0x4008b0u: goto label_4008b0;
        case 0x4008b4u: goto label_4008b4;
        case 0x4008b8u: goto label_4008b8;
        case 0x4008bcu: goto label_4008bc;
        case 0x4008c0u: goto label_4008c0;
        case 0x4008c4u: goto label_4008c4;
        case 0x4008c8u: goto label_4008c8;
        case 0x4008ccu: goto label_4008cc;
        case 0x4008d0u: goto label_4008d0;
        case 0x4008d4u: goto label_4008d4;
        case 0x4008d8u: goto label_4008d8;
        case 0x4008dcu: goto label_4008dc;
        case 0x4008e0u: goto label_4008e0;
        case 0x4008e4u: goto label_4008e4;
        case 0x4008e8u: goto label_4008e8;
        case 0x4008ecu: goto label_4008ec;
        case 0x4008f0u: goto label_4008f0;
        case 0x4008f4u: goto label_4008f4;
        case 0x4008f8u: goto label_4008f8;
        case 0x4008fcu: goto label_4008fc;
        case 0x400900u: goto label_400900;
        case 0x400904u: goto label_400904;
        case 0x400908u: goto label_400908;
        case 0x40090cu: goto label_40090c;
        case 0x400910u: goto label_400910;
        case 0x400914u: goto label_400914;
        case 0x400918u: goto label_400918;
        case 0x40091cu: goto label_40091c;
        case 0x400920u: goto label_400920;
        case 0x400924u: goto label_400924;
        case 0x400928u: goto label_400928;
        case 0x40092cu: goto label_40092c;
        case 0x400930u: goto label_400930;
        case 0x400934u: goto label_400934;
        case 0x400938u: goto label_400938;
        case 0x40093cu: goto label_40093c;
        case 0x400940u: goto label_400940;
        case 0x400944u: goto label_400944;
        case 0x400948u: goto label_400948;
        case 0x40094cu: goto label_40094c;
        case 0x400950u: goto label_400950;
        case 0x400954u: goto label_400954;
        case 0x400958u: goto label_400958;
        case 0x40095cu: goto label_40095c;
        case 0x400960u: goto label_400960;
        case 0x400964u: goto label_400964;
        case 0x400968u: goto label_400968;
        case 0x40096cu: goto label_40096c;
        case 0x400970u: goto label_400970;
        case 0x400974u: goto label_400974;
        case 0x400978u: goto label_400978;
        case 0x40097cu: goto label_40097c;
        case 0x400980u: goto label_400980;
        case 0x400984u: goto label_400984;
        case 0x400988u: goto label_400988;
        case 0x40098cu: goto label_40098c;
        case 0x400990u: goto label_400990;
        case 0x400994u: goto label_400994;
        case 0x400998u: goto label_400998;
        case 0x40099cu: goto label_40099c;
        case 0x4009a0u: goto label_4009a0;
        case 0x4009a4u: goto label_4009a4;
        case 0x4009a8u: goto label_4009a8;
        case 0x4009acu: goto label_4009ac;
        case 0x4009b0u: goto label_4009b0;
        case 0x4009b4u: goto label_4009b4;
        case 0x4009b8u: goto label_4009b8;
        case 0x4009bcu: goto label_4009bc;
        case 0x4009c0u: goto label_4009c0;
        case 0x4009c4u: goto label_4009c4;
        case 0x4009c8u: goto label_4009c8;
        case 0x4009ccu: goto label_4009cc;
        case 0x4009d0u: goto label_4009d0;
        case 0x4009d4u: goto label_4009d4;
        case 0x4009d8u: goto label_4009d8;
        case 0x4009dcu: goto label_4009dc;
        case 0x4009e0u: goto label_4009e0;
        case 0x4009e4u: goto label_4009e4;
        case 0x4009e8u: goto label_4009e8;
        case 0x4009ecu: goto label_4009ec;
        case 0x4009f0u: goto label_4009f0;
        case 0x4009f4u: goto label_4009f4;
        case 0x4009f8u: goto label_4009f8;
        case 0x4009fcu: goto label_4009fc;
        case 0x400a00u: goto label_400a00;
        case 0x400a04u: goto label_400a04;
        case 0x400a08u: goto label_400a08;
        case 0x400a0cu: goto label_400a0c;
        case 0x400a10u: goto label_400a10;
        case 0x400a14u: goto label_400a14;
        case 0x400a18u: goto label_400a18;
        case 0x400a1cu: goto label_400a1c;
        case 0x400a20u: goto label_400a20;
        case 0x400a24u: goto label_400a24;
        case 0x400a28u: goto label_400a28;
        case 0x400a2cu: goto label_400a2c;
        case 0x400a30u: goto label_400a30;
        case 0x400a34u: goto label_400a34;
        case 0x400a38u: goto label_400a38;
        case 0x400a3cu: goto label_400a3c;
        case 0x400a40u: goto label_400a40;
        case 0x400a44u: goto label_400a44;
        case 0x400a48u: goto label_400a48;
        case 0x400a4cu: goto label_400a4c;
        case 0x400a50u: goto label_400a50;
        case 0x400a54u: goto label_400a54;
        case 0x400a58u: goto label_400a58;
        case 0x400a5cu: goto label_400a5c;
        case 0x400a60u: goto label_400a60;
        case 0x400a64u: goto label_400a64;
        case 0x400a68u: goto label_400a68;
        case 0x400a6cu: goto label_400a6c;
        case 0x400a70u: goto label_400a70;
        case 0x400a74u: goto label_400a74;
        case 0x400a78u: goto label_400a78;
        case 0x400a7cu: goto label_400a7c;
        case 0x400a80u: goto label_400a80;
        case 0x400a84u: goto label_400a84;
        case 0x400a88u: goto label_400a88;
        case 0x400a8cu: goto label_400a8c;
        case 0x400a90u: goto label_400a90;
        case 0x400a94u: goto label_400a94;
        case 0x400a98u: goto label_400a98;
        case 0x400a9cu: goto label_400a9c;
        case 0x400aa0u: goto label_400aa0;
        case 0x400aa4u: goto label_400aa4;
        case 0x400aa8u: goto label_400aa8;
        case 0x400aacu: goto label_400aac;
        case 0x400ab0u: goto label_400ab0;
        case 0x400ab4u: goto label_400ab4;
        case 0x400ab8u: goto label_400ab8;
        case 0x400abcu: goto label_400abc;
        case 0x400ac0u: goto label_400ac0;
        case 0x400ac4u: goto label_400ac4;
        case 0x400ac8u: goto label_400ac8;
        case 0x400accu: goto label_400acc;
        case 0x400ad0u: goto label_400ad0;
        case 0x400ad4u: goto label_400ad4;
        case 0x400ad8u: goto label_400ad8;
        case 0x400adcu: goto label_400adc;
        case 0x400ae0u: goto label_400ae0;
        case 0x400ae4u: goto label_400ae4;
        case 0x400ae8u: goto label_400ae8;
        case 0x400aecu: goto label_400aec;
        case 0x400af0u: goto label_400af0;
        case 0x400af4u: goto label_400af4;
        case 0x400af8u: goto label_400af8;
        case 0x400afcu: goto label_400afc;
        case 0x400b00u: goto label_400b00;
        case 0x400b04u: goto label_400b04;
        case 0x400b08u: goto label_400b08;
        case 0x400b0cu: goto label_400b0c;
        case 0x400b10u: goto label_400b10;
        case 0x400b14u: goto label_400b14;
        case 0x400b18u: goto label_400b18;
        case 0x400b1cu: goto label_400b1c;
        case 0x400b20u: goto label_400b20;
        case 0x400b24u: goto label_400b24;
        case 0x400b28u: goto label_400b28;
        case 0x400b2cu: goto label_400b2c;
        case 0x400b30u: goto label_400b30;
        case 0x400b34u: goto label_400b34;
        case 0x400b38u: goto label_400b38;
        case 0x400b3cu: goto label_400b3c;
        case 0x400b40u: goto label_400b40;
        case 0x400b44u: goto label_400b44;
        case 0x400b48u: goto label_400b48;
        case 0x400b4cu: goto label_400b4c;
        case 0x400b50u: goto label_400b50;
        case 0x400b54u: goto label_400b54;
        case 0x400b58u: goto label_400b58;
        case 0x400b5cu: goto label_400b5c;
        case 0x400b60u: goto label_400b60;
        case 0x400b64u: goto label_400b64;
        case 0x400b68u: goto label_400b68;
        case 0x400b6cu: goto label_400b6c;
        case 0x400b70u: goto label_400b70;
        case 0x400b74u: goto label_400b74;
        case 0x400b78u: goto label_400b78;
        case 0x400b7cu: goto label_400b7c;
        case 0x400b80u: goto label_400b80;
        case 0x400b84u: goto label_400b84;
        case 0x400b88u: goto label_400b88;
        case 0x400b8cu: goto label_400b8c;
        case 0x400b90u: goto label_400b90;
        case 0x400b94u: goto label_400b94;
        case 0x400b98u: goto label_400b98;
        case 0x400b9cu: goto label_400b9c;
        case 0x400ba0u: goto label_400ba0;
        case 0x400ba4u: goto label_400ba4;
        case 0x400ba8u: goto label_400ba8;
        case 0x400bacu: goto label_400bac;
        case 0x400bb0u: goto label_400bb0;
        case 0x400bb4u: goto label_400bb4;
        case 0x400bb8u: goto label_400bb8;
        case 0x400bbcu: goto label_400bbc;
        case 0x400bc0u: goto label_400bc0;
        case 0x400bc4u: goto label_400bc4;
        case 0x400bc8u: goto label_400bc8;
        case 0x400bccu: goto label_400bcc;
        case 0x400bd0u: goto label_400bd0;
        case 0x400bd4u: goto label_400bd4;
        case 0x400bd8u: goto label_400bd8;
        case 0x400bdcu: goto label_400bdc;
        case 0x400be0u: goto label_400be0;
        case 0x400be4u: goto label_400be4;
        case 0x400be8u: goto label_400be8;
        case 0x400becu: goto label_400bec;
        case 0x400bf0u: goto label_400bf0;
        case 0x400bf4u: goto label_400bf4;
        case 0x400bf8u: goto label_400bf8;
        case 0x400bfcu: goto label_400bfc;
        case 0x400c00u: goto label_400c00;
        case 0x400c04u: goto label_400c04;
        case 0x400c08u: goto label_400c08;
        case 0x400c0cu: goto label_400c0c;
        case 0x400c10u: goto label_400c10;
        case 0x400c14u: goto label_400c14;
        case 0x400c18u: goto label_400c18;
        case 0x400c1cu: goto label_400c1c;
        case 0x400c20u: goto label_400c20;
        case 0x400c24u: goto label_400c24;
        case 0x400c28u: goto label_400c28;
        case 0x400c2cu: goto label_400c2c;
        case 0x400c30u: goto label_400c30;
        case 0x400c34u: goto label_400c34;
        case 0x400c38u: goto label_400c38;
        case 0x400c3cu: goto label_400c3c;
        case 0x400c40u: goto label_400c40;
        case 0x400c44u: goto label_400c44;
        case 0x400c48u: goto label_400c48;
        case 0x400c4cu: goto label_400c4c;
        case 0x400c50u: goto label_400c50;
        case 0x400c54u: goto label_400c54;
        case 0x400c58u: goto label_400c58;
        case 0x400c5cu: goto label_400c5c;
        case 0x400c60u: goto label_400c60;
        case 0x400c64u: goto label_400c64;
        case 0x400c68u: goto label_400c68;
        case 0x400c6cu: goto label_400c6c;
        case 0x400c70u: goto label_400c70;
        case 0x400c74u: goto label_400c74;
        case 0x400c78u: goto label_400c78;
        case 0x400c7cu: goto label_400c7c;
        case 0x400c80u: goto label_400c80;
        case 0x400c84u: goto label_400c84;
        case 0x400c88u: goto label_400c88;
        case 0x400c8cu: goto label_400c8c;
        case 0x400c90u: goto label_400c90;
        case 0x400c94u: goto label_400c94;
        case 0x400c98u: goto label_400c98;
        case 0x400c9cu: goto label_400c9c;
        case 0x400ca0u: goto label_400ca0;
        case 0x400ca4u: goto label_400ca4;
        case 0x400ca8u: goto label_400ca8;
        case 0x400cacu: goto label_400cac;
        case 0x400cb0u: goto label_400cb0;
        case 0x400cb4u: goto label_400cb4;
        case 0x400cb8u: goto label_400cb8;
        case 0x400cbcu: goto label_400cbc;
        case 0x400cc0u: goto label_400cc0;
        case 0x400cc4u: goto label_400cc4;
        case 0x400cc8u: goto label_400cc8;
        case 0x400cccu: goto label_400ccc;
        case 0x400cd0u: goto label_400cd0;
        case 0x400cd4u: goto label_400cd4;
        case 0x400cd8u: goto label_400cd8;
        case 0x400cdcu: goto label_400cdc;
        case 0x400ce0u: goto label_400ce0;
        case 0x400ce4u: goto label_400ce4;
        case 0x400ce8u: goto label_400ce8;
        case 0x400cecu: goto label_400cec;
        case 0x400cf0u: goto label_400cf0;
        case 0x400cf4u: goto label_400cf4;
        case 0x400cf8u: goto label_400cf8;
        case 0x400cfcu: goto label_400cfc;
        case 0x400d00u: goto label_400d00;
        case 0x400d04u: goto label_400d04;
        case 0x400d08u: goto label_400d08;
        case 0x400d0cu: goto label_400d0c;
        case 0x400d10u: goto label_400d10;
        case 0x400d14u: goto label_400d14;
        case 0x400d18u: goto label_400d18;
        case 0x400d1cu: goto label_400d1c;
        case 0x400d20u: goto label_400d20;
        case 0x400d24u: goto label_400d24;
        case 0x400d28u: goto label_400d28;
        case 0x400d2cu: goto label_400d2c;
        case 0x400d30u: goto label_400d30;
        case 0x400d34u: goto label_400d34;
        case 0x400d38u: goto label_400d38;
        case 0x400d3cu: goto label_400d3c;
        case 0x400d40u: goto label_400d40;
        case 0x400d44u: goto label_400d44;
        case 0x400d48u: goto label_400d48;
        case 0x400d4cu: goto label_400d4c;
        case 0x400d50u: goto label_400d50;
        case 0x400d54u: goto label_400d54;
        case 0x400d58u: goto label_400d58;
        case 0x400d5cu: goto label_400d5c;
        case 0x400d60u: goto label_400d60;
        case 0x400d64u: goto label_400d64;
        case 0x400d68u: goto label_400d68;
        case 0x400d6cu: goto label_400d6c;
        case 0x400d70u: goto label_400d70;
        case 0x400d74u: goto label_400d74;
        case 0x400d78u: goto label_400d78;
        case 0x400d7cu: goto label_400d7c;
        case 0x400d80u: goto label_400d80;
        case 0x400d84u: goto label_400d84;
        case 0x400d88u: goto label_400d88;
        case 0x400d8cu: goto label_400d8c;
        case 0x400d90u: goto label_400d90;
        case 0x400d94u: goto label_400d94;
        case 0x400d98u: goto label_400d98;
        case 0x400d9cu: goto label_400d9c;
        case 0x400da0u: goto label_400da0;
        case 0x400da4u: goto label_400da4;
        case 0x400da8u: goto label_400da8;
        case 0x400dacu: goto label_400dac;
        case 0x400db0u: goto label_400db0;
        case 0x400db4u: goto label_400db4;
        case 0x400db8u: goto label_400db8;
        case 0x400dbcu: goto label_400dbc;
        case 0x400dc0u: goto label_400dc0;
        case 0x400dc4u: goto label_400dc4;
        case 0x400dc8u: goto label_400dc8;
        case 0x400dccu: goto label_400dcc;
        case 0x400dd0u: goto label_400dd0;
        case 0x400dd4u: goto label_400dd4;
        case 0x400dd8u: goto label_400dd8;
        case 0x400ddcu: goto label_400ddc;
        case 0x400de0u: goto label_400de0;
        case 0x400de4u: goto label_400de4;
        case 0x400de8u: goto label_400de8;
        case 0x400decu: goto label_400dec;
        case 0x400df0u: goto label_400df0;
        case 0x400df4u: goto label_400df4;
        case 0x400df8u: goto label_400df8;
        case 0x400dfcu: goto label_400dfc;
        case 0x400e00u: goto label_400e00;
        case 0x400e04u: goto label_400e04;
        case 0x400e08u: goto label_400e08;
        case 0x400e0cu: goto label_400e0c;
        case 0x400e10u: goto label_400e10;
        case 0x400e14u: goto label_400e14;
        case 0x400e18u: goto label_400e18;
        case 0x400e1cu: goto label_400e1c;
        case 0x400e20u: goto label_400e20;
        case 0x400e24u: goto label_400e24;
        case 0x400e28u: goto label_400e28;
        case 0x400e2cu: goto label_400e2c;
        case 0x400e30u: goto label_400e30;
        case 0x400e34u: goto label_400e34;
        case 0x400e38u: goto label_400e38;
        case 0x400e3cu: goto label_400e3c;
        case 0x400e40u: goto label_400e40;
        case 0x400e44u: goto label_400e44;
        case 0x400e48u: goto label_400e48;
        case 0x400e4cu: goto label_400e4c;
        case 0x400e50u: goto label_400e50;
        case 0x400e54u: goto label_400e54;
        case 0x400e58u: goto label_400e58;
        case 0x400e5cu: goto label_400e5c;
        case 0x400e60u: goto label_400e60;
        case 0x400e64u: goto label_400e64;
        case 0x400e68u: goto label_400e68;
        case 0x400e6cu: goto label_400e6c;
        case 0x400e70u: goto label_400e70;
        case 0x400e74u: goto label_400e74;
        case 0x400e78u: goto label_400e78;
        case 0x400e7cu: goto label_400e7c;
        case 0x400e80u: goto label_400e80;
        case 0x400e84u: goto label_400e84;
        case 0x400e88u: goto label_400e88;
        case 0x400e8cu: goto label_400e8c;
        case 0x400e90u: goto label_400e90;
        case 0x400e94u: goto label_400e94;
        case 0x400e98u: goto label_400e98;
        case 0x400e9cu: goto label_400e9c;
        case 0x400ea0u: goto label_400ea0;
        case 0x400ea4u: goto label_400ea4;
        case 0x400ea8u: goto label_400ea8;
        case 0x400eacu: goto label_400eac;
        case 0x400eb0u: goto label_400eb0;
        case 0x400eb4u: goto label_400eb4;
        case 0x400eb8u: goto label_400eb8;
        case 0x400ebcu: goto label_400ebc;
        case 0x400ec0u: goto label_400ec0;
        case 0x400ec4u: goto label_400ec4;
        case 0x400ec8u: goto label_400ec8;
        case 0x400eccu: goto label_400ecc;
        case 0x400ed0u: goto label_400ed0;
        case 0x400ed4u: goto label_400ed4;
        case 0x400ed8u: goto label_400ed8;
        case 0x400edcu: goto label_400edc;
        case 0x400ee0u: goto label_400ee0;
        case 0x400ee4u: goto label_400ee4;
        case 0x400ee8u: goto label_400ee8;
        case 0x400eecu: goto label_400eec;
        case 0x400ef0u: goto label_400ef0;
        case 0x400ef4u: goto label_400ef4;
        case 0x400ef8u: goto label_400ef8;
        case 0x400efcu: goto label_400efc;
        case 0x400f00u: goto label_400f00;
        case 0x400f04u: goto label_400f04;
        case 0x400f08u: goto label_400f08;
        case 0x400f0cu: goto label_400f0c;
        case 0x400f10u: goto label_400f10;
        case 0x400f14u: goto label_400f14;
        case 0x400f18u: goto label_400f18;
        case 0x400f1cu: goto label_400f1c;
        case 0x400f20u: goto label_400f20;
        case 0x400f24u: goto label_400f24;
        case 0x400f28u: goto label_400f28;
        case 0x400f2cu: goto label_400f2c;
        case 0x400f30u: goto label_400f30;
        case 0x400f34u: goto label_400f34;
        case 0x400f38u: goto label_400f38;
        case 0x400f3cu: goto label_400f3c;
        case 0x400f40u: goto label_400f40;
        case 0x400f44u: goto label_400f44;
        case 0x400f48u: goto label_400f48;
        case 0x400f4cu: goto label_400f4c;
        case 0x400f50u: goto label_400f50;
        case 0x400f54u: goto label_400f54;
        case 0x400f58u: goto label_400f58;
        case 0x400f5cu: goto label_400f5c;
        case 0x400f60u: goto label_400f60;
        case 0x400f64u: goto label_400f64;
        case 0x400f68u: goto label_400f68;
        case 0x400f6cu: goto label_400f6c;
        case 0x400f70u: goto label_400f70;
        case 0x400f74u: goto label_400f74;
        case 0x400f78u: goto label_400f78;
        case 0x400f7cu: goto label_400f7c;
        case 0x400f80u: goto label_400f80;
        case 0x400f84u: goto label_400f84;
        case 0x400f88u: goto label_400f88;
        case 0x400f8cu: goto label_400f8c;
        case 0x400f90u: goto label_400f90;
        case 0x400f94u: goto label_400f94;
        case 0x400f98u: goto label_400f98;
        case 0x400f9cu: goto label_400f9c;
        case 0x400fa0u: goto label_400fa0;
        case 0x400fa4u: goto label_400fa4;
        case 0x400fa8u: goto label_400fa8;
        case 0x400facu: goto label_400fac;
        case 0x400fb0u: goto label_400fb0;
        case 0x400fb4u: goto label_400fb4;
        case 0x400fb8u: goto label_400fb8;
        case 0x400fbcu: goto label_400fbc;
        case 0x400fc0u: goto label_400fc0;
        case 0x400fc4u: goto label_400fc4;
        case 0x400fc8u: goto label_400fc8;
        case 0x400fccu: goto label_400fcc;
        case 0x400fd0u: goto label_400fd0;
        case 0x400fd4u: goto label_400fd4;
        case 0x400fd8u: goto label_400fd8;
        case 0x400fdcu: goto label_400fdc;
        case 0x400fe0u: goto label_400fe0;
        case 0x400fe4u: goto label_400fe4;
        case 0x400fe8u: goto label_400fe8;
        case 0x400fecu: goto label_400fec;
        case 0x400ff0u: goto label_400ff0;
        case 0x400ff4u: goto label_400ff4;
        case 0x400ff8u: goto label_400ff8;
        case 0x400ffcu: goto label_400ffc;
        case 0x401000u: goto label_401000;
        case 0x401004u: goto label_401004;
        case 0x401008u: goto label_401008;
        case 0x40100cu: goto label_40100c;
        case 0x401010u: goto label_401010;
        case 0x401014u: goto label_401014;
        case 0x401018u: goto label_401018;
        case 0x40101cu: goto label_40101c;
        case 0x401020u: goto label_401020;
        case 0x401024u: goto label_401024;
        case 0x401028u: goto label_401028;
        case 0x40102cu: goto label_40102c;
        case 0x401030u: goto label_401030;
        case 0x401034u: goto label_401034;
        case 0x401038u: goto label_401038;
        case 0x40103cu: goto label_40103c;
        case 0x401040u: goto label_401040;
        case 0x401044u: goto label_401044;
        case 0x401048u: goto label_401048;
        case 0x40104cu: goto label_40104c;
        case 0x401050u: goto label_401050;
        case 0x401054u: goto label_401054;
        case 0x401058u: goto label_401058;
        case 0x40105cu: goto label_40105c;
        case 0x401060u: goto label_401060;
        case 0x401064u: goto label_401064;
        case 0x401068u: goto label_401068;
        case 0x40106cu: goto label_40106c;
        case 0x401070u: goto label_401070;
        case 0x401074u: goto label_401074;
        case 0x401078u: goto label_401078;
        case 0x40107cu: goto label_40107c;
        case 0x401080u: goto label_401080;
        case 0x401084u: goto label_401084;
        case 0x401088u: goto label_401088;
        case 0x40108cu: goto label_40108c;
        case 0x401090u: goto label_401090;
        case 0x401094u: goto label_401094;
        case 0x401098u: goto label_401098;
        case 0x40109cu: goto label_40109c;
        case 0x4010a0u: goto label_4010a0;
        case 0x4010a4u: goto label_4010a4;
        case 0x4010a8u: goto label_4010a8;
        case 0x4010acu: goto label_4010ac;
        case 0x4010b0u: goto label_4010b0;
        case 0x4010b4u: goto label_4010b4;
        case 0x4010b8u: goto label_4010b8;
        case 0x4010bcu: goto label_4010bc;
        case 0x4010c0u: goto label_4010c0;
        case 0x4010c4u: goto label_4010c4;
        case 0x4010c8u: goto label_4010c8;
        case 0x4010ccu: goto label_4010cc;
        case 0x4010d0u: goto label_4010d0;
        case 0x4010d4u: goto label_4010d4;
        case 0x4010d8u: goto label_4010d8;
        case 0x4010dcu: goto label_4010dc;
        case 0x4010e0u: goto label_4010e0;
        case 0x4010e4u: goto label_4010e4;
        case 0x4010e8u: goto label_4010e8;
        case 0x4010ecu: goto label_4010ec;
        case 0x4010f0u: goto label_4010f0;
        case 0x4010f4u: goto label_4010f4;
        case 0x4010f8u: goto label_4010f8;
        case 0x4010fcu: goto label_4010fc;
        case 0x401100u: goto label_401100;
        case 0x401104u: goto label_401104;
        case 0x401108u: goto label_401108;
        case 0x40110cu: goto label_40110c;
        case 0x401110u: goto label_401110;
        case 0x401114u: goto label_401114;
        case 0x401118u: goto label_401118;
        case 0x40111cu: goto label_40111c;
        case 0x401120u: goto label_401120;
        case 0x401124u: goto label_401124;
        case 0x401128u: goto label_401128;
        case 0x40112cu: goto label_40112c;
        case 0x401130u: goto label_401130;
        case 0x401134u: goto label_401134;
        case 0x401138u: goto label_401138;
        case 0x40113cu: goto label_40113c;
        case 0x401140u: goto label_401140;
        case 0x401144u: goto label_401144;
        case 0x401148u: goto label_401148;
        case 0x40114cu: goto label_40114c;
        case 0x401150u: goto label_401150;
        case 0x401154u: goto label_401154;
        case 0x401158u: goto label_401158;
        case 0x40115cu: goto label_40115c;
        case 0x401160u: goto label_401160;
        case 0x401164u: goto label_401164;
        case 0x401168u: goto label_401168;
        case 0x40116cu: goto label_40116c;
        case 0x401170u: goto label_401170;
        case 0x401174u: goto label_401174;
        case 0x401178u: goto label_401178;
        case 0x40117cu: goto label_40117c;
        case 0x401180u: goto label_401180;
        case 0x401184u: goto label_401184;
        case 0x401188u: goto label_401188;
        case 0x40118cu: goto label_40118c;
        case 0x401190u: goto label_401190;
        case 0x401194u: goto label_401194;
        case 0x401198u: goto label_401198;
        case 0x40119cu: goto label_40119c;
        case 0x4011a0u: goto label_4011a0;
        case 0x4011a4u: goto label_4011a4;
        case 0x4011a8u: goto label_4011a8;
        case 0x4011acu: goto label_4011ac;
        case 0x4011b0u: goto label_4011b0;
        case 0x4011b4u: goto label_4011b4;
        case 0x4011b8u: goto label_4011b8;
        case 0x4011bcu: goto label_4011bc;
        case 0x4011c0u: goto label_4011c0;
        case 0x4011c4u: goto label_4011c4;
        case 0x4011c8u: goto label_4011c8;
        case 0x4011ccu: goto label_4011cc;
        case 0x4011d0u: goto label_4011d0;
        case 0x4011d4u: goto label_4011d4;
        case 0x4011d8u: goto label_4011d8;
        case 0x4011dcu: goto label_4011dc;
        case 0x4011e0u: goto label_4011e0;
        case 0x4011e4u: goto label_4011e4;
        case 0x4011e8u: goto label_4011e8;
        case 0x4011ecu: goto label_4011ec;
        case 0x4011f0u: goto label_4011f0;
        case 0x4011f4u: goto label_4011f4;
        case 0x4011f8u: goto label_4011f8;
        case 0x4011fcu: goto label_4011fc;
        case 0x401200u: goto label_401200;
        case 0x401204u: goto label_401204;
        case 0x401208u: goto label_401208;
        case 0x40120cu: goto label_40120c;
        case 0x401210u: goto label_401210;
        case 0x401214u: goto label_401214;
        case 0x401218u: goto label_401218;
        case 0x40121cu: goto label_40121c;
        case 0x401220u: goto label_401220;
        case 0x401224u: goto label_401224;
        case 0x401228u: goto label_401228;
        case 0x40122cu: goto label_40122c;
        case 0x401230u: goto label_401230;
        case 0x401234u: goto label_401234;
        case 0x401238u: goto label_401238;
        case 0x40123cu: goto label_40123c;
        case 0x401240u: goto label_401240;
        case 0x401244u: goto label_401244;
        case 0x401248u: goto label_401248;
        case 0x40124cu: goto label_40124c;
        case 0x401250u: goto label_401250;
        case 0x401254u: goto label_401254;
        case 0x401258u: goto label_401258;
        case 0x40125cu: goto label_40125c;
        case 0x401260u: goto label_401260;
        case 0x401264u: goto label_401264;
        case 0x401268u: goto label_401268;
        case 0x40126cu: goto label_40126c;
        case 0x401270u: goto label_401270;
        case 0x401274u: goto label_401274;
        case 0x401278u: goto label_401278;
        case 0x40127cu: goto label_40127c;
        case 0x401280u: goto label_401280;
        case 0x401284u: goto label_401284;
        case 0x401288u: goto label_401288;
        case 0x40128cu: goto label_40128c;
        case 0x401290u: goto label_401290;
        case 0x401294u: goto label_401294;
        case 0x401298u: goto label_401298;
        case 0x40129cu: goto label_40129c;
        case 0x4012a0u: goto label_4012a0;
        case 0x4012a4u: goto label_4012a4;
        case 0x4012a8u: goto label_4012a8;
        case 0x4012acu: goto label_4012ac;
        case 0x4012b0u: goto label_4012b0;
        case 0x4012b4u: goto label_4012b4;
        case 0x4012b8u: goto label_4012b8;
        case 0x4012bcu: goto label_4012bc;
        case 0x4012c0u: goto label_4012c0;
        case 0x4012c4u: goto label_4012c4;
        case 0x4012c8u: goto label_4012c8;
        case 0x4012ccu: goto label_4012cc;
        case 0x4012d0u: goto label_4012d0;
        case 0x4012d4u: goto label_4012d4;
        case 0x4012d8u: goto label_4012d8;
        case 0x4012dcu: goto label_4012dc;
        case 0x4012e0u: goto label_4012e0;
        case 0x4012e4u: goto label_4012e4;
        case 0x4012e8u: goto label_4012e8;
        case 0x4012ecu: goto label_4012ec;
        case 0x4012f0u: goto label_4012f0;
        case 0x4012f4u: goto label_4012f4;
        case 0x4012f8u: goto label_4012f8;
        case 0x4012fcu: goto label_4012fc;
        case 0x401300u: goto label_401300;
        case 0x401304u: goto label_401304;
        case 0x401308u: goto label_401308;
        case 0x40130cu: goto label_40130c;
        case 0x401310u: goto label_401310;
        case 0x401314u: goto label_401314;
        case 0x401318u: goto label_401318;
        case 0x40131cu: goto label_40131c;
        case 0x401320u: goto label_401320;
        case 0x401324u: goto label_401324;
        case 0x401328u: goto label_401328;
        case 0x40132cu: goto label_40132c;
        case 0x401330u: goto label_401330;
        case 0x401334u: goto label_401334;
        case 0x401338u: goto label_401338;
        case 0x40133cu: goto label_40133c;
        case 0x401340u: goto label_401340;
        case 0x401344u: goto label_401344;
        case 0x401348u: goto label_401348;
        case 0x40134cu: goto label_40134c;
        case 0x401350u: goto label_401350;
        case 0x401354u: goto label_401354;
        case 0x401358u: goto label_401358;
        case 0x40135cu: goto label_40135c;
        case 0x401360u: goto label_401360;
        case 0x401364u: goto label_401364;
        case 0x401368u: goto label_401368;
        case 0x40136cu: goto label_40136c;
        case 0x401370u: goto label_401370;
        case 0x401374u: goto label_401374;
        case 0x401378u: goto label_401378;
        case 0x40137cu: goto label_40137c;
        case 0x401380u: goto label_401380;
        case 0x401384u: goto label_401384;
        case 0x401388u: goto label_401388;
        case 0x40138cu: goto label_40138c;
        case 0x401390u: goto label_401390;
        case 0x401394u: goto label_401394;
        case 0x401398u: goto label_401398;
        case 0x40139cu: goto label_40139c;
        case 0x4013a0u: goto label_4013a0;
        case 0x4013a4u: goto label_4013a4;
        case 0x4013a8u: goto label_4013a8;
        case 0x4013acu: goto label_4013ac;
        case 0x4013b0u: goto label_4013b0;
        case 0x4013b4u: goto label_4013b4;
        case 0x4013b8u: goto label_4013b8;
        case 0x4013bcu: goto label_4013bc;
        case 0x4013c0u: goto label_4013c0;
        case 0x4013c4u: goto label_4013c4;
        case 0x4013c8u: goto label_4013c8;
        case 0x4013ccu: goto label_4013cc;
        case 0x4013d0u: goto label_4013d0;
        case 0x4013d4u: goto label_4013d4;
        case 0x4013d8u: goto label_4013d8;
        case 0x4013dcu: goto label_4013dc;
        case 0x4013e0u: goto label_4013e0;
        case 0x4013e4u: goto label_4013e4;
        case 0x4013e8u: goto label_4013e8;
        case 0x4013ecu: goto label_4013ec;
        case 0x4013f0u: goto label_4013f0;
        case 0x4013f4u: goto label_4013f4;
        case 0x4013f8u: goto label_4013f8;
        case 0x4013fcu: goto label_4013fc;
        case 0x401400u: goto label_401400;
        case 0x401404u: goto label_401404;
        case 0x401408u: goto label_401408;
        case 0x40140cu: goto label_40140c;
        case 0x401410u: goto label_401410;
        case 0x401414u: goto label_401414;
        case 0x401418u: goto label_401418;
        case 0x40141cu: goto label_40141c;
        case 0x401420u: goto label_401420;
        case 0x401424u: goto label_401424;
        case 0x401428u: goto label_401428;
        case 0x40142cu: goto label_40142c;
        case 0x401430u: goto label_401430;
        case 0x401434u: goto label_401434;
        case 0x401438u: goto label_401438;
        case 0x40143cu: goto label_40143c;
        case 0x401440u: goto label_401440;
        case 0x401444u: goto label_401444;
        case 0x401448u: goto label_401448;
        case 0x40144cu: goto label_40144c;
        case 0x401450u: goto label_401450;
        case 0x401454u: goto label_401454;
        case 0x401458u: goto label_401458;
        case 0x40145cu: goto label_40145c;
        case 0x401460u: goto label_401460;
        case 0x401464u: goto label_401464;
        case 0x401468u: goto label_401468;
        case 0x40146cu: goto label_40146c;
        case 0x401470u: goto label_401470;
        case 0x401474u: goto label_401474;
        case 0x401478u: goto label_401478;
        case 0x40147cu: goto label_40147c;
        case 0x401480u: goto label_401480;
        case 0x401484u: goto label_401484;
        case 0x401488u: goto label_401488;
        case 0x40148cu: goto label_40148c;
        case 0x401490u: goto label_401490;
        case 0x401494u: goto label_401494;
        case 0x401498u: goto label_401498;
        case 0x40149cu: goto label_40149c;
        case 0x4014a0u: goto label_4014a0;
        case 0x4014a4u: goto label_4014a4;
        case 0x4014a8u: goto label_4014a8;
        case 0x4014acu: goto label_4014ac;
        case 0x4014b0u: goto label_4014b0;
        case 0x4014b4u: goto label_4014b4;
        case 0x4014b8u: goto label_4014b8;
        case 0x4014bcu: goto label_4014bc;
        case 0x4014c0u: goto label_4014c0;
        case 0x4014c4u: goto label_4014c4;
        case 0x4014c8u: goto label_4014c8;
        case 0x4014ccu: goto label_4014cc;
        case 0x4014d0u: goto label_4014d0;
        case 0x4014d4u: goto label_4014d4;
        case 0x4014d8u: goto label_4014d8;
        case 0x4014dcu: goto label_4014dc;
        case 0x4014e0u: goto label_4014e0;
        case 0x4014e4u: goto label_4014e4;
        case 0x4014e8u: goto label_4014e8;
        case 0x4014ecu: goto label_4014ec;
        case 0x4014f0u: goto label_4014f0;
        case 0x4014f4u: goto label_4014f4;
        case 0x4014f8u: goto label_4014f8;
        case 0x4014fcu: goto label_4014fc;
        case 0x401500u: goto label_401500;
        case 0x401504u: goto label_401504;
        case 0x401508u: goto label_401508;
        case 0x40150cu: goto label_40150c;
        case 0x401510u: goto label_401510;
        case 0x401514u: goto label_401514;
        case 0x401518u: goto label_401518;
        case 0x40151cu: goto label_40151c;
        case 0x401520u: goto label_401520;
        case 0x401524u: goto label_401524;
        case 0x401528u: goto label_401528;
        case 0x40152cu: goto label_40152c;
        case 0x401530u: goto label_401530;
        case 0x401534u: goto label_401534;
        case 0x401538u: goto label_401538;
        case 0x40153cu: goto label_40153c;
        case 0x401540u: goto label_401540;
        case 0x401544u: goto label_401544;
        case 0x401548u: goto label_401548;
        case 0x40154cu: goto label_40154c;
        case 0x401550u: goto label_401550;
        case 0x401554u: goto label_401554;
        case 0x401558u: goto label_401558;
        case 0x40155cu: goto label_40155c;
        case 0x401560u: goto label_401560;
        case 0x401564u: goto label_401564;
        case 0x401568u: goto label_401568;
        case 0x40156cu: goto label_40156c;
        case 0x401570u: goto label_401570;
        case 0x401574u: goto label_401574;
        case 0x401578u: goto label_401578;
        case 0x40157cu: goto label_40157c;
        case 0x401580u: goto label_401580;
        case 0x401584u: goto label_401584;
        case 0x401588u: goto label_401588;
        case 0x40158cu: goto label_40158c;
        case 0x401590u: goto label_401590;
        case 0x401594u: goto label_401594;
        case 0x401598u: goto label_401598;
        case 0x40159cu: goto label_40159c;
        case 0x4015a0u: goto label_4015a0;
        case 0x4015a4u: goto label_4015a4;
        case 0x4015a8u: goto label_4015a8;
        case 0x4015acu: goto label_4015ac;
        case 0x4015b0u: goto label_4015b0;
        case 0x4015b4u: goto label_4015b4;
        case 0x4015b8u: goto label_4015b8;
        case 0x4015bcu: goto label_4015bc;
        case 0x4015c0u: goto label_4015c0;
        case 0x4015c4u: goto label_4015c4;
        case 0x4015c8u: goto label_4015c8;
        case 0x4015ccu: goto label_4015cc;
        case 0x4015d0u: goto label_4015d0;
        case 0x4015d4u: goto label_4015d4;
        case 0x4015d8u: goto label_4015d8;
        case 0x4015dcu: goto label_4015dc;
        case 0x4015e0u: goto label_4015e0;
        case 0x4015e4u: goto label_4015e4;
        case 0x4015e8u: goto label_4015e8;
        case 0x4015ecu: goto label_4015ec;
        case 0x4015f0u: goto label_4015f0;
        case 0x4015f4u: goto label_4015f4;
        case 0x4015f8u: goto label_4015f8;
        case 0x4015fcu: goto label_4015fc;
        case 0x401600u: goto label_401600;
        case 0x401604u: goto label_401604;
        case 0x401608u: goto label_401608;
        case 0x40160cu: goto label_40160c;
        case 0x401610u: goto label_401610;
        case 0x401614u: goto label_401614;
        case 0x401618u: goto label_401618;
        case 0x40161cu: goto label_40161c;
        case 0x401620u: goto label_401620;
        case 0x401624u: goto label_401624;
        case 0x401628u: goto label_401628;
        case 0x40162cu: goto label_40162c;
        case 0x401630u: goto label_401630;
        case 0x401634u: goto label_401634;
        case 0x401638u: goto label_401638;
        case 0x40163cu: goto label_40163c;
        case 0x401640u: goto label_401640;
        case 0x401644u: goto label_401644;
        case 0x401648u: goto label_401648;
        case 0x40164cu: goto label_40164c;
        case 0x401650u: goto label_401650;
        case 0x401654u: goto label_401654;
        case 0x401658u: goto label_401658;
        case 0x40165cu: goto label_40165c;
        case 0x401660u: goto label_401660;
        case 0x401664u: goto label_401664;
        case 0x401668u: goto label_401668;
        case 0x40166cu: goto label_40166c;
        case 0x401670u: goto label_401670;
        case 0x401674u: goto label_401674;
        case 0x401678u: goto label_401678;
        case 0x40167cu: goto label_40167c;
        case 0x401680u: goto label_401680;
        case 0x401684u: goto label_401684;
        case 0x401688u: goto label_401688;
        case 0x40168cu: goto label_40168c;
        case 0x401690u: goto label_401690;
        case 0x401694u: goto label_401694;
        case 0x401698u: goto label_401698;
        case 0x40169cu: goto label_40169c;
        case 0x4016a0u: goto label_4016a0;
        case 0x4016a4u: goto label_4016a4;
        case 0x4016a8u: goto label_4016a8;
        case 0x4016acu: goto label_4016ac;
        case 0x4016b0u: goto label_4016b0;
        case 0x4016b4u: goto label_4016b4;
        case 0x4016b8u: goto label_4016b8;
        case 0x4016bcu: goto label_4016bc;
        case 0x4016c0u: goto label_4016c0;
        case 0x4016c4u: goto label_4016c4;
        case 0x4016c8u: goto label_4016c8;
        case 0x4016ccu: goto label_4016cc;
        case 0x4016d0u: goto label_4016d0;
        case 0x4016d4u: goto label_4016d4;
        case 0x4016d8u: goto label_4016d8;
        case 0x4016dcu: goto label_4016dc;
        case 0x4016e0u: goto label_4016e0;
        case 0x4016e4u: goto label_4016e4;
        case 0x4016e8u: goto label_4016e8;
        case 0x4016ecu: goto label_4016ec;
        case 0x4016f0u: goto label_4016f0;
        case 0x4016f4u: goto label_4016f4;
        case 0x4016f8u: goto label_4016f8;
        case 0x4016fcu: goto label_4016fc;
        case 0x401700u: goto label_401700;
        case 0x401704u: goto label_401704;
        case 0x401708u: goto label_401708;
        case 0x40170cu: goto label_40170c;
        case 0x401710u: goto label_401710;
        case 0x401714u: goto label_401714;
        case 0x401718u: goto label_401718;
        case 0x40171cu: goto label_40171c;
        case 0x401720u: goto label_401720;
        case 0x401724u: goto label_401724;
        case 0x401728u: goto label_401728;
        case 0x40172cu: goto label_40172c;
        case 0x401730u: goto label_401730;
        case 0x401734u: goto label_401734;
        case 0x401738u: goto label_401738;
        case 0x40173cu: goto label_40173c;
        case 0x401740u: goto label_401740;
        case 0x401744u: goto label_401744;
        case 0x401748u: goto label_401748;
        case 0x40174cu: goto label_40174c;
        case 0x401750u: goto label_401750;
        case 0x401754u: goto label_401754;
        case 0x401758u: goto label_401758;
        case 0x40175cu: goto label_40175c;
        case 0x401760u: goto label_401760;
        case 0x401764u: goto label_401764;
        case 0x401768u: goto label_401768;
        case 0x40176cu: goto label_40176c;
        case 0x401770u: goto label_401770;
        case 0x401774u: goto label_401774;
        case 0x401778u: goto label_401778;
        case 0x40177cu: goto label_40177c;
        case 0x401780u: goto label_401780;
        case 0x401784u: goto label_401784;
        case 0x401788u: goto label_401788;
        case 0x40178cu: goto label_40178c;
        case 0x401790u: goto label_401790;
        case 0x401794u: goto label_401794;
        case 0x401798u: goto label_401798;
        case 0x40179cu: goto label_40179c;
        case 0x4017a0u: goto label_4017a0;
        case 0x4017a4u: goto label_4017a4;
        case 0x4017a8u: goto label_4017a8;
        case 0x4017acu: goto label_4017ac;
        case 0x4017b0u: goto label_4017b0;
        case 0x4017b4u: goto label_4017b4;
        case 0x4017b8u: goto label_4017b8;
        case 0x4017bcu: goto label_4017bc;
        case 0x4017c0u: goto label_4017c0;
        case 0x4017c4u: goto label_4017c4;
        case 0x4017c8u: goto label_4017c8;
        case 0x4017ccu: goto label_4017cc;
        case 0x4017d0u: goto label_4017d0;
        case 0x4017d4u: goto label_4017d4;
        case 0x4017d8u: goto label_4017d8;
        case 0x4017dcu: goto label_4017dc;
        case 0x4017e0u: goto label_4017e0;
        case 0x4017e4u: goto label_4017e4;
        case 0x4017e8u: goto label_4017e8;
        case 0x4017ecu: goto label_4017ec;
        case 0x4017f0u: goto label_4017f0;
        case 0x4017f4u: goto label_4017f4;
        case 0x4017f8u: goto label_4017f8;
        case 0x4017fcu: goto label_4017fc;
        case 0x401800u: goto label_401800;
        case 0x401804u: goto label_401804;
        case 0x401808u: goto label_401808;
        case 0x40180cu: goto label_40180c;
        case 0x401810u: goto label_401810;
        case 0x401814u: goto label_401814;
        case 0x401818u: goto label_401818;
        case 0x40181cu: goto label_40181c;
        case 0x401820u: goto label_401820;
        case 0x401824u: goto label_401824;
        case 0x401828u: goto label_401828;
        case 0x40182cu: goto label_40182c;
        case 0x401830u: goto label_401830;
        case 0x401834u: goto label_401834;
        case 0x401838u: goto label_401838;
        case 0x40183cu: goto label_40183c;
        case 0x401840u: goto label_401840;
        case 0x401844u: goto label_401844;
        case 0x401848u: goto label_401848;
        case 0x40184cu: goto label_40184c;
        case 0x401850u: goto label_401850;
        case 0x401854u: goto label_401854;
        case 0x401858u: goto label_401858;
        case 0x40185cu: goto label_40185c;
        case 0x401860u: goto label_401860;
        case 0x401864u: goto label_401864;
        case 0x401868u: goto label_401868;
        case 0x40186cu: goto label_40186c;
        case 0x401870u: goto label_401870;
        case 0x401874u: goto label_401874;
        case 0x401878u: goto label_401878;
        case 0x40187cu: goto label_40187c;
        case 0x401880u: goto label_401880;
        case 0x401884u: goto label_401884;
        case 0x401888u: goto label_401888;
        case 0x40188cu: goto label_40188c;
        case 0x401890u: goto label_401890;
        case 0x401894u: goto label_401894;
        case 0x401898u: goto label_401898;
        case 0x40189cu: goto label_40189c;
        case 0x4018a0u: goto label_4018a0;
        case 0x4018a4u: goto label_4018a4;
        case 0x4018a8u: goto label_4018a8;
        case 0x4018acu: goto label_4018ac;
        case 0x4018b0u: goto label_4018b0;
        case 0x4018b4u: goto label_4018b4;
        case 0x4018b8u: goto label_4018b8;
        case 0x4018bcu: goto label_4018bc;
        case 0x4018c0u: goto label_4018c0;
        case 0x4018c4u: goto label_4018c4;
        case 0x4018c8u: goto label_4018c8;
        case 0x4018ccu: goto label_4018cc;
        case 0x4018d0u: goto label_4018d0;
        case 0x4018d4u: goto label_4018d4;
        case 0x4018d8u: goto label_4018d8;
        case 0x4018dcu: goto label_4018dc;
        case 0x4018e0u: goto label_4018e0;
        case 0x4018e4u: goto label_4018e4;
        case 0x4018e8u: goto label_4018e8;
        case 0x4018ecu: goto label_4018ec;
        case 0x4018f0u: goto label_4018f0;
        case 0x4018f4u: goto label_4018f4;
        case 0x4018f8u: goto label_4018f8;
        case 0x4018fcu: goto label_4018fc;
        case 0x401900u: goto label_401900;
        case 0x401904u: goto label_401904;
        case 0x401908u: goto label_401908;
        case 0x40190cu: goto label_40190c;
        case 0x401910u: goto label_401910;
        case 0x401914u: goto label_401914;
        case 0x401918u: goto label_401918;
        case 0x40191cu: goto label_40191c;
        case 0x401920u: goto label_401920;
        case 0x401924u: goto label_401924;
        case 0x401928u: goto label_401928;
        case 0x40192cu: goto label_40192c;
        case 0x401930u: goto label_401930;
        case 0x401934u: goto label_401934;
        case 0x401938u: goto label_401938;
        case 0x40193cu: goto label_40193c;
        case 0x401940u: goto label_401940;
        case 0x401944u: goto label_401944;
        case 0x401948u: goto label_401948;
        case 0x40194cu: goto label_40194c;
        case 0x401950u: goto label_401950;
        case 0x401954u: goto label_401954;
        case 0x401958u: goto label_401958;
        case 0x40195cu: goto label_40195c;
        case 0x401960u: goto label_401960;
        case 0x401964u: goto label_401964;
        case 0x401968u: goto label_401968;
        case 0x40196cu: goto label_40196c;
        case 0x401970u: goto label_401970;
        case 0x401974u: goto label_401974;
        case 0x401978u: goto label_401978;
        case 0x40197cu: goto label_40197c;
        case 0x401980u: goto label_401980;
        case 0x401984u: goto label_401984;
        case 0x401988u: goto label_401988;
        case 0x40198cu: goto label_40198c;
        case 0x401990u: goto label_401990;
        case 0x401994u: goto label_401994;
        case 0x401998u: goto label_401998;
        case 0x40199cu: goto label_40199c;
        case 0x4019a0u: goto label_4019a0;
        case 0x4019a4u: goto label_4019a4;
        case 0x4019a8u: goto label_4019a8;
        case 0x4019acu: goto label_4019ac;
        case 0x4019b0u: goto label_4019b0;
        case 0x4019b4u: goto label_4019b4;
        case 0x4019b8u: goto label_4019b8;
        case 0x4019bcu: goto label_4019bc;
        case 0x4019c0u: goto label_4019c0;
        case 0x4019c4u: goto label_4019c4;
        case 0x4019c8u: goto label_4019c8;
        case 0x4019ccu: goto label_4019cc;
        case 0x4019d0u: goto label_4019d0;
        case 0x4019d4u: goto label_4019d4;
        case 0x4019d8u: goto label_4019d8;
        case 0x4019dcu: goto label_4019dc;
        case 0x4019e0u: goto label_4019e0;
        case 0x4019e4u: goto label_4019e4;
        case 0x4019e8u: goto label_4019e8;
        case 0x4019ecu: goto label_4019ec;
        case 0x4019f0u: goto label_4019f0;
        case 0x4019f4u: goto label_4019f4;
        case 0x4019f8u: goto label_4019f8;
        case 0x4019fcu: goto label_4019fc;
        case 0x401a00u: goto label_401a00;
        case 0x401a04u: goto label_401a04;
        case 0x401a08u: goto label_401a08;
        case 0x401a0cu: goto label_401a0c;
        case 0x401a10u: goto label_401a10;
        case 0x401a14u: goto label_401a14;
        case 0x401a18u: goto label_401a18;
        case 0x401a1cu: goto label_401a1c;
        case 0x401a20u: goto label_401a20;
        case 0x401a24u: goto label_401a24;
        case 0x401a28u: goto label_401a28;
        case 0x401a2cu: goto label_401a2c;
        case 0x401a30u: goto label_401a30;
        case 0x401a34u: goto label_401a34;
        case 0x401a38u: goto label_401a38;
        case 0x401a3cu: goto label_401a3c;
        case 0x401a40u: goto label_401a40;
        case 0x401a44u: goto label_401a44;
        case 0x401a48u: goto label_401a48;
        case 0x401a4cu: goto label_401a4c;
        case 0x401a50u: goto label_401a50;
        case 0x401a54u: goto label_401a54;
        case 0x401a58u: goto label_401a58;
        case 0x401a5cu: goto label_401a5c;
        case 0x401a60u: goto label_401a60;
        case 0x401a64u: goto label_401a64;
        case 0x401a68u: goto label_401a68;
        case 0x401a6cu: goto label_401a6c;
        case 0x401a70u: goto label_401a70;
        case 0x401a74u: goto label_401a74;
        case 0x401a78u: goto label_401a78;
        case 0x401a7cu: goto label_401a7c;
        case 0x401a80u: goto label_401a80;
        case 0x401a84u: goto label_401a84;
        case 0x401a88u: goto label_401a88;
        case 0x401a8cu: goto label_401a8c;
        case 0x401a90u: goto label_401a90;
        case 0x401a94u: goto label_401a94;
        case 0x401a98u: goto label_401a98;
        case 0x401a9cu: goto label_401a9c;
        case 0x401aa0u: goto label_401aa0;
        case 0x401aa4u: goto label_401aa4;
        case 0x401aa8u: goto label_401aa8;
        case 0x401aacu: goto label_401aac;
        case 0x401ab0u: goto label_401ab0;
        case 0x401ab4u: goto label_401ab4;
        case 0x401ab8u: goto label_401ab8;
        case 0x401abcu: goto label_401abc;
        case 0x401ac0u: goto label_401ac0;
        case 0x401ac4u: goto label_401ac4;
        case 0x401ac8u: goto label_401ac8;
        case 0x401accu: goto label_401acc;
        case 0x401ad0u: goto label_401ad0;
        case 0x401ad4u: goto label_401ad4;
        case 0x401ad8u: goto label_401ad8;
        case 0x401adcu: goto label_401adc;
        case 0x401ae0u: goto label_401ae0;
        case 0x401ae4u: goto label_401ae4;
        case 0x401ae8u: goto label_401ae8;
        case 0x401aecu: goto label_401aec;
        case 0x401af0u: goto label_401af0;
        case 0x401af4u: goto label_401af4;
        case 0x401af8u: goto label_401af8;
        case 0x401afcu: goto label_401afc;
        case 0x401b00u: goto label_401b00;
        case 0x401b04u: goto label_401b04;
        case 0x401b08u: goto label_401b08;
        case 0x401b0cu: goto label_401b0c;
        case 0x401b10u: goto label_401b10;
        case 0x401b14u: goto label_401b14;
        case 0x401b18u: goto label_401b18;
        case 0x401b1cu: goto label_401b1c;
        case 0x401b20u: goto label_401b20;
        case 0x401b24u: goto label_401b24;
        case 0x401b28u: goto label_401b28;
        case 0x401b2cu: goto label_401b2c;
        case 0x401b30u: goto label_401b30;
        case 0x401b34u: goto label_401b34;
        case 0x401b38u: goto label_401b38;
        case 0x401b3cu: goto label_401b3c;
        case 0x401b40u: goto label_401b40;
        case 0x401b44u: goto label_401b44;
        case 0x401b48u: goto label_401b48;
        case 0x401b4cu: goto label_401b4c;
        case 0x401b50u: goto label_401b50;
        case 0x401b54u: goto label_401b54;
        case 0x401b58u: goto label_401b58;
        case 0x401b5cu: goto label_401b5c;
        case 0x401b60u: goto label_401b60;
        case 0x401b64u: goto label_401b64;
        case 0x401b68u: goto label_401b68;
        case 0x401b6cu: goto label_401b6c;
        case 0x401b70u: goto label_401b70;
        case 0x401b74u: goto label_401b74;
        case 0x401b78u: goto label_401b78;
        case 0x401b7cu: goto label_401b7c;
        case 0x401b80u: goto label_401b80;
        case 0x401b84u: goto label_401b84;
        case 0x401b88u: goto label_401b88;
        case 0x401b8cu: goto label_401b8c;
        case 0x401b90u: goto label_401b90;
        case 0x401b94u: goto label_401b94;
        case 0x401b98u: goto label_401b98;
        case 0x401b9cu: goto label_401b9c;
        case 0x401ba0u: goto label_401ba0;
        case 0x401ba4u: goto label_401ba4;
        case 0x401ba8u: goto label_401ba8;
        case 0x401bacu: goto label_401bac;
        case 0x401bb0u: goto label_401bb0;
        case 0x401bb4u: goto label_401bb4;
        case 0x401bb8u: goto label_401bb8;
        case 0x401bbcu: goto label_401bbc;
        case 0x401bc0u: goto label_401bc0;
        case 0x401bc4u: goto label_401bc4;
        case 0x401bc8u: goto label_401bc8;
        case 0x401bccu: goto label_401bcc;
        case 0x401bd0u: goto label_401bd0;
        case 0x401bd4u: goto label_401bd4;
        case 0x401bd8u: goto label_401bd8;
        case 0x401bdcu: goto label_401bdc;
        case 0x401be0u: goto label_401be0;
        case 0x401be4u: goto label_401be4;
        case 0x401be8u: goto label_401be8;
        case 0x401becu: goto label_401bec;
        case 0x401bf0u: goto label_401bf0;
        case 0x401bf4u: goto label_401bf4;
        case 0x401bf8u: goto label_401bf8;
        case 0x401bfcu: goto label_401bfc;
        case 0x401c00u: goto label_401c00;
        case 0x401c04u: goto label_401c04;
        case 0x401c08u: goto label_401c08;
        case 0x401c0cu: goto label_401c0c;
        case 0x401c10u: goto label_401c10;
        case 0x401c14u: goto label_401c14;
        case 0x401c18u: goto label_401c18;
        case 0x401c1cu: goto label_401c1c;
        case 0x401c20u: goto label_401c20;
        case 0x401c24u: goto label_401c24;
        case 0x401c28u: goto label_401c28;
        case 0x401c2cu: goto label_401c2c;
        case 0x401c30u: goto label_401c30;
        case 0x401c34u: goto label_401c34;
        case 0x401c38u: goto label_401c38;
        case 0x401c3cu: goto label_401c3c;
        case 0x401c40u: goto label_401c40;
        case 0x401c44u: goto label_401c44;
        case 0x401c48u: goto label_401c48;
        case 0x401c4cu: goto label_401c4c;
        case 0x401c50u: goto label_401c50;
        case 0x401c54u: goto label_401c54;
        case 0x401c58u: goto label_401c58;
        case 0x401c5cu: goto label_401c5c;
        case 0x401c60u: goto label_401c60;
        case 0x401c64u: goto label_401c64;
        case 0x401c68u: goto label_401c68;
        case 0x401c6cu: goto label_401c6c;
        case 0x401c70u: goto label_401c70;
        case 0x401c74u: goto label_401c74;
        case 0x401c78u: goto label_401c78;
        case 0x401c7cu: goto label_401c7c;
        case 0x401c80u: goto label_401c80;
        case 0x401c84u: goto label_401c84;
        case 0x401c88u: goto label_401c88;
        case 0x401c8cu: goto label_401c8c;
        case 0x401c90u: goto label_401c90;
        case 0x401c94u: goto label_401c94;
        case 0x401c98u: goto label_401c98;
        case 0x401c9cu: goto label_401c9c;
        case 0x401ca0u: goto label_401ca0;
        case 0x401ca4u: goto label_401ca4;
        case 0x401ca8u: goto label_401ca8;
        case 0x401cacu: goto label_401cac;
        case 0x401cb0u: goto label_401cb0;
        case 0x401cb4u: goto label_401cb4;
        case 0x401cb8u: goto label_401cb8;
        case 0x401cbcu: goto label_401cbc;
        case 0x401cc0u: goto label_401cc0;
        case 0x401cc4u: goto label_401cc4;
        case 0x401cc8u: goto label_401cc8;
        case 0x401cccu: goto label_401ccc;
        case 0x401cd0u: goto label_401cd0;
        case 0x401cd4u: goto label_401cd4;
        case 0x401cd8u: goto label_401cd8;
        case 0x401cdcu: goto label_401cdc;
        case 0x401ce0u: goto label_401ce0;
        case 0x401ce4u: goto label_401ce4;
        case 0x401ce8u: goto label_401ce8;
        case 0x401cecu: goto label_401cec;
        case 0x401cf0u: goto label_401cf0;
        case 0x401cf4u: goto label_401cf4;
        case 0x401cf8u: goto label_401cf8;
        case 0x401cfcu: goto label_401cfc;
        case 0x401d00u: goto label_401d00;
        case 0x401d04u: goto label_401d04;
        case 0x401d08u: goto label_401d08;
        case 0x401d0cu: goto label_401d0c;
        case 0x401d10u: goto label_401d10;
        case 0x401d14u: goto label_401d14;
        case 0x401d18u: goto label_401d18;
        case 0x401d1cu: goto label_401d1c;
        case 0x401d20u: goto label_401d20;
        case 0x401d24u: goto label_401d24;
        case 0x401d28u: goto label_401d28;
        case 0x401d2cu: goto label_401d2c;
        case 0x401d30u: goto label_401d30;
        case 0x401d34u: goto label_401d34;
        case 0x401d38u: goto label_401d38;
        case 0x401d3cu: goto label_401d3c;
        case 0x401d40u: goto label_401d40;
        case 0x401d44u: goto label_401d44;
        case 0x401d48u: goto label_401d48;
        case 0x401d4cu: goto label_401d4c;
        case 0x401d50u: goto label_401d50;
        case 0x401d54u: goto label_401d54;
        case 0x401d58u: goto label_401d58;
        case 0x401d5cu: goto label_401d5c;
        case 0x401d60u: goto label_401d60;
        case 0x401d64u: goto label_401d64;
        case 0x401d68u: goto label_401d68;
        case 0x401d6cu: goto label_401d6c;
        case 0x401d70u: goto label_401d70;
        case 0x401d74u: goto label_401d74;
        case 0x401d78u: goto label_401d78;
        case 0x401d7cu: goto label_401d7c;
        case 0x401d80u: goto label_401d80;
        case 0x401d84u: goto label_401d84;
        case 0x401d88u: goto label_401d88;
        case 0x401d8cu: goto label_401d8c;
        case 0x401d90u: goto label_401d90;
        case 0x401d94u: goto label_401d94;
        case 0x401d98u: goto label_401d98;
        case 0x401d9cu: goto label_401d9c;
        case 0x401da0u: goto label_401da0;
        case 0x401da4u: goto label_401da4;
        case 0x401da8u: goto label_401da8;
        case 0x401dacu: goto label_401dac;
        case 0x401db0u: goto label_401db0;
        case 0x401db4u: goto label_401db4;
        case 0x401db8u: goto label_401db8;
        case 0x401dbcu: goto label_401dbc;
        case 0x401dc0u: goto label_401dc0;
        case 0x401dc4u: goto label_401dc4;
        case 0x401dc8u: goto label_401dc8;
        case 0x401dccu: goto label_401dcc;
        case 0x401dd0u: goto label_401dd0;
        case 0x401dd4u: goto label_401dd4;
        case 0x401dd8u: goto label_401dd8;
        case 0x401ddcu: goto label_401ddc;
        case 0x401de0u: goto label_401de0;
        case 0x401de4u: goto label_401de4;
        case 0x401de8u: goto label_401de8;
        case 0x401decu: goto label_401dec;
        case 0x401df0u: goto label_401df0;
        case 0x401df4u: goto label_401df4;
        case 0x401df8u: goto label_401df8;
        case 0x401dfcu: goto label_401dfc;
        case 0x401e00u: goto label_401e00;
        case 0x401e04u: goto label_401e04;
        case 0x401e08u: goto label_401e08;
        case 0x401e0cu: goto label_401e0c;
        case 0x401e10u: goto label_401e10;
        case 0x401e14u: goto label_401e14;
        case 0x401e18u: goto label_401e18;
        case 0x401e1cu: goto label_401e1c;
        case 0x401e20u: goto label_401e20;
        case 0x401e24u: goto label_401e24;
        case 0x401e28u: goto label_401e28;
        case 0x401e2cu: goto label_401e2c;
        case 0x401e30u: goto label_401e30;
        case 0x401e34u: goto label_401e34;
        case 0x401e38u: goto label_401e38;
        case 0x401e3cu: goto label_401e3c;
        case 0x401e40u: goto label_401e40;
        case 0x401e44u: goto label_401e44;
        case 0x401e48u: goto label_401e48;
        case 0x401e4cu: goto label_401e4c;
        case 0x401e50u: goto label_401e50;
        case 0x401e54u: goto label_401e54;
        case 0x401e58u: goto label_401e58;
        case 0x401e5cu: goto label_401e5c;
        case 0x401e60u: goto label_401e60;
        case 0x401e64u: goto label_401e64;
        case 0x401e68u: goto label_401e68;
        case 0x401e6cu: goto label_401e6c;
        case 0x401e70u: goto label_401e70;
        case 0x401e74u: goto label_401e74;
        case 0x401e78u: goto label_401e78;
        case 0x401e7cu: goto label_401e7c;
        case 0x401e80u: goto label_401e80;
        case 0x401e84u: goto label_401e84;
        case 0x401e88u: goto label_401e88;
        case 0x401e8cu: goto label_401e8c;
        case 0x401e90u: goto label_401e90;
        case 0x401e94u: goto label_401e94;
        case 0x401e98u: goto label_401e98;
        case 0x401e9cu: goto label_401e9c;
        case 0x401ea0u: goto label_401ea0;
        case 0x401ea4u: goto label_401ea4;
        case 0x401ea8u: goto label_401ea8;
        case 0x401eacu: goto label_401eac;
        case 0x401eb0u: goto label_401eb0;
        case 0x401eb4u: goto label_401eb4;
        case 0x401eb8u: goto label_401eb8;
        case 0x401ebcu: goto label_401ebc;
        case 0x401ec0u: goto label_401ec0;
        case 0x401ec4u: goto label_401ec4;
        case 0x401ec8u: goto label_401ec8;
        case 0x401eccu: goto label_401ecc;
        case 0x401ed0u: goto label_401ed0;
        case 0x401ed4u: goto label_401ed4;
        case 0x401ed8u: goto label_401ed8;
        case 0x401edcu: goto label_401edc;
        case 0x401ee0u: goto label_401ee0;
        case 0x401ee4u: goto label_401ee4;
        case 0x401ee8u: goto label_401ee8;
        case 0x401eecu: goto label_401eec;
        case 0x401ef0u: goto label_401ef0;
        case 0x401ef4u: goto label_401ef4;
        case 0x401ef8u: goto label_401ef8;
        case 0x401efcu: goto label_401efc;
        case 0x401f00u: goto label_401f00;
        case 0x401f04u: goto label_401f04;
        case 0x401f08u: goto label_401f08;
        case 0x401f0cu: goto label_401f0c;
        case 0x401f10u: goto label_401f10;
        case 0x401f14u: goto label_401f14;
        case 0x401f18u: goto label_401f18;
        case 0x401f1cu: goto label_401f1c;
        case 0x401f20u: goto label_401f20;
        case 0x401f24u: goto label_401f24;
        case 0x401f28u: goto label_401f28;
        case 0x401f2cu: goto label_401f2c;
        case 0x401f30u: goto label_401f30;
        case 0x401f34u: goto label_401f34;
        case 0x401f38u: goto label_401f38;
        case 0x401f3cu: goto label_401f3c;
        case 0x401f40u: goto label_401f40;
        case 0x401f44u: goto label_401f44;
        case 0x401f48u: goto label_401f48;
        case 0x401f4cu: goto label_401f4c;
        case 0x401f50u: goto label_401f50;
        case 0x401f54u: goto label_401f54;
        case 0x401f58u: goto label_401f58;
        case 0x401f5cu: goto label_401f5c;
        case 0x401f60u: goto label_401f60;
        case 0x401f64u: goto label_401f64;
        case 0x401f68u: goto label_401f68;
        case 0x401f6cu: goto label_401f6c;
        case 0x401f70u: goto label_401f70;
        case 0x401f74u: goto label_401f74;
        case 0x401f78u: goto label_401f78;
        case 0x401f7cu: goto label_401f7c;
        case 0x401f80u: goto label_401f80;
        case 0x401f84u: goto label_401f84;
        case 0x401f88u: goto label_401f88;
        case 0x401f8cu: goto label_401f8c;
        case 0x401f90u: goto label_401f90;
        case 0x401f94u: goto label_401f94;
        case 0x401f98u: goto label_401f98;
        case 0x401f9cu: goto label_401f9c;
        case 0x401fa0u: goto label_401fa0;
        case 0x401fa4u: goto label_401fa4;
        case 0x401fa8u: goto label_401fa8;
        case 0x401facu: goto label_401fac;
        case 0x401fb0u: goto label_401fb0;
        case 0x401fb4u: goto label_401fb4;
        case 0x401fb8u: goto label_401fb8;
        case 0x401fbcu: goto label_401fbc;
        case 0x401fc0u: goto label_401fc0;
        case 0x401fc4u: goto label_401fc4;
        case 0x401fc8u: goto label_401fc8;
        case 0x401fccu: goto label_401fcc;
        case 0x401fd0u: goto label_401fd0;
        case 0x401fd4u: goto label_401fd4;
        case 0x401fd8u: goto label_401fd8;
        case 0x401fdcu: goto label_401fdc;
        case 0x401fe0u: goto label_401fe0;
        case 0x401fe4u: goto label_401fe4;
        case 0x401fe8u: goto label_401fe8;
        case 0x401fecu: goto label_401fec;
        case 0x401ff0u: goto label_401ff0;
        case 0x401ff4u: goto label_401ff4;
        case 0x401ff8u: goto label_401ff8;
        case 0x401ffcu: goto label_401ffc;
        default: break;
    }

    ctx->pc = 0x400800u;

label_400800:
    // 0x400800: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x400800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400804:
    // 0x400804: 0xc0e9978  jal         func_3A65E0
label_400808:
    if (ctx->pc == 0x400808u) {
        ctx->pc = 0x400808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400804u;
        // 0x400808: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40080Cu;
        goto label_40080c;
    }
    ctx->pc = 0x400804u;
    SET_GPR_U32(ctx, 31, 0x40080Cu);
    ctx->pc = 0x400808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400804u;
    // 0x400808: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x400804u, 0x40080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40080Cu;
label_40080c:
    // 0x40080c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x40080cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_400810:
    // 0x400810: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x400810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_400814:
    // 0x400814: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x400814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_400818:
    // 0x400818: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x400818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_40081c:
    // 0x40081c: 0x24847630  addiu       $a0, $a0, 0x7630
    ctx->pc = 0x40081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30256));
label_400820:
    // 0x400820: 0xc0e954c  jal         func_3A5530
label_400824:
    if (ctx->pc == 0x400824u) {
        ctx->pc = 0x400824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400820u;
        // 0x400824: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400828u;
        goto label_400828;
    }
    ctx->pc = 0x400820u;
    SET_GPR_U32(ctx, 31, 0x400828u);
    ctx->pc = 0x400824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400820u;
    // 0x400824: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x400820u, 0x400828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400828u;
label_400828:
    // 0x400828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x400828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40082c:
    // 0x40082c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_400830:
    if (ctx->pc == 0x400830u) {
        ctx->pc = 0x400830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40082Cu;
        // 0x400830: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400834u;
        goto label_400834;
    }
    ctx->pc = 0x40082Cu;
    {
        const bool branch_taken_0x40082c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x400830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40082Cu;
        // 0x400830: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40082c) {
            ctx->pc = 0x40084Cu;
            goto label_40084c;
        }
    }
    ctx->pc = 0x400834u;
label_400834:
    // 0x400834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x400834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_400838:
    // 0x400838: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x400838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_40083c:
    // 0x40083c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x40083cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_400840:
    // 0x400840: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x400840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_400844:
    // 0x400844: 0x60f809  jalr        $v1
label_400848:
    if (ctx->pc == 0x400848u) {
        ctx->pc = 0x400848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400844u;
        // 0x400848: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40084Cu;
        goto label_40084c;
    }
    ctx->pc = 0x400844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40084Cu);
        ctx->pc = 0x400848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400844u;
        // 0x400848: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x400844u, 0x40084Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40084Cu;
label_40084c:
    // 0x40084c: 0x3c029864  lui         $v0, 0x9864
    ctx->pc = 0x40084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39012 << 16));
label_400850:
    // 0x400850: 0x34421723  ori         $v0, $v0, 0x1723
    ctx->pc = 0x400850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5923);
label_400854:
    // 0x400854: 0x17c2001b  bne         $fp, $v0, . + 4 + (0x1B << 2)
label_400858:
    if (ctx->pc == 0x400858u) {
        ctx->pc = 0x400858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400854u;
        // 0x400858: 0x3c027c97  lui         $v0, 0x7C97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31895 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40085Cu;
        goto label_40085c;
    }
    ctx->pc = 0x400854u;
    {
        const bool branch_taken_0x400854 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400854u;
        // 0x400858: 0x3c027c97  lui         $v0, 0x7C97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31895 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400854) {
            ctx->pc = 0x4008C4u;
            goto label_4008c4;
        }
    }
    ctx->pc = 0x40085Cu;
label_40085c:
    // 0x40085c: 0x3c06dad3  lui         $a2, 0xDAD3
    ctx->pc = 0x40085cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56019 << 16));
label_400860:
    // 0x400860: 0x3c07bfbf  lui         $a3, 0xBFBF
    ctx->pc = 0x400860u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49087 << 16));
label_400864:
    // 0x400864: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x400864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400868:
    // 0x400868: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x400868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40086c:
    // 0x40086c: 0x34c6cf90  ori         $a2, $a2, 0xCF90
    ctx->pc = 0x40086cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53136);
label_400870:
    // 0x400870: 0x34e7b790  ori         $a3, $a3, 0xB790
    ctx->pc = 0x400870u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)46992);
label_400874:
    // 0x400874: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x400874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400878:
    // 0x400878: 0xc0e9978  jal         func_3A65E0
label_40087c:
    if (ctx->pc == 0x40087Cu) {
        ctx->pc = 0x40087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400878u;
        // 0x40087c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400880u;
        goto label_400880;
    }
    ctx->pc = 0x400878u;
    SET_GPR_U32(ctx, 31, 0x400880u);
    ctx->pc = 0x40087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400878u;
    // 0x40087c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x400878u, 0x400880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400880u;
label_400880:
    // 0x400880: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x400880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_400884:
    // 0x400884: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x400884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_400888:
    // 0x400888: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x400888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_40088c:
    // 0x40088c: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x40088cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400890:
    // 0x400890: 0x24847640  addiu       $a0, $a0, 0x7640
    ctx->pc = 0x400890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30272));
label_400894:
    // 0x400894: 0xc0e954c  jal         func_3A5530
label_400898:
    if (ctx->pc == 0x400898u) {
        ctx->pc = 0x400898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400894u;
        // 0x400898: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40089Cu;
        goto label_40089c;
    }
    ctx->pc = 0x400894u;
    SET_GPR_U32(ctx, 31, 0x40089Cu);
    ctx->pc = 0x400898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400894u;
    // 0x400898: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x400894u, 0x40089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40089Cu;
label_40089c:
    // 0x40089c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40089cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4008a0:
    // 0x4008a0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_4008a4:
    if (ctx->pc == 0x4008A4u) {
        ctx->pc = 0x4008A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4008A0u;
        // 0x4008a4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4008A8u;
        goto label_4008a8;
    }
    ctx->pc = 0x4008A0u;
    {
        const bool branch_taken_0x4008a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4008A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4008A0u;
        // 0x4008a4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4008a0) {
            ctx->pc = 0x4008C0u;
            goto label_4008c0;
        }
    }
    ctx->pc = 0x4008A8u;
label_4008a8:
    // 0x4008a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4008a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4008ac:
    // 0x4008ac: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x4008acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_4008b0:
    // 0x4008b0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x4008b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_4008b4:
    // 0x4008b4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x4008b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_4008b8:
    // 0x4008b8: 0x60f809  jalr        $v1
label_4008bc:
    if (ctx->pc == 0x4008BCu) {
        ctx->pc = 0x4008BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4008B8u;
        // 0x4008bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4008C0u;
        goto label_4008c0;
    }
    ctx->pc = 0x4008B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4008C0u);
        ctx->pc = 0x4008BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4008B8u;
        // 0x4008bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4008B8u, 0x4008C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4008C0u;
label_4008c0:
    // 0x4008c0: 0x3c027c97  lui         $v0, 0x7C97
    ctx->pc = 0x4008c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31895 << 16));
label_4008c4:
    // 0x4008c4: 0x3442303e  ori         $v0, $v0, 0x303E
    ctx->pc = 0x4008c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12350);
label_4008c8:
    // 0x4008c8: 0x17c2001b  bne         $fp, $v0, . + 4 + (0x1B << 2)
label_4008cc:
    if (ctx->pc == 0x4008CCu) {
        ctx->pc = 0x4008CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4008C8u;
        // 0x4008cc: 0x3c02177c  lui         $v0, 0x177C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6012 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4008D0u;
        goto label_4008d0;
    }
    ctx->pc = 0x4008C8u;
    {
        const bool branch_taken_0x4008c8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x4008CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4008C8u;
        // 0x4008cc: 0x3c02177c  lui         $v0, 0x177C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6012 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4008c8) {
            ctx->pc = 0x400938u;
            goto label_400938;
        }
    }
    ctx->pc = 0x4008D0u;
label_4008d0:
    // 0x4008d0: 0x3c06809a  lui         $a2, 0x809A
    ctx->pc = 0x4008d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32922 << 16));
label_4008d4:
    // 0x4008d4: 0x3c07697c  lui         $a3, 0x697C
    ctx->pc = 0x4008d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27004 << 16));
label_4008d8:
    // 0x4008d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4008d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4008dc:
    // 0x4008dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4008dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4008e0:
    // 0x4008e0: 0x34c682ff  ori         $a2, $a2, 0x82FF
    ctx->pc = 0x4008e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33535);
label_4008e4:
    // 0x4008e4: 0x34e776ff  ori         $a3, $a3, 0x76FF
    ctx->pc = 0x4008e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30463);
label_4008e8:
    // 0x4008e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4008e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4008ec:
    // 0x4008ec: 0xc0e9978  jal         func_3A65E0
label_4008f0:
    if (ctx->pc == 0x4008F0u) {
        ctx->pc = 0x4008F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4008ECu;
        // 0x4008f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4008F4u;
        goto label_4008f4;
    }
    ctx->pc = 0x4008ECu;
    SET_GPR_U32(ctx, 31, 0x4008F4u);
    ctx->pc = 0x4008F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4008ECu;
    // 0x4008f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x4008ECu, 0x4008F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4008F4u;
label_4008f4:
    // 0x4008f4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x4008f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_4008f8:
    // 0x4008f8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x4008f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_4008fc:
    // 0x4008fc: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x4008fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_400900:
    // 0x400900: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x400900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400904:
    // 0x400904: 0x24847650  addiu       $a0, $a0, 0x7650
    ctx->pc = 0x400904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30288));
label_400908:
    // 0x400908: 0xc0e954c  jal         func_3A5530
label_40090c:
    if (ctx->pc == 0x40090Cu) {
        ctx->pc = 0x40090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400908u;
        // 0x40090c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400910u;
        goto label_400910;
    }
    ctx->pc = 0x400908u;
    SET_GPR_U32(ctx, 31, 0x400910u);
    ctx->pc = 0x40090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400908u;
    // 0x40090c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x400908u, 0x400910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400910u;
label_400910:
    // 0x400910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x400910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_400914:
    // 0x400914: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_400918:
    if (ctx->pc == 0x400918u) {
        ctx->pc = 0x400918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400914u;
        // 0x400918: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40091Cu;
        goto label_40091c;
    }
    ctx->pc = 0x400914u;
    {
        const bool branch_taken_0x400914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x400918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400914u;
        // 0x400918: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400914) {
            ctx->pc = 0x400934u;
            goto label_400934;
        }
    }
    ctx->pc = 0x40091Cu;
label_40091c:
    // 0x40091c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x40091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_400920:
    // 0x400920: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x400920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_400924:
    // 0x400924: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x400924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_400928:
    // 0x400928: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x400928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_40092c:
    // 0x40092c: 0x60f809  jalr        $v1
label_400930:
    if (ctx->pc == 0x400930u) {
        ctx->pc = 0x400930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40092Cu;
        // 0x400930: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400934u;
        goto label_400934;
    }
    ctx->pc = 0x40092Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x400934u);
        ctx->pc = 0x400930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40092Cu;
        // 0x400930: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40092Cu, 0x400934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x400934u;
label_400934:
    // 0x400934: 0x3c02177c  lui         $v0, 0x177C
    ctx->pc = 0x400934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6012 << 16));
label_400938:
    // 0x400938: 0x344253d9  ori         $v0, $v0, 0x53D9
    ctx->pc = 0x400938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21465);
label_40093c:
    // 0x40093c: 0x17c2001b  bne         $fp, $v0, . + 4 + (0x1B << 2)
label_400940:
    if (ctx->pc == 0x400940u) {
        ctx->pc = 0x400940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40093Cu;
        // 0x400940: 0x3c022e1e  lui         $v0, 0x2E1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11806 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400944u;
        goto label_400944;
    }
    ctx->pc = 0x40093Cu;
    {
        const bool branch_taken_0x40093c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40093Cu;
        // 0x400940: 0x3c022e1e  lui         $v0, 0x2E1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11806 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40093c) {
            ctx->pc = 0x4009ACu;
            goto label_4009ac;
        }
    }
    ctx->pc = 0x400944u;
label_400944:
    // 0x400944: 0x3c065b44  lui         $a2, 0x5B44
    ctx->pc = 0x400944u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23364 << 16));
label_400948:
    // 0x400948: 0x3c077a5e  lui         $a3, 0x7A5E
    ctx->pc = 0x400948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31326 << 16));
label_40094c:
    // 0x40094c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x40094cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400950:
    // 0x400950: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x400950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400954:
    // 0x400954: 0x34c62cff  ori         $a2, $a2, 0x2CFF
    ctx->pc = 0x400954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11519);
label_400958:
    // 0x400958: 0x34e73bff  ori         $a3, $a3, 0x3BFF
    ctx->pc = 0x400958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)15359);
label_40095c:
    // 0x40095c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x40095cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400960:
    // 0x400960: 0xc0e9978  jal         func_3A65E0
label_400964:
    if (ctx->pc == 0x400964u) {
        ctx->pc = 0x400964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400960u;
        // 0x400964: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400968u;
        goto label_400968;
    }
    ctx->pc = 0x400960u;
    SET_GPR_U32(ctx, 31, 0x400968u);
    ctx->pc = 0x400964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400960u;
    // 0x400964: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x400960u, 0x400968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400968u;
label_400968:
    // 0x400968: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x400968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_40096c:
    // 0x40096c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x40096cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_400970:
    // 0x400970: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x400970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_400974:
    // 0x400974: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x400974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400978:
    // 0x400978: 0x24847668  addiu       $a0, $a0, 0x7668
    ctx->pc = 0x400978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30312));
label_40097c:
    // 0x40097c: 0xc0e954c  jal         func_3A5530
label_400980:
    if (ctx->pc == 0x400980u) {
        ctx->pc = 0x400980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40097Cu;
        // 0x400980: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400984u;
        goto label_400984;
    }
    ctx->pc = 0x40097Cu;
    SET_GPR_U32(ctx, 31, 0x400984u);
    ctx->pc = 0x400980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40097Cu;
    // 0x400980: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x40097Cu, 0x400984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400984u;
label_400984:
    // 0x400984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x400984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_400988:
    // 0x400988: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_40098c:
    if (ctx->pc == 0x40098Cu) {
        ctx->pc = 0x40098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400988u;
        // 0x40098c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400990u;
        goto label_400990;
    }
    ctx->pc = 0x400988u;
    {
        const bool branch_taken_0x400988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400988u;
        // 0x40098c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400988) {
            ctx->pc = 0x4009A8u;
            goto label_4009a8;
        }
    }
    ctx->pc = 0x400990u;
label_400990:
    // 0x400990: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x400990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_400994:
    // 0x400994: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x400994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_400998:
    // 0x400998: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x400998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_40099c:
    // 0x40099c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x40099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_4009a0:
    // 0x4009a0: 0x60f809  jalr        $v1
label_4009a4:
    if (ctx->pc == 0x4009A4u) {
        ctx->pc = 0x4009A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4009A0u;
        // 0x4009a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4009A8u;
        goto label_4009a8;
    }
    ctx->pc = 0x4009A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4009A8u);
        ctx->pc = 0x4009A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4009A0u;
        // 0x4009a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4009A0u, 0x4009A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4009A8u;
label_4009a8:
    // 0x4009a8: 0x3c022e1e  lui         $v0, 0x2E1E
    ctx->pc = 0x4009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11806 << 16));
label_4009ac:
    // 0x4009ac: 0x34424c3e  ori         $v0, $v0, 0x4C3E
    ctx->pc = 0x4009acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19518);
label_4009b0:
    // 0x4009b0: 0x17c20003  bne         $fp, $v0, . + 4 + (0x3 << 2)
label_4009b4:
    if (ctx->pc == 0x4009B4u) {
        ctx->pc = 0x4009B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4009B0u;
        // 0x4009b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4009B8u;
        goto label_4009b8;
    }
    ctx->pc = 0x4009B0u;
    {
        const bool branch_taken_0x4009b0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x4009B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4009B0u;
        // 0x4009b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4009b0) {
            ctx->pc = 0x4009C0u;
            goto label_4009c0;
        }
    }
    ctx->pc = 0x4009B8u;
label_4009b8:
    // 0x4009b8: 0xafa00540  sw          $zero, 0x540($sp)
    ctx->pc = 0x4009b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 0));
label_4009bc:
    // 0x4009bc: 0xafa2053c  sw          $v0, 0x53C($sp)
    ctx->pc = 0x4009bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
label_4009c0:
    // 0x4009c0: 0x3c02e4bc  lui         $v0, 0xE4BC
    ctx->pc = 0x4009c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58556 << 16));
label_4009c4:
    // 0x4009c4: 0x3442b75a  ori         $v0, $v0, 0xB75A
    ctx->pc = 0x4009c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46938);
label_4009c8:
    // 0x4009c8: 0x17c2000e  bne         $fp, $v0, . + 4 + (0xE << 2)
label_4009cc:
    if (ctx->pc == 0x4009CCu) {
        ctx->pc = 0x4009CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4009C8u;
        // 0x4009cc: 0x3c0250be  lui         $v0, 0x50BE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20670 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4009D0u;
        goto label_4009d0;
    }
    ctx->pc = 0x4009C8u;
    {
        const bool branch_taken_0x4009c8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x4009CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4009C8u;
        // 0x4009cc: 0x3c0250be  lui         $v0, 0x50BE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20670 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4009c8) {
            ctx->pc = 0x400A04u;
            goto label_400a04;
        }
    }
    ctx->pc = 0x4009D0u;
label_4009d0:
    // 0x4009d0: 0x3c06353a  lui         $a2, 0x353A
    ctx->pc = 0x4009d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)13626 << 16));
label_4009d4:
    // 0x4009d4: 0x3c072030  lui         $a3, 0x2030
    ctx->pc = 0x4009d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8240 << 16));
label_4009d8:
    // 0x4009d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4009d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4009dc:
    // 0x4009dc: 0xafa00540  sw          $zero, 0x540($sp)
    ctx->pc = 0x4009dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 0));
label_4009e0:
    // 0x4009e0: 0xafa3053c  sw          $v1, 0x53C($sp)
    ctx->pc = 0x4009e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 3));
label_4009e4:
    // 0x4009e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4009e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4009e8:
    // 0x4009e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4009e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4009ec:
    // 0x4009ec: 0x34c644ff  ori         $a2, $a2, 0x44FF
    ctx->pc = 0x4009ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17663);
label_4009f0:
    // 0x4009f0: 0x34e738ff  ori         $a3, $a3, 0x38FF
    ctx->pc = 0x4009f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)14591);
label_4009f4:
    // 0x4009f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4009f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4009f8:
    // 0x4009f8: 0xc0e9978  jal         func_3A65E0
label_4009fc:
    if (ctx->pc == 0x4009FCu) {
        ctx->pc = 0x4009FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4009F8u;
        // 0x4009fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400A00u;
        goto label_400a00;
    }
    ctx->pc = 0x4009F8u;
    SET_GPR_U32(ctx, 31, 0x400A00u);
    ctx->pc = 0x4009FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4009F8u;
    // 0x4009fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x4009F8u, 0x400A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400A00u;
label_400a00:
    // 0x400a00: 0x3c0250be  lui         $v0, 0x50BE
    ctx->pc = 0x400a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20670 << 16));
label_400a04:
    // 0x400a04: 0x8fa5053c  lw          $a1, 0x53C($sp)
    ctx->pc = 0x400a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
label_400a08:
    // 0x400a08: 0x3442ee93  ori         $v0, $v0, 0xEE93
    ctx->pc = 0x400a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61075);
label_400a0c:
    // 0x400a0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x400a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_400a10:
    // 0x400a10: 0x3c21026  xor         $v0, $fp, $v0
    ctx->pc = 0x400a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 2));
label_400a14:
    // 0x400a14: 0x3c03517d  lui         $v1, 0x517D
    ctx->pc = 0x400a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20861 << 16));
label_400a18:
    // 0x400a18: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x400a18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_400a1c:
    // 0x400a1c: 0x346318f6  ori         $v1, $v1, 0x18F6
    ctx->pc = 0x400a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6390);
label_400a20:
    // 0x400a20: 0x17c30012  bne         $fp, $v1, . + 4 + (0x12 << 2)
label_400a24:
    if (ctx->pc == 0x400A24u) {
        ctx->pc = 0x400A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A20u;
        // 0x400a24: 0xafa5053c  sw          $a1, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400A28u;
        goto label_400a28;
    }
    ctx->pc = 0x400A20u;
    {
        const bool branch_taken_0x400a20 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        ctx->pc = 0x400A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A20u;
        // 0x400a24: 0xafa5053c  sw          $a1, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a20) {
            ctx->pc = 0x400A6Cu;
            goto label_400a6c;
        }
    }
    ctx->pc = 0x400A28u;
label_400a28:
    // 0x400a28: 0x3c065952  lui         $a2, 0x5952
    ctx->pc = 0x400a28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22866 << 16));
label_400a2c:
    // 0x400a2c: 0x3c073032  lui         $a3, 0x3032
    ctx->pc = 0x400a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12338 << 16));
label_400a30:
    // 0x400a30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x400a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400a34:
    // 0x400a34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x400a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400a38:
    // 0x400a38: 0x34c658ff  ori         $a2, $a2, 0x58FF
    ctx->pc = 0x400a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)22783);
label_400a3c:
    // 0x400a3c: 0x34e737ff  ori         $a3, $a3, 0x37FF
    ctx->pc = 0x400a3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)14335);
label_400a40:
    // 0x400a40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x400a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400a44:
    // 0x400a44: 0xc0e9978  jal         func_3A65E0
label_400a48:
    if (ctx->pc == 0x400A48u) {
        ctx->pc = 0x400A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A44u;
        // 0x400a48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400A4Cu;
        goto label_400a4c;
    }
    ctx->pc = 0x400A44u;
    SET_GPR_U32(ctx, 31, 0x400A4Cu);
    ctx->pc = 0x400A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400A44u;
    // 0x400a48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x400A44u, 0x400A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400A4Cu;
label_400a4c:
    // 0x400a4c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x400a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_400a50:
    // 0x400a50: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x400a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_400a54:
    // 0x400a54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400a58:
    // 0x400a58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x400a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400a5c:
    // 0x400a5c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x400a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_400a60:
    // 0x400a60: 0x2406ff60  addiu       $a2, $zero, -0xA0
    ctx->pc = 0x400a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967136));
label_400a64:
    // 0x400a64: 0xc0f1658  jal         func_3C5960
label_400a68:
    if (ctx->pc == 0x400A68u) {
        ctx->pc = 0x400A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A64u;
        // 0x400a68: 0x2407004c  addiu       $a3, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400A6Cu;
        goto label_400a6c;
    }
    ctx->pc = 0x400A64u;
    SET_GPR_U32(ctx, 31, 0x400A6Cu);
    ctx->pc = 0x400A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400A64u;
    // 0x400a68: 0x2407004c  addiu       $a3, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x400A64u, 0x400A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400A6Cu;
label_400a6c:
    // 0x400a6c: 0x3c022b02  lui         $v0, 0x2B02
    ctx->pc = 0x400a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11010 << 16));
label_400a70:
    // 0x400a70: 0x3442a695  ori         $v0, $v0, 0xA695
    ctx->pc = 0x400a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42645);
label_400a74:
    // 0x400a74: 0x13c2000f  beq         $fp, $v0, . + 4 + (0xF << 2)
label_400a78:
    if (ctx->pc == 0x400A78u) {
        ctx->pc = 0x400A7Cu;
        goto label_400a7c;
    }
    ctx->pc = 0x400A74u;
    {
        const bool branch_taken_0x400a74 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x400a74) {
            ctx->pc = 0x400AB4u;
            goto label_400ab4;
        }
    }
    ctx->pc = 0x400A7Cu;
label_400a7c:
    // 0x400a7c: 0x3c02b20b  lui         $v0, 0xB20B
    ctx->pc = 0x400a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45579 << 16));
label_400a80:
    // 0x400a80: 0x3442f72f  ori         $v0, $v0, 0xF72F
    ctx->pc = 0x400a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63279);
label_400a84:
    // 0x400a84: 0x13c2000b  beq         $fp, $v0, . + 4 + (0xB << 2)
label_400a88:
    if (ctx->pc == 0x400A88u) {
        ctx->pc = 0x400A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A84u;
        // 0x400a88: 0x3c025b68  lui         $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23400 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400A8Cu;
        goto label_400a8c;
    }
    ctx->pc = 0x400A84u;
    {
        const bool branch_taken_0x400a84 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x400A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A84u;
        // 0x400a88: 0x3c025b68  lui         $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23400 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a84) {
            ctx->pc = 0x400AB4u;
            goto label_400ab4;
        }
    }
    ctx->pc = 0x400A8Cu;
label_400a8c:
    // 0x400a8c: 0x3442521a  ori         $v0, $v0, 0x521A
    ctx->pc = 0x400a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21018);
label_400a90:
    // 0x400a90: 0x13c20008  beq         $fp, $v0, . + 4 + (0x8 << 2)
label_400a94:
    if (ctx->pc == 0x400A94u) {
        ctx->pc = 0x400A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A90u;
        // 0x400a94: 0x3c022c6f  lui         $v0, 0x2C6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11375 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400A98u;
        goto label_400a98;
    }
    ctx->pc = 0x400A90u;
    {
        const bool branch_taken_0x400a90 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x400A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A90u;
        // 0x400a94: 0x3c022c6f  lui         $v0, 0x2C6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11375 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a90) {
            ctx->pc = 0x400AB4u;
            goto label_400ab4;
        }
    }
    ctx->pc = 0x400A98u;
label_400a98:
    // 0x400a98: 0x3442628c  ori         $v0, $v0, 0x628C
    ctx->pc = 0x400a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25228);
label_400a9c:
    // 0x400a9c: 0x13c20005  beq         $fp, $v0, . + 4 + (0x5 << 2)
label_400aa0:
    if (ctx->pc == 0x400AA0u) {
        ctx->pc = 0x400AA4u;
        goto label_400aa4;
    }
    ctx->pc = 0x400A9Cu;
    {
        const bool branch_taken_0x400a9c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x400a9c) {
            ctx->pc = 0x400AB4u;
            goto label_400ab4;
        }
    }
    ctx->pc = 0x400AA4u;
label_400aa4:
    // 0x400aa4: 0x3c02b566  lui         $v0, 0xB566
    ctx->pc = 0x400aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46438 << 16));
label_400aa8:
    // 0x400aa8: 0x34423336  ori         $v0, $v0, 0x3336
    ctx->pc = 0x400aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13110);
label_400aac:
    // 0x400aac: 0x17c2000a  bne         $fp, $v0, . + 4 + (0xA << 2)
label_400ab0:
    if (ctx->pc == 0x400AB0u) {
        ctx->pc = 0x400AB4u;
        goto label_400ab4;
    }
    ctx->pc = 0x400AACu;
    {
        const bool branch_taken_0x400aac = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x400aac) {
            ctx->pc = 0x400AD8u;
            goto label_400ad8;
        }
    }
    ctx->pc = 0x400AB4u;
label_400ab4:
    // 0x400ab4: 0x3c069a89  lui         $a2, 0x9A89
    ctx->pc = 0x400ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39561 << 16));
label_400ab8:
    // 0x400ab8: 0x3c07bbba  lui         $a3, 0xBBBA
    ctx->pc = 0x400ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48058 << 16));
label_400abc:
    // 0x400abc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x400abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400ac0:
    // 0x400ac0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x400ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400ac4:
    // 0x400ac4: 0x34c672ff  ori         $a2, $a2, 0x72FF
    ctx->pc = 0x400ac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)29439);
label_400ac8:
    // 0x400ac8: 0x34e7baff  ori         $a3, $a3, 0xBAFF
    ctx->pc = 0x400ac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)47871);
label_400acc:
    // 0x400acc: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x400accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_400ad0:
    // 0x400ad0: 0xc0e9978  jal         func_3A65E0
label_400ad4:
    if (ctx->pc == 0x400AD4u) {
        ctx->pc = 0x400AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400AD0u;
        // 0x400ad4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400AD8u;
        goto label_400ad8;
    }
    ctx->pc = 0x400AD0u;
    SET_GPR_U32(ctx, 31, 0x400AD8u);
    ctx->pc = 0x400AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400AD0u;
    // 0x400ad4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x400AD0u, 0x400AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400AD8u;
label_400ad8:
    // 0x400ad8: 0x3c02c50c  lui         $v0, 0xC50C
    ctx->pc = 0x400ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50444 << 16));
label_400adc:
    // 0x400adc: 0x3442c7b9  ori         $v0, $v0, 0xC7B9
    ctx->pc = 0x400adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51129);
label_400ae0:
    // 0x400ae0: 0x17c2000c  bne         $fp, $v0, . + 4 + (0xC << 2)
label_400ae4:
    if (ctx->pc == 0x400AE4u) {
        ctx->pc = 0x400AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400AE0u;
        // 0x400ae4: 0x3c024cb1  lui         $v0, 0x4CB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19633 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400AE8u;
        goto label_400ae8;
    }
    ctx->pc = 0x400AE0u;
    {
        const bool branch_taken_0x400ae0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400AE0u;
        // 0x400ae4: 0x3c024cb1  lui         $v0, 0x4CB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19633 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400ae0) {
            ctx->pc = 0x400B14u;
            goto label_400b14;
        }
    }
    ctx->pc = 0x400AE8u;
label_400ae8:
    // 0x400ae8: 0x3c062725  lui         $a2, 0x2725
    ctx->pc = 0x400ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10021 << 16));
label_400aec:
    // 0x400aec: 0x3c07bbba  lui         $a3, 0xBBBA
    ctx->pc = 0x400aecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48058 << 16));
label_400af0:
    // 0x400af0: 0x3c088594  lui         $t0, 0x8594
    ctx->pc = 0x400af0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34196 << 16));
label_400af4:
    // 0x400af4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x400af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400af8:
    // 0x400af8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x400af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400afc:
    // 0x400afc: 0x34c626ff  ori         $a2, $a2, 0x26FF
    ctx->pc = 0x400afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)9983);
label_400b00:
    // 0x400b00: 0x34e7baff  ori         $a3, $a3, 0xBAFF
    ctx->pc = 0x400b00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)47871);
label_400b04:
    // 0x400b04: 0x35083794  ori         $t0, $t0, 0x3794
    ctx->pc = 0x400b04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)14228);
label_400b08:
    // 0x400b08: 0xc0e9978  jal         func_3A65E0
label_400b0c:
    if (ctx->pc == 0x400B0Cu) {
        ctx->pc = 0x400B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B08u;
        // 0x400b0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400B10u;
        goto label_400b10;
    }
    ctx->pc = 0x400B08u;
    SET_GPR_U32(ctx, 31, 0x400B10u);
    ctx->pc = 0x400B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400B08u;
    // 0x400b0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x400B08u, 0x400B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B10u;
label_400b10:
    // 0x400b10: 0x3c024cb1  lui         $v0, 0x4CB1
    ctx->pc = 0x400b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19633 << 16));
label_400b14:
    // 0x400b14: 0x3442ca01  ori         $v0, $v0, 0xCA01
    ctx->pc = 0x400b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51713);
label_400b18:
    // 0x400b18: 0x17c2001b  bne         $fp, $v0, . + 4 + (0x1B << 2)
label_400b1c:
    if (ctx->pc == 0x400B1Cu) {
        ctx->pc = 0x400B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B18u;
        // 0x400b1c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400B20u;
        goto label_400b20;
    }
    ctx->pc = 0x400B18u;
    {
        const bool branch_taken_0x400b18 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B18u;
        // 0x400b1c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400b18) {
            ctx->pc = 0x400B88u;
            goto label_400b88;
        }
    }
    ctx->pc = 0x400B20u;
label_400b20:
    // 0x400b20: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x400b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_400b24:
    // 0x400b24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x400b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_400b28:
    // 0x400b28: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x400b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_400b2c:
    // 0x400b2c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x400b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_400b30:
    // 0x400b30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400b34:
    // 0x400b34: 0xc0cd518  jal         func_335460
label_400b38:
    if (ctx->pc == 0x400B38u) {
        ctx->pc = 0x400B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B34u;
        // 0x400b38: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400B3Cu;
        goto label_400b3c;
    }
    ctx->pc = 0x400B34u;
    SET_GPR_U32(ctx, 31, 0x400B3Cu);
    ctx->pc = 0x400B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400B34u;
    // 0x400b38: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400B34u, 0x400B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B3Cu;
label_400b3c:
    // 0x400b3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x400b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_400b40:
    // 0x400b40: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x400b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_400b44:
    // 0x400b44: 0xc136b24  jal         func_4DAC90
label_400b48:
    if (ctx->pc == 0x400B48u) {
        ctx->pc = 0x400B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B44u;
        // 0x400b48: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x400B4Cu;
        goto label_400b4c;
    }
    ctx->pc = 0x400B44u;
    SET_GPR_U32(ctx, 31, 0x400B4Cu);
    ctx->pc = 0x400B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400B44u;
    // 0x400b48: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x400B44u, 0x400B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B4Cu;
label_400b4c:
    // 0x400b4c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x400b4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_400b50:
    // 0x400b50: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x400b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400b54:
    // 0x400b54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x400b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400b58:
    // 0x400b58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x400b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400b5c:
    // 0x400b5c: 0xc0f1778  jal         func_3C5DE0
label_400b60:
    if (ctx->pc == 0x400B60u) {
        ctx->pc = 0x400B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B5Cu;
        // 0x400b60: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400B64u;
        goto label_400b64;
    }
    ctx->pc = 0x400B5Cu;
    SET_GPR_U32(ctx, 31, 0x400B64u);
    ctx->pc = 0x400B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400B5Cu;
    // 0x400b60: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5DE0u, 0x400B5Cu, 0x400B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B64u;
label_400b64:
    // 0x400b64: 0x3c064d54  lui         $a2, 0x4D54
    ctx->pc = 0x400b64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19796 << 16));
label_400b68:
    // 0x400b68: 0x3c07bb9d  lui         $a3, 0xBB9D
    ctx->pc = 0x400b68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48029 << 16));
label_400b6c:
    // 0x400b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400b70:
    // 0x400b70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x400b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400b74:
    // 0x400b74: 0x34c654ff  ori         $a2, $a2, 0x54FF
    ctx->pc = 0x400b74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21759);
label_400b78:
    // 0x400b78: 0x34e786ff  ori         $a3, $a3, 0x86FF
    ctx->pc = 0x400b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)34559);
label_400b7c:
    // 0x400b7c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x400b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_400b80:
    // 0x400b80: 0xc0e9978  jal         func_3A65E0
label_400b84:
    if (ctx->pc == 0x400B84u) {
        ctx->pc = 0x400B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B80u;
        // 0x400b84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400B88u;
        goto label_400b88;
    }
    ctx->pc = 0x400B80u;
    SET_GPR_U32(ctx, 31, 0x400B88u);
    ctx->pc = 0x400B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400B80u;
    // 0x400b84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x400B80u, 0x400B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B88u;
label_400b88:
    // 0x400b88: 0x3c02d5b8  lui         $v0, 0xD5B8
    ctx->pc = 0x400b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54712 << 16));
label_400b8c:
    // 0x400b8c: 0x34429bbb  ori         $v0, $v0, 0x9BBB
    ctx->pc = 0x400b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39867);
label_400b90:
    // 0x400b90: 0x17c2001b  bne         $fp, $v0, . + 4 + (0x1B << 2)
label_400b94:
    if (ctx->pc == 0x400B94u) {
        ctx->pc = 0x400B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B90u;
        // 0x400b94: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400B98u;
        goto label_400b98;
    }
    ctx->pc = 0x400B90u;
    {
        const bool branch_taken_0x400b90 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B90u;
        // 0x400b94: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400b90) {
            ctx->pc = 0x400C00u;
            goto label_400c00;
        }
    }
    ctx->pc = 0x400B98u;
label_400b98:
    // 0x400b98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x400b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_400b9c:
    // 0x400b9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x400b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_400ba0:
    // 0x400ba0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x400ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_400ba4:
    // 0x400ba4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x400ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_400ba8:
    // 0x400ba8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400bac:
    // 0x400bac: 0xc0cd518  jal         func_335460
label_400bb0:
    if (ctx->pc == 0x400BB0u) {
        ctx->pc = 0x400BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400BACu;
        // 0x400bb0: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400BB4u;
        goto label_400bb4;
    }
    ctx->pc = 0x400BACu;
    SET_GPR_U32(ctx, 31, 0x400BB4u);
    ctx->pc = 0x400BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400BACu;
    // 0x400bb0: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400BACu, 0x400BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400BB4u;
label_400bb4:
    // 0x400bb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x400bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_400bb8:
    // 0x400bb8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x400bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_400bbc:
    // 0x400bbc: 0xc136b24  jal         func_4DAC90
label_400bc0:
    if (ctx->pc == 0x400BC0u) {
        ctx->pc = 0x400BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400BBCu;
        // 0x400bc0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x400BC4u;
        goto label_400bc4;
    }
    ctx->pc = 0x400BBCu;
    SET_GPR_U32(ctx, 31, 0x400BC4u);
    ctx->pc = 0x400BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400BBCu;
    // 0x400bc0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x400BBCu, 0x400BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400BC4u;
label_400bc4:
    // 0x400bc4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x400bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_400bc8:
    // 0x400bc8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x400bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400bcc:
    // 0x400bcc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x400bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400bd0:
    // 0x400bd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x400bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400bd4:
    // 0x400bd4: 0xc0f1778  jal         func_3C5DE0
label_400bd8:
    if (ctx->pc == 0x400BD8u) {
        ctx->pc = 0x400BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400BD4u;
        // 0x400bd8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400BDCu;
        goto label_400bdc;
    }
    ctx->pc = 0x400BD4u;
    SET_GPR_U32(ctx, 31, 0x400BDCu);
    ctx->pc = 0x400BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400BD4u;
    // 0x400bd8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5DE0u, 0x400BD4u, 0x400BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400BDCu;
label_400bdc:
    // 0x400bdc: 0x3c064d54  lui         $a2, 0x4D54
    ctx->pc = 0x400bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19796 << 16));
label_400be0:
    // 0x400be0: 0x3c076c70  lui         $a3, 0x6C70
    ctx->pc = 0x400be0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27760 << 16));
label_400be4:
    // 0x400be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400be8:
    // 0x400be8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x400be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400bec:
    // 0x400bec: 0x34c654ff  ori         $a2, $a2, 0x54FF
    ctx->pc = 0x400becu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21759);
label_400bf0:
    // 0x400bf0: 0x34e772ff  ori         $a3, $a3, 0x72FF
    ctx->pc = 0x400bf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)29439);
label_400bf4:
    // 0x400bf4: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x400bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_400bf8:
    // 0x400bf8: 0xc0e9978  jal         func_3A65E0
label_400bfc:
    if (ctx->pc == 0x400BFCu) {
        ctx->pc = 0x400BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400BF8u;
        // 0x400bfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400C00u;
        goto label_400c00;
    }
    ctx->pc = 0x400BF8u;
    SET_GPR_U32(ctx, 31, 0x400C00u);
    ctx->pc = 0x400BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400BF8u;
    // 0x400bfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x400BF8u, 0x400C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400C00u;
label_400c00:
    // 0x400c00: 0x3c02eb90  lui         $v0, 0xEB90
    ctx->pc = 0x400c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60304 << 16));
label_400c04:
    // 0x400c04: 0x3442cc3d  ori         $v0, $v0, 0xCC3D
    ctx->pc = 0x400c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52285);
label_400c08:
    // 0x400c08: 0x13c20004  beq         $fp, $v0, . + 4 + (0x4 << 2)
label_400c0c:
    if (ctx->pc == 0x400C0Cu) {
        ctx->pc = 0x400C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400C08u;
        // 0x400c0c: 0x3c027299  lui         $v0, 0x7299 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29337 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400C10u;
        goto label_400c10;
    }
    ctx->pc = 0x400C08u;
    {
        const bool branch_taken_0x400c08 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x400C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400C08u;
        // 0x400c0c: 0x3c027299  lui         $v0, 0x7299 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29337 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400c08) {
            ctx->pc = 0x400C1Cu;
            goto label_400c1c;
        }
    }
    ctx->pc = 0x400C10u;
label_400c10:
    // 0x400c10: 0x34429d87  ori         $v0, $v0, 0x9D87
    ctx->pc = 0x400c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40327);
label_400c14:
    // 0x400c14: 0x17c20080  bne         $fp, $v0, . + 4 + (0x80 << 2)
label_400c18:
    if (ctx->pc == 0x400C18u) {
        ctx->pc = 0x400C1Cu;
        goto label_400c1c;
    }
    ctx->pc = 0x400C14u;
    {
        const bool branch_taken_0x400c14 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x400c14) {
            ctx->pc = 0x400E18u;
            goto label_400e18;
        }
    }
    ctx->pc = 0x400C1Cu;
label_400c1c:
    // 0x400c1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x400c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_400c20:
    // 0x400c20: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x400c20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
label_400c24:
    // 0x400c24: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x400c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_400c28:
    // 0x400c28: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x400c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_400c2c:
    // 0x400c2c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x400c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_400c30:
    // 0x400c30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x400c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_400c34:
    // 0x400c34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x400c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_400c38:
    // 0x400c38: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x400c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_400c3c:
    // 0x400c3c: 0xafa20540  sw          $v0, 0x540($sp)
    ctx->pc = 0x400c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
label_400c40:
    // 0x400c40: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x400c40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400c44:
    // 0x400c44: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x400c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_400c48:
    // 0x400c48: 0x36310036  ori         $s1, $s1, 0x36
    ctx->pc = 0x400c48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)54);
label_400c4c:
    // 0x400c4c: 0x0  nop
    ctx->pc = 0x400c4cu;
    // NOP
label_400c50:
    // 0x400c50: 0xc0e9694  jal         func_3A5A50
label_400c54:
    if (ctx->pc == 0x400C54u) {
        ctx->pc = 0x400C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400C50u;
        // 0x400c54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400C58u;
        goto label_400c58;
    }
    ctx->pc = 0x400C50u;
    SET_GPR_U32(ctx, 31, 0x400C58u);
    ctx->pc = 0x400C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400C50u;
    // 0x400c54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x400C50u, 0x400C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400C58u;
label_400c58:
    // 0x400c58: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_400c5c:
    if (ctx->pc == 0x400C5Cu) {
        ctx->pc = 0x400C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400C58u;
        // 0x400c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400C60u;
        goto label_400c60;
    }
    ctx->pc = 0x400C58u;
    {
        const bool branch_taken_0x400c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x400C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400C58u;
        // 0x400c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400c58) {
            ctx->pc = 0x400D10u;
            goto label_400d10;
        }
    }
    ctx->pc = 0x400C60u;
label_400c60:
    // 0x400c60: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x400c60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_400c64:
    // 0x400c64: 0xc0cd518  jal         func_335460
label_400c68:
    if (ctx->pc == 0x400C68u) {
        ctx->pc = 0x400C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400C64u;
        // 0x400c68: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x400C6Cu;
        goto label_400c6c;
    }
    ctx->pc = 0x400C64u;
    SET_GPR_U32(ctx, 31, 0x400C6Cu);
    ctx->pc = 0x400C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400C64u;
    // 0x400c68: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400C64u, 0x400C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400C6Cu;
label_400c6c:
    // 0x400c6c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x400c6cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_400c70:
    // 0x400c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400c74:
    // 0x400c74: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x400c74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_400c78:
    // 0x400c78: 0xc0cd518  jal         func_335460
label_400c7c:
    if (ctx->pc == 0x400C7Cu) {
        ctx->pc = 0x400C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400C78u;
        // 0x400c7c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x400C80u;
        goto label_400c80;
    }
    ctx->pc = 0x400C78u;
    SET_GPR_U32(ctx, 31, 0x400C80u);
    ctx->pc = 0x400C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400C78u;
    // 0x400c7c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400C78u, 0x400C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400C80u;
label_400c80:
    // 0x400c80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x400c80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_400c84:
    // 0x400c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400c88:
    // 0x400c88: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x400c88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_400c8c:
    // 0x400c8c: 0xc0cd518  jal         func_335460
label_400c90:
    if (ctx->pc == 0x400C90u) {
        ctx->pc = 0x400C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400C8Cu;
        // 0x400c90: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x400C94u;
        goto label_400c94;
    }
    ctx->pc = 0x400C8Cu;
    SET_GPR_U32(ctx, 31, 0x400C94u);
    ctx->pc = 0x400C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400C8Cu;
    // 0x400c90: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400C8Cu, 0x400C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400C94u;
label_400c94:
    // 0x400c94: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x400c94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_400c98:
    // 0x400c98: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x400c98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_400c9c:
    // 0x400c9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x400c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400ca0:
    // 0x400ca0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x400ca0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_400ca4:
    // 0x400ca4: 0xc0cd55c  jal         func_335570
label_400ca8:
    if (ctx->pc == 0x400CA8u) {
        ctx->pc = 0x400CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400CA4u;
        // 0x400ca8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400CACu;
        goto label_400cac;
    }
    ctx->pc = 0x400CA4u;
    SET_GPR_U32(ctx, 31, 0x400CACu);
    ctx->pc = 0x400CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400CA4u;
    // 0x400ca8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x400CA4u, 0x400CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400CACu;
label_400cac:
    // 0x400cac: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x400cacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_400cb0:
    // 0x400cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400cb4:
    // 0x400cb4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x400cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_400cb8:
    // 0x400cb8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x400cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_400cbc:
    // 0x400cbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400cc0:
    // 0x400cc0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x400cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_400cc4:
    // 0x400cc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x400cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_400cc8:
    // 0x400cc8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x400cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_400ccc:
    // 0x400ccc: 0xc0cd518  jal         func_335460
label_400cd0:
    if (ctx->pc == 0x400CD0u) {
        ctx->pc = 0x400CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400CCCu;
        // 0x400cd0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400CD4u;
        goto label_400cd4;
    }
    ctx->pc = 0x400CCCu;
    SET_GPR_U32(ctx, 31, 0x400CD4u);
    ctx->pc = 0x400CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400CCCu;
    // 0x400cd0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400CCCu, 0x400CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400CD4u;
label_400cd4:
    // 0x400cd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x400cd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_400cd8:
    // 0x400cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400cdc:
    // 0x400cdc: 0xc0cd4ee  jal         func_3353B8
label_400ce0:
    if (ctx->pc == 0x400CE0u) {
        ctx->pc = 0x400CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400CDCu;
        // 0x400ce0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400CE4u;
        goto label_400ce4;
    }
    ctx->pc = 0x400CDCu;
    SET_GPR_U32(ctx, 31, 0x400CE4u);
    ctx->pc = 0x400CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400CDCu;
    // 0x400ce0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x400CDCu, 0x400CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400CE4u;
label_400ce4:
    // 0x400ce4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x400ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_400ce8:
    // 0x400ce8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x400ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_400cec:
    // 0x400cec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400cf0:
    // 0x400cf0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x400cf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_400cf4:
    // 0x400cf4: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x400cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_400cf8:
    // 0x400cf8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x400cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_400cfc:
    // 0x400cfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x400cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_400d00:
    // 0x400d00: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x400d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_400d04:
    // 0x400d04: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x400d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_400d08:
    // 0x400d08: 0xc0f1618  jal         func_3C5860
label_400d0c:
    if (ctx->pc == 0x400D0Cu) {
        ctx->pc = 0x400D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400D08u;
        // 0x400d0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400D10u;
        goto label_400d10;
    }
    ctx->pc = 0x400D08u;
    SET_GPR_U32(ctx, 31, 0x400D10u);
    ctx->pc = 0x400D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400D08u;
    // 0x400d0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x400D08u, 0x400D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400D10u;
label_400d10:
    // 0x400d10: 0x8fa30540  lw          $v1, 0x540($sp)
    ctx->pc = 0x400d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_400d14:
    // 0x400d14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x400d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_400d18:
    // 0x400d18: 0x461ffcd  bgez        $v1, . + 4 + (-0x33 << 2)
label_400d1c:
    if (ctx->pc == 0x400D1Cu) {
        ctx->pc = 0x400D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400D18u;
        // 0x400d1c: 0xafa30540  sw          $v1, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400D20u;
        goto label_400d20;
    }
    ctx->pc = 0x400D18u;
    {
        const bool branch_taken_0x400d18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x400D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400D18u;
        // 0x400d1c: 0xafa30540  sw          $v1, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400d18) {
            ctx->pc = 0x400C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_400c50;
        }
    }
    ctx->pc = 0x400D20u;
label_400d20:
    // 0x400d20: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x400d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_400d24:
    // 0x400d24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x400d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_400d28:
    // 0x400d28: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x400d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_400d2c:
    // 0x400d2c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x400d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_400d30:
    // 0x400d30: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x400d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_400d34:
    // 0x400d34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x400d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_400d38:
    // 0x400d38: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x400d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_400d3c:
    // 0x400d3c: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x400d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400d40:
    // 0x400d40: 0xafa40540  sw          $a0, 0x540($sp)
    ctx->pc = 0x400d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 4));
label_400d44:
    // 0x400d44: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x400d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_400d48:
    // 0x400d48: 0xc0e9694  jal         func_3A5A50
label_400d4c:
    if (ctx->pc == 0x400D4Cu) {
        ctx->pc = 0x400D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400D48u;
        // 0x400d4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400D50u;
        goto label_400d50;
    }
    ctx->pc = 0x400D48u;
    SET_GPR_U32(ctx, 31, 0x400D50u);
    ctx->pc = 0x400D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400D48u;
    // 0x400d4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x400D48u, 0x400D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400D50u;
label_400d50:
    // 0x400d50: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_400d54:
    if (ctx->pc == 0x400D54u) {
        ctx->pc = 0x400D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400D50u;
        // 0x400d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400D58u;
        goto label_400d58;
    }
    ctx->pc = 0x400D50u;
    {
        const bool branch_taken_0x400d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x400D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400D50u;
        // 0x400d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400d50) {
            ctx->pc = 0x400E00u;
            goto label_400e00;
        }
    }
    ctx->pc = 0x400D58u;
label_400d58:
    // 0x400d58: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x400d58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_400d5c:
    // 0x400d5c: 0xc0cd518  jal         func_335460
label_400d60:
    if (ctx->pc == 0x400D60u) {
        ctx->pc = 0x400D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400D5Cu;
        // 0x400d60: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x400D64u;
        goto label_400d64;
    }
    ctx->pc = 0x400D5Cu;
    SET_GPR_U32(ctx, 31, 0x400D64u);
    ctx->pc = 0x400D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400D5Cu;
    // 0x400d60: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400D5Cu, 0x400D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400D64u;
label_400d64:
    // 0x400d64: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x400d64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_400d68:
    // 0x400d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400d6c:
    // 0x400d6c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x400d6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_400d70:
    // 0x400d70: 0xc0cd518  jal         func_335460
label_400d74:
    if (ctx->pc == 0x400D74u) {
        ctx->pc = 0x400D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400D70u;
        // 0x400d74: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x400D78u;
        goto label_400d78;
    }
    ctx->pc = 0x400D70u;
    SET_GPR_U32(ctx, 31, 0x400D78u);
    ctx->pc = 0x400D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400D70u;
    // 0x400d74: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400D70u, 0x400D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400D78u;
label_400d78:
    // 0x400d78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x400d78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_400d7c:
    // 0x400d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400d80:
    // 0x400d80: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x400d80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_400d84:
    // 0x400d84: 0xc0cd518  jal         func_335460
label_400d88:
    if (ctx->pc == 0x400D88u) {
        ctx->pc = 0x400D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400D84u;
        // 0x400d88: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x400D8Cu;
        goto label_400d8c;
    }
    ctx->pc = 0x400D84u;
    SET_GPR_U32(ctx, 31, 0x400D8Cu);
    ctx->pc = 0x400D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400D84u;
    // 0x400d88: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400D84u, 0x400D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400D8Cu;
label_400d8c:
    // 0x400d8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x400d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400d90:
    // 0x400d90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x400d90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_400d94:
    // 0x400d94: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x400d94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_400d98:
    // 0x400d98: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x400d98u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_400d9c:
    // 0x400d9c: 0xc0cd55c  jal         func_335570
label_400da0:
    if (ctx->pc == 0x400DA0u) {
        ctx->pc = 0x400DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400D9Cu;
        // 0x400da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400DA4u;
        goto label_400da4;
    }
    ctx->pc = 0x400D9Cu;
    SET_GPR_U32(ctx, 31, 0x400DA4u);
    ctx->pc = 0x400DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400D9Cu;
    // 0x400da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x400D9Cu, 0x400DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400DA4u;
label_400da4:
    // 0x400da4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x400da4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_400da8:
    // 0x400da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400dac:
    // 0x400dac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x400dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_400db0:
    // 0x400db0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x400db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_400db4:
    // 0x400db4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400db8:
    // 0x400db8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x400db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_400dbc:
    // 0x400dbc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x400dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_400dc0:
    // 0x400dc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x400dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_400dc4:
    // 0x400dc4: 0xc0cd518  jal         func_335460
label_400dc8:
    if (ctx->pc == 0x400DC8u) {
        ctx->pc = 0x400DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400DC4u;
        // 0x400dc8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400DCCu;
        goto label_400dcc;
    }
    ctx->pc = 0x400DC4u;
    SET_GPR_U32(ctx, 31, 0x400DCCu);
    ctx->pc = 0x400DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400DC4u;
    // 0x400dc8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400DC4u, 0x400DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400DCCu;
label_400dcc:
    // 0x400dcc: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x400dccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
label_400dd0:
    // 0x400dd0: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x400dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_400dd4:
    // 0x400dd4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x400dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_400dd8:
    // 0x400dd8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x400dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_400ddc:
    // 0x400ddc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400de0:
    // 0x400de0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x400de0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_400de4:
    // 0x400de4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x400de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_400de8:
    // 0x400de8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x400de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_400dec:
    // 0x400dec: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x400decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_400df0:
    // 0x400df0: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x400df0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_400df4:
    // 0x400df4: 0x3508003b  ori         $t0, $t0, 0x3B
    ctx->pc = 0x400df4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)59);
label_400df8:
    // 0x400df8: 0xc0f1618  jal         func_3C5860
label_400dfc:
    if (ctx->pc == 0x400DFCu) {
        ctx->pc = 0x400DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400DF8u;
        // 0x400dfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400E00u;
        goto label_400e00;
    }
    ctx->pc = 0x400DF8u;
    SET_GPR_U32(ctx, 31, 0x400E00u);
    ctx->pc = 0x400DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400DF8u;
    // 0x400dfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x400DF8u, 0x400E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400E00u;
label_400e00:
    // 0x400e00: 0x8fa50540  lw          $a1, 0x540($sp)
    ctx->pc = 0x400e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_400e04:
    // 0x400e04: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x400e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_400e08:
    // 0x400e08: 0x4a1ffcf  bgez        $a1, . + 4 + (-0x31 << 2)
label_400e0c:
    if (ctx->pc == 0x400E0Cu) {
        ctx->pc = 0x400E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E08u;
        // 0x400e0c: 0xafa50540  sw          $a1, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400E10u;
        goto label_400e10;
    }
    ctx->pc = 0x400E08u;
    {
        const bool branch_taken_0x400e08 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x400E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E08u;
        // 0x400e0c: 0xafa50540  sw          $a1, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e08) {
            ctx->pc = 0x400D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_400d48;
        }
    }
    ctx->pc = 0x400E10u;
label_400e10:
    // 0x400e10: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x400e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_400e14:
    // 0x400e14: 0xafa20540  sw          $v0, 0x540($sp)
    ctx->pc = 0x400e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
label_400e18:
    // 0x400e18: 0x3c02f10d  lui         $v0, 0xF10D
    ctx->pc = 0x400e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61709 << 16));
label_400e1c:
    // 0x400e1c: 0x34424da4  ori         $v0, $v0, 0x4DA4
    ctx->pc = 0x400e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19876);
label_400e20:
    // 0x400e20: 0x13c20005  beq         $fp, $v0, . + 4 + (0x5 << 2)
label_400e24:
    if (ctx->pc == 0x400E24u) {
        ctx->pc = 0x400E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E20u;
        // 0x400e24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400E28u;
        goto label_400e28;
    }
    ctx->pc = 0x400E20u;
    {
        const bool branch_taken_0x400e20 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x400E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E20u;
        // 0x400e24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e20) {
            ctx->pc = 0x400E38u;
            goto label_400e38;
        }
    }
    ctx->pc = 0x400E28u;
label_400e28:
    // 0x400e28: 0x3c02860a  lui         $v0, 0x860A
    ctx->pc = 0x400e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34314 << 16));
label_400e2c:
    // 0x400e2c: 0x34427d32  ori         $v0, $v0, 0x7D32
    ctx->pc = 0x400e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32050);
label_400e30:
    // 0x400e30: 0x17c20004  bne         $fp, $v0, . + 4 + (0x4 << 2)
label_400e34:
    if (ctx->pc == 0x400E34u) {
        ctx->pc = 0x400E38u;
        goto label_400e38;
    }
    ctx->pc = 0x400E30u;
    {
        const bool branch_taken_0x400e30 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x400e30) {
            ctx->pc = 0x400E44u;
            goto label_400e44;
        }
    }
    ctx->pc = 0x400E38u;
label_400e38:
    // 0x400e38: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x400e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_400e3c:
    // 0x400e3c: 0xc0e9876  jal         func_3A61D8
label_400e40:
    if (ctx->pc == 0x400E40u) {
        ctx->pc = 0x400E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E3Cu;
        // 0x400e40: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400E44u;
        goto label_400e44;
    }
    ctx->pc = 0x400E3Cu;
    SET_GPR_U32(ctx, 31, 0x400E44u);
    ctx->pc = 0x400E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400E3Cu;
    // 0x400e40: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A61D8u, 0x400E3Cu, 0x400E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400E44u;
label_400e44:
    // 0x400e44: 0x3c02824e  lui         $v0, 0x824E
    ctx->pc = 0x400e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33358 << 16));
label_400e48:
    // 0x400e48: 0x3442aa6e  ori         $v0, $v0, 0xAA6E
    ctx->pc = 0x400e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43630);
label_400e4c:
    // 0x400e4c: 0x13c20007  beq         $fp, $v0, . + 4 + (0x7 << 2)
label_400e50:
    if (ctx->pc == 0x400E50u) {
        ctx->pc = 0x400E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E4Cu;
        // 0x400e50: 0x3c021c2a  lui         $v0, 0x1C2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7210 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400E54u;
        goto label_400e54;
    }
    ctx->pc = 0x400E4Cu;
    {
        const bool branch_taken_0x400e4c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x400E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E4Cu;
        // 0x400e50: 0x3c021c2a  lui         $v0, 0x1C2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7210 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e4c) {
            ctx->pc = 0x400E6Cu;
            goto label_400e6c;
        }
    }
    ctx->pc = 0x400E54u;
label_400e54:
    // 0x400e54: 0x34423fcd  ori         $v0, $v0, 0x3FCD
    ctx->pc = 0x400e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16333);
label_400e58:
    // 0x400e58: 0x13c20004  beq         $fp, $v0, . + 4 + (0x4 << 2)
label_400e5c:
    if (ctx->pc == 0x400E5Cu) {
        ctx->pc = 0x400E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E58u;
        // 0x400e5c: 0x3c026b2d  lui         $v0, 0x6B2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27437 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400E60u;
        goto label_400e60;
    }
    ctx->pc = 0x400E58u;
    {
        const bool branch_taken_0x400e58 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x400E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E58u;
        // 0x400e5c: 0x3c026b2d  lui         $v0, 0x6B2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27437 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e58) {
            ctx->pc = 0x400E6Cu;
            goto label_400e6c;
        }
    }
    ctx->pc = 0x400E60u;
label_400e60:
    // 0x400e60: 0x34420f5b  ori         $v0, $v0, 0xF5B
    ctx->pc = 0x400e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3931);
label_400e64:
    // 0x400e64: 0x17c20007  bne         $fp, $v0, . + 4 + (0x7 << 2)
label_400e68:
    if (ctx->pc == 0x400E68u) {
        ctx->pc = 0x400E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E64u;
        // 0x400e68: 0x3c021eb5  lui         $v0, 0x1EB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7861 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400E6Cu;
        goto label_400e6c;
    }
    ctx->pc = 0x400E64u;
    {
        const bool branch_taken_0x400e64 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E64u;
        // 0x400e68: 0x3c021eb5  lui         $v0, 0x1EB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7861 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e64) {
            ctx->pc = 0x400E84u;
            goto label_400e84;
        }
    }
    ctx->pc = 0x400E6Cu;
label_400e6c:
    // 0x400e6c: 0x3c038594  lui         $v1, 0x8594
    ctx->pc = 0x400e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34196 << 16));
label_400e70:
    // 0x400e70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x400e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_400e74:
    // 0x400e74: 0x34633794  ori         $v1, $v1, 0x3794
    ctx->pc = 0x400e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14228);
label_400e78:
    // 0x400e78: 0xafa4053c  sw          $a0, 0x53C($sp)
    ctx->pc = 0x400e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 4));
label_400e7c:
    // 0x400e7c: 0xafa30540  sw          $v1, 0x540($sp)
    ctx->pc = 0x400e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 3));
label_400e80:
    // 0x400e80: 0x3c021eb5  lui         $v0, 0x1EB5
    ctx->pc = 0x400e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7861 << 16));
label_400e84:
    // 0x400e84: 0x34421b25  ori         $v0, $v0, 0x1B25
    ctx->pc = 0x400e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6949);
label_400e88:
    // 0x400e88: 0x13c20005  beq         $fp, $v0, . + 4 + (0x5 << 2)
label_400e8c:
    if (ctx->pc == 0x400E8Cu) {
        ctx->pc = 0x400E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E88u;
        // 0x400e8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400E90u;
        goto label_400e90;
    }
    ctx->pc = 0x400E88u;
    {
        const bool branch_taken_0x400e88 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x400E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E88u;
        // 0x400e8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e88) {
            ctx->pc = 0x400EA0u;
            goto label_400ea0;
        }
    }
    ctx->pc = 0x400E90u;
label_400e90:
    // 0x400e90: 0x3c02fbd2  lui         $v0, 0xFBD2
    ctx->pc = 0x400e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64466 << 16));
label_400e94:
    // 0x400e94: 0x34421393  ori         $v0, $v0, 0x1393
    ctx->pc = 0x400e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5011);
label_400e98:
    // 0x400e98: 0x17c20002  bne         $fp, $v0, . + 4 + (0x2 << 2)
label_400e9c:
    if (ctx->pc == 0x400E9Cu) {
        ctx->pc = 0x400EA0u;
        goto label_400ea0;
    }
    ctx->pc = 0x400E98u;
    {
        const bool branch_taken_0x400e98 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x400e98) {
            ctx->pc = 0x400EA4u;
            goto label_400ea4;
        }
    }
    ctx->pc = 0x400EA0u;
label_400ea0:
    // 0x400ea0: 0xafa5053c  sw          $a1, 0x53C($sp)
    ctx->pc = 0x400ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 5));
label_400ea4:
    // 0x400ea4: 0x3c02b0c6  lui         $v0, 0xB0C6
    ctx->pc = 0x400ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45254 << 16));
label_400ea8:
    // 0x400ea8: 0x34429542  ori         $v0, $v0, 0x9542
    ctx->pc = 0x400ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38210);
label_400eac:
    // 0x400eac: 0x17c20013  bne         $fp, $v0, . + 4 + (0x13 << 2)
label_400eb0:
    if (ctx->pc == 0x400EB0u) {
        ctx->pc = 0x400EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400EACu;
        // 0x400eb0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400EB4u;
        goto label_400eb4;
    }
    ctx->pc = 0x400EACu;
    {
        const bool branch_taken_0x400eac = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400EACu;
        // 0x400eb0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400eac) {
            ctx->pc = 0x400EFCu;
            goto label_400efc;
        }
    }
    ctx->pc = 0x400EB4u;
label_400eb4:
    // 0x400eb4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x400eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_400eb8:
    // 0x400eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x400eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_400ebc:
    // 0x400ebc: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x400ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_400ec0:
    // 0x400ec0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x400ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_400ec4:
    // 0x400ec4: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x400ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400ec8:
    // 0x400ec8: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x400ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
label_400ecc:
    // 0x400ecc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x400eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_400ed0:
    // 0x400ed0: 0xc0e954c  jal         func_3A5530
label_400ed4:
    if (ctx->pc == 0x400ED4u) {
        ctx->pc = 0x400ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400ED0u;
        // 0x400ed4: 0xafa2053c  sw          $v0, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400ED8u;
        goto label_400ed8;
    }
    ctx->pc = 0x400ED0u;
    SET_GPR_U32(ctx, 31, 0x400ED8u);
    ctx->pc = 0x400ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400ED0u;
    // 0x400ed4: 0xafa2053c  sw          $v0, 0x53C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x400ED0u, 0x400ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400ED8u;
label_400ed8:
    // 0x400ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x400ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_400edc:
    // 0x400edc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_400ee0:
    if (ctx->pc == 0x400EE0u) {
        ctx->pc = 0x400EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400EDCu;
        // 0x400ee0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400EE4u;
        goto label_400ee4;
    }
    ctx->pc = 0x400EDCu;
    {
        const bool branch_taken_0x400edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x400EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400EDCu;
        // 0x400ee0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400edc) {
            ctx->pc = 0x400EFCu;
            goto label_400efc;
        }
    }
    ctx->pc = 0x400EE4u;
label_400ee4:
    // 0x400ee4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x400ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_400ee8:
    // 0x400ee8: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x400ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_400eec:
    // 0x400eec: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x400eecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_400ef0:
    // 0x400ef0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x400ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_400ef4:
    // 0x400ef4: 0x60f809  jalr        $v1
label_400ef8:
    if (ctx->pc == 0x400EF8u) {
        ctx->pc = 0x400EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400EF4u;
        // 0x400ef8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400EFCu;
        goto label_400efc;
    }
    ctx->pc = 0x400EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x400EFCu);
        ctx->pc = 0x400EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400EF4u;
        // 0x400ef8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x400EF4u, 0x400EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x400EFCu;
label_400efc:
    // 0x400efc: 0x3c02fbf3  lui         $v0, 0xFBF3
    ctx->pc = 0x400efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64499 << 16));
label_400f00:
    // 0x400f00: 0x3442e3ae  ori         $v0, $v0, 0xE3AE
    ctx->pc = 0x400f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58286);
label_400f04:
    // 0x400f04: 0x17c20014  bne         $fp, $v0, . + 4 + (0x14 << 2)
label_400f08:
    if (ctx->pc == 0x400F08u) {
        ctx->pc = 0x400F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400F04u;
        // 0x400f08: 0x3c026250  lui         $v0, 0x6250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25168 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400F0Cu;
        goto label_400f0c;
    }
    ctx->pc = 0x400F04u;
    {
        const bool branch_taken_0x400f04 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400F04u;
        // 0x400f08: 0x3c026250  lui         $v0, 0x6250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25168 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400f04) {
            ctx->pc = 0x400F58u;
            goto label_400f58;
        }
    }
    ctx->pc = 0x400F0Cu;
label_400f0c:
    // 0x400f0c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x400f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_400f10:
    // 0x400f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x400f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_400f14:
    // 0x400f14: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x400f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_400f18:
    // 0x400f18: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x400f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_400f1c:
    // 0x400f1c: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x400f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400f20:
    // 0x400f20: 0x24847698  addiu       $a0, $a0, 0x7698
    ctx->pc = 0x400f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30360));
label_400f24:
    // 0x400f24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x400f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_400f28:
    // 0x400f28: 0xc0e954c  jal         func_3A5530
label_400f2c:
    if (ctx->pc == 0x400F2Cu) {
        ctx->pc = 0x400F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400F28u;
        // 0x400f2c: 0xafa3053c  sw          $v1, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400F30u;
        goto label_400f30;
    }
    ctx->pc = 0x400F28u;
    SET_GPR_U32(ctx, 31, 0x400F30u);
    ctx->pc = 0x400F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400F28u;
    // 0x400f2c: 0xafa3053c  sw          $v1, 0x53C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x400F28u, 0x400F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400F30u;
label_400f30:
    // 0x400f30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x400f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_400f34:
    // 0x400f34: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_400f38:
    if (ctx->pc == 0x400F38u) {
        ctx->pc = 0x400F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400F34u;
        // 0x400f38: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400F3Cu;
        goto label_400f3c;
    }
    ctx->pc = 0x400F34u;
    {
        const bool branch_taken_0x400f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x400F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400F34u;
        // 0x400f38: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400f34) {
            ctx->pc = 0x400F54u;
            goto label_400f54;
        }
    }
    ctx->pc = 0x400F3Cu;
label_400f3c:
    // 0x400f3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x400f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_400f40:
    // 0x400f40: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x400f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_400f44:
    // 0x400f44: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x400f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_400f48:
    // 0x400f48: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x400f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_400f4c:
    // 0x400f4c: 0x60f809  jalr        $v1
label_400f50:
    if (ctx->pc == 0x400F50u) {
        ctx->pc = 0x400F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400F4Cu;
        // 0x400f50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400F54u;
        goto label_400f54;
    }
    ctx->pc = 0x400F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x400F54u);
        ctx->pc = 0x400F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400F4Cu;
        // 0x400f50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x400F4Cu, 0x400F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x400F54u;
label_400f54:
    // 0x400f54: 0x3c026250  lui         $v0, 0x6250
    ctx->pc = 0x400f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25168 << 16));
label_400f58:
    // 0x400f58: 0x8fa5053c  lw          $a1, 0x53C($sp)
    ctx->pc = 0x400f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
label_400f5c:
    // 0x400f5c: 0x34422b03  ori         $v0, $v0, 0x2B03
    ctx->pc = 0x400f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11011);
label_400f60:
    // 0x400f60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x400f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_400f64:
    // 0x400f64: 0x3c21026  xor         $v0, $fp, $v0
    ctx->pc = 0x400f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 2));
label_400f68:
    // 0x400f68: 0x3c03f14e  lui         $v1, 0xF14E
    ctx->pc = 0x400f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61774 << 16));
label_400f6c:
    // 0x400f6c: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x400f6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_400f70:
    // 0x400f70: 0x3463ade0  ori         $v1, $v1, 0xADE0
    ctx->pc = 0x400f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44512);
label_400f74:
    // 0x400f74: 0x17c3001f  bne         $fp, $v1, . + 4 + (0x1F << 2)
label_400f78:
    if (ctx->pc == 0x400F78u) {
        ctx->pc = 0x400F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400F74u;
        // 0x400f78: 0xafa5053c  sw          $a1, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400F7Cu;
        goto label_400f7c;
    }
    ctx->pc = 0x400F74u;
    {
        const bool branch_taken_0x400f74 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        ctx->pc = 0x400F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400F74u;
        // 0x400f78: 0xafa5053c  sw          $a1, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400f74) {
            ctx->pc = 0x400FF4u;
            goto label_400ff4;
        }
    }
    ctx->pc = 0x400F7Cu;
label_400f7c:
    // 0x400f7c: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x400f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_400f80:
    // 0x400f80: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x400f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_400f84:
    // 0x400f84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x400f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_400f88:
    // 0x400f88: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x400f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_400f8c:
    // 0x400f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x400f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_400f90:
    // 0x400f90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x400f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_400f94:
    // 0x400f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x400f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_400f98:
    // 0x400f98: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x400f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_400f9c:
    // 0x400f9c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x400f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_400fa0:
    // 0x400fa0: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x400fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_400fa4:
    // 0x400fa4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x400fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_400fa8:
    // 0x400fa8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x400fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_400fac:
    // 0x400fac: 0x248476a8  addiu       $a0, $a0, 0x76A8
    ctx->pc = 0x400facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30376));
label_400fb0:
    // 0x400fb0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x400fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_400fb4:
    // 0x400fb4: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x400fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
label_400fb8:
    // 0x400fb8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x400fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400fbc:
    // 0x400fbc: 0xafa3053c  sw          $v1, 0x53C($sp)
    ctx->pc = 0x400fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 3));
label_400fc0:
    // 0x400fc0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x400fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_400fc4:
    // 0x400fc4: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x400fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400fc8:
    // 0x400fc8: 0xc0e954c  jal         func_3A5530
label_400fcc:
    if (ctx->pc == 0x400FCCu) {
        ctx->pc = 0x400FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400FC8u;
        // 0x400fcc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400FD0u;
        goto label_400fd0;
    }
    ctx->pc = 0x400FC8u;
    SET_GPR_U32(ctx, 31, 0x400FD0u);
    ctx->pc = 0x400FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400FC8u;
    // 0x400fcc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x400FC8u, 0x400FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400FD0u;
label_400fd0:
    // 0x400fd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x400fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_400fd4:
    // 0x400fd4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_400fd8:
    if (ctx->pc == 0x400FD8u) {
        ctx->pc = 0x400FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400FD4u;
        // 0x400fd8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400FDCu;
        goto label_400fdc;
    }
    ctx->pc = 0x400FD4u;
    {
        const bool branch_taken_0x400fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x400FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400FD4u;
        // 0x400fd8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400fd4) {
            ctx->pc = 0x400FF4u;
            goto label_400ff4;
        }
    }
    ctx->pc = 0x400FDCu;
label_400fdc:
    // 0x400fdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x400fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_400fe0:
    // 0x400fe0: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x400fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_400fe4:
    // 0x400fe4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x400fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_400fe8:
    // 0x400fe8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x400fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_400fec:
    // 0x400fec: 0x60f809  jalr        $v1
label_400ff0:
    if (ctx->pc == 0x400FF0u) {
        ctx->pc = 0x400FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400FECu;
        // 0x400ff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400FF4u;
        goto label_400ff4;
    }
    ctx->pc = 0x400FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x400FF4u);
        ctx->pc = 0x400FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400FECu;
        // 0x400ff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x400FECu, 0x400FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x400FF4u;
label_400ff4:
    // 0x400ff4: 0x3c021014  lui         $v0, 0x1014
    ctx->pc = 0x400ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4116 << 16));
label_400ff8:
    // 0x400ff8: 0x34425a50  ori         $v0, $v0, 0x5A50
    ctx->pc = 0x400ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23120);
label_400ffc:
    // 0x400ffc: 0x17c20003  bne         $fp, $v0, . + 4 + (0x3 << 2)
label_401000:
    if (ctx->pc == 0x401000u) {
        ctx->pc = 0x401000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400FFCu;
        // 0x401000: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401004u;
        goto label_401004;
    }
    ctx->pc = 0x400FFCu;
    {
        const bool branch_taken_0x400ffc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x401000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400FFCu;
        // 0x401000: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400ffc) {
            ctx->pc = 0x40100Cu;
            goto label_40100c;
        }
    }
    ctx->pc = 0x401004u;
label_401004:
    // 0x401004: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x401004u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_401008:
    // 0x401008: 0xafa4053c  sw          $a0, 0x53C($sp)
    ctx->pc = 0x401008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 4));
label_40100c:
    // 0x40100c: 0x3c02d29c  lui         $v0, 0xD29C
    ctx->pc = 0x40100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53916 << 16));
label_401010:
    // 0x401010: 0x3442be0b  ori         $v0, $v0, 0xBE0B
    ctx->pc = 0x401010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48651);
label_401014:
    // 0x401014: 0x17c20015  bne         $fp, $v0, . + 4 + (0x15 << 2)
label_401018:
    if (ctx->pc == 0x401018u) {
        ctx->pc = 0x401018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401014u;
        // 0x401018: 0x8fa30530  lw          $v1, 0x530($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40101Cu;
        goto label_40101c;
    }
    ctx->pc = 0x401014u;
    {
        const bool branch_taken_0x401014 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x401018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401014u;
        // 0x401018: 0x8fa30530  lw          $v1, 0x530($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401014) {
            ctx->pc = 0x40106Cu;
            goto label_40106c;
        }
    }
    ctx->pc = 0x40101Cu;
label_40101c:
    // 0x40101c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x40101cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_401020:
    // 0x401020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x401020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_401024:
    // 0x401024: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x401024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_401028:
    // 0x401028: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x401028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_40102c:
    // 0x40102c: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x40102cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401030:
    // 0x401030: 0x24847698  addiu       $a0, $a0, 0x7698
    ctx->pc = 0x401030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30360));
label_401034:
    // 0x401034: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x401034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_401038:
    // 0x401038: 0xc0e954c  jal         func_3A5530
label_40103c:
    if (ctx->pc == 0x40103Cu) {
        ctx->pc = 0x40103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401038u;
        // 0x40103c: 0xafa2053c  sw          $v0, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401040u;
        goto label_401040;
    }
    ctx->pc = 0x401038u;
    SET_GPR_U32(ctx, 31, 0x401040u);
    ctx->pc = 0x40103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401038u;
    // 0x40103c: 0xafa2053c  sw          $v0, 0x53C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401038u, 0x401040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401040u;
label_401040:
    // 0x401040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x401040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_401044:
    // 0x401044: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_401048:
    if (ctx->pc == 0x401048u) {
        ctx->pc = 0x401048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401044u;
        // 0x401048: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40104Cu;
        goto label_40104c;
    }
    ctx->pc = 0x401044u;
    {
        const bool branch_taken_0x401044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x401048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401044u;
        // 0x401048: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401044) {
            ctx->pc = 0x401068u;
            goto label_401068;
        }
    }
    ctx->pc = 0x40104Cu;
label_40104c:
    // 0x40104c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x40104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_401050:
    // 0x401050: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x401050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_401054:
    // 0x401054: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x401054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_401058:
    // 0x401058: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x401058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_40105c:
    // 0x40105c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x40105cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_401060:
    // 0x401060: 0x60f809  jalr        $v1
label_401064:
    if (ctx->pc == 0x401064u) {
        ctx->pc = 0x401064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401060u;
        // 0x401064: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401068u;
        goto label_401068;
    }
    ctx->pc = 0x401060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x401068u);
        ctx->pc = 0x401064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401060u;
        // 0x401064: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x401060u, 0x401068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x401068u;
label_401068:
    // 0x401068: 0x8fa30530  lw          $v1, 0x530($sp)
    ctx->pc = 0x401068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_40106c:
    // 0x40106c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x40106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_401070:
    // 0x401070: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x401070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_401074:
    // 0x401074: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x401074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_401078:
    // 0x401078: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x401078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_40107c:
    // 0x40107c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x40107cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_401080:
    // 0x401080: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x401080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_401084:
    // 0x401084: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x401084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_401088:
    // 0x401088: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x401088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_40108c:
    // 0x40108c: 0xc0e8dee  jal         func_3A37B8
label_401090:
    if (ctx->pc == 0x401090u) {
        ctx->pc = 0x401090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40108Cu;
        // 0x401090: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401094u;
        goto label_401094;
    }
    ctx->pc = 0x40108Cu;
    SET_GPR_U32(ctx, 31, 0x401094u);
    ctx->pc = 0x401090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40108Cu;
    // 0x401090: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x40108Cu, 0x401094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401094u;
label_401094:
    // 0x401094: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x401094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_401098:
    // 0x401098: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
label_40109c:
    if (ctx->pc == 0x40109Cu) {
        ctx->pc = 0x4010A0u;
        goto label_4010a0;
    }
    ctx->pc = 0x401098u;
    {
        const bool branch_taken_0x401098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x401098) {
            ctx->pc = 0x401144u;
            goto label_401144;
        }
    }
    ctx->pc = 0x4010A0u;
label_4010a0:
    // 0x4010a0: 0xc0e87c0  jal         func_3A1F00
label_4010a4:
    if (ctx->pc == 0x4010A4u) {
        ctx->pc = 0x4010A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4010A0u;
        // 0x4010a4: 0x8fa40530  lw          $a0, 0x530($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4010A8u;
        goto label_4010a8;
    }
    ctx->pc = 0x4010A0u;
    SET_GPR_U32(ctx, 31, 0x4010A8u);
    ctx->pc = 0x4010A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4010A0u;
    // 0x4010a4: 0x8fa40530  lw          $a0, 0x530($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x4010A0u, 0x4010A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4010A8u;
label_4010a8:
    // 0x4010a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x4010a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_4010ac:
    // 0x4010ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x4010acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4010b0:
    // 0x4010b0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x4010b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4010b4:
    // 0x4010b4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x4010b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4010b8:
    // 0x4010b8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x4010b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4010bc:
    // 0x4010bc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x4010bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_4010c0:
    // 0x4010c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x4010c0u;
    // VWAITQ (Q already resolved in this runtime)
label_4010c4:
    // 0x4010c4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x4010c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_4010c8:
    // 0x4010c8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x4010c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_4010cc:
    // 0x4010cc: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x4010ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
label_4010d0:
    // 0x4010d0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x4010d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_4010d4:
    // 0x4010d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4010d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4010d8:
    // 0x4010d8: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x4010d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_4010dc:
    // 0x4010dc: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x4010dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_4010e0:
    // 0x4010e0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x4010e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4010e4:
    // 0x4010e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4010e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4010e8:
    // 0x4010e8: 0x0  nop
    ctx->pc = 0x4010e8u;
    // NOP
label_4010ec:
    // 0x4010ec: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_4010f0:
    if (ctx->pc == 0x4010F0u) {
        ctx->pc = 0x4010F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4010ECu;
        // 0x4010f0: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4010F4u;
        goto label_4010f4;
    }
    ctx->pc = 0x4010ECu;
    {
        const bool branch_taken_0x4010ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4010F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4010ECu;
        // 0x4010f0: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4010ec) {
            ctx->pc = 0x401144u;
            goto label_401144;
        }
    }
    ctx->pc = 0x4010F4u;
label_4010f4:
    // 0x4010f4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x4010f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_4010f8:
    // 0x4010f8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x4010f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_4010fc:
    // 0x4010fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x4010fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_401100:
    // 0x401100: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x401100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_401104:
    // 0x401104: 0x24851740  addiu       $a1, $a0, 0x1740
    ctx->pc = 0x401104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_401108:
    // 0x401108: 0x3c01bee6  lui         $at, 0xBEE6
    ctx->pc = 0x401108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48870 << 16));
label_40110c:
    // 0x40110c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x40110cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_401110:
    // 0x401110: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x401110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_401114:
    // 0x401114: 0x3c01bf59  lui         $at, 0xBF59
    ctx->pc = 0x401114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48985 << 16));
label_401118:
    // 0x401118: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x401118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_40111c:
    // 0x40111c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x40111cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_401120:
    // 0x401120: 0xc136b24  jal         func_4DAC90
label_401124:
    if (ctx->pc == 0x401124u) {
        ctx->pc = 0x401124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401120u;
        // 0x401124: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401128u;
        goto label_401128;
    }
    ctx->pc = 0x401120u;
    SET_GPR_U32(ctx, 31, 0x401128u);
    ctx->pc = 0x401124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401120u;
    // 0x401124: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x401120u, 0x401128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401128u;
label_401128:
    // 0x401128: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x401128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40112c:
    // 0x40112c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x40112cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_401130:
    // 0x401130: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x401130u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_401134:
    // 0x401134: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x401134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401138:
    // 0x401138: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x401138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_40113c:
    // 0x40113c: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x40113cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_401140:
    // 0x401140: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x401140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_401144:
    // 0x401144: 0x3c02ec1e  lui         $v0, 0xEC1E
    ctx->pc = 0x401144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60446 << 16));
label_401148:
    // 0x401148: 0x344281b2  ori         $v0, $v0, 0x81B2
    ctx->pc = 0x401148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33202);
label_40114c:
    // 0x40114c: 0x17c2009d  bne         $fp, $v0, . + 4 + (0x9D << 2)
label_401150:
    if (ctx->pc == 0x401150u) {
        ctx->pc = 0x401150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40114Cu;
        // 0x401150: 0x27b30090  addiu       $s3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401154u;
        goto label_401154;
    }
    ctx->pc = 0x40114Cu;
    {
        const bool branch_taken_0x40114c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x401150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40114Cu;
        // 0x401150: 0x27b30090  addiu       $s3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40114c) {
            ctx->pc = 0x4013C4u;
            goto label_4013c4;
        }
    }
    ctx->pc = 0x401154u;
label_401154:
    // 0x401154: 0x16800024  bnez        $s4, . + 4 + (0x24 << 2)
label_401158:
    if (ctx->pc == 0x401158u) {
        ctx->pc = 0x401158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401154u;
        // 0x401158: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40115Cu;
        goto label_40115c;
    }
    ctx->pc = 0x401154u;
    {
        const bool branch_taken_0x401154 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x401158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401154u;
        // 0x401158: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401154) {
            ctx->pc = 0x4011E8u;
            goto label_4011e8;
        }
    }
    ctx->pc = 0x40115Cu;
label_40115c:
    // 0x40115c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_401160:
    // 0x401160: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x401160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_401164:
    // 0x401164: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x401164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_401168:
    // 0x401168: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x401168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40116c:
    // 0x40116c: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x40116cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_401170:
    // 0x401170: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x401170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_401174:
    // 0x401174: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x401174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_401178:
    // 0x401178: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x401178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_40117c:
    // 0x40117c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x40117cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_401180:
    // 0x401180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401184:
    // 0x401184: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401184u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_401188:
    // 0x401188: 0x263176b8  addiu       $s1, $s1, 0x76B8
    ctx->pc = 0x401188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30392));
label_40118c:
    // 0x40118c: 0xc0cd518  jal         func_335460
label_401190:
    if (ctx->pc == 0x401190u) {
        ctx->pc = 0x401190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40118Cu;
        // 0x401190: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401194u;
        goto label_401194;
    }
    ctx->pc = 0x40118Cu;
    SET_GPR_U32(ctx, 31, 0x401194u);
    ctx->pc = 0x401190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40118Cu;
    // 0x401190: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40118Cu, 0x401194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401194u;
label_401194:
    // 0x401194: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401194u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_401198:
    // 0x401198: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x401198u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_40119c:
    // 0x40119c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40119cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4011a0:
    // 0x4011a0: 0xc0cd518  jal         func_335460
label_4011a4:
    if (ctx->pc == 0x4011A4u) {
        ctx->pc = 0x4011A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4011A0u;
        // 0x4011a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4011A8u;
        goto label_4011a8;
    }
    ctx->pc = 0x4011A0u;
    SET_GPR_U32(ctx, 31, 0x4011A8u);
    ctx->pc = 0x4011A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4011A0u;
    // 0x4011a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4011A0u, 0x4011A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4011A8u;
label_4011a8:
    // 0x4011a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4011a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4011ac:
    // 0x4011ac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4011acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4011b0:
    // 0x4011b0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4011b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4011b4:
    // 0x4011b4: 0xc0cd518  jal         func_335460
label_4011b8:
    if (ctx->pc == 0x4011B8u) {
        ctx->pc = 0x4011B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4011B4u;
        // 0x4011b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4011BCu;
        goto label_4011bc;
    }
    ctx->pc = 0x4011B4u;
    SET_GPR_U32(ctx, 31, 0x4011BCu);
    ctx->pc = 0x4011B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4011B4u;
    // 0x4011b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4011B4u, 0x4011BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4011BCu;
label_4011bc:
    // 0x4011bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4011bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4011c0:
    // 0x4011c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4011c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4011c4:
    // 0x4011c4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4011c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4011c8:
    // 0x4011c8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4011c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4011cc:
    // 0x4011cc: 0xc0cd55c  jal         func_335570
label_4011d0:
    if (ctx->pc == 0x4011D0u) {
        ctx->pc = 0x4011D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4011CCu;
        // 0x4011d0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4011D4u;
        goto label_4011d4;
    }
    ctx->pc = 0x4011CCu;
    SET_GPR_U32(ctx, 31, 0x4011D4u);
    ctx->pc = 0x4011D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4011CCu;
    // 0x4011d0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4011CCu, 0x4011D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4011D4u;
label_4011d4:
    // 0x4011d4: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x4011d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4011d8:
    // 0x4011d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4011d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4011dc:
    // 0x4011dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4011dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4011e0:
    // 0x4011e0: 0xc0e954c  jal         func_3A5530
label_4011e4:
    if (ctx->pc == 0x4011E4u) {
        ctx->pc = 0x4011E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4011E0u;
        // 0x4011e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4011E8u;
        goto label_4011e8;
    }
    ctx->pc = 0x4011E0u;
    SET_GPR_U32(ctx, 31, 0x4011E8u);
    ctx->pc = 0x4011E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4011E0u;
    // 0x4011e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x4011E0u, 0x4011E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4011E8u;
label_4011e8:
    // 0x4011e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4011e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4011ec:
    // 0x4011ec: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x4011ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_4011f0:
    // 0x4011f0: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x4011f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_4011f4:
    // 0x4011f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4011f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4011f8:
    // 0x4011f8: 0x3c01bf54  lui         $at, 0xBF54
    ctx->pc = 0x4011f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48980 << 16));
label_4011fc:
    // 0x4011fc: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x4011fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_401200:
    // 0x401200: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x401200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_401204:
    // 0x401204: 0x2470b8b8  addiu       $s0, $v1, -0x4748
    ctx->pc = 0x401204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_401208:
    // 0x401208: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x401208u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_40120c:
    // 0x40120c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40120cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401210:
    // 0x401210: 0x263176c8  addiu       $s1, $s1, 0x76C8
    ctx->pc = 0x401210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30408));
label_401214:
    // 0x401214: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401214u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401218:
    // 0x401218: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x401218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_40121c:
    // 0x40121c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x40121cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_401220:
    // 0x401220: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x401220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_401224:
    // 0x401224: 0xc0cd518  jal         func_335460
label_401228:
    if (ctx->pc == 0x401228u) {
        ctx->pc = 0x401228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401224u;
        // 0x401228: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40122Cu;
        goto label_40122c;
    }
    ctx->pc = 0x401224u;
    SET_GPR_U32(ctx, 31, 0x40122Cu);
    ctx->pc = 0x401228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401224u;
    // 0x401228: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401224u, 0x40122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40122Cu;
label_40122c:
    // 0x40122c: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x40122cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_401230:
    // 0x401230: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x401230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_401234:
    // 0x401234: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x401234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_401238:
    // 0x401238: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401238u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_40123c:
    // 0x40123c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x40123cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_401240:
    // 0x401240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401244:
    // 0x401244: 0xc0cd518  jal         func_335460
label_401248:
    if (ctx->pc == 0x401248u) {
        ctx->pc = 0x401248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401244u;
        // 0x401248: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40124Cu;
        goto label_40124c;
    }
    ctx->pc = 0x401244u;
    SET_GPR_U32(ctx, 31, 0x40124Cu);
    ctx->pc = 0x401248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401244u;
    // 0x401248: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401244u, 0x40124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40124Cu;
label_40124c:
    // 0x40124c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x40124cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401250:
    // 0x401250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401254:
    // 0x401254: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x401254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_401258:
    // 0x401258: 0xc0cd518  jal         func_335460
label_40125c:
    if (ctx->pc == 0x40125Cu) {
        ctx->pc = 0x40125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401258u;
        // 0x40125c: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401260u;
        goto label_401260;
    }
    ctx->pc = 0x401258u;
    SET_GPR_U32(ctx, 31, 0x401260u);
    ctx->pc = 0x40125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401258u;
    // 0x40125c: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401258u, 0x401260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401260u;
label_401260:
    // 0x401260: 0xafa0053c  sw          $zero, 0x53C($sp)
    ctx->pc = 0x401260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 0));
label_401264:
    // 0x401264: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x401264u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_401268:
    // 0x401268: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401268u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_40126c:
    // 0x40126c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x40126cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401270:
    // 0x401270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401274:
    // 0x401274: 0xc0cd55c  jal         func_335570
label_401278:
    if (ctx->pc == 0x401278u) {
        ctx->pc = 0x401278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401274u;
        // 0x401278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40127Cu;
        goto label_40127c;
    }
    ctx->pc = 0x401274u;
    SET_GPR_U32(ctx, 31, 0x40127Cu);
    ctx->pc = 0x401278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401274u;
    // 0x401278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401274u, 0x40127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40127Cu;
label_40127c:
    // 0x40127c: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x40127cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401280:
    // 0x401280: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x401280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_401284:
    // 0x401284: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401288:
    // 0x401288: 0xc0e954c  jal         func_3A5530
label_40128c:
    if (ctx->pc == 0x40128Cu) {
        ctx->pc = 0x40128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401288u;
        // 0x40128c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401290u;
        goto label_401290;
    }
    ctx->pc = 0x401288u;
    SET_GPR_U32(ctx, 31, 0x401290u);
    ctx->pc = 0x40128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401288u;
    // 0x40128c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401288u, 0x401290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401290u;
label_401290:
    // 0x401290: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401290u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401294:
    // 0x401294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401298:
    // 0x401298: 0xc0cd518  jal         func_335460
label_40129c:
    if (ctx->pc == 0x40129Cu) {
        ctx->pc = 0x40129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401298u;
        // 0x40129c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4012A0u;
        goto label_4012a0;
    }
    ctx->pc = 0x401298u;
    SET_GPR_U32(ctx, 31, 0x4012A0u);
    ctx->pc = 0x40129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401298u;
    // 0x40129c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401298u, 0x4012A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4012A0u;
label_4012a0:
    // 0x4012a0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x4012a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_4012a4:
    // 0x4012a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4012a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4012a8:
    // 0x4012a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4012a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4012ac:
    // 0x4012ac: 0xc0cd518  jal         func_335460
label_4012b0:
    if (ctx->pc == 0x4012B0u) {
        ctx->pc = 0x4012B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4012ACu;
        // 0x4012b0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4012B4u;
        goto label_4012b4;
    }
    ctx->pc = 0x4012ACu;
    SET_GPR_U32(ctx, 31, 0x4012B4u);
    ctx->pc = 0x4012B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4012ACu;
    // 0x4012b0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4012ACu, 0x4012B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4012B4u;
label_4012b4:
    // 0x4012b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4012b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4012b8:
    // 0x4012b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4012b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4012bc:
    // 0x4012bc: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x4012bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_4012c0:
    // 0x4012c0: 0xc0cd518  jal         func_335460
label_4012c4:
    if (ctx->pc == 0x4012C4u) {
        ctx->pc = 0x4012C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4012C0u;
        // 0x4012c4: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4012C8u;
        goto label_4012c8;
    }
    ctx->pc = 0x4012C0u;
    SET_GPR_U32(ctx, 31, 0x4012C8u);
    ctx->pc = 0x4012C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4012C0u;
    // 0x4012c4: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4012C0u, 0x4012C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4012C8u;
label_4012c8:
    // 0x4012c8: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x4012c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_4012cc:
    // 0x4012cc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4012ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4012d0:
    // 0x4012d0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4012d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4012d4:
    // 0x4012d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4012d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4012d8:
    // 0x4012d8: 0xc0cd55c  jal         func_335570
label_4012dc:
    if (ctx->pc == 0x4012DCu) {
        ctx->pc = 0x4012DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4012D8u;
        // 0x4012dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4012E0u;
        goto label_4012e0;
    }
    ctx->pc = 0x4012D8u;
    SET_GPR_U32(ctx, 31, 0x4012E0u);
    ctx->pc = 0x4012DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4012D8u;
    // 0x4012dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4012D8u, 0x4012E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4012E0u;
label_4012e0:
    // 0x4012e0: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x4012e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4012e4:
    // 0x4012e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4012e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4012e8:
    // 0x4012e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4012e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4012ec:
    // 0x4012ec: 0xc0e954c  jal         func_3A5530
label_4012f0:
    if (ctx->pc == 0x4012F0u) {
        ctx->pc = 0x4012F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4012ECu;
        // 0x4012f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4012F4u;
        goto label_4012f4;
    }
    ctx->pc = 0x4012ECu;
    SET_GPR_U32(ctx, 31, 0x4012F4u);
    ctx->pc = 0x4012F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4012ECu;
    // 0x4012f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x4012ECu, 0x4012F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4012F4u;
label_4012f4:
    // 0x4012f4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x4012f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_4012f8:
    // 0x4012f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4012f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4012fc:
    // 0x4012fc: 0x263176d8  addiu       $s1, $s1, 0x76D8
    ctx->pc = 0x4012fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30424));
label_401300:
    // 0x401300: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x401300u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_401304:
    // 0x401304: 0xc0cd518  jal         func_335460
label_401308:
    if (ctx->pc == 0x401308u) {
        ctx->pc = 0x401308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401304u;
        // 0x401308: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40130Cu;
        goto label_40130c;
    }
    ctx->pc = 0x401304u;
    SET_GPR_U32(ctx, 31, 0x40130Cu);
    ctx->pc = 0x401308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401304u;
    // 0x401308: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401304u, 0x40130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40130Cu;
label_40130c:
    // 0x40130c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x40130cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401310:
    // 0x401310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401314:
    // 0x401314: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x401314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_401318:
    // 0x401318: 0xc0cd518  jal         func_335460
label_40131c:
    if (ctx->pc == 0x40131Cu) {
        ctx->pc = 0x40131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401318u;
        // 0x40131c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401320u;
        goto label_401320;
    }
    ctx->pc = 0x401318u;
    SET_GPR_U32(ctx, 31, 0x401320u);
    ctx->pc = 0x40131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401318u;
    // 0x40131c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401318u, 0x401320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401320u;
label_401320:
    // 0x401320: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x401320u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_401324:
    // 0x401324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401328:
    // 0x401328: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x401328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_40132c:
    // 0x40132c: 0xc0cd518  jal         func_335460
label_401330:
    if (ctx->pc == 0x401330u) {
        ctx->pc = 0x401330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40132Cu;
        // 0x401330: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401334u;
        goto label_401334;
    }
    ctx->pc = 0x40132Cu;
    SET_GPR_U32(ctx, 31, 0x401334u);
    ctx->pc = 0x401330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40132Cu;
    // 0x401330: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40132Cu, 0x401334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401334u;
label_401334:
    // 0x401334: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x401334u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_401338:
    // 0x401338: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x401338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_40133c:
    // 0x40133c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40133cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_401340:
    // 0x401340: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401344:
    // 0x401344: 0xc0cd55c  jal         func_335570
label_401348:
    if (ctx->pc == 0x401348u) {
        ctx->pc = 0x401348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401344u;
        // 0x401348: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40134Cu;
        goto label_40134c;
    }
    ctx->pc = 0x401344u;
    SET_GPR_U32(ctx, 31, 0x40134Cu);
    ctx->pc = 0x401348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401344u;
    // 0x401348: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401344u, 0x40134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40134Cu;
label_40134c:
    // 0x40134c: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x40134cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401350:
    // 0x401350: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x401350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_401354:
    // 0x401354: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401358:
    // 0x401358: 0xc0e954c  jal         func_3A5530
label_40135c:
    if (ctx->pc == 0x40135Cu) {
        ctx->pc = 0x40135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401358u;
        // 0x40135c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401360u;
        goto label_401360;
    }
    ctx->pc = 0x401358u;
    SET_GPR_U32(ctx, 31, 0x401360u);
    ctx->pc = 0x40135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401358u;
    // 0x40135c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401358u, 0x401360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401360u;
label_401360:
    // 0x401360: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x401360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_401364:
    // 0x401364: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x401364u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_401368:
    // 0x401368: 0xc0cd518  jal         func_335460
label_40136c:
    if (ctx->pc == 0x40136Cu) {
        ctx->pc = 0x40136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401368u;
        // 0x40136c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401370u;
        goto label_401370;
    }
    ctx->pc = 0x401368u;
    SET_GPR_U32(ctx, 31, 0x401370u);
    ctx->pc = 0x40136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401368u;
    // 0x40136c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401368u, 0x401370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401370u;
label_401370:
    // 0x401370: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x401370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_401374:
    // 0x401374: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x401374u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401378:
    // 0x401378: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x401378u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_40137c:
    // 0x40137c: 0xc0cd518  jal         func_335460
label_401380:
    if (ctx->pc == 0x401380u) {
        ctx->pc = 0x401380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40137Cu;
        // 0x401380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401384u;
        goto label_401384;
    }
    ctx->pc = 0x40137Cu;
    SET_GPR_U32(ctx, 31, 0x401384u);
    ctx->pc = 0x401380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40137Cu;
    // 0x401380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40137Cu, 0x401384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401384u;
label_401384:
    // 0x401384: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x401384u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_401388:
    // 0x401388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40138c:
    // 0x40138c: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x40138cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_401390:
    // 0x401390: 0xc0cd518  jal         func_335460
label_401394:
    if (ctx->pc == 0x401394u) {
        ctx->pc = 0x401394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401390u;
        // 0x401394: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401398u;
        goto label_401398;
    }
    ctx->pc = 0x401390u;
    SET_GPR_U32(ctx, 31, 0x401398u);
    ctx->pc = 0x401394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401390u;
    // 0x401394: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401390u, 0x401398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401398u;
label_401398:
    // 0x401398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40139c:
    // 0x40139c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40139cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4013a0:
    // 0x4013a0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4013a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4013a4:
    // 0x4013a4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4013a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4013a8:
    // 0x4013a8: 0xc0cd55c  jal         func_335570
label_4013ac:
    if (ctx->pc == 0x4013ACu) {
        ctx->pc = 0x4013ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4013A8u;
        // 0x4013ac: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4013B0u;
        goto label_4013b0;
    }
    ctx->pc = 0x4013A8u;
    SET_GPR_U32(ctx, 31, 0x4013B0u);
    ctx->pc = 0x4013ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4013A8u;
    // 0x4013ac: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4013A8u, 0x4013B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4013B0u;
label_4013b0:
    // 0x4013b0: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x4013b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4013b4:
    // 0x4013b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4013b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4013b8:
    // 0x4013b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4013b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4013bc:
    // 0x4013bc: 0xc0e954c  jal         func_3A5530
label_4013c0:
    if (ctx->pc == 0x4013C0u) {
        ctx->pc = 0x4013C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4013BCu;
        // 0x4013c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4013C4u;
        goto label_4013c4;
    }
    ctx->pc = 0x4013BCu;
    SET_GPR_U32(ctx, 31, 0x4013C4u);
    ctx->pc = 0x4013C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4013BCu;
    // 0x4013c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x4013BCu, 0x4013C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4013C4u;
label_4013c4:
    // 0x4013c4: 0x3c0295c2  lui         $v0, 0x95C2
    ctx->pc = 0x4013c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38338 << 16));
label_4013c8:
    // 0x4013c8: 0x34423916  ori         $v0, $v0, 0x3916
    ctx->pc = 0x4013c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14614);
label_4013cc:
    // 0x4013cc: 0x17c2009d  bne         $fp, $v0, . + 4 + (0x9D << 2)
label_4013d0:
    if (ctx->pc == 0x4013D0u) {
        ctx->pc = 0x4013D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4013CCu;
        // 0x4013d0: 0x27b30090  addiu       $s3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4013D4u;
        goto label_4013d4;
    }
    ctx->pc = 0x4013CCu;
    {
        const bool branch_taken_0x4013cc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x4013D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4013CCu;
        // 0x4013d0: 0x27b30090  addiu       $s3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4013cc) {
            ctx->pc = 0x401644u;
            goto label_401644;
        }
    }
    ctx->pc = 0x4013D4u;
label_4013d4:
    // 0x4013d4: 0x16800024  bnez        $s4, . + 4 + (0x24 << 2)
label_4013d8:
    if (ctx->pc == 0x4013D8u) {
        ctx->pc = 0x4013D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4013D4u;
        // 0x4013d8: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4013DCu;
        goto label_4013dc;
    }
    ctx->pc = 0x4013D4u;
    {
        const bool branch_taken_0x4013d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4013D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4013D4u;
        // 0x4013d8: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4013d4) {
            ctx->pc = 0x401468u;
            goto label_401468;
        }
    }
    ctx->pc = 0x4013DCu;
label_4013dc:
    // 0x4013dc: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x4013dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_4013e0:
    // 0x4013e0: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x4013e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4013e4:
    // 0x4013e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4013e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4013e8:
    // 0x4013e8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4013e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4013ec:
    // 0x4013ec: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x4013ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_4013f0:
    // 0x4013f0: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x4013f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4013f4:
    // 0x4013f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4013f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4013f8:
    // 0x4013f8: 0x2490b8b8  addiu       $s0, $a0, -0x4748
    ctx->pc = 0x4013f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_4013fc:
    // 0x4013fc: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x4013fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_401400:
    // 0x401400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401404:
    // 0x401404: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401404u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_401408:
    // 0x401408: 0x263176e8  addiu       $s1, $s1, 0x76E8
    ctx->pc = 0x401408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30440));
label_40140c:
    // 0x40140c: 0xc0cd518  jal         func_335460
label_401410:
    if (ctx->pc == 0x401410u) {
        ctx->pc = 0x401410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40140Cu;
        // 0x401410: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401414u;
        goto label_401414;
    }
    ctx->pc = 0x40140Cu;
    SET_GPR_U32(ctx, 31, 0x401414u);
    ctx->pc = 0x401410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40140Cu;
    // 0x401410: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40140Cu, 0x401414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401414u;
label_401414:
    // 0x401414: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401414u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_401418:
    // 0x401418: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x401418u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_40141c:
    // 0x40141c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40141cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401420:
    // 0x401420: 0xc0cd518  jal         func_335460
label_401424:
    if (ctx->pc == 0x401424u) {
        ctx->pc = 0x401424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401420u;
        // 0x401424: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401428u;
        goto label_401428;
    }
    ctx->pc = 0x401420u;
    SET_GPR_U32(ctx, 31, 0x401428u);
    ctx->pc = 0x401424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401420u;
    // 0x401424: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401420u, 0x401428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401428u;
label_401428:
    // 0x401428: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x401428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40142c:
    // 0x40142c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x40142cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_401430:
    // 0x401430: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x401430u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_401434:
    // 0x401434: 0xc0cd518  jal         func_335460
label_401438:
    if (ctx->pc == 0x401438u) {
        ctx->pc = 0x401438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401434u;
        // 0x401438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40143Cu;
        goto label_40143c;
    }
    ctx->pc = 0x401434u;
    SET_GPR_U32(ctx, 31, 0x40143Cu);
    ctx->pc = 0x401438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401434u;
    // 0x401438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401434u, 0x40143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40143Cu;
label_40143c:
    // 0x40143c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40143cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401440:
    // 0x401440: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401444:
    // 0x401444: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x401444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_401448:
    // 0x401448: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401448u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_40144c:
    // 0x40144c: 0xc0cd55c  jal         func_335570
label_401450:
    if (ctx->pc == 0x401450u) {
        ctx->pc = 0x401450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40144Cu;
        // 0x401450: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401454u;
        goto label_401454;
    }
    ctx->pc = 0x40144Cu;
    SET_GPR_U32(ctx, 31, 0x401454u);
    ctx->pc = 0x401450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40144Cu;
    // 0x401450: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x40144Cu, 0x401454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401454u;
label_401454:
    // 0x401454: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x401454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401458:
    // 0x401458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40145c:
    // 0x40145c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40145cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401460:
    // 0x401460: 0xc0e954c  jal         func_3A5530
label_401464:
    if (ctx->pc == 0x401464u) {
        ctx->pc = 0x401464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401460u;
        // 0x401464: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401468u;
        goto label_401468;
    }
    ctx->pc = 0x401460u;
    SET_GPR_U32(ctx, 31, 0x401468u);
    ctx->pc = 0x401464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401460u;
    // 0x401464: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401460u, 0x401468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401468u;
label_401468:
    // 0x401468: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x401468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_40146c:
    // 0x40146c: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x40146cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_401470:
    // 0x401470: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x401470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_401474:
    // 0x401474: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x401474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_401478:
    // 0x401478: 0x3c01bf54  lui         $at, 0xBF54
    ctx->pc = 0x401478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48980 << 16));
label_40147c:
    // 0x40147c: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x40147cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_401480:
    // 0x401480: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x401480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_401484:
    // 0x401484: 0x24b0b8b8  addiu       $s0, $a1, -0x4748
    ctx->pc = 0x401484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949048));
label_401488:
    // 0x401488: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x401488u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_40148c:
    // 0x40148c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401490:
    // 0x401490: 0x263176f8  addiu       $s1, $s1, 0x76F8
    ctx->pc = 0x401490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30456));
label_401494:
    // 0x401494: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401498:
    // 0x401498: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x401498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_40149c:
    // 0x40149c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x40149cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4014a0:
    // 0x4014a0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x4014a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_4014a4:
    // 0x4014a4: 0xc0cd518  jal         func_335460
label_4014a8:
    if (ctx->pc == 0x4014A8u) {
        ctx->pc = 0x4014A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4014A4u;
        // 0x4014a8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4014ACu;
        goto label_4014ac;
    }
    ctx->pc = 0x4014A4u;
    SET_GPR_U32(ctx, 31, 0x4014ACu);
    ctx->pc = 0x4014A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4014A4u;
    // 0x4014a8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4014A4u, 0x4014ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4014ACu;
label_4014ac:
    // 0x4014ac: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x4014acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_4014b0:
    // 0x4014b0: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x4014b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4014b4:
    // 0x4014b4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x4014b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_4014b8:
    // 0x4014b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4014b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4014bc:
    // 0x4014bc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x4014bcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_4014c0:
    // 0x4014c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4014c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4014c4:
    // 0x4014c4: 0xc0cd518  jal         func_335460
label_4014c8:
    if (ctx->pc == 0x4014C8u) {
        ctx->pc = 0x4014C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4014C4u;
        // 0x4014c8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4014CCu;
        goto label_4014cc;
    }
    ctx->pc = 0x4014C4u;
    SET_GPR_U32(ctx, 31, 0x4014CCu);
    ctx->pc = 0x4014C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4014C4u;
    // 0x4014c8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4014C4u, 0x4014CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4014CCu;
label_4014cc:
    // 0x4014cc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x4014ccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_4014d0:
    // 0x4014d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4014d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4014d4:
    // 0x4014d4: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x4014d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_4014d8:
    // 0x4014d8: 0xc0cd518  jal         func_335460
label_4014dc:
    if (ctx->pc == 0x4014DCu) {
        ctx->pc = 0x4014DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4014D8u;
        // 0x4014dc: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4014E0u;
        goto label_4014e0;
    }
    ctx->pc = 0x4014D8u;
    SET_GPR_U32(ctx, 31, 0x4014E0u);
    ctx->pc = 0x4014DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4014D8u;
    // 0x4014dc: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4014D8u, 0x4014E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4014E0u;
label_4014e0:
    // 0x4014e0: 0xafa0053c  sw          $zero, 0x53C($sp)
    ctx->pc = 0x4014e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 0));
label_4014e4:
    // 0x4014e4: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x4014e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_4014e8:
    // 0x4014e8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4014e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_4014ec:
    // 0x4014ec: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4014ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4014f0:
    // 0x4014f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4014f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4014f4:
    // 0x4014f4: 0xc0cd55c  jal         func_335570
label_4014f8:
    if (ctx->pc == 0x4014F8u) {
        ctx->pc = 0x4014F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4014F4u;
        // 0x4014f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4014FCu;
        goto label_4014fc;
    }
    ctx->pc = 0x4014F4u;
    SET_GPR_U32(ctx, 31, 0x4014FCu);
    ctx->pc = 0x4014F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4014F4u;
    // 0x4014f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4014F4u, 0x4014FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4014FCu;
label_4014fc:
    // 0x4014fc: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x4014fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401500:
    // 0x401500: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x401500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_401504:
    // 0x401504: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401508:
    // 0x401508: 0xc0e954c  jal         func_3A5530
label_40150c:
    if (ctx->pc == 0x40150Cu) {
        ctx->pc = 0x40150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401508u;
        // 0x40150c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401510u;
        goto label_401510;
    }
    ctx->pc = 0x401508u;
    SET_GPR_U32(ctx, 31, 0x401510u);
    ctx->pc = 0x40150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401508u;
    // 0x40150c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401508u, 0x401510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401510u;
label_401510:
    // 0x401510: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401514:
    // 0x401514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401518:
    // 0x401518: 0xc0cd518  jal         func_335460
label_40151c:
    if (ctx->pc == 0x40151Cu) {
        ctx->pc = 0x40151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401518u;
        // 0x40151c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401520u;
        goto label_401520;
    }
    ctx->pc = 0x401518u;
    SET_GPR_U32(ctx, 31, 0x401520u);
    ctx->pc = 0x40151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401518u;
    // 0x40151c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401518u, 0x401520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401520u;
label_401520:
    // 0x401520: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x401520u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401524:
    // 0x401524: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401524u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401528:
    // 0x401528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40152c:
    // 0x40152c: 0xc0cd518  jal         func_335460
label_401530:
    if (ctx->pc == 0x401530u) {
        ctx->pc = 0x401530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40152Cu;
        // 0x401530: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401534u;
        goto label_401534;
    }
    ctx->pc = 0x40152Cu;
    SET_GPR_U32(ctx, 31, 0x401534u);
    ctx->pc = 0x401530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40152Cu;
    // 0x401530: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40152Cu, 0x401534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401534u;
label_401534:
    // 0x401534: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x401534u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_401538:
    // 0x401538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40153c:
    // 0x40153c: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x40153cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_401540:
    // 0x401540: 0xc0cd518  jal         func_335460
label_401544:
    if (ctx->pc == 0x401544u) {
        ctx->pc = 0x401544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401540u;
        // 0x401544: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401548u;
        goto label_401548;
    }
    ctx->pc = 0x401540u;
    SET_GPR_U32(ctx, 31, 0x401548u);
    ctx->pc = 0x401544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401540u;
    // 0x401544: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401540u, 0x401548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401548u;
label_401548:
    // 0x401548: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x401548u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_40154c:
    // 0x40154c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x40154cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_401550:
    // 0x401550: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x401550u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_401554:
    // 0x401554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401558:
    // 0x401558: 0xc0cd55c  jal         func_335570
label_40155c:
    if (ctx->pc == 0x40155Cu) {
        ctx->pc = 0x40155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401558u;
        // 0x40155c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401560u;
        goto label_401560;
    }
    ctx->pc = 0x401558u;
    SET_GPR_U32(ctx, 31, 0x401560u);
    ctx->pc = 0x40155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401558u;
    // 0x40155c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401558u, 0x401560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401560u;
label_401560:
    // 0x401560: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x401560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401564:
    // 0x401564: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x401564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_401568:
    // 0x401568: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40156c:
    // 0x40156c: 0xc0e954c  jal         func_3A5530
label_401570:
    if (ctx->pc == 0x401570u) {
        ctx->pc = 0x401570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40156Cu;
        // 0x401570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401574u;
        goto label_401574;
    }
    ctx->pc = 0x40156Cu;
    SET_GPR_U32(ctx, 31, 0x401574u);
    ctx->pc = 0x401570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40156Cu;
    // 0x401570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x40156Cu, 0x401574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401574u;
label_401574:
    // 0x401574: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x401574u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_401578:
    // 0x401578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40157c:
    // 0x40157c: 0x26317708  addiu       $s1, $s1, 0x7708
    ctx->pc = 0x40157cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30472));
label_401580:
    // 0x401580: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x401580u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_401584:
    // 0x401584: 0xc0cd518  jal         func_335460
label_401588:
    if (ctx->pc == 0x401588u) {
        ctx->pc = 0x401588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401584u;
        // 0x401588: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40158Cu;
        goto label_40158c;
    }
    ctx->pc = 0x401584u;
    SET_GPR_U32(ctx, 31, 0x40158Cu);
    ctx->pc = 0x401588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401584u;
    // 0x401588: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401584u, 0x40158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40158Cu;
label_40158c:
    // 0x40158c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x40158cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401590:
    // 0x401590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401594:
    // 0x401594: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x401594u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_401598:
    // 0x401598: 0xc0cd518  jal         func_335460
label_40159c:
    if (ctx->pc == 0x40159Cu) {
        ctx->pc = 0x40159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401598u;
        // 0x40159c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4015A0u;
        goto label_4015a0;
    }
    ctx->pc = 0x401598u;
    SET_GPR_U32(ctx, 31, 0x4015A0u);
    ctx->pc = 0x40159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401598u;
    // 0x40159c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401598u, 0x4015A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4015A0u;
label_4015a0:
    // 0x4015a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4015a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4015a4:
    // 0x4015a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4015a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4015a8:
    // 0x4015a8: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x4015a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_4015ac:
    // 0x4015ac: 0xc0cd518  jal         func_335460
label_4015b0:
    if (ctx->pc == 0x4015B0u) {
        ctx->pc = 0x4015B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4015ACu;
        // 0x4015b0: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4015B4u;
        goto label_4015b4;
    }
    ctx->pc = 0x4015ACu;
    SET_GPR_U32(ctx, 31, 0x4015B4u);
    ctx->pc = 0x4015B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4015ACu;
    // 0x4015b0: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4015ACu, 0x4015B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4015B4u;
label_4015b4:
    // 0x4015b4: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x4015b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_4015b8:
    // 0x4015b8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4015b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4015bc:
    // 0x4015bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4015bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4015c0:
    // 0x4015c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4015c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4015c4:
    // 0x4015c4: 0xc0cd55c  jal         func_335570
label_4015c8:
    if (ctx->pc == 0x4015C8u) {
        ctx->pc = 0x4015C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4015C4u;
        // 0x4015c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4015CCu;
        goto label_4015cc;
    }
    ctx->pc = 0x4015C4u;
    SET_GPR_U32(ctx, 31, 0x4015CCu);
    ctx->pc = 0x4015C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4015C4u;
    // 0x4015c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4015C4u, 0x4015CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4015CCu;
label_4015cc:
    // 0x4015cc: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x4015ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4015d0:
    // 0x4015d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4015d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4015d4:
    // 0x4015d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4015d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4015d8:
    // 0x4015d8: 0xc0e954c  jal         func_3A5530
label_4015dc:
    if (ctx->pc == 0x4015DCu) {
        ctx->pc = 0x4015DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4015D8u;
        // 0x4015dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4015E0u;
        goto label_4015e0;
    }
    ctx->pc = 0x4015D8u;
    SET_GPR_U32(ctx, 31, 0x4015E0u);
    ctx->pc = 0x4015DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4015D8u;
    // 0x4015dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x4015D8u, 0x4015E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4015E0u;
label_4015e0:
    // 0x4015e0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x4015e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_4015e4:
    // 0x4015e4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x4015e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_4015e8:
    // 0x4015e8: 0xc0cd518  jal         func_335460
label_4015ec:
    if (ctx->pc == 0x4015ECu) {
        ctx->pc = 0x4015ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4015E8u;
        // 0x4015ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4015F0u;
        goto label_4015f0;
    }
    ctx->pc = 0x4015E8u;
    SET_GPR_U32(ctx, 31, 0x4015F0u);
    ctx->pc = 0x4015ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4015E8u;
    // 0x4015ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4015E8u, 0x4015F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4015F0u;
label_4015f0:
    // 0x4015f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4015f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4015f4:
    // 0x4015f4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x4015f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_4015f8:
    // 0x4015f8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4015f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4015fc:
    // 0x4015fc: 0xc0cd518  jal         func_335460
label_401600:
    if (ctx->pc == 0x401600u) {
        ctx->pc = 0x401600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4015FCu;
        // 0x401600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401604u;
        goto label_401604;
    }
    ctx->pc = 0x4015FCu;
    SET_GPR_U32(ctx, 31, 0x401604u);
    ctx->pc = 0x401600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4015FCu;
    // 0x401600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4015FCu, 0x401604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401604u;
label_401604:
    // 0x401604: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x401604u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_401608:
    // 0x401608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40160c:
    // 0x40160c: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x40160cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_401610:
    // 0x401610: 0xc0cd518  jal         func_335460
label_401614:
    if (ctx->pc == 0x401614u) {
        ctx->pc = 0x401614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401610u;
        // 0x401614: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401618u;
        goto label_401618;
    }
    ctx->pc = 0x401610u;
    SET_GPR_U32(ctx, 31, 0x401618u);
    ctx->pc = 0x401614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401610u;
    // 0x401614: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401610u, 0x401618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401618u;
label_401618:
    // 0x401618: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40161c:
    // 0x40161c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40161cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401620:
    // 0x401620: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x401620u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_401624:
    // 0x401624: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x401624u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_401628:
    // 0x401628: 0xc0cd55c  jal         func_335570
label_40162c:
    if (ctx->pc == 0x40162Cu) {
        ctx->pc = 0x40162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401628u;
        // 0x40162c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401630u;
        goto label_401630;
    }
    ctx->pc = 0x401628u;
    SET_GPR_U32(ctx, 31, 0x401630u);
    ctx->pc = 0x40162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401628u;
    // 0x40162c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401628u, 0x401630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401630u;
label_401630:
    // 0x401630: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x401630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401634:
    // 0x401634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_401638:
    // 0x401638: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40163c:
    // 0x40163c: 0xc0e954c  jal         func_3A5530
label_401640:
    if (ctx->pc == 0x401640u) {
        ctx->pc = 0x401640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40163Cu;
        // 0x401640: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401644u;
        goto label_401644;
    }
    ctx->pc = 0x40163Cu;
    SET_GPR_U32(ctx, 31, 0x401644u);
    ctx->pc = 0x401640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40163Cu;
    // 0x401640: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x40163Cu, 0x401644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401644u;
label_401644:
    // 0x401644: 0x3c0286ae  lui         $v0, 0x86AE
    ctx->pc = 0x401644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34478 << 16));
label_401648:
    // 0x401648: 0x3442a140  ori         $v0, $v0, 0xA140
    ctx->pc = 0x401648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41280);
label_40164c:
    // 0x40164c: 0x17c2009d  bne         $fp, $v0, . + 4 + (0x9D << 2)
label_401650:
    if (ctx->pc == 0x401650u) {
        ctx->pc = 0x401650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40164Cu;
        // 0x401650: 0x27b30090  addiu       $s3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401654u;
        goto label_401654;
    }
    ctx->pc = 0x40164Cu;
    {
        const bool branch_taken_0x40164c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x401650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40164Cu;
        // 0x401650: 0x27b30090  addiu       $s3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40164c) {
            ctx->pc = 0x4018C4u;
            goto label_4018c4;
        }
    }
    ctx->pc = 0x401654u;
label_401654:
    // 0x401654: 0x16800024  bnez        $s4, . + 4 + (0x24 << 2)
label_401658:
    if (ctx->pc == 0x401658u) {
        ctx->pc = 0x401658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401654u;
        // 0x401658: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40165Cu;
        goto label_40165c;
    }
    ctx->pc = 0x401654u;
    {
        const bool branch_taken_0x401654 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x401658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401654u;
        // 0x401658: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401654) {
            ctx->pc = 0x4016E8u;
            goto label_4016e8;
        }
    }
    ctx->pc = 0x40165Cu;
label_40165c:
    // 0x40165c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40165cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_401660:
    // 0x401660: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x401660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_401664:
    // 0x401664: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x401664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_401668:
    // 0x401668: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x401668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40166c:
    // 0x40166c: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x40166cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_401670:
    // 0x401670: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x401670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_401674:
    // 0x401674: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x401674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_401678:
    // 0x401678: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x401678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_40167c:
    // 0x40167c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x40167cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_401680:
    // 0x401680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401684:
    // 0x401684: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401684u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_401688:
    // 0x401688: 0x26317718  addiu       $s1, $s1, 0x7718
    ctx->pc = 0x401688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30488));
label_40168c:
    // 0x40168c: 0xc0cd518  jal         func_335460
label_401690:
    if (ctx->pc == 0x401690u) {
        ctx->pc = 0x401690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40168Cu;
        // 0x401690: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401694u;
        goto label_401694;
    }
    ctx->pc = 0x40168Cu;
    SET_GPR_U32(ctx, 31, 0x401694u);
    ctx->pc = 0x401690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40168Cu;
    // 0x401690: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40168Cu, 0x401694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401694u;
label_401694:
    // 0x401694: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401694u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_401698:
    // 0x401698: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x401698u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_40169c:
    // 0x40169c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40169cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4016a0:
    // 0x4016a0: 0xc0cd518  jal         func_335460
label_4016a4:
    if (ctx->pc == 0x4016A4u) {
        ctx->pc = 0x4016A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4016A0u;
        // 0x4016a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4016A8u;
        goto label_4016a8;
    }
    ctx->pc = 0x4016A0u;
    SET_GPR_U32(ctx, 31, 0x4016A8u);
    ctx->pc = 0x4016A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4016A0u;
    // 0x4016a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4016A0u, 0x4016A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4016A8u;
label_4016a8:
    // 0x4016a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4016a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4016ac:
    // 0x4016ac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4016acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4016b0:
    // 0x4016b0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4016b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4016b4:
    // 0x4016b4: 0xc0cd518  jal         func_335460
label_4016b8:
    if (ctx->pc == 0x4016B8u) {
        ctx->pc = 0x4016B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4016B4u;
        // 0x4016b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4016BCu;
        goto label_4016bc;
    }
    ctx->pc = 0x4016B4u;
    SET_GPR_U32(ctx, 31, 0x4016BCu);
    ctx->pc = 0x4016B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4016B4u;
    // 0x4016b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4016B4u, 0x4016BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4016BCu;
label_4016bc:
    // 0x4016bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4016bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4016c0:
    // 0x4016c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4016c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4016c4:
    // 0x4016c4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4016c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4016c8:
    // 0x4016c8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4016c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4016cc:
    // 0x4016cc: 0xc0cd55c  jal         func_335570
label_4016d0:
    if (ctx->pc == 0x4016D0u) {
        ctx->pc = 0x4016D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4016CCu;
        // 0x4016d0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4016D4u;
        goto label_4016d4;
    }
    ctx->pc = 0x4016CCu;
    SET_GPR_U32(ctx, 31, 0x4016D4u);
    ctx->pc = 0x4016D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4016CCu;
    // 0x4016d0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4016CCu, 0x4016D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4016D4u;
label_4016d4:
    // 0x4016d4: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x4016d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4016d8:
    // 0x4016d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4016d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4016dc:
    // 0x4016dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4016dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4016e0:
    // 0x4016e0: 0xc0e954c  jal         func_3A5530
label_4016e4:
    if (ctx->pc == 0x4016E4u) {
        ctx->pc = 0x4016E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4016E0u;
        // 0x4016e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4016E8u;
        goto label_4016e8;
    }
    ctx->pc = 0x4016E0u;
    SET_GPR_U32(ctx, 31, 0x4016E8u);
    ctx->pc = 0x4016E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4016E0u;
    // 0x4016e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x4016E0u, 0x4016E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4016E8u;
label_4016e8:
    // 0x4016e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4016e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4016ec:
    // 0x4016ec: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x4016ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_4016f0:
    // 0x4016f0: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x4016f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_4016f4:
    // 0x4016f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4016f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4016f8:
    // 0x4016f8: 0x3c01bf54  lui         $at, 0xBF54
    ctx->pc = 0x4016f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48980 << 16));
label_4016fc:
    // 0x4016fc: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x4016fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_401700:
    // 0x401700: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x401700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_401704:
    // 0x401704: 0x2470b8b8  addiu       $s0, $v1, -0x4748
    ctx->pc = 0x401704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_401708:
    // 0x401708: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x401708u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_40170c:
    // 0x40170c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40170cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401710:
    // 0x401710: 0x26317728  addiu       $s1, $s1, 0x7728
    ctx->pc = 0x401710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30504));
label_401714:
    // 0x401714: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401714u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401718:
    // 0x401718: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x401718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_40171c:
    // 0x40171c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x40171cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_401720:
    // 0x401720: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x401720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_401724:
    // 0x401724: 0xc0cd518  jal         func_335460
label_401728:
    if (ctx->pc == 0x401728u) {
        ctx->pc = 0x401728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401724u;
        // 0x401728: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40172Cu;
        goto label_40172c;
    }
    ctx->pc = 0x401724u;
    SET_GPR_U32(ctx, 31, 0x40172Cu);
    ctx->pc = 0x401728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401724u;
    // 0x401728: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401724u, 0x40172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40172Cu;
label_40172c:
    // 0x40172c: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x40172cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_401730:
    // 0x401730: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x401730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_401734:
    // 0x401734: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x401734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_401738:
    // 0x401738: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401738u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_40173c:
    // 0x40173c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x40173cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_401740:
    // 0x401740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401744:
    // 0x401744: 0xc0cd518  jal         func_335460
label_401748:
    if (ctx->pc == 0x401748u) {
        ctx->pc = 0x401748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401744u;
        // 0x401748: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40174Cu;
        goto label_40174c;
    }
    ctx->pc = 0x401744u;
    SET_GPR_U32(ctx, 31, 0x40174Cu);
    ctx->pc = 0x401748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401744u;
    // 0x401748: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401744u, 0x40174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40174Cu;
label_40174c:
    // 0x40174c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x40174cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401750:
    // 0x401750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401754:
    // 0x401754: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x401754u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_401758:
    // 0x401758: 0xc0cd518  jal         func_335460
label_40175c:
    if (ctx->pc == 0x40175Cu) {
        ctx->pc = 0x40175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401758u;
        // 0x40175c: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401760u;
        goto label_401760;
    }
    ctx->pc = 0x401758u;
    SET_GPR_U32(ctx, 31, 0x401760u);
    ctx->pc = 0x40175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401758u;
    // 0x40175c: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401758u, 0x401760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401760u;
label_401760:
    // 0x401760: 0xafa0053c  sw          $zero, 0x53C($sp)
    ctx->pc = 0x401760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 0));
label_401764:
    // 0x401764: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x401764u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_401768:
    // 0x401768: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401768u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_40176c:
    // 0x40176c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x40176cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401770:
    // 0x401770: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401774:
    // 0x401774: 0xc0cd55c  jal         func_335570
label_401778:
    if (ctx->pc == 0x401778u) {
        ctx->pc = 0x401778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401774u;
        // 0x401778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40177Cu;
        goto label_40177c;
    }
    ctx->pc = 0x401774u;
    SET_GPR_U32(ctx, 31, 0x40177Cu);
    ctx->pc = 0x401778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401774u;
    // 0x401778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401774u, 0x40177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40177Cu;
label_40177c:
    // 0x40177c: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x40177cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401780:
    // 0x401780: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x401780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_401784:
    // 0x401784: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401788:
    // 0x401788: 0xc0e954c  jal         func_3A5530
label_40178c:
    if (ctx->pc == 0x40178Cu) {
        ctx->pc = 0x40178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401788u;
        // 0x40178c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401790u;
        goto label_401790;
    }
    ctx->pc = 0x401788u;
    SET_GPR_U32(ctx, 31, 0x401790u);
    ctx->pc = 0x40178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401788u;
    // 0x40178c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401788u, 0x401790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401790u;
label_401790:
    // 0x401790: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401790u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401794:
    // 0x401794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401798:
    // 0x401798: 0xc0cd518  jal         func_335460
label_40179c:
    if (ctx->pc == 0x40179Cu) {
        ctx->pc = 0x40179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401798u;
        // 0x40179c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4017A0u;
        goto label_4017a0;
    }
    ctx->pc = 0x401798u;
    SET_GPR_U32(ctx, 31, 0x4017A0u);
    ctx->pc = 0x40179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401798u;
    // 0x40179c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401798u, 0x4017A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4017A0u;
label_4017a0:
    // 0x4017a0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x4017a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_4017a4:
    // 0x4017a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4017a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4017a8:
    // 0x4017a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4017a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4017ac:
    // 0x4017ac: 0xc0cd518  jal         func_335460
label_4017b0:
    if (ctx->pc == 0x4017B0u) {
        ctx->pc = 0x4017B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4017ACu;
        // 0x4017b0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4017B4u;
        goto label_4017b4;
    }
    ctx->pc = 0x4017ACu;
    SET_GPR_U32(ctx, 31, 0x4017B4u);
    ctx->pc = 0x4017B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4017ACu;
    // 0x4017b0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4017ACu, 0x4017B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4017B4u;
label_4017b4:
    // 0x4017b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4017b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4017b8:
    // 0x4017b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4017b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4017bc:
    // 0x4017bc: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x4017bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_4017c0:
    // 0x4017c0: 0xc0cd518  jal         func_335460
label_4017c4:
    if (ctx->pc == 0x4017C4u) {
        ctx->pc = 0x4017C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4017C0u;
        // 0x4017c4: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4017C8u;
        goto label_4017c8;
    }
    ctx->pc = 0x4017C0u;
    SET_GPR_U32(ctx, 31, 0x4017C8u);
    ctx->pc = 0x4017C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4017C0u;
    // 0x4017c4: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4017C0u, 0x4017C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4017C8u;
label_4017c8:
    // 0x4017c8: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x4017c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_4017cc:
    // 0x4017cc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4017ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4017d0:
    // 0x4017d0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4017d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4017d4:
    // 0x4017d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4017d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4017d8:
    // 0x4017d8: 0xc0cd55c  jal         func_335570
label_4017dc:
    if (ctx->pc == 0x4017DCu) {
        ctx->pc = 0x4017DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4017D8u;
        // 0x4017dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4017E0u;
        goto label_4017e0;
    }
    ctx->pc = 0x4017D8u;
    SET_GPR_U32(ctx, 31, 0x4017E0u);
    ctx->pc = 0x4017DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4017D8u;
    // 0x4017dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4017D8u, 0x4017E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4017E0u;
label_4017e0:
    // 0x4017e0: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x4017e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4017e4:
    // 0x4017e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4017e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4017e8:
    // 0x4017e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4017e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4017ec:
    // 0x4017ec: 0xc0e954c  jal         func_3A5530
label_4017f0:
    if (ctx->pc == 0x4017F0u) {
        ctx->pc = 0x4017F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4017ECu;
        // 0x4017f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4017F4u;
        goto label_4017f4;
    }
    ctx->pc = 0x4017ECu;
    SET_GPR_U32(ctx, 31, 0x4017F4u);
    ctx->pc = 0x4017F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4017ECu;
    // 0x4017f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x4017ECu, 0x4017F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4017F4u;
label_4017f4:
    // 0x4017f4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x4017f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_4017f8:
    // 0x4017f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4017f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4017fc:
    // 0x4017fc: 0x26317738  addiu       $s1, $s1, 0x7738
    ctx->pc = 0x4017fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30520));
label_401800:
    // 0x401800: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x401800u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_401804:
    // 0x401804: 0xc0cd518  jal         func_335460
label_401808:
    if (ctx->pc == 0x401808u) {
        ctx->pc = 0x401808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401804u;
        // 0x401808: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40180Cu;
        goto label_40180c;
    }
    ctx->pc = 0x401804u;
    SET_GPR_U32(ctx, 31, 0x40180Cu);
    ctx->pc = 0x401808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401804u;
    // 0x401808: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401804u, 0x40180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40180Cu;
label_40180c:
    // 0x40180c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x40180cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401810:
    // 0x401810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401814:
    // 0x401814: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x401814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_401818:
    // 0x401818: 0xc0cd518  jal         func_335460
label_40181c:
    if (ctx->pc == 0x40181Cu) {
        ctx->pc = 0x40181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401818u;
        // 0x40181c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401820u;
        goto label_401820;
    }
    ctx->pc = 0x401818u;
    SET_GPR_U32(ctx, 31, 0x401820u);
    ctx->pc = 0x40181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401818u;
    // 0x40181c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401818u, 0x401820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401820u;
label_401820:
    // 0x401820: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x401820u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_401824:
    // 0x401824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401828:
    // 0x401828: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x401828u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_40182c:
    // 0x40182c: 0xc0cd518  jal         func_335460
label_401830:
    if (ctx->pc == 0x401830u) {
        ctx->pc = 0x401830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40182Cu;
        // 0x401830: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401834u;
        goto label_401834;
    }
    ctx->pc = 0x40182Cu;
    SET_GPR_U32(ctx, 31, 0x401834u);
    ctx->pc = 0x401830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40182Cu;
    // 0x401830: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40182Cu, 0x401834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401834u;
label_401834:
    // 0x401834: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x401834u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_401838:
    // 0x401838: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x401838u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_40183c:
    // 0x40183c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40183cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_401840:
    // 0x401840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401844:
    // 0x401844: 0xc0cd55c  jal         func_335570
label_401848:
    if (ctx->pc == 0x401848u) {
        ctx->pc = 0x401848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401844u;
        // 0x401848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40184Cu;
        goto label_40184c;
    }
    ctx->pc = 0x401844u;
    SET_GPR_U32(ctx, 31, 0x40184Cu);
    ctx->pc = 0x401848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401844u;
    // 0x401848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401844u, 0x40184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40184Cu;
label_40184c:
    // 0x40184c: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x40184cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401850:
    // 0x401850: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x401850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_401854:
    // 0x401854: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401858:
    // 0x401858: 0xc0e954c  jal         func_3A5530
label_40185c:
    if (ctx->pc == 0x40185Cu) {
        ctx->pc = 0x40185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401858u;
        // 0x40185c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401860u;
        goto label_401860;
    }
    ctx->pc = 0x401858u;
    SET_GPR_U32(ctx, 31, 0x401860u);
    ctx->pc = 0x40185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401858u;
    // 0x40185c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401858u, 0x401860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401860u;
label_401860:
    // 0x401860: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x401860u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_401864:
    // 0x401864: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x401864u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_401868:
    // 0x401868: 0xc0cd518  jal         func_335460
label_40186c:
    if (ctx->pc == 0x40186Cu) {
        ctx->pc = 0x40186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401868u;
        // 0x40186c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401870u;
        goto label_401870;
    }
    ctx->pc = 0x401868u;
    SET_GPR_U32(ctx, 31, 0x401870u);
    ctx->pc = 0x40186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401868u;
    // 0x40186c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401868u, 0x401870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401870u;
label_401870:
    // 0x401870: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x401870u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_401874:
    // 0x401874: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x401874u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401878:
    // 0x401878: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x401878u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_40187c:
    // 0x40187c: 0xc0cd518  jal         func_335460
label_401880:
    if (ctx->pc == 0x401880u) {
        ctx->pc = 0x401880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40187Cu;
        // 0x401880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401884u;
        goto label_401884;
    }
    ctx->pc = 0x40187Cu;
    SET_GPR_U32(ctx, 31, 0x401884u);
    ctx->pc = 0x401880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40187Cu;
    // 0x401880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40187Cu, 0x401884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401884u;
label_401884:
    // 0x401884: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x401884u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_401888:
    // 0x401888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40188c:
    // 0x40188c: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x40188cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_401890:
    // 0x401890: 0xc0cd518  jal         func_335460
label_401894:
    if (ctx->pc == 0x401894u) {
        ctx->pc = 0x401894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401890u;
        // 0x401894: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401898u;
        goto label_401898;
    }
    ctx->pc = 0x401890u;
    SET_GPR_U32(ctx, 31, 0x401898u);
    ctx->pc = 0x401894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401890u;
    // 0x401894: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401890u, 0x401898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401898u;
label_401898:
    // 0x401898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40189c:
    // 0x40189c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4018a0:
    // 0x4018a0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4018a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4018a4:
    // 0x4018a4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4018a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4018a8:
    // 0x4018a8: 0xc0cd55c  jal         func_335570
label_4018ac:
    if (ctx->pc == 0x4018ACu) {
        ctx->pc = 0x4018ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4018A8u;
        // 0x4018ac: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4018B0u;
        goto label_4018b0;
    }
    ctx->pc = 0x4018A8u;
    SET_GPR_U32(ctx, 31, 0x4018B0u);
    ctx->pc = 0x4018ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4018A8u;
    // 0x4018ac: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4018A8u, 0x4018B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4018B0u;
label_4018b0:
    // 0x4018b0: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x4018b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4018b4:
    // 0x4018b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4018b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4018b8:
    // 0x4018b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4018b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4018bc:
    // 0x4018bc: 0xc0e954c  jal         func_3A5530
label_4018c0:
    if (ctx->pc == 0x4018C0u) {
        ctx->pc = 0x4018C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4018BCu;
        // 0x4018c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4018C4u;
        goto label_4018c4;
    }
    ctx->pc = 0x4018BCu;
    SET_GPR_U32(ctx, 31, 0x4018C4u);
    ctx->pc = 0x4018C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4018BCu;
    // 0x4018c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x4018BCu, 0x4018C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4018C4u;
label_4018c4:
    // 0x4018c4: 0x3c0281c3  lui         $v0, 0x81C3
    ctx->pc = 0x4018c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33219 << 16));
label_4018c8:
    // 0x4018c8: 0x34426559  ori         $v0, $v0, 0x6559
    ctx->pc = 0x4018c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25945);
label_4018cc:
    // 0x4018cc: 0x13c20006  beq         $fp, $v0, . + 4 + (0x6 << 2)
label_4018d0:
    if (ctx->pc == 0x4018D0u) {
        ctx->pc = 0x4018D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4018CCu;
        // 0x4018d0: 0x27b30090  addiu       $s3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4018D4u;
        goto label_4018d4;
    }
    ctx->pc = 0x4018CCu;
    {
        const bool branch_taken_0x4018cc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x4018D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4018CCu;
        // 0x4018d0: 0x27b30090  addiu       $s3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4018cc) {
            ctx->pc = 0x4018E8u;
            goto label_4018e8;
        }
    }
    ctx->pc = 0x4018D4u;
label_4018d4:
    // 0x4018d4: 0x3c02de48  lui         $v0, 0xDE48
    ctx->pc = 0x4018d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56904 << 16));
label_4018d8:
    // 0x4018d8: 0x3442ed43  ori         $v0, $v0, 0xED43
    ctx->pc = 0x4018d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60739);
label_4018dc:
    // 0x4018dc: 0x17c2009f  bne         $fp, $v0, . + 4 + (0x9F << 2)
label_4018e0:
    if (ctx->pc == 0x4018E0u) {
        ctx->pc = 0x4018E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4018DCu;
        // 0x4018e0: 0x3c025ddc  lui         $v0, 0x5DDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24028 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4018E4u;
        goto label_4018e4;
    }
    ctx->pc = 0x4018DCu;
    {
        const bool branch_taken_0x4018dc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x4018E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4018DCu;
        // 0x4018e0: 0x3c025ddc  lui         $v0, 0x5DDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24028 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4018dc) {
            ctx->pc = 0x401B5Cu;
            goto label_401b5c;
        }
    }
    ctx->pc = 0x4018E4u;
label_4018e4:
    // 0x4018e4: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x4018e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4018e8:
    // 0x4018e8: 0x16800024  bnez        $s4, . + 4 + (0x24 << 2)
label_4018ec:
    if (ctx->pc == 0x4018ECu) {
        ctx->pc = 0x4018ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4018E8u;
        // 0x4018ec: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4018F0u;
        goto label_4018f0;
    }
    ctx->pc = 0x4018E8u;
    {
        const bool branch_taken_0x4018e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4018ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4018E8u;
        // 0x4018ec: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4018e8) {
            ctx->pc = 0x40197Cu;
            goto label_40197c;
        }
    }
    ctx->pc = 0x4018F0u;
label_4018f0:
    // 0x4018f0: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x4018f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_4018f4:
    // 0x4018f4: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x4018f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4018f8:
    // 0x4018f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4018f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4018fc:
    // 0x4018fc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4018fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_401900:
    // 0x401900: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x401900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_401904:
    // 0x401904: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x401904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_401908:
    // 0x401908: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x401908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_40190c:
    // 0x40190c: 0x2490b8b8  addiu       $s0, $a0, -0x4748
    ctx->pc = 0x40190cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_401910:
    // 0x401910: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x401910u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_401914:
    // 0x401914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401918:
    // 0x401918: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401918u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_40191c:
    // 0x40191c: 0x26317748  addiu       $s1, $s1, 0x7748
    ctx->pc = 0x40191cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30536));
label_401920:
    // 0x401920: 0xc0cd518  jal         func_335460
label_401924:
    if (ctx->pc == 0x401924u) {
        ctx->pc = 0x401924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401920u;
        // 0x401924: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401928u;
        goto label_401928;
    }
    ctx->pc = 0x401920u;
    SET_GPR_U32(ctx, 31, 0x401928u);
    ctx->pc = 0x401924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401920u;
    // 0x401924: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401920u, 0x401928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401928u;
label_401928:
    // 0x401928: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401928u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_40192c:
    // 0x40192c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x40192cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401930:
    // 0x401930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401934:
    // 0x401934: 0xc0cd518  jal         func_335460
label_401938:
    if (ctx->pc == 0x401938u) {
        ctx->pc = 0x401938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401934u;
        // 0x401938: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40193Cu;
        goto label_40193c;
    }
    ctx->pc = 0x401934u;
    SET_GPR_U32(ctx, 31, 0x40193Cu);
    ctx->pc = 0x401938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401934u;
    // 0x401938: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401934u, 0x40193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40193Cu;
label_40193c:
    // 0x40193c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40193cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_401940:
    // 0x401940: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x401940u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_401944:
    // 0x401944: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x401944u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_401948:
    // 0x401948: 0xc0cd518  jal         func_335460
label_40194c:
    if (ctx->pc == 0x40194Cu) {
        ctx->pc = 0x40194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401948u;
        // 0x40194c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401950u;
        goto label_401950;
    }
    ctx->pc = 0x401948u;
    SET_GPR_U32(ctx, 31, 0x401950u);
    ctx->pc = 0x40194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401948u;
    // 0x40194c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401948u, 0x401950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401950u;
label_401950:
    // 0x401950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401954:
    // 0x401954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401958:
    // 0x401958: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x401958u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_40195c:
    // 0x40195c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x40195cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_401960:
    // 0x401960: 0xc0cd55c  jal         func_335570
label_401964:
    if (ctx->pc == 0x401964u) {
        ctx->pc = 0x401964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401960u;
        // 0x401964: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401968u;
        goto label_401968;
    }
    ctx->pc = 0x401960u;
    SET_GPR_U32(ctx, 31, 0x401968u);
    ctx->pc = 0x401964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401960u;
    // 0x401964: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401960u, 0x401968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401968u;
label_401968:
    // 0x401968: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x401968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_40196c:
    // 0x40196c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_401970:
    // 0x401970: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401974:
    // 0x401974: 0xc0e954c  jal         func_3A5530
label_401978:
    if (ctx->pc == 0x401978u) {
        ctx->pc = 0x401978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401974u;
        // 0x401978: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40197Cu;
        goto label_40197c;
    }
    ctx->pc = 0x401974u;
    SET_GPR_U32(ctx, 31, 0x40197Cu);
    ctx->pc = 0x401978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401974u;
    // 0x401978: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401974u, 0x40197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40197Cu;
label_40197c:
    // 0x40197c: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x40197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_401980:
    // 0x401980: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x401980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_401984:
    // 0x401984: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x401984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_401988:
    // 0x401988: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x401988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_40198c:
    // 0x40198c: 0x3c01bf54  lui         $at, 0xBF54
    ctx->pc = 0x40198cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48980 << 16));
label_401990:
    // 0x401990: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x401990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_401994:
    // 0x401994: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x401994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_401998:
    // 0x401998: 0x24b0b8b8  addiu       $s0, $a1, -0x4748
    ctx->pc = 0x401998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949048));
label_40199c:
    // 0x40199c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x40199cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_4019a0:
    // 0x4019a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4019a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4019a4:
    // 0x4019a4: 0x26317758  addiu       $s1, $s1, 0x7758
    ctx->pc = 0x4019a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30552));
label_4019a8:
    // 0x4019a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4019a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4019ac:
    // 0x4019ac: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x4019acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_4019b0:
    // 0x4019b0: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x4019b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4019b4:
    // 0x4019b4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x4019b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_4019b8:
    // 0x4019b8: 0xc0cd518  jal         func_335460
label_4019bc:
    if (ctx->pc == 0x4019BCu) {
        ctx->pc = 0x4019BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4019B8u;
        // 0x4019bc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4019C0u;
        goto label_4019c0;
    }
    ctx->pc = 0x4019B8u;
    SET_GPR_U32(ctx, 31, 0x4019C0u);
    ctx->pc = 0x4019BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4019B8u;
    // 0x4019bc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4019B8u, 0x4019C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4019C0u;
label_4019c0:
    // 0x4019c0: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x4019c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_4019c4:
    // 0x4019c4: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x4019c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4019c8:
    // 0x4019c8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x4019c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_4019cc:
    // 0x4019cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4019ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4019d0:
    // 0x4019d0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x4019d0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_4019d4:
    // 0x4019d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4019d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4019d8:
    // 0x4019d8: 0xc0cd518  jal         func_335460
label_4019dc:
    if (ctx->pc == 0x4019DCu) {
        ctx->pc = 0x4019DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4019D8u;
        // 0x4019dc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4019E0u;
        goto label_4019e0;
    }
    ctx->pc = 0x4019D8u;
    SET_GPR_U32(ctx, 31, 0x4019E0u);
    ctx->pc = 0x4019DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4019D8u;
    // 0x4019dc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4019D8u, 0x4019E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4019E0u;
label_4019e0:
    // 0x4019e0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x4019e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_4019e4:
    // 0x4019e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4019e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4019e8:
    // 0x4019e8: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x4019e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_4019ec:
    // 0x4019ec: 0xc0cd518  jal         func_335460
label_4019f0:
    if (ctx->pc == 0x4019F0u) {
        ctx->pc = 0x4019F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4019ECu;
        // 0x4019f0: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4019F4u;
        goto label_4019f4;
    }
    ctx->pc = 0x4019ECu;
    SET_GPR_U32(ctx, 31, 0x4019F4u);
    ctx->pc = 0x4019F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4019ECu;
    // 0x4019f0: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4019ECu, 0x4019F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4019F4u;
label_4019f4:
    // 0x4019f4: 0xafa0053c  sw          $zero, 0x53C($sp)
    ctx->pc = 0x4019f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 0));
label_4019f8:
    // 0x4019f8: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x4019f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_4019fc:
    // 0x4019fc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4019fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_401a00:
    // 0x401a00: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x401a00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401a04:
    // 0x401a04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401a08:
    // 0x401a08: 0xc0cd55c  jal         func_335570
label_401a0c:
    if (ctx->pc == 0x401A0Cu) {
        ctx->pc = 0x401A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A08u;
        // 0x401a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401A10u;
        goto label_401a10;
    }
    ctx->pc = 0x401A08u;
    SET_GPR_U32(ctx, 31, 0x401A10u);
    ctx->pc = 0x401A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A08u;
    // 0x401a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401A08u, 0x401A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A10u;
label_401a10:
    // 0x401a10: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x401a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401a14:
    // 0x401a14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x401a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_401a18:
    // 0x401a18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401a1c:
    // 0x401a1c: 0xc0e954c  jal         func_3A5530
label_401a20:
    if (ctx->pc == 0x401A20u) {
        ctx->pc = 0x401A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A1Cu;
        // 0x401a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401A24u;
        goto label_401a24;
    }
    ctx->pc = 0x401A1Cu;
    SET_GPR_U32(ctx, 31, 0x401A24u);
    ctx->pc = 0x401A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A1Cu;
    // 0x401a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401A1Cu, 0x401A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A24u;
label_401a24:
    // 0x401a24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401a24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401a28:
    // 0x401a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401a2c:
    // 0x401a2c: 0xc0cd518  jal         func_335460
label_401a30:
    if (ctx->pc == 0x401A30u) {
        ctx->pc = 0x401A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A2Cu;
        // 0x401a30: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401A34u;
        goto label_401a34;
    }
    ctx->pc = 0x401A2Cu;
    SET_GPR_U32(ctx, 31, 0x401A34u);
    ctx->pc = 0x401A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A2Cu;
    // 0x401a30: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401A2Cu, 0x401A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A34u;
label_401a34:
    // 0x401a34: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x401a34u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401a38:
    // 0x401a38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401a38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401a3c:
    // 0x401a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401a40:
    // 0x401a40: 0xc0cd518  jal         func_335460
label_401a44:
    if (ctx->pc == 0x401A44u) {
        ctx->pc = 0x401A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A40u;
        // 0x401a44: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401A48u;
        goto label_401a48;
    }
    ctx->pc = 0x401A40u;
    SET_GPR_U32(ctx, 31, 0x401A48u);
    ctx->pc = 0x401A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A40u;
    // 0x401a44: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401A40u, 0x401A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A48u;
label_401a48:
    // 0x401a48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x401a48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_401a4c:
    // 0x401a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401a50:
    // 0x401a50: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x401a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_401a54:
    // 0x401a54: 0xc0cd518  jal         func_335460
label_401a58:
    if (ctx->pc == 0x401A58u) {
        ctx->pc = 0x401A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A54u;
        // 0x401a58: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401A5Cu;
        goto label_401a5c;
    }
    ctx->pc = 0x401A54u;
    SET_GPR_U32(ctx, 31, 0x401A5Cu);
    ctx->pc = 0x401A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A54u;
    // 0x401a58: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401A54u, 0x401A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A5Cu;
label_401a5c:
    // 0x401a5c: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x401a5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_401a60:
    // 0x401a60: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x401a60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_401a64:
    // 0x401a64: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x401a64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_401a68:
    // 0x401a68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401a6c:
    // 0x401a6c: 0xc0cd55c  jal         func_335570
label_401a70:
    if (ctx->pc == 0x401A70u) {
        ctx->pc = 0x401A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A6Cu;
        // 0x401a70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401A74u;
        goto label_401a74;
    }
    ctx->pc = 0x401A6Cu;
    SET_GPR_U32(ctx, 31, 0x401A74u);
    ctx->pc = 0x401A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A6Cu;
    // 0x401a70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401A6Cu, 0x401A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A74u;
label_401a74:
    // 0x401a74: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x401a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401a78:
    // 0x401a78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x401a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_401a7c:
    // 0x401a7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401a80:
    // 0x401a80: 0xc0e954c  jal         func_3A5530
label_401a84:
    if (ctx->pc == 0x401A84u) {
        ctx->pc = 0x401A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A80u;
        // 0x401a84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401A88u;
        goto label_401a88;
    }
    ctx->pc = 0x401A80u;
    SET_GPR_U32(ctx, 31, 0x401A88u);
    ctx->pc = 0x401A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A80u;
    // 0x401a84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401A80u, 0x401A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A88u;
label_401a88:
    // 0x401a88: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x401a88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_401a8c:
    // 0x401a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401a90:
    // 0x401a90: 0x26317768  addiu       $s1, $s1, 0x7768
    ctx->pc = 0x401a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30568));
label_401a94:
    // 0x401a94: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x401a94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_401a98:
    // 0x401a98: 0xc0cd518  jal         func_335460
label_401a9c:
    if (ctx->pc == 0x401A9Cu) {
        ctx->pc = 0x401A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A98u;
        // 0x401a9c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401AA0u;
        goto label_401aa0;
    }
    ctx->pc = 0x401A98u;
    SET_GPR_U32(ctx, 31, 0x401AA0u);
    ctx->pc = 0x401A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A98u;
    // 0x401a9c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401A98u, 0x401AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401AA0u;
label_401aa0:
    // 0x401aa0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x401aa0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401aa4:
    // 0x401aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401aa8:
    // 0x401aa8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x401aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_401aac:
    // 0x401aac: 0xc0cd518  jal         func_335460
label_401ab0:
    if (ctx->pc == 0x401AB0u) {
        ctx->pc = 0x401AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401AACu;
        // 0x401ab0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401AB4u;
        goto label_401ab4;
    }
    ctx->pc = 0x401AACu;
    SET_GPR_U32(ctx, 31, 0x401AB4u);
    ctx->pc = 0x401AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401AACu;
    // 0x401ab0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401AACu, 0x401AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401AB4u;
label_401ab4:
    // 0x401ab4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x401ab4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_401ab8:
    // 0x401ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401abc:
    // 0x401abc: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x401abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_401ac0:
    // 0x401ac0: 0xc0cd518  jal         func_335460
label_401ac4:
    if (ctx->pc == 0x401AC4u) {
        ctx->pc = 0x401AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401AC0u;
        // 0x401ac4: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401AC8u;
        goto label_401ac8;
    }
    ctx->pc = 0x401AC0u;
    SET_GPR_U32(ctx, 31, 0x401AC8u);
    ctx->pc = 0x401AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401AC0u;
    // 0x401ac4: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401AC0u, 0x401AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401AC8u;
label_401ac8:
    // 0x401ac8: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x401ac8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_401acc:
    // 0x401acc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x401accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_401ad0:
    // 0x401ad0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x401ad0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_401ad4:
    // 0x401ad4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401ad8:
    // 0x401ad8: 0xc0cd55c  jal         func_335570
label_401adc:
    if (ctx->pc == 0x401ADCu) {
        ctx->pc = 0x401ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401AD8u;
        // 0x401adc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401AE0u;
        goto label_401ae0;
    }
    ctx->pc = 0x401AD8u;
    SET_GPR_U32(ctx, 31, 0x401AE0u);
    ctx->pc = 0x401ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401AD8u;
    // 0x401adc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401AD8u, 0x401AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401AE0u;
label_401ae0:
    // 0x401ae0: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x401ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401ae4:
    // 0x401ae4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x401ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_401ae8:
    // 0x401ae8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401aec:
    // 0x401aec: 0xc0e954c  jal         func_3A5530
label_401af0:
    if (ctx->pc == 0x401AF0u) {
        ctx->pc = 0x401AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401AECu;
        // 0x401af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401AF4u;
        goto label_401af4;
    }
    ctx->pc = 0x401AECu;
    SET_GPR_U32(ctx, 31, 0x401AF4u);
    ctx->pc = 0x401AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401AECu;
    // 0x401af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401AECu, 0x401AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401AF4u;
label_401af4:
    // 0x401af4: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x401af4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_401af8:
    // 0x401af8: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x401af8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_401afc:
    // 0x401afc: 0xc0cd518  jal         func_335460
label_401b00:
    if (ctx->pc == 0x401B00u) {
        ctx->pc = 0x401B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401AFCu;
        // 0x401b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401B04u;
        goto label_401b04;
    }
    ctx->pc = 0x401AFCu;
    SET_GPR_U32(ctx, 31, 0x401B04u);
    ctx->pc = 0x401B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401AFCu;
    // 0x401b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401AFCu, 0x401B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401B04u;
label_401b04:
    // 0x401b04: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x401b04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_401b08:
    // 0x401b08: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x401b08u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_401b0c:
    // 0x401b0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x401b0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_401b10:
    // 0x401b10: 0xc0cd518  jal         func_335460
label_401b14:
    if (ctx->pc == 0x401B14u) {
        ctx->pc = 0x401B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401B10u;
        // 0x401b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401B18u;
        goto label_401b18;
    }
    ctx->pc = 0x401B10u;
    SET_GPR_U32(ctx, 31, 0x401B18u);
    ctx->pc = 0x401B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401B10u;
    // 0x401b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401B10u, 0x401B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401B18u;
label_401b18:
    // 0x401b18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x401b18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_401b1c:
    // 0x401b1c: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x401b1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_401b20:
    // 0x401b20: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x401b20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_401b24:
    // 0x401b24: 0xc0cd518  jal         func_335460
label_401b28:
    if (ctx->pc == 0x401B28u) {
        ctx->pc = 0x401B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401B24u;
        // 0x401b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401B2Cu;
        goto label_401b2c;
    }
    ctx->pc = 0x401B24u;
    SET_GPR_U32(ctx, 31, 0x401B2Cu);
    ctx->pc = 0x401B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401B24u;
    // 0x401b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x401B24u, 0x401B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401B2Cu;
label_401b2c:
    // 0x401b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401b30:
    // 0x401b30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401b34:
    // 0x401b34: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x401b34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_401b38:
    // 0x401b38: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x401b38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_401b3c:
    // 0x401b3c: 0xc0cd55c  jal         func_335570
label_401b40:
    if (ctx->pc == 0x401B40u) {
        ctx->pc = 0x401B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401B3Cu;
        // 0x401b40: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401B44u;
        goto label_401b44;
    }
    ctx->pc = 0x401B3Cu;
    SET_GPR_U32(ctx, 31, 0x401B44u);
    ctx->pc = 0x401B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401B3Cu;
    // 0x401b40: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x401B3Cu, 0x401B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401B44u;
label_401b44:
    // 0x401b44: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x401b44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_401b48:
    // 0x401b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_401b4c:
    // 0x401b4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x401b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_401b50:
    // 0x401b50: 0xc0e954c  jal         func_3A5530
label_401b54:
    if (ctx->pc == 0x401B54u) {
        ctx->pc = 0x401B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401B50u;
        // 0x401b54: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401B58u;
        goto label_401b58;
    }
    ctx->pc = 0x401B50u;
    SET_GPR_U32(ctx, 31, 0x401B58u);
    ctx->pc = 0x401B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401B50u;
    // 0x401b54: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x401B50u, 0x401B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401B58u;
label_401b58:
    // 0x401b58: 0x3c025ddc  lui         $v0, 0x5DDC
    ctx->pc = 0x401b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24028 << 16));
label_401b5c:
    // 0x401b5c: 0x3442ebba  ori         $v0, $v0, 0xEBBA
    ctx->pc = 0x401b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60346);
label_401b60:
    // 0x401b60: 0x17c2003e  bne         $fp, $v0, . + 4 + (0x3E << 2)
label_401b64:
    if (ctx->pc == 0x401B64u) {
        ctx->pc = 0x401B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401B60u;
        // 0x401b64: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401B68u;
        goto label_401b68;
    }
    ctx->pc = 0x401B60u;
    {
        const bool branch_taken_0x401b60 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x401B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401B60u;
        // 0x401b64: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401b60) {
            ctx->pc = 0x401C5Cu;
            goto label_401c5c;
        }
    }
    ctx->pc = 0x401B68u;
label_401b68:
    // 0x401b68: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x401b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_401b6c:
    // 0x401b6c: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x401b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_401b70:
    // 0x401b70: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x401b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_401b74:
    // 0x401b74: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x401b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_401b78:
    // 0x401b78: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x401b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_401b7c:
    // 0x401b7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x401b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_401b80:
    // 0x401b80: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x401b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_401b84:
    // 0x401b84: 0xc0cd4ee  jal         func_3353B8
label_401b88:
    if (ctx->pc == 0x401B88u) {
        ctx->pc = 0x401B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401B84u;
        // 0x401b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401B8Cu;
        goto label_401b8c;
    }
    ctx->pc = 0x401B84u;
    SET_GPR_U32(ctx, 31, 0x401B8Cu);
    ctx->pc = 0x401B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401B84u;
    // 0x401b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x401B84u, 0x401B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401B8Cu;
label_401b8c:
    // 0x401b8c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x401b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_401b90:
    // 0x401b90: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x401b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_401b94:
    // 0x401b94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x401b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_401b98:
    // 0x401b98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x401b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_401b9c:
    // 0x401b9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x401b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_401ba0:
    // 0x401ba0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x401ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_401ba4:
    // 0x401ba4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x401ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_401ba8:
    // 0x401ba8: 0x3c086b75  lui         $t0, 0x6B75
    ctx->pc = 0x401ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)27509 << 16));
label_401bac:
    // 0x401bac: 0x3c098537  lui         $t1, 0x8537
    ctx->pc = 0x401bacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34103 << 16));
label_401bb0:
    // 0x401bb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x401bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_401bb4:
    // 0x401bb4: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x401bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_401bb8:
    // 0x401bb8: 0x34c6003c  ori         $a2, $a2, 0x3C
    ctx->pc = 0x401bb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60);
label_401bbc:
    // 0x401bbc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x401bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_401bc0:
    // 0x401bc0: 0x350880ff  ori         $t0, $t0, 0x80FF
    ctx->pc = 0x401bc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)33023);
label_401bc4:
    // 0x401bc4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x401bc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401bc8:
    // 0x401bc8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401bc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_401bcc:
    // 0x401bcc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x401bccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_401bd0:
    // 0x401bd0: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x401bd0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_401bd4:
    // 0x401bd4: 0xc0e97ec  jal         func_3A5FB0
label_401bd8:
    if (ctx->pc == 0x401BD8u) {
        ctx->pc = 0x401BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401BD4u;
        // 0x401bd8: 0x35299437  ori         $t1, $t1, 0x9437 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)37943);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401BDCu;
        goto label_401bdc;
    }
    ctx->pc = 0x401BD4u;
    SET_GPR_U32(ctx, 31, 0x401BDCu);
    ctx->pc = 0x401BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401BD4u;
    // 0x401bd8: 0x35299437  ori         $t1, $t1, 0x9437 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)37943);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x401BD4u, 0x401BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401BDCu;
label_401bdc:
    // 0x401bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401be0:
    // 0x401be0: 0xc0cd4ee  jal         func_3353B8
label_401be4:
    if (ctx->pc == 0x401BE4u) {
        ctx->pc = 0x401BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401BE0u;
        // 0x401be4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401BE8u;
        goto label_401be8;
    }
    ctx->pc = 0x401BE0u;
    SET_GPR_U32(ctx, 31, 0x401BE8u);
    ctx->pc = 0x401BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401BE0u;
    // 0x401be4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x401BE0u, 0x401BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401BE8u;
label_401be8:
    // 0x401be8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x401be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_401bec:
    // 0x401bec: 0x3c085d4d  lui         $t0, 0x5D4D
    ctx->pc = 0x401becu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23885 << 16));
label_401bf0:
    // 0x401bf0: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x401bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_401bf4:
    // 0x401bf4: 0x34c6003c  ori         $a2, $a2, 0x3C
    ctx->pc = 0x401bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60);
label_401bf8:
    // 0x401bf8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x401bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_401bfc:
    // 0x401bfc: 0x350841ff  ori         $t0, $t0, 0x41FF
    ctx->pc = 0x401bfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16895);
label_401c00:
    // 0x401c00: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x401c00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401c04:
    // 0x401c04: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401c04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_401c08:
    // 0x401c08: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x401c08u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_401c0c:
    // 0x401c0c: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x401c0cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_401c10:
    // 0x401c10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x401c10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_401c14:
    // 0x401c14: 0xc0e97ec  jal         func_3A5FB0
label_401c18:
    if (ctx->pc == 0x401C18u) {
        ctx->pc = 0x401C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401C14u;
        // 0x401c18: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401C1Cu;
        goto label_401c1c;
    }
    ctx->pc = 0x401C14u;
    SET_GPR_U32(ctx, 31, 0x401C1Cu);
    ctx->pc = 0x401C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401C14u;
    // 0x401c18: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x401C14u, 0x401C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C1Cu;
label_401c1c:
    // 0x401c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401c20:
    // 0x401c20: 0xc0cd4ee  jal         func_3353B8
label_401c24:
    if (ctx->pc == 0x401C24u) {
        ctx->pc = 0x401C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401C20u;
        // 0x401c24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401C28u;
        goto label_401c28;
    }
    ctx->pc = 0x401C20u;
    SET_GPR_U32(ctx, 31, 0x401C28u);
    ctx->pc = 0x401C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401C20u;
    // 0x401c24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x401C20u, 0x401C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C28u;
label_401c28:
    // 0x401c28: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x401c28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_401c2c:
    // 0x401c2c: 0x3c086e67  lui         $t0, 0x6E67
    ctx->pc = 0x401c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28263 << 16));
label_401c30:
    // 0x401c30: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x401c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_401c34:
    // 0x401c34: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x401c34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401c38:
    // 0x401c38: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401c38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_401c3c:
    // 0x401c3c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x401c3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_401c40:
    // 0x401c40: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x401c40u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_401c44:
    // 0x401c44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x401c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_401c48:
    // 0x401c48: 0x34c6003c  ori         $a2, $a2, 0x3C
    ctx->pc = 0x401c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60);
label_401c4c:
    // 0x401c4c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x401c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_401c50:
    // 0x401c50: 0x35085eff  ori         $t0, $t0, 0x5EFF
    ctx->pc = 0x401c50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)24319);
label_401c54:
    // 0x401c54: 0xc0e97ec  jal         func_3A5FB0
label_401c58:
    if (ctx->pc == 0x401C58u) {
        ctx->pc = 0x401C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401C54u;
        // 0x401c58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401C5Cu;
        goto label_401c5c;
    }
    ctx->pc = 0x401C54u;
    SET_GPR_U32(ctx, 31, 0x401C5Cu);
    ctx->pc = 0x401C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401C54u;
    // 0x401c58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x401C54u, 0x401C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C5Cu;
label_401c5c:
    // 0x401c5c: 0x3c02c4d5  lui         $v0, 0xC4D5
    ctx->pc = 0x401c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50389 << 16));
label_401c60:
    // 0x401c60: 0x3442ba00  ori         $v0, $v0, 0xBA00
    ctx->pc = 0x401c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47616);
label_401c64:
    // 0x401c64: 0x17c2003e  bne         $fp, $v0, . + 4 + (0x3E << 2)
label_401c68:
    if (ctx->pc == 0x401C68u) {
        ctx->pc = 0x401C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401C64u;
        // 0x401c68: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401C6Cu;
        goto label_401c6c;
    }
    ctx->pc = 0x401C64u;
    {
        const bool branch_taken_0x401c64 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x401C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401C64u;
        // 0x401c68: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401c64) {
            ctx->pc = 0x401D60u;
            goto label_401d60;
        }
    }
    ctx->pc = 0x401C6Cu;
label_401c6c:
    // 0x401c6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x401c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_401c70:
    // 0x401c70: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x401c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_401c74:
    // 0x401c74: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x401c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_401c78:
    // 0x401c78: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x401c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_401c7c:
    // 0x401c7c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x401c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_401c80:
    // 0x401c80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x401c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_401c84:
    // 0x401c84: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x401c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_401c88:
    // 0x401c88: 0xc0cd4ee  jal         func_3353B8
label_401c8c:
    if (ctx->pc == 0x401C8Cu) {
        ctx->pc = 0x401C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401C88u;
        // 0x401c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401C90u;
        goto label_401c90;
    }
    ctx->pc = 0x401C88u;
    SET_GPR_U32(ctx, 31, 0x401C90u);
    ctx->pc = 0x401C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401C88u;
    // 0x401c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x401C88u, 0x401C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C90u;
label_401c90:
    // 0x401c90: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x401c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_401c94:
    // 0x401c94: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x401c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_401c98:
    // 0x401c98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x401c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_401c9c:
    // 0x401c9c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x401c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_401ca0:
    // 0x401ca0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x401ca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_401ca4:
    // 0x401ca4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x401ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_401ca8:
    // 0x401ca8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x401ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_401cac:
    // 0x401cac: 0x3c08692e  lui         $t0, 0x692E
    ctx->pc = 0x401cacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26926 << 16));
label_401cb0:
    // 0x401cb0: 0x3c098537  lui         $t1, 0x8537
    ctx->pc = 0x401cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34103 << 16));
label_401cb4:
    // 0x401cb4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x401cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_401cb8:
    // 0x401cb8: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x401cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_401cbc:
    // 0x401cbc: 0x34c6003c  ori         $a2, $a2, 0x3C
    ctx->pc = 0x401cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60);
label_401cc0:
    // 0x401cc0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x401cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_401cc4:
    // 0x401cc4: 0x350822ff  ori         $t0, $t0, 0x22FF
    ctx->pc = 0x401cc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8959);
label_401cc8:
    // 0x401cc8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x401cc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401ccc:
    // 0x401ccc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401cccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_401cd0:
    // 0x401cd0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x401cd0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_401cd4:
    // 0x401cd4: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x401cd4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_401cd8:
    // 0x401cd8: 0xc0e97ec  jal         func_3A5FB0
label_401cdc:
    if (ctx->pc == 0x401CDCu) {
        ctx->pc = 0x401CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401CD8u;
        // 0x401cdc: 0x35299437  ori         $t1, $t1, 0x9437 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)37943);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401CE0u;
        goto label_401ce0;
    }
    ctx->pc = 0x401CD8u;
    SET_GPR_U32(ctx, 31, 0x401CE0u);
    ctx->pc = 0x401CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401CD8u;
    // 0x401cdc: 0x35299437  ori         $t1, $t1, 0x9437 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)37943);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x401CD8u, 0x401CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401CE0u;
label_401ce0:
    // 0x401ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401ce4:
    // 0x401ce4: 0xc0cd4ee  jal         func_3353B8
label_401ce8:
    if (ctx->pc == 0x401CE8u) {
        ctx->pc = 0x401CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401CE4u;
        // 0x401ce8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401CECu;
        goto label_401cec;
    }
    ctx->pc = 0x401CE4u;
    SET_GPR_U32(ctx, 31, 0x401CECu);
    ctx->pc = 0x401CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401CE4u;
    // 0x401ce8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x401CE4u, 0x401CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401CECu;
label_401cec:
    // 0x401cec: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x401cecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_401cf0:
    // 0x401cf0: 0x3c08b19b  lui         $t0, 0xB19B
    ctx->pc = 0x401cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45467 << 16));
label_401cf4:
    // 0x401cf4: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x401cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_401cf8:
    // 0x401cf8: 0x34c6003c  ori         $a2, $a2, 0x3C
    ctx->pc = 0x401cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60);
label_401cfc:
    // 0x401cfc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x401cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_401d00:
    // 0x401d00: 0x35088fff  ori         $t0, $t0, 0x8FFF
    ctx->pc = 0x401d00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)36863);
label_401d04:
    // 0x401d04: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x401d04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401d08:
    // 0x401d08: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401d08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_401d0c:
    // 0x401d0c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x401d0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_401d10:
    // 0x401d10: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x401d10u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_401d14:
    // 0x401d14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x401d14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_401d18:
    // 0x401d18: 0xc0e97ec  jal         func_3A5FB0
label_401d1c:
    if (ctx->pc == 0x401D1Cu) {
        ctx->pc = 0x401D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401D18u;
        // 0x401d1c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401D20u;
        goto label_401d20;
    }
    ctx->pc = 0x401D18u;
    SET_GPR_U32(ctx, 31, 0x401D20u);
    ctx->pc = 0x401D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D18u;
    // 0x401d1c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x401D18u, 0x401D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D20u;
label_401d20:
    // 0x401d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401d24:
    // 0x401d24: 0xc0cd4ee  jal         func_3353B8
label_401d28:
    if (ctx->pc == 0x401D28u) {
        ctx->pc = 0x401D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401D24u;
        // 0x401d28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401D2Cu;
        goto label_401d2c;
    }
    ctx->pc = 0x401D24u;
    SET_GPR_U32(ctx, 31, 0x401D2Cu);
    ctx->pc = 0x401D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D24u;
    // 0x401d28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x401D24u, 0x401D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D2Cu;
label_401d2c:
    // 0x401d2c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x401d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_401d30:
    // 0x401d30: 0x3c08574c  lui         $t0, 0x574C
    ctx->pc = 0x401d30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)22348 << 16));
label_401d34:
    // 0x401d34: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x401d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_401d38:
    // 0x401d38: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x401d38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401d3c:
    // 0x401d3c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401d3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_401d40:
    // 0x401d40: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x401d40u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_401d44:
    // 0x401d44: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x401d44u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_401d48:
    // 0x401d48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x401d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_401d4c:
    // 0x401d4c: 0x34c6003c  ori         $a2, $a2, 0x3C
    ctx->pc = 0x401d4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60);
label_401d50:
    // 0x401d50: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x401d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_401d54:
    // 0x401d54: 0x35083eff  ori         $t0, $t0, 0x3EFF
    ctx->pc = 0x401d54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16127);
label_401d58:
    // 0x401d58: 0xc0e97ec  jal         func_3A5FB0
label_401d5c:
    if (ctx->pc == 0x401D5Cu) {
        ctx->pc = 0x401D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401D58u;
        // 0x401d5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401D60u;
        goto label_401d60;
    }
    ctx->pc = 0x401D58u;
    SET_GPR_U32(ctx, 31, 0x401D60u);
    ctx->pc = 0x401D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D58u;
    // 0x401d5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x401D58u, 0x401D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D60u;
label_401d60:
    // 0x401d60: 0x3c02b3d2  lui         $v0, 0xB3D2
    ctx->pc = 0x401d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46034 << 16));
label_401d64:
    // 0x401d64: 0x34428a96  ori         $v0, $v0, 0x8A96
    ctx->pc = 0x401d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35478);
label_401d68:
    // 0x401d68: 0x17c20040  bne         $fp, $v0, . + 4 + (0x40 << 2)
label_401d6c:
    if (ctx->pc == 0x401D6Cu) {
        ctx->pc = 0x401D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401D68u;
        // 0x401d6c: 0x3c022db6  lui         $v0, 0x2DB6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11702 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401D70u;
        goto label_401d70;
    }
    ctx->pc = 0x401D68u;
    {
        const bool branch_taken_0x401d68 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x401D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401D68u;
        // 0x401d6c: 0x3c022db6  lui         $v0, 0x2DB6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11702 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401d68) {
            ctx->pc = 0x401E6Cu;
            goto label_401e6c;
        }
    }
    ctx->pc = 0x401D70u;
label_401d70:
    // 0x401d70: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x401d70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_401d74:
    // 0x401d74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x401d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_401d78:
    // 0x401d78: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x401d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_401d7c:
    // 0x401d7c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x401d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_401d80:
    // 0x401d80: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x401d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_401d84:
    // 0x401d84: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x401d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_401d88:
    // 0x401d88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x401d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_401d8c:
    // 0x401d8c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x401d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_401d90:
    // 0x401d90: 0xc0cd4ee  jal         func_3353B8
label_401d94:
    if (ctx->pc == 0x401D94u) {
        ctx->pc = 0x401D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401D90u;
        // 0x401d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401D98u;
        goto label_401d98;
    }
    ctx->pc = 0x401D90u;
    SET_GPR_U32(ctx, 31, 0x401D98u);
    ctx->pc = 0x401D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D90u;
    // 0x401d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x401D90u, 0x401D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D98u;
label_401d98:
    // 0x401d98: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x401d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_401d9c:
    // 0x401d9c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x401d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_401da0:
    // 0x401da0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x401da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_401da4:
    // 0x401da4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x401da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_401da8:
    // 0x401da8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x401da8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_401dac:
    // 0x401dac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x401dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_401db0:
    // 0x401db0: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x401db0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_401db4:
    // 0x401db4: 0x3c086f54  lui         $t0, 0x6F54
    ctx->pc = 0x401db4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28500 << 16));
label_401db8:
    // 0x401db8: 0x3c098594  lui         $t1, 0x8594
    ctx->pc = 0x401db8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34196 << 16));
label_401dbc:
    // 0x401dbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x401dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_401dc0:
    // 0x401dc0: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x401dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_401dc4:
    // 0x401dc4: 0x34c6003c  ori         $a2, $a2, 0x3C
    ctx->pc = 0x401dc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60);
label_401dc8:
    // 0x401dc8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x401dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_401dcc:
    // 0x401dcc: 0x350858ff  ori         $t0, $t0, 0x58FF
    ctx->pc = 0x401dccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)22783);
label_401dd0:
    // 0x401dd0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x401dd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401dd4:
    // 0x401dd4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401dd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_401dd8:
    // 0x401dd8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x401dd8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_401ddc:
    // 0x401ddc: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x401ddcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_401de0:
    // 0x401de0: 0xc0e97ec  jal         func_3A5FB0
label_401de4:
    if (ctx->pc == 0x401DE4u) {
        ctx->pc = 0x401DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401DE0u;
        // 0x401de4: 0x35298d94  ori         $t1, $t1, 0x8D94 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)36244);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401DE8u;
        goto label_401de8;
    }
    ctx->pc = 0x401DE0u;
    SET_GPR_U32(ctx, 31, 0x401DE8u);
    ctx->pc = 0x401DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401DE0u;
    // 0x401de4: 0x35298d94  ori         $t1, $t1, 0x8D94 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)36244);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x401DE0u, 0x401DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401DE8u;
label_401de8:
    // 0x401de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401dec:
    // 0x401dec: 0xc0cd4ee  jal         func_3353B8
label_401df0:
    if (ctx->pc == 0x401DF0u) {
        ctx->pc = 0x401DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401DECu;
        // 0x401df0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401DF4u;
        goto label_401df4;
    }
    ctx->pc = 0x401DECu;
    SET_GPR_U32(ctx, 31, 0x401DF4u);
    ctx->pc = 0x401DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401DECu;
    // 0x401df0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x401DECu, 0x401DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401DF4u;
label_401df4:
    // 0x401df4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x401df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_401df8:
    // 0x401df8: 0x3c08653c  lui         $t0, 0x653C
    ctx->pc = 0x401df8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)25916 << 16));
label_401dfc:
    // 0x401dfc: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x401dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_401e00:
    // 0x401e00: 0x34c6003c  ori         $a2, $a2, 0x3C
    ctx->pc = 0x401e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60);
label_401e04:
    // 0x401e04: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x401e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_401e08:
    // 0x401e08: 0x350842ff  ori         $t0, $t0, 0x42FF
    ctx->pc = 0x401e08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)17151);
label_401e0c:
    // 0x401e0c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x401e0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401e10:
    // 0x401e10: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401e10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_401e14:
    // 0x401e14: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x401e14u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_401e18:
    // 0x401e18: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x401e18u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_401e1c:
    // 0x401e1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x401e1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_401e20:
    // 0x401e20: 0xc0e97ec  jal         func_3A5FB0
label_401e24:
    if (ctx->pc == 0x401E24u) {
        ctx->pc = 0x401E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401E20u;
        // 0x401e24: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401E28u;
        goto label_401e28;
    }
    ctx->pc = 0x401E20u;
    SET_GPR_U32(ctx, 31, 0x401E28u);
    ctx->pc = 0x401E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401E20u;
    // 0x401e24: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x401E20u, 0x401E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401E28u;
label_401e28:
    // 0x401e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401e2c:
    // 0x401e2c: 0xc0cd4ee  jal         func_3353B8
label_401e30:
    if (ctx->pc == 0x401E30u) {
        ctx->pc = 0x401E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401E2Cu;
        // 0x401e30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401E34u;
        goto label_401e34;
    }
    ctx->pc = 0x401E2Cu;
    SET_GPR_U32(ctx, 31, 0x401E34u);
    ctx->pc = 0x401E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401E2Cu;
    // 0x401e30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x401E2Cu, 0x401E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401E34u;
label_401e34:
    // 0x401e34: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x401e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_401e38:
    // 0x401e38: 0x3c08574c  lui         $t0, 0x574C
    ctx->pc = 0x401e38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)22348 << 16));
label_401e3c:
    // 0x401e3c: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x401e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_401e40:
    // 0x401e40: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x401e40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_401e44:
    // 0x401e44: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x401e44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_401e48:
    // 0x401e48: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x401e48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_401e4c:
    // 0x401e4c: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x401e4cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_401e50:
    // 0x401e50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x401e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_401e54:
    // 0x401e54: 0x34c6003c  ori         $a2, $a2, 0x3C
    ctx->pc = 0x401e54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60);
label_401e58:
    // 0x401e58: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x401e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_401e5c:
    // 0x401e5c: 0x35083eff  ori         $t0, $t0, 0x3EFF
    ctx->pc = 0x401e5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16127);
label_401e60:
    // 0x401e60: 0xc0e97ec  jal         func_3A5FB0
label_401e64:
    if (ctx->pc == 0x401E64u) {
        ctx->pc = 0x401E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401E60u;
        // 0x401e64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401E68u;
        goto label_401e68;
    }
    ctx->pc = 0x401E60u;
    SET_GPR_U32(ctx, 31, 0x401E68u);
    ctx->pc = 0x401E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401E60u;
    // 0x401e64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x401E60u, 0x401E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401E68u;
label_401e68:
    // 0x401e68: 0x3c022db6  lui         $v0, 0x2DB6
    ctx->pc = 0x401e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11702 << 16));
label_401e6c:
    // 0x401e6c: 0x34421f35  ori         $v0, $v0, 0x1F35
    ctx->pc = 0x401e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7989);
label_401e70:
    // 0x401e70: 0x17c2000d  bne         $fp, $v0, . + 4 + (0xD << 2)
label_401e74:
    if (ctx->pc == 0x401E74u) {
        ctx->pc = 0x401E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401E70u;
        // 0x401e74: 0x3c027f98  lui         $v0, 0x7F98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32664 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401E78u;
        goto label_401e78;
    }
    ctx->pc = 0x401E70u;
    {
        const bool branch_taken_0x401e70 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x401E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401E70u;
        // 0x401e74: 0x3c027f98  lui         $v0, 0x7F98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32664 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401e70) {
            ctx->pc = 0x401EA8u;
            goto label_401ea8;
        }
    }
    ctx->pc = 0x401E78u;
label_401e78:
    // 0x401e78: 0x3c061b1e  lui         $a2, 0x1B1E
    ctx->pc = 0x401e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6942 << 16));
label_401e7c:
    // 0x401e7c: 0x3c074e62  lui         $a3, 0x4E62
    ctx->pc = 0x401e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20066 << 16));
label_401e80:
    // 0x401e80: 0x3c088594  lui         $t0, 0x8594
    ctx->pc = 0x401e80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34196 << 16));
label_401e84:
    // 0x401e84: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x401e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_401e88:
    // 0x401e88: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x401e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_401e8c:
    // 0x401e8c: 0x34c64cff  ori         $a2, $a2, 0x4CFF
    ctx->pc = 0x401e8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19711);
label_401e90:
    // 0x401e90: 0x34e767ff  ori         $a3, $a3, 0x67FF
    ctx->pc = 0x401e90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)26623);
label_401e94:
    // 0x401e94: 0xc0e9a84  jal         func_3A6A10
label_401e98:
    if (ctx->pc == 0x401E98u) {
        ctx->pc = 0x401E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401E94u;
        // 0x401e98: 0x35088d94  ori         $t0, $t0, 0x8D94 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)36244);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401E9Cu;
        goto label_401e9c;
    }
    ctx->pc = 0x401E94u;
    SET_GPR_U32(ctx, 31, 0x401E9Cu);
    ctx->pc = 0x401E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401E94u;
    // 0x401e98: 0x35088d94  ori         $t0, $t0, 0x8D94 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)36244);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A10u, 0x401E94u, 0x401E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401E9Cu;
label_401e9c:
    // 0x401e9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x401e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_401ea0:
    // 0x401ea0: 0xafa2053c  sw          $v0, 0x53C($sp)
    ctx->pc = 0x401ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
label_401ea4:
    // 0x401ea4: 0x3c027f98  lui         $v0, 0x7F98
    ctx->pc = 0x401ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32664 << 16));
label_401ea8:
    // 0x401ea8: 0x34424547  ori         $v0, $v0, 0x4547
    ctx->pc = 0x401ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17735);
label_401eac:
    // 0x401eac: 0x17c20050  bne         $fp, $v0, . + 4 + (0x50 << 2)
label_401eb0:
    if (ctx->pc == 0x401EB0u) {
        ctx->pc = 0x401EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401EACu;
        // 0x401eb0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401EB4u;
        goto label_401eb4;
    }
    ctx->pc = 0x401EACu;
    {
        const bool branch_taken_0x401eac = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x401EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401EACu;
        // 0x401eb0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401eac) {
            ctx->pc = 0x401FF0u;
            goto label_401ff0;
        }
    }
    ctx->pc = 0x401EB4u;
label_401eb4:
    // 0x401eb4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x401eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_401eb8:
    // 0x401eb8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x401eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_401ebc:
    // 0x401ebc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x401ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_401ec0:
    // 0x401ec0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x401ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_401ec4:
    // 0x401ec4: 0xc136b18  jal         func_4DAC60
label_401ec8:
    if (ctx->pc == 0x401EC8u) {
        ctx->pc = 0x401EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401EC4u;
        // 0x401ec8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401ECCu;
        goto label_401ecc;
    }
    ctx->pc = 0x401EC4u;
    SET_GPR_U32(ctx, 31, 0x401ECCu);
    ctx->pc = 0x401EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401EC4u;
    // 0x401ec8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x401EC4u, 0x401ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401ECCu;
label_401ecc:
    // 0x401ecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x401eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_401ed0:
    // 0x401ed0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x401ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_401ed4:
    // 0x401ed4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x401ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_401ed8:
    // 0x401ed8: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x401ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_401edc:
    // 0x401edc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x401edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_401ee0:
    // 0x401ee0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x401ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_401ee4:
    // 0x401ee4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x401ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_401ee8:
    // 0x401ee8: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x401ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_401eec:
    // 0x401eec: 0xc136b24  jal         func_4DAC90
label_401ef0:
    if (ctx->pc == 0x401EF0u) {
        ctx->pc = 0x401EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401EECu;
        // 0x401ef0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401EF4u;
        goto label_401ef4;
    }
    ctx->pc = 0x401EECu;
    SET_GPR_U32(ctx, 31, 0x401EF4u);
    ctx->pc = 0x401EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401EECu;
    // 0x401ef0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x401EECu, 0x401EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401EF4u;
label_401ef4:
    // 0x401ef4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x401ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_401ef8:
    // 0x401ef8: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x401ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_401efc:
    // 0x401efc: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x401efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_401f00:
    // 0x401f00: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x401f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_401f04:
    // 0x401f04: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x401f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_401f08:
    // 0x401f08: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x401f08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
label_401f0c:
    // 0x401f0c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x401f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_401f10:
    // 0x401f10: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x401f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_401f14:
    // 0x401f14: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x401f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_401f18:
    // 0x401f18: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401f18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_401f1c:
    // 0x401f1c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x401f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_401f20:
    // 0x401f20: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x401f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_401f24:
    // 0x401f24: 0x24080055  addiu       $t0, $zero, 0x55
    ctx->pc = 0x401f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_401f28:
    // 0x401f28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401f28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401f2c:
    // 0x401f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_401f30:
    // 0x401f30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401f34:
    // 0x401f34: 0xc0f16c0  jal         func_3C5B00
label_401f38:
    if (ctx->pc == 0x401F38u) {
        ctx->pc = 0x401F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401F34u;
        // 0x401f38: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401F3Cu;
        goto label_401f3c;
    }
    ctx->pc = 0x401F34u;
    SET_GPR_U32(ctx, 31, 0x401F3Cu);
    ctx->pc = 0x401F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401F34u;
    // 0x401f38: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x401F34u, 0x401F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401F3Cu;
label_401f3c:
    // 0x401f3c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x401f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_401f40:
    // 0x401f40: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x401f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_401f44:
    // 0x401f44: 0xc136b18  jal         func_4DAC60
label_401f48:
    if (ctx->pc == 0x401F48u) {
        ctx->pc = 0x401F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401F44u;
        // 0x401f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401F4Cu;
        goto label_401f4c;
    }
    ctx->pc = 0x401F44u;
    SET_GPR_U32(ctx, 31, 0x401F4Cu);
    ctx->pc = 0x401F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401F44u;
    // 0x401f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x401F44u, 0x401F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401F4Cu;
label_401f4c:
    // 0x401f4c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x401f4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_401f50:
    // 0x401f50: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x401f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_401f54:
    // 0x401f54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x401f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_401f58:
    // 0x401f58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x401f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_401f5c:
    // 0x401f5c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x401f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_401f60:
    // 0x401f60: 0xc136b24  jal         func_4DAC90
label_401f64:
    if (ctx->pc == 0x401F64u) {
        ctx->pc = 0x401F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401F60u;
        // 0x401f64: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401F68u;
        goto label_401f68;
    }
    ctx->pc = 0x401F60u;
    SET_GPR_U32(ctx, 31, 0x401F68u);
    ctx->pc = 0x401F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401F60u;
    // 0x401f64: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x401F60u, 0x401F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401F68u;
label_401f68:
    // 0x401f68: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x401f68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_401f6c:
    // 0x401f6c: 0x3c075c3f  lui         $a3, 0x5C3F
    ctx->pc = 0x401f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23615 << 16));
label_401f70:
    // 0x401f70: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x401f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_401f74:
    // 0x401f74: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x401f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_401f78:
    // 0x401f78: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x401f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_401f7c:
    // 0x401f7c: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x401f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
label_401f80:
    // 0x401f80: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x401f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_401f84:
    // 0x401f84: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x401f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_401f88:
    // 0x401f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401f8c:
    // 0x401f8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x401f8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_401f90:
    // 0x401f90: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x401f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_401f94:
    // 0x401f94: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x401f94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_401f98:
    // 0x401f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_401f9c:
    // 0x401f9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x401f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_401fa0:
    // 0x401fa0: 0xc0f16c0  jal         func_3C5B00
label_401fa4:
    if (ctx->pc == 0x401FA4u) {
        ctx->pc = 0x401FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401FA0u;
        // 0x401fa4: 0x34e727ff  ori         $a3, $a3, 0x27FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10239);
        ctx->in_delay_slot = false;
        ctx->pc = 0x401FA8u;
        goto label_401fa8;
    }
    ctx->pc = 0x401FA0u;
    SET_GPR_U32(ctx, 31, 0x401FA8u);
    ctx->pc = 0x401FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401FA0u;
    // 0x401fa4: 0x34e727ff  ori         $a3, $a3, 0x27FF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10239);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x401FA0u, 0x401FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401FA8u;
label_401fa8:
    // 0x401fa8: 0x3c064a48  lui         $a2, 0x4A48
    ctx->pc = 0x401fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19016 << 16));
label_401fac:
    // 0x401fac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x401facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_401fb0:
    // 0x401fb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x401fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_401fb4:
    // 0x401fb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x401fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_401fb8:
    // 0x401fb8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x401fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_401fbc:
    // 0x401fbc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x401fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_401fc0:
    // 0x401fc0: 0x34c642a0  ori         $a2, $a2, 0x42A0
    ctx->pc = 0x401fc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17056);
label_401fc4:
    // 0x401fc4: 0xc0f1658  jal         func_3C5960
label_401fc8:
    if (ctx->pc == 0x401FC8u) {
        ctx->pc = 0x401FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401FC4u;
        // 0x401fc8: 0x24070094  addiu       $a3, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401FCCu;
        goto label_401fcc;
    }
    ctx->pc = 0x401FC4u;
    SET_GPR_U32(ctx, 31, 0x401FCCu);
    ctx->pc = 0x401FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401FC4u;
    // 0x401fc8: 0x24070094  addiu       $a3, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x401FC4u, 0x401FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401FCCu;
label_401fcc:
    // 0x401fcc: 0x3c065c3e  lui         $a2, 0x5C3E
    ctx->pc = 0x401fccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23614 << 16));
label_401fd0:
    // 0x401fd0: 0x3c079f71  lui         $a3, 0x9F71
    ctx->pc = 0x401fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40817 << 16));
label_401fd4:
    // 0x401fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_401fd8:
    // 0x401fd8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x401fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_401fdc:
    // 0x401fdc: 0x34c622ff  ori         $a2, $a2, 0x22FF
    ctx->pc = 0x401fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8959);
label_401fe0:
    // 0x401fe0: 0x34e743ff  ori         $a3, $a3, 0x43FF
    ctx->pc = 0x401fe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17407);
label_401fe4:
    // 0x401fe4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x401fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_401fe8:
    // 0x401fe8: 0xc0e9978  jal         func_3A65E0
label_401fec:
    if (ctx->pc == 0x401FECu) {
        ctx->pc = 0x401FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401FE8u;
        // 0x401fec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x401FF0u;
        goto label_401ff0;
    }
    ctx->pc = 0x401FE8u;
    SET_GPR_U32(ctx, 31, 0x401FF0u);
    ctx->pc = 0x401FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401FE8u;
    // 0x401fec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x401FE8u, 0x401FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401FF0u;
label_401ff0:
    // 0x401ff0: 0x3c02b080  lui         $v0, 0xB080
    ctx->pc = 0x401ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45184 << 16));
label_401ff4:
    // 0x401ff4: 0x3442716a  ori         $v0, $v0, 0x716A
    ctx->pc = 0x401ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29034);
label_401ff8:
    // 0x401ff8: 0x17c20012  bne         $fp, $v0, . + 4 + (0x12 << 2)
label_401ffc:
    if (ctx->pc == 0x401FFCu) {
        ctx->pc = 0x401FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401FF8u;
        // 0x401ffc: 0x3c064a48  lui         $a2, 0x4A48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19016 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402000u;
        goto label_fallthrough_0x401ff8;
    }
    ctx->pc = 0x401FF8u;
    {
        const bool branch_taken_0x401ff8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x401FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401FF8u;
        // 0x401ffc: 0x3c064a48  lui         $a2, 0x4A48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19016 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401ff8) {
            ctx->pc = 0x402044u;
            return;
        }
    }
label_fallthrough_0x401ff8:
    ctx->pc = 0x402000u;
}
