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

// Function: sub_004C7068
// Address: 0x4c7068 - 0x4c8870
void sub_004C7068_0x4c7068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C7068_0x4c7068");
#endif

    switch (ctx->pc) {
        case 0x4c7068u: goto label_4c7068;
        case 0x4c706cu: goto label_4c706c;
        case 0x4c7070u: goto label_4c7070;
        case 0x4c7074u: goto label_4c7074;
        case 0x4c7078u: goto label_4c7078;
        case 0x4c707cu: goto label_4c707c;
        case 0x4c7080u: goto label_4c7080;
        case 0x4c7084u: goto label_4c7084;
        case 0x4c7088u: goto label_4c7088;
        case 0x4c708cu: goto label_4c708c;
        case 0x4c7090u: goto label_4c7090;
        case 0x4c7094u: goto label_4c7094;
        case 0x4c7098u: goto label_4c7098;
        case 0x4c709cu: goto label_4c709c;
        case 0x4c70a0u: goto label_4c70a0;
        case 0x4c70a4u: goto label_4c70a4;
        case 0x4c70a8u: goto label_4c70a8;
        case 0x4c70acu: goto label_4c70ac;
        case 0x4c70b0u: goto label_4c70b0;
        case 0x4c70b4u: goto label_4c70b4;
        case 0x4c70b8u: goto label_4c70b8;
        case 0x4c70bcu: goto label_4c70bc;
        case 0x4c70c0u: goto label_4c70c0;
        case 0x4c70c4u: goto label_4c70c4;
        case 0x4c70c8u: goto label_4c70c8;
        case 0x4c70ccu: goto label_4c70cc;
        case 0x4c70d0u: goto label_4c70d0;
        case 0x4c70d4u: goto label_4c70d4;
        case 0x4c70d8u: goto label_4c70d8;
        case 0x4c70dcu: goto label_4c70dc;
        case 0x4c70e0u: goto label_4c70e0;
        case 0x4c70e4u: goto label_4c70e4;
        case 0x4c70e8u: goto label_4c70e8;
        case 0x4c70ecu: goto label_4c70ec;
        case 0x4c70f0u: goto label_4c70f0;
        case 0x4c70f4u: goto label_4c70f4;
        case 0x4c70f8u: goto label_4c70f8;
        case 0x4c70fcu: goto label_4c70fc;
        case 0x4c7100u: goto label_4c7100;
        case 0x4c7104u: goto label_4c7104;
        case 0x4c7108u: goto label_4c7108;
        case 0x4c710cu: goto label_4c710c;
        case 0x4c7110u: goto label_4c7110;
        case 0x4c7114u: goto label_4c7114;
        case 0x4c7118u: goto label_4c7118;
        case 0x4c711cu: goto label_4c711c;
        case 0x4c7120u: goto label_4c7120;
        case 0x4c7124u: goto label_4c7124;
        case 0x4c7128u: goto label_4c7128;
        case 0x4c712cu: goto label_4c712c;
        case 0x4c7130u: goto label_4c7130;
        case 0x4c7134u: goto label_4c7134;
        case 0x4c7138u: goto label_4c7138;
        case 0x4c713cu: goto label_4c713c;
        case 0x4c7140u: goto label_4c7140;
        case 0x4c7144u: goto label_4c7144;
        case 0x4c7148u: goto label_4c7148;
        case 0x4c714cu: goto label_4c714c;
        case 0x4c7150u: goto label_4c7150;
        case 0x4c7154u: goto label_4c7154;
        case 0x4c7158u: goto label_4c7158;
        case 0x4c715cu: goto label_4c715c;
        case 0x4c7160u: goto label_4c7160;
        case 0x4c7164u: goto label_4c7164;
        case 0x4c7168u: goto label_4c7168;
        case 0x4c716cu: goto label_4c716c;
        case 0x4c7170u: goto label_4c7170;
        case 0x4c7174u: goto label_4c7174;
        case 0x4c7178u: goto label_4c7178;
        case 0x4c717cu: goto label_4c717c;
        case 0x4c7180u: goto label_4c7180;
        case 0x4c7184u: goto label_4c7184;
        case 0x4c7188u: goto label_4c7188;
        case 0x4c718cu: goto label_4c718c;
        case 0x4c7190u: goto label_4c7190;
        case 0x4c7194u: goto label_4c7194;
        case 0x4c7198u: goto label_4c7198;
        case 0x4c719cu: goto label_4c719c;
        case 0x4c71a0u: goto label_4c71a0;
        case 0x4c71a4u: goto label_4c71a4;
        case 0x4c71a8u: goto label_4c71a8;
        case 0x4c71acu: goto label_4c71ac;
        case 0x4c71b0u: goto label_4c71b0;
        case 0x4c71b4u: goto label_4c71b4;
        case 0x4c71b8u: goto label_4c71b8;
        case 0x4c71bcu: goto label_4c71bc;
        case 0x4c71c0u: goto label_4c71c0;
        case 0x4c71c4u: goto label_4c71c4;
        case 0x4c71c8u: goto label_4c71c8;
        case 0x4c71ccu: goto label_4c71cc;
        case 0x4c71d0u: goto label_4c71d0;
        case 0x4c71d4u: goto label_4c71d4;
        case 0x4c71d8u: goto label_4c71d8;
        case 0x4c71dcu: goto label_4c71dc;
        case 0x4c71e0u: goto label_4c71e0;
        case 0x4c71e4u: goto label_4c71e4;
        case 0x4c71e8u: goto label_4c71e8;
        case 0x4c71ecu: goto label_4c71ec;
        case 0x4c71f0u: goto label_4c71f0;
        case 0x4c71f4u: goto label_4c71f4;
        case 0x4c71f8u: goto label_4c71f8;
        case 0x4c71fcu: goto label_4c71fc;
        case 0x4c7200u: goto label_4c7200;
        case 0x4c7204u: goto label_4c7204;
        case 0x4c7208u: goto label_4c7208;
        case 0x4c720cu: goto label_4c720c;
        case 0x4c7210u: goto label_4c7210;
        case 0x4c7214u: goto label_4c7214;
        case 0x4c7218u: goto label_4c7218;
        case 0x4c721cu: goto label_4c721c;
        case 0x4c7220u: goto label_4c7220;
        case 0x4c7224u: goto label_4c7224;
        case 0x4c7228u: goto label_4c7228;
        case 0x4c722cu: goto label_4c722c;
        case 0x4c7230u: goto label_4c7230;
        case 0x4c7234u: goto label_4c7234;
        case 0x4c7238u: goto label_4c7238;
        case 0x4c723cu: goto label_4c723c;
        case 0x4c7240u: goto label_4c7240;
        case 0x4c7244u: goto label_4c7244;
        case 0x4c7248u: goto label_4c7248;
        case 0x4c724cu: goto label_4c724c;
        case 0x4c7250u: goto label_4c7250;
        case 0x4c7254u: goto label_4c7254;
        case 0x4c7258u: goto label_4c7258;
        case 0x4c725cu: goto label_4c725c;
        case 0x4c7260u: goto label_4c7260;
        case 0x4c7264u: goto label_4c7264;
        case 0x4c7268u: goto label_4c7268;
        case 0x4c726cu: goto label_4c726c;
        case 0x4c7270u: goto label_4c7270;
        case 0x4c7274u: goto label_4c7274;
        case 0x4c7278u: goto label_4c7278;
        case 0x4c727cu: goto label_4c727c;
        case 0x4c7280u: goto label_4c7280;
        case 0x4c7284u: goto label_4c7284;
        case 0x4c7288u: goto label_4c7288;
        case 0x4c728cu: goto label_4c728c;
        case 0x4c7290u: goto label_4c7290;
        case 0x4c7294u: goto label_4c7294;
        case 0x4c7298u: goto label_4c7298;
        case 0x4c729cu: goto label_4c729c;
        case 0x4c72a0u: goto label_4c72a0;
        case 0x4c72a4u: goto label_4c72a4;
        case 0x4c72a8u: goto label_4c72a8;
        case 0x4c72acu: goto label_4c72ac;
        case 0x4c72b0u: goto label_4c72b0;
        case 0x4c72b4u: goto label_4c72b4;
        case 0x4c72b8u: goto label_4c72b8;
        case 0x4c72bcu: goto label_4c72bc;
        case 0x4c72c0u: goto label_4c72c0;
        case 0x4c72c4u: goto label_4c72c4;
        case 0x4c72c8u: goto label_4c72c8;
        case 0x4c72ccu: goto label_4c72cc;
        case 0x4c72d0u: goto label_4c72d0;
        case 0x4c72d4u: goto label_4c72d4;
        case 0x4c72d8u: goto label_4c72d8;
        case 0x4c72dcu: goto label_4c72dc;
        case 0x4c72e0u: goto label_4c72e0;
        case 0x4c72e4u: goto label_4c72e4;
        case 0x4c72e8u: goto label_4c72e8;
        case 0x4c72ecu: goto label_4c72ec;
        case 0x4c72f0u: goto label_4c72f0;
        case 0x4c72f4u: goto label_4c72f4;
        case 0x4c72f8u: goto label_4c72f8;
        case 0x4c72fcu: goto label_4c72fc;
        case 0x4c7300u: goto label_4c7300;
        case 0x4c7304u: goto label_4c7304;
        case 0x4c7308u: goto label_4c7308;
        case 0x4c730cu: goto label_4c730c;
        case 0x4c7310u: goto label_4c7310;
        case 0x4c7314u: goto label_4c7314;
        case 0x4c7318u: goto label_4c7318;
        case 0x4c731cu: goto label_4c731c;
        case 0x4c7320u: goto label_4c7320;
        case 0x4c7324u: goto label_4c7324;
        case 0x4c7328u: goto label_4c7328;
        case 0x4c732cu: goto label_4c732c;
        case 0x4c7330u: goto label_4c7330;
        case 0x4c7334u: goto label_4c7334;
        case 0x4c7338u: goto label_4c7338;
        case 0x4c733cu: goto label_4c733c;
        case 0x4c7340u: goto label_4c7340;
        case 0x4c7344u: goto label_4c7344;
        case 0x4c7348u: goto label_4c7348;
        case 0x4c734cu: goto label_4c734c;
        case 0x4c7350u: goto label_4c7350;
        case 0x4c7354u: goto label_4c7354;
        case 0x4c7358u: goto label_4c7358;
        case 0x4c735cu: goto label_4c735c;
        case 0x4c7360u: goto label_4c7360;
        case 0x4c7364u: goto label_4c7364;
        case 0x4c7368u: goto label_4c7368;
        case 0x4c736cu: goto label_4c736c;
        case 0x4c7370u: goto label_4c7370;
        case 0x4c7374u: goto label_4c7374;
        case 0x4c7378u: goto label_4c7378;
        case 0x4c737cu: goto label_4c737c;
        case 0x4c7380u: goto label_4c7380;
        case 0x4c7384u: goto label_4c7384;
        case 0x4c7388u: goto label_4c7388;
        case 0x4c738cu: goto label_4c738c;
        case 0x4c7390u: goto label_4c7390;
        case 0x4c7394u: goto label_4c7394;
        case 0x4c7398u: goto label_4c7398;
        case 0x4c739cu: goto label_4c739c;
        case 0x4c73a0u: goto label_4c73a0;
        case 0x4c73a4u: goto label_4c73a4;
        case 0x4c73a8u: goto label_4c73a8;
        case 0x4c73acu: goto label_4c73ac;
        case 0x4c73b0u: goto label_4c73b0;
        case 0x4c73b4u: goto label_4c73b4;
        case 0x4c73b8u: goto label_4c73b8;
        case 0x4c73bcu: goto label_4c73bc;
        case 0x4c73c0u: goto label_4c73c0;
        case 0x4c73c4u: goto label_4c73c4;
        case 0x4c73c8u: goto label_4c73c8;
        case 0x4c73ccu: goto label_4c73cc;
        case 0x4c73d0u: goto label_4c73d0;
        case 0x4c73d4u: goto label_4c73d4;
        case 0x4c73d8u: goto label_4c73d8;
        case 0x4c73dcu: goto label_4c73dc;
        case 0x4c73e0u: goto label_4c73e0;
        case 0x4c73e4u: goto label_4c73e4;
        case 0x4c73e8u: goto label_4c73e8;
        case 0x4c73ecu: goto label_4c73ec;
        case 0x4c73f0u: goto label_4c73f0;
        case 0x4c73f4u: goto label_4c73f4;
        case 0x4c73f8u: goto label_4c73f8;
        case 0x4c73fcu: goto label_4c73fc;
        case 0x4c7400u: goto label_4c7400;
        case 0x4c7404u: goto label_4c7404;
        case 0x4c7408u: goto label_4c7408;
        case 0x4c740cu: goto label_4c740c;
        case 0x4c7410u: goto label_4c7410;
        case 0x4c7414u: goto label_4c7414;
        case 0x4c7418u: goto label_4c7418;
        case 0x4c741cu: goto label_4c741c;
        case 0x4c7420u: goto label_4c7420;
        case 0x4c7424u: goto label_4c7424;
        case 0x4c7428u: goto label_4c7428;
        case 0x4c742cu: goto label_4c742c;
        case 0x4c7430u: goto label_4c7430;
        case 0x4c7434u: goto label_4c7434;
        case 0x4c7438u: goto label_4c7438;
        case 0x4c743cu: goto label_4c743c;
        case 0x4c7440u: goto label_4c7440;
        case 0x4c7444u: goto label_4c7444;
        case 0x4c7448u: goto label_4c7448;
        case 0x4c744cu: goto label_4c744c;
        case 0x4c7450u: goto label_4c7450;
        case 0x4c7454u: goto label_4c7454;
        case 0x4c7458u: goto label_4c7458;
        case 0x4c745cu: goto label_4c745c;
        case 0x4c7460u: goto label_4c7460;
        case 0x4c7464u: goto label_4c7464;
        case 0x4c7468u: goto label_4c7468;
        case 0x4c746cu: goto label_4c746c;
        case 0x4c7470u: goto label_4c7470;
        case 0x4c7474u: goto label_4c7474;
        case 0x4c7478u: goto label_4c7478;
        case 0x4c747cu: goto label_4c747c;
        case 0x4c7480u: goto label_4c7480;
        case 0x4c7484u: goto label_4c7484;
        case 0x4c7488u: goto label_4c7488;
        case 0x4c748cu: goto label_4c748c;
        case 0x4c7490u: goto label_4c7490;
        case 0x4c7494u: goto label_4c7494;
        case 0x4c7498u: goto label_4c7498;
        case 0x4c749cu: goto label_4c749c;
        case 0x4c74a0u: goto label_4c74a0;
        case 0x4c74a4u: goto label_4c74a4;
        case 0x4c74a8u: goto label_4c74a8;
        case 0x4c74acu: goto label_4c74ac;
        case 0x4c74b0u: goto label_4c74b0;
        case 0x4c74b4u: goto label_4c74b4;
        case 0x4c74b8u: goto label_4c74b8;
        case 0x4c74bcu: goto label_4c74bc;
        case 0x4c74c0u: goto label_4c74c0;
        case 0x4c74c4u: goto label_4c74c4;
        case 0x4c74c8u: goto label_4c74c8;
        case 0x4c74ccu: goto label_4c74cc;
        case 0x4c74d0u: goto label_4c74d0;
        case 0x4c74d4u: goto label_4c74d4;
        case 0x4c74d8u: goto label_4c74d8;
        case 0x4c74dcu: goto label_4c74dc;
        case 0x4c74e0u: goto label_4c74e0;
        case 0x4c74e4u: goto label_4c74e4;
        case 0x4c74e8u: goto label_4c74e8;
        case 0x4c74ecu: goto label_4c74ec;
        case 0x4c74f0u: goto label_4c74f0;
        case 0x4c74f4u: goto label_4c74f4;
        case 0x4c74f8u: goto label_4c74f8;
        case 0x4c74fcu: goto label_4c74fc;
        case 0x4c7500u: goto label_4c7500;
        case 0x4c7504u: goto label_4c7504;
        case 0x4c7508u: goto label_4c7508;
        case 0x4c750cu: goto label_4c750c;
        case 0x4c7510u: goto label_4c7510;
        case 0x4c7514u: goto label_4c7514;
        case 0x4c7518u: goto label_4c7518;
        case 0x4c751cu: goto label_4c751c;
        case 0x4c7520u: goto label_4c7520;
        case 0x4c7524u: goto label_4c7524;
        case 0x4c7528u: goto label_4c7528;
        case 0x4c752cu: goto label_4c752c;
        case 0x4c7530u: goto label_4c7530;
        case 0x4c7534u: goto label_4c7534;
        case 0x4c7538u: goto label_4c7538;
        case 0x4c753cu: goto label_4c753c;
        case 0x4c7540u: goto label_4c7540;
        case 0x4c7544u: goto label_4c7544;
        case 0x4c7548u: goto label_4c7548;
        case 0x4c754cu: goto label_4c754c;
        case 0x4c7550u: goto label_4c7550;
        case 0x4c7554u: goto label_4c7554;
        case 0x4c7558u: goto label_4c7558;
        case 0x4c755cu: goto label_4c755c;
        case 0x4c7560u: goto label_4c7560;
        case 0x4c7564u: goto label_4c7564;
        case 0x4c7568u: goto label_4c7568;
        case 0x4c756cu: goto label_4c756c;
        case 0x4c7570u: goto label_4c7570;
        case 0x4c7574u: goto label_4c7574;
        case 0x4c7578u: goto label_4c7578;
        case 0x4c757cu: goto label_4c757c;
        case 0x4c7580u: goto label_4c7580;
        case 0x4c7584u: goto label_4c7584;
        case 0x4c7588u: goto label_4c7588;
        case 0x4c758cu: goto label_4c758c;
        case 0x4c7590u: goto label_4c7590;
        case 0x4c7594u: goto label_4c7594;
        case 0x4c7598u: goto label_4c7598;
        case 0x4c759cu: goto label_4c759c;
        case 0x4c75a0u: goto label_4c75a0;
        case 0x4c75a4u: goto label_4c75a4;
        case 0x4c75a8u: goto label_4c75a8;
        case 0x4c75acu: goto label_4c75ac;
        case 0x4c75b0u: goto label_4c75b0;
        case 0x4c75b4u: goto label_4c75b4;
        case 0x4c75b8u: goto label_4c75b8;
        case 0x4c75bcu: goto label_4c75bc;
        case 0x4c75c0u: goto label_4c75c0;
        case 0x4c75c4u: goto label_4c75c4;
        case 0x4c75c8u: goto label_4c75c8;
        case 0x4c75ccu: goto label_4c75cc;
        case 0x4c75d0u: goto label_4c75d0;
        case 0x4c75d4u: goto label_4c75d4;
        case 0x4c75d8u: goto label_4c75d8;
        case 0x4c75dcu: goto label_4c75dc;
        case 0x4c75e0u: goto label_4c75e0;
        case 0x4c75e4u: goto label_4c75e4;
        case 0x4c75e8u: goto label_4c75e8;
        case 0x4c75ecu: goto label_4c75ec;
        case 0x4c75f0u: goto label_4c75f0;
        case 0x4c75f4u: goto label_4c75f4;
        case 0x4c75f8u: goto label_4c75f8;
        case 0x4c75fcu: goto label_4c75fc;
        case 0x4c7600u: goto label_4c7600;
        case 0x4c7604u: goto label_4c7604;
        case 0x4c7608u: goto label_4c7608;
        case 0x4c760cu: goto label_4c760c;
        case 0x4c7610u: goto label_4c7610;
        case 0x4c7614u: goto label_4c7614;
        case 0x4c7618u: goto label_4c7618;
        case 0x4c761cu: goto label_4c761c;
        case 0x4c7620u: goto label_4c7620;
        case 0x4c7624u: goto label_4c7624;
        case 0x4c7628u: goto label_4c7628;
        case 0x4c762cu: goto label_4c762c;
        case 0x4c7630u: goto label_4c7630;
        case 0x4c7634u: goto label_4c7634;
        case 0x4c7638u: goto label_4c7638;
        case 0x4c763cu: goto label_4c763c;
        case 0x4c7640u: goto label_4c7640;
        case 0x4c7644u: goto label_4c7644;
        case 0x4c7648u: goto label_4c7648;
        case 0x4c764cu: goto label_4c764c;
        case 0x4c7650u: goto label_4c7650;
        case 0x4c7654u: goto label_4c7654;
        case 0x4c7658u: goto label_4c7658;
        case 0x4c765cu: goto label_4c765c;
        case 0x4c7660u: goto label_4c7660;
        case 0x4c7664u: goto label_4c7664;
        case 0x4c7668u: goto label_4c7668;
        case 0x4c766cu: goto label_4c766c;
        case 0x4c7670u: goto label_4c7670;
        case 0x4c7674u: goto label_4c7674;
        case 0x4c7678u: goto label_4c7678;
        case 0x4c767cu: goto label_4c767c;
        case 0x4c7680u: goto label_4c7680;
        case 0x4c7684u: goto label_4c7684;
        case 0x4c7688u: goto label_4c7688;
        case 0x4c768cu: goto label_4c768c;
        case 0x4c7690u: goto label_4c7690;
        case 0x4c7694u: goto label_4c7694;
        case 0x4c7698u: goto label_4c7698;
        case 0x4c769cu: goto label_4c769c;
        case 0x4c76a0u: goto label_4c76a0;
        case 0x4c76a4u: goto label_4c76a4;
        case 0x4c76a8u: goto label_4c76a8;
        case 0x4c76acu: goto label_4c76ac;
        case 0x4c76b0u: goto label_4c76b0;
        case 0x4c76b4u: goto label_4c76b4;
        case 0x4c76b8u: goto label_4c76b8;
        case 0x4c76bcu: goto label_4c76bc;
        case 0x4c76c0u: goto label_4c76c0;
        case 0x4c76c4u: goto label_4c76c4;
        case 0x4c76c8u: goto label_4c76c8;
        case 0x4c76ccu: goto label_4c76cc;
        case 0x4c76d0u: goto label_4c76d0;
        case 0x4c76d4u: goto label_4c76d4;
        case 0x4c76d8u: goto label_4c76d8;
        case 0x4c76dcu: goto label_4c76dc;
        case 0x4c76e0u: goto label_4c76e0;
        case 0x4c76e4u: goto label_4c76e4;
        case 0x4c76e8u: goto label_4c76e8;
        case 0x4c76ecu: goto label_4c76ec;
        case 0x4c76f0u: goto label_4c76f0;
        case 0x4c76f4u: goto label_4c76f4;
        case 0x4c76f8u: goto label_4c76f8;
        case 0x4c76fcu: goto label_4c76fc;
        case 0x4c7700u: goto label_4c7700;
        case 0x4c7704u: goto label_4c7704;
        case 0x4c7708u: goto label_4c7708;
        case 0x4c770cu: goto label_4c770c;
        case 0x4c7710u: goto label_4c7710;
        case 0x4c7714u: goto label_4c7714;
        case 0x4c7718u: goto label_4c7718;
        case 0x4c771cu: goto label_4c771c;
        case 0x4c7720u: goto label_4c7720;
        case 0x4c7724u: goto label_4c7724;
        case 0x4c7728u: goto label_4c7728;
        case 0x4c772cu: goto label_4c772c;
        case 0x4c7730u: goto label_4c7730;
        case 0x4c7734u: goto label_4c7734;
        case 0x4c7738u: goto label_4c7738;
        case 0x4c773cu: goto label_4c773c;
        case 0x4c7740u: goto label_4c7740;
        case 0x4c7744u: goto label_4c7744;
        case 0x4c7748u: goto label_4c7748;
        case 0x4c774cu: goto label_4c774c;
        case 0x4c7750u: goto label_4c7750;
        case 0x4c7754u: goto label_4c7754;
        case 0x4c7758u: goto label_4c7758;
        case 0x4c775cu: goto label_4c775c;
        case 0x4c7760u: goto label_4c7760;
        case 0x4c7764u: goto label_4c7764;
        case 0x4c7768u: goto label_4c7768;
        case 0x4c776cu: goto label_4c776c;
        case 0x4c7770u: goto label_4c7770;
        case 0x4c7774u: goto label_4c7774;
        case 0x4c7778u: goto label_4c7778;
        case 0x4c777cu: goto label_4c777c;
        case 0x4c7780u: goto label_4c7780;
        case 0x4c7784u: goto label_4c7784;
        case 0x4c7788u: goto label_4c7788;
        case 0x4c778cu: goto label_4c778c;
        case 0x4c7790u: goto label_4c7790;
        case 0x4c7794u: goto label_4c7794;
        case 0x4c7798u: goto label_4c7798;
        case 0x4c779cu: goto label_4c779c;
        case 0x4c77a0u: goto label_4c77a0;
        case 0x4c77a4u: goto label_4c77a4;
        case 0x4c77a8u: goto label_4c77a8;
        case 0x4c77acu: goto label_4c77ac;
        case 0x4c77b0u: goto label_4c77b0;
        case 0x4c77b4u: goto label_4c77b4;
        case 0x4c77b8u: goto label_4c77b8;
        case 0x4c77bcu: goto label_4c77bc;
        case 0x4c77c0u: goto label_4c77c0;
        case 0x4c77c4u: goto label_4c77c4;
        case 0x4c77c8u: goto label_4c77c8;
        case 0x4c77ccu: goto label_4c77cc;
        case 0x4c77d0u: goto label_4c77d0;
        case 0x4c77d4u: goto label_4c77d4;
        case 0x4c77d8u: goto label_4c77d8;
        case 0x4c77dcu: goto label_4c77dc;
        case 0x4c77e0u: goto label_4c77e0;
        case 0x4c77e4u: goto label_4c77e4;
        case 0x4c77e8u: goto label_4c77e8;
        case 0x4c77ecu: goto label_4c77ec;
        case 0x4c77f0u: goto label_4c77f0;
        case 0x4c77f4u: goto label_4c77f4;
        case 0x4c77f8u: goto label_4c77f8;
        case 0x4c77fcu: goto label_4c77fc;
        case 0x4c7800u: goto label_4c7800;
        case 0x4c7804u: goto label_4c7804;
        case 0x4c7808u: goto label_4c7808;
        case 0x4c780cu: goto label_4c780c;
        case 0x4c7810u: goto label_4c7810;
        case 0x4c7814u: goto label_4c7814;
        case 0x4c7818u: goto label_4c7818;
        case 0x4c781cu: goto label_4c781c;
        case 0x4c7820u: goto label_4c7820;
        case 0x4c7824u: goto label_4c7824;
        case 0x4c7828u: goto label_4c7828;
        case 0x4c782cu: goto label_4c782c;
        case 0x4c7830u: goto label_4c7830;
        case 0x4c7834u: goto label_4c7834;
        case 0x4c7838u: goto label_4c7838;
        case 0x4c783cu: goto label_4c783c;
        case 0x4c7840u: goto label_4c7840;
        case 0x4c7844u: goto label_4c7844;
        case 0x4c7848u: goto label_4c7848;
        case 0x4c784cu: goto label_4c784c;
        case 0x4c7850u: goto label_4c7850;
        case 0x4c7854u: goto label_4c7854;
        case 0x4c7858u: goto label_4c7858;
        case 0x4c785cu: goto label_4c785c;
        case 0x4c7860u: goto label_4c7860;
        case 0x4c7864u: goto label_4c7864;
        case 0x4c7868u: goto label_4c7868;
        case 0x4c786cu: goto label_4c786c;
        case 0x4c7870u: goto label_4c7870;
        case 0x4c7874u: goto label_4c7874;
        case 0x4c7878u: goto label_4c7878;
        case 0x4c787cu: goto label_4c787c;
        case 0x4c7880u: goto label_4c7880;
        case 0x4c7884u: goto label_4c7884;
        case 0x4c7888u: goto label_4c7888;
        case 0x4c788cu: goto label_4c788c;
        case 0x4c7890u: goto label_4c7890;
        case 0x4c7894u: goto label_4c7894;
        case 0x4c7898u: goto label_4c7898;
        case 0x4c789cu: goto label_4c789c;
        case 0x4c78a0u: goto label_4c78a0;
        case 0x4c78a4u: goto label_4c78a4;
        case 0x4c78a8u: goto label_4c78a8;
        case 0x4c78acu: goto label_4c78ac;
        case 0x4c78b0u: goto label_4c78b0;
        case 0x4c78b4u: goto label_4c78b4;
        case 0x4c78b8u: goto label_4c78b8;
        case 0x4c78bcu: goto label_4c78bc;
        case 0x4c78c0u: goto label_4c78c0;
        case 0x4c78c4u: goto label_4c78c4;
        case 0x4c78c8u: goto label_4c78c8;
        case 0x4c78ccu: goto label_4c78cc;
        case 0x4c78d0u: goto label_4c78d0;
        case 0x4c78d4u: goto label_4c78d4;
        case 0x4c78d8u: goto label_4c78d8;
        case 0x4c78dcu: goto label_4c78dc;
        case 0x4c78e0u: goto label_4c78e0;
        case 0x4c78e4u: goto label_4c78e4;
        case 0x4c78e8u: goto label_4c78e8;
        case 0x4c78ecu: goto label_4c78ec;
        case 0x4c78f0u: goto label_4c78f0;
        case 0x4c78f4u: goto label_4c78f4;
        case 0x4c78f8u: goto label_4c78f8;
        case 0x4c78fcu: goto label_4c78fc;
        case 0x4c7900u: goto label_4c7900;
        case 0x4c7904u: goto label_4c7904;
        case 0x4c7908u: goto label_4c7908;
        case 0x4c790cu: goto label_4c790c;
        case 0x4c7910u: goto label_4c7910;
        case 0x4c7914u: goto label_4c7914;
        case 0x4c7918u: goto label_4c7918;
        case 0x4c791cu: goto label_4c791c;
        case 0x4c7920u: goto label_4c7920;
        case 0x4c7924u: goto label_4c7924;
        case 0x4c7928u: goto label_4c7928;
        case 0x4c792cu: goto label_4c792c;
        case 0x4c7930u: goto label_4c7930;
        case 0x4c7934u: goto label_4c7934;
        case 0x4c7938u: goto label_4c7938;
        case 0x4c793cu: goto label_4c793c;
        case 0x4c7940u: goto label_4c7940;
        case 0x4c7944u: goto label_4c7944;
        case 0x4c7948u: goto label_4c7948;
        case 0x4c794cu: goto label_4c794c;
        case 0x4c7950u: goto label_4c7950;
        case 0x4c7954u: goto label_4c7954;
        case 0x4c7958u: goto label_4c7958;
        case 0x4c795cu: goto label_4c795c;
        case 0x4c7960u: goto label_4c7960;
        case 0x4c7964u: goto label_4c7964;
        case 0x4c7968u: goto label_4c7968;
        case 0x4c796cu: goto label_4c796c;
        case 0x4c7970u: goto label_4c7970;
        case 0x4c7974u: goto label_4c7974;
        case 0x4c7978u: goto label_4c7978;
        case 0x4c797cu: goto label_4c797c;
        case 0x4c7980u: goto label_4c7980;
        case 0x4c7984u: goto label_4c7984;
        case 0x4c7988u: goto label_4c7988;
        case 0x4c798cu: goto label_4c798c;
        case 0x4c7990u: goto label_4c7990;
        case 0x4c7994u: goto label_4c7994;
        case 0x4c7998u: goto label_4c7998;
        case 0x4c799cu: goto label_4c799c;
        case 0x4c79a0u: goto label_4c79a0;
        case 0x4c79a4u: goto label_4c79a4;
        case 0x4c79a8u: goto label_4c79a8;
        case 0x4c79acu: goto label_4c79ac;
        case 0x4c79b0u: goto label_4c79b0;
        case 0x4c79b4u: goto label_4c79b4;
        case 0x4c79b8u: goto label_4c79b8;
        case 0x4c79bcu: goto label_4c79bc;
        case 0x4c79c0u: goto label_4c79c0;
        case 0x4c79c4u: goto label_4c79c4;
        case 0x4c79c8u: goto label_4c79c8;
        case 0x4c79ccu: goto label_4c79cc;
        case 0x4c79d0u: goto label_4c79d0;
        case 0x4c79d4u: goto label_4c79d4;
        case 0x4c79d8u: goto label_4c79d8;
        case 0x4c79dcu: goto label_4c79dc;
        case 0x4c79e0u: goto label_4c79e0;
        case 0x4c79e4u: goto label_4c79e4;
        case 0x4c79e8u: goto label_4c79e8;
        case 0x4c79ecu: goto label_4c79ec;
        case 0x4c79f0u: goto label_4c79f0;
        case 0x4c79f4u: goto label_4c79f4;
        case 0x4c79f8u: goto label_4c79f8;
        case 0x4c79fcu: goto label_4c79fc;
        case 0x4c7a00u: goto label_4c7a00;
        case 0x4c7a04u: goto label_4c7a04;
        case 0x4c7a08u: goto label_4c7a08;
        case 0x4c7a0cu: goto label_4c7a0c;
        case 0x4c7a10u: goto label_4c7a10;
        case 0x4c7a14u: goto label_4c7a14;
        case 0x4c7a18u: goto label_4c7a18;
        case 0x4c7a1cu: goto label_4c7a1c;
        case 0x4c7a20u: goto label_4c7a20;
        case 0x4c7a24u: goto label_4c7a24;
        case 0x4c7a28u: goto label_4c7a28;
        case 0x4c7a2cu: goto label_4c7a2c;
        case 0x4c7a30u: goto label_4c7a30;
        case 0x4c7a34u: goto label_4c7a34;
        case 0x4c7a38u: goto label_4c7a38;
        case 0x4c7a3cu: goto label_4c7a3c;
        case 0x4c7a40u: goto label_4c7a40;
        case 0x4c7a44u: goto label_4c7a44;
        case 0x4c7a48u: goto label_4c7a48;
        case 0x4c7a4cu: goto label_4c7a4c;
        case 0x4c7a50u: goto label_4c7a50;
        case 0x4c7a54u: goto label_4c7a54;
        case 0x4c7a58u: goto label_4c7a58;
        case 0x4c7a5cu: goto label_4c7a5c;
        case 0x4c7a60u: goto label_4c7a60;
        case 0x4c7a64u: goto label_4c7a64;
        case 0x4c7a68u: goto label_4c7a68;
        case 0x4c7a6cu: goto label_4c7a6c;
        case 0x4c7a70u: goto label_4c7a70;
        case 0x4c7a74u: goto label_4c7a74;
        case 0x4c7a78u: goto label_4c7a78;
        case 0x4c7a7cu: goto label_4c7a7c;
        case 0x4c7a80u: goto label_4c7a80;
        case 0x4c7a84u: goto label_4c7a84;
        case 0x4c7a88u: goto label_4c7a88;
        case 0x4c7a8cu: goto label_4c7a8c;
        case 0x4c7a90u: goto label_4c7a90;
        case 0x4c7a94u: goto label_4c7a94;
        case 0x4c7a98u: goto label_4c7a98;
        case 0x4c7a9cu: goto label_4c7a9c;
        case 0x4c7aa0u: goto label_4c7aa0;
        case 0x4c7aa4u: goto label_4c7aa4;
        case 0x4c7aa8u: goto label_4c7aa8;
        case 0x4c7aacu: goto label_4c7aac;
        case 0x4c7ab0u: goto label_4c7ab0;
        case 0x4c7ab4u: goto label_4c7ab4;
        case 0x4c7ab8u: goto label_4c7ab8;
        case 0x4c7abcu: goto label_4c7abc;
        case 0x4c7ac0u: goto label_4c7ac0;
        case 0x4c7ac4u: goto label_4c7ac4;
        case 0x4c7ac8u: goto label_4c7ac8;
        case 0x4c7accu: goto label_4c7acc;
        case 0x4c7ad0u: goto label_4c7ad0;
        case 0x4c7ad4u: goto label_4c7ad4;
        case 0x4c7ad8u: goto label_4c7ad8;
        case 0x4c7adcu: goto label_4c7adc;
        case 0x4c7ae0u: goto label_4c7ae0;
        case 0x4c7ae4u: goto label_4c7ae4;
        case 0x4c7ae8u: goto label_4c7ae8;
        case 0x4c7aecu: goto label_4c7aec;
        case 0x4c7af0u: goto label_4c7af0;
        case 0x4c7af4u: goto label_4c7af4;
        case 0x4c7af8u: goto label_4c7af8;
        case 0x4c7afcu: goto label_4c7afc;
        case 0x4c7b00u: goto label_4c7b00;
        case 0x4c7b04u: goto label_4c7b04;
        case 0x4c7b08u: goto label_4c7b08;
        case 0x4c7b0cu: goto label_4c7b0c;
        case 0x4c7b10u: goto label_4c7b10;
        case 0x4c7b14u: goto label_4c7b14;
        case 0x4c7b18u: goto label_4c7b18;
        case 0x4c7b1cu: goto label_4c7b1c;
        case 0x4c7b20u: goto label_4c7b20;
        case 0x4c7b24u: goto label_4c7b24;
        case 0x4c7b28u: goto label_4c7b28;
        case 0x4c7b2cu: goto label_4c7b2c;
        case 0x4c7b30u: goto label_4c7b30;
        case 0x4c7b34u: goto label_4c7b34;
        case 0x4c7b38u: goto label_4c7b38;
        case 0x4c7b3cu: goto label_4c7b3c;
        case 0x4c7b40u: goto label_4c7b40;
        case 0x4c7b44u: goto label_4c7b44;
        case 0x4c7b48u: goto label_4c7b48;
        case 0x4c7b4cu: goto label_4c7b4c;
        case 0x4c7b50u: goto label_4c7b50;
        case 0x4c7b54u: goto label_4c7b54;
        case 0x4c7b58u: goto label_4c7b58;
        case 0x4c7b5cu: goto label_4c7b5c;
        case 0x4c7b60u: goto label_4c7b60;
        case 0x4c7b64u: goto label_4c7b64;
        case 0x4c7b68u: goto label_4c7b68;
        case 0x4c7b6cu: goto label_4c7b6c;
        case 0x4c7b70u: goto label_4c7b70;
        case 0x4c7b74u: goto label_4c7b74;
        case 0x4c7b78u: goto label_4c7b78;
        case 0x4c7b7cu: goto label_4c7b7c;
        case 0x4c7b80u: goto label_4c7b80;
        case 0x4c7b84u: goto label_4c7b84;
        case 0x4c7b88u: goto label_4c7b88;
        case 0x4c7b8cu: goto label_4c7b8c;
        case 0x4c7b90u: goto label_4c7b90;
        case 0x4c7b94u: goto label_4c7b94;
        case 0x4c7b98u: goto label_4c7b98;
        case 0x4c7b9cu: goto label_4c7b9c;
        case 0x4c7ba0u: goto label_4c7ba0;
        case 0x4c7ba4u: goto label_4c7ba4;
        case 0x4c7ba8u: goto label_4c7ba8;
        case 0x4c7bacu: goto label_4c7bac;
        case 0x4c7bb0u: goto label_4c7bb0;
        case 0x4c7bb4u: goto label_4c7bb4;
        case 0x4c7bb8u: goto label_4c7bb8;
        case 0x4c7bbcu: goto label_4c7bbc;
        case 0x4c7bc0u: goto label_4c7bc0;
        case 0x4c7bc4u: goto label_4c7bc4;
        case 0x4c7bc8u: goto label_4c7bc8;
        case 0x4c7bccu: goto label_4c7bcc;
        case 0x4c7bd0u: goto label_4c7bd0;
        case 0x4c7bd4u: goto label_4c7bd4;
        case 0x4c7bd8u: goto label_4c7bd8;
        case 0x4c7bdcu: goto label_4c7bdc;
        case 0x4c7be0u: goto label_4c7be0;
        case 0x4c7be4u: goto label_4c7be4;
        case 0x4c7be8u: goto label_4c7be8;
        case 0x4c7becu: goto label_4c7bec;
        case 0x4c7bf0u: goto label_4c7bf0;
        case 0x4c7bf4u: goto label_4c7bf4;
        case 0x4c7bf8u: goto label_4c7bf8;
        case 0x4c7bfcu: goto label_4c7bfc;
        case 0x4c7c00u: goto label_4c7c00;
        case 0x4c7c04u: goto label_4c7c04;
        case 0x4c7c08u: goto label_4c7c08;
        case 0x4c7c0cu: goto label_4c7c0c;
        case 0x4c7c10u: goto label_4c7c10;
        case 0x4c7c14u: goto label_4c7c14;
        case 0x4c7c18u: goto label_4c7c18;
        case 0x4c7c1cu: goto label_4c7c1c;
        case 0x4c7c20u: goto label_4c7c20;
        case 0x4c7c24u: goto label_4c7c24;
        case 0x4c7c28u: goto label_4c7c28;
        case 0x4c7c2cu: goto label_4c7c2c;
        case 0x4c7c30u: goto label_4c7c30;
        case 0x4c7c34u: goto label_4c7c34;
        case 0x4c7c38u: goto label_4c7c38;
        case 0x4c7c3cu: goto label_4c7c3c;
        case 0x4c7c40u: goto label_4c7c40;
        case 0x4c7c44u: goto label_4c7c44;
        case 0x4c7c48u: goto label_4c7c48;
        case 0x4c7c4cu: goto label_4c7c4c;
        case 0x4c7c50u: goto label_4c7c50;
        case 0x4c7c54u: goto label_4c7c54;
        case 0x4c7c58u: goto label_4c7c58;
        case 0x4c7c5cu: goto label_4c7c5c;
        case 0x4c7c60u: goto label_4c7c60;
        case 0x4c7c64u: goto label_4c7c64;
        case 0x4c7c68u: goto label_4c7c68;
        case 0x4c7c6cu: goto label_4c7c6c;
        case 0x4c7c70u: goto label_4c7c70;
        case 0x4c7c74u: goto label_4c7c74;
        case 0x4c7c78u: goto label_4c7c78;
        case 0x4c7c7cu: goto label_4c7c7c;
        case 0x4c7c80u: goto label_4c7c80;
        case 0x4c7c84u: goto label_4c7c84;
        case 0x4c7c88u: goto label_4c7c88;
        case 0x4c7c8cu: goto label_4c7c8c;
        case 0x4c7c90u: goto label_4c7c90;
        case 0x4c7c94u: goto label_4c7c94;
        case 0x4c7c98u: goto label_4c7c98;
        case 0x4c7c9cu: goto label_4c7c9c;
        case 0x4c7ca0u: goto label_4c7ca0;
        case 0x4c7ca4u: goto label_4c7ca4;
        case 0x4c7ca8u: goto label_4c7ca8;
        case 0x4c7cacu: goto label_4c7cac;
        case 0x4c7cb0u: goto label_4c7cb0;
        case 0x4c7cb4u: goto label_4c7cb4;
        case 0x4c7cb8u: goto label_4c7cb8;
        case 0x4c7cbcu: goto label_4c7cbc;
        case 0x4c7cc0u: goto label_4c7cc0;
        case 0x4c7cc4u: goto label_4c7cc4;
        case 0x4c7cc8u: goto label_4c7cc8;
        case 0x4c7cccu: goto label_4c7ccc;
        case 0x4c7cd0u: goto label_4c7cd0;
        case 0x4c7cd4u: goto label_4c7cd4;
        case 0x4c7cd8u: goto label_4c7cd8;
        case 0x4c7cdcu: goto label_4c7cdc;
        case 0x4c7ce0u: goto label_4c7ce0;
        case 0x4c7ce4u: goto label_4c7ce4;
        case 0x4c7ce8u: goto label_4c7ce8;
        case 0x4c7cecu: goto label_4c7cec;
        case 0x4c7cf0u: goto label_4c7cf0;
        case 0x4c7cf4u: goto label_4c7cf4;
        case 0x4c7cf8u: goto label_4c7cf8;
        case 0x4c7cfcu: goto label_4c7cfc;
        case 0x4c7d00u: goto label_4c7d00;
        case 0x4c7d04u: goto label_4c7d04;
        case 0x4c7d08u: goto label_4c7d08;
        case 0x4c7d0cu: goto label_4c7d0c;
        case 0x4c7d10u: goto label_4c7d10;
        case 0x4c7d14u: goto label_4c7d14;
        case 0x4c7d18u: goto label_4c7d18;
        case 0x4c7d1cu: goto label_4c7d1c;
        case 0x4c7d20u: goto label_4c7d20;
        case 0x4c7d24u: goto label_4c7d24;
        case 0x4c7d28u: goto label_4c7d28;
        case 0x4c7d2cu: goto label_4c7d2c;
        case 0x4c7d30u: goto label_4c7d30;
        case 0x4c7d34u: goto label_4c7d34;
        case 0x4c7d38u: goto label_4c7d38;
        case 0x4c7d3cu: goto label_4c7d3c;
        case 0x4c7d40u: goto label_4c7d40;
        case 0x4c7d44u: goto label_4c7d44;
        case 0x4c7d48u: goto label_4c7d48;
        case 0x4c7d4cu: goto label_4c7d4c;
        case 0x4c7d50u: goto label_4c7d50;
        case 0x4c7d54u: goto label_4c7d54;
        case 0x4c7d58u: goto label_4c7d58;
        case 0x4c7d5cu: goto label_4c7d5c;
        case 0x4c7d60u: goto label_4c7d60;
        case 0x4c7d64u: goto label_4c7d64;
        case 0x4c7d68u: goto label_4c7d68;
        case 0x4c7d6cu: goto label_4c7d6c;
        case 0x4c7d70u: goto label_4c7d70;
        case 0x4c7d74u: goto label_4c7d74;
        case 0x4c7d78u: goto label_4c7d78;
        case 0x4c7d7cu: goto label_4c7d7c;
        case 0x4c7d80u: goto label_4c7d80;
        case 0x4c7d84u: goto label_4c7d84;
        case 0x4c7d88u: goto label_4c7d88;
        case 0x4c7d8cu: goto label_4c7d8c;
        case 0x4c7d90u: goto label_4c7d90;
        case 0x4c7d94u: goto label_4c7d94;
        case 0x4c7d98u: goto label_4c7d98;
        case 0x4c7d9cu: goto label_4c7d9c;
        case 0x4c7da0u: goto label_4c7da0;
        case 0x4c7da4u: goto label_4c7da4;
        case 0x4c7da8u: goto label_4c7da8;
        case 0x4c7dacu: goto label_4c7dac;
        case 0x4c7db0u: goto label_4c7db0;
        case 0x4c7db4u: goto label_4c7db4;
        case 0x4c7db8u: goto label_4c7db8;
        case 0x4c7dbcu: goto label_4c7dbc;
        case 0x4c7dc0u: goto label_4c7dc0;
        case 0x4c7dc4u: goto label_4c7dc4;
        case 0x4c7dc8u: goto label_4c7dc8;
        case 0x4c7dccu: goto label_4c7dcc;
        case 0x4c7dd0u: goto label_4c7dd0;
        case 0x4c7dd4u: goto label_4c7dd4;
        case 0x4c7dd8u: goto label_4c7dd8;
        case 0x4c7ddcu: goto label_4c7ddc;
        case 0x4c7de0u: goto label_4c7de0;
        case 0x4c7de4u: goto label_4c7de4;
        case 0x4c7de8u: goto label_4c7de8;
        case 0x4c7decu: goto label_4c7dec;
        case 0x4c7df0u: goto label_4c7df0;
        case 0x4c7df4u: goto label_4c7df4;
        case 0x4c7df8u: goto label_4c7df8;
        case 0x4c7dfcu: goto label_4c7dfc;
        case 0x4c7e00u: goto label_4c7e00;
        case 0x4c7e04u: goto label_4c7e04;
        case 0x4c7e08u: goto label_4c7e08;
        case 0x4c7e0cu: goto label_4c7e0c;
        case 0x4c7e10u: goto label_4c7e10;
        case 0x4c7e14u: goto label_4c7e14;
        case 0x4c7e18u: goto label_4c7e18;
        case 0x4c7e1cu: goto label_4c7e1c;
        case 0x4c7e20u: goto label_4c7e20;
        case 0x4c7e24u: goto label_4c7e24;
        case 0x4c7e28u: goto label_4c7e28;
        case 0x4c7e2cu: goto label_4c7e2c;
        case 0x4c7e30u: goto label_4c7e30;
        case 0x4c7e34u: goto label_4c7e34;
        case 0x4c7e38u: goto label_4c7e38;
        case 0x4c7e3cu: goto label_4c7e3c;
        case 0x4c7e40u: goto label_4c7e40;
        case 0x4c7e44u: goto label_4c7e44;
        case 0x4c7e48u: goto label_4c7e48;
        case 0x4c7e4cu: goto label_4c7e4c;
        case 0x4c7e50u: goto label_4c7e50;
        case 0x4c7e54u: goto label_4c7e54;
        case 0x4c7e58u: goto label_4c7e58;
        case 0x4c7e5cu: goto label_4c7e5c;
        case 0x4c7e60u: goto label_4c7e60;
        case 0x4c7e64u: goto label_4c7e64;
        case 0x4c7e68u: goto label_4c7e68;
        case 0x4c7e6cu: goto label_4c7e6c;
        case 0x4c7e70u: goto label_4c7e70;
        case 0x4c7e74u: goto label_4c7e74;
        case 0x4c7e78u: goto label_4c7e78;
        case 0x4c7e7cu: goto label_4c7e7c;
        case 0x4c7e80u: goto label_4c7e80;
        case 0x4c7e84u: goto label_4c7e84;
        case 0x4c7e88u: goto label_4c7e88;
        case 0x4c7e8cu: goto label_4c7e8c;
        case 0x4c7e90u: goto label_4c7e90;
        case 0x4c7e94u: goto label_4c7e94;
        case 0x4c7e98u: goto label_4c7e98;
        case 0x4c7e9cu: goto label_4c7e9c;
        case 0x4c7ea0u: goto label_4c7ea0;
        case 0x4c7ea4u: goto label_4c7ea4;
        case 0x4c7ea8u: goto label_4c7ea8;
        case 0x4c7eacu: goto label_4c7eac;
        case 0x4c7eb0u: goto label_4c7eb0;
        case 0x4c7eb4u: goto label_4c7eb4;
        case 0x4c7eb8u: goto label_4c7eb8;
        case 0x4c7ebcu: goto label_4c7ebc;
        case 0x4c7ec0u: goto label_4c7ec0;
        case 0x4c7ec4u: goto label_4c7ec4;
        case 0x4c7ec8u: goto label_4c7ec8;
        case 0x4c7eccu: goto label_4c7ecc;
        case 0x4c7ed0u: goto label_4c7ed0;
        case 0x4c7ed4u: goto label_4c7ed4;
        case 0x4c7ed8u: goto label_4c7ed8;
        case 0x4c7edcu: goto label_4c7edc;
        case 0x4c7ee0u: goto label_4c7ee0;
        case 0x4c7ee4u: goto label_4c7ee4;
        case 0x4c7ee8u: goto label_4c7ee8;
        case 0x4c7eecu: goto label_4c7eec;
        case 0x4c7ef0u: goto label_4c7ef0;
        case 0x4c7ef4u: goto label_4c7ef4;
        case 0x4c7ef8u: goto label_4c7ef8;
        case 0x4c7efcu: goto label_4c7efc;
        case 0x4c7f00u: goto label_4c7f00;
        case 0x4c7f04u: goto label_4c7f04;
        case 0x4c7f08u: goto label_4c7f08;
        case 0x4c7f0cu: goto label_4c7f0c;
        case 0x4c7f10u: goto label_4c7f10;
        case 0x4c7f14u: goto label_4c7f14;
        case 0x4c7f18u: goto label_4c7f18;
        case 0x4c7f1cu: goto label_4c7f1c;
        case 0x4c7f20u: goto label_4c7f20;
        case 0x4c7f24u: goto label_4c7f24;
        case 0x4c7f28u: goto label_4c7f28;
        case 0x4c7f2cu: goto label_4c7f2c;
        case 0x4c7f30u: goto label_4c7f30;
        case 0x4c7f34u: goto label_4c7f34;
        case 0x4c7f38u: goto label_4c7f38;
        case 0x4c7f3cu: goto label_4c7f3c;
        case 0x4c7f40u: goto label_4c7f40;
        case 0x4c7f44u: goto label_4c7f44;
        case 0x4c7f48u: goto label_4c7f48;
        case 0x4c7f4cu: goto label_4c7f4c;
        case 0x4c7f50u: goto label_4c7f50;
        case 0x4c7f54u: goto label_4c7f54;
        case 0x4c7f58u: goto label_4c7f58;
        case 0x4c7f5cu: goto label_4c7f5c;
        case 0x4c7f60u: goto label_4c7f60;
        case 0x4c7f64u: goto label_4c7f64;
        case 0x4c7f68u: goto label_4c7f68;
        case 0x4c7f6cu: goto label_4c7f6c;
        case 0x4c7f70u: goto label_4c7f70;
        case 0x4c7f74u: goto label_4c7f74;
        case 0x4c7f78u: goto label_4c7f78;
        case 0x4c7f7cu: goto label_4c7f7c;
        case 0x4c7f80u: goto label_4c7f80;
        case 0x4c7f84u: goto label_4c7f84;
        case 0x4c7f88u: goto label_4c7f88;
        case 0x4c7f8cu: goto label_4c7f8c;
        case 0x4c7f90u: goto label_4c7f90;
        case 0x4c7f94u: goto label_4c7f94;
        case 0x4c7f98u: goto label_4c7f98;
        case 0x4c7f9cu: goto label_4c7f9c;
        case 0x4c7fa0u: goto label_4c7fa0;
        case 0x4c7fa4u: goto label_4c7fa4;
        case 0x4c7fa8u: goto label_4c7fa8;
        case 0x4c7facu: goto label_4c7fac;
        case 0x4c7fb0u: goto label_4c7fb0;
        case 0x4c7fb4u: goto label_4c7fb4;
        case 0x4c7fb8u: goto label_4c7fb8;
        case 0x4c7fbcu: goto label_4c7fbc;
        case 0x4c7fc0u: goto label_4c7fc0;
        case 0x4c7fc4u: goto label_4c7fc4;
        case 0x4c7fc8u: goto label_4c7fc8;
        case 0x4c7fccu: goto label_4c7fcc;
        case 0x4c7fd0u: goto label_4c7fd0;
        case 0x4c7fd4u: goto label_4c7fd4;
        case 0x4c7fd8u: goto label_4c7fd8;
        case 0x4c7fdcu: goto label_4c7fdc;
        case 0x4c7fe0u: goto label_4c7fe0;
        case 0x4c7fe4u: goto label_4c7fe4;
        case 0x4c7fe8u: goto label_4c7fe8;
        case 0x4c7fecu: goto label_4c7fec;
        case 0x4c7ff0u: goto label_4c7ff0;
        case 0x4c7ff4u: goto label_4c7ff4;
        case 0x4c7ff8u: goto label_4c7ff8;
        case 0x4c7ffcu: goto label_4c7ffc;
        case 0x4c8000u: goto label_4c8000;
        case 0x4c8004u: goto label_4c8004;
        case 0x4c8008u: goto label_4c8008;
        case 0x4c800cu: goto label_4c800c;
        case 0x4c8010u: goto label_4c8010;
        case 0x4c8014u: goto label_4c8014;
        case 0x4c8018u: goto label_4c8018;
        case 0x4c801cu: goto label_4c801c;
        case 0x4c8020u: goto label_4c8020;
        case 0x4c8024u: goto label_4c8024;
        case 0x4c8028u: goto label_4c8028;
        case 0x4c802cu: goto label_4c802c;
        case 0x4c8030u: goto label_4c8030;
        case 0x4c8034u: goto label_4c8034;
        case 0x4c8038u: goto label_4c8038;
        case 0x4c803cu: goto label_4c803c;
        case 0x4c8040u: goto label_4c8040;
        case 0x4c8044u: goto label_4c8044;
        case 0x4c8048u: goto label_4c8048;
        case 0x4c804cu: goto label_4c804c;
        case 0x4c8050u: goto label_4c8050;
        case 0x4c8054u: goto label_4c8054;
        case 0x4c8058u: goto label_4c8058;
        case 0x4c805cu: goto label_4c805c;
        case 0x4c8060u: goto label_4c8060;
        case 0x4c8064u: goto label_4c8064;
        case 0x4c8068u: goto label_4c8068;
        case 0x4c806cu: goto label_4c806c;
        case 0x4c8070u: goto label_4c8070;
        case 0x4c8074u: goto label_4c8074;
        case 0x4c8078u: goto label_4c8078;
        case 0x4c807cu: goto label_4c807c;
        case 0x4c8080u: goto label_4c8080;
        case 0x4c8084u: goto label_4c8084;
        case 0x4c8088u: goto label_4c8088;
        case 0x4c808cu: goto label_4c808c;
        case 0x4c8090u: goto label_4c8090;
        case 0x4c8094u: goto label_4c8094;
        case 0x4c8098u: goto label_4c8098;
        case 0x4c809cu: goto label_4c809c;
        case 0x4c80a0u: goto label_4c80a0;
        case 0x4c80a4u: goto label_4c80a4;
        case 0x4c80a8u: goto label_4c80a8;
        case 0x4c80acu: goto label_4c80ac;
        case 0x4c80b0u: goto label_4c80b0;
        case 0x4c80b4u: goto label_4c80b4;
        case 0x4c80b8u: goto label_4c80b8;
        case 0x4c80bcu: goto label_4c80bc;
        case 0x4c80c0u: goto label_4c80c0;
        case 0x4c80c4u: goto label_4c80c4;
        case 0x4c80c8u: goto label_4c80c8;
        case 0x4c80ccu: goto label_4c80cc;
        case 0x4c80d0u: goto label_4c80d0;
        case 0x4c80d4u: goto label_4c80d4;
        case 0x4c80d8u: goto label_4c80d8;
        case 0x4c80dcu: goto label_4c80dc;
        case 0x4c80e0u: goto label_4c80e0;
        case 0x4c80e4u: goto label_4c80e4;
        case 0x4c80e8u: goto label_4c80e8;
        case 0x4c80ecu: goto label_4c80ec;
        case 0x4c80f0u: goto label_4c80f0;
        case 0x4c80f4u: goto label_4c80f4;
        case 0x4c80f8u: goto label_4c80f8;
        case 0x4c80fcu: goto label_4c80fc;
        case 0x4c8100u: goto label_4c8100;
        case 0x4c8104u: goto label_4c8104;
        case 0x4c8108u: goto label_4c8108;
        case 0x4c810cu: goto label_4c810c;
        case 0x4c8110u: goto label_4c8110;
        case 0x4c8114u: goto label_4c8114;
        case 0x4c8118u: goto label_4c8118;
        case 0x4c811cu: goto label_4c811c;
        case 0x4c8120u: goto label_4c8120;
        case 0x4c8124u: goto label_4c8124;
        case 0x4c8128u: goto label_4c8128;
        case 0x4c812cu: goto label_4c812c;
        case 0x4c8130u: goto label_4c8130;
        case 0x4c8134u: goto label_4c8134;
        case 0x4c8138u: goto label_4c8138;
        case 0x4c813cu: goto label_4c813c;
        case 0x4c8140u: goto label_4c8140;
        case 0x4c8144u: goto label_4c8144;
        case 0x4c8148u: goto label_4c8148;
        case 0x4c814cu: goto label_4c814c;
        case 0x4c8150u: goto label_4c8150;
        case 0x4c8154u: goto label_4c8154;
        case 0x4c8158u: goto label_4c8158;
        case 0x4c815cu: goto label_4c815c;
        case 0x4c8160u: goto label_4c8160;
        case 0x4c8164u: goto label_4c8164;
        case 0x4c8168u: goto label_4c8168;
        case 0x4c816cu: goto label_4c816c;
        case 0x4c8170u: goto label_4c8170;
        case 0x4c8174u: goto label_4c8174;
        case 0x4c8178u: goto label_4c8178;
        case 0x4c817cu: goto label_4c817c;
        case 0x4c8180u: goto label_4c8180;
        case 0x4c8184u: goto label_4c8184;
        case 0x4c8188u: goto label_4c8188;
        case 0x4c818cu: goto label_4c818c;
        case 0x4c8190u: goto label_4c8190;
        case 0x4c8194u: goto label_4c8194;
        case 0x4c8198u: goto label_4c8198;
        case 0x4c819cu: goto label_4c819c;
        case 0x4c81a0u: goto label_4c81a0;
        case 0x4c81a4u: goto label_4c81a4;
        case 0x4c81a8u: goto label_4c81a8;
        case 0x4c81acu: goto label_4c81ac;
        case 0x4c81b0u: goto label_4c81b0;
        case 0x4c81b4u: goto label_4c81b4;
        case 0x4c81b8u: goto label_4c81b8;
        case 0x4c81bcu: goto label_4c81bc;
        case 0x4c81c0u: goto label_4c81c0;
        case 0x4c81c4u: goto label_4c81c4;
        case 0x4c81c8u: goto label_4c81c8;
        case 0x4c81ccu: goto label_4c81cc;
        case 0x4c81d0u: goto label_4c81d0;
        case 0x4c81d4u: goto label_4c81d4;
        case 0x4c81d8u: goto label_4c81d8;
        case 0x4c81dcu: goto label_4c81dc;
        case 0x4c81e0u: goto label_4c81e0;
        case 0x4c81e4u: goto label_4c81e4;
        case 0x4c81e8u: goto label_4c81e8;
        case 0x4c81ecu: goto label_4c81ec;
        case 0x4c81f0u: goto label_4c81f0;
        case 0x4c81f4u: goto label_4c81f4;
        case 0x4c81f8u: goto label_4c81f8;
        case 0x4c81fcu: goto label_4c81fc;
        case 0x4c8200u: goto label_4c8200;
        case 0x4c8204u: goto label_4c8204;
        case 0x4c8208u: goto label_4c8208;
        case 0x4c820cu: goto label_4c820c;
        case 0x4c8210u: goto label_4c8210;
        case 0x4c8214u: goto label_4c8214;
        case 0x4c8218u: goto label_4c8218;
        case 0x4c821cu: goto label_4c821c;
        case 0x4c8220u: goto label_4c8220;
        case 0x4c8224u: goto label_4c8224;
        case 0x4c8228u: goto label_4c8228;
        case 0x4c822cu: goto label_4c822c;
        case 0x4c8230u: goto label_4c8230;
        case 0x4c8234u: goto label_4c8234;
        case 0x4c8238u: goto label_4c8238;
        case 0x4c823cu: goto label_4c823c;
        case 0x4c8240u: goto label_4c8240;
        case 0x4c8244u: goto label_4c8244;
        case 0x4c8248u: goto label_4c8248;
        case 0x4c824cu: goto label_4c824c;
        case 0x4c8250u: goto label_4c8250;
        case 0x4c8254u: goto label_4c8254;
        case 0x4c8258u: goto label_4c8258;
        case 0x4c825cu: goto label_4c825c;
        case 0x4c8260u: goto label_4c8260;
        case 0x4c8264u: goto label_4c8264;
        case 0x4c8268u: goto label_4c8268;
        case 0x4c826cu: goto label_4c826c;
        case 0x4c8270u: goto label_4c8270;
        case 0x4c8274u: goto label_4c8274;
        case 0x4c8278u: goto label_4c8278;
        case 0x4c827cu: goto label_4c827c;
        case 0x4c8280u: goto label_4c8280;
        case 0x4c8284u: goto label_4c8284;
        case 0x4c8288u: goto label_4c8288;
        case 0x4c828cu: goto label_4c828c;
        case 0x4c8290u: goto label_4c8290;
        case 0x4c8294u: goto label_4c8294;
        case 0x4c8298u: goto label_4c8298;
        case 0x4c829cu: goto label_4c829c;
        case 0x4c82a0u: goto label_4c82a0;
        case 0x4c82a4u: goto label_4c82a4;
        case 0x4c82a8u: goto label_4c82a8;
        case 0x4c82acu: goto label_4c82ac;
        case 0x4c82b0u: goto label_4c82b0;
        case 0x4c82b4u: goto label_4c82b4;
        case 0x4c82b8u: goto label_4c82b8;
        case 0x4c82bcu: goto label_4c82bc;
        case 0x4c82c0u: goto label_4c82c0;
        case 0x4c82c4u: goto label_4c82c4;
        case 0x4c82c8u: goto label_4c82c8;
        case 0x4c82ccu: goto label_4c82cc;
        case 0x4c82d0u: goto label_4c82d0;
        case 0x4c82d4u: goto label_4c82d4;
        case 0x4c82d8u: goto label_4c82d8;
        case 0x4c82dcu: goto label_4c82dc;
        case 0x4c82e0u: goto label_4c82e0;
        case 0x4c82e4u: goto label_4c82e4;
        case 0x4c82e8u: goto label_4c82e8;
        case 0x4c82ecu: goto label_4c82ec;
        case 0x4c82f0u: goto label_4c82f0;
        case 0x4c82f4u: goto label_4c82f4;
        case 0x4c82f8u: goto label_4c82f8;
        case 0x4c82fcu: goto label_4c82fc;
        case 0x4c8300u: goto label_4c8300;
        case 0x4c8304u: goto label_4c8304;
        case 0x4c8308u: goto label_4c8308;
        case 0x4c830cu: goto label_4c830c;
        case 0x4c8310u: goto label_4c8310;
        case 0x4c8314u: goto label_4c8314;
        case 0x4c8318u: goto label_4c8318;
        case 0x4c831cu: goto label_4c831c;
        case 0x4c8320u: goto label_4c8320;
        case 0x4c8324u: goto label_4c8324;
        case 0x4c8328u: goto label_4c8328;
        case 0x4c832cu: goto label_4c832c;
        case 0x4c8330u: goto label_4c8330;
        case 0x4c8334u: goto label_4c8334;
        case 0x4c8338u: goto label_4c8338;
        case 0x4c833cu: goto label_4c833c;
        case 0x4c8340u: goto label_4c8340;
        case 0x4c8344u: goto label_4c8344;
        case 0x4c8348u: goto label_4c8348;
        case 0x4c834cu: goto label_4c834c;
        case 0x4c8350u: goto label_4c8350;
        case 0x4c8354u: goto label_4c8354;
        case 0x4c8358u: goto label_4c8358;
        case 0x4c835cu: goto label_4c835c;
        case 0x4c8360u: goto label_4c8360;
        case 0x4c8364u: goto label_4c8364;
        case 0x4c8368u: goto label_4c8368;
        case 0x4c836cu: goto label_4c836c;
        case 0x4c8370u: goto label_4c8370;
        case 0x4c8374u: goto label_4c8374;
        case 0x4c8378u: goto label_4c8378;
        case 0x4c837cu: goto label_4c837c;
        case 0x4c8380u: goto label_4c8380;
        case 0x4c8384u: goto label_4c8384;
        case 0x4c8388u: goto label_4c8388;
        case 0x4c838cu: goto label_4c838c;
        case 0x4c8390u: goto label_4c8390;
        case 0x4c8394u: goto label_4c8394;
        case 0x4c8398u: goto label_4c8398;
        case 0x4c839cu: goto label_4c839c;
        case 0x4c83a0u: goto label_4c83a0;
        case 0x4c83a4u: goto label_4c83a4;
        case 0x4c83a8u: goto label_4c83a8;
        case 0x4c83acu: goto label_4c83ac;
        case 0x4c83b0u: goto label_4c83b0;
        case 0x4c83b4u: goto label_4c83b4;
        case 0x4c83b8u: goto label_4c83b8;
        case 0x4c83bcu: goto label_4c83bc;
        case 0x4c83c0u: goto label_4c83c0;
        case 0x4c83c4u: goto label_4c83c4;
        case 0x4c83c8u: goto label_4c83c8;
        case 0x4c83ccu: goto label_4c83cc;
        case 0x4c83d0u: goto label_4c83d0;
        case 0x4c83d4u: goto label_4c83d4;
        case 0x4c83d8u: goto label_4c83d8;
        case 0x4c83dcu: goto label_4c83dc;
        case 0x4c83e0u: goto label_4c83e0;
        case 0x4c83e4u: goto label_4c83e4;
        case 0x4c83e8u: goto label_4c83e8;
        case 0x4c83ecu: goto label_4c83ec;
        case 0x4c83f0u: goto label_4c83f0;
        case 0x4c83f4u: goto label_4c83f4;
        case 0x4c83f8u: goto label_4c83f8;
        case 0x4c83fcu: goto label_4c83fc;
        case 0x4c8400u: goto label_4c8400;
        case 0x4c8404u: goto label_4c8404;
        case 0x4c8408u: goto label_4c8408;
        case 0x4c840cu: goto label_4c840c;
        case 0x4c8410u: goto label_4c8410;
        case 0x4c8414u: goto label_4c8414;
        case 0x4c8418u: goto label_4c8418;
        case 0x4c841cu: goto label_4c841c;
        case 0x4c8420u: goto label_4c8420;
        case 0x4c8424u: goto label_4c8424;
        case 0x4c8428u: goto label_4c8428;
        case 0x4c842cu: goto label_4c842c;
        case 0x4c8430u: goto label_4c8430;
        case 0x4c8434u: goto label_4c8434;
        case 0x4c8438u: goto label_4c8438;
        case 0x4c843cu: goto label_4c843c;
        case 0x4c8440u: goto label_4c8440;
        case 0x4c8444u: goto label_4c8444;
        case 0x4c8448u: goto label_4c8448;
        case 0x4c844cu: goto label_4c844c;
        case 0x4c8450u: goto label_4c8450;
        case 0x4c8454u: goto label_4c8454;
        case 0x4c8458u: goto label_4c8458;
        case 0x4c845cu: goto label_4c845c;
        case 0x4c8460u: goto label_4c8460;
        case 0x4c8464u: goto label_4c8464;
        case 0x4c8468u: goto label_4c8468;
        case 0x4c846cu: goto label_4c846c;
        case 0x4c8470u: goto label_4c8470;
        case 0x4c8474u: goto label_4c8474;
        case 0x4c8478u: goto label_4c8478;
        case 0x4c847cu: goto label_4c847c;
        case 0x4c8480u: goto label_4c8480;
        case 0x4c8484u: goto label_4c8484;
        case 0x4c8488u: goto label_4c8488;
        case 0x4c848cu: goto label_4c848c;
        case 0x4c8490u: goto label_4c8490;
        case 0x4c8494u: goto label_4c8494;
        case 0x4c8498u: goto label_4c8498;
        case 0x4c849cu: goto label_4c849c;
        case 0x4c84a0u: goto label_4c84a0;
        case 0x4c84a4u: goto label_4c84a4;
        case 0x4c84a8u: goto label_4c84a8;
        case 0x4c84acu: goto label_4c84ac;
        case 0x4c84b0u: goto label_4c84b0;
        case 0x4c84b4u: goto label_4c84b4;
        case 0x4c84b8u: goto label_4c84b8;
        case 0x4c84bcu: goto label_4c84bc;
        case 0x4c84c0u: goto label_4c84c0;
        case 0x4c84c4u: goto label_4c84c4;
        case 0x4c84c8u: goto label_4c84c8;
        case 0x4c84ccu: goto label_4c84cc;
        case 0x4c84d0u: goto label_4c84d0;
        case 0x4c84d4u: goto label_4c84d4;
        case 0x4c84d8u: goto label_4c84d8;
        case 0x4c84dcu: goto label_4c84dc;
        case 0x4c84e0u: goto label_4c84e0;
        case 0x4c84e4u: goto label_4c84e4;
        case 0x4c84e8u: goto label_4c84e8;
        case 0x4c84ecu: goto label_4c84ec;
        case 0x4c84f0u: goto label_4c84f0;
        case 0x4c84f4u: goto label_4c84f4;
        case 0x4c84f8u: goto label_4c84f8;
        case 0x4c84fcu: goto label_4c84fc;
        case 0x4c8500u: goto label_4c8500;
        case 0x4c8504u: goto label_4c8504;
        case 0x4c8508u: goto label_4c8508;
        case 0x4c850cu: goto label_4c850c;
        case 0x4c8510u: goto label_4c8510;
        case 0x4c8514u: goto label_4c8514;
        case 0x4c8518u: goto label_4c8518;
        case 0x4c851cu: goto label_4c851c;
        case 0x4c8520u: goto label_4c8520;
        case 0x4c8524u: goto label_4c8524;
        case 0x4c8528u: goto label_4c8528;
        case 0x4c852cu: goto label_4c852c;
        case 0x4c8530u: goto label_4c8530;
        case 0x4c8534u: goto label_4c8534;
        case 0x4c8538u: goto label_4c8538;
        case 0x4c853cu: goto label_4c853c;
        case 0x4c8540u: goto label_4c8540;
        case 0x4c8544u: goto label_4c8544;
        case 0x4c8548u: goto label_4c8548;
        case 0x4c854cu: goto label_4c854c;
        case 0x4c8550u: goto label_4c8550;
        case 0x4c8554u: goto label_4c8554;
        case 0x4c8558u: goto label_4c8558;
        case 0x4c855cu: goto label_4c855c;
        case 0x4c8560u: goto label_4c8560;
        case 0x4c8564u: goto label_4c8564;
        case 0x4c8568u: goto label_4c8568;
        case 0x4c856cu: goto label_4c856c;
        case 0x4c8570u: goto label_4c8570;
        case 0x4c8574u: goto label_4c8574;
        case 0x4c8578u: goto label_4c8578;
        case 0x4c857cu: goto label_4c857c;
        case 0x4c8580u: goto label_4c8580;
        case 0x4c8584u: goto label_4c8584;
        case 0x4c8588u: goto label_4c8588;
        case 0x4c858cu: goto label_4c858c;
        case 0x4c8590u: goto label_4c8590;
        case 0x4c8594u: goto label_4c8594;
        case 0x4c8598u: goto label_4c8598;
        case 0x4c859cu: goto label_4c859c;
        case 0x4c85a0u: goto label_4c85a0;
        case 0x4c85a4u: goto label_4c85a4;
        case 0x4c85a8u: goto label_4c85a8;
        case 0x4c85acu: goto label_4c85ac;
        case 0x4c85b0u: goto label_4c85b0;
        case 0x4c85b4u: goto label_4c85b4;
        case 0x4c85b8u: goto label_4c85b8;
        case 0x4c85bcu: goto label_4c85bc;
        case 0x4c85c0u: goto label_4c85c0;
        case 0x4c85c4u: goto label_4c85c4;
        case 0x4c85c8u: goto label_4c85c8;
        case 0x4c85ccu: goto label_4c85cc;
        case 0x4c85d0u: goto label_4c85d0;
        case 0x4c85d4u: goto label_4c85d4;
        case 0x4c85d8u: goto label_4c85d8;
        case 0x4c85dcu: goto label_4c85dc;
        case 0x4c85e0u: goto label_4c85e0;
        case 0x4c85e4u: goto label_4c85e4;
        case 0x4c85e8u: goto label_4c85e8;
        case 0x4c85ecu: goto label_4c85ec;
        case 0x4c85f0u: goto label_4c85f0;
        case 0x4c85f4u: goto label_4c85f4;
        case 0x4c85f8u: goto label_4c85f8;
        case 0x4c85fcu: goto label_4c85fc;
        case 0x4c8600u: goto label_4c8600;
        case 0x4c8604u: goto label_4c8604;
        case 0x4c8608u: goto label_4c8608;
        case 0x4c860cu: goto label_4c860c;
        case 0x4c8610u: goto label_4c8610;
        case 0x4c8614u: goto label_4c8614;
        case 0x4c8618u: goto label_4c8618;
        case 0x4c861cu: goto label_4c861c;
        case 0x4c8620u: goto label_4c8620;
        case 0x4c8624u: goto label_4c8624;
        case 0x4c8628u: goto label_4c8628;
        case 0x4c862cu: goto label_4c862c;
        case 0x4c8630u: goto label_4c8630;
        case 0x4c8634u: goto label_4c8634;
        case 0x4c8638u: goto label_4c8638;
        case 0x4c863cu: goto label_4c863c;
        case 0x4c8640u: goto label_4c8640;
        case 0x4c8644u: goto label_4c8644;
        case 0x4c8648u: goto label_4c8648;
        case 0x4c864cu: goto label_4c864c;
        case 0x4c8650u: goto label_4c8650;
        case 0x4c8654u: goto label_4c8654;
        case 0x4c8658u: goto label_4c8658;
        case 0x4c865cu: goto label_4c865c;
        case 0x4c8660u: goto label_4c8660;
        case 0x4c8664u: goto label_4c8664;
        case 0x4c8668u: goto label_4c8668;
        case 0x4c866cu: goto label_4c866c;
        case 0x4c8670u: goto label_4c8670;
        case 0x4c8674u: goto label_4c8674;
        case 0x4c8678u: goto label_4c8678;
        case 0x4c867cu: goto label_4c867c;
        case 0x4c8680u: goto label_4c8680;
        case 0x4c8684u: goto label_4c8684;
        case 0x4c8688u: goto label_4c8688;
        case 0x4c868cu: goto label_4c868c;
        case 0x4c8690u: goto label_4c8690;
        case 0x4c8694u: goto label_4c8694;
        case 0x4c8698u: goto label_4c8698;
        case 0x4c869cu: goto label_4c869c;
        case 0x4c86a0u: goto label_4c86a0;
        case 0x4c86a4u: goto label_4c86a4;
        case 0x4c86a8u: goto label_4c86a8;
        case 0x4c86acu: goto label_4c86ac;
        case 0x4c86b0u: goto label_4c86b0;
        case 0x4c86b4u: goto label_4c86b4;
        case 0x4c86b8u: goto label_4c86b8;
        case 0x4c86bcu: goto label_4c86bc;
        case 0x4c86c0u: goto label_4c86c0;
        case 0x4c86c4u: goto label_4c86c4;
        case 0x4c86c8u: goto label_4c86c8;
        case 0x4c86ccu: goto label_4c86cc;
        case 0x4c86d0u: goto label_4c86d0;
        case 0x4c86d4u: goto label_4c86d4;
        case 0x4c86d8u: goto label_4c86d8;
        case 0x4c86dcu: goto label_4c86dc;
        case 0x4c86e0u: goto label_4c86e0;
        case 0x4c86e4u: goto label_4c86e4;
        case 0x4c86e8u: goto label_4c86e8;
        case 0x4c86ecu: goto label_4c86ec;
        case 0x4c86f0u: goto label_4c86f0;
        case 0x4c86f4u: goto label_4c86f4;
        case 0x4c86f8u: goto label_4c86f8;
        case 0x4c86fcu: goto label_4c86fc;
        case 0x4c8700u: goto label_4c8700;
        case 0x4c8704u: goto label_4c8704;
        case 0x4c8708u: goto label_4c8708;
        case 0x4c870cu: goto label_4c870c;
        case 0x4c8710u: goto label_4c8710;
        case 0x4c8714u: goto label_4c8714;
        case 0x4c8718u: goto label_4c8718;
        case 0x4c871cu: goto label_4c871c;
        case 0x4c8720u: goto label_4c8720;
        case 0x4c8724u: goto label_4c8724;
        case 0x4c8728u: goto label_4c8728;
        case 0x4c872cu: goto label_4c872c;
        case 0x4c8730u: goto label_4c8730;
        case 0x4c8734u: goto label_4c8734;
        case 0x4c8738u: goto label_4c8738;
        case 0x4c873cu: goto label_4c873c;
        case 0x4c8740u: goto label_4c8740;
        case 0x4c8744u: goto label_4c8744;
        case 0x4c8748u: goto label_4c8748;
        case 0x4c874cu: goto label_4c874c;
        case 0x4c8750u: goto label_4c8750;
        case 0x4c8754u: goto label_4c8754;
        case 0x4c8758u: goto label_4c8758;
        case 0x4c875cu: goto label_4c875c;
        case 0x4c8760u: goto label_4c8760;
        case 0x4c8764u: goto label_4c8764;
        case 0x4c8768u: goto label_4c8768;
        case 0x4c876cu: goto label_4c876c;
        case 0x4c8770u: goto label_4c8770;
        case 0x4c8774u: goto label_4c8774;
        case 0x4c8778u: goto label_4c8778;
        case 0x4c877cu: goto label_4c877c;
        case 0x4c8780u: goto label_4c8780;
        case 0x4c8784u: goto label_4c8784;
        case 0x4c8788u: goto label_4c8788;
        case 0x4c878cu: goto label_4c878c;
        case 0x4c8790u: goto label_4c8790;
        case 0x4c8794u: goto label_4c8794;
        case 0x4c8798u: goto label_4c8798;
        case 0x4c879cu: goto label_4c879c;
        case 0x4c87a0u: goto label_4c87a0;
        case 0x4c87a4u: goto label_4c87a4;
        case 0x4c87a8u: goto label_4c87a8;
        case 0x4c87acu: goto label_4c87ac;
        case 0x4c87b0u: goto label_4c87b0;
        case 0x4c87b4u: goto label_4c87b4;
        case 0x4c87b8u: goto label_4c87b8;
        case 0x4c87bcu: goto label_4c87bc;
        case 0x4c87c0u: goto label_4c87c0;
        case 0x4c87c4u: goto label_4c87c4;
        case 0x4c87c8u: goto label_4c87c8;
        case 0x4c87ccu: goto label_4c87cc;
        case 0x4c87d0u: goto label_4c87d0;
        case 0x4c87d4u: goto label_4c87d4;
        case 0x4c87d8u: goto label_4c87d8;
        case 0x4c87dcu: goto label_4c87dc;
        case 0x4c87e0u: goto label_4c87e0;
        case 0x4c87e4u: goto label_4c87e4;
        case 0x4c87e8u: goto label_4c87e8;
        case 0x4c87ecu: goto label_4c87ec;
        case 0x4c87f0u: goto label_4c87f0;
        case 0x4c87f4u: goto label_4c87f4;
        case 0x4c87f8u: goto label_4c87f8;
        case 0x4c87fcu: goto label_4c87fc;
        case 0x4c8800u: goto label_4c8800;
        case 0x4c8804u: goto label_4c8804;
        case 0x4c8808u: goto label_4c8808;
        case 0x4c880cu: goto label_4c880c;
        case 0x4c8810u: goto label_4c8810;
        case 0x4c8814u: goto label_4c8814;
        case 0x4c8818u: goto label_4c8818;
        case 0x4c881cu: goto label_4c881c;
        case 0x4c8820u: goto label_4c8820;
        case 0x4c8824u: goto label_4c8824;
        case 0x4c8828u: goto label_4c8828;
        case 0x4c882cu: goto label_4c882c;
        case 0x4c8830u: goto label_4c8830;
        case 0x4c8834u: goto label_4c8834;
        case 0x4c8838u: goto label_4c8838;
        case 0x4c883cu: goto label_4c883c;
        case 0x4c8840u: goto label_4c8840;
        case 0x4c8844u: goto label_4c8844;
        case 0x4c8848u: goto label_4c8848;
        case 0x4c884cu: goto label_4c884c;
        case 0x4c8850u: goto label_4c8850;
        case 0x4c8854u: goto label_4c8854;
        case 0x4c8858u: goto label_4c8858;
        case 0x4c885cu: goto label_4c885c;
        case 0x4c8860u: goto label_4c8860;
        case 0x4c8864u: goto label_4c8864;
        case 0x4c8868u: goto label_4c8868;
        case 0x4c886cu: goto label_4c886c;
        default: break;
    }

    ctx->pc = 0x4c7068u;

label_4c7068:
    // 0x4c7068: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x4c7068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
label_4c706c:
    // 0x4c706c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4c706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4c7070:
    // 0x4c7070: 0x8fa204a0  lw          $v0, 0x4A0($sp)
    ctx->pc = 0x4c7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_4c7074:
    // 0x4c7074: 0xffb00450  sd          $s0, 0x450($sp)
    ctx->pc = 0x4c7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 16));
label_4c7078:
    // 0x4c7078: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x4c7078u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4c707c:
    // 0x4c707c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4c707cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4c7080:
    // 0x4c7080: 0xafa60410  sw          $a2, 0x410($sp)
    ctx->pc = 0x4c7080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 6));
label_4c7084:
    // 0x4c7084: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4c7084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4c7088:
    // 0x4c7088: 0x8fa804b0  lw          $t0, 0x4B0($sp)
    ctx->pc = 0x4c7088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_4c708c:
    // 0x4c708c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4c708cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4c7090:
    // 0x4c7090: 0xffb40470  sd          $s4, 0x470($sp)
    ctx->pc = 0x4c7090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 20));
label_4c7094:
    // 0x4c7094: 0xafa20424  sw          $v0, 0x424($sp)
    ctx->pc = 0x4c7094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 2));
label_4c7098:
    // 0x4c7098: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c7098u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c709c:
    // 0x4c709c: 0xffb60480  sd          $s6, 0x480($sp)
    ctx->pc = 0x4c709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 22));
label_4c70a0:
    // 0x4c70a0: 0x31088000  andi        $t0, $t0, 0x8000
    ctx->pc = 0x4c70a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
label_4c70a4:
    // 0x4c70a4: 0xffb70488  sd          $s7, 0x488($sp)
    ctx->pc = 0x4c70a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1160), GPR_U64(ctx, 23));
label_4c70a8:
    // 0x4c70a8: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x4c70a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4c70ac:
    // 0x4c70ac: 0xffb10458  sd          $s1, 0x458($sp)
    ctx->pc = 0x4c70acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 17));
label_4c70b0:
    // 0x4c70b0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4c70b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c70b4:
    // 0x4c70b4: 0xffb20460  sd          $s2, 0x460($sp)
    ctx->pc = 0x4c70b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 18));
label_4c70b8:
    // 0x4c70b8: 0xffb30468  sd          $s3, 0x468($sp)
    ctx->pc = 0x4c70b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 19));
label_4c70bc:
    // 0x4c70bc: 0xffb50478  sd          $s5, 0x478($sp)
    ctx->pc = 0x4c70bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 21));
label_4c70c0:
    // 0x4c70c0: 0xffbe0490  sd          $fp, 0x490($sp)
    ctx->pc = 0x4c70c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 30));
label_4c70c4:
    // 0x4c70c4: 0xffbf0498  sd          $ra, 0x498($sp)
    ctx->pc = 0x4c70c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1176), GPR_U64(ctx, 31));
label_4c70c8:
    // 0x4c70c8: 0xafa70414  sw          $a3, 0x414($sp)
    ctx->pc = 0x4c70c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 7));
label_4c70cc:
    // 0x4c70cc: 0xafa90404  sw          $t1, 0x404($sp)
    ctx->pc = 0x4c70ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 9));
label_4c70d0:
    // 0x4c70d0: 0x8faf04a8  lw          $t7, 0x4A8($sp)
    ctx->pc = 0x4c70d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
label_4c70d4:
    // 0x4c70d4: 0xafa00428  sw          $zero, 0x428($sp)
    ctx->pc = 0x4c70d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 0));
label_4c70d8:
    // 0x4c70d8: 0xafa9040c  sw          $t1, 0x40C($sp)
    ctx->pc = 0x4c70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 9));
label_4c70dc:
    // 0x4c70dc: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x4c70dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_4c70e0:
    // 0x4c70e0: 0xafa00408  sw          $zero, 0x408($sp)
    ctx->pc = 0x4c70e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 0));
label_4c70e4:
    // 0x4c70e4: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x4c70e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
label_4c70e8:
    // 0x4c70e8: 0x1812  mflo        $v1
    ctx->pc = 0x4c70e8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4c70ec:
    // 0x4c70ec: 0x203001b  divu        $zero, $s0, $v1
    ctx->pc = 0x4c70ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_4c70f0:
    // 0x4c70f0: 0x1012  mflo        $v0
    ctx->pc = 0x4c70f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_4c70f4:
    // 0x4c70f4: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_4c70f8:
    if (ctx->pc == 0x4C70F8u) {
        ctx->pc = 0x4C70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C70F4u;
        // 0x4c70f8: 0xafa2042c  sw          $v0, 0x42C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C70FCu;
        goto label_4c70fc;
    }
    ctx->pc = 0x4C70F4u;
    {
        const bool branch_taken_0x4c70f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C70F4u;
        // 0x4c70f8: 0xafa2042c  sw          $v0, 0x42C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c70f4) {
            ctx->pc = 0x4C7108u;
            goto label_4c7108;
        }
    }
    ctx->pc = 0x4C70FCu;
label_4c70fc:
    // 0x4c70fc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x4c70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_4c7100:
    // 0x4c7100: 0x10000003  b           . + 4 + (0x3 << 2)
label_4c7104:
    if (ctx->pc == 0x4C7104u) {
        ctx->pc = 0x4C7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7100u;
        // 0x4c7104: 0x24425f30  addiu       $v0, $v0, 0x5F30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7108u;
        goto label_4c7108;
    }
    ctx->pc = 0x4C7100u;
    {
        const bool branch_taken_0x4c7100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7100u;
        // 0x4c7104: 0x24425f30  addiu       $v0, $v0, 0x5F30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7100) {
            ctx->pc = 0x4C7110u;
            goto label_4c7110;
        }
    }
    ctx->pc = 0x4C7108u;
label_4c7108:
    // 0x4c7108: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x4c7108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_4c710c:
    // 0x4c710c: 0x24426240  addiu       $v0, $v0, 0x6240
    ctx->pc = 0x4c710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25152));
label_4c7110:
    // 0x4c7110: 0xafa20418  sw          $v0, 0x418($sp)
    ctx->pc = 0x4c7110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1048), GPR_U32(ctx, 2));
label_4c7114:
    // 0x4c7114: 0x8fa30410  lw          $v1, 0x410($sp)
    ctx->pc = 0x4c7114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
label_4c7118:
    // 0x4c7118: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4c7118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_4c711c:
    // 0x4c711c: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x4c711cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c7120:
    // 0x4c7120: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4c7120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_4c7124:
    // 0x4c7124: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x4c7124u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_4c7128:
    // 0x4c7128: 0x330c2  srl         $a2, $v1, 3
    ctx->pc = 0x4c7128u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_4c712c:
    // 0x4c712c: 0x244201ff  addiu       $v0, $v0, 0x1FF
    ctx->pc = 0x4c712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 511));
label_4c7130:
    // 0x4c7130: 0x24c701ff  addiu       $a3, $a2, 0x1FF
    ctx->pc = 0x4c7130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
label_4c7134:
    // 0x4c7134: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4c7134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4c7138:
    // 0x4c7138: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x4c7138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_4c713c:
    // 0x4c713c: 0x62180  sll         $a0, $a2, 6
    ctx->pc = 0x4c713cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4c7140:
    // 0x4c7140: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x4c7140u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
label_4c7144:
    // 0x4c7144: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x4c7144u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
label_4c7148:
    // 0x4c7148: 0x248401ff  addiu       $a0, $a0, 0x1FF
    ctx->pc = 0x4c7148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 511));
label_4c714c:
    // 0x4c714c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4c714cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4c7150:
    // 0x4c7150: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4c7150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4c7154:
    // 0x4c7154: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x4c7154u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4c7158:
    // 0x4c7158: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x4c7158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_4c715c:
    // 0x4c715c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x4c715cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_4c7160:
    // 0x4c7160: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x4c7160u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4c7164:
    // 0x4c7164: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x4c7164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4c7168:
    // 0x4c7168: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x4c7168u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
label_4c716c:
    // 0x4c716c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4c716cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_4c7170:
    // 0x4c7170: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x4c7170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c7174:
    // 0x4c7174: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x4c7174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
label_4c7178:
    // 0x4c7178: 0x24a501ff  addiu       $a1, $a1, 0x1FF
    ctx->pc = 0x4c7178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 511));
label_4c717c:
    // 0x4c717c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4c717cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4c7180:
    // 0x4c7180: 0xac4e0008  sw          $t6, 0x8($v0)
    ctx->pc = 0x4c7180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 14));
label_4c7184:
    // 0x4c7184: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x4c7184u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c7188:
    // 0x4c7188: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x4c7188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_4c718c:
    // 0x4c718c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x4c718cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_4c7190:
    // 0x4c7190: 0x70a02804  plzcw       $a1, $a1
    ctx->pc = 0x4c7190u;
    { uint64_t v = GPR_U64(ctx, 5); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 5, out); }
label_4c7194:
    // 0x4c7194: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4c7194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_4c7198:
    // 0x4c7198: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x4c7198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c719c:
    // 0x4c719c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4c719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c71a0:
    // 0x4c71a0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4c71a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4c71a4:
    // 0x4c71a4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4c71a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4c71a8:
    // 0x4c71a8: 0x1052823  subu        $a1, $t0, $a1
    ctx->pc = 0x4c71a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4c71ac:
    // 0x4c71ac: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x4c71acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_4c71b0:
    // 0x4c71b0: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x4c71b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_4c71b4:
    // 0x4c71b4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4c71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4c71b8:
    // 0x4c71b8: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x4c71b8u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
label_4c71bc:
    // 0x4c71bc: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x4c71bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4c71c0:
    // 0x4c71c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4c71c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4c71c4:
    // 0x4c71c4: 0x8dec0000  lw          $t4, 0x0($t7)
    ctx->pc = 0x4c71c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_4c71c8:
    // 0x4c71c8: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x4c71c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4c71cc:
    // 0x4c71cc: 0x8de50004  lw          $a1, 0x4($t7)
    ctx->pc = 0x4c71ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_4c71d0:
    // 0x4c71d0: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x4c71d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4c71d4:
    // 0x4c71d4: 0x8dea0008  lw          $t2, 0x8($t7)
    ctx->pc = 0x4c71d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_4c71d8:
    // 0x4c71d8: 0x240d0005  addiu       $t5, $zero, 0x5
    ctx->pc = 0x4c71d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4c71dc:
    // 0x4c71dc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4c71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4c71e0:
    // 0x4c71e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4c71e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c71e4:
    // 0x4c71e4: 0x8deb000c  lw          $t3, 0xC($t7)
    ctx->pc = 0x4c71e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
label_4c71e8:
    // 0x4c71e8: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x4c71e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_4c71ec:
    // 0x4c71ec: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x4c71ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_4c71f0:
    // 0x4c71f0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4c71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4c71f4:
    // 0x4c71f4: 0xafac002c  sw          $t4, 0x2C($sp)
    ctx->pc = 0x4c71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 12));
label_4c71f8:
    // 0x4c71f8: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x4c71f8u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
label_4c71fc:
    // 0x4c71fc: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x4c71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_4c7200:
    // 0x4c7200: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x4c7200u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4c7204:
    // 0x4c7204: 0xafaa008c  sw          $t2, 0x8C($sp)
    ctx->pc = 0x4c7204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 10));
label_4c7208:
    // 0x4c7208: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x4c7208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4c720c:
    // 0x4c720c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x4c720cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_4c7210:
    // 0x4c7210: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x4c7210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_4c7214:
    // 0x4c7214: 0xafab00bc  sw          $t3, 0xBC($sp)
    ctx->pc = 0x4c7214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 11));
label_4c7218:
    // 0x4c7218: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4c7218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4c721c:
    // 0x4c721c: 0x8deb0010  lw          $t3, 0x10($t7)
    ctx->pc = 0x4c721cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
label_4c7220:
    // 0x4c7220: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x4c7220u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c7224:
    // 0x4c7224: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4c7224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_4c7228:
    // 0x4c7228: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x4c7228u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
label_4c722c:
    // 0x4c722c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4c722cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_4c7230:
    // 0x4c7230: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x4c7230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4c7234:
    // 0x4c7234: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x4c7234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_4c7238:
    // 0x4c7238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4c7238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4c723c:
    // 0x4c723c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x4c723cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_4c7240:
    // 0x4c7240: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x4c7240u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_4c7244:
    // 0x4c7244: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4c7244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4c7248:
    // 0x4c7248: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x4c7248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4c724c:
    // 0x4c724c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4c724cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4c7250:
    // 0x4c7250: 0x70e03804  plzcw       $a3, $a3
    ctx->pc = 0x4c7250u;
    { uint64_t v = GPR_U64(ctx, 7); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 7, out); }
label_4c7254:
    // 0x4c7254: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x4c7254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_4c7258:
    // 0x4c7258: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x4c7258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4c725c:
    // 0x4c725c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x4c725cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_4c7260:
    // 0x4c7260: 0x24c601ff  addiu       $a2, $a2, 0x1FF
    ctx->pc = 0x4c7260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
label_4c7264:
    // 0x4c7264: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x4c7264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_4c7268:
    // 0x4c7268: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4c7268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_4c726c:
    // 0x4c726c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x4c726cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_4c7270:
    // 0x4c7270: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x4c7270u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4c7274:
    // 0x4c7274: 0xad2d0008  sw          $t5, 0x8($t1)
    ctx->pc = 0x4c7274u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 13));
label_4c7278:
    // 0x4c7278: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x4c7278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_4c727c:
    // 0x4c727c: 0xad2c000c  sw          $t4, 0xC($t1)
    ctx->pc = 0x4c727cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 12));
label_4c7280:
    // 0x4c7280: 0x70c03004  plzcw       $a2, $a2
    ctx->pc = 0x4c7280u;
    { uint64_t v = GPR_U64(ctx, 6); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 6, out); }
label_4c7284:
    // 0x4c7284: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x4c7284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_4c7288:
    // 0x4c7288: 0x2409000b  addiu       $t1, $zero, 0xB
    ctx->pc = 0x4c7288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4c728c:
    // 0x4c728c: 0xac6d0008  sw          $t5, 0x8($v1)
    ctx->pc = 0x4c728cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 13));
label_4c7290:
    // 0x4c7290: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4c7290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_4c7294:
    // 0x4c7294: 0xac6c000c  sw          $t4, 0xC($v1)
    ctx->pc = 0x4c7294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 12));
label_4c7298:
    // 0x4c7298: 0x1064023  subu        $t0, $t0, $a2
    ctx->pc = 0x4c7298u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_4c729c:
    // 0x4c729c: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x4c729cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_4c72a0:
    // 0x4c72a0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x4c72a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_4c72a4:
    // 0x4c72a4: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x4c72a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
label_4c72a8:
    // 0x4c72a8: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x4c72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4c72ac:
    // 0x4c72ac: 0xafa70178  sw          $a3, 0x178($sp)
    ctx->pc = 0x4c72acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 7));
label_4c72b0:
    // 0x4c72b0: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x4c72b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c72b4:
    // 0x4c72b4: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x4c72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_4c72b8:
    // 0x4c72b8: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x4c72b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_4c72bc:
    // 0x4c72bc: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x4c72bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_4c72c0:
    // 0x4c72c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4c72c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4c72c4:
    // 0x4c72c4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4c72c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_4c72c8:
    // 0x4c72c8: 0x27a90180  addiu       $t1, $sp, 0x180
    ctx->pc = 0x4c72c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4c72cc:
    // 0x4c72cc: 0x8dea0020  lw          $t2, 0x20($t7)
    ctx->pc = 0x4c72ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 32)));
label_4c72d0:
    // 0x4c72d0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x4c72d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4c72d4:
    // 0x4c72d4: 0xafa801a8  sw          $t0, 0x1A8($sp)
    ctx->pc = 0x4c72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 8));
label_4c72d8:
    // 0x4c72d8: 0x8de80014  lw          $t0, 0x14($t7)
    ctx->pc = 0x4c72d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
label_4c72dc:
    // 0x4c72dc: 0x8de30018  lw          $v1, 0x18($t7)
    ctx->pc = 0x4c72dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
label_4c72e0:
    // 0x4c72e0: 0x8de2001c  lw          $v0, 0x1C($t7)
    ctx->pc = 0x4c72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
label_4c72e4:
    // 0x4c72e4: 0xad2e0008  sw          $t6, 0x8($t1)
    ctx->pc = 0x4c72e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 14));
label_4c72e8:
    // 0x4c72e8: 0xafab00ec  sw          $t3, 0xEC($sp)
    ctx->pc = 0x4c72e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 11));
label_4c72ec:
    // 0x4c72ec: 0xafa8011c  sw          $t0, 0x11C($sp)
    ctx->pc = 0x4c72ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 8));
label_4c72f0:
    // 0x4c72f0: 0xafa3014c  sw          $v1, 0x14C($sp)
    ctx->pc = 0x4c72f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
label_4c72f4:
    // 0x4c72f4: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x4c72f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_4c72f8:
    // 0x4c72f8: 0xafaa01ac  sw          $t2, 0x1AC($sp)
    ctx->pc = 0x4c72f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 10));
label_4c72fc:
    // 0x4c72fc: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x4c72fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_4c7300:
    // 0x4c7300: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x4c7300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_4c7304:
    // 0x4c7304: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x4c7304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_4c7308:
    // 0x4c7308: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x4c7308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_4c730c:
    // 0x4c730c: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x4c730cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_4c7310:
    // 0x4c7310: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x4c7310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_4c7314:
    // 0x4c7314: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x4c7314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
label_4c7318:
    // 0x4c7318: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x4c7318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
label_4c731c:
    // 0x4c731c: 0xc131326  jal         func_4C4C98
label_4c7320:
    if (ctx->pc == 0x4C7320u) {
        ctx->pc = 0x4C7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C731Cu;
        // 0x4c7320: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7324u;
        goto label_4c7324;
    }
    ctx->pc = 0x4C731Cu;
    SET_GPR_U32(ctx, 31, 0x4C7324u);
    ctx->pc = 0x4C7320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C731Cu;
    // 0x4c7320: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4C98u, 0x4C731Cu, 0x4C7324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7324u;
label_4c7324:
    // 0x4c7324: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x4c7324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c7328:
    // 0x4c7328: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x4c7328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4c732c:
    // 0x4c732c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4c732cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4c7330:
    // 0x4c7330: 0xc131326  jal         func_4C4C98
label_4c7334:
    if (ctx->pc == 0x4C7334u) {
        ctx->pc = 0x4C7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7330u;
        // 0x4c7334: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7338u;
        goto label_4c7338;
    }
    ctx->pc = 0x4C7330u;
    SET_GPR_U32(ctx, 31, 0x4C7338u);
    ctx->pc = 0x4C7334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7330u;
    // 0x4c7334: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4C98u, 0x4C7330u, 0x4C7338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7338u;
label_4c7338:
    // 0x4c7338: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x4c7338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_4c733c:
    // 0x4c733c: 0x27b202b0  addiu       $s2, $sp, 0x2B0
    ctx->pc = 0x4c733cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_4c7340:
    // 0x4c7340: 0xafa40434  sw          $a0, 0x434($sp)
    ctx->pc = 0x4c7340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 4));
label_4c7344:
    // 0x4c7344: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c7344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c7348:
    // 0x4c7348: 0x27b102f0  addiu       $s1, $sp, 0x2F0
    ctx->pc = 0x4c7348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_4c734c:
    // 0x4c734c: 0x0  nop
    ctx->pc = 0x4c734cu;
    // NOP
label_4c7350:
    // 0x4c7350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c7350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c7354:
    // 0x4c7354: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4c7354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c7358:
    // 0x4c7358: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4c7358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c735c:
    // 0x4c735c: 0xc131326  jal         func_4C4C98
label_4c7360:
    if (ctx->pc == 0x4C7360u) {
        ctx->pc = 0x4C7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C735Cu;
        // 0x4c7360: 0x27a40400  addiu       $a0, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7364u;
        goto label_4c7364;
    }
    ctx->pc = 0x4C735Cu;
    SET_GPR_U32(ctx, 31, 0x4C7364u);
    ctx->pc = 0x4C7360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C735Cu;
    // 0x4c7360: 0x27a40400  addiu       $a0, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4C98u, 0x4C735Cu, 0x4C7364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7364u;
label_4c7364:
    // 0x4c7364: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4c7364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4c7368:
    // 0x4c7368: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x4c7368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4c736c:
    // 0x4c736c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c736cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c7370:
    // 0x4c7370: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x4c7370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4c7374:
    // 0x4c7374: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_4c7378:
    if (ctx->pc == 0x4C7378u) {
        ctx->pc = 0x4C7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7374u;
        // 0x4c7378: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C737Cu;
        goto label_4c737c;
    }
    ctx->pc = 0x4C7374u;
    {
        const bool branch_taken_0x4c7374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7374u;
        // 0x4c7378: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7374) {
            ctx->pc = 0x4C7350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7350;
        }
    }
    ctx->pc = 0x4C737Cu;
label_4c737c:
    // 0x4c737c: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x4c737cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c7380:
    // 0x4c7380: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x4c7380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_4c7384:
    // 0x4c7384: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x4c7384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c7388:
    // 0x4c7388: 0xc131326  jal         func_4C4C98
label_4c738c:
    if (ctx->pc == 0x4C738Cu) {
        ctx->pc = 0x4C738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7388u;
        // 0x4c738c: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7390u;
        goto label_4c7390;
    }
    ctx->pc = 0x4C7388u;
    SET_GPR_U32(ctx, 31, 0x4C7390u);
    ctx->pc = 0x4C738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7388u;
    // 0x4c738c: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4C98u, 0x4C7388u, 0x4C7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7390u;
label_4c7390:
    // 0x4c7390: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x4c7390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c7394:
    // 0x4c7394: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x4c7394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_4c7398:
    // 0x4c7398: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x4c7398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4c739c:
    // 0x4c739c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x4c739cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4c73a0:
    // 0x4c73a0: 0xafa00420  sw          $zero, 0x420($sp)
    ctx->pc = 0x4c73a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 0));
label_4c73a4:
    // 0x4c73a4: 0xc131326  jal         func_4C4C98
label_4c73a8:
    if (ctx->pc == 0x4C73A8u) {
        ctx->pc = 0x4C73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C73A4u;
        // 0x4c73a8: 0xafa00330  sw          $zero, 0x330($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C73ACu;
        goto label_4c73ac;
    }
    ctx->pc = 0x4C73A4u;
    SET_GPR_U32(ctx, 31, 0x4C73ACu);
    ctx->pc = 0x4C73A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C73A4u;
    // 0x4c73a8: 0xafa00330  sw          $zero, 0x330($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4C98u, 0x4C73A4u, 0x4C73ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C73ACu;
label_4c73ac:
    // 0x4c73ac: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x4c73acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c73b0:
    // 0x4c73b0: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x4c73b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_4c73b4:
    // 0x4c73b4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x4c73b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4c73b8:
    // 0x4c73b8: 0xc131326  jal         func_4C4C98
label_4c73bc:
    if (ctx->pc == 0x4C73BCu) {
        ctx->pc = 0x4C73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C73B8u;
        // 0x4c73bc: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C73C0u;
        goto label_4c73c0;
    }
    ctx->pc = 0x4C73B8u;
    SET_GPR_U32(ctx, 31, 0x4C73C0u);
    ctx->pc = 0x4C73BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C73B8u;
    // 0x4c73bc: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4C98u, 0x4C73B8u, 0x4C73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C73C0u;
label_4c73c0:
    // 0x4c73c0: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x4c73c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c73c4:
    // 0x4c73c4: 0x27a50114  addiu       $a1, $sp, 0x114
    ctx->pc = 0x4c73c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_4c73c8:
    // 0x4c73c8: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x4c73c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4c73cc:
    // 0x4c73cc: 0xc131326  jal         func_4C4C98
label_4c73d0:
    if (ctx->pc == 0x4C73D0u) {
        ctx->pc = 0x4C73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C73CCu;
        // 0x4c73d0: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C73D4u;
        goto label_4c73d4;
    }
    ctx->pc = 0x4C73CCu;
    SET_GPR_U32(ctx, 31, 0x4C73D4u);
    ctx->pc = 0x4C73D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C73CCu;
    // 0x4c73d0: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4C98u, 0x4C73CCu, 0x4C73D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C73D4u;
label_4c73d4:
    // 0x4c73d4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x4c73d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_4c73d8:
    // 0x4c73d8: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x4c73d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c73dc:
    // 0x4c73dc: 0x27a501a4  addiu       $a1, $sp, 0x1A4
    ctx->pc = 0x4c73dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_4c73e0:
    // 0x4c73e0: 0xc131326  jal         func_4C4C98
label_4c73e4:
    if (ctx->pc == 0x4C73E4u) {
        ctx->pc = 0x4C73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C73E0u;
        // 0x4c73e4: 0x27a70190  addiu       $a3, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C73E8u;
        goto label_4c73e8;
    }
    ctx->pc = 0x4C73E0u;
    SET_GPR_U32(ctx, 31, 0x4C73E8u);
    ctx->pc = 0x4C73E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C73E0u;
    // 0x4c73e4: 0x27a70190  addiu       $a3, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4C98u, 0x4C73E0u, 0x4C73E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C73E8u;
label_4c73e8:
    // 0x4c73e8: 0x8fa60414  lw          $a2, 0x414($sp)
    ctx->pc = 0x4c73e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1044)));
label_4c73ec:
    // 0x4c73ec: 0x10c0050f  beqz        $a2, . + 4 + (0x50F << 2)
label_4c73f0:
    if (ctx->pc == 0x4C73F0u) {
        ctx->pc = 0x4C73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C73ECu;
        // 0x4c73f0: 0x8fa204b8  lw          $v0, 0x4B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C73F4u;
        goto label_4c73f4;
    }
    ctx->pc = 0x4C73ECu;
    {
        const bool branch_taken_0x4c73ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C73ECu;
        // 0x4c73f0: 0x8fa204b8  lw          $v0, 0x4B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c73ec) {
            ctx->pc = 0x4C882Cu;
            goto label_4c882c;
        }
    }
    ctx->pc = 0x4C73F4u;
label_4c73f4:
    // 0x4c73f4: 0x0  nop
    ctx->pc = 0x4c73f4u;
    // NOP
label_4c73f8:
    // 0x4c73f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4c73f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4c73fc:
    // 0x4c73fc: 0xc131714  jal         func_4C5C50
label_4c7400:
    if (ctx->pc == 0x4C7400u) {
        ctx->pc = 0x4C7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C73FCu;
        // 0x4c7400: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7404u;
        goto label_4c7404;
    }
    ctx->pc = 0x4C73FCu;
    SET_GPR_U32(ctx, 31, 0x4C7404u);
    ctx->pc = 0x4C7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C73FCu;
    // 0x4c7400: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C5C50u, 0x4C73FCu, 0x4C7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7404u;
label_4c7404:
    // 0x4c7404: 0x8fa80410  lw          $t0, 0x410($sp)
    ctx->pc = 0x4c7404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
label_4c7408:
    // 0x4c7408: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4c7408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c740c:
    // 0x4c740c: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x4c740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c7410:
    // 0x4c7410: 0xc131714  jal         func_4C5C50
label_4c7414:
    if (ctx->pc == 0x4C7414u) {
        ctx->pc = 0x4C7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7410u;
        // 0x4c7414: 0xafa8041c  sw          $t0, 0x41C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1052), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7418u;
        goto label_4c7418;
    }
    ctx->pc = 0x4C7410u;
    SET_GPR_U32(ctx, 31, 0x4C7418u);
    ctx->pc = 0x4C7414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7410u;
    // 0x4c7414: 0xafa8041c  sw          $t0, 0x41C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1052), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C5C50u, 0x4C7410u, 0x4C7418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7418u;
label_4c7418:
    // 0x4c7418: 0x8fa2042c  lw          $v0, 0x42C($sp)
    ctx->pc = 0x4c7418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1068)));
label_4c741c:
    // 0x4c741c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4c741cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c7420:
    // 0x4c7420: 0x8fa30420  lw          $v1, 0x420($sp)
    ctx->pc = 0x4c7420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_4c7424:
    // 0x4c7424: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x4c7424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c7428:
    // 0x4c7428: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x4c7428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4c742c:
    // 0x4c742c: 0x8fa60434  lw          $a2, 0x434($sp)
    ctx->pc = 0x4c742cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1076)));
label_4c7430:
    // 0x4c7430: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4c7430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_4c7434:
    // 0x4c7434: 0x8fa80418  lw          $t0, 0x418($sp)
    ctx->pc = 0x4c7434u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1048)));
label_4c7438:
    // 0x4c7438: 0xafa2043c  sw          $v0, 0x43C($sp)
    ctx->pc = 0x4c7438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1084), GPR_U32(ctx, 2));
label_4c743c:
    // 0x4c743c: 0x100f809  jalr        $t0
label_4c7440:
    if (ctx->pc == 0x4C7440u) {
        ctx->pc = 0x4C7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C743Cu;
        // 0x4c7440: 0xafa30438  sw          $v1, 0x438($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7444u;
        goto label_4c7444;
    }
    ctx->pc = 0x4C743Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x4C7444u);
        ctx->pc = 0x4C7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C743Cu;
        // 0x4c7440: 0xafa30438  sw          $v1, 0x438($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C743Cu, 0x4C7444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C7444u;
label_4c7444:
    // 0x4c7444: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4c7444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4c7448:
    // 0x4c7448: 0xc1319d8  jal         func_4C6760
label_4c744c:
    if (ctx->pc == 0x4C744Cu) {
        ctx->pc = 0x4C744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7448u;
        // 0x4c744c: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7450u;
        goto label_4c7450;
    }
    ctx->pc = 0x4C7448u;
    SET_GPR_U32(ctx, 31, 0x4C7450u);
    ctx->pc = 0x4C744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7448u;
    // 0x4c744c: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C6760u, 0x4C7448u, 0x4C7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7450u;
label_4c7450:
    // 0x4c7450: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4c7450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4c7454:
    // 0x4c7454: 0xc131a56  jal         func_4C6958
label_4c7458:
    if (ctx->pc == 0x4C7458u) {
        ctx->pc = 0x4C7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7454u;
        // 0x4c7458: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C745Cu;
        goto label_4c745c;
    }
    ctx->pc = 0x4C7454u;
    SET_GPR_U32(ctx, 31, 0x4C745Cu);
    ctx->pc = 0x4C7458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7454u;
    // 0x4c7458: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C6958u, 0x4C7454u, 0x4C745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C745Cu;
label_4c745c:
    // 0x4c745c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4c745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4c7460:
    // 0x4c7460: 0xc131a56  jal         func_4C6958
label_4c7464:
    if (ctx->pc == 0x4C7464u) {
        ctx->pc = 0x4C7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7460u;
        // 0x4c7464: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7468u;
        goto label_4c7468;
    }
    ctx->pc = 0x4C7460u;
    SET_GPR_U32(ctx, 31, 0x4C7468u);
    ctx->pc = 0x4C7464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7460u;
    // 0x4c7464: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C6958u, 0x4C7460u, 0x4C7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7468u;
label_4c7468:
    // 0x4c7468: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4c7468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4c746c:
    // 0x4c746c: 0xc131b04  jal         func_4C6C10
label_4c7470:
    if (ctx->pc == 0x4C7470u) {
        ctx->pc = 0x4C7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C746Cu;
        // 0x4c7470: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7474u;
        goto label_4c7474;
    }
    ctx->pc = 0x4C746Cu;
    SET_GPR_U32(ctx, 31, 0x4C7474u);
    ctx->pc = 0x4C7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C746Cu;
    // 0x4c7470: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C6C10u, 0x4C746Cu, 0x4C7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7474u;
label_4c7474:
    // 0x4c7474: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4c7474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4c7478:
    // 0x4c7478: 0xc131b04  jal         func_4C6C10
label_4c747c:
    if (ctx->pc == 0x4C747Cu) {
        ctx->pc = 0x4C747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7478u;
        // 0x4c747c: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7480u;
        goto label_4c7480;
    }
    ctx->pc = 0x4C7478u;
    SET_GPR_U32(ctx, 31, 0x4C7480u);
    ctx->pc = 0x4C747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7478u;
    // 0x4c747c: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C6C10u, 0x4C7478u, 0x4C7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7480u;
label_4c7480:
    // 0x4c7480: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4c7480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4c7484:
    // 0x4c7484: 0xc13194a  jal         func_4C6528
label_4c7488:
    if (ctx->pc == 0x4C7488u) {
        ctx->pc = 0x4C7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7484u;
        // 0x4c7488: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C748Cu;
        goto label_4c748c;
    }
    ctx->pc = 0x4C7484u;
    SET_GPR_U32(ctx, 31, 0x4C748Cu);
    ctx->pc = 0x4C7488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7484u;
    // 0x4c7488: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C6528u, 0x4C7484u, 0x4C748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C748Cu;
label_4c748c:
    // 0x4c748c: 0x8fa2041c  lw          $v0, 0x41C($sp)
    ctx->pc = 0x4c748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1052)));
label_4c7490:
    // 0x4c7490: 0x104004d4  beqz        $v0, . + 4 + (0x4D4 << 2)
label_4c7494:
    if (ctx->pc == 0x4C7494u) {
        ctx->pc = 0x4C7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7490u;
        // 0x4c7494: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7498u;
        goto label_4c7498;
    }
    ctx->pc = 0x4C7490u;
    {
        const bool branch_taken_0x4c7490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7490u;
        // 0x4c7494: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7490) {
            ctx->pc = 0x4C87E4u;
            goto label_4c87e4;
        }
    }
    ctx->pc = 0x4C7498u;
label_4c7498:
    // 0x4c7498: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4c7498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4c749c:
    // 0x4c749c: 0x245e20d0  addiu       $fp, $v0, 0x20D0
    ctx->pc = 0x4c749cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 8400));
label_4c74a0:
    // 0x4c74a0: 0x24752090  addiu       $s5, $v1, 0x2090
    ctx->pc = 0x4c74a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8336));
label_4c74a4:
    // 0x4c74a4: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x4c74a4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c74a8:
    // 0x4c74a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4c74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4c74ac:
    // 0x4c74ac: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x4c74acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c74b0:
    // 0x4c74b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c74b4:
    // 0x4c74b4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x4c74b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_4c74b8:
    // 0x4c74b8: 0x1060022f  beqz        $v1, . + 4 + (0x22F << 2)
label_4c74bc:
    if (ctx->pc == 0x4C74BCu) {
        ctx->pc = 0x4C74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74B8u;
        // 0x4c74bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C74C0u;
        goto label_4c74c0;
    }
    ctx->pc = 0x4C74B8u;
    {
        const bool branch_taken_0x4c74b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74B8u;
        // 0x4c74bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c74b8) {
            ctx->pc = 0x4C7D78u;
            goto label_4c7d78;
        }
    }
    ctx->pc = 0x4C74C0u;
label_4c74c0:
    // 0x4c74c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c74c4:
    // 0x4c74c4: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
label_4c74c8:
    if (ctx->pc == 0x4C74C8u) {
        ctx->pc = 0x4C74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74C4u;
        // 0x4c74c8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C74CCu;
        goto label_4c74cc;
    }
    ctx->pc = 0x4C74C4u;
    {
        const bool branch_taken_0x4c74c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74C4u;
        // 0x4c74c8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c74c4) {
            ctx->pc = 0x4C7594u;
            goto label_4c7594;
        }
    }
    ctx->pc = 0x4C74CCu;
label_4c74cc:
    // 0x4c74cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c74d0:
    if (ctx->pc == 0x4C74D0u) {
        ctx->pc = 0x4C74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74CCu;
        // 0x4c74d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C74D4u;
        goto label_4c74d4;
    }
    ctx->pc = 0x4C74CCu;
    {
        const bool branch_taken_0x4c74cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74CCu;
        // 0x4c74d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c74cc) {
            ctx->pc = 0x4C74E4u;
            goto label_4c74e4;
        }
    }
    ctx->pc = 0x4C74D4u;
label_4c74d4:
    // 0x4c74d4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4c74d8:
    if (ctx->pc == 0x4C74D8u) {
        ctx->pc = 0x4C74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74D4u;
        // 0x4c74d8: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C74DCu;
        goto label_4c74dc;
    }
    ctx->pc = 0x4C74D4u;
    {
        const bool branch_taken_0x4c74d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74D4u;
        // 0x4c74d8: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c74d4) {
            ctx->pc = 0x4C74F4u;
            goto label_4c74f4;
        }
    }
    ctx->pc = 0x4C74DCu;
label_4c74dc:
    // 0x4c74dc: 0x100004b9  b           . + 4 + (0x4B9 << 2)
label_4c74e0:
    if (ctx->pc == 0x4C74E0u) {
        ctx->pc = 0x4C74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74DCu;
        // 0x4c74e0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C74E4u;
        goto label_4c74e4;
    }
    ctx->pc = 0x4C74DCu;
    {
        const bool branch_taken_0x4c74dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74DCu;
        // 0x4c74e0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c74dc) {
            ctx->pc = 0x4C87C4u;
            goto label_4c87c4;
        }
    }
    ctx->pc = 0x4C74E4u;
label_4c74e4:
    // 0x4c74e4: 0x108201ee  beq         $a0, $v0, . + 4 + (0x1EE << 2)
label_4c74e8:
    if (ctx->pc == 0x4C74E8u) {
        ctx->pc = 0x4C74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74E4u;
        // 0x4c74e8: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C74ECu;
        goto label_4c74ec;
    }
    ctx->pc = 0x4C74E4u;
    {
        const bool branch_taken_0x4c74e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74E4u;
        // 0x4c74e8: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c74e4) {
            ctx->pc = 0x4C7CA0u;
            goto label_4c7ca0;
        }
    }
    ctx->pc = 0x4C74ECu;
label_4c74ec:
    // 0x4c74ec: 0x100004b5  b           . + 4 + (0x4B5 << 2)
label_4c74f0:
    if (ctx->pc == 0x4C74F0u) {
        ctx->pc = 0x4C74F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74ECu;
        // 0x4c74f0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C74F4u;
        goto label_4c74f4;
    }
    ctx->pc = 0x4C74ECu;
    {
        const bool branch_taken_0x4c74ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C74F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74ECu;
        // 0x4c74f0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c74ec) {
            ctx->pc = 0x4C87C4u;
            goto label_4c87c4;
        }
    }
    ctx->pc = 0x4C74F4u;
label_4c74f4:
    // 0x4c74f4: 0xdee20000  ld          $v0, 0x0($s7)
    ctx->pc = 0x4c74f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 0)));
label_4c74f8:
    // 0x4c74f8: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x4c74f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_4c74fc:
    // 0x4c74fc: 0x2903021  addu        $a2, $s4, $s0
    ctx->pc = 0x4c74fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4c7500:
    // 0x4c7500: 0x704021  addu        $t0, $v1, $s0
    ctx->pc = 0x4c7500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c7504:
    // 0x4c7504: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x4c7504u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_4c7508:
    // 0x4c7508: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c7508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c750c:
    // 0x4c750c: 0x8fa20428  lw          $v0, 0x428($sp)
    ctx->pc = 0x4c750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c7510:
    // 0x4c7510: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x4c7510u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4c7514:
    // 0x4c7514: 0x8fa20430  lw          $v0, 0x430($sp)
    ctx->pc = 0x4c7514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_4c7518:
    // 0x4c7518: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x4c7518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_4c751c:
    // 0x4c751c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x4c751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c7520:
    // 0x4c7520: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x4c7520u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_4c7524:
    // 0x4c7524: 0x1101821  addu        $v1, $t0, $s0
    ctx->pc = 0x4c7524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_4c7528:
    // 0x4c7528: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x4c7528u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_4c752c:
    // 0x4c752c: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c752cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c7530:
    // 0x4c7530: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x4c7530u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
label_4c7534:
    // 0x4c7534: 0x704021  addu        $t0, $v1, $s0
    ctx->pc = 0x4c7534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c7538:
    // 0x4c7538: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x4c7538u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_4c753c:
    // 0x4c753c: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c753cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c7540:
    // 0x4c7540: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x4c7540u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_4c7544:
    // 0x4c7544: 0x1101821  addu        $v1, $t0, $s0
    ctx->pc = 0x4c7544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_4c7548:
    // 0x4c7548: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x4c7548u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_4c754c:
    // 0x4c754c: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c754cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c7550:
    // 0x4c7550: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x4c7550u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
label_4c7554:
    // 0x4c7554: 0x704021  addu        $t0, $v1, $s0
    ctx->pc = 0x4c7554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c7558:
    // 0x4c7558: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x4c7558u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_4c755c:
    // 0x4c755c: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c755cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c7560:
    // 0x4c7560: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x4c7560u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_4c7564:
    // 0x4c7564: 0x1101821  addu        $v1, $t0, $s0
    ctx->pc = 0x4c7564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_4c7568:
    // 0x4c7568: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x4c7568u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_4c756c:
    // 0x4c756c: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c756cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c7570:
    // 0x4c7570: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x4c7570u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
label_4c7574:
    // 0x4c7574: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x4c7574u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_4c7578:
    // 0x4c7578: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x4c7578u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_4c757c:
    // 0x4c757c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x4c757cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_4c7580:
    // 0x4c7580: 0x8fa30430  lw          $v1, 0x430($sp)
    ctx->pc = 0x4c7580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_4c7584:
    // 0x4c7584: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4c7584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c7588:
    // 0x4c7588: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x4c7588u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_4c758c:
    // 0x4c758c: 0x1000048b  b           . + 4 + (0x48B << 2)
label_4c7590:
    if (ctx->pc == 0x4C7590u) {
        ctx->pc = 0x4C7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C758Cu;
        // 0x4c7590: 0xafa30430  sw          $v1, 0x430($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7594u;
        goto label_4c7594;
    }
    ctx->pc = 0x4C758Cu;
    {
        const bool branch_taken_0x4c758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C758Cu;
        // 0x4c7590: 0xafa30430  sw          $v1, 0x430($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c758c) {
            ctx->pc = 0x4C87BCu;
            goto label_4c87bc;
        }
    }
    ctx->pc = 0x4C7594u;
label_4c7594:
    // 0x4c7594: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x4c7594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_4c7598:
    // 0x4c7598: 0x8fa60428  lw          $a2, 0x428($sp)
    ctx->pc = 0x4c7598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c759c:
    // 0x4c759c: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x4c759cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_4c75a0:
    // 0x4c75a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c75a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4c75a4:
    // 0x4c75a4: 0x144001af  bnez        $v0, . + 4 + (0x1AF << 2)
label_4c75a8:
    if (ctx->pc == 0x4C75A8u) {
        ctx->pc = 0x4C75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75A4u;
        // 0x4c75a8: 0x6c042  srl         $t8, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C75ACu;
        goto label_4c75ac;
    }
    ctx->pc = 0x4C75A4u;
    {
        const bool branch_taken_0x4c75a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75A4u;
        // 0x4c75a8: 0x6c042  srl         $t8, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c75a4) {
            ctx->pc = 0x4C7C64u;
            goto label_4c7c64;
        }
    }
    ctx->pc = 0x4C75ACu;
label_4c75ac:
    // 0x4c75ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4c75acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4c75b0:
    // 0x4c75b0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x4c75b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c75b4:
    // 0x4c75b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c75b8:
    // 0x4c75b8: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x4c75b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_4c75bc:
    // 0x4c75bc: 0x106000c5  beqz        $v1, . + 4 + (0xC5 << 2)
label_4c75c0:
    if (ctx->pc == 0x4C75C0u) {
        ctx->pc = 0x4C75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75BCu;
        // 0x4c75c0: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C75C4u;
        goto label_4c75c4;
    }
    ctx->pc = 0x4C75BCu;
    {
        const bool branch_taken_0x4c75bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75BCu;
        // 0x4c75c0: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c75bc) {
            ctx->pc = 0x4C78D4u;
            goto label_4c78d4;
        }
    }
    ctx->pc = 0x4C75C4u;
label_4c75c4:
    // 0x4c75c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c75c8:
    // 0x4c75c8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_4c75cc:
    if (ctx->pc == 0x4C75CCu) {
        ctx->pc = 0x4C75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75C8u;
        // 0x4c75cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C75D0u;
        goto label_4c75d0;
    }
    ctx->pc = 0x4C75C8u;
    {
        const bool branch_taken_0x4c75c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75C8u;
        // 0x4c75cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c75c8) {
            ctx->pc = 0x4C75E0u;
            goto label_4c75e0;
        }
    }
    ctx->pc = 0x4C75D0u;
label_4c75d0:
    // 0x4c75d0: 0x10820094  beq         $a0, $v0, . + 4 + (0x94 << 2)
label_4c75d4:
    if (ctx->pc == 0x4C75D4u) {
        ctx->pc = 0x4C75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75D0u;
        // 0x4c75d4: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C75D8u;
        goto label_4c75d8;
    }
    ctx->pc = 0x4C75D0u;
    {
        const bool branch_taken_0x4c75d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75D0u;
        // 0x4c75d4: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c75d0) {
            ctx->pc = 0x4C7824u;
            goto label_4c7824;
        }
    }
    ctx->pc = 0x4C75D8u;
label_4c75d8:
    // 0x4c75d8: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_4c75dc:
    if (ctx->pc == 0x4C75DCu) {
        ctx->pc = 0x4C75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75D8u;
        // 0x4c75dc: 0x2d81821  addu        $v1, $s6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C75E0u;
        goto label_4c75e0;
    }
    ctx->pc = 0x4C75D8u;
    {
        const bool branch_taken_0x4c75d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75D8u;
        // 0x4c75dc: 0x2d81821  addu        $v1, $s6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c75d8) {
            ctx->pc = 0x4C7C6Cu;
            goto label_4c7c6c;
        }
    }
    ctx->pc = 0x4C75E0u;
label_4c75e0:
    // 0x4c75e0: 0x8fa90408  lw          $t1, 0x408($sp)
    ctx->pc = 0x4c75e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_4c75e4:
    // 0x4c75e4: 0x8fad0404  lw          $t5, 0x404($sp)
    ctx->pc = 0x4c75e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_4c75e8:
    // 0x4c75e8: 0x2d220004  sltiu       $v0, $t1, 0x4
    ctx->pc = 0x4c75e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4c75ec:
    // 0x4c75ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4c75f0:
    if (ctx->pc == 0x4C75F0u) {
        ctx->pc = 0x4C75F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75ECu;
        // 0x4c75f0: 0x8faa0400  lw          $t2, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C75F4u;
        goto label_4c75f4;
    }
    ctx->pc = 0x4C75ECu;
    {
        const bool branch_taken_0x4c75ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C75F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75ECu;
        // 0x4c75f0: 0x8faa0400  lw          $t2, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c75ec) {
            ctx->pc = 0x4C7604u;
            goto label_4c7604;
        }
    }
    ctx->pc = 0x4C75F4u;
label_4c75f4:
    // 0x4c75f4: 0x3143000f  andi        $v1, $t2, 0xF
    ctx->pc = 0x4c75f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
label_4c75f8:
    // 0x4c75f8: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x4c75f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
label_4c75fc:
    // 0x4c75fc: 0x1000000a  b           . + 4 + (0xA << 2)
label_4c7600:
    if (ctx->pc == 0x4C7600u) {
        ctx->pc = 0x4C7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75FCu;
        // 0x4c7600: 0xa5102  srl         $t2, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7604u;
        goto label_4c7604;
    }
    ctx->pc = 0x4C75FCu;
    {
        const bool branch_taken_0x4c75fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C75FCu;
        // 0x4c7600: 0xa5102  srl         $t2, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c75fc) {
            ctx->pc = 0x4C7628u;
            goto label_4c7628;
        }
    }
    ctx->pc = 0x4C7604u;
label_4c7604:
    // 0x4c7604: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x4c7604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4c7608:
    // 0x4c7608: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c7608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c760c:
    // 0x4c760c: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x4c760cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_4c7610:
    // 0x4c7610: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x4c7610u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_4c7614:
    // 0x4c7614: 0x1241004  sllv        $v0, $a0, $t1
    ctx->pc = 0x4c7614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 9) & 0x1F));
label_4c7618:
    // 0x4c7618: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c7618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_4c761c:
    // 0x4c761c: 0x2529001c  addiu       $t1, $t1, 0x1C
    ctx->pc = 0x4c761cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
label_4c7620:
    // 0x4c7620: 0x645006  srlv        $t2, $a0, $v1
    ctx->pc = 0x4c7620u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_4c7624:
    // 0x4c7624: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x4c7624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c7628:
    // 0x4c7628: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4c7628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4c762c:
    // 0x4c762c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4c762cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4c7630:
    // 0x4c7630: 0x24423d80  addiu       $v0, $v0, 0x3D80
    ctx->pc = 0x4c7630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15744));
label_4c7634:
    // 0x4c7634: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4c7634u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7638:
    // 0x4c7638: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x4c7638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c763c:
    // 0x4c763c: 0x2907021  addu        $t6, $s4, $s0
    ctx->pc = 0x4c763cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4c7640:
    // 0x4c7640: 0x8fa20428  lw          $v0, 0x428($sp)
    ctx->pc = 0x4c7640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c7644:
    // 0x4c7644: 0x27ac03c0  addiu       $t4, $sp, 0x3C0
    ctx->pc = 0x4c7644u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_4c7648:
    // 0x4c7648: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x4c7648u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c764c:
    // 0x4c764c: 0x2c042  srl         $t8, $v0, 1
    ctx->pc = 0x4c764cu;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4c7650:
    // 0x4c7650: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
label_4c7654:
    if (ctx->pc == 0x4C7654u) {
        ctx->pc = 0x4C7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7650u;
        // 0x4c7654: 0x31430001  andi        $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7658u;
        goto label_4c7658;
    }
    ctx->pc = 0x4C7650u;
    {
        const bool branch_taken_0x4c7650 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7650u;
        // 0x4c7654: 0x31430001  andi        $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7650) {
            ctx->pc = 0x4C766Cu;
            goto label_4c766c;
        }
    }
    ctx->pc = 0x4C7658u;
label_4c7658:
    // 0x4c7658: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c7658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_4c765c:
    // 0x4c765c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_4c7660:
    if (ctx->pc == 0x4C7660u) {
        ctx->pc = 0x4C7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C765Cu;
        // 0x4c7660: 0xa5042  srl         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7664u;
        goto label_4c7664;
    }
    ctx->pc = 0x4C765Cu;
    {
        const bool branch_taken_0x4c765c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C765Cu;
        // 0x4c7660: 0xa5042  srl         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c765c) {
            ctx->pc = 0x4C7684u;
            goto label_4c7684;
        }
    }
    ctx->pc = 0x4C7664u;
label_4c7664:
    // 0x4c7664: 0x1000001e  b           . + 4 + (0x1E << 2)
label_4c7668:
    if (ctx->pc == 0x4C7668u) {
        ctx->pc = 0x4C7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7664u;
        // 0x4c7668: 0x8fa20180  lw          $v0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C766Cu;
        goto label_4c766c;
    }
    ctx->pc = 0x4C7664u;
    {
        const bool branch_taken_0x4c7664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7664u;
        // 0x4c7668: 0x8fa20180  lw          $v0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7664) {
            ctx->pc = 0x4C76E0u;
            goto label_4c76e0;
        }
    }
    ctx->pc = 0x4C766Cu;
label_4c766c:
    // 0x4c766c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4c766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4c7670:
    // 0x4c7670: 0x2409001f  addiu       $t1, $zero, 0x1F
    ctx->pc = 0x4c7670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_4c7674:
    // 0x4c7674: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x4c7674u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_4c7678:
    // 0x4c7678: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c7678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4c767c:
    // 0x4c767c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4c7680:
    if (ctx->pc == 0x4C7680u) {
        ctx->pc = 0x4C7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C767Cu;
        // 0x4c7680: 0x35042  srl         $t2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7684u;
        goto label_4c7684;
    }
    ctx->pc = 0x4C767Cu;
    {
        const bool branch_taken_0x4c767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C767Cu;
        // 0x4c7680: 0x35042  srl         $t2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c767c) {
            ctx->pc = 0x4C76DCu;
            goto label_4c76dc;
        }
    }
    ctx->pc = 0x4C7684u;
label_4c7684:
    // 0x4c7684: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4c7684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7688:
    // 0x4c7688: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x4c7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4c768c:
    // 0x4c768c: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x4c768cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c7690:
    // 0x4c7690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c7690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c7694:
    // 0x4c7694: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x4c7694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_4c7698:
    // 0x4c7698: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x4c7698u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c769c:
    // 0x4c769c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c76a0:
    // 0x4c76a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c76a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c76a4:
    // 0x4c76a4: 0x10af0021  beq         $a1, $t7, . + 4 + (0x21 << 2)
label_4c76a8:
    if (ctx->pc == 0x4C76A8u) {
        ctx->pc = 0x4C76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76A4u;
        // 0x4c76a8: 0xafa30180  sw          $v1, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C76ACu;
        goto label_4c76ac;
    }
    ctx->pc = 0x4C76A4u;
    {
        const bool branch_taken_0x4c76a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        ctx->pc = 0x4C76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76A4u;
        // 0x4c76a8: 0xafa30180  sw          $v1, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c76a4) {
            ctx->pc = 0x4C772Cu;
            goto label_4c772c;
        }
    }
    ctx->pc = 0x4C76ACu;
label_4c76ac:
    // 0x4c76ac: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x4c76acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_4c76b0:
    // 0x4c76b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4c76b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c76b4:
    // 0x4c76b4: 0x0  nop
    ctx->pc = 0x4c76b4u;
    // NOP
label_4c76b8:
    // 0x4c76b8: 0x10b1821  addu        $v1, $t0, $t3
    ctx->pc = 0x4c76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_4c76bc:
    // 0x4c76bc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4c76bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4c76c0:
    // 0x4c76c0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4c76c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c76c4:
    // 0x4c76c4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c76c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4c76c8:
    // 0x4c76c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4c76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4c76cc:
    // 0x4c76cc: 0x14a6fffa  bne         $a1, $a2, . + 4 + (-0x6 << 2)
label_4c76d0:
    if (ctx->pc == 0x4C76D0u) {
        ctx->pc = 0x4C76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76CCu;
        // 0x4c76d0: 0xa0470000  sb          $a3, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C76D4u;
        goto label_4c76d4;
    }
    ctx->pc = 0x4C76CCu;
    {
        const bool branch_taken_0x4c76cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x4C76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76CCu;
        // 0x4c76d0: 0xa0470000  sb          $a3, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c76cc) {
            ctx->pc = 0x4C76B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c76b8;
        }
    }
    ctx->pc = 0x4C76D4u;
label_4c76d4:
    // 0x4c76d4: 0x10000016  b           . + 4 + (0x16 << 2)
label_4c76d8:
    if (ctx->pc == 0x4C76D8u) {
        ctx->pc = 0x4C76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76D4u;
        // 0x4c76d8: 0x2962003f  slti        $v0, $t3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C76DCu;
        goto label_4c76dc;
    }
    ctx->pc = 0x4C76D4u;
    {
        const bool branch_taken_0x4c76d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76D4u;
        // 0x4c76d8: 0x2962003f  slti        $v0, $t3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c76d4) {
            ctx->pc = 0x4C7730u;
            goto label_4c7730;
        }
    }
    ctx->pc = 0x4C76DCu;
label_4c76dc:
    // 0x4c76dc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x4c76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4c76e0:
    // 0x4c76e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4c76e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c76e4:
    // 0x4c76e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c76e8:
    // 0x4c76e8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4c76e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c76ec:
    // 0x4c76ec: 0x10af000f  beq         $a1, $t7, . + 4 + (0xF << 2)
label_4c76f0:
    if (ctx->pc == 0x4C76F0u) {
        ctx->pc = 0x4C76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76ECu;
        // 0x4c76f0: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C76F4u;
        goto label_4c76f4;
    }
    ctx->pc = 0x4C76ECu;
    {
        const bool branch_taken_0x4c76ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        ctx->pc = 0x4C76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76ECu;
        // 0x4c76f0: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c76ec) {
            ctx->pc = 0x4C772Cu;
            goto label_4c772c;
        }
    }
    ctx->pc = 0x4C76F4u;
label_4c76f4:
    // 0x4c76f4: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x4c76f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_4c76f8:
    // 0x4c76f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4c76f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c76fc:
    // 0x4c76fc: 0x0  nop
    ctx->pc = 0x4c76fcu;
    // NOP
label_4c7700:
    // 0x4c7700: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4c7700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7704:
    // 0x4c7704: 0x10b1021  addu        $v0, $t0, $t3
    ctx->pc = 0x4c7704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_4c7708:
    // 0x4c7708: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4c7708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c770c:
    // 0x4c770c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c770cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4c7710:
    // 0x4c7710: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4c7710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c7714:
    // 0x4c7714: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4c7714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4c7718:
    // 0x4c7718: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4c7718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4c771c:
    // 0x4c771c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c7720:
    // 0x4c7720: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4c7720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_4c7724:
    // 0x4c7724: 0x14a7fff6  bne         $a1, $a3, . + 4 + (-0xA << 2)
label_4c7728:
    if (ctx->pc == 0x4C7728u) {
        ctx->pc = 0x4C7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7724u;
        // 0x4c7728: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C772Cu;
        goto label_4c772c;
    }
    ctx->pc = 0x4C7724u;
    {
        const bool branch_taken_0x4c7724 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x4C7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7724u;
        // 0x4c7728: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7724) {
            ctx->pc = 0x4C7700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7700;
        }
    }
    ctx->pc = 0x4C772Cu;
label_4c772c:
    // 0x4c772c: 0x2962003f  slti        $v0, $t3, 0x3F
    ctx->pc = 0x4c772cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)63) ? 1 : 0);
label_4c7730:
    // 0x4c7730: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
label_4c7734:
    if (ctx->pc == 0x4C7734u) {
        ctx->pc = 0x4C7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7730u;
        // 0x4c7734: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7738u;
        goto label_4c7738;
    }
    ctx->pc = 0x4C7730u;
    {
        const bool branch_taken_0x4c7730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7730u;
        // 0x4c7734: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7730) {
            ctx->pc = 0x4C7650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7650;
        }
    }
    ctx->pc = 0x4C7738u;
label_4c7738:
    // 0x4c7738: 0x15620008  bne         $t3, $v0, . + 4 + (0x8 << 2)
label_4c773c:
    if (ctx->pc == 0x4C773Cu) {
        ctx->pc = 0x4C773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7738u;
        // 0x4c773c: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7740u;
        goto label_4c7740;
    }
    ctx->pc = 0x4C7738u;
    {
        const bool branch_taken_0x4c7738 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7738u;
        // 0x4c773c: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7738) {
            ctx->pc = 0x4C775Cu;
            goto label_4c775c;
        }
    }
    ctx->pc = 0x4C7740u;
label_4c7740:
    // 0x4c7740: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4c7740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7744:
    // 0x4c7744: 0x9103003f  lbu         $v1, 0x3F($t0)
    ctx->pc = 0x4c7744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 63)));
label_4c7748:
    // 0x4c7748: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4c7748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c774c:
    // 0x4c774c: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x4c774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_4c7750:
    // 0x4c7750: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c7750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c7754:
    // 0x4c7754: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x4c7754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_4c7758:
    // 0x4c7758: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x4c7758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_4c775c:
    // 0x4c775c: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x4c775cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_4c7760:
    // 0x4c7760: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4c7760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c7764:
    // 0x4c7764: 0x3c0cff00  lui         $t4, 0xFF00
    ctx->pc = 0x4c7764u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65280 << 16));
label_4c7768:
    // 0x4c7768: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x4c7768u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4c776c:
    // 0x4c776c: 0x0  nop
    ctx->pc = 0x4c776cu;
    // NOP
label_4c7770:
    // 0x4c7770: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4c7770u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4c7774:
    // 0x4c7774: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x4c7774u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_4c7778:
    // 0x4c7778: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x4c7778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4c777c:
    // 0x4c777c: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x4c777cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_4c7780:
    // 0x4c7780: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x4c7780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_4c7784:
    // 0x4c7784: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x4c7784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
label_4c7788:
    // 0x4c7788: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c778c:
    // 0x4c778c: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x4c778cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c7790:
    // 0x4c7790: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4c7790u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_4c7794:
    // 0x4c7794: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4c7794u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_4c7798:
    // 0x4c7798: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x4c7798u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_4c779c:
    // 0x4c779c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x4c779cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4c77a0:
    // 0x4c77a0: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x4c77a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_4c77a4:
    // 0x4c77a4: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x4c77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_4c77a8:
    // 0x4c77a8: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x4c77a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
label_4c77ac:
    // 0x4c77ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c77acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c77b0:
    // 0x4c77b0: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x4c77b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c77b4:
    // 0x4c77b4: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x4c77b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
label_4c77b8:
    // 0x4c77b8: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x4c77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_4c77bc:
    // 0x4c77bc: 0x94c50004  lhu         $a1, 0x4($a2)
    ctx->pc = 0x4c77bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_4c77c0:
    // 0x4c77c0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x4c77c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4c77c4:
    // 0x4c77c4: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x4c77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_4c77c8:
    // 0x4c77c8: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x4c77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_4c77cc:
    // 0x4c77cc: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x4c77ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
label_4c77d0:
    // 0x4c77d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c77d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c77d4:
    // 0x4c77d4: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x4c77d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c77d8:
    // 0x4c77d8: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x4c77d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
label_4c77dc:
    // 0x4c77dc: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x4c77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
label_4c77e0:
    // 0x4c77e0: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x4c77e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_4c77e4:
    // 0x4c77e4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x4c77e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_4c77e8:
    // 0x4c77e8: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x4c77e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_4c77ec:
    // 0x4c77ec: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x4c77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_4c77f0:
    // 0x4c77f0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x4c77f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4c77f4:
    // 0x4c77f4: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x4c77f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
label_4c77f8:
    // 0x4c77f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c77f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c77fc:
    // 0x4c77fc: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x4c77fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c7800:
    // 0x4c7800: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x4c7800u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
label_4c7804:
    // 0x4c7804: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x4c7804u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
label_4c7808:
    // 0x4c7808: 0xf04021  addu        $t0, $a3, $s0
    ctx->pc = 0x4c7808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c780c:
    // 0x4c780c: 0x561ffd8  bgez        $t3, . + 4 + (-0x28 << 2)
label_4c7810:
    if (ctx->pc == 0x4C7810u) {
        ctx->pc = 0x4C7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C780Cu;
        // 0x4c7810: 0x1103821  addu        $a3, $t0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7814u;
        goto label_4c7814;
    }
    ctx->pc = 0x4C780Cu;
    {
        const bool branch_taken_0x4c780c = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x4C7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C780Cu;
        // 0x4c7810: 0x1103821  addu        $a3, $t0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c780c) {
            ctx->pc = 0x4C7770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7770;
        }
    }
    ctx->pc = 0x4C7814u;
label_4c7814:
    // 0x4c7814: 0xafad0404  sw          $t5, 0x404($sp)
    ctx->pc = 0x4c7814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 13));
label_4c7818:
    // 0x4c7818: 0xafaa0400  sw          $t2, 0x400($sp)
    ctx->pc = 0x4c7818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 10));
label_4c781c:
    // 0x4c781c: 0x10000111  b           . + 4 + (0x111 << 2)
label_4c7820:
    if (ctx->pc == 0x4C7820u) {
        ctx->pc = 0x4C7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C781Cu;
        // 0x4c7820: 0xafa90408  sw          $t1, 0x408($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7824u;
        goto label_4c7824;
    }
    ctx->pc = 0x4C781Cu;
    {
        const bool branch_taken_0x4c781c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C781Cu;
        // 0x4c7820: 0xafa90408  sw          $t1, 0x408($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c781c) {
            ctx->pc = 0x4C7C64u;
            goto label_4c7c64;
        }
    }
    ctx->pc = 0x4C7824u;
label_4c7824:
    // 0x4c7824: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x4c7824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4c7828:
    // 0x4c7828: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x4c7828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_4c782c:
    // 0x4c782c: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x4c782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c7830:
    // 0x4c7830: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c7830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4c7834:
    // 0x4c7834: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c7834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4c7838:
    // 0x4c7838: 0x7fb90440  sq          $t9, 0x440($sp)
    ctx->pc = 0x4c7838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 25));
label_4c783c:
    // 0x4c783c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x4c783cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_4c7840:
    // 0x4c7840: 0xc134490  jal         func_4D1240
label_4c7844:
    if (ctx->pc == 0x4C7844u) {
        ctx->pc = 0x4C7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7840u;
        // 0x4c7844: 0xa7a30340  sh          $v1, 0x340($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 832), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7848u;
        goto label_4c7848;
    }
    ctx->pc = 0x4C7840u;
    SET_GPR_U32(ctx, 31, 0x4C7848u);
    ctx->pc = 0x4C7844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7840u;
    // 0x4c7844: 0xa7a30340  sh          $v1, 0x340($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 832), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1240u, 0x4C7840u, 0x4C7848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7848u;
label_4c7848:
    // 0x4c7848: 0x8fa80408  lw          $t0, 0x408($sp)
    ctx->pc = 0x4c7848u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_4c784c:
    // 0x4c784c: 0x27a90340  addiu       $t1, $sp, 0x340
    ctx->pc = 0x4c784cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_4c7850:
    // 0x4c7850: 0x2d020004  sltiu       $v0, $t0, 0x4
    ctx->pc = 0x4c7850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4c7854:
    // 0x4c7854: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4c7858:
    if (ctx->pc == 0x4C7858u) {
        ctx->pc = 0x4C7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7854u;
        // 0x4c7858: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C785Cu;
        goto label_4c785c;
    }
    ctx->pc = 0x4C7854u;
    {
        const bool branch_taken_0x4c7854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7854u;
        // 0x4c7858: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7854) {
            ctx->pc = 0x4C7878u;
            goto label_4c7878;
        }
    }
    ctx->pc = 0x4C785Cu;
label_4c785c:
    // 0x4c785c: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x4c785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_4c7860:
    // 0x4c7860: 0x2503fffc  addiu       $v1, $t0, -0x4
    ctx->pc = 0x4c7860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
label_4c7864:
    // 0x4c7864: 0xafa30408  sw          $v1, 0x408($sp)
    ctx->pc = 0x4c7864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 3));
label_4c7868:
    // 0x4c7868: 0x22102  srl         $a0, $v0, 4
    ctx->pc = 0x4c7868u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c786c:
    // 0x4c786c: 0x3047000f  andi        $a3, $v0, 0xF
    ctx->pc = 0x4c786cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c7870:
    // 0x4c7870: 0x1000000f  b           . + 4 + (0xF << 2)
label_4c7874:
    if (ctx->pc == 0x4C7874u) {
        ctx->pc = 0x4C7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7870u;
        // 0x4c7874: 0xafa40400  sw          $a0, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7878u;
        goto label_4c7878;
    }
    ctx->pc = 0x4C7870u;
    {
        const bool branch_taken_0x4c7870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7870u;
        // 0x4c7874: 0xafa40400  sw          $a0, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7870) {
            ctx->pc = 0x4C78B0u;
            goto label_4c78b0;
        }
    }
    ctx->pc = 0x4C7878u;
label_4c7878:
    // 0x4c7878: 0x8fa50404  lw          $a1, 0x404($sp)
    ctx->pc = 0x4c7878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_4c787c:
    // 0x4c787c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c787cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c7880:
    // 0x4c7880: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c7880u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4c7884:
    // 0x4c7884: 0x8fa60400  lw          $a2, 0x400($sp)
    ctx->pc = 0x4c7884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_4c7888:
    // 0x4c7888: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c7888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c788c:
    // 0x4c788c: 0x2504001c  addiu       $a0, $t0, 0x1C
    ctx->pc = 0x4c788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_4c7890:
    // 0x4c7890: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4c7890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4c7894:
    // 0x4c7894: 0xafa40408  sw          $a0, 0x408($sp)
    ctx->pc = 0x4c7894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 4));
label_4c7898:
    // 0x4c7898: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x4c7898u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_4c789c:
    // 0x4c789c: 0xafa50404  sw          $a1, 0x404($sp)
    ctx->pc = 0x4c789cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 5));
label_4c78a0:
    // 0x4c78a0: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_4c78a4:
    // 0x4c78a4: 0xafa30400  sw          $v1, 0x400($sp)
    ctx->pc = 0x4c78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 3));
label_4c78a8:
    // 0x4c78a8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4c78a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_4c78ac:
    // 0x4c78ac: 0x30c7000f  andi        $a3, $a2, 0xF
    ctx->pc = 0x4c78acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_4c78b0:
    // 0x4c78b0: 0x7fb90440  sq          $t9, 0x440($sp)
    ctx->pc = 0x4c78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 25));
label_4c78b4:
    // 0x4c78b4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4c78b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4c78b8:
    // 0x4c78b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c78b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c78bc:
    // 0x4c78bc: 0xc134d08  jal         func_4D3420
label_4c78c0:
    if (ctx->pc == 0x4C78C0u) {
        ctx->pc = 0x4C78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78BCu;
        // 0x4c78c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C78C4u;
        goto label_4c78c4;
    }
    ctx->pc = 0x4C78BCu;
    SET_GPR_U32(ctx, 31, 0x4C78C4u);
    ctx->pc = 0x4C78C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C78BCu;
    // 0x4c78c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D3420u, 0x4C78BCu, 0x4C78C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C78C4u;
label_4c78c4:
    // 0x4c78c4: 0x8fa30428  lw          $v1, 0x428($sp)
    ctx->pc = 0x4c78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c78c8:
    // 0x4c78c8: 0x7bb90440  lq          $t9, 0x440($sp)
    ctx->pc = 0x4c78c8u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_4c78cc:
    // 0x4c78cc: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_4c78d0:
    if (ctx->pc == 0x4C78D0u) {
        ctx->pc = 0x4C78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78CCu;
        // 0x4c78d0: 0x3c042  srl         $t8, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C78D4u;
        goto label_4c78d4;
    }
    ctx->pc = 0x4C78CCu;
    {
        const bool branch_taken_0x4c78cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78CCu;
        // 0x4c78d0: 0x3c042  srl         $t8, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c78cc) {
            ctx->pc = 0x4C7C64u;
            goto label_4c7c64;
        }
    }
    ctx->pc = 0x4C78D4u;
label_4c78d4:
    // 0x4c78d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4c78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c78d8:
    // 0x4c78d8: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
label_4c78dc:
    if (ctx->pc == 0x4C78DCu) {
        ctx->pc = 0x4C78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78D8u;
        // 0x4c78dc: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C78E0u;
        goto label_4c78e0;
    }
    ctx->pc = 0x4C78D8u;
    {
        const bool branch_taken_0x4c78d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78D8u;
        // 0x4c78dc: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c78d8) {
            ctx->pc = 0x4C7990u;
            goto label_4c7990;
        }
    }
    ctx->pc = 0x4C78E0u;
label_4c78e0:
    // 0x4c78e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c78e4:
    if (ctx->pc == 0x4C78E4u) {
        ctx->pc = 0x4C78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78E0u;
        // 0x4c78e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C78E8u;
        goto label_4c78e8;
    }
    ctx->pc = 0x4C78E0u;
    {
        const bool branch_taken_0x4c78e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78E0u;
        // 0x4c78e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c78e0) {
            ctx->pc = 0x4C78F8u;
            goto label_4c78f8;
        }
    }
    ctx->pc = 0x4C78E8u;
label_4c78e8:
    // 0x4c78e8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_4c78ec:
    if (ctx->pc == 0x4C78ECu) {
        ctx->pc = 0x4C78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78E8u;
        // 0x4c78ec: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C78F0u;
        goto label_4c78f0;
    }
    ctx->pc = 0x4C78E8u;
    {
        const bool branch_taken_0x4c78e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78E8u;
        // 0x4c78ec: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c78e8) {
            ctx->pc = 0x4C790Cu;
            goto label_4c790c;
        }
    }
    ctx->pc = 0x4C78F0u;
label_4c78f0:
    // 0x4c78f0: 0x100000de  b           . + 4 + (0xDE << 2)
label_4c78f4:
    if (ctx->pc == 0x4C78F4u) {
        ctx->pc = 0x4C78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78F0u;
        // 0x4c78f4: 0x2d81821  addu        $v1, $s6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C78F8u;
        goto label_4c78f8;
    }
    ctx->pc = 0x4C78F0u;
    {
        const bool branch_taken_0x4c78f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78F0u;
        // 0x4c78f4: 0x2d81821  addu        $v1, $s6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c78f0) {
            ctx->pc = 0x4C7C6Cu;
            goto label_4c7c6c;
        }
    }
    ctx->pc = 0x4C78F8u;
label_4c78f8:
    // 0x4c78f8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4c78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4c78fc:
    // 0x4c78fc: 0x10820070  beq         $a0, $v0, . + 4 + (0x70 << 2)
label_4c7900:
    if (ctx->pc == 0x4C7900u) {
        ctx->pc = 0x4C7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78FCu;
        // 0x4c7900: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7904u;
        goto label_4c7904;
    }
    ctx->pc = 0x4C78FCu;
    {
        const bool branch_taken_0x4c78fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C78FCu;
        // 0x4c7900: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c78fc) {
            ctx->pc = 0x4C7AC0u;
            goto label_4c7ac0;
        }
    }
    ctx->pc = 0x4C7904u;
label_4c7904:
    // 0x4c7904: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_4c7908:
    if (ctx->pc == 0x4C7908u) {
        ctx->pc = 0x4C7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7904u;
        // 0x4c7908: 0x2d81821  addu        $v1, $s6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C790Cu;
        goto label_4c790c;
    }
    ctx->pc = 0x4C7904u;
    {
        const bool branch_taken_0x4c7904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7904u;
        // 0x4c7908: 0x2d81821  addu        $v1, $s6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7904) {
            ctx->pc = 0x4C7C6Cu;
            goto label_4c7c6c;
        }
    }
    ctx->pc = 0x4C790Cu;
label_4c790c:
    // 0x4c790c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4c790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7910:
    // 0x4c7910: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x4c7910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4c7914:
    // 0x4c7914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c7914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7918:
    // 0x4c7918: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4c7918u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c791c:
    // 0x4c791c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c7920:
    // 0x4c7920: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x4c7920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_4c7924:
    // 0x4c7924: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x4c7924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_4c7928:
    // 0x4c7928: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4c7928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4c792c:
    // 0x4c792c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4c792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4c7930:
    // 0x4c7930: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4c7930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4c7934:
    // 0x4c7934: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4c7934u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_4c7938:
    // 0x4c7938: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x4c7938u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
label_4c793c:
    // 0x4c793c: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x4c793cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_4c7940:
    // 0x4c7940: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x4c7940u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
label_4c7944:
    // 0x4c7944: 0x0  nop
    ctx->pc = 0x4c7944u;
    // NOP
label_4c7948:
    // 0x4c7948: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x4c7948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_4c794c:
    // 0x4c794c: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x4c794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_4c7950:
    // 0x4c7950: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c7950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4c7954:
    // 0x4c7954: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4c7954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4c7958:
    // 0x4c7958: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x4c7958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_4c795c:
    // 0x4c795c: 0x2cc30007  sltiu       $v1, $a2, 0x7
    ctx->pc = 0x4c795cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_4c7960:
    // 0x4c7960: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x4c7960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_4c7964:
    // 0x4c7964: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x4c7964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_4c7968:
    // 0x4c7968: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x4c7968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c796c:
    // 0x4c796c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4c796cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4c7970:
    // 0x4c7970: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4c7970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4c7974:
    // 0x4c7974: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_4c7978:
    if (ctx->pc == 0x4C7978u) {
        ctx->pc = 0x4C7978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7974u;
        // 0x4c7978: 0xac440008  sw          $a0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C797Cu;
        goto label_4c797c;
    }
    ctx->pc = 0x4C7974u;
    {
        const bool branch_taken_0x4c7974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7974u;
        // 0x4c7978: 0xac440008  sw          $a0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7974) {
            ctx->pc = 0x4C7948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7948;
        }
    }
    ctx->pc = 0x4C797Cu;
label_4c797c:
    // 0x4c797c: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x4c797cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_4c7980:
    // 0x4c7980: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c7980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4c7984:
    // 0x4c7984: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x4c7984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_4c7988:
    // 0x4c7988: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_4c798c:
    if (ctx->pc == 0x4C798Cu) {
        ctx->pc = 0x4C798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7988u;
        // 0x4c798c: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7990u;
        goto label_4c7990;
    }
    ctx->pc = 0x4C7988u;
    {
        const bool branch_taken_0x4c7988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7988u;
        // 0x4c798c: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7988) {
            ctx->pc = 0x4C7C64u;
            goto label_4c7c64;
        }
    }
    ctx->pc = 0x4C7990u;
label_4c7990:
    // 0x4c7990: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x4c7990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7994:
    // 0x4c7994: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4c7994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4c7998:
    // 0x4c7998: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4c7998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_4c799c:
    // 0x4c799c: 0x24522120  addiu       $s2, $v0, 0x2120
    ctx->pc = 0x4c799cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8480));
label_4c79a0:
    // 0x4c79a0: 0x906d0000  lbu         $t5, 0x0($v1)
    ctx->pc = 0x4c79a0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c79a4:
    // 0x4c79a4: 0x24912110  addiu       $s1, $a0, 0x2110
    ctx->pc = 0x4c79a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8464));
label_4c79a8:
    // 0x4c79a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c79ac:
    // 0x4c79ac: 0x280782d  daddu       $t7, $s4, $zero
    ctx->pc = 0x4c79acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c79b0:
    // 0x4c79b0: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x4c79b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_4c79b4:
    // 0x4c79b4: 0xd1200  sll         $v0, $t5, 8
    ctx->pc = 0x4c79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
label_4c79b8:
    // 0x4c79b8: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x4c79b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
label_4c79bc:
    // 0x4c79bc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4c79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c79c0:
    // 0x4c79c0: 0x906c0000  lbu         $t4, 0x0($v1)
    ctx->pc = 0x4c79c0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c79c4:
    // 0x4c79c4: 0xd1400  sll         $v0, $t5, 16
    ctx->pc = 0x4c79c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
label_4c79c8:
    // 0x4c79c8: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x4c79c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
label_4c79cc:
    // 0x4c79cc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x4c79ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_4c79d0:
    // 0x4c79d0: 0xc1a00  sll         $v1, $t4, 8
    ctx->pc = 0x4c79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_4c79d4:
    // 0x4c79d4: 0x2907021  addu        $t6, $s4, $s0
    ctx->pc = 0x4c79d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4c79d8:
    // 0x4c79d8: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x4c79d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
label_4c79dc:
    // 0x4c79dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c79dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c79e0:
    // 0x4c79e0: 0xc1400  sll         $v0, $t4, 16
    ctx->pc = 0x4c79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_4c79e4:
    // 0x4c79e4: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x4c79e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_4c79e8:
    // 0x4c79e8: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x4c79e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4c79ec:
    // 0x4c79ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4c79ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4c79f0:
    // 0x4c79f0: 0x2e6a0008  sltiu       $t2, $s3, 0x8
    ctx->pc = 0x4c79f0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4c79f4:
    // 0x4c79f4: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x4c79f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4c79f8:
    // 0x4c79f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4c79f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4c79fc:
    // 0x4c79fc: 0x30c20003  andi        $v0, $a2, 0x3
    ctx->pc = 0x4c79fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_4c7a00:
    // 0x4c7a00: 0x30c4000c  andi        $a0, $a2, 0xC
    ctx->pc = 0x4c7a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
label_4c7a04:
    // 0x4c7a04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c7a08:
    // 0x4c7a08: 0x914821  addu        $t1, $a0, $s1
    ctx->pc = 0x4c7a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_4c7a0c:
    // 0x4c7a0c: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x4c7a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4c7a10:
    // 0x4c7a10: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x4c7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4c7a14:
    // 0x4c7a14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4c7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4c7a18:
    // 0x4c7a18: 0x62882  srl         $a1, $a2, 2
    ctx->pc = 0x4c7a18u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_4c7a1c:
    // 0x4c7a1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c7a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c7a20:
    // 0x4c7a20: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x4c7a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
label_4c7a24:
    // 0x4c7a24: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4c7a28:
    // 0x4c7a28: 0x63182  srl         $a2, $a2, 6
    ctx->pc = 0x4c7a28u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
label_4c7a2c:
    // 0x4c7a2c: 0x1a31824  and         $v1, $t5, $v1
    ctx->pc = 0x4c7a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
label_4c7a30:
    // 0x4c7a30: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x4c7a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c7a34:
    // 0x4c7a34: 0x1821024  and         $v0, $t4, $v0
    ctx->pc = 0x4c7a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
label_4c7a38:
    // 0x4c7a38: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x4c7a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
label_4c7a3c:
    // 0x4c7a3c: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x4c7a3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c7a40:
    // 0x4c7a40: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4c7a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4c7a44:
    // 0x4c7a44: 0xadeb0000  sw          $t3, 0x0($t7)
    ctx->pc = 0x4c7a44u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 11));
label_4c7a48:
    // 0x4c7a48: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x4c7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_4c7a4c:
    // 0x4c7a4c: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x4c7a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
label_4c7a50:
    // 0x4c7a50: 0x1842024  and         $a0, $t4, $a0
    ctx->pc = 0x4c7a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & GPR_U64(ctx, 4));
label_4c7a54:
    // 0x4c7a54: 0x1a73824  and         $a3, $t5, $a3
    ctx->pc = 0x4c7a54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) & GPR_U64(ctx, 7));
label_4c7a58:
    // 0x4c7a58: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x4c7a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_4c7a5c:
    // 0x4c7a5c: 0xe45825  or          $t3, $a3, $a0
    ctx->pc = 0x4c7a5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_4c7a60:
    // 0x4c7a60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c7a64:
    // 0x4c7a64: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x4c7a64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c7a68:
    // 0x4c7a68: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4c7a68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4c7a6c:
    // 0x4c7a6c: 0xadeb0004  sw          $t3, 0x4($t7)
    ctx->pc = 0x4c7a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 11));
label_4c7a70:
    // 0x4c7a70: 0x1821024  and         $v0, $t4, $v0
    ctx->pc = 0x4c7a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
label_4c7a74:
    // 0x4c7a74: 0xadcb0004  sw          $t3, 0x4($t6)
    ctx->pc = 0x4c7a74u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 11));
label_4c7a78:
    // 0x4c7a78: 0xd12021  addu        $a0, $a2, $s1
    ctx->pc = 0x4c7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_4c7a7c:
    // 0x4c7a7c: 0x1a84024  and         $t0, $t5, $t0
    ctx->pc = 0x4c7a7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) & GPR_U64(ctx, 8));
label_4c7a80:
    // 0x4c7a80: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x4c7a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_4c7a84:
    // 0x4c7a84: 0x1025825  or          $t3, $t0, $v0
    ctx->pc = 0x4c7a84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_4c7a88:
    // 0x4c7a88: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c7a8c:
    // 0x4c7a8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c7a90:
    // 0x4c7a90: 0xadeb0008  sw          $t3, 0x8($t7)
    ctx->pc = 0x4c7a90u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 11));
label_4c7a94:
    // 0x4c7a94: 0x1a31824  and         $v1, $t5, $v1
    ctx->pc = 0x4c7a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
label_4c7a98:
    // 0x4c7a98: 0xadcb0008  sw          $t3, 0x8($t6)
    ctx->pc = 0x4c7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 11));
label_4c7a9c:
    // 0x4c7a9c: 0x1821024  and         $v0, $t4, $v0
    ctx->pc = 0x4c7a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
label_4c7aa0:
    // 0x4c7aa0: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x4c7aa0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c7aa4:
    // 0x4c7aa4: 0xadeb000c  sw          $t3, 0xC($t7)
    ctx->pc = 0x4c7aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 11));
label_4c7aa8:
    // 0x4c7aa8: 0xadcb000c  sw          $t3, 0xC($t6)
    ctx->pc = 0x4c7aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 11));
label_4c7aac:
    // 0x4c7aac: 0x1d07821  addu        $t7, $t6, $s0
    ctx->pc = 0x4c7aacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
label_4c7ab0:
    // 0x4c7ab0: 0x1540ffcd  bnez        $t2, . + 4 + (-0x33 << 2)
label_4c7ab4:
    if (ctx->pc == 0x4C7AB4u) {
        ctx->pc = 0x4C7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7AB0u;
        // 0x4c7ab4: 0x1f07021  addu        $t6, $t7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7AB8u;
        goto label_4c7ab8;
    }
    ctx->pc = 0x4C7AB0u;
    {
        const bool branch_taken_0x4c7ab0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7AB0u;
        // 0x4c7ab4: 0x1f07021  addu        $t6, $t7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7ab0) {
            ctx->pc = 0x4C79E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c79e8;
        }
    }
    ctx->pc = 0x4C7AB8u;
label_4c7ab8:
    // 0x4c7ab8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_4c7abc:
    if (ctx->pc == 0x4C7ABCu) {
        ctx->pc = 0x4C7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7AB8u;
        // 0x4c7abc: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7AC0u;
        goto label_4c7ac0;
    }
    ctx->pc = 0x4C7AB8u;
    {
        const bool branch_taken_0x4c7ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7AB8u;
        // 0x4c7abc: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7ab8) {
            ctx->pc = 0x4C7C68u;
            goto label_4c7c68;
        }
    }
    ctx->pc = 0x4C7AC0u;
label_4c7ac0:
    // 0x4c7ac0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x4c7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7ac4:
    // 0x4c7ac4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4c7ac4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c7ac8:
    // 0x4c7ac8: 0x2904821  addu        $t1, $s4, $s0
    ctx->pc = 0x4c7ac8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4c7acc:
    // 0x4c7acc: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x4c7accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_4c7ad0:
    // 0x4c7ad0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_4c7ad4:
    if (ctx->pc == 0x4C7AD4u) {
        ctx->pc = 0x4C7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7AD0u;
        // 0x4c7ad4: 0x105840  sll         $t3, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7AD8u;
        goto label_4c7ad8;
    }
    ctx->pc = 0x4C7AD0u;
    {
        const bool branch_taken_0x4c7ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7AD0u;
        // 0x4c7ad4: 0x105840  sll         $t3, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7ad0) {
            ctx->pc = 0x4C7BA8u;
            goto label_4c7ba8;
        }
    }
    ctx->pc = 0x4C7AD8u;
label_4c7ad8:
    // 0x4c7ad8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4c7ad8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7adc:
    // 0x4c7adc: 0x0  nop
    ctx->pc = 0x4c7adcu;
    // NOP
label_4c7ae0:
    // 0x4c7ae0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x4c7ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7ae4:
    // 0x4c7ae4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4c7ae4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_4c7ae8:
    // 0x4c7ae8: 0x2d870008  sltiu       $a3, $t4, 0x8
    ctx->pc = 0x4c7ae8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4c7aec:
    // 0x4c7aec: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x4c7aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_4c7af0:
    // 0x4c7af0: 0x24a60008  addiu       $a2, $a1, 0x8
    ctx->pc = 0x4c7af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_4c7af4:
    // 0x4c7af4: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x4c7af4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4c7af8:
    // 0x4c7af8: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x4c7af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c7afc:
    // 0x4c7afc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c7b00:
    // 0x4c7b00: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x4c7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_4c7b04:
    // 0x4c7b04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c7b08:
    // 0x4c7b08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c7b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c7b0c:
    // 0x4c7b0c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4c7b0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_4c7b10:
    // 0x4c7b10: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x4c7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
label_4c7b14:
    // 0x4c7b14: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4c7b14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_4c7b18:
    // 0x4c7b18: 0x90a80002  lbu         $t0, 0x2($a1)
    ctx->pc = 0x4c7b18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_4c7b1c:
    // 0x4c7b1c: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x4c7b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_4c7b20:
    // 0x4c7b20: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x4c7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_4c7b24:
    // 0x4c7b24: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4c7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c7b28:
    // 0x4c7b28: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c7b2c:
    // 0x4c7b2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c7b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c7b30:
    // 0x4c7b30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c7b34:
    // 0x4c7b34: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4c7b34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_4c7b38:
    // 0x4c7b38: 0xad480004  sw          $t0, 0x4($t2)
    ctx->pc = 0x4c7b38u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
label_4c7b3c:
    // 0x4c7b3c: 0xad280004  sw          $t0, 0x4($t1)
    ctx->pc = 0x4c7b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 8));
label_4c7b40:
    // 0x4c7b40: 0x90a80004  lbu         $t0, 0x4($a1)
    ctx->pc = 0x4c7b40u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_4c7b44:
    // 0x4c7b44: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x4c7b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_4c7b48:
    // 0x4c7b48: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x4c7b48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_4c7b4c:
    // 0x4c7b4c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4c7b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c7b50:
    // 0x4c7b50: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c7b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c7b54:
    // 0x4c7b54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c7b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c7b58:
    // 0x4c7b58: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c7b5c:
    // 0x4c7b5c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4c7b5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_4c7b60:
    // 0x4c7b60: 0xad480008  sw          $t0, 0x8($t2)
    ctx->pc = 0x4c7b60u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 8));
label_4c7b64:
    // 0x4c7b64: 0xad280008  sw          $t0, 0x8($t1)
    ctx->pc = 0x4c7b64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 8));
label_4c7b68:
    // 0x4c7b68: 0x90a80006  lbu         $t0, 0x6($a1)
    ctx->pc = 0x4c7b68u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_4c7b6c:
    // 0x4c7b6c: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x4c7b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
label_4c7b70:
    // 0x4c7b70: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x4c7b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_4c7b74:
    // 0x4c7b74: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x4c7b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_4c7b78:
    // 0x4c7b78: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4c7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c7b7c:
    // 0x4c7b7c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c7b80:
    // 0x4c7b80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c7b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c7b84:
    // 0x4c7b84: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c7b88:
    // 0x4c7b88: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4c7b88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_4c7b8c:
    // 0x4c7b8c: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x4c7b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
label_4c7b90:
    // 0x4c7b90: 0xad28000c  sw          $t0, 0xC($t1)
    ctx->pc = 0x4c7b90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
label_4c7b94:
    // 0x4c7b94: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4c7b94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4c7b98:
    // 0x4c7b98: 0x14e0ffd1  bnez        $a3, . + 4 + (-0x2F << 2)
label_4c7b9c:
    if (ctx->pc == 0x4C7B9Cu) {
        ctx->pc = 0x4C7B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7B98u;
        // 0x4c7b9c: 0x12b4821  addu        $t1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7BA0u;
        goto label_4c7ba0;
    }
    ctx->pc = 0x4C7B98u;
    {
        const bool branch_taken_0x4c7b98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7B98u;
        // 0x4c7b9c: 0x12b4821  addu        $t1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7b98) {
            ctx->pc = 0x4C7AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7ae0;
        }
    }
    ctx->pc = 0x4C7BA0u;
label_4c7ba0:
    // 0x4c7ba0: 0x10000031  b           . + 4 + (0x31 << 2)
label_4c7ba4:
    if (ctx->pc == 0x4C7BA4u) {
        ctx->pc = 0x4C7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7BA0u;
        // 0x4c7ba4: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7BA8u;
        goto label_4c7ba8;
    }
    ctx->pc = 0x4C7BA0u;
    {
        const bool branch_taken_0x4c7ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7BA0u;
        // 0x4c7ba4: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7ba0) {
            ctx->pc = 0x4C7C68u;
            goto label_4c7c68;
        }
    }
    ctx->pc = 0x4C7BA8u;
label_4c7ba8:
    // 0x4c7ba8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4c7ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c7bac:
    // 0x4c7bac: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4c7bacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7bb0:
    // 0x4c7bb0: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x4c7bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
label_4c7bb4:
    // 0x4c7bb4: 0x0  nop
    ctx->pc = 0x4c7bb4u;
    // NOP
label_4c7bb8:
    // 0x4c7bb8: 0x94c80000  lhu         $t0, 0x0($a2)
    ctx->pc = 0x4c7bb8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4c7bbc:
    // 0x4c7bbc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4c7bbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_4c7bc0:
    // 0x4c7bc0: 0x2d850008  sltiu       $a1, $t4, 0x8
    ctx->pc = 0x4c7bc0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4c7bc4:
    // 0x4c7bc4: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x4c7bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_4c7bc8:
    // 0x4c7bc8: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x4c7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_4c7bcc:
    // 0x4c7bcc: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x4c7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_4c7bd0:
    // 0x4c7bd0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4c7bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4c7bd4:
    // 0x4c7bd4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c7bd8:
    // 0x4c7bd8: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x4c7bd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c7bdc:
    // 0x4c7bdc: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x4c7bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
label_4c7be0:
    // 0x4c7be0: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4c7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_4c7be4:
    // 0x4c7be4: 0x94c80002  lhu         $t0, 0x2($a2)
    ctx->pc = 0x4c7be4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_4c7be8:
    // 0x4c7be8: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x4c7be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_4c7bec:
    // 0x4c7bec: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x4c7becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_4c7bf0:
    // 0x4c7bf0: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x4c7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_4c7bf4:
    // 0x4c7bf4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4c7bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4c7bf8:
    // 0x4c7bf8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c7bfc:
    // 0x4c7bfc: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x4c7bfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c7c00:
    // 0x4c7c00: 0xad480004  sw          $t0, 0x4($t2)
    ctx->pc = 0x4c7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
label_4c7c04:
    // 0x4c7c04: 0xad280004  sw          $t0, 0x4($t1)
    ctx->pc = 0x4c7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 8));
label_4c7c08:
    // 0x4c7c08: 0x94c80004  lhu         $t0, 0x4($a2)
    ctx->pc = 0x4c7c08u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_4c7c0c:
    // 0x4c7c0c: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x4c7c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_4c7c10:
    // 0x4c7c10: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x4c7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_4c7c14:
    // 0x4c7c14: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x4c7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_4c7c18:
    // 0x4c7c18: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4c7c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4c7c1c:
    // 0x4c7c1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c7c20:
    // 0x4c7c20: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x4c7c20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c7c24:
    // 0x4c7c24: 0xad480008  sw          $t0, 0x8($t2)
    ctx->pc = 0x4c7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 8));
label_4c7c28:
    // 0x4c7c28: 0xad280008  sw          $t0, 0x8($t1)
    ctx->pc = 0x4c7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 8));
label_4c7c2c:
    // 0x4c7c2c: 0x94c80006  lhu         $t0, 0x6($a2)
    ctx->pc = 0x4c7c2cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_4c7c30:
    // 0x4c7c30: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x4c7c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_4c7c34:
    // 0x4c7c34: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x4c7c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_4c7c38:
    // 0x4c7c38: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x4c7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_4c7c3c:
    // 0x4c7c3c: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x4c7c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_4c7c40:
    // 0x4c7c40: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4c7c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4c7c44:
    // 0x4c7c44: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c7c48:
    // 0x4c7c48: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x4c7c48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c7c4c:
    // 0x4c7c4c: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x4c7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
label_4c7c50:
    // 0x4c7c50: 0xad28000c  sw          $t0, 0xC($t1)
    ctx->pc = 0x4c7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
label_4c7c54:
    // 0x4c7c54: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4c7c54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4c7c58:
    // 0x4c7c58: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
label_4c7c5c:
    if (ctx->pc == 0x4C7C5Cu) {
        ctx->pc = 0x4C7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7C58u;
        // 0x4c7c5c: 0x12b4821  addu        $t1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7C60u;
        goto label_4c7c60;
    }
    ctx->pc = 0x4C7C58u;
    {
        const bool branch_taken_0x4c7c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7C58u;
        // 0x4c7c5c: 0x12b4821  addu        $t1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7c58) {
            ctx->pc = 0x4C7BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7bb8;
        }
    }
    ctx->pc = 0x4C7C60u;
label_4c7c60:
    // 0x4c7c60: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x4c7c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_4c7c64:
    // 0x4c7c64: 0x8fa40428  lw          $a0, 0x428($sp)
    ctx->pc = 0x4c7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c7c68:
    // 0x4c7c68: 0x2d81821  addu        $v1, $s6, $t8
    ctx->pc = 0x4c7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 24)));
label_4c7c6c:
    // 0x4c7c6c: 0x8fa604a0  lw          $a2, 0x4A0($sp)
    ctx->pc = 0x4c7c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_4c7c70:
    // 0x4c7c70: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x4c7c70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_4c7c74:
    // 0x4c7c74: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x4c7c74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_4c7c78:
    // 0x4c7c78: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4c7c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4c7c7c:
    // 0x4c7c7c: 0xafa40428  sw          $a0, 0x428($sp)
    ctx->pc = 0x4c7c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 4));
label_4c7c80:
    // 0x4c7c80: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x4c7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_4c7c84:
    // 0x4c7c84: 0xa0790000  sb          $t9, 0x0($v1)
    ctx->pc = 0x4c7c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 25));
label_4c7c88:
    // 0x4c7c88: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x4c7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4c7c8c:
    // 0x4c7c8c: 0xa0590000  sb          $t9, 0x0($v0)
    ctx->pc = 0x4c7c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 25));
label_4c7c90:
    // 0x4c7c90: 0x8fa8041c  lw          $t0, 0x41C($sp)
    ctx->pc = 0x4c7c90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1052)));
label_4c7c94:
    // 0x4c7c94: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x4c7c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
label_4c7c98:
    // 0x4c7c98: 0x100002c8  b           . + 4 + (0x2C8 << 2)
label_4c7c9c:
    if (ctx->pc == 0x4C7C9Cu) {
        ctx->pc = 0x4C7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7C98u;
        // 0x4c7c9c: 0xafa8041c  sw          $t0, 0x41C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1052), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7CA0u;
        goto label_4c7ca0;
    }
    ctx->pc = 0x4C7C98u;
    {
        const bool branch_taken_0x4c7c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7C98u;
        // 0x4c7c9c: 0xafa8041c  sw          $t0, 0x41C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1052), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7c98) {
            ctx->pc = 0x4C87BCu;
            goto label_4c87bc;
        }
    }
    ctx->pc = 0x4C7CA0u;
label_4c7ca0:
    // 0x4c7ca0: 0x8fa40428  lw          $a0, 0x428($sp)
    ctx->pc = 0x4c7ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c7ca4:
    // 0x4c7ca4: 0x2903021  addu        $a2, $s4, $s0
    ctx->pc = 0x4c7ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4c7ca8:
    // 0x4c7ca8: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c7ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c7cac:
    // 0x4c7cac: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x4c7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_4c7cb0:
    // 0x4c7cb0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x4c7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4c7cb4:
    // 0x4c7cb4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4c7cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_4c7cb8:
    // 0x4c7cb8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x4c7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4c7cbc:
    // 0x4c7cbc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x4c7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4c7cc0:
    // 0x4c7cc0: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x4c7cc0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c7cc4:
    // 0x4c7cc4: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x4c7cc4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c7cc8:
    // 0x4c7cc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c7ccc:
    // 0x4c7ccc: 0x2044018  mult        $t0, $s0, $a0
    ctx->pc = 0x4c7cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_4c7cd0:
    // 0x4c7cd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c7cd4:
    // 0x4c7cd4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x4c7cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_4c7cd8:
    // 0x4c7cd8: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x4c7cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_4c7cdc:
    // 0x4c7cdc: 0x1172021  addu        $a0, $t0, $s7
    ctx->pc = 0x4c7cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_4c7ce0:
    // 0x4c7ce0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4c7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4c7ce4:
    // 0x4c7ce4: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4c7ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c7ce8:
    // 0x4c7ce8: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x4c7ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4c7cec:
    // 0x4c7cec: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4c7cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c7cf0:
    // 0x4c7cf0: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x4c7cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_4c7cf4:
    // 0x4c7cf4: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x4c7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_4c7cf8:
    // 0x4c7cf8: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4c7cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c7cfc:
    // 0x4c7cfc: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4c7cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c7d00:
    // 0x4c7d00: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x4c7d00u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_4c7d04:
    // 0x4c7d04: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x4c7d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4c7d08:
    // 0x4c7d08: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4c7d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c7d0c:
    // 0x4c7d0c: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c7d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c7d10:
    // 0x4c7d10: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4c7d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c7d14:
    // 0x4c7d14: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x4c7d14u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_4c7d18:
    // 0x4c7d18: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x4c7d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_4c7d1c:
    // 0x4c7d1c: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4c7d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c7d20:
    // 0x4c7d20: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c7d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c7d24:
    // 0x4c7d24: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4c7d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c7d28:
    // 0x4c7d28: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x4c7d28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_4c7d2c:
    // 0x4c7d2c: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x4c7d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4c7d30:
    // 0x4c7d30: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4c7d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c7d34:
    // 0x4c7d34: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c7d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c7d38:
    // 0x4c7d38: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4c7d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c7d3c:
    // 0x4c7d3c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x4c7d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_4c7d40:
    // 0x4c7d40: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x4c7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_4c7d44:
    // 0x4c7d44: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4c7d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c7d48:
    // 0x4c7d48: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c7d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c7d4c:
    // 0x4c7d4c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4c7d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c7d50:
    // 0x4c7d50: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x4c7d50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_4c7d54:
    // 0x4c7d54: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x4c7d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4c7d58:
    // 0x4c7d58: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x4c7d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c7d5c:
    // 0x4c7d5c: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c7d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c7d60:
    // 0x4c7d60: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x4c7d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c7d64:
    // 0x4c7d64: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x4c7d64u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_4c7d68:
    // 0x4c7d68: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4c7d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c7d6c:
    // 0x4c7d6c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4c7d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c7d70:
    // 0x4c7d70: 0x10000292  b           . + 4 + (0x292 << 2)
label_4c7d74:
    if (ctx->pc == 0x4C7D74u) {
        ctx->pc = 0x4C7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D70u;
        // 0x4c7d74: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7D78u;
        goto label_4c7d78;
    }
    ctx->pc = 0x4C7D70u;
    {
        const bool branch_taken_0x4c7d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D70u;
        // 0x4c7d74: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7d70) {
            ctx->pc = 0x4C87BCu;
            goto label_4c87bc;
        }
    }
    ctx->pc = 0x4C7D78u;
label_4c7d78:
    // 0x4c7d78: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x4c7d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_4c7d7c:
    // 0x4c7d7c: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
label_4c7d80:
    if (ctx->pc == 0x4C7D80u) {
        ctx->pc = 0x4C7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D7Cu;
        // 0x4c7d80: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7D84u;
        goto label_4c7d84;
    }
    ctx->pc = 0x4C7D7Cu;
    {
        const bool branch_taken_0x4c7d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D7Cu;
        // 0x4c7d80: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7d7c) {
            ctx->pc = 0x4C8188u;
            goto label_4c8188;
        }
    }
    ctx->pc = 0x4C7D84u;
label_4c7d84:
    // 0x4c7d84: 0x10910085  beq         $a0, $s1, . + 4 + (0x85 << 2)
label_4c7d88:
    if (ctx->pc == 0x4C7D88u) {
        ctx->pc = 0x4C7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D84u;
        // 0x4c7d88: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7D8Cu;
        goto label_4c7d8c;
    }
    ctx->pc = 0x4C7D84u;
    {
        const bool branch_taken_0x4c7d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x4C7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D84u;
        // 0x4c7d88: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7d84) {
            ctx->pc = 0x4C7F9Cu;
            goto label_4c7f9c;
        }
    }
    ctx->pc = 0x4C7D8Cu;
label_4c7d8c:
    // 0x4c7d8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c7d90:
    if (ctx->pc == 0x4C7D90u) {
        ctx->pc = 0x4C7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D8Cu;
        // 0x4c7d90: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7D94u;
        goto label_4c7d94;
    }
    ctx->pc = 0x4C7D8Cu;
    {
        const bool branch_taken_0x4c7d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D8Cu;
        // 0x4c7d90: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7d8c) {
            ctx->pc = 0x4C7DA4u;
            goto label_4c7da4;
        }
    }
    ctx->pc = 0x4C7D94u;
label_4c7d94:
    // 0x4c7d94: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_4c7d98:
    if (ctx->pc == 0x4C7D98u) {
        ctx->pc = 0x4C7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D94u;
        // 0x4c7d98: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7D9Cu;
        goto label_4c7d9c;
    }
    ctx->pc = 0x4C7D94u;
    {
        const bool branch_taken_0x4c7d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D94u;
        // 0x4c7d98: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7d94) {
            ctx->pc = 0x4C7DB8u;
            goto label_4c7db8;
        }
    }
    ctx->pc = 0x4C7D9Cu;
label_4c7d9c:
    // 0x4c7d9c: 0x10000289  b           . + 4 + (0x289 << 2)
label_4c7da0:
    if (ctx->pc == 0x4C7DA0u) {
        ctx->pc = 0x4C7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D9Cu;
        // 0x4c7da0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7DA4u;
        goto label_4c7da4;
    }
    ctx->pc = 0x4C7D9Cu;
    {
        const bool branch_taken_0x4c7d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D9Cu;
        // 0x4c7da0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7d9c) {
            ctx->pc = 0x4C87C4u;
            goto label_4c87c4;
        }
    }
    ctx->pc = 0x4C7DA4u;
label_4c7da4:
    // 0x4c7da4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4c7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4c7da8:
    // 0x4c7da8: 0x108200ca  beq         $a0, $v0, . + 4 + (0xCA << 2)
label_4c7dac:
    if (ctx->pc == 0x4C7DACu) {
        ctx->pc = 0x4C7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7DA8u;
        // 0x4c7dac: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7DB0u;
        goto label_4c7db0;
    }
    ctx->pc = 0x4C7DA8u;
    {
        const bool branch_taken_0x4c7da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7DA8u;
        // 0x4c7dac: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7da8) {
            ctx->pc = 0x4C80D4u;
            goto label_4c80d4;
        }
    }
    ctx->pc = 0x4C7DB0u;
label_4c7db0:
    // 0x4c7db0: 0x10000284  b           . + 4 + (0x284 << 2)
label_4c7db4:
    if (ctx->pc == 0x4C7DB4u) {
        ctx->pc = 0x4C7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7DB0u;
        // 0x4c7db4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7DB8u;
        goto label_4c7db8;
    }
    ctx->pc = 0x4C7DB0u;
    {
        const bool branch_taken_0x4c7db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7DB0u;
        // 0x4c7db4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7db0) {
            ctx->pc = 0x4C87C4u;
            goto label_4c87c4;
        }
    }
    ctx->pc = 0x4C7DB8u;
label_4c7db8:
    // 0x4c7db8: 0x8fa60408  lw          $a2, 0x408($sp)
    ctx->pc = 0x4c7db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_4c7dbc:
    // 0x4c7dbc: 0x8fab0404  lw          $t3, 0x404($sp)
    ctx->pc = 0x4c7dbcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_4c7dc0:
    // 0x4c7dc0: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x4c7dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4c7dc4:
    // 0x4c7dc4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4c7dc8:
    if (ctx->pc == 0x4C7DC8u) {
        ctx->pc = 0x4C7DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7DC4u;
        // 0x4c7dc8: 0x8fa70400  lw          $a3, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7DCCu;
        goto label_4c7dcc;
    }
    ctx->pc = 0x4C7DC4u;
    {
        const bool branch_taken_0x4c7dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7DC4u;
        // 0x4c7dc8: 0x8fa70400  lw          $a3, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7dc4) {
            ctx->pc = 0x4C7DDCu;
            goto label_4c7ddc;
        }
    }
    ctx->pc = 0x4C7DCCu;
label_4c7dcc:
    // 0x4c7dcc: 0x30e4000f  andi        $a0, $a3, 0xF
    ctx->pc = 0x4c7dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_4c7dd0:
    // 0x4c7dd0: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4c7dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_4c7dd4:
    // 0x4c7dd4: 0x10000009  b           . + 4 + (0x9 << 2)
label_4c7dd8:
    if (ctx->pc == 0x4C7DD8u) {
        ctx->pc = 0x4C7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7DD4u;
        // 0x4c7dd8: 0x73902  srl         $a3, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7DDCu;
        goto label_4c7ddc;
    }
    ctx->pc = 0x4C7DD4u;
    {
        const bool branch_taken_0x4c7dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7DD4u;
        // 0x4c7dd8: 0x73902  srl         $a3, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7dd4) {
            ctx->pc = 0x4C7DFCu;
            goto label_4c7dfc;
        }
    }
    ctx->pc = 0x4C7DDCu;
label_4c7ddc:
    // 0x4c7ddc: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4c7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4c7de0:
    // 0x4c7de0: 0x2262023  subu        $a0, $s1, $a2
    ctx->pc = 0x4c7de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_4c7de4:
    // 0x4c7de4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4c7de4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_4c7de8:
    // 0x4c7de8: 0xc21804  sllv        $v1, $v0, $a2
    ctx->pc = 0x4c7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_4c7dec:
    // 0x4c7dec: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x4c7decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_4c7df0:
    // 0x4c7df0: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x4c7df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
label_4c7df4:
    // 0x4c7df4: 0x823806  srlv        $a3, $v0, $a0
    ctx->pc = 0x4c7df4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_4c7df8:
    // 0x4c7df8: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x4c7df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_4c7dfc:
    // 0x4c7dfc: 0x8fa30428  lw          $v1, 0x428($sp)
    ctx->pc = 0x4c7dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c7e00:
    // 0x4c7e00: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x4c7e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_4c7e04:
    // 0x4c7e04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4c7e04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7e08:
    // 0x4c7e08: 0x2907021  addu        $t6, $s4, $s0
    ctx->pc = 0x4c7e08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4c7e0c:
    // 0x4c7e0c: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x4c7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_4c7e10:
    // 0x4c7e10: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x4c7e10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c7e14:
    // 0x4c7e14: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4c7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4c7e18:
    // 0x4c7e18: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x4c7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4c7e1c:
    // 0x4c7e1c: 0x24633d80  addiu       $v1, $v1, 0x3D80
    ctx->pc = 0x4c7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15744));
label_4c7e20:
    // 0x4c7e20: 0xa0590000  sb          $t9, 0x0($v0)
    ctx->pc = 0x4c7e20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 25));
label_4c7e24:
    // 0x4c7e24: 0x836021  addu        $t4, $a0, $v1
    ctx->pc = 0x4c7e24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4c7e28:
    // 0x4c7e28: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_4c7e2c:
    if (ctx->pc == 0x4C7E2Cu) {
        ctx->pc = 0x4C7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7E28u;
        // 0x4c7e2c: 0x30e40001  andi        $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7E30u;
        goto label_4c7e30;
    }
    ctx->pc = 0x4C7E28u;
    {
        const bool branch_taken_0x4c7e28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7E28u;
        // 0x4c7e2c: 0x30e40001  andi        $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7e28) {
            ctx->pc = 0x4C7E44u;
            goto label_4c7e44;
        }
    }
    ctx->pc = 0x4C7E30u;
label_4c7e30:
    // 0x4c7e30: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c7e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4c7e34:
    // 0x4c7e34: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_4c7e38:
    if (ctx->pc == 0x4C7E38u) {
        ctx->pc = 0x4C7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7E34u;
        // 0x4c7e38: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7E3Cu;
        goto label_4c7e3c;
    }
    ctx->pc = 0x4C7E34u;
    {
        const bool branch_taken_0x4c7e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7E34u;
        // 0x4c7e38: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7e34) {
            ctx->pc = 0x4C7E5Cu;
            goto label_4c7e5c;
        }
    }
    ctx->pc = 0x4C7E3Cu;
label_4c7e3c:
    // 0x4c7e3c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_4c7e40:
    if (ctx->pc == 0x4C7E40u) {
        ctx->pc = 0x4C7E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7E3Cu;
        // 0x4c7e40: 0x8fa20180  lw          $v0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7E44u;
        goto label_4c7e44;
    }
    ctx->pc = 0x4C7E3Cu;
    {
        const bool branch_taken_0x4c7e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7E3Cu;
        // 0x4c7e40: 0x8fa20180  lw          $v0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7e3c) {
            ctx->pc = 0x4C7EB8u;
            goto label_4c7eb8;
        }
    }
    ctx->pc = 0x4C7E44u;
label_4c7e44:
    // 0x4c7e44: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4c7e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4c7e48:
    // 0x4c7e48: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x4c7e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_4c7e4c:
    // 0x4c7e4c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4c7e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_4c7e50:
    // 0x4c7e50: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4c7e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4c7e54:
    // 0x4c7e54: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4c7e58:
    if (ctx->pc == 0x4C7E58u) {
        ctx->pc = 0x4C7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7E54u;
        // 0x4c7e58: 0x43842  srl         $a3, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7E5Cu;
        goto label_4c7e5c;
    }
    ctx->pc = 0x4C7E54u;
    {
        const bool branch_taken_0x4c7e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7E54u;
        // 0x4c7e58: 0x43842  srl         $a3, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7e54) {
            ctx->pc = 0x4C7EB4u;
            goto label_4c7eb4;
        }
    }
    ctx->pc = 0x4C7E5Cu;
label_4c7e5c:
    // 0x4c7e5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4c7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7e60:
    // 0x4c7e60: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x4c7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4c7e64:
    // 0x4c7e64: 0x904a0000  lbu         $t2, 0x0($v0)
    ctx->pc = 0x4c7e64u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c7e68:
    // 0x4c7e68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c7e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c7e6c:
    // 0x4c7e6c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x4c7e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_4c7e70:
    // 0x4c7e70: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x4c7e70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c7e74:
    // 0x4c7e74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c7e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c7e78:
    // 0x4c7e78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c7e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c7e7c:
    // 0x4c7e7c: 0x10ad0021  beq         $a1, $t5, . + 4 + (0x21 << 2)
label_4c7e80:
    if (ctx->pc == 0x4C7E80u) {
        ctx->pc = 0x4C7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7E7Cu;
        // 0x4c7e80: 0xafa30180  sw          $v1, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7E84u;
        goto label_4c7e84;
    }
    ctx->pc = 0x4C7E7Cu;
    {
        const bool branch_taken_0x4c7e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        ctx->pc = 0x4C7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7E7Cu;
        // 0x4c7e80: 0xafa30180  sw          $v1, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7e7c) {
            ctx->pc = 0x4C7F04u;
            goto label_4c7f04;
        }
    }
    ctx->pc = 0x4C7E84u;
label_4c7e84:
    // 0x4c7e84: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x4c7e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_4c7e88:
    // 0x4c7e88: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4c7e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c7e8c:
    // 0x4c7e8c: 0x0  nop
    ctx->pc = 0x4c7e8cu;
    // NOP
label_4c7e90:
    // 0x4c7e90: 0x1891821  addu        $v1, $t4, $t1
    ctx->pc = 0x4c7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_4c7e94:
    // 0x4c7e94: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4c7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4c7e98:
    // 0x4c7e98: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4c7e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c7e9c:
    // 0x4c7e9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c7e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4c7ea0:
    // 0x4c7ea0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4c7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4c7ea4:
    // 0x4c7ea4: 0x14a8fffa  bne         $a1, $t0, . + 4 + (-0x6 << 2)
label_4c7ea8:
    if (ctx->pc == 0x4C7EA8u) {
        ctx->pc = 0x4C7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7EA4u;
        // 0x4c7ea8: 0xa04a0000  sb          $t2, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7EACu;
        goto label_4c7eac;
    }
    ctx->pc = 0x4C7EA4u;
    {
        const bool branch_taken_0x4c7ea4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x4C7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7EA4u;
        // 0x4c7ea8: 0xa04a0000  sb          $t2, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7ea4) {
            ctx->pc = 0x4C7E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7e90;
        }
    }
    ctx->pc = 0x4C7EACu;
label_4c7eac:
    // 0x4c7eac: 0x10000016  b           . + 4 + (0x16 << 2)
label_4c7eb0:
    if (ctx->pc == 0x4C7EB0u) {
        ctx->pc = 0x4C7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7EACu;
        // 0x4c7eb0: 0x2922003f  slti        $v0, $t1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7EB4u;
        goto label_4c7eb4;
    }
    ctx->pc = 0x4C7EACu;
    {
        const bool branch_taken_0x4c7eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7EACu;
        // 0x4c7eb0: 0x2922003f  slti        $v0, $t1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7eac) {
            ctx->pc = 0x4C7F08u;
            goto label_4c7f08;
        }
    }
    ctx->pc = 0x4C7EB4u;
label_4c7eb4:
    // 0x4c7eb4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x4c7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4c7eb8:
    // 0x4c7eb8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4c7eb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c7ebc:
    // 0x4c7ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c7ec0:
    // 0x4c7ec0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4c7ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c7ec4:
    // 0x4c7ec4: 0x10ad000f  beq         $a1, $t5, . + 4 + (0xF << 2)
label_4c7ec8:
    if (ctx->pc == 0x4C7EC8u) {
        ctx->pc = 0x4C7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7EC4u;
        // 0x4c7ec8: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7ECCu;
        goto label_4c7ecc;
    }
    ctx->pc = 0x4C7EC4u;
    {
        const bool branch_taken_0x4c7ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        ctx->pc = 0x4C7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7EC4u;
        // 0x4c7ec8: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7ec4) {
            ctx->pc = 0x4C7F04u;
            goto label_4c7f04;
        }
    }
    ctx->pc = 0x4C7ECCu;
label_4c7ecc:
    // 0x4c7ecc: 0x27a803c0  addiu       $t0, $sp, 0x3C0
    ctx->pc = 0x4c7eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_4c7ed0:
    // 0x4c7ed0: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x4c7ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c7ed4:
    // 0x4c7ed4: 0x0  nop
    ctx->pc = 0x4c7ed4u;
    // NOP
label_4c7ed8:
    // 0x4c7ed8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4c7ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7edc:
    // 0x4c7edc: 0x1891021  addu        $v0, $t4, $t1
    ctx->pc = 0x4c7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_4c7ee0:
    // 0x4c7ee0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4c7ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c7ee4:
    // 0x4c7ee4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c7ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4c7ee8:
    // 0x4c7ee8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4c7ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c7eec:
    // 0x4c7eec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4c7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4c7ef0:
    // 0x4c7ef0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x4c7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4c7ef4:
    // 0x4c7ef4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c7ef8:
    // 0x4c7ef8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4c7ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_4c7efc:
    // 0x4c7efc: 0x14aafff6  bne         $a1, $t2, . + 4 + (-0xA << 2)
label_4c7f00:
    if (ctx->pc == 0x4C7F00u) {
        ctx->pc = 0x4C7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7EFCu;
        // 0x4c7f00: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7F04u;
        goto label_4c7f04;
    }
    ctx->pc = 0x4C7EFCu;
    {
        const bool branch_taken_0x4c7efc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        ctx->pc = 0x4C7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7EFCu;
        // 0x4c7f00: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7efc) {
            ctx->pc = 0x4C7ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7ed8;
        }
    }
    ctx->pc = 0x4C7F04u;
label_4c7f04:
    // 0x4c7f04: 0x2922003f  slti        $v0, $t1, 0x3F
    ctx->pc = 0x4c7f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)63) ? 1 : 0);
label_4c7f08:
    // 0x4c7f08: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
label_4c7f0c:
    if (ctx->pc == 0x4C7F0Cu) {
        ctx->pc = 0x4C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7F08u;
        // 0x4c7f0c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7F10u;
        goto label_4c7f10;
    }
    ctx->pc = 0x4C7F08u;
    {
        const bool branch_taken_0x4c7f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7F08u;
        // 0x4c7f0c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7f08) {
            ctx->pc = 0x4C7E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7e28;
        }
    }
    ctx->pc = 0x4C7F10u;
label_4c7f10:
    // 0x4c7f10: 0x15220009  bne         $t1, $v0, . + 4 + (0x9 << 2)
label_4c7f14:
    if (ctx->pc == 0x4C7F14u) {
        ctx->pc = 0x4C7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7F10u;
        // 0x4c7f14: 0xdfa203c0  ld          $v0, 0x3C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7F18u;
        goto label_4c7f18;
    }
    ctx->pc = 0x4C7F10u;
    {
        const bool branch_taken_0x4c7f10 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7F10u;
        // 0x4c7f14: 0xdfa203c0  ld          $v0, 0x3C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7f10) {
            ctx->pc = 0x4C7F38u;
            goto label_4c7f38;
        }
    }
    ctx->pc = 0x4C7F18u;
label_4c7f18:
    // 0x4c7f18: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4c7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7f1c:
    // 0x4c7f1c: 0x9183003f  lbu         $v1, 0x3F($t4)
    ctx->pc = 0x4c7f1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 63)));
label_4c7f20:
    // 0x4c7f20: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4c7f20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c7f24:
    // 0x4c7f24: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x4c7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_4c7f28:
    // 0x4c7f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c7f2c:
    // 0x4c7f2c: 0xa08503c0  sb          $a1, 0x3C0($a0)
    ctx->pc = 0x4c7f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 960), (uint8_t)GPR_U32(ctx, 5));
label_4c7f30:
    // 0x4c7f30: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x4c7f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_4c7f34:
    // 0x4c7f34: 0xdfa203c0  ld          $v0, 0x3C0($sp)
    ctx->pc = 0x4c7f34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 960)));
label_4c7f38:
    // 0x4c7f38: 0x1d02021  addu        $a0, $t6, $s0
    ctx->pc = 0x4c7f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
label_4c7f3c:
    // 0x4c7f3c: 0xafab0404  sw          $t3, 0x404($sp)
    ctx->pc = 0x4c7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 11));
label_4c7f40:
    // 0x4c7f40: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x4c7f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4c7f44:
    // 0x4c7f44: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x4c7f44u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_4c7f48:
    // 0x4c7f48: 0xafa70400  sw          $a3, 0x400($sp)
    ctx->pc = 0x4c7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 7));
label_4c7f4c:
    // 0x4c7f4c: 0xdfa303c8  ld          $v1, 0x3C8($sp)
    ctx->pc = 0x4c7f4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 968)));
label_4c7f50:
    // 0x4c7f50: 0xafa60408  sw          $a2, 0x408($sp)
    ctx->pc = 0x4c7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 6));
label_4c7f54:
    // 0x4c7f54: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x4c7f54u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
label_4c7f58:
    // 0x4c7f58: 0xdfa203d0  ld          $v0, 0x3D0($sp)
    ctx->pc = 0x4c7f58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 976)));
label_4c7f5c:
    // 0x4c7f5c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x4c7f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_4c7f60:
    // 0x4c7f60: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x4c7f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_4c7f64:
    // 0x4c7f64: 0xdfa203d8  ld          $v0, 0x3D8($sp)
    ctx->pc = 0x4c7f64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 984)));
label_4c7f68:
    // 0x4c7f68: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x4c7f68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_4c7f6c:
    // 0x4c7f6c: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x4c7f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4c7f70:
    // 0x4c7f70: 0xdfa203e0  ld          $v0, 0x3E0($sp)
    ctx->pc = 0x4c7f70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 992)));
label_4c7f74:
    // 0x4c7f74: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x4c7f74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_4c7f78:
    // 0x4c7f78: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x4c7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_4c7f7c:
    // 0x4c7f7c: 0xdfa203e8  ld          $v0, 0x3E8($sp)
    ctx->pc = 0x4c7f7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 1000)));
label_4c7f80:
    // 0x4c7f80: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x4c7f80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_4c7f84:
    // 0x4c7f84: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x4c7f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4c7f88:
    // 0x4c7f88: 0xdfa203f0  ld          $v0, 0x3F0($sp)
    ctx->pc = 0x4c7f88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
label_4c7f8c:
    // 0x4c7f8c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x4c7f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_4c7f90:
    // 0x4c7f90: 0xdfa303f8  ld          $v1, 0x3F8($sp)
    ctx->pc = 0x4c7f90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 1016)));
label_4c7f94:
    // 0x4c7f94: 0x10000209  b           . + 4 + (0x209 << 2)
label_4c7f98:
    if (ctx->pc == 0x4C7F98u) {
        ctx->pc = 0x4C7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7F94u;
        // 0x4c7f98: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C7F9Cu;
        goto label_4c7f9c;
    }
    ctx->pc = 0x4C7F94u;
    {
        const bool branch_taken_0x4c7f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7F94u;
        // 0x4c7f98: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7f94) {
            ctx->pc = 0x4C87BCu;
            goto label_4c87bc;
        }
    }
    ctx->pc = 0x4C7F9Cu;
label_4c7f9c:
    // 0x4c7f9c: 0x8fa40428  lw          $a0, 0x428($sp)
    ctx->pc = 0x4c7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c7fa0:
    // 0x4c7fa0: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x4c7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_4c7fa4:
    // 0x4c7fa4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x4c7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4c7fa8:
    // 0x4c7fa8: 0xa0590000  sb          $t9, 0x0($v0)
    ctx->pc = 0x4c7fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 25));
label_4c7fac:
    // 0x4c7fac: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4c7facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4c7fb0:
    // 0x4c7fb0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x4c7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4c7fb4:
    // 0x4c7fb4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x4c7fb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c7fb8:
    // 0x4c7fb8: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x4c7fb8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c7fbc:
    // 0x4c7fbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c7fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c7fc0:
    // 0x4c7fc0: 0x2034018  mult        $t0, $s0, $v1
    ctx->pc = 0x4c7fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_4c7fc4:
    // 0x4c7fc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c7fc8:
    // 0x4c7fc8: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x4c7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_4c7fcc:
    // 0x4c7fcc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x4c7fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_4c7fd0:
    // 0x4c7fd0: 0x8fa70408  lw          $a3, 0x408($sp)
    ctx->pc = 0x4c7fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_4c7fd4:
    // 0x4c7fd4: 0x1171821  addu        $v1, $t0, $s7
    ctx->pc = 0x4c7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_4c7fd8:
    // 0x4c7fd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4c7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4c7fdc:
    // 0x4c7fdc: 0x2ce60007  sltiu       $a2, $a3, 0x7
    ctx->pc = 0x4c7fdcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_4c7fe0:
    // 0x4c7fe0: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4c7fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c7fe4:
    // 0x4c7fe4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x4c7fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c7fe8:
    // 0x4c7fe8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4c7fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c7fec:
    // 0x4c7fec: 0xffa203c0  sd          $v0, 0x3C0($sp)
    ctx->pc = 0x4c7fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 960), GPR_U64(ctx, 2));
label_4c7ff0:
    // 0x4c7ff0: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x4c7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4c7ff4:
    // 0x4c7ff4: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4c7ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c7ff8:
    // 0x4c7ff8: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4c7ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c7ffc:
    // 0x4c7ffc: 0xffa203c8  sd          $v0, 0x3C8($sp)
    ctx->pc = 0x4c7ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 968), GPR_U64(ctx, 2));
label_4c8000:
    // 0x4c8000: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x4c8000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c8004:
    // 0x4c8004: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4c8004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c8008:
    // 0x4c8008: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4c8008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c800c:
    // 0x4c800c: 0xffa203d0  sd          $v0, 0x3D0($sp)
    ctx->pc = 0x4c800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 976), GPR_U64(ctx, 2));
label_4c8010:
    // 0x4c8010: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x4c8010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4c8014:
    // 0x4c8014: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4c8014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c8018:
    // 0x4c8018: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4c8018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c801c:
    // 0x4c801c: 0xffa203d8  sd          $v0, 0x3D8($sp)
    ctx->pc = 0x4c801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 984), GPR_U64(ctx, 2));
label_4c8020:
    // 0x4c8020: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x4c8020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c8024:
    // 0x4c8024: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4c8024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c8028:
    // 0x4c8028: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4c8028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c802c:
    // 0x4c802c: 0xffa203e0  sd          $v0, 0x3E0($sp)
    ctx->pc = 0x4c802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 992), GPR_U64(ctx, 2));
label_4c8030:
    // 0x4c8030: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x4c8030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4c8034:
    // 0x4c8034: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4c8034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c8038:
    // 0x4c8038: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4c8038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c803c:
    // 0x4c803c: 0xffa203e8  sd          $v0, 0x3E8($sp)
    ctx->pc = 0x4c803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1000), GPR_U64(ctx, 2));
label_4c8040:
    // 0x4c8040: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x4c8040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c8044:
    // 0x4c8044: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4c8044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c8048:
    // 0x4c8048: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4c8048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c804c:
    // 0x4c804c: 0xffa203f0  sd          $v0, 0x3F0($sp)
    ctx->pc = 0x4c804cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 2));
label_4c8050:
    // 0x4c8050: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x4c8050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c8054:
    // 0x4c8054: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x4c8054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c8058:
    // 0x4c8058: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_4c805c:
    if (ctx->pc == 0x4C805Cu) {
        ctx->pc = 0x4C805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8058u;
        // 0x4c805c: 0xffa303f8  sd          $v1, 0x3F8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1016), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8060u;
        goto label_4c8060;
    }
    ctx->pc = 0x4C8058u;
    {
        const bool branch_taken_0x4c8058 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8058u;
        // 0x4c805c: 0xffa303f8  sd          $v1, 0x3F8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1016), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8058) {
            ctx->pc = 0x4C807Cu;
            goto label_4c807c;
        }
    }
    ctx->pc = 0x4C8060u;
label_4c8060:
    // 0x4c8060: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x4c8060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_4c8064:
    // 0x4c8064: 0x24e3fff9  addiu       $v1, $a3, -0x7
    ctx->pc = 0x4c8064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967289));
label_4c8068:
    // 0x4c8068: 0xafa30408  sw          $v1, 0x408($sp)
    ctx->pc = 0x4c8068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 3));
label_4c806c:
    // 0x4c806c: 0x221c2  srl         $a0, $v0, 7
    ctx->pc = 0x4c806cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_4c8070:
    // 0x4c8070: 0x3047007f  andi        $a3, $v0, 0x7F
    ctx->pc = 0x4c8070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_4c8074:
    // 0x4c8074: 0x1000000f  b           . + 4 + (0xF << 2)
label_4c8078:
    if (ctx->pc == 0x4C8078u) {
        ctx->pc = 0x4C8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8074u;
        // 0x4c8078: 0xafa40400  sw          $a0, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C807Cu;
        goto label_4c807c;
    }
    ctx->pc = 0x4C8074u;
    {
        const bool branch_taken_0x4c8074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8074u;
        // 0x4c8078: 0xafa40400  sw          $a0, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8074) {
            ctx->pc = 0x4C80B4u;
            goto label_4c80b4;
        }
    }
    ctx->pc = 0x4C807Cu;
label_4c807c:
    // 0x4c807c: 0x8fa50404  lw          $a1, 0x404($sp)
    ctx->pc = 0x4c807cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_4c8080:
    // 0x4c8080: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4c8080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4c8084:
    // 0x4c8084: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c8084u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4c8088:
    // 0x4c8088: 0x8fa60400  lw          $a2, 0x400($sp)
    ctx->pc = 0x4c8088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_4c808c:
    // 0x4c808c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c8090:
    // 0x4c8090: 0x24e40019  addiu       $a0, $a3, 0x19
    ctx->pc = 0x4c8090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 25));
label_4c8094:
    // 0x4c8094: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4c8094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4c8098:
    // 0x4c8098: 0xafa40408  sw          $a0, 0x408($sp)
    ctx->pc = 0x4c8098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 4));
label_4c809c:
    // 0x4c809c: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x4c809cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_4c80a0:
    // 0x4c80a0: 0xafa50404  sw          $a1, 0x404($sp)
    ctx->pc = 0x4c80a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 5));
label_4c80a4:
    // 0x4c80a4: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x4c80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
label_4c80a8:
    // 0x4c80a8: 0xafa30400  sw          $v1, 0x400($sp)
    ctx->pc = 0x4c80a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 3));
label_4c80ac:
    // 0x4c80ac: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4c80acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_4c80b0:
    // 0x4c80b0: 0x30c7007f  andi        $a3, $a2, 0x7F
    ctx->pc = 0x4c80b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
label_4c80b4:
    // 0x4c80b4: 0x7fb90440  sq          $t9, 0x440($sp)
    ctx->pc = 0x4c80b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 25));
label_4c80b8:
    // 0x4c80b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c80b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c80bc:
    // 0x4c80bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c80bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c80c0:
    // 0x4c80c0: 0x27a60400  addiu       $a2, $sp, 0x400
    ctx->pc = 0x4c80c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c80c4:
    // 0x4c80c4: 0xc1348d6  jal         func_4D2358
label_4c80c8:
    if (ctx->pc == 0x4C80C8u) {
        ctx->pc = 0x4C80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C80C4u;
        // 0x4c80c8: 0x27a803c0  addiu       $t0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C80CCu;
        goto label_4c80cc;
    }
    ctx->pc = 0x4C80C4u;
    SET_GPR_U32(ctx, 31, 0x4C80CCu);
    ctx->pc = 0x4C80C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C80C4u;
    // 0x4c80c8: 0x27a803c0  addiu       $t0, $sp, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2358u, 0x4C80C4u, 0x4C80CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C80CCu;
label_4c80cc:
    // 0x4c80cc: 0x100001bb  b           . + 4 + (0x1BB << 2)
label_4c80d0:
    if (ctx->pc == 0x4C80D0u) {
        ctx->pc = 0x4C80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C80CCu;
        // 0x4c80d0: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C80D4u;
        goto label_4c80d4;
    }
    ctx->pc = 0x4C80CCu;
    {
        const bool branch_taken_0x4c80cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C80CCu;
        // 0x4c80d0: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c80cc) {
            ctx->pc = 0x4C87BCu;
            goto label_4c87bc;
        }
    }
    ctx->pc = 0x4C80D4u;
label_4c80d4:
    // 0x4c80d4: 0x8fa20428  lw          $v0, 0x428($sp)
    ctx->pc = 0x4c80d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c80d8:
    // 0x4c80d8: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x4c80d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_4c80dc:
    // 0x4c80dc: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x4c80dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c80e0:
    // 0x4c80e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4c80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4c80e4:
    // 0x4c80e4: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x4c80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_4c80e8:
    // 0x4c80e8: 0xa0790000  sb          $t9, 0x0($v1)
    ctx->pc = 0x4c80e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 25));
label_4c80ec:
    // 0x4c80ec: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x4c80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4c80f0:
    // 0x4c80f0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c80f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4c80f4:
    // 0x4c80f4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4c80f8:
    // 0x4c80f8: 0x7fb90440  sq          $t9, 0x440($sp)
    ctx->pc = 0x4c80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 25));
label_4c80fc:
    // 0x4c80fc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x4c80fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_4c8100:
    // 0x4c8100: 0xc134490  jal         func_4D1240
label_4c8104:
    if (ctx->pc == 0x4C8104u) {
        ctx->pc = 0x4C8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8100u;
        // 0x4c8104: 0xa7a30340  sh          $v1, 0x340($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 832), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8108u;
        goto label_4c8108;
    }
    ctx->pc = 0x4C8100u;
    SET_GPR_U32(ctx, 31, 0x4C8108u);
    ctx->pc = 0x4C8104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8100u;
    // 0x4c8104: 0xa7a30340  sh          $v1, 0x340($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 832), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1240u, 0x4C8100u, 0x4C8108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8108u;
label_4c8108:
    // 0x4c8108: 0x8fa80408  lw          $t0, 0x408($sp)
    ctx->pc = 0x4c8108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_4c810c:
    // 0x4c810c: 0x27a90340  addiu       $t1, $sp, 0x340
    ctx->pc = 0x4c810cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_4c8110:
    // 0x4c8110: 0x2d020004  sltiu       $v0, $t0, 0x4
    ctx->pc = 0x4c8110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4c8114:
    // 0x4c8114: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4c8118:
    if (ctx->pc == 0x4C8118u) {
        ctx->pc = 0x4C8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8114u;
        // 0x4c8118: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C811Cu;
        goto label_4c811c;
    }
    ctx->pc = 0x4C8114u;
    {
        const bool branch_taken_0x4c8114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8114u;
        // 0x4c8118: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8114) {
            ctx->pc = 0x4C8138u;
            goto label_4c8138;
        }
    }
    ctx->pc = 0x4C811Cu;
label_4c811c:
    // 0x4c811c: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x4c811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_4c8120:
    // 0x4c8120: 0x2503fffc  addiu       $v1, $t0, -0x4
    ctx->pc = 0x4c8120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
label_4c8124:
    // 0x4c8124: 0xafa30408  sw          $v1, 0x408($sp)
    ctx->pc = 0x4c8124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 3));
label_4c8128:
    // 0x4c8128: 0x22102  srl         $a0, $v0, 4
    ctx->pc = 0x4c8128u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c812c:
    // 0x4c812c: 0x3047000f  andi        $a3, $v0, 0xF
    ctx->pc = 0x4c812cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c8130:
    // 0x4c8130: 0x1000000e  b           . + 4 + (0xE << 2)
label_4c8134:
    if (ctx->pc == 0x4C8134u) {
        ctx->pc = 0x4C8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8130u;
        // 0x4c8134: 0xafa40400  sw          $a0, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8138u;
        goto label_4c8138;
    }
    ctx->pc = 0x4C8130u;
    {
        const bool branch_taken_0x4c8130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8130u;
        // 0x4c8134: 0xafa40400  sw          $a0, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8130) {
            ctx->pc = 0x4C816Cu;
            goto label_4c816c;
        }
    }
    ctx->pc = 0x4C8138u;
label_4c8138:
    // 0x4c8138: 0x8fa30404  lw          $v1, 0x404($sp)
    ctx->pc = 0x4c8138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_4c813c:
    // 0x4c813c: 0x2282023  subu        $a0, $s1, $t0
    ctx->pc = 0x4c813cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_4c8140:
    // 0x4c8140: 0x8fa60400  lw          $a2, 0x400($sp)
    ctx->pc = 0x4c8140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_4c8144:
    // 0x4c8144: 0x2505001c  addiu       $a1, $t0, 0x1C
    ctx->pc = 0x4c8144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_4c8148:
    // 0x4c8148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c8148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c814c:
    // 0x4c814c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4c814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4c8150:
    // 0x4c8150: 0xafa50408  sw          $a1, 0x408($sp)
    ctx->pc = 0x4c8150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 5));
label_4c8154:
    // 0x4c8154: 0x822006  srlv        $a0, $v0, $a0
    ctx->pc = 0x4c8154u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_4c8158:
    // 0x4c8158: 0xafa30404  sw          $v1, 0x404($sp)
    ctx->pc = 0x4c8158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 3));
label_4c815c:
    // 0x4c815c: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c815cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_4c8160:
    // 0x4c8160: 0xafa40400  sw          $a0, 0x400($sp)
    ctx->pc = 0x4c8160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 4));
label_4c8164:
    // 0x4c8164: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4c8164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_4c8168:
    // 0x4c8168: 0x30c7000f  andi        $a3, $a2, 0xF
    ctx->pc = 0x4c8168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_4c816c:
    // 0x4c816c: 0x7fb90440  sq          $t9, 0x440($sp)
    ctx->pc = 0x4c816cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 25));
label_4c8170:
    // 0x4c8170: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4c8170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4c8174:
    // 0x4c8174: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c8174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c8178:
    // 0x4c8178: 0xc134cfe  jal         func_4D33F8
label_4c817c:
    if (ctx->pc == 0x4C817Cu) {
        ctx->pc = 0x4C817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8178u;
        // 0x4c817c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8180u;
        goto label_4c8180;
    }
    ctx->pc = 0x4C8178u;
    SET_GPR_U32(ctx, 31, 0x4C8180u);
    ctx->pc = 0x4C817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8178u;
    // 0x4c817c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D33F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D33F8u, 0x4C8178u, 0x4C8180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8180u;
label_4c8180:
    // 0x4c8180: 0x1000018e  b           . + 4 + (0x18E << 2)
label_4c8184:
    if (ctx->pc == 0x4C8184u) {
        ctx->pc = 0x4C8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8180u;
        // 0x4c8184: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8188u;
        goto label_4c8188;
    }
    ctx->pc = 0x4C8180u;
    {
        const bool branch_taken_0x4c8180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8180u;
        // 0x4c8184: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8180) {
            ctx->pc = 0x4C87BCu;
            goto label_4c87bc;
        }
    }
    ctx->pc = 0x4C8188u;
label_4c8188:
    // 0x4c8188: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4c8188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4c818c:
    // 0x4c818c: 0x10820032  beq         $a0, $v0, . + 4 + (0x32 << 2)
label_4c8190:
    if (ctx->pc == 0x4C8190u) {
        ctx->pc = 0x4C8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C818Cu;
        // 0x4c8190: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8194u;
        goto label_4c8194;
    }
    ctx->pc = 0x4C818Cu;
    {
        const bool branch_taken_0x4c818c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C818Cu;
        // 0x4c8190: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c818c) {
            ctx->pc = 0x4C8258u;
            goto label_4c8258;
        }
    }
    ctx->pc = 0x4C8194u;
label_4c8194:
    // 0x4c8194: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c8198:
    if (ctx->pc == 0x4C8198u) {
        ctx->pc = 0x4C8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8194u;
        // 0x4c8198: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C819Cu;
        goto label_4c819c;
    }
    ctx->pc = 0x4C8194u;
    {
        const bool branch_taken_0x4c8194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8194u;
        // 0x4c8198: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8194) {
            ctx->pc = 0x4C81ACu;
            goto label_4c81ac;
        }
    }
    ctx->pc = 0x4C819Cu;
label_4c819c:
    // 0x4c819c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_4c81a0:
    if (ctx->pc == 0x4C81A0u) {
        ctx->pc = 0x4C81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C819Cu;
        // 0x4c81a0: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C81A4u;
        goto label_4c81a4;
    }
    ctx->pc = 0x4C819Cu;
    {
        const bool branch_taken_0x4c819c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C819Cu;
        // 0x4c81a0: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c819c) {
            ctx->pc = 0x4C81C8u;
            goto label_4c81c8;
        }
    }
    ctx->pc = 0x4C81A4u;
label_4c81a4:
    // 0x4c81a4: 0x10000187  b           . + 4 + (0x187 << 2)
label_4c81a8:
    if (ctx->pc == 0x4C81A8u) {
        ctx->pc = 0x4C81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C81A4u;
        // 0x4c81a8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C81ACu;
        goto label_4c81ac;
    }
    ctx->pc = 0x4C81A4u;
    {
        const bool branch_taken_0x4c81a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C81A4u;
        // 0x4c81a8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c81a4) {
            ctx->pc = 0x4C87C4u;
            goto label_4c87c4;
        }
    }
    ctx->pc = 0x4C81ACu;
label_4c81ac:
    // 0x4c81ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4c81acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c81b0:
    // 0x4c81b0: 0x10820082  beq         $a0, $v0, . + 4 + (0x82 << 2)
label_4c81b4:
    if (ctx->pc == 0x4C81B4u) {
        ctx->pc = 0x4C81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C81B0u;
        // 0x4c81b4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C81B8u;
        goto label_4c81b8;
    }
    ctx->pc = 0x4C81B0u;
    {
        const bool branch_taken_0x4c81b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C81B0u;
        // 0x4c81b4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c81b0) {
            ctx->pc = 0x4C83BCu;
            goto label_4c83bc;
        }
    }
    ctx->pc = 0x4C81B8u;
label_4c81b8:
    // 0x4c81b8: 0x1082015a  beq         $a0, $v0, . + 4 + (0x15A << 2)
label_4c81bc:
    if (ctx->pc == 0x4C81BCu) {
        ctx->pc = 0x4C81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C81B8u;
        // 0x4c81bc: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C81C0u;
        goto label_4c81c0;
    }
    ctx->pc = 0x4C81B8u;
    {
        const bool branch_taken_0x4c81b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C81B8u;
        // 0x4c81bc: 0x8fa60428  lw          $a2, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c81b8) {
            ctx->pc = 0x4C8724u;
            goto label_4c8724;
        }
    }
    ctx->pc = 0x4C81C0u;
label_4c81c0:
    // 0x4c81c0: 0x10000180  b           . + 4 + (0x180 << 2)
label_4c81c4:
    if (ctx->pc == 0x4C81C4u) {
        ctx->pc = 0x4C81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C81C0u;
        // 0x4c81c4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C81C8u;
        goto label_4c81c8;
    }
    ctx->pc = 0x4C81C0u;
    {
        const bool branch_taken_0x4c81c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C81C0u;
        // 0x4c81c4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c81c0) {
            ctx->pc = 0x4C87C4u;
            goto label_4c87c4;
        }
    }
    ctx->pc = 0x4C81C8u;
label_4c81c8:
    // 0x4c81c8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4c81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c81cc:
    // 0x4c81cc: 0x2903021  addu        $a2, $s4, $s0
    ctx->pc = 0x4c81ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4c81d0:
    // 0x4c81d0: 0x8fa30428  lw          $v1, 0x428($sp)
    ctx->pc = 0x4c81d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c81d4:
    // 0x4c81d4: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c81d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c81d8:
    // 0x4c81d8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4c81d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c81dc:
    // 0x4c81dc: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x4c81dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_4c81e0:
    // 0x4c81e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c81e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c81e4:
    // 0x4c81e4: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x4c81e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_4c81e8:
    // 0x4c81e8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x4c81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_4c81ec:
    // 0x4c81ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c81ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c81f0:
    // 0x4c81f0: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x4c81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_4c81f4:
    // 0x4c81f4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4c81f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c81f8:
    // 0x4c81f8: 0xa0b90000  sb          $t9, 0x0($a1)
    ctx->pc = 0x4c81f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 25));
label_4c81fc:
    // 0x4c81fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c81fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c8200:
    // 0x4c8200: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4c8200u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_4c8204:
    // 0x4c8204: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x4c8204u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_4c8208:
    // 0x4c8208: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4c8208u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4c820c:
    // 0x4c820c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c820cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4c8210:
    // 0x4c8210: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x4c8210u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_4c8214:
    // 0x4c8214: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c8214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c8218:
    // 0x4c8218: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4c8218u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4c821c:
    // 0x4c821c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4c821cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4c8220:
    // 0x4c8220: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c8220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c8224:
    // 0x4c8224: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c8224u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4c8228:
    // 0x4c8228: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x4c8228u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_4c822c:
    // 0x4c822c: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c822cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c8230:
    // 0x4c8230: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4c8230u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4c8234:
    // 0x4c8234: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4c8234u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4c8238:
    // 0x4c8238: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c8238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c823c:
    // 0x4c823c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c823cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4c8240:
    // 0x4c8240: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x4c8240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_4c8244:
    // 0x4c8244: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c8244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c8248:
    // 0x4c8248: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4c8248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4c824c:
    // 0x4c824c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4c824cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4c8250:
    // 0x4c8250: 0x1000015a  b           . + 4 + (0x15A << 2)
label_4c8254:
    if (ctx->pc == 0x4C8254u) {
        ctx->pc = 0x4C8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8250u;
        // 0x4c8254: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8258u;
        goto label_4c8258;
    }
    ctx->pc = 0x4C8250u;
    {
        const bool branch_taken_0x4c8250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8250u;
        // 0x4c8254: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8250) {
            ctx->pc = 0x4C87BCu;
            goto label_4c87bc;
        }
    }
    ctx->pc = 0x4C8258u;
label_4c8258:
    // 0x4c8258: 0x8fa40428  lw          $a0, 0x428($sp)
    ctx->pc = 0x4c8258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c825c:
    // 0x4c825c: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x4c825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4c8260:
    // 0x4c8260: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x4c8260u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_4c8264:
    // 0x4c8264: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x4c8264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4c8268:
    // 0x4c8268: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x4c8268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_4c826c:
    // 0x4c826c: 0xa0590000  sb          $t9, 0x0($v0)
    ctx->pc = 0x4c826cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 25));
label_4c8270:
    // 0x4c8270: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x4c8270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4c8274:
    // 0x4c8274: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x4c8274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4c8278:
    // 0x4c8278: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x4c8278u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c827c:
    // 0x4c827c: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x4c827cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c8280:
    // 0x4c8280: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c8280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c8284:
    // 0x4c8284: 0x2064018  mult        $t0, $s0, $a2
    ctx->pc = 0x4c8284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_4c8288:
    // 0x4c8288: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x4c8288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_4c828c:
    // 0x4c828c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c8290:
    // 0x4c8290: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x4c8290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_4c8294:
    // 0x4c8294: 0x1173021  addu        $a2, $t0, $s7
    ctx->pc = 0x4c8294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_4c8298:
    // 0x4c8298: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x4c8298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4c829c:
    // 0x4c829c: 0x8fa80150  lw          $t0, 0x150($sp)
    ctx->pc = 0x4c829cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4c82a0:
    // 0x4c82a0: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4c82a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c82a4:
    // 0x4c82a4: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x4c82a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c82a8:
    // 0x4c82a8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4c82a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c82ac:
    // 0x4c82ac: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4c82acu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4c82b0:
    // 0x4c82b0: 0xffa203c0  sd          $v0, 0x3C0($sp)
    ctx->pc = 0x4c82b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 960), GPR_U64(ctx, 2));
label_4c82b4:
    // 0x4c82b4: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x4c82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c82b8:
    // 0x4c82b8: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x4c82b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c82bc:
    // 0x4c82bc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4c82bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_4c82c0:
    // 0x4c82c0: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x4c82c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c82c4:
    // 0x4c82c4: 0xffa203c8  sd          $v0, 0x3C8($sp)
    ctx->pc = 0x4c82c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 968), GPR_U64(ctx, 2));
label_4c82c8:
    // 0x4c82c8: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x4c82c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c82cc:
    // 0x4c82cc: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4c82ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c82d0:
    // 0x4c82d0: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4c82d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c82d4:
    // 0x4c82d4: 0xffa203d0  sd          $v0, 0x3D0($sp)
    ctx->pc = 0x4c82d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 976), GPR_U64(ctx, 2));
label_4c82d8:
    // 0x4c82d8: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x4c82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c82dc:
    // 0x4c82dc: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x4c82dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c82e0:
    // 0x4c82e0: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x4c82e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c82e4:
    // 0x4c82e4: 0xffa203d8  sd          $v0, 0x3D8($sp)
    ctx->pc = 0x4c82e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 984), GPR_U64(ctx, 2));
label_4c82e8:
    // 0x4c82e8: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x4c82e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c82ec:
    // 0x4c82ec: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4c82ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c82f0:
    // 0x4c82f0: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4c82f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c82f4:
    // 0x4c82f4: 0xffa203e0  sd          $v0, 0x3E0($sp)
    ctx->pc = 0x4c82f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 992), GPR_U64(ctx, 2));
label_4c82f8:
    // 0x4c82f8: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x4c82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c82fc:
    // 0x4c82fc: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x4c82fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c8300:
    // 0x4c8300: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x4c8300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c8304:
    // 0x4c8304: 0xffa203e8  sd          $v0, 0x3E8($sp)
    ctx->pc = 0x4c8304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1000), GPR_U64(ctx, 2));
label_4c8308:
    // 0x4c8308: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x4c8308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c830c:
    // 0x4c830c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4c830cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c8310:
    // 0x4c8310: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4c8310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c8314:
    // 0x4c8314: 0xffa203f0  sd          $v0, 0x3F0($sp)
    ctx->pc = 0x4c8314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 2));
label_4c8318:
    // 0x4c8318: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x4c8318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c831c:
    // 0x4c831c: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x4c831cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c8320:
    // 0x4c8320: 0xffa303f8  sd          $v1, 0x3F8($sp)
    ctx->pc = 0x4c8320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1016), GPR_U64(ctx, 3));
label_4c8324:
    // 0x4c8324: 0xa7a60340  sh          $a2, 0x340($sp)
    ctx->pc = 0x4c8324u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 832), (uint16_t)GPR_U32(ctx, 6));
label_4c8328:
    // 0x4c8328: 0xafa80150  sw          $t0, 0x150($sp)
    ctx->pc = 0x4c8328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 8));
label_4c832c:
    // 0x4c832c: 0xc134490  jal         func_4D1240
label_4c8330:
    if (ctx->pc == 0x4C8330u) {
        ctx->pc = 0x4C8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C832Cu;
        // 0x4c8330: 0x7fb90440  sq          $t9, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8334u;
        goto label_4c8334;
    }
    ctx->pc = 0x4C832Cu;
    SET_GPR_U32(ctx, 31, 0x4C8334u);
    ctx->pc = 0x4C8330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C832Cu;
    // 0x4c8330: 0x7fb90440  sq          $t9, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1240u, 0x4C832Cu, 0x4C8334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8334u;
label_4c8334:
    // 0x4c8334: 0x8fa80408  lw          $t0, 0x408($sp)
    ctx->pc = 0x4c8334u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_4c8338:
    // 0x4c8338: 0x27a90340  addiu       $t1, $sp, 0x340
    ctx->pc = 0x4c8338u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_4c833c:
    // 0x4c833c: 0x2d020004  sltiu       $v0, $t0, 0x4
    ctx->pc = 0x4c833cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4c8340:
    // 0x4c8340: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4c8344:
    if (ctx->pc == 0x4C8344u) {
        ctx->pc = 0x4C8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8340u;
        // 0x4c8344: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8348u;
        goto label_4c8348;
    }
    ctx->pc = 0x4C8340u;
    {
        const bool branch_taken_0x4c8340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8340u;
        // 0x4c8344: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8340) {
            ctx->pc = 0x4C8364u;
            goto label_4c8364;
        }
    }
    ctx->pc = 0x4C8348u;
label_4c8348:
    // 0x4c8348: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x4c8348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_4c834c:
    // 0x4c834c: 0x2503fffc  addiu       $v1, $t0, -0x4
    ctx->pc = 0x4c834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
label_4c8350:
    // 0x4c8350: 0xafa30408  sw          $v1, 0x408($sp)
    ctx->pc = 0x4c8350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 3));
label_4c8354:
    // 0x4c8354: 0x22102  srl         $a0, $v0, 4
    ctx->pc = 0x4c8354u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c8358:
    // 0x4c8358: 0x3047000f  andi        $a3, $v0, 0xF
    ctx->pc = 0x4c8358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c835c:
    // 0x4c835c: 0x1000000f  b           . + 4 + (0xF << 2)
label_4c8360:
    if (ctx->pc == 0x4C8360u) {
        ctx->pc = 0x4C8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C835Cu;
        // 0x4c8360: 0xafa40400  sw          $a0, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8364u;
        goto label_4c8364;
    }
    ctx->pc = 0x4C835Cu;
    {
        const bool branch_taken_0x4c835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C835Cu;
        // 0x4c8360: 0xafa40400  sw          $a0, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c835c) {
            ctx->pc = 0x4C839Cu;
            goto label_4c839c;
        }
    }
    ctx->pc = 0x4C8364u;
label_4c8364:
    // 0x4c8364: 0x8fa50404  lw          $a1, 0x404($sp)
    ctx->pc = 0x4c8364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_4c8368:
    // 0x4c8368: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c8368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c836c:
    // 0x4c836c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c836cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4c8370:
    // 0x4c8370: 0x8fa60400  lw          $a2, 0x400($sp)
    ctx->pc = 0x4c8370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_4c8374:
    // 0x4c8374: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c8374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c8378:
    // 0x4c8378: 0x2504001c  addiu       $a0, $t0, 0x1C
    ctx->pc = 0x4c8378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_4c837c:
    // 0x4c837c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4c837cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4c8380:
    // 0x4c8380: 0xafa40408  sw          $a0, 0x408($sp)
    ctx->pc = 0x4c8380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 4));
label_4c8384:
    // 0x4c8384: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x4c8384u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_4c8388:
    // 0x4c8388: 0xafa50404  sw          $a1, 0x404($sp)
    ctx->pc = 0x4c8388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 5));
label_4c838c:
    // 0x4c838c: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c838cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_4c8390:
    // 0x4c8390: 0xafa30400  sw          $v1, 0x400($sp)
    ctx->pc = 0x4c8390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 3));
label_4c8394:
    // 0x4c8394: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4c8394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_4c8398:
    // 0x4c8398: 0x30c7000f  andi        $a3, $a2, 0xF
    ctx->pc = 0x4c8398u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_4c839c:
    // 0x4c839c: 0x7fb90440  sq          $t9, 0x440($sp)
    ctx->pc = 0x4c839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 25));
label_4c83a0:
    // 0x4c83a0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4c83a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4c83a4:
    // 0x4c83a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c83a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c83a8:
    // 0x4c83a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c83a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c83ac:
    // 0x4c83ac: 0xc134bf0  jal         func_4D2FC0
label_4c83b0:
    if (ctx->pc == 0x4C83B0u) {
        ctx->pc = 0x4C83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C83ACu;
        // 0x4c83b0: 0x27a803c0  addiu       $t0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C83B4u;
        goto label_4c83b4;
    }
    ctx->pc = 0x4C83ACu;
    SET_GPR_U32(ctx, 31, 0x4C83B4u);
    ctx->pc = 0x4C83B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C83ACu;
    // 0x4c83b0: 0x27a803c0  addiu       $t0, $sp, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2FC0u, 0x4C83ACu, 0x4C83B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C83B4u;
label_4c83b4:
    // 0x4c83b4: 0x10000101  b           . + 4 + (0x101 << 2)
label_4c83b8:
    if (ctx->pc == 0x4C83B8u) {
        ctx->pc = 0x4C83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C83B4u;
        // 0x4c83b8: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C83BCu;
        goto label_4c83bc;
    }
    ctx->pc = 0x4C83B4u;
    {
        const bool branch_taken_0x4c83b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C83B4u;
        // 0x4c83b8: 0x7bb90440  lq          $t9, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c83b4) {
            ctx->pc = 0x4C87BCu;
            goto label_4c87bc;
        }
    }
    ctx->pc = 0x4C83BCu;
label_4c83bc:
    // 0x4c83bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4c83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c83c0:
    // 0x4c83c0: 0x2906021  addu        $t4, $s4, $s0
    ctx->pc = 0x4c83c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4c83c4:
    // 0x4c83c4: 0x8fa30428  lw          $v1, 0x428($sp)
    ctx->pc = 0x4c83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c83c8:
    // 0x4c83c8: 0x1906821  addu        $t5, $t4, $s0
    ctx->pc = 0x4c83c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
label_4c83cc:
    // 0x4c83cc: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x4c83ccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c83d0:
    // 0x4c83d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c83d4:
    // 0x4c83d4: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x4c83d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_4c83d8:
    // 0x4c83d8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x4c83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_4c83dc:
    // 0x4c83dc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x4c83dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c83e0:
    // 0x4c83e0: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x4c83e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_4c83e4:
    // 0x4c83e4: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x4c83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_4c83e8:
    // 0x4c83e8: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x4c83e8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c83ec:
    // 0x4c83ec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x4c83ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_4c83f0:
    // 0x4c83f0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x4c83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_4c83f4:
    // 0x4c83f4: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x4c83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_4c83f8:
    // 0x4c83f8: 0xa0b90000  sb          $t9, 0x0($a1)
    ctx->pc = 0x4c83f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 25));
label_4c83fc:
    // 0x4c83fc: 0x91200  sll         $v0, $t1, 8
    ctx->pc = 0x4c83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_4c8400:
    // 0x4c8400: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x4c8400u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_4c8404:
    // 0x4c8404: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x4c8404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_4c8408:
    // 0x4c8408: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x4c8408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4c840c:
    // 0x4c840c: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x4c840cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_4c8410:
    // 0x4c8410: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x4c8410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_4c8414:
    // 0x4c8414: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4c8414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4c8418:
    // 0x4c8418: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4c8418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4c841c:
    // 0x4c841c: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x4c841cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c8420:
    // 0x4c8420: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x4c8420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_4c8424:
    // 0x4c8424: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4c8424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c8428:
    // 0x4c8428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c8428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c842c:
    // 0x4c842c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c842cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c8430:
    // 0x4c8430: 0x755021  addu        $t2, $v1, $s5
    ctx->pc = 0x4c8430u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4c8434:
    // 0x4c8434: 0x554021  addu        $t0, $v0, $s5
    ctx->pc = 0x4c8434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4c8438:
    // 0x4c8438: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x4c8438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_4c843c:
    // 0x4c843c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4c843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4c8440:
    // 0x4c8440: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4c8440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4c8444:
    // 0x4c8444: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c8444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c8448:
    // 0x4c8448: 0x24cb0001  addiu       $t3, $a2, 0x1
    ctx->pc = 0x4c8448u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4c844c:
    // 0x4c844c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c8450:
    // 0x4c8450: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x4c8450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_4c8454:
    // 0x4c8454: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c8454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4c8458:
    // 0x4c8458: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x4c8458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_4c845c:
    // 0x4c845c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4c845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4c8460:
    // 0x4c8460: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4c8460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4c8464:
    // 0x4c8464: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x4c8464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_4c8468:
    // 0x4c8468: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4c8468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_4c846c:
    // 0x4c846c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c8470:
    // 0x4c8470: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x4c8470u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_4c8474:
    // 0x4c8474: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4c8474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4c8478:
    // 0x4c8478: 0xafab0090  sw          $t3, 0x90($sp)
    ctx->pc = 0x4c8478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 11));
label_4c847c:
    // 0x4c847c: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x4c847cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c8480:
    // 0x4c8480: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4c8480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c8484:
    // 0x4c8484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c8484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c8488:
    // 0x4c8488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c8488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c848c:
    // 0x4c848c: 0x754021  addu        $t0, $v1, $s5
    ctx->pc = 0x4c848cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4c8490:
    // 0x4c8490: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x4c8490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4c8494:
    // 0x4c8494: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x4c8494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_4c8498:
    // 0x4c8498: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4c8498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4c849c:
    // 0x4c849c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c849cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c84a0:
    // 0x4c84a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c84a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c84a4:
    // 0x4c84a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c84a8:
    // 0x4c84a8: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x4c84a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_4c84ac:
    // 0x4c84ac: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c84acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4c84b0:
    // 0x4c84b0: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x4c84b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_4c84b4:
    // 0x4c84b4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4c84b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4c84b8:
    // 0x4c84b8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4c84b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4c84bc:
    // 0x4c84bc: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x4c84bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_4c84c0:
    // 0x4c84c0: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4c84c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
label_4c84c4:
    // 0x4c84c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c84c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c84c8:
    // 0x4c84c8: 0xad820004  sw          $v0, 0x4($t4)
    ctx->pc = 0x4c84c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 2));
label_4c84cc:
    // 0x4c84cc: 0x1b06021  addu        $t4, $t5, $s0
    ctx->pc = 0x4c84ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
label_4c84d0:
    // 0x4c84d0: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x4c84d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4c84d4:
    // 0x4c84d4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4c84d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4c84d8:
    // 0x4c84d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4c84d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4c84dc:
    // 0x4c84dc: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x4c84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c84e0:
    // 0x4c84e0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x4c84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
label_4c84e4:
    // 0x4c84e4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4c84e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c84e8:
    // 0x4c84e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c84ec:
    // 0x4c84ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c84f0:
    // 0x4c84f0: 0x755021  addu        $t2, $v1, $s5
    ctx->pc = 0x4c84f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4c84f4:
    // 0x4c84f4: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x4c84f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4c84f8:
    // 0x4c84f8: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x4c84f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_4c84fc:
    // 0x4c84fc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4c84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4c8500:
    // 0x4c8500: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c8500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c8504:
    // 0x4c8504: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c8504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c8508:
    // 0x4c8508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c8508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c850c:
    // 0x4c850c: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x4c850cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_4c8510:
    // 0x4c8510: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c8510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4c8514:
    // 0x4c8514: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x4c8514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_4c8518:
    // 0x4c8518: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4c8518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4c851c:
    // 0x4c851c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4c851cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4c8520:
    // 0x4c8520: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x4c8520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_4c8524:
    // 0x4c8524: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x4c8524u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
label_4c8528:
    // 0x4c8528: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c8528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c852c:
    // 0x4c852c: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x4c852cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
label_4c8530:
    // 0x4c8530: 0x1906821  addu        $t5, $t4, $s0
    ctx->pc = 0x4c8530u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
label_4c8534:
    // 0x4c8534: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x4c8534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4c8538:
    // 0x4c8538: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4c8538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c853c:
    // 0x4c853c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c8540:
    // 0x4c8540: 0x22102  srl         $a0, $v0, 4
    ctx->pc = 0x4c8540u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c8544:
    // 0x4c8544: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x4c8544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_4c8548:
    // 0x4c8548: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4c8548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c854c:
    // 0x4c854c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4c854cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4c8550:
    // 0x4c8550: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c8550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c8554:
    // 0x4c8554: 0x954021  addu        $t0, $a0, $s5
    ctx->pc = 0x4c8554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_4c8558:
    // 0x4c8558: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x4c8558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4c855c:
    // 0x4c855c: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x4c855cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_4c8560:
    // 0x4c8560: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4c8560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4c8564:
    // 0x4c8564: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c8564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c8568:
    // 0x4c8568: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c8568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c856c:
    // 0x4c856c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c856cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c8570:
    // 0x4c8570: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x4c8570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_4c8574:
    // 0x4c8574: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4c8574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4c8578:
    // 0x4c8578: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x4c8578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_4c857c:
    // 0x4c857c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4c857cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4c8580:
    // 0x4c8580: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4c8580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_4c8584:
    // 0x4c8584: 0x1242024  and         $a0, $t1, $a0
    ctx->pc = 0x4c8584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_4c8588:
    // 0x4c8588: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4c8588u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4c858c:
    // 0x4c858c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4c8590:
    // 0x4c8590: 0xad820004  sw          $v0, 0x4($t4)
    ctx->pc = 0x4c8590u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 2));
label_4c8594:
    // 0x4c8594: 0x1b06021  addu        $t4, $t5, $s0
    ctx->pc = 0x4c8594u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
label_4c8598:
    // 0x4c8598: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x4c8598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4c859c:
    // 0x4c859c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4c859cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4c85a0:
    // 0x4c85a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4c85a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4c85a4:
    // 0x4c85a4: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x4c85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c85a8:
    // 0x4c85a8: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x4c85a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
label_4c85ac:
    // 0x4c85ac: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4c85acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c85b0:
    // 0x4c85b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c85b4:
    // 0x4c85b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c85b8:
    // 0x4c85b8: 0x755021  addu        $t2, $v1, $s5
    ctx->pc = 0x4c85b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4c85bc:
    // 0x4c85bc: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x4c85bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4c85c0:
    // 0x4c85c0: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x4c85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_4c85c4:
    // 0x4c85c4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4c85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4c85c8:
    // 0x4c85c8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c85c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c85cc:
    // 0x4c85cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c85ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c85d0:
    // 0x4c85d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c85d4:
    // 0x4c85d4: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x4c85d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_4c85d8:
    // 0x4c85d8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4c85dc:
    // 0x4c85dc: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x4c85dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_4c85e0:
    // 0x4c85e0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4c85e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4c85e4:
    // 0x4c85e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4c85e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4c85e8:
    // 0x4c85e8: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x4c85e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_4c85ec:
    // 0x4c85ec: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x4c85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
label_4c85f0:
    // 0x4c85f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c85f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c85f4:
    // 0x4c85f4: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x4c85f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
label_4c85f8:
    // 0x4c85f8: 0x1906821  addu        $t5, $t4, $s0
    ctx->pc = 0x4c85f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
label_4c85fc:
    // 0x4c85fc: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x4c85fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4c8600:
    // 0x4c8600: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4c8600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4c8604:
    // 0x4c8604: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4c8604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4c8608:
    // 0x4c8608: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x4c8608u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c860c:
    // 0x4c860c: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x4c860cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
label_4c8610:
    // 0x4c8610: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4c8610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c8614:
    // 0x4c8614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c8614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c8618:
    // 0x4c8618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c8618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c861c:
    // 0x4c861c: 0x755021  addu        $t2, $v1, $s5
    ctx->pc = 0x4c861cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4c8620:
    // 0x4c8620: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x4c8620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4c8624:
    // 0x4c8624: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x4c8624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_4c8628:
    // 0x4c8628: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4c8628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4c862c:
    // 0x4c862c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c862cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c8630:
    // 0x4c8630: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c8630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c8634:
    // 0x4c8634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c8634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c8638:
    // 0x4c8638: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x4c8638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_4c863c:
    // 0x4c863c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4c8640:
    // 0x4c8640: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x4c8640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_4c8644:
    // 0x4c8644: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4c8644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4c8648:
    // 0x4c8648: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4c8648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4c864c:
    // 0x4c864c: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x4c864cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_4c8650:
    // 0x4c8650: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4c8650u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
label_4c8654:
    // 0x4c8654: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c8654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c8658:
    // 0x4c8658: 0xad820004  sw          $v0, 0x4($t4)
    ctx->pc = 0x4c8658u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 2));
label_4c865c:
    // 0x4c865c: 0x1b06021  addu        $t4, $t5, $s0
    ctx->pc = 0x4c865cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
label_4c8660:
    // 0x4c8660: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x4c8660u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4c8664:
    // 0x4c8664: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4c8664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4c8668:
    // 0x4c8668: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4c8668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4c866c:
    // 0x4c866c: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x4c866cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c8670:
    // 0x4c8670: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x4c8670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
label_4c8674:
    // 0x4c8674: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4c8674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c8678:
    // 0x4c8678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c8678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c867c:
    // 0x4c867c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c867cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c8680:
    // 0x4c8680: 0x755021  addu        $t2, $v1, $s5
    ctx->pc = 0x4c8680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4c8684:
    // 0x4c8684: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x4c8684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4c8688:
    // 0x4c8688: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x4c8688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_4c868c:
    // 0x4c868c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4c868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4c8690:
    // 0x4c8690: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c8690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c8694:
    // 0x4c8694: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c8694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c8698:
    // 0x4c8698: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c8698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c869c:
    // 0x4c869c: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x4c869cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_4c86a0:
    // 0x4c86a0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4c86a4:
    // 0x4c86a4: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x4c86a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_4c86a8:
    // 0x4c86a8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4c86a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4c86ac:
    // 0x4c86ac: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4c86acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4c86b0:
    // 0x4c86b0: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x4c86b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_4c86b4:
    // 0x4c86b4: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x4c86b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
label_4c86b8:
    // 0x4c86b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c86b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4c86bc:
    // 0x4c86bc: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x4c86bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
label_4c86c0:
    // 0x4c86c0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x4c86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4c86c4:
    // 0x4c86c4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4c86c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c86c8:
    // 0x4c86c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c86c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c86cc:
    // 0x4c86cc: 0x22102  srl         $a0, $v0, 4
    ctx->pc = 0x4c86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c86d0:
    // 0x4c86d0: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x4c86d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_4c86d4:
    // 0x4c86d4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4c86d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c86d8:
    // 0x4c86d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4c86d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4c86dc:
    // 0x4c86dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c86e0:
    // 0x4c86e0: 0x954021  addu        $t0, $a0, $s5
    ctx->pc = 0x4c86e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_4c86e4:
    // 0x4c86e4: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x4c86e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4c86e8:
    // 0x4c86e8: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x4c86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_4c86ec:
    // 0x4c86ec: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4c86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4c86f0:
    // 0x4c86f0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c86f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c86f4:
    // 0x4c86f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c86f8:
    // 0x4c86f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c86fc:
    // 0x4c86fc: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x4c86fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_4c8700:
    // 0x4c8700: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4c8700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4c8704:
    // 0x4c8704: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x4c8704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_4c8708:
    // 0x4c8708: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c8708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4c870c:
    // 0x4c870c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4c870cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_4c8710:
    // 0x4c8710: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x4c8710u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_4c8714:
    // 0x4c8714: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4c8714u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4c8718:
    // 0x4c8718: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x4c8718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
label_4c871c:
    // 0x4c871c: 0x10000027  b           . + 4 + (0x27 << 2)
label_4c8720:
    if (ctx->pc == 0x4C8720u) {
        ctx->pc = 0x4C8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C871Cu;
        // 0x4c8720: 0xad870004  sw          $a3, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8724u;
        goto label_4c8724;
    }
    ctx->pc = 0x4C871Cu;
    {
        const bool branch_taken_0x4c871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C871Cu;
        // 0x4c8720: 0xad870004  sw          $a3, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c871c) {
            ctx->pc = 0x4C87BCu;
            goto label_4c87bc;
        }
    }
    ctx->pc = 0x4C8724u;
label_4c8724:
    // 0x4c8724: 0x8fa40428  lw          $a0, 0x428($sp)
    ctx->pc = 0x4c8724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c8728:
    // 0x4c8728: 0x2903021  addu        $a2, $s4, $s0
    ctx->pc = 0x4c8728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4c872c:
    // 0x4c872c: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c872cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c8730:
    // 0x4c8730: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x4c8730u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_4c8734:
    // 0x4c8734: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x4c8734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4c8738:
    // 0x4c8738: 0xa0590000  sb          $t9, 0x0($v0)
    ctx->pc = 0x4c8738u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 25));
label_4c873c:
    // 0x4c873c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x4c873cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4c8740:
    // 0x4c8740: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4c8740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c8744:
    // 0x4c8744: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4c8744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c8748:
    // 0x4c8748: 0x24a40040  addiu       $a0, $a1, 0x40
    ctx->pc = 0x4c8748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_4c874c:
    // 0x4c874c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x4c874cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_4c8750:
    // 0x4c8750: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x4c8750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c8754:
    // 0x4c8754: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x4c8754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_4c8758:
    // 0x4c8758: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x4c8758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c875c:
    // 0x4c875c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x4c875cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_4c8760:
    // 0x4c8760: 0x68a20017  ldl         $v0, 0x17($a1)
    ctx->pc = 0x4c8760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c8764:
    // 0x4c8764: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c8764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c8768:
    // 0x4c8768: 0x6ca20010  ldr         $v0, 0x10($a1)
    ctx->pc = 0x4c8768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c876c:
    // 0x4c876c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x4c876cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_4c8770:
    // 0x4c8770: 0x68a3001f  ldl         $v1, 0x1F($a1)
    ctx->pc = 0x4c8770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c8774:
    // 0x4c8774: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c8774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c8778:
    // 0x4c8778: 0x6ca30018  ldr         $v1, 0x18($a1)
    ctx->pc = 0x4c8778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c877c:
    // 0x4c877c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x4c877cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_4c8780:
    // 0x4c8780: 0x68a20027  ldl         $v0, 0x27($a1)
    ctx->pc = 0x4c8780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c8784:
    // 0x4c8784: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c8784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c8788:
    // 0x4c8788: 0x6ca20020  ldr         $v0, 0x20($a1)
    ctx->pc = 0x4c8788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c878c:
    // 0x4c878c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x4c878cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_4c8790:
    // 0x4c8790: 0x68a3002f  ldl         $v1, 0x2F($a1)
    ctx->pc = 0x4c8790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c8794:
    // 0x4c8794: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x4c8794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4c8798:
    // 0x4c8798: 0x6ca30028  ldr         $v1, 0x28($a1)
    ctx->pc = 0x4c8798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c879c:
    // 0x4c879c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x4c879cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_4c87a0:
    // 0x4c87a0: 0x68a40037  ldl         $a0, 0x37($a1)
    ctx->pc = 0x4c87a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4c87a4:
    // 0x4c87a4: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4c87a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4c87a8:
    // 0x4c87a8: 0x6ca40030  ldr         $a0, 0x30($a1)
    ctx->pc = 0x4c87a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4c87ac:
    // 0x4c87ac: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x4c87acu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
label_4c87b0:
    // 0x4c87b0: 0x68a2003f  ldl         $v0, 0x3F($a1)
    ctx->pc = 0x4c87b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c87b4:
    // 0x4c87b4: 0x6ca20038  ldr         $v0, 0x38($a1)
    ctx->pc = 0x4c87b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c87b8:
    // 0x4c87b8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x4c87b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_4c87bc:
    // 0x4c87bc: 0x8fa60428  lw          $a2, 0x428($sp)
    ctx->pc = 0x4c87bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c87c0:
    // 0x4c87c0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x4c87c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_4c87c4:
    // 0x4c87c4: 0x8fa2041c  lw          $v0, 0x41C($sp)
    ctx->pc = 0x4c87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1052)));
label_4c87c8:
    // 0x4c87c8: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x4c87c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_4c87cc:
    // 0x4c87cc: 0x8fa804a0  lw          $t0, 0x4A0($sp)
    ctx->pc = 0x4c87ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_4c87d0:
    // 0x4c87d0: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x4c87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_4c87d4:
    // 0x4c87d4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x4c87d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_4c87d8:
    // 0x4c87d8: 0xafa2041c  sw          $v0, 0x41C($sp)
    ctx->pc = 0x4c87d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1052), GPR_U32(ctx, 2));
label_4c87dc:
    // 0x4c87dc: 0x1440fb32  bnez        $v0, . + 4 + (-0x4CE << 2)
label_4c87e0:
    if (ctx->pc == 0x4C87E0u) {
        ctx->pc = 0x4C87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C87DCu;
        // 0x4c87e0: 0xafa60428  sw          $a2, 0x428($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C87E4u;
        goto label_4c87e4;
    }
    ctx->pc = 0x4C87DCu;
    {
        const bool branch_taken_0x4c87dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C87DCu;
        // 0x4c87e0: 0xafa60428  sw          $a2, 0x428($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c87dc) {
            ctx->pc = 0x4C74A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c74a8;
        }
    }
    ctx->pc = 0x4C87E4u;
label_4c87e4:
    // 0x4c87e4: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x4c87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_4c87e8:
    // 0x4c87e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c87ec:
    // 0x4c87ec: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4c87f0:
    if (ctx->pc == 0x4C87F0u) {
        ctx->pc = 0x4C87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C87ECu;
        // 0x4c87f0: 0x8fb6043c  lw          $s6, 0x43C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C87F4u;
        goto label_4c87f4;
    }
    ctx->pc = 0x4C87ECu;
    {
        const bool branch_taken_0x4c87ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4c87ec) {
            ctx->pc = 0x4C87F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C87ECu;
            // 0x4c87f0: 0x8fb6043c  lw          $s6, 0x43C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1084)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C8804u;
            goto label_4c8804;
        }
    }
    ctx->pc = 0x4C87F4u;
label_4c87f4:
    // 0x4c87f4: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x4c87f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_4c87f8:
    // 0x4c87f8: 0x8fa6043c  lw          $a2, 0x43C($sp)
    ctx->pc = 0x4c87f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1084)));
label_4c87fc:
    // 0x4c87fc: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x4c87fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_4c8800:
    // 0x4c8800: 0xc2b00b  movn        $s6, $a2, $v0
    ctx->pc = 0x4c8800u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 6));
label_4c8804:
    // 0x4c8804: 0x8fa80438  lw          $t0, 0x438($sp)
    ctx->pc = 0x4c8804u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
label_4c8808:
    // 0x4c8808: 0x8fa20424  lw          $v0, 0x424($sp)
    ctx->pc = 0x4c8808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
label_4c880c:
    // 0x4c880c: 0xafa80420  sw          $t0, 0x420($sp)
    ctx->pc = 0x4c880cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 8));
label_4c8810:
    // 0x4c8810: 0x8fa30414  lw          $v1, 0x414($sp)
    ctx->pc = 0x4c8810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1044)));
label_4c8814:
    // 0x4c8814: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x4c8814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c8818:
    // 0x4c8818: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x4c8818u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_4c881c:
    // 0x4c881c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c881cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c8820:
    // 0x4c8820: 0x1440faf5  bnez        $v0, . + 4 + (-0x50B << 2)
label_4c8824:
    if (ctx->pc == 0x4C8824u) {
        ctx->pc = 0x4C8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8820u;
        // 0x4c8824: 0xafa00428  sw          $zero, 0x428($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8828u;
        goto label_4c8828;
    }
    ctx->pc = 0x4C8820u;
    {
        const bool branch_taken_0x4c8820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8820u;
        // 0x4c8824: 0xafa00428  sw          $zero, 0x428($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8820) {
            ctx->pc = 0x4C73F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c73f8;
        }
    }
    ctx->pc = 0x4C8828u;
label_4c8828:
    // 0x4c8828: 0x8fa204b8  lw          $v0, 0x4B8($sp)
    ctx->pc = 0x4c8828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_4c882c:
    // 0x4c882c: 0x8fa40430  lw          $a0, 0x430($sp)
    ctx->pc = 0x4c882cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_4c8830:
    // 0x4c8830: 0xdfb00450  ld          $s0, 0x450($sp)
    ctx->pc = 0x4c8830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_4c8834:
    // 0x4c8834: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4c8834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4c8838:
    // 0x4c8838: 0x8fa20404  lw          $v0, 0x404($sp)
    ctx->pc = 0x4c8838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_4c883c:
    // 0x4c883c: 0xdfb10458  ld          $s1, 0x458($sp)
    ctx->pc = 0x4c883cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
label_4c8840:
    // 0x4c8840: 0xdfb20460  ld          $s2, 0x460($sp)
    ctx->pc = 0x4c8840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_4c8844:
    // 0x4c8844: 0xdfb30468  ld          $s3, 0x468($sp)
    ctx->pc = 0x4c8844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
label_4c8848:
    // 0x4c8848: 0xdfb40470  ld          $s4, 0x470($sp)
    ctx->pc = 0x4c8848u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_4c884c:
    // 0x4c884c: 0xdfb50478  ld          $s5, 0x478($sp)
    ctx->pc = 0x4c884cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1144)));
label_4c8850:
    // 0x4c8850: 0xdfb60480  ld          $s6, 0x480($sp)
    ctx->pc = 0x4c8850u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_4c8854:
    // 0x4c8854: 0xdfb70488  ld          $s7, 0x488($sp)
    ctx->pc = 0x4c8854u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1160)));
label_4c8858:
    // 0x4c8858: 0xdfbe0490  ld          $fp, 0x490($sp)
    ctx->pc = 0x4c8858u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_4c885c:
    // 0x4c885c: 0xdfbf0498  ld          $ra, 0x498($sp)
    ctx->pc = 0x4c885cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1176)));
label_4c8860:
    // 0x4c8860: 0xafa00408  sw          $zero, 0x408($sp)
    ctx->pc = 0x4c8860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 0));
label_4c8864:
    // 0x4c8864: 0x3e00008  jr          $ra
label_4c8868:
    if (ctx->pc == 0x4C8868u) {
        ctx->pc = 0x4C8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8864u;
        // 0x4c8868: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C886Cu;
        goto label_4c886c;
    }
    ctx->pc = 0x4C8864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8864u;
        // 0x4c8868: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C886Cu;
label_4c886c:
    // 0x4c886c: 0x0  nop
    ctx->pc = 0x4c886cu;
    // NOP
    ctx->pc = 0x4c8870u;
}
