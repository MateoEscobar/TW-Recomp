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

// Function: sub_001A7040
// Address: 0x1a7040 - 0x1a77b0
void sub_001A7040_0x1a7040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7040_0x1a7040");
#endif

    switch (ctx->pc) {
        case 0x1a7040u: goto label_1a7040;
        case 0x1a7044u: goto label_1a7044;
        case 0x1a7048u: goto label_1a7048;
        case 0x1a704cu: goto label_1a704c;
        case 0x1a7050u: goto label_1a7050;
        case 0x1a7054u: goto label_1a7054;
        case 0x1a7058u: goto label_1a7058;
        case 0x1a705cu: goto label_1a705c;
        case 0x1a7060u: goto label_1a7060;
        case 0x1a7064u: goto label_1a7064;
        case 0x1a7068u: goto label_1a7068;
        case 0x1a706cu: goto label_1a706c;
        case 0x1a7070u: goto label_1a7070;
        case 0x1a7074u: goto label_1a7074;
        case 0x1a7078u: goto label_1a7078;
        case 0x1a707cu: goto label_1a707c;
        case 0x1a7080u: goto label_1a7080;
        case 0x1a7084u: goto label_1a7084;
        case 0x1a7088u: goto label_1a7088;
        case 0x1a708cu: goto label_1a708c;
        case 0x1a7090u: goto label_1a7090;
        case 0x1a7094u: goto label_1a7094;
        case 0x1a7098u: goto label_1a7098;
        case 0x1a709cu: goto label_1a709c;
        case 0x1a70a0u: goto label_1a70a0;
        case 0x1a70a4u: goto label_1a70a4;
        case 0x1a70a8u: goto label_1a70a8;
        case 0x1a70acu: goto label_1a70ac;
        case 0x1a70b0u: goto label_1a70b0;
        case 0x1a70b4u: goto label_1a70b4;
        case 0x1a70b8u: goto label_1a70b8;
        case 0x1a70bcu: goto label_1a70bc;
        case 0x1a70c0u: goto label_1a70c0;
        case 0x1a70c4u: goto label_1a70c4;
        case 0x1a70c8u: goto label_1a70c8;
        case 0x1a70ccu: goto label_1a70cc;
        case 0x1a70d0u: goto label_1a70d0;
        case 0x1a70d4u: goto label_1a70d4;
        case 0x1a70d8u: goto label_1a70d8;
        case 0x1a70dcu: goto label_1a70dc;
        case 0x1a70e0u: goto label_1a70e0;
        case 0x1a70e4u: goto label_1a70e4;
        case 0x1a70e8u: goto label_1a70e8;
        case 0x1a70ecu: goto label_1a70ec;
        case 0x1a70f0u: goto label_1a70f0;
        case 0x1a70f4u: goto label_1a70f4;
        case 0x1a70f8u: goto label_1a70f8;
        case 0x1a70fcu: goto label_1a70fc;
        case 0x1a7100u: goto label_1a7100;
        case 0x1a7104u: goto label_1a7104;
        case 0x1a7108u: goto label_1a7108;
        case 0x1a710cu: goto label_1a710c;
        case 0x1a7110u: goto label_1a7110;
        case 0x1a7114u: goto label_1a7114;
        case 0x1a7118u: goto label_1a7118;
        case 0x1a711cu: goto label_1a711c;
        case 0x1a7120u: goto label_1a7120;
        case 0x1a7124u: goto label_1a7124;
        case 0x1a7128u: goto label_1a7128;
        case 0x1a712cu: goto label_1a712c;
        case 0x1a7130u: goto label_1a7130;
        case 0x1a7134u: goto label_1a7134;
        case 0x1a7138u: goto label_1a7138;
        case 0x1a713cu: goto label_1a713c;
        case 0x1a7140u: goto label_1a7140;
        case 0x1a7144u: goto label_1a7144;
        case 0x1a7148u: goto label_1a7148;
        case 0x1a714cu: goto label_1a714c;
        case 0x1a7150u: goto label_1a7150;
        case 0x1a7154u: goto label_1a7154;
        case 0x1a7158u: goto label_1a7158;
        case 0x1a715cu: goto label_1a715c;
        case 0x1a7160u: goto label_1a7160;
        case 0x1a7164u: goto label_1a7164;
        case 0x1a7168u: goto label_1a7168;
        case 0x1a716cu: goto label_1a716c;
        case 0x1a7170u: goto label_1a7170;
        case 0x1a7174u: goto label_1a7174;
        case 0x1a7178u: goto label_1a7178;
        case 0x1a717cu: goto label_1a717c;
        case 0x1a7180u: goto label_1a7180;
        case 0x1a7184u: goto label_1a7184;
        case 0x1a7188u: goto label_1a7188;
        case 0x1a718cu: goto label_1a718c;
        case 0x1a7190u: goto label_1a7190;
        case 0x1a7194u: goto label_1a7194;
        case 0x1a7198u: goto label_1a7198;
        case 0x1a719cu: goto label_1a719c;
        case 0x1a71a0u: goto label_1a71a0;
        case 0x1a71a4u: goto label_1a71a4;
        case 0x1a71a8u: goto label_1a71a8;
        case 0x1a71acu: goto label_1a71ac;
        case 0x1a71b0u: goto label_1a71b0;
        case 0x1a71b4u: goto label_1a71b4;
        case 0x1a71b8u: goto label_1a71b8;
        case 0x1a71bcu: goto label_1a71bc;
        case 0x1a71c0u: goto label_1a71c0;
        case 0x1a71c4u: goto label_1a71c4;
        case 0x1a71c8u: goto label_1a71c8;
        case 0x1a71ccu: goto label_1a71cc;
        case 0x1a71d0u: goto label_1a71d0;
        case 0x1a71d4u: goto label_1a71d4;
        case 0x1a71d8u: goto label_1a71d8;
        case 0x1a71dcu: goto label_1a71dc;
        case 0x1a71e0u: goto label_1a71e0;
        case 0x1a71e4u: goto label_1a71e4;
        case 0x1a71e8u: goto label_1a71e8;
        case 0x1a71ecu: goto label_1a71ec;
        case 0x1a71f0u: goto label_1a71f0;
        case 0x1a71f4u: goto label_1a71f4;
        case 0x1a71f8u: goto label_1a71f8;
        case 0x1a71fcu: goto label_1a71fc;
        case 0x1a7200u: goto label_1a7200;
        case 0x1a7204u: goto label_1a7204;
        case 0x1a7208u: goto label_1a7208;
        case 0x1a720cu: goto label_1a720c;
        case 0x1a7210u: goto label_1a7210;
        case 0x1a7214u: goto label_1a7214;
        case 0x1a7218u: goto label_1a7218;
        case 0x1a721cu: goto label_1a721c;
        case 0x1a7220u: goto label_1a7220;
        case 0x1a7224u: goto label_1a7224;
        case 0x1a7228u: goto label_1a7228;
        case 0x1a722cu: goto label_1a722c;
        case 0x1a7230u: goto label_1a7230;
        case 0x1a7234u: goto label_1a7234;
        case 0x1a7238u: goto label_1a7238;
        case 0x1a723cu: goto label_1a723c;
        case 0x1a7240u: goto label_1a7240;
        case 0x1a7244u: goto label_1a7244;
        case 0x1a7248u: goto label_1a7248;
        case 0x1a724cu: goto label_1a724c;
        case 0x1a7250u: goto label_1a7250;
        case 0x1a7254u: goto label_1a7254;
        case 0x1a7258u: goto label_1a7258;
        case 0x1a725cu: goto label_1a725c;
        case 0x1a7260u: goto label_1a7260;
        case 0x1a7264u: goto label_1a7264;
        case 0x1a7268u: goto label_1a7268;
        case 0x1a726cu: goto label_1a726c;
        case 0x1a7270u: goto label_1a7270;
        case 0x1a7274u: goto label_1a7274;
        case 0x1a7278u: goto label_1a7278;
        case 0x1a727cu: goto label_1a727c;
        case 0x1a7280u: goto label_1a7280;
        case 0x1a7284u: goto label_1a7284;
        case 0x1a7288u: goto label_1a7288;
        case 0x1a728cu: goto label_1a728c;
        case 0x1a7290u: goto label_1a7290;
        case 0x1a7294u: goto label_1a7294;
        case 0x1a7298u: goto label_1a7298;
        case 0x1a729cu: goto label_1a729c;
        case 0x1a72a0u: goto label_1a72a0;
        case 0x1a72a4u: goto label_1a72a4;
        case 0x1a72a8u: goto label_1a72a8;
        case 0x1a72acu: goto label_1a72ac;
        case 0x1a72b0u: goto label_1a72b0;
        case 0x1a72b4u: goto label_1a72b4;
        case 0x1a72b8u: goto label_1a72b8;
        case 0x1a72bcu: goto label_1a72bc;
        case 0x1a72c0u: goto label_1a72c0;
        case 0x1a72c4u: goto label_1a72c4;
        case 0x1a72c8u: goto label_1a72c8;
        case 0x1a72ccu: goto label_1a72cc;
        case 0x1a72d0u: goto label_1a72d0;
        case 0x1a72d4u: goto label_1a72d4;
        case 0x1a72d8u: goto label_1a72d8;
        case 0x1a72dcu: goto label_1a72dc;
        case 0x1a72e0u: goto label_1a72e0;
        case 0x1a72e4u: goto label_1a72e4;
        case 0x1a72e8u: goto label_1a72e8;
        case 0x1a72ecu: goto label_1a72ec;
        case 0x1a72f0u: goto label_1a72f0;
        case 0x1a72f4u: goto label_1a72f4;
        case 0x1a72f8u: goto label_1a72f8;
        case 0x1a72fcu: goto label_1a72fc;
        case 0x1a7300u: goto label_1a7300;
        case 0x1a7304u: goto label_1a7304;
        case 0x1a7308u: goto label_1a7308;
        case 0x1a730cu: goto label_1a730c;
        case 0x1a7310u: goto label_1a7310;
        case 0x1a7314u: goto label_1a7314;
        case 0x1a7318u: goto label_1a7318;
        case 0x1a731cu: goto label_1a731c;
        case 0x1a7320u: goto label_1a7320;
        case 0x1a7324u: goto label_1a7324;
        case 0x1a7328u: goto label_1a7328;
        case 0x1a732cu: goto label_1a732c;
        case 0x1a7330u: goto label_1a7330;
        case 0x1a7334u: goto label_1a7334;
        case 0x1a7338u: goto label_1a7338;
        case 0x1a733cu: goto label_1a733c;
        case 0x1a7340u: goto label_1a7340;
        case 0x1a7344u: goto label_1a7344;
        case 0x1a7348u: goto label_1a7348;
        case 0x1a734cu: goto label_1a734c;
        case 0x1a7350u: goto label_1a7350;
        case 0x1a7354u: goto label_1a7354;
        case 0x1a7358u: goto label_1a7358;
        case 0x1a735cu: goto label_1a735c;
        case 0x1a7360u: goto label_1a7360;
        case 0x1a7364u: goto label_1a7364;
        case 0x1a7368u: goto label_1a7368;
        case 0x1a736cu: goto label_1a736c;
        case 0x1a7370u: goto label_1a7370;
        case 0x1a7374u: goto label_1a7374;
        case 0x1a7378u: goto label_1a7378;
        case 0x1a737cu: goto label_1a737c;
        case 0x1a7380u: goto label_1a7380;
        case 0x1a7384u: goto label_1a7384;
        case 0x1a7388u: goto label_1a7388;
        case 0x1a738cu: goto label_1a738c;
        case 0x1a7390u: goto label_1a7390;
        case 0x1a7394u: goto label_1a7394;
        case 0x1a7398u: goto label_1a7398;
        case 0x1a739cu: goto label_1a739c;
        case 0x1a73a0u: goto label_1a73a0;
        case 0x1a73a4u: goto label_1a73a4;
        case 0x1a73a8u: goto label_1a73a8;
        case 0x1a73acu: goto label_1a73ac;
        case 0x1a73b0u: goto label_1a73b0;
        case 0x1a73b4u: goto label_1a73b4;
        case 0x1a73b8u: goto label_1a73b8;
        case 0x1a73bcu: goto label_1a73bc;
        case 0x1a73c0u: goto label_1a73c0;
        case 0x1a73c4u: goto label_1a73c4;
        case 0x1a73c8u: goto label_1a73c8;
        case 0x1a73ccu: goto label_1a73cc;
        case 0x1a73d0u: goto label_1a73d0;
        case 0x1a73d4u: goto label_1a73d4;
        case 0x1a73d8u: goto label_1a73d8;
        case 0x1a73dcu: goto label_1a73dc;
        case 0x1a73e0u: goto label_1a73e0;
        case 0x1a73e4u: goto label_1a73e4;
        case 0x1a73e8u: goto label_1a73e8;
        case 0x1a73ecu: goto label_1a73ec;
        case 0x1a73f0u: goto label_1a73f0;
        case 0x1a73f4u: goto label_1a73f4;
        case 0x1a73f8u: goto label_1a73f8;
        case 0x1a73fcu: goto label_1a73fc;
        case 0x1a7400u: goto label_1a7400;
        case 0x1a7404u: goto label_1a7404;
        case 0x1a7408u: goto label_1a7408;
        case 0x1a740cu: goto label_1a740c;
        case 0x1a7410u: goto label_1a7410;
        case 0x1a7414u: goto label_1a7414;
        case 0x1a7418u: goto label_1a7418;
        case 0x1a741cu: goto label_1a741c;
        case 0x1a7420u: goto label_1a7420;
        case 0x1a7424u: goto label_1a7424;
        case 0x1a7428u: goto label_1a7428;
        case 0x1a742cu: goto label_1a742c;
        case 0x1a7430u: goto label_1a7430;
        case 0x1a7434u: goto label_1a7434;
        case 0x1a7438u: goto label_1a7438;
        case 0x1a743cu: goto label_1a743c;
        case 0x1a7440u: goto label_1a7440;
        case 0x1a7444u: goto label_1a7444;
        case 0x1a7448u: goto label_1a7448;
        case 0x1a744cu: goto label_1a744c;
        case 0x1a7450u: goto label_1a7450;
        case 0x1a7454u: goto label_1a7454;
        case 0x1a7458u: goto label_1a7458;
        case 0x1a745cu: goto label_1a745c;
        case 0x1a7460u: goto label_1a7460;
        case 0x1a7464u: goto label_1a7464;
        case 0x1a7468u: goto label_1a7468;
        case 0x1a746cu: goto label_1a746c;
        case 0x1a7470u: goto label_1a7470;
        case 0x1a7474u: goto label_1a7474;
        case 0x1a7478u: goto label_1a7478;
        case 0x1a747cu: goto label_1a747c;
        case 0x1a7480u: goto label_1a7480;
        case 0x1a7484u: goto label_1a7484;
        case 0x1a7488u: goto label_1a7488;
        case 0x1a748cu: goto label_1a748c;
        case 0x1a7490u: goto label_1a7490;
        case 0x1a7494u: goto label_1a7494;
        case 0x1a7498u: goto label_1a7498;
        case 0x1a749cu: goto label_1a749c;
        case 0x1a74a0u: goto label_1a74a0;
        case 0x1a74a4u: goto label_1a74a4;
        case 0x1a74a8u: goto label_1a74a8;
        case 0x1a74acu: goto label_1a74ac;
        case 0x1a74b0u: goto label_1a74b0;
        case 0x1a74b4u: goto label_1a74b4;
        case 0x1a74b8u: goto label_1a74b8;
        case 0x1a74bcu: goto label_1a74bc;
        case 0x1a74c0u: goto label_1a74c0;
        case 0x1a74c4u: goto label_1a74c4;
        case 0x1a74c8u: goto label_1a74c8;
        case 0x1a74ccu: goto label_1a74cc;
        case 0x1a74d0u: goto label_1a74d0;
        case 0x1a74d4u: goto label_1a74d4;
        case 0x1a74d8u: goto label_1a74d8;
        case 0x1a74dcu: goto label_1a74dc;
        case 0x1a74e0u: goto label_1a74e0;
        case 0x1a74e4u: goto label_1a74e4;
        case 0x1a74e8u: goto label_1a74e8;
        case 0x1a74ecu: goto label_1a74ec;
        case 0x1a74f0u: goto label_1a74f0;
        case 0x1a74f4u: goto label_1a74f4;
        case 0x1a74f8u: goto label_1a74f8;
        case 0x1a74fcu: goto label_1a74fc;
        case 0x1a7500u: goto label_1a7500;
        case 0x1a7504u: goto label_1a7504;
        case 0x1a7508u: goto label_1a7508;
        case 0x1a750cu: goto label_1a750c;
        case 0x1a7510u: goto label_1a7510;
        case 0x1a7514u: goto label_1a7514;
        case 0x1a7518u: goto label_1a7518;
        case 0x1a751cu: goto label_1a751c;
        case 0x1a7520u: goto label_1a7520;
        case 0x1a7524u: goto label_1a7524;
        case 0x1a7528u: goto label_1a7528;
        case 0x1a752cu: goto label_1a752c;
        case 0x1a7530u: goto label_1a7530;
        case 0x1a7534u: goto label_1a7534;
        case 0x1a7538u: goto label_1a7538;
        case 0x1a753cu: goto label_1a753c;
        case 0x1a7540u: goto label_1a7540;
        case 0x1a7544u: goto label_1a7544;
        case 0x1a7548u: goto label_1a7548;
        case 0x1a754cu: goto label_1a754c;
        case 0x1a7550u: goto label_1a7550;
        case 0x1a7554u: goto label_1a7554;
        case 0x1a7558u: goto label_1a7558;
        case 0x1a755cu: goto label_1a755c;
        case 0x1a7560u: goto label_1a7560;
        case 0x1a7564u: goto label_1a7564;
        case 0x1a7568u: goto label_1a7568;
        case 0x1a756cu: goto label_1a756c;
        case 0x1a7570u: goto label_1a7570;
        case 0x1a7574u: goto label_1a7574;
        case 0x1a7578u: goto label_1a7578;
        case 0x1a757cu: goto label_1a757c;
        case 0x1a7580u: goto label_1a7580;
        case 0x1a7584u: goto label_1a7584;
        case 0x1a7588u: goto label_1a7588;
        case 0x1a758cu: goto label_1a758c;
        case 0x1a7590u: goto label_1a7590;
        case 0x1a7594u: goto label_1a7594;
        case 0x1a7598u: goto label_1a7598;
        case 0x1a759cu: goto label_1a759c;
        case 0x1a75a0u: goto label_1a75a0;
        case 0x1a75a4u: goto label_1a75a4;
        case 0x1a75a8u: goto label_1a75a8;
        case 0x1a75acu: goto label_1a75ac;
        case 0x1a75b0u: goto label_1a75b0;
        case 0x1a75b4u: goto label_1a75b4;
        case 0x1a75b8u: goto label_1a75b8;
        case 0x1a75bcu: goto label_1a75bc;
        case 0x1a75c0u: goto label_1a75c0;
        case 0x1a75c4u: goto label_1a75c4;
        case 0x1a75c8u: goto label_1a75c8;
        case 0x1a75ccu: goto label_1a75cc;
        case 0x1a75d0u: goto label_1a75d0;
        case 0x1a75d4u: goto label_1a75d4;
        case 0x1a75d8u: goto label_1a75d8;
        case 0x1a75dcu: goto label_1a75dc;
        case 0x1a75e0u: goto label_1a75e0;
        case 0x1a75e4u: goto label_1a75e4;
        case 0x1a75e8u: goto label_1a75e8;
        case 0x1a75ecu: goto label_1a75ec;
        case 0x1a75f0u: goto label_1a75f0;
        case 0x1a75f4u: goto label_1a75f4;
        case 0x1a75f8u: goto label_1a75f8;
        case 0x1a75fcu: goto label_1a75fc;
        case 0x1a7600u: goto label_1a7600;
        case 0x1a7604u: goto label_1a7604;
        case 0x1a7608u: goto label_1a7608;
        case 0x1a760cu: goto label_1a760c;
        case 0x1a7610u: goto label_1a7610;
        case 0x1a7614u: goto label_1a7614;
        case 0x1a7618u: goto label_1a7618;
        case 0x1a761cu: goto label_1a761c;
        case 0x1a7620u: goto label_1a7620;
        case 0x1a7624u: goto label_1a7624;
        case 0x1a7628u: goto label_1a7628;
        case 0x1a762cu: goto label_1a762c;
        case 0x1a7630u: goto label_1a7630;
        case 0x1a7634u: goto label_1a7634;
        case 0x1a7638u: goto label_1a7638;
        case 0x1a763cu: goto label_1a763c;
        case 0x1a7640u: goto label_1a7640;
        case 0x1a7644u: goto label_1a7644;
        case 0x1a7648u: goto label_1a7648;
        case 0x1a764cu: goto label_1a764c;
        case 0x1a7650u: goto label_1a7650;
        case 0x1a7654u: goto label_1a7654;
        case 0x1a7658u: goto label_1a7658;
        case 0x1a765cu: goto label_1a765c;
        case 0x1a7660u: goto label_1a7660;
        case 0x1a7664u: goto label_1a7664;
        case 0x1a7668u: goto label_1a7668;
        case 0x1a766cu: goto label_1a766c;
        case 0x1a7670u: goto label_1a7670;
        case 0x1a7674u: goto label_1a7674;
        case 0x1a7678u: goto label_1a7678;
        case 0x1a767cu: goto label_1a767c;
        case 0x1a7680u: goto label_1a7680;
        case 0x1a7684u: goto label_1a7684;
        case 0x1a7688u: goto label_1a7688;
        case 0x1a768cu: goto label_1a768c;
        case 0x1a7690u: goto label_1a7690;
        case 0x1a7694u: goto label_1a7694;
        case 0x1a7698u: goto label_1a7698;
        case 0x1a769cu: goto label_1a769c;
        case 0x1a76a0u: goto label_1a76a0;
        case 0x1a76a4u: goto label_1a76a4;
        case 0x1a76a8u: goto label_1a76a8;
        case 0x1a76acu: goto label_1a76ac;
        case 0x1a76b0u: goto label_1a76b0;
        case 0x1a76b4u: goto label_1a76b4;
        case 0x1a76b8u: goto label_1a76b8;
        case 0x1a76bcu: goto label_1a76bc;
        case 0x1a76c0u: goto label_1a76c0;
        case 0x1a76c4u: goto label_1a76c4;
        case 0x1a76c8u: goto label_1a76c8;
        case 0x1a76ccu: goto label_1a76cc;
        case 0x1a76d0u: goto label_1a76d0;
        case 0x1a76d4u: goto label_1a76d4;
        case 0x1a76d8u: goto label_1a76d8;
        case 0x1a76dcu: goto label_1a76dc;
        case 0x1a76e0u: goto label_1a76e0;
        case 0x1a76e4u: goto label_1a76e4;
        case 0x1a76e8u: goto label_1a76e8;
        case 0x1a76ecu: goto label_1a76ec;
        case 0x1a76f0u: goto label_1a76f0;
        case 0x1a76f4u: goto label_1a76f4;
        case 0x1a76f8u: goto label_1a76f8;
        case 0x1a76fcu: goto label_1a76fc;
        case 0x1a7700u: goto label_1a7700;
        case 0x1a7704u: goto label_1a7704;
        case 0x1a7708u: goto label_1a7708;
        case 0x1a770cu: goto label_1a770c;
        case 0x1a7710u: goto label_1a7710;
        case 0x1a7714u: goto label_1a7714;
        case 0x1a7718u: goto label_1a7718;
        case 0x1a771cu: goto label_1a771c;
        case 0x1a7720u: goto label_1a7720;
        case 0x1a7724u: goto label_1a7724;
        case 0x1a7728u: goto label_1a7728;
        case 0x1a772cu: goto label_1a772c;
        case 0x1a7730u: goto label_1a7730;
        case 0x1a7734u: goto label_1a7734;
        case 0x1a7738u: goto label_1a7738;
        case 0x1a773cu: goto label_1a773c;
        case 0x1a7740u: goto label_1a7740;
        case 0x1a7744u: goto label_1a7744;
        case 0x1a7748u: goto label_1a7748;
        case 0x1a774cu: goto label_1a774c;
        case 0x1a7750u: goto label_1a7750;
        case 0x1a7754u: goto label_1a7754;
        case 0x1a7758u: goto label_1a7758;
        case 0x1a775cu: goto label_1a775c;
        case 0x1a7760u: goto label_1a7760;
        case 0x1a7764u: goto label_1a7764;
        case 0x1a7768u: goto label_1a7768;
        case 0x1a776cu: goto label_1a776c;
        case 0x1a7770u: goto label_1a7770;
        case 0x1a7774u: goto label_1a7774;
        case 0x1a7778u: goto label_1a7778;
        case 0x1a777cu: goto label_1a777c;
        case 0x1a7780u: goto label_1a7780;
        case 0x1a7784u: goto label_1a7784;
        case 0x1a7788u: goto label_1a7788;
        case 0x1a778cu: goto label_1a778c;
        case 0x1a7790u: goto label_1a7790;
        case 0x1a7794u: goto label_1a7794;
        case 0x1a7798u: goto label_1a7798;
        case 0x1a779cu: goto label_1a779c;
        case 0x1a77a0u: goto label_1a77a0;
        case 0x1a77a4u: goto label_1a77a4;
        case 0x1a77a8u: goto label_1a77a8;
        case 0x1a77acu: goto label_1a77ac;
        default: break;
    }

    ctx->pc = 0x1a7040u;

label_1a7040:
    // 0x1a7040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a7040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a7044:
    // 0x1a7044: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a7044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a7048:
    // 0x1a7048: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1a7048u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1a704c:
    // 0x1a704c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a704cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a7050:
    // 0x1a7050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a7054:
    // 0x1a7054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7058:
    // 0x1a7058: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a7058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1a705c:
    // 0x1a705c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1a705cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1a7060:
    // 0x1a7060: 0x8e020694  lw          $v0, 0x694($s0)
    ctx->pc = 0x1a7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
label_1a7064:
    // 0x1a7064: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x1a7064u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_1a7068:
    // 0x1a7068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a706c:
    // 0x1a706c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1a7070:
    if (ctx->pc == 0x1A7070u) {
        ctx->pc = 0x1A7070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A706Cu;
        // 0x1a7070: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7074u;
        goto label_1a7074;
    }
    ctx->pc = 0x1A706Cu;
    {
        const bool branch_taken_0x1a706c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A706Cu;
        // 0x1a7070: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a706c) {
            ctx->pc = 0x1A7098u;
            goto label_1a7098;
        }
    }
    ctx->pc = 0x1A7074u;
label_1a7074:
    // 0x1a7074: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x1a7074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_1a7078:
    // 0x1a7078: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a707c:
    // 0x1a707c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a707cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a7080:
    // 0x1a7080: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a7080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a7084:
    // 0x1a7084: 0x40f809  jalr        $v0
label_1a7088:
    if (ctx->pc == 0x1A7088u) {
        ctx->pc = 0x1A7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7084u;
        // 0x1a7088: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A708Cu;
        goto label_1a708c;
    }
    ctx->pc = 0x1A7084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A708Cu);
        ctx->pc = 0x1A7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7084u;
        // 0x1a7088: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7084u, 0x1A708Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A708Cu;
label_1a708c:
    // 0x1a708c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7090:
    // 0x1a7090: 0xae620690  sw          $v0, 0x690($s3)
    ctx->pc = 0x1a7090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
label_1a7094:
    // 0x1a7094: 0xae030694  sw          $v1, 0x694($s0)
    ctx->pc = 0x1a7094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 3));
label_1a7098:
    // 0x1a7098: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x1a7098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_1a709c:
    // 0x1a709c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a70a0:
    // 0x1a70a0: 0x8c50d280  lw          $s0, -0x2D80($v0)
    ctx->pc = 0x1a70a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955648)));
label_1a70a4:
    // 0x1a70a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a70a8:
    // 0x1a70a8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a70a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a70ac:
    // 0x1a70ac: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a70b0:
    // 0x1a70b0: 0x40f809  jalr        $v0
label_1a70b4:
    if (ctx->pc == 0x1A70B4u) {
        ctx->pc = 0x1A70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70B0u;
        // 0x1a70b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A70B8u;
        goto label_1a70b8;
    }
    ctx->pc = 0x1A70B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A70B8u);
        ctx->pc = 0x1A70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70B0u;
        // 0x1a70b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A70B0u, 0x1A70B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A70B8u;
label_1a70b8:
    // 0x1a70b8: 0x8e630690  lw          $v1, 0x690($s3)
    ctx->pc = 0x1a70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1680)));
label_1a70bc:
    // 0x1a70bc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a70bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a70c0:
    // 0x1a70c0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1a70c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a70c4:
    // 0x1a70c4: 0x106001b1  beqz        $v1, . + 4 + (0x1B1 << 2)
label_1a70c8:
    if (ctx->pc == 0x1A70C8u) {
        ctx->pc = 0x1A70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70C4u;
        // 0x1a70c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A70CCu;
        goto label_1a70cc;
    }
    ctx->pc = 0x1A70C4u;
    {
        const bool branch_taken_0x1a70c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70C4u;
        // 0x1a70c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70c4) {
            ctx->pc = 0x1A778Cu;
            goto label_1a778c;
        }
    }
    ctx->pc = 0x1A70CCu;
label_1a70cc:
    // 0x1a70cc: 0x8e221570  lw          $v0, 0x1570($s1)
    ctx->pc = 0x1a70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5488)));
label_1a70d0:
    // 0x1a70d0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1a70d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1a70d4:
    // 0x1a70d4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1a70d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_1a70d8:
    // 0x1a70d8: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x1a70d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
label_1a70dc:
    // 0x1a70dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a70dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a70e0:
    // 0x1a70e0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1a70e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a70e4:
    // 0x1a70e4: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x1a70e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_1a70e8:
    // 0x1a70e8: 0x3c01463d  lui         $at, 0x463D
    ctx->pc = 0x1a70e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17981 << 16));
label_1a70ec:
    // 0x1a70ec: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x1a70ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
label_1a70f0:
    // 0x1a70f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a70f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a70f4:
    // 0x1a70f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a70f8:
    // 0x1a70f8: 0x9044001b  lbu         $a0, 0x1B($v0)
    ctx->pc = 0x1a70f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_1a70fc:
    // 0x1a70fc: 0x9043001a  lbu         $v1, 0x1A($v0)
    ctx->pc = 0x1a70fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26)));
label_1a7100:
    // 0x1a7100: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1a7100u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a7104:
    // 0x1a7104: 0x0  nop
    ctx->pc = 0x1a7104u;
    // NOP
label_1a7108:
    // 0x1a7108: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1a7108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1a710c:
    // 0x1a710c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1a710cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1a7110:
    // 0x1a7110: 0x0  nop
    ctx->pc = 0x1a7110u;
    // NOP
label_1a7114:
    // 0x1a7114: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1a7114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1a7118:
    // 0x1a7118: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x1a7118u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1a711c:
    // 0x1a711c: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x1a711cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_1a7120:
    // 0x1a7120: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a7120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1a7124:
    // 0x1a7124: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a7124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1a7128:
    // 0x1a7128: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a7128u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a712c:
    // 0x1a712c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1a712cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7130:
    // 0x1a7130: 0x0  nop
    ctx->pc = 0x1a7130u;
    // NOP
label_1a7134:
    // 0x1a7134: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a7138:
    if (ctx->pc == 0x1A7138u) {
        ctx->pc = 0x1A7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7134u;
        // 0x1a7138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A713Cu;
        goto label_1a713c;
    }
    ctx->pc = 0x1A7134u;
    {
        const bool branch_taken_0x1a7134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7134u;
        // 0x1a7138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7134) {
            ctx->pc = 0x1A7140u;
            goto label_1a7140;
        }
    }
    ctx->pc = 0x1A713Cu;
label_1a713c:
    // 0x1a713c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7140:
    // 0x1a7140: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_1a7144:
    if (ctx->pc == 0x1A7144u) {
        ctx->pc = 0x1A7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7140u;
        // 0x1a7144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7148u;
        goto label_1a7148;
    }
    ctx->pc = 0x1A7140u;
    {
        const bool branch_taken_0x1a7140 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7140u;
        // 0x1a7144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7140) {
            ctx->pc = 0x1A7150u;
            goto label_1a7150;
        }
    }
    ctx->pc = 0x1A7148u;
label_1a7148:
    // 0x1a7148: 0x10000190  b           . + 4 + (0x190 << 2)
label_1a714c:
    if (ctx->pc == 0x1A714Cu) {
        ctx->pc = 0x1A714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7148u;
        // 0x1a714c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7150u;
        goto label_1a7150;
    }
    ctx->pc = 0x1A7148u;
    {
        const bool branch_taken_0x1a7148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7148u;
        // 0x1a714c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7148) {
            ctx->pc = 0x1A778Cu;
            goto label_1a778c;
        }
    }
    ctx->pc = 0x1A7150u;
label_1a7150:
    // 0x1a7150: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1a7150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_1a7154:
    // 0x1a7154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a7158:
    // 0x1a7158: 0xae221560  sw          $v0, 0x1560($s1)
    ctx->pc = 0x1a7158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5472), GPR_U32(ctx, 2));
label_1a715c:
    // 0x1a715c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1a715cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7160:
    // 0x1a7160: 0x0  nop
    ctx->pc = 0x1a7160u;
    // NOP
label_1a7164:
    // 0x1a7164: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1a7168:
    if (ctx->pc == 0x1A7168u) {
        ctx->pc = 0x1A7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7164u;
        // 0x1a7168: 0x8e301540  lw          $s0, 0x1540($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A716Cu;
        goto label_1a716c;
    }
    ctx->pc = 0x1A7164u;
    {
        const bool branch_taken_0x1a7164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7164u;
        // 0x1a7168: 0x8e301540  lw          $s0, 0x1540($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7164) {
            ctx->pc = 0x1A7190u;
            goto label_1a7190;
        }
    }
    ctx->pc = 0x1A716Cu;
label_1a716c:
    // 0x1a716c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1a716cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7170:
    // 0x1a7170: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1a7170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1a7174:
    // 0x1a7174: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a7174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a7178:
    // 0x1a7178: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a7178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a717c:
    // 0x1a717c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1a7180:
    if (ctx->pc == 0x1A7180u) {
        ctx->pc = 0x1A7184u;
        goto label_1a7184;
    }
    ctx->pc = 0x1A717Cu;
    {
        const bool branch_taken_0x1a717c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a717c) {
            ctx->pc = 0x1A71BCu;
            goto label_1a71bc;
        }
    }
    ctx->pc = 0x1A7184u;
label_1a7184:
    // 0x1a7184: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a7184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a7188:
    // 0x1a7188: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a718c:
    if (ctx->pc == 0x1A718Cu) {
        ctx->pc = 0x1A7190u;
        goto label_1a7190;
    }
    ctx->pc = 0x1A7188u;
    {
        const bool branch_taken_0x1a7188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7188) {
            ctx->pc = 0x1A71B4u;
            goto label_1a71b4;
        }
    }
    ctx->pc = 0x1A7190u;
label_1a7190:
    // 0x1a7190: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1a7190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7194:
    // 0x1a7194: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1a7194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1a7198:
    // 0x1a7198: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a7198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a719c:
    // 0x1a719c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a719cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a71a0:
    // 0x1a71a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1a71a4:
    if (ctx->pc == 0x1A71A4u) {
        ctx->pc = 0x1A71A8u;
        goto label_1a71a8;
    }
    ctx->pc = 0x1A71A0u;
    {
        const bool branch_taken_0x1a71a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71a0) {
            ctx->pc = 0x1A71B4u;
            goto label_1a71b4;
        }
    }
    ctx->pc = 0x1A71A8u;
label_1a71a8:
    // 0x1a71a8: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x1a71a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
label_1a71ac:
    // 0x1a71ac: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x1a71acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_1a71b0:
    // 0x1a71b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a71b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a71b4:
    // 0x1a71b4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1a71b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_1a71b8:
    // 0x1a71b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a71b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a71bc:
    // 0x1a71bc: 0x0  nop
    ctx->pc = 0x1a71bcu;
    // NOP
label_1a71c0:
    // 0x1a71c0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1a71c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a71c4:
    // 0x1a71c4: 0x0  nop
    ctx->pc = 0x1a71c4u;
    // NOP
label_1a71c8:
    // 0x1a71c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1a71cc:
    if (ctx->pc == 0x1A71CCu) {
        ctx->pc = 0x1A71D0u;
        goto label_1a71d0;
    }
    ctx->pc = 0x1A71C8u;
    {
        const bool branch_taken_0x1a71c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71c8) {
            ctx->pc = 0x1A71E0u;
            goto label_1a71e0;
        }
    }
    ctx->pc = 0x1A71D0u;
label_1a71d0:
    // 0x1a71d0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a71d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a71d4:
    // 0x1a71d4: 0x0  nop
    ctx->pc = 0x1a71d4u;
    // NOP
label_1a71d8:
    // 0x1a71d8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_1a71dc:
    if (ctx->pc == 0x1A71DCu) {
        ctx->pc = 0x1A71E0u;
        goto label_1a71e0;
    }
    ctx->pc = 0x1A71D8u;
    {
        const bool branch_taken_0x1a71d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71d8) {
            ctx->pc = 0x1A7200u;
            goto label_1a7200;
        }
    }
    ctx->pc = 0x1A71E0u;
label_1a71e0:
    // 0x1a71e0: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1a71e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a71e4:
    // 0x1a71e4: 0x0  nop
    ctx->pc = 0x1a71e4u;
    // NOP
label_1a71e8:
    // 0x1a71e8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_1a71ec:
    if (ctx->pc == 0x1A71ECu) {
        ctx->pc = 0x1A71F0u;
        goto label_1a71f0;
    }
    ctx->pc = 0x1A71E8u;
    {
        const bool branch_taken_0x1a71e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71e8) {
            ctx->pc = 0x1A7260u;
            goto label_1a7260;
        }
    }
    ctx->pc = 0x1A71F0u;
label_1a71f0:
    // 0x1a71f0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1a71f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a71f4:
    // 0x1a71f4: 0x0  nop
    ctx->pc = 0x1a71f4u;
    // NOP
label_1a71f8:
    // 0x1a71f8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1a71fc:
    if (ctx->pc == 0x1A71FCu) {
        ctx->pc = 0x1A7200u;
        goto label_1a7200;
    }
    ctx->pc = 0x1A71F8u;
    {
        const bool branch_taken_0x1a71f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71f8) {
            ctx->pc = 0x1A7260u;
            goto label_1a7260;
        }
    }
    ctx->pc = 0x1A7200u;
label_1a7200:
    // 0x1a7200: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1a7200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_1a7204:
    // 0x1a7204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a7208:
    // 0x1a7208: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x1a7208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
label_1a720c:
    // 0x1a720c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a720cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7210:
    // 0x1a7210: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1a7210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1a7214:
    // 0x1a7214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a7214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a7218:
    // 0x1a7218: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a7218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a721c:
    // 0x1a721c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1a721cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1a7220:
    // 0x1a7220: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a7220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a7224:
    // 0x1a7224: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1a7224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7228:
    // 0x1a7228: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1a7228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1a722c:
    // 0x1a722c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a722cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a7230:
    // 0x1a7230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a7234:
    // 0x1a7234: 0x4503002f  bc1tl       . + 4 + (0x2F << 2)
label_1a7238:
    if (ctx->pc == 0x1A7238u) {
        ctx->pc = 0x1A7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7234u;
        // 0x1a7238: 0x4600a0c0  add.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A723Cu;
        goto label_1a723c;
    }
    ctx->pc = 0x1A7234u;
    {
        const bool branch_taken_0x1a7234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7234) {
            ctx->pc = 0x1A7238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7234u;
            // 0x1a7238: 0x4600a0c0  add.s       $f3, $f20, $f0 (Delay Slot)
            ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A72F4u;
            goto label_1a72f4;
        }
    }
    ctx->pc = 0x1A723Cu;
label_1a723c:
    // 0x1a723c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a723cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1a7240:
    // 0x1a7240: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a7244:
    // 0x1a7244: 0x0  nop
    ctx->pc = 0x1a7244u;
    // NOP
label_1a7248:
    // 0x1a7248: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a7248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a724c:
    // 0x1a724c: 0x0  nop
    ctx->pc = 0x1a724cu;
    // NOP
label_1a7250:
    // 0x1a7250: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_1a7254:
    if (ctx->pc == 0x1A7254u) {
        ctx->pc = 0x1A7258u;
        goto label_1a7258;
    }
    ctx->pc = 0x1A7250u;
    {
        const bool branch_taken_0x1a7250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7250) {
            ctx->pc = 0x1A72B8u;
            goto label_1a72b8;
        }
    }
    ctx->pc = 0x1A7258u;
label_1a7258:
    // 0x1a7258: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1a725c:
    if (ctx->pc == 0x1A725Cu) {
        ctx->pc = 0x1A725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7258u;
        // 0x1a725c: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7260u;
        goto label_1a7260;
    }
    ctx->pc = 0x1A7258u;
    {
        const bool branch_taken_0x1a7258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7258u;
        // 0x1a725c: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7258) {
            ctx->pc = 0x1A72CCu;
            goto label_1a72cc;
        }
    }
    ctx->pc = 0x1A7260u;
label_1a7260:
    // 0x1a7260: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1a7260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_1a7264:
    // 0x1a7264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a7268:
    // 0x1a7268: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x1a7268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
label_1a726c:
    // 0x1a726c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a726cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7270:
    // 0x1a7270: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1a7270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_1a7274:
    // 0x1a7274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a7274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a7278:
    // 0x1a7278: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a7278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a727c:
    // 0x1a727c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1a727cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1a7280:
    // 0x1a7280: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a7280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a7284:
    // 0x1a7284: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1a7284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7288:
    // 0x1a7288: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1a7288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1a728c:
    // 0x1a728c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a728cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a7290:
    // 0x1a7290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a7294:
    // 0x1a7294: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
label_1a7298:
    if (ctx->pc == 0x1A7298u) {
        ctx->pc = 0x1A7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7294u;
        // 0x1a7298: 0x4600a0c0  add.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A729Cu;
        goto label_1a729c;
    }
    ctx->pc = 0x1A7294u;
    {
        const bool branch_taken_0x1a7294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7294) {
            ctx->pc = 0x1A7298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7294u;
            // 0x1a7298: 0x4600a0c0  add.s       $f3, $f20, $f0 (Delay Slot)
            ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A72F4u;
            goto label_1a72f4;
        }
    }
    ctx->pc = 0x1A729Cu;
label_1a729c:
    // 0x1a729c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a729cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1a72a0:
    // 0x1a72a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a72a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a72a4:
    // 0x1a72a4: 0x0  nop
    ctx->pc = 0x1a72a4u;
    // NOP
label_1a72a8:
    // 0x1a72a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a72a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a72ac:
    // 0x1a72ac: 0x0  nop
    ctx->pc = 0x1a72acu;
    // NOP
label_1a72b0:
    // 0x1a72b0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1a72b4:
    if (ctx->pc == 0x1A72B4u) {
        ctx->pc = 0x1A72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72B0u;
        // 0x1a72b4: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A72B8u;
        goto label_1a72b8;
    }
    ctx->pc = 0x1A72B0u;
    {
        const bool branch_taken_0x1a72b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a72b0) {
            ctx->pc = 0x1A72B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A72B0u;
            // 0x1a72b4: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A72CCu;
            goto label_1a72cc;
        }
    }
    ctx->pc = 0x1A72B8u;
label_1a72b8:
    // 0x1a72b8: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1a72b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_1a72bc:
    // 0x1a72bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a72bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a72c0:
    // 0x1a72c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a72c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a72c4:
    // 0x1a72c4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a72c8:
    if (ctx->pc == 0x1A72C8u) {
        ctx->pc = 0x1A72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72C4u;
        // 0x1a72c8: 0x4600a0c0  add.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A72CCu;
        goto label_1a72cc;
    }
    ctx->pc = 0x1A72C4u;
    {
        const bool branch_taken_0x1a72c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72C4u;
        // 0x1a72c8: 0x4600a0c0  add.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72c4) {
            ctx->pc = 0x1A72F4u;
            goto label_1a72f4;
        }
    }
    ctx->pc = 0x1A72CCu;
label_1a72cc:
    // 0x1a72cc: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x1a72ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_1a72d0:
    // 0x1a72d0: 0x0  nop
    ctx->pc = 0x1a72d0u;
    // NOP
label_1a72d4:
    // 0x1a72d4: 0x0  nop
    ctx->pc = 0x1a72d4u;
    // NOP
label_1a72d8:
    // 0x1a72d8: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1a72d8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_1a72dc:
    // 0x1a72dc: 0x0  nop
    ctx->pc = 0x1a72dcu;
    // NOP
label_1a72e0:
    // 0x1a72e0: 0x0  nop
    ctx->pc = 0x1a72e0u;
    // NOP
label_1a72e4:
    // 0x1a72e4: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x1a72e4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
label_1a72e8:
    // 0x1a72e8: 0xc0cd5a8  jal         func_3356A0
label_1a72ec:
    if (ctx->pc == 0x1A72ECu) {
        ctx->pc = 0x1A72F0u;
        goto label_1a72f0;
    }
    ctx->pc = 0x1A72E8u;
    SET_GPR_U32(ctx, 31, 0x1A72F0u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x1A72E8u, 0x1A72F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72F0u;
label_1a72f0:
    // 0x1a72f0: 0x4600a0c0  add.s       $f3, $f20, $f0
    ctx->pc = 0x1a72f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a72f4:
    // 0x1a72f4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1a72f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1a72f8:
    // 0x1a72f8: 0x0  nop
    ctx->pc = 0x1a72f8u;
    // NOP
label_1a72fc:
    // 0x1a72fc: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x1a72fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7300:
    // 0x1a7300: 0x0  nop
    ctx->pc = 0x1a7300u;
    // NOP
label_1a7304:
    // 0x1a7304: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1a7308:
    if (ctx->pc == 0x1A7308u) {
        ctx->pc = 0x1A7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7304u;
        // 0x1a7308: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A730Cu;
        goto label_1a730c;
    }
    ctx->pc = 0x1A7304u;
    {
        const bool branch_taken_0x1a7304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7304u;
        // 0x1a7308: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7304) {
            ctx->pc = 0x1A7330u;
            goto label_1a7330;
        }
    }
    ctx->pc = 0x1A730Cu;
label_1a730c:
    // 0x1a730c: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x1a730cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_1a7310:
    // 0x1a7310: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a7310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a7314:
    // 0x1a7314: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7318:
    // 0x1a7318: 0xc440d284  lwc1        $f0, -0x2D7C($v0)
    ctx->pc = 0x1a7318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a731c:
    // 0x1a731c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a731cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a7320:
    // 0x1a7320: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1a7320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7324:
    // 0x1a7324: 0x0  nop
    ctx->pc = 0x1a7324u;
    // NOP
label_1a7328:
    // 0x1a7328: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1a732c:
    if (ctx->pc == 0x1A732Cu) {
        ctx->pc = 0x1A732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7328u;
        // 0x1a732c: 0x3c0d0051  lui         $t5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7330u;
        goto label_1a7330;
    }
    ctx->pc = 0x1A7328u;
    {
        const bool branch_taken_0x1a7328 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7328u;
        // 0x1a732c: 0x3c0d0051  lui         $t5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7328) {
            ctx->pc = 0x1A7358u;
            goto label_1a7358;
        }
    }
    ctx->pc = 0x1A7330u;
label_1a7330:
    // 0x1a7330: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7334:
    // 0x1a7334: 0x3c0140bc  lui         $at, 0x40BC
    ctx->pc = 0x1a7334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16572 << 16));
label_1a7338:
    // 0x1a7338: 0x34217edd  ori         $at, $at, 0x7EDD
    ctx->pc = 0x1a7338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32477);
label_1a733c:
    // 0x1a733c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a733cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7340:
    // 0x1a7340: 0xc440d288  lwc1        $f0, -0x2D78($v0)
    ctx->pc = 0x1a7340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7344:
    // 0x1a7344: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a7344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a7348:
    // 0x1a7348: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a7348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a734c:
    // 0x1a734c: 0x0  nop
    ctx->pc = 0x1a734cu;
    // NOP
label_1a7350:
    // 0x1a7350: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_1a7354:
    if (ctx->pc == 0x1A7354u) {
        ctx->pc = 0x1A7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7350u;
        // 0x1a7354: 0x40682d  daddu       $t5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7358u;
        goto label_1a7358;
    }
    ctx->pc = 0x1A7350u;
    {
        const bool branch_taken_0x1a7350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7350u;
        // 0x1a7354: 0x40682d  daddu       $t5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7350) {
            ctx->pc = 0x1A73C8u;
            goto label_1a73c8;
        }
    }
    ctx->pc = 0x1A7358u;
label_1a7358:
    // 0x1a7358: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a735c:
    // 0x1a735c: 0xae201540  sw          $zero, 0x1540($s1)
    ctx->pc = 0x1a735cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 0));
label_1a7360:
    // 0x1a7360: 0xc440d2b8  lwc1        $f0, -0x2D48($v0)
    ctx->pc = 0x1a7360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7364:
    // 0x1a7364: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1a7364u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1a7368:
    // 0x1a7368: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a736c:
    // 0x1a736c: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1a736cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1a7370:
    // 0x1a7370: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1a7370u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1a7374:
    // 0x1a7374: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1a7374u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1a7378:
    // 0x1a7378: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a737c:
    // 0x1a737c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a737cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a7380:
    // 0x1a7380: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a7380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1a7384:
    // 0x1a7384: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a7384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1a7388:
    // 0x1a7388: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1a7388u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1a738c:
    // 0x1a738c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1a738cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1a7390:
    // 0x1a7390: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1a7390u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1a7394:
    // 0x1a7394: 0xe460d28c  swc1        $f0, -0x2D74($v1)
    ctx->pc = 0x1a7394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955660), bits); }
label_1a7398:
    // 0x1a7398: 0xe441d2b0  swc1        $f1, -0x2D50($v0)
    ctx->pc = 0x1a7398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955696), bits); }
label_1a739c:
    // 0x1a739c: 0xe560d284  swc1        $f0, -0x2D7C($t3)
    ctx->pc = 0x1a739cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294955652), bits); }
label_1a73a0:
    // 0x1a73a0: 0xe5a1d288  swc1        $f1, -0x2D78($t5)
    ctx->pc = 0x1a73a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294955656), bits); }
label_1a73a4:
    // 0x1a73a4: 0xad80d290  sw          $zero, -0x2D70($t4)
    ctx->pc = 0x1a73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294955664), GPR_U32(ctx, 0));
label_1a73a8:
    // 0x1a73a8: 0xad40d2ac  sw          $zero, -0x2D54($t2)
    ctx->pc = 0x1a73a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294955692), GPR_U32(ctx, 0));
label_1a73ac:
    // 0x1a73ac: 0xac80d29c  sw          $zero, -0x2D64($a0)
    ctx->pc = 0x1a73acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955676), GPR_U32(ctx, 0));
label_1a73b0:
    // 0x1a73b0: 0xaca0d2a0  sw          $zero, -0x2D60($a1)
    ctx->pc = 0x1a73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294955680), GPR_U32(ctx, 0));
label_1a73b4:
    // 0x1a73b4: 0xacc0d294  sw          $zero, -0x2D6C($a2)
    ctx->pc = 0x1a73b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955668), GPR_U32(ctx, 0));
label_1a73b8:
    // 0x1a73b8: 0xace0d298  sw          $zero, -0x2D68($a3)
    ctx->pc = 0x1a73b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294955672), GPR_U32(ctx, 0));
label_1a73bc:
    // 0x1a73bc: 0xad00d2a4  sw          $zero, -0x2D5C($t0)
    ctx->pc = 0x1a73bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294955684), GPR_U32(ctx, 0));
label_1a73c0:
    // 0x1a73c0: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_1a73c4:
    if (ctx->pc == 0x1A73C4u) {
        ctx->pc = 0x1A73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C0u;
        // 0x1a73c4: 0xad20d2a8  sw          $zero, -0x2D58($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294955688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A73C8u;
        goto label_1a73c8;
    }
    ctx->pc = 0x1A73C0u;
    {
        const bool branch_taken_0x1a73c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C0u;
        // 0x1a73c4: 0xad20d2a8  sw          $zero, -0x2D58($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294955688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73c0) {
            ctx->pc = 0x1A7754u;
            goto label_1a7754;
        }
    }
    ctx->pc = 0x1A73C8u;
label_1a73c8:
    // 0x1a73c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a73cc:
    // 0x1a73cc: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x1a73ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_1a73d0:
    // 0x1a73d0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a73d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a73d4:
    // 0x1a73d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a73d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a73d8:
    // 0x1a73d8: 0xc440d28c  lwc1        $f0, -0x2D74($v0)
    ctx->pc = 0x1a73d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a73dc:
    // 0x1a73dc: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1a73dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a73e0:
    // 0x1a73e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a73e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a73e4:
    // 0x1a73e4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a73e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a73e8:
    // 0x1a73e8: 0x0  nop
    ctx->pc = 0x1a73e8u;
    // NOP
label_1a73ec:
    // 0x1a73ec: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_1a73f0:
    if (ctx->pc == 0x1A73F0u) {
        ctx->pc = 0x1A73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73ECu;
        // 0x1a73f0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A73F4u;
        goto label_1a73f4;
    }
    ctx->pc = 0x1A73ECu;
    {
        const bool branch_taken_0x1a73ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73ECu;
        // 0x1a73f0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73ec) {
            ctx->pc = 0x1A748Cu;
            goto label_1a748c;
        }
    }
    ctx->pc = 0x1A73F4u;
label_1a73f4:
    // 0x1a73f4: 0xc460d2b4  lwc1        $f0, -0x2D4C($v1)
    ctx->pc = 0x1a73f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a73f8:
    // 0x1a73f8: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1a73f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1a73fc:
    // 0x1a73fc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1a73fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1a7400:
    // 0x1a7400: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a7400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a7404:
    // 0x1a7404: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7408:
    // 0x1a7408: 0xc562d290  lwc1        $f2, -0x2D70($t3)
    ctx->pc = 0x1a7408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294955664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a740c:
    // 0x1a740c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a740cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a7410:
    // 0x1a7410: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a7410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a7414:
    // 0x1a7414: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x1a7414u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7418:
    // 0x1a7418: 0x0  nop
    ctx->pc = 0x1a7418u;
    // NOP
label_1a741c:
    // 0x1a741c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_1a7420:
    if (ctx->pc == 0x1A7420u) {
        ctx->pc = 0x1A7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A741Cu;
        // 0x1a7420: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7424u;
        goto label_1a7424;
    }
    ctx->pc = 0x1A741Cu;
    {
        const bool branch_taken_0x1a741c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A741Cu;
        // 0x1a7420: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a741c) {
            ctx->pc = 0x1A7490u;
            goto label_1a7490;
        }
    }
    ctx->pc = 0x1A7424u;
label_1a7424:
    // 0x1a7424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a7424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7428:
    // 0x1a7428: 0xc441d2b8  lwc1        $f1, -0x2D48($v0)
    ctx->pc = 0x1a7428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a742c:
    // 0x1a742c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1a742cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1a7430:
    // 0x1a7430: 0xae231540  sw          $v1, 0x1540($s1)
    ctx->pc = 0x1a7430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 3));
label_1a7434:
    // 0x1a7434: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1a7434u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1a7438:
    // 0x1a7438: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1a7438u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_1a743c:
    // 0x1a743c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a743cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a7440:
    // 0x1a7440: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a7440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a7444:
    // 0x1a7444: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a7444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1a7448:
    // 0x1a7448: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a7448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1a744c:
    // 0x1a744c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1a744cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1a7450:
    // 0x1a7450: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1a7450u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1a7454:
    // 0x1a7454: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7458:
    // 0x1a7458: 0xe580d28c  swc1        $f0, -0x2D74($t4)
    ctx->pc = 0x1a7458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294955660), bits); }
label_1a745c:
    // 0x1a745c: 0xe561d290  swc1        $f1, -0x2D70($t3)
    ctx->pc = 0x1a745cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294955664), bits); }
label_1a7460:
    // 0x1a7460: 0xe444d2a8  swc1        $f4, -0x2D58($v0)
    ctx->pc = 0x1a7460u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955688), bits); }
label_1a7464:
    // 0x1a7464: 0xe520d284  swc1        $f0, -0x2D7C($t1)
    ctx->pc = 0x1a7464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294955652), bits); }
label_1a7468:
    // 0x1a7468: 0xe5a4d288  swc1        $f4, -0x2D78($t5)
    ctx->pc = 0x1a7468u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294955656), bits); }
label_1a746c:
    // 0x1a746c: 0xe544d2ac  swc1        $f4, -0x2D54($t2)
    ctx->pc = 0x1a746cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294955692), bits); }
label_1a7470:
    // 0x1a7470: 0xe464d2b0  swc1        $f4, -0x2D50($v1)
    ctx->pc = 0x1a7470u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955696), bits); }
label_1a7474:
    // 0x1a7474: 0xe484d29c  swc1        $f4, -0x2D64($a0)
    ctx->pc = 0x1a7474u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294955676), bits); }
label_1a7478:
    // 0x1a7478: 0xe4a4d2a0  swc1        $f4, -0x2D60($a1)
    ctx->pc = 0x1a7478u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294955680), bits); }
label_1a747c:
    // 0x1a747c: 0xe4c4d294  swc1        $f4, -0x2D6C($a2)
    ctx->pc = 0x1a747cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294955668), bits); }
label_1a7480:
    // 0x1a7480: 0xe4e4d298  swc1        $f4, -0x2D68($a3)
    ctx->pc = 0x1a7480u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294955672), bits); }
label_1a7484:
    // 0x1a7484: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_1a7488:
    if (ctx->pc == 0x1A7488u) {
        ctx->pc = 0x1A7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7484u;
        // 0x1a7488: 0xe504d2a4  swc1        $f4, -0x2D5C($t0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294955684), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A748Cu;
        goto label_1a748c;
    }
    ctx->pc = 0x1A7484u;
    {
        const bool branch_taken_0x1a7484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7484u;
        // 0x1a7488: 0xe504d2a4  swc1        $f4, -0x2D5C($t0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294955684), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7484) {
            ctx->pc = 0x1A7754u;
            goto label_1a7754;
        }
    }
    ctx->pc = 0x1A748Cu;
label_1a748c:
    // 0x1a748c: 0xc460d2b4  lwc1        $f0, -0x2D4C($v1)
    ctx->pc = 0x1a748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7490:
    // 0x1a7490: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7494:
    // 0x1a7494: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x1a7494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
label_1a7498:
    // 0x1a7498: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x1a7498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_1a749c:
    // 0x1a749c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a749cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a74a0:
    // 0x1a74a0: 0xc441d2ac  lwc1        $f1, -0x2D54($v0)
    ctx->pc = 0x1a74a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a74a4:
    // 0x1a74a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a74a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a74a8:
    // 0x1a74a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a74a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a74ac:
    // 0x1a74ac: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a74acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a74b0:
    // 0x1a74b0: 0x0  nop
    ctx->pc = 0x1a74b0u;
    // NOP
label_1a74b4:
    // 0x1a74b4: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_1a74b8:
    if (ctx->pc == 0x1A74B8u) {
        ctx->pc = 0x1A74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74B4u;
        // 0x1a74b8: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A74BCu;
        goto label_1a74bc;
    }
    ctx->pc = 0x1A74B4u;
    {
        const bool branch_taken_0x1a74b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74B4u;
        // 0x1a74b8: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74b4) {
            ctx->pc = 0x1A7548u;
            goto label_1a7548;
        }
    }
    ctx->pc = 0x1A74BCu;
label_1a74bc:
    // 0x1a74bc: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1a74bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1a74c0:
    // 0x1a74c0: 0x3c0140bc  lui         $at, 0x40BC
    ctx->pc = 0x1a74c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16572 << 16));
label_1a74c4:
    // 0x1a74c4: 0x34217edd  ori         $at, $at, 0x7EDD
    ctx->pc = 0x1a74c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32477);
label_1a74c8:
    // 0x1a74c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a74c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a74cc:
    // 0x1a74cc: 0xc540d2b0  lwc1        $f0, -0x2D50($t2)
    ctx->pc = 0x1a74ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a74d0:
    // 0x1a74d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a74d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a74d4:
    // 0x1a74d4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1a74d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a74d8:
    // 0x1a74d8: 0x0  nop
    ctx->pc = 0x1a74d8u;
    // NOP
label_1a74dc:
    // 0x1a74dc: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_1a74e0:
    if (ctx->pc == 0x1A74E0u) {
        ctx->pc = 0x1A74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74DCu;
        // 0x1a74e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A74E4u;
        goto label_1a74e4;
    }
    ctx->pc = 0x1A74DCu;
    {
        const bool branch_taken_0x1a74dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74DCu;
        // 0x1a74e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74dc) {
            ctx->pc = 0x1A7548u;
            goto label_1a7548;
        }
    }
    ctx->pc = 0x1A74E4u;
label_1a74e4:
    // 0x1a74e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a74e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a74e8:
    // 0x1a74e8: 0xc440d2b8  lwc1        $f0, -0x2D48($v0)
    ctx->pc = 0x1a74e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a74ec:
    // 0x1a74ec: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a74ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a74f0:
    // 0x1a74f0: 0xae231540  sw          $v1, 0x1540($s1)
    ctx->pc = 0x1a74f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 3));
label_1a74f4:
    // 0x1a74f4: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1a74f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1a74f8:
    // 0x1a74f8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1a74f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1a74fc:
    // 0x1a74fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7500:
    // 0x1a7500: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a7504:
    // 0x1a7504: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a7504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1a7508:
    // 0x1a7508: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a7508u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1a750c:
    // 0x1a750c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1a750cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1a7510:
    // 0x1a7510: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1a7510u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1a7514:
    // 0x1a7514: 0xe561d2ac  swc1        $f1, -0x2D54($t3)
    ctx->pc = 0x1a7514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294955692), bits); }
label_1a7518:
    // 0x1a7518: 0xe540d2b0  swc1        $f0, -0x2D50($t2)
    ctx->pc = 0x1a7518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294955696), bits); }
label_1a751c:
    // 0x1a751c: 0xac80d284  sw          $zero, -0x2D7C($a0)
    ctx->pc = 0x1a751cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955652), GPR_U32(ctx, 0));
label_1a7520:
    // 0x1a7520: 0xe5a0d288  swc1        $f0, -0x2D78($t5)
    ctx->pc = 0x1a7520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294955656), bits); }
label_1a7524:
    // 0x1a7524: 0xad80d28c  sw          $zero, -0x2D74($t4)
    ctx->pc = 0x1a7524u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294955660), GPR_U32(ctx, 0));
label_1a7528:
    // 0x1a7528: 0xad20d290  sw          $zero, -0x2D70($t1)
    ctx->pc = 0x1a7528u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294955664), GPR_U32(ctx, 0));
label_1a752c:
    // 0x1a752c: 0xac40d29c  sw          $zero, -0x2D64($v0)
    ctx->pc = 0x1a752cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955676), GPR_U32(ctx, 0));
label_1a7530:
    // 0x1a7530: 0xac60d2a0  sw          $zero, -0x2D60($v1)
    ctx->pc = 0x1a7530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955680), GPR_U32(ctx, 0));
label_1a7534:
    // 0x1a7534: 0xaca0d294  sw          $zero, -0x2D6C($a1)
    ctx->pc = 0x1a7534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294955668), GPR_U32(ctx, 0));
label_1a7538:
    // 0x1a7538: 0xacc0d298  sw          $zero, -0x2D68($a2)
    ctx->pc = 0x1a7538u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955672), GPR_U32(ctx, 0));
label_1a753c:
    // 0x1a753c: 0xace0d2a4  sw          $zero, -0x2D5C($a3)
    ctx->pc = 0x1a753cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294955684), GPR_U32(ctx, 0));
label_1a7540:
    // 0x1a7540: 0x10000084  b           . + 4 + (0x84 << 2)
label_1a7544:
    if (ctx->pc == 0x1A7544u) {
        ctx->pc = 0x1A7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7540u;
        // 0x1a7544: 0xad00d2a8  sw          $zero, -0x2D58($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294955688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7548u;
        goto label_1a7548;
    }
    ctx->pc = 0x1A7540u;
    {
        const bool branch_taken_0x1a7540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7540u;
        // 0x1a7544: 0xad00d2a8  sw          $zero, -0x2D58($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294955688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7540) {
            ctx->pc = 0x1A7754u;
            goto label_1a7754;
        }
    }
    ctx->pc = 0x1A7548u;
label_1a7548:
    // 0x1a7548: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a754c:
    // 0x1a754c: 0x3c01402f  lui         $at, 0x402F
    ctx->pc = 0x1a754cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16431 << 16));
label_1a7550:
    // 0x1a7550: 0x3421ede0  ori         $at, $at, 0xEDE0
    ctx->pc = 0x1a7550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60896);
label_1a7554:
    // 0x1a7554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7558:
    // 0x1a7558: 0xc440d29c  lwc1        $f0, -0x2D64($v0)
    ctx->pc = 0x1a7558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a755c:
    // 0x1a755c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a755cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a7560:
    // 0x1a7560: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a7560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7564:
    // 0x1a7564: 0x0  nop
    ctx->pc = 0x1a7564u;
    // NOP
label_1a7568:
    // 0x1a7568: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_1a756c:
    if (ctx->pc == 0x1A756Cu) {
        ctx->pc = 0x1A756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7568u;
        // 0x1a756c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7570u;
        goto label_1a7570;
    }
    ctx->pc = 0x1A7568u;
    {
        const bool branch_taken_0x1a7568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7568u;
        // 0x1a756c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7568) {
            ctx->pc = 0x1A75F8u;
            goto label_1a75f8;
        }
    }
    ctx->pc = 0x1A7570u;
label_1a7570:
    // 0x1a7570: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1a7570u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1a7574:
    // 0x1a7574: 0x3c014062  lui         $at, 0x4062
    ctx->pc = 0x1a7574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16482 << 16));
label_1a7578:
    // 0x1a7578: 0x342131d6  ori         $at, $at, 0x31D6
    ctx->pc = 0x1a7578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12758);
label_1a757c:
    // 0x1a757c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a757cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7580:
    // 0x1a7580: 0xc520d2a0  lwc1        $f0, -0x2D60($t1)
    ctx->pc = 0x1a7580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294955680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7584:
    // 0x1a7584: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a7584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a7588:
    // 0x1a7588: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1a7588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a758c:
    // 0x1a758c: 0x0  nop
    ctx->pc = 0x1a758cu;
    // NOP
label_1a7590:
    // 0x1a7590: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1a7594:
    if (ctx->pc == 0x1A7594u) {
        ctx->pc = 0x1A7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7590u;
        // 0x1a7594: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7598u;
        goto label_1a7598;
    }
    ctx->pc = 0x1A7590u;
    {
        const bool branch_taken_0x1a7590 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7590u;
        // 0x1a7594: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7590) {
            ctx->pc = 0x1A75F8u;
            goto label_1a75f8;
        }
    }
    ctx->pc = 0x1A7598u;
label_1a7598:
    // 0x1a7598: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a7598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a759c:
    // 0x1a759c: 0xc440d2b8  lwc1        $f0, -0x2D48($v0)
    ctx->pc = 0x1a759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a75a0:
    // 0x1a75a0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a75a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a75a4:
    // 0x1a75a4: 0xae231540  sw          $v1, 0x1540($s1)
    ctx->pc = 0x1a75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 3));
label_1a75a8:
    // 0x1a75a8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a75a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1a75ac:
    // 0x1a75ac: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1a75acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1a75b0:
    // 0x1a75b0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a75b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1a75b4:
    // 0x1a75b4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1a75b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1a75b8:
    // 0x1a75b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a75bc:
    // 0x1a75bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a75c0:
    // 0x1a75c0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1a75c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1a75c4:
    // 0x1a75c4: 0xe441d298  swc1        $f1, -0x2D68($v0)
    ctx->pc = 0x1a75c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955672), bits); }
label_1a75c8:
    // 0x1a75c8: 0xe460d2a4  swc1        $f0, -0x2D5C($v1)
    ctx->pc = 0x1a75c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955684), bits); }
label_1a75cc:
    // 0x1a75cc: 0xac80d284  sw          $zero, -0x2D7C($a0)
    ctx->pc = 0x1a75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955652), GPR_U32(ctx, 0));
label_1a75d0:
    // 0x1a75d0: 0xada0d288  sw          $zero, -0x2D78($t5)
    ctx->pc = 0x1a75d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294955656), GPR_U32(ctx, 0));
label_1a75d4:
    // 0x1a75d4: 0xad80d28c  sw          $zero, -0x2D74($t4)
    ctx->pc = 0x1a75d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294955660), GPR_U32(ctx, 0));
label_1a75d8:
    // 0x1a75d8: 0xaca0d290  sw          $zero, -0x2D70($a1)
    ctx->pc = 0x1a75d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294955664), GPR_U32(ctx, 0));
label_1a75dc:
    // 0x1a75dc: 0xad60d2ac  sw          $zero, -0x2D54($t3)
    ctx->pc = 0x1a75dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294955692), GPR_U32(ctx, 0));
label_1a75e0:
    // 0x1a75e0: 0xacc0d2b0  sw          $zero, -0x2D50($a2)
    ctx->pc = 0x1a75e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955696), GPR_U32(ctx, 0));
label_1a75e4:
    // 0x1a75e4: 0xe541d29c  swc1        $f1, -0x2D64($t2)
    ctx->pc = 0x1a75e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294955676), bits); }
label_1a75e8:
    // 0x1a75e8: 0xe520d2a0  swc1        $f0, -0x2D60($t1)
    ctx->pc = 0x1a75e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294955680), bits); }
label_1a75ec:
    // 0x1a75ec: 0xad00d294  sw          $zero, -0x2D6C($t0)
    ctx->pc = 0x1a75ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294955668), GPR_U32(ctx, 0));
label_1a75f0:
    // 0x1a75f0: 0x10000058  b           . + 4 + (0x58 << 2)
label_1a75f4:
    if (ctx->pc == 0x1A75F4u) {
        ctx->pc = 0x1A75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75F0u;
        // 0x1a75f4: 0xace0d2a8  sw          $zero, -0x2D58($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294955688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A75F8u;
        goto label_1a75f8;
    }
    ctx->pc = 0x1A75F0u;
    {
        const bool branch_taken_0x1a75f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75F0u;
        // 0x1a75f4: 0xace0d2a8  sw          $zero, -0x2D58($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294955688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75f0) {
            ctx->pc = 0x1A7754u;
            goto label_1a7754;
        }
    }
    ctx->pc = 0x1A75F8u;
label_1a75f8:
    // 0x1a75f8: 0xc460d2b4  lwc1        $f0, -0x2D4C($v1)
    ctx->pc = 0x1a75f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a75fc:
    // 0x1a75fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a75fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7600:
    // 0x1a7600: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1a7600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1a7604:
    // 0x1a7604: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a7604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a7608:
    // 0x1a7608: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a7608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a760c:
    // 0x1a760c: 0xc441d294  lwc1        $f1, -0x2D6C($v0)
    ctx->pc = 0x1a760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7610:
    // 0x1a7610: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a7610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a7614:
    // 0x1a7614: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a7614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a7618:
    // 0x1a7618: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a7618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a761c:
    // 0x1a761c: 0x0  nop
    ctx->pc = 0x1a761cu;
    // NOP
label_1a7620:
    // 0x1a7620: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_1a7624:
    if (ctx->pc == 0x1A7624u) {
        ctx->pc = 0x1A7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7620u;
        // 0x1a7624: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7628u;
        goto label_1a7628;
    }
    ctx->pc = 0x1A7620u;
    {
        const bool branch_taken_0x1a7620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7620u;
        // 0x1a7624: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7620) {
            ctx->pc = 0x1A76ACu;
            goto label_1a76ac;
        }
    }
    ctx->pc = 0x1A7628u;
label_1a7628:
    // 0x1a7628: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1a7628u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1a762c:
    // 0x1a762c: 0x3c01402f  lui         $at, 0x402F
    ctx->pc = 0x1a762cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16431 << 16));
label_1a7630:
    // 0x1a7630: 0x3421ede0  ori         $at, $at, 0xEDE0
    ctx->pc = 0x1a7630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60896);
label_1a7634:
    // 0x1a7634: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7638:
    // 0x1a7638: 0xc500d298  lwc1        $f0, -0x2D68($t0)
    ctx->pc = 0x1a7638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294955672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a763c:
    // 0x1a763c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a763cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a7640:
    // 0x1a7640: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1a7640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7644:
    // 0x1a7644: 0x0  nop
    ctx->pc = 0x1a7644u;
    // NOP
label_1a7648:
    // 0x1a7648: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_1a764c:
    if (ctx->pc == 0x1A764Cu) {
        ctx->pc = 0x1A764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7648u;
        // 0x1a764c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7650u;
        goto label_1a7650;
    }
    ctx->pc = 0x1A7648u;
    {
        const bool branch_taken_0x1a7648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7648u;
        // 0x1a764c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7648) {
            ctx->pc = 0x1A76ACu;
            goto label_1a76ac;
        }
    }
    ctx->pc = 0x1A7650u;
label_1a7650:
    // 0x1a7650: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a7650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a7654:
    // 0x1a7654: 0xc440d2b8  lwc1        $f0, -0x2D48($v0)
    ctx->pc = 0x1a7654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7658:
    // 0x1a7658: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a7658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a765c:
    // 0x1a765c: 0xae231540  sw          $v1, 0x1540($s1)
    ctx->pc = 0x1a765cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 3));
label_1a7660:
    // 0x1a7660: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7664:
    // 0x1a7664: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1a7664u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1a7668:
    // 0x1a7668: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a766c:
    // 0x1a766c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a766cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1a7670:
    // 0x1a7670: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a7670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1a7674:
    // 0x1a7674: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1a7674u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1a7678:
    // 0x1a7678: 0xe500d298  swc1        $f0, -0x2D68($t0)
    ctx->pc = 0x1a7678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294955672), bits); }
label_1a767c:
    // 0x1a767c: 0xe521d294  swc1        $f1, -0x2D6C($t1)
    ctx->pc = 0x1a767cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294955668), bits); }
label_1a7680:
    // 0x1a7680: 0xac80d284  sw          $zero, -0x2D7C($a0)
    ctx->pc = 0x1a7680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955652), GPR_U32(ctx, 0));
label_1a7684:
    // 0x1a7684: 0xada0d288  sw          $zero, -0x2D78($t5)
    ctx->pc = 0x1a7684u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294955656), GPR_U32(ctx, 0));
label_1a7688:
    // 0x1a7688: 0xad80d28c  sw          $zero, -0x2D74($t4)
    ctx->pc = 0x1a7688u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294955660), GPR_U32(ctx, 0));
label_1a768c:
    // 0x1a768c: 0xac40d290  sw          $zero, -0x2D70($v0)
    ctx->pc = 0x1a768cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955664), GPR_U32(ctx, 0));
label_1a7690:
    // 0x1a7690: 0xad60d2ac  sw          $zero, -0x2D54($t3)
    ctx->pc = 0x1a7690u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294955692), GPR_U32(ctx, 0));
label_1a7694:
    // 0x1a7694: 0xac60d2b0  sw          $zero, -0x2D50($v1)
    ctx->pc = 0x1a7694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955696), GPR_U32(ctx, 0));
label_1a7698:
    // 0x1a7698: 0xe540d29c  swc1        $f0, -0x2D64($t2)
    ctx->pc = 0x1a7698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294955676), bits); }
label_1a769c:
    // 0x1a769c: 0xaca0d2a0  sw          $zero, -0x2D60($a1)
    ctx->pc = 0x1a769cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294955680), GPR_U32(ctx, 0));
label_1a76a0:
    // 0x1a76a0: 0xacc0d2a4  sw          $zero, -0x2D5C($a2)
    ctx->pc = 0x1a76a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955684), GPR_U32(ctx, 0));
label_1a76a4:
    // 0x1a76a4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1a76a8:
    if (ctx->pc == 0x1A76A8u) {
        ctx->pc = 0x1A76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76A4u;
        // 0x1a76a8: 0xace0d2a8  sw          $zero, -0x2D58($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294955688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A76ACu;
        goto label_1a76ac;
    }
    ctx->pc = 0x1A76A4u;
    {
        const bool branch_taken_0x1a76a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76A4u;
        // 0x1a76a8: 0xace0d2a8  sw          $zero, -0x2D58($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294955688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76a4) {
            ctx->pc = 0x1A7754u;
            goto label_1a7754;
        }
    }
    ctx->pc = 0x1A76ACu;
label_1a76ac:
    // 0x1a76ac: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1a76acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1a76b0:
    // 0x1a76b0: 0x3c014062  lui         $at, 0x4062
    ctx->pc = 0x1a76b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16482 << 16));
label_1a76b4:
    // 0x1a76b4: 0x342131d6  ori         $at, $at, 0x31D6
    ctx->pc = 0x1a76b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12758);
label_1a76b8:
    // 0x1a76b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a76b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a76bc:
    // 0x1a76bc: 0xc500d2a4  lwc1        $f0, -0x2D5C($t0)
    ctx->pc = 0x1a76bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294955684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a76c0:
    // 0x1a76c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a76c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a76c4:
    // 0x1a76c4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a76c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a76c8:
    // 0x1a76c8: 0x0  nop
    ctx->pc = 0x1a76c8u;
    // NOP
label_1a76cc:
    // 0x1a76cc: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_1a76d0:
    if (ctx->pc == 0x1A76D0u) {
        ctx->pc = 0x1A76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76CCu;
        // 0x1a76d0: 0xc460d2b4  lwc1        $f0, -0x2D4C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A76D4u;
        goto label_1a76d4;
    }
    ctx->pc = 0x1A76CCu;
    {
        const bool branch_taken_0x1a76cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76CCu;
        // 0x1a76d0: 0xc460d2b4  lwc1        $f0, -0x2D4C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76cc) {
            ctx->pc = 0x1A7754u;
            goto label_1a7754;
        }
    }
    ctx->pc = 0x1A76D4u;
label_1a76d4:
    // 0x1a76d4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1a76d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1a76d8:
    // 0x1a76d8: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x1a76d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
label_1a76dc:
    // 0x1a76dc: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x1a76dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_1a76e0:
    // 0x1a76e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a76e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a76e4:
    // 0x1a76e4: 0xc4e2d2a8  lwc1        $f2, -0x2D58($a3)
    ctx->pc = 0x1a76e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294955688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a76e8:
    // 0x1a76e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a76e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a76ec:
    // 0x1a76ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a76ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a76f0:
    // 0x1a76f0: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x1a76f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a76f4:
    // 0x1a76f4: 0x0  nop
    ctx->pc = 0x1a76f4u;
    // NOP
label_1a76f8:
    // 0x1a76f8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1a76fc:
    if (ctx->pc == 0x1A76FCu) {
        ctx->pc = 0x1A76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76F8u;
        // 0x1a76fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7700u;
        goto label_1a7700;
    }
    ctx->pc = 0x1A76F8u;
    {
        const bool branch_taken_0x1a76f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76F8u;
        // 0x1a76fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76f8) {
            ctx->pc = 0x1A7754u;
            goto label_1a7754;
        }
    }
    ctx->pc = 0x1A7700u;
label_1a7700:
    // 0x1a7700: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a7704:
    // 0x1a7704: 0xc440d2b8  lwc1        $f0, -0x2D48($v0)
    ctx->pc = 0x1a7704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7708:
    // 0x1a7708: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a7708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a770c:
    // 0x1a770c: 0xae231540  sw          $v1, 0x1540($s1)
    ctx->pc = 0x1a770cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 3));
label_1a7710:
    // 0x1a7710: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a7710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a7714:
    // 0x1a7714: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1a7714u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1a7718:
    // 0x1a7718: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a7718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a771c:
    // 0x1a771c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a771cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1a7720:
    // 0x1a7720: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a7720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1a7724:
    // 0x1a7724: 0xe4e0d2a8  swc1        $f0, -0x2D58($a3)
    ctx->pc = 0x1a7724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294955688), bits); }
label_1a7728:
    // 0x1a7728: 0xe501d2a4  swc1        $f1, -0x2D5C($t0)
    ctx->pc = 0x1a7728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294955684), bits); }
label_1a772c:
    // 0x1a772c: 0xac80d284  sw          $zero, -0x2D7C($a0)
    ctx->pc = 0x1a772cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955652), GPR_U32(ctx, 0));
label_1a7730:
    // 0x1a7730: 0xada0d288  sw          $zero, -0x2D78($t5)
    ctx->pc = 0x1a7730u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294955656), GPR_U32(ctx, 0));
label_1a7734:
    // 0x1a7734: 0xad80d28c  sw          $zero, -0x2D74($t4)
    ctx->pc = 0x1a7734u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294955660), GPR_U32(ctx, 0));
label_1a7738:
    // 0x1a7738: 0xac40d290  sw          $zero, -0x2D70($v0)
    ctx->pc = 0x1a7738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955664), GPR_U32(ctx, 0));
label_1a773c:
    // 0x1a773c: 0xad60d2ac  sw          $zero, -0x2D54($t3)
    ctx->pc = 0x1a773cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294955692), GPR_U32(ctx, 0));
label_1a7740:
    // 0x1a7740: 0xac60d2b0  sw          $zero, -0x2D50($v1)
    ctx->pc = 0x1a7740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955696), GPR_U32(ctx, 0));
label_1a7744:
    // 0x1a7744: 0xad40d29c  sw          $zero, -0x2D64($t2)
    ctx->pc = 0x1a7744u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294955676), GPR_U32(ctx, 0));
label_1a7748:
    // 0x1a7748: 0xe4a1d2a0  swc1        $f1, -0x2D60($a1)
    ctx->pc = 0x1a7748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294955680), bits); }
label_1a774c:
    // 0x1a774c: 0xad20d294  sw          $zero, -0x2D6C($t1)
    ctx->pc = 0x1a774cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294955668), GPR_U32(ctx, 0));
label_1a7750:
    // 0x1a7750: 0xacc0d298  sw          $zero, -0x2D68($a2)
    ctx->pc = 0x1a7750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955672), GPR_U32(ctx, 0));
label_1a7754:
    // 0x1a7754: 0x8e221540  lw          $v0, 0x1540($s1)
    ctx->pc = 0x1a7754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5440)));
label_1a7758:
    // 0x1a7758: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_1a775c:
    if (ctx->pc == 0x1A775Cu) {
        ctx->pc = 0x1A775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7758u;
        // 0x1a775c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7760u;
        goto label_1a7760;
    }
    ctx->pc = 0x1A7758u;
    {
        const bool branch_taken_0x1a7758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7758u;
        // 0x1a775c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7758) {
            ctx->pc = 0x1A776Cu;
            goto label_1a776c;
        }
    }
    ctx->pc = 0x1A7760u;
label_1a7760:
    // 0x1a7760: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a7760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a7764:
    // 0x1a7764: 0xc043f0c  jal         func_10FC30
label_1a7768:
    if (ctx->pc == 0x1A7768u) {
        ctx->pc = 0x1A7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7764u;
        // 0x1a7768: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A776Cu;
        goto label_1a776c;
    }
    ctx->pc = 0x1A7764u;
    SET_GPR_U32(ctx, 31, 0x1A776Cu);
    ctx->pc = 0x1A7768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7764u;
    // 0x1a7768: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1A7764u, 0x1A776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A776Cu;
label_1a776c:
    // 0x1a776c: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x1a776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_1a7770:
    // 0x1a7770: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a7774:
    // 0x1a7774: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a7774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a7778:
    // 0x1a7778: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a777c:
    // 0x1a777c: 0x40f809  jalr        $v0
label_1a7780:
    if (ctx->pc == 0x1A7780u) {
        ctx->pc = 0x1A7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A777Cu;
        // 0x1a7780: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7784u;
        goto label_1a7784;
    }
    ctx->pc = 0x1A777Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7784u);
        ctx->pc = 0x1A7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A777Cu;
        // 0x1a7780: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A777Cu, 0x1A7784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7784u;
label_1a7784:
    // 0x1a7784: 0xae620690  sw          $v0, 0x690($s3)
    ctx->pc = 0x1a7784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
label_1a7788:
    // 0x1a7788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a778c:
    // 0x1a778c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a778cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7790:
    // 0x1a7790: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a7790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a7794:
    // 0x1a7794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a7794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7798:
    // 0x1a7798: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a7798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a779c:
    // 0x1a779c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a779cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a77a0:
    // 0x1a77a0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a77a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a77a4:
    // 0x1a77a4: 0x3e00008  jr          $ra
label_1a77a8:
    if (ctx->pc == 0x1A77A8u) {
        ctx->pc = 0x1A77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77A4u;
        // 0x1a77a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A77ACu;
        goto label_1a77ac;
    }
    ctx->pc = 0x1A77A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77A4u;
        // 0x1a77a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A77A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A77ACu;
label_1a77ac:
    // 0x1a77ac: 0x0  nop
    ctx->pc = 0x1a77acu;
    // NOP
    ctx->pc = 0x1a77b0u;
}
