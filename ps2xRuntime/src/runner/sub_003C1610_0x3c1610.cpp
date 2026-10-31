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

// Function: sub_003C1610
// Address: 0x3c1610 - 0x3c1b58
void sub_003C1610_0x3c1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1610_0x3c1610");
#endif

    switch (ctx->pc) {
        case 0x3c1610u: goto label_3c1610;
        case 0x3c1614u: goto label_3c1614;
        case 0x3c1618u: goto label_3c1618;
        case 0x3c161cu: goto label_3c161c;
        case 0x3c1620u: goto label_3c1620;
        case 0x3c1624u: goto label_3c1624;
        case 0x3c1628u: goto label_3c1628;
        case 0x3c162cu: goto label_3c162c;
        case 0x3c1630u: goto label_3c1630;
        case 0x3c1634u: goto label_3c1634;
        case 0x3c1638u: goto label_3c1638;
        case 0x3c163cu: goto label_3c163c;
        case 0x3c1640u: goto label_3c1640;
        case 0x3c1644u: goto label_3c1644;
        case 0x3c1648u: goto label_3c1648;
        case 0x3c164cu: goto label_3c164c;
        case 0x3c1650u: goto label_3c1650;
        case 0x3c1654u: goto label_3c1654;
        case 0x3c1658u: goto label_3c1658;
        case 0x3c165cu: goto label_3c165c;
        case 0x3c1660u: goto label_3c1660;
        case 0x3c1664u: goto label_3c1664;
        case 0x3c1668u: goto label_3c1668;
        case 0x3c166cu: goto label_3c166c;
        case 0x3c1670u: goto label_3c1670;
        case 0x3c1674u: goto label_3c1674;
        case 0x3c1678u: goto label_3c1678;
        case 0x3c167cu: goto label_3c167c;
        case 0x3c1680u: goto label_3c1680;
        case 0x3c1684u: goto label_3c1684;
        case 0x3c1688u: goto label_3c1688;
        case 0x3c168cu: goto label_3c168c;
        case 0x3c1690u: goto label_3c1690;
        case 0x3c1694u: goto label_3c1694;
        case 0x3c1698u: goto label_3c1698;
        case 0x3c169cu: goto label_3c169c;
        case 0x3c16a0u: goto label_3c16a0;
        case 0x3c16a4u: goto label_3c16a4;
        case 0x3c16a8u: goto label_3c16a8;
        case 0x3c16acu: goto label_3c16ac;
        case 0x3c16b0u: goto label_3c16b0;
        case 0x3c16b4u: goto label_3c16b4;
        case 0x3c16b8u: goto label_3c16b8;
        case 0x3c16bcu: goto label_3c16bc;
        case 0x3c16c0u: goto label_3c16c0;
        case 0x3c16c4u: goto label_3c16c4;
        case 0x3c16c8u: goto label_3c16c8;
        case 0x3c16ccu: goto label_3c16cc;
        case 0x3c16d0u: goto label_3c16d0;
        case 0x3c16d4u: goto label_3c16d4;
        case 0x3c16d8u: goto label_3c16d8;
        case 0x3c16dcu: goto label_3c16dc;
        case 0x3c16e0u: goto label_3c16e0;
        case 0x3c16e4u: goto label_3c16e4;
        case 0x3c16e8u: goto label_3c16e8;
        case 0x3c16ecu: goto label_3c16ec;
        case 0x3c16f0u: goto label_3c16f0;
        case 0x3c16f4u: goto label_3c16f4;
        case 0x3c16f8u: goto label_3c16f8;
        case 0x3c16fcu: goto label_3c16fc;
        case 0x3c1700u: goto label_3c1700;
        case 0x3c1704u: goto label_3c1704;
        case 0x3c1708u: goto label_3c1708;
        case 0x3c170cu: goto label_3c170c;
        case 0x3c1710u: goto label_3c1710;
        case 0x3c1714u: goto label_3c1714;
        case 0x3c1718u: goto label_3c1718;
        case 0x3c171cu: goto label_3c171c;
        case 0x3c1720u: goto label_3c1720;
        case 0x3c1724u: goto label_3c1724;
        case 0x3c1728u: goto label_3c1728;
        case 0x3c172cu: goto label_3c172c;
        case 0x3c1730u: goto label_3c1730;
        case 0x3c1734u: goto label_3c1734;
        case 0x3c1738u: goto label_3c1738;
        case 0x3c173cu: goto label_3c173c;
        case 0x3c1740u: goto label_3c1740;
        case 0x3c1744u: goto label_3c1744;
        case 0x3c1748u: goto label_3c1748;
        case 0x3c174cu: goto label_3c174c;
        case 0x3c1750u: goto label_3c1750;
        case 0x3c1754u: goto label_3c1754;
        case 0x3c1758u: goto label_3c1758;
        case 0x3c175cu: goto label_3c175c;
        case 0x3c1760u: goto label_3c1760;
        case 0x3c1764u: goto label_3c1764;
        case 0x3c1768u: goto label_3c1768;
        case 0x3c176cu: goto label_3c176c;
        case 0x3c1770u: goto label_3c1770;
        case 0x3c1774u: goto label_3c1774;
        case 0x3c1778u: goto label_3c1778;
        case 0x3c177cu: goto label_3c177c;
        case 0x3c1780u: goto label_3c1780;
        case 0x3c1784u: goto label_3c1784;
        case 0x3c1788u: goto label_3c1788;
        case 0x3c178cu: goto label_3c178c;
        case 0x3c1790u: goto label_3c1790;
        case 0x3c1794u: goto label_3c1794;
        case 0x3c1798u: goto label_3c1798;
        case 0x3c179cu: goto label_3c179c;
        case 0x3c17a0u: goto label_3c17a0;
        case 0x3c17a4u: goto label_3c17a4;
        case 0x3c17a8u: goto label_3c17a8;
        case 0x3c17acu: goto label_3c17ac;
        case 0x3c17b0u: goto label_3c17b0;
        case 0x3c17b4u: goto label_3c17b4;
        case 0x3c17b8u: goto label_3c17b8;
        case 0x3c17bcu: goto label_3c17bc;
        case 0x3c17c0u: goto label_3c17c0;
        case 0x3c17c4u: goto label_3c17c4;
        case 0x3c17c8u: goto label_3c17c8;
        case 0x3c17ccu: goto label_3c17cc;
        case 0x3c17d0u: goto label_3c17d0;
        case 0x3c17d4u: goto label_3c17d4;
        case 0x3c17d8u: goto label_3c17d8;
        case 0x3c17dcu: goto label_3c17dc;
        case 0x3c17e0u: goto label_3c17e0;
        case 0x3c17e4u: goto label_3c17e4;
        case 0x3c17e8u: goto label_3c17e8;
        case 0x3c17ecu: goto label_3c17ec;
        case 0x3c17f0u: goto label_3c17f0;
        case 0x3c17f4u: goto label_3c17f4;
        case 0x3c17f8u: goto label_3c17f8;
        case 0x3c17fcu: goto label_3c17fc;
        case 0x3c1800u: goto label_3c1800;
        case 0x3c1804u: goto label_3c1804;
        case 0x3c1808u: goto label_3c1808;
        case 0x3c180cu: goto label_3c180c;
        case 0x3c1810u: goto label_3c1810;
        case 0x3c1814u: goto label_3c1814;
        case 0x3c1818u: goto label_3c1818;
        case 0x3c181cu: goto label_3c181c;
        case 0x3c1820u: goto label_3c1820;
        case 0x3c1824u: goto label_3c1824;
        case 0x3c1828u: goto label_3c1828;
        case 0x3c182cu: goto label_3c182c;
        case 0x3c1830u: goto label_3c1830;
        case 0x3c1834u: goto label_3c1834;
        case 0x3c1838u: goto label_3c1838;
        case 0x3c183cu: goto label_3c183c;
        case 0x3c1840u: goto label_3c1840;
        case 0x3c1844u: goto label_3c1844;
        case 0x3c1848u: goto label_3c1848;
        case 0x3c184cu: goto label_3c184c;
        case 0x3c1850u: goto label_3c1850;
        case 0x3c1854u: goto label_3c1854;
        case 0x3c1858u: goto label_3c1858;
        case 0x3c185cu: goto label_3c185c;
        case 0x3c1860u: goto label_3c1860;
        case 0x3c1864u: goto label_3c1864;
        case 0x3c1868u: goto label_3c1868;
        case 0x3c186cu: goto label_3c186c;
        case 0x3c1870u: goto label_3c1870;
        case 0x3c1874u: goto label_3c1874;
        case 0x3c1878u: goto label_3c1878;
        case 0x3c187cu: goto label_3c187c;
        case 0x3c1880u: goto label_3c1880;
        case 0x3c1884u: goto label_3c1884;
        case 0x3c1888u: goto label_3c1888;
        case 0x3c188cu: goto label_3c188c;
        case 0x3c1890u: goto label_3c1890;
        case 0x3c1894u: goto label_3c1894;
        case 0x3c1898u: goto label_3c1898;
        case 0x3c189cu: goto label_3c189c;
        case 0x3c18a0u: goto label_3c18a0;
        case 0x3c18a4u: goto label_3c18a4;
        case 0x3c18a8u: goto label_3c18a8;
        case 0x3c18acu: goto label_3c18ac;
        case 0x3c18b0u: goto label_3c18b0;
        case 0x3c18b4u: goto label_3c18b4;
        case 0x3c18b8u: goto label_3c18b8;
        case 0x3c18bcu: goto label_3c18bc;
        case 0x3c18c0u: goto label_3c18c0;
        case 0x3c18c4u: goto label_3c18c4;
        case 0x3c18c8u: goto label_3c18c8;
        case 0x3c18ccu: goto label_3c18cc;
        case 0x3c18d0u: goto label_3c18d0;
        case 0x3c18d4u: goto label_3c18d4;
        case 0x3c18d8u: goto label_3c18d8;
        case 0x3c18dcu: goto label_3c18dc;
        case 0x3c18e0u: goto label_3c18e0;
        case 0x3c18e4u: goto label_3c18e4;
        case 0x3c18e8u: goto label_3c18e8;
        case 0x3c18ecu: goto label_3c18ec;
        case 0x3c18f0u: goto label_3c18f0;
        case 0x3c18f4u: goto label_3c18f4;
        case 0x3c18f8u: goto label_3c18f8;
        case 0x3c18fcu: goto label_3c18fc;
        case 0x3c1900u: goto label_3c1900;
        case 0x3c1904u: goto label_3c1904;
        case 0x3c1908u: goto label_3c1908;
        case 0x3c190cu: goto label_3c190c;
        case 0x3c1910u: goto label_3c1910;
        case 0x3c1914u: goto label_3c1914;
        case 0x3c1918u: goto label_3c1918;
        case 0x3c191cu: goto label_3c191c;
        case 0x3c1920u: goto label_3c1920;
        case 0x3c1924u: goto label_3c1924;
        case 0x3c1928u: goto label_3c1928;
        case 0x3c192cu: goto label_3c192c;
        case 0x3c1930u: goto label_3c1930;
        case 0x3c1934u: goto label_3c1934;
        case 0x3c1938u: goto label_3c1938;
        case 0x3c193cu: goto label_3c193c;
        case 0x3c1940u: goto label_3c1940;
        case 0x3c1944u: goto label_3c1944;
        case 0x3c1948u: goto label_3c1948;
        case 0x3c194cu: goto label_3c194c;
        case 0x3c1950u: goto label_3c1950;
        case 0x3c1954u: goto label_3c1954;
        case 0x3c1958u: goto label_3c1958;
        case 0x3c195cu: goto label_3c195c;
        case 0x3c1960u: goto label_3c1960;
        case 0x3c1964u: goto label_3c1964;
        case 0x3c1968u: goto label_3c1968;
        case 0x3c196cu: goto label_3c196c;
        case 0x3c1970u: goto label_3c1970;
        case 0x3c1974u: goto label_3c1974;
        case 0x3c1978u: goto label_3c1978;
        case 0x3c197cu: goto label_3c197c;
        case 0x3c1980u: goto label_3c1980;
        case 0x3c1984u: goto label_3c1984;
        case 0x3c1988u: goto label_3c1988;
        case 0x3c198cu: goto label_3c198c;
        case 0x3c1990u: goto label_3c1990;
        case 0x3c1994u: goto label_3c1994;
        case 0x3c1998u: goto label_3c1998;
        case 0x3c199cu: goto label_3c199c;
        case 0x3c19a0u: goto label_3c19a0;
        case 0x3c19a4u: goto label_3c19a4;
        case 0x3c19a8u: goto label_3c19a8;
        case 0x3c19acu: goto label_3c19ac;
        case 0x3c19b0u: goto label_3c19b0;
        case 0x3c19b4u: goto label_3c19b4;
        case 0x3c19b8u: goto label_3c19b8;
        case 0x3c19bcu: goto label_3c19bc;
        case 0x3c19c0u: goto label_3c19c0;
        case 0x3c19c4u: goto label_3c19c4;
        case 0x3c19c8u: goto label_3c19c8;
        case 0x3c19ccu: goto label_3c19cc;
        case 0x3c19d0u: goto label_3c19d0;
        case 0x3c19d4u: goto label_3c19d4;
        case 0x3c19d8u: goto label_3c19d8;
        case 0x3c19dcu: goto label_3c19dc;
        case 0x3c19e0u: goto label_3c19e0;
        case 0x3c19e4u: goto label_3c19e4;
        case 0x3c19e8u: goto label_3c19e8;
        case 0x3c19ecu: goto label_3c19ec;
        case 0x3c19f0u: goto label_3c19f0;
        case 0x3c19f4u: goto label_3c19f4;
        case 0x3c19f8u: goto label_3c19f8;
        case 0x3c19fcu: goto label_3c19fc;
        case 0x3c1a00u: goto label_3c1a00;
        case 0x3c1a04u: goto label_3c1a04;
        case 0x3c1a08u: goto label_3c1a08;
        case 0x3c1a0cu: goto label_3c1a0c;
        case 0x3c1a10u: goto label_3c1a10;
        case 0x3c1a14u: goto label_3c1a14;
        case 0x3c1a18u: goto label_3c1a18;
        case 0x3c1a1cu: goto label_3c1a1c;
        case 0x3c1a20u: goto label_3c1a20;
        case 0x3c1a24u: goto label_3c1a24;
        case 0x3c1a28u: goto label_3c1a28;
        case 0x3c1a2cu: goto label_3c1a2c;
        case 0x3c1a30u: goto label_3c1a30;
        case 0x3c1a34u: goto label_3c1a34;
        case 0x3c1a38u: goto label_3c1a38;
        case 0x3c1a3cu: goto label_3c1a3c;
        case 0x3c1a40u: goto label_3c1a40;
        case 0x3c1a44u: goto label_3c1a44;
        case 0x3c1a48u: goto label_3c1a48;
        case 0x3c1a4cu: goto label_3c1a4c;
        case 0x3c1a50u: goto label_3c1a50;
        case 0x3c1a54u: goto label_3c1a54;
        case 0x3c1a58u: goto label_3c1a58;
        case 0x3c1a5cu: goto label_3c1a5c;
        case 0x3c1a60u: goto label_3c1a60;
        case 0x3c1a64u: goto label_3c1a64;
        case 0x3c1a68u: goto label_3c1a68;
        case 0x3c1a6cu: goto label_3c1a6c;
        case 0x3c1a70u: goto label_3c1a70;
        case 0x3c1a74u: goto label_3c1a74;
        case 0x3c1a78u: goto label_3c1a78;
        case 0x3c1a7cu: goto label_3c1a7c;
        case 0x3c1a80u: goto label_3c1a80;
        case 0x3c1a84u: goto label_3c1a84;
        case 0x3c1a88u: goto label_3c1a88;
        case 0x3c1a8cu: goto label_3c1a8c;
        case 0x3c1a90u: goto label_3c1a90;
        case 0x3c1a94u: goto label_3c1a94;
        case 0x3c1a98u: goto label_3c1a98;
        case 0x3c1a9cu: goto label_3c1a9c;
        case 0x3c1aa0u: goto label_3c1aa0;
        case 0x3c1aa4u: goto label_3c1aa4;
        case 0x3c1aa8u: goto label_3c1aa8;
        case 0x3c1aacu: goto label_3c1aac;
        case 0x3c1ab0u: goto label_3c1ab0;
        case 0x3c1ab4u: goto label_3c1ab4;
        case 0x3c1ab8u: goto label_3c1ab8;
        case 0x3c1abcu: goto label_3c1abc;
        case 0x3c1ac0u: goto label_3c1ac0;
        case 0x3c1ac4u: goto label_3c1ac4;
        case 0x3c1ac8u: goto label_3c1ac8;
        case 0x3c1accu: goto label_3c1acc;
        case 0x3c1ad0u: goto label_3c1ad0;
        case 0x3c1ad4u: goto label_3c1ad4;
        case 0x3c1ad8u: goto label_3c1ad8;
        case 0x3c1adcu: goto label_3c1adc;
        case 0x3c1ae0u: goto label_3c1ae0;
        case 0x3c1ae4u: goto label_3c1ae4;
        case 0x3c1ae8u: goto label_3c1ae8;
        case 0x3c1aecu: goto label_3c1aec;
        case 0x3c1af0u: goto label_3c1af0;
        case 0x3c1af4u: goto label_3c1af4;
        case 0x3c1af8u: goto label_3c1af8;
        case 0x3c1afcu: goto label_3c1afc;
        case 0x3c1b00u: goto label_3c1b00;
        case 0x3c1b04u: goto label_3c1b04;
        case 0x3c1b08u: goto label_3c1b08;
        case 0x3c1b0cu: goto label_3c1b0c;
        case 0x3c1b10u: goto label_3c1b10;
        case 0x3c1b14u: goto label_3c1b14;
        case 0x3c1b18u: goto label_3c1b18;
        case 0x3c1b1cu: goto label_3c1b1c;
        case 0x3c1b20u: goto label_3c1b20;
        case 0x3c1b24u: goto label_3c1b24;
        case 0x3c1b28u: goto label_3c1b28;
        case 0x3c1b2cu: goto label_3c1b2c;
        case 0x3c1b30u: goto label_3c1b30;
        case 0x3c1b34u: goto label_3c1b34;
        case 0x3c1b38u: goto label_3c1b38;
        case 0x3c1b3cu: goto label_3c1b3c;
        case 0x3c1b40u: goto label_3c1b40;
        case 0x3c1b44u: goto label_3c1b44;
        case 0x3c1b48u: goto label_3c1b48;
        case 0x3c1b4cu: goto label_3c1b4c;
        case 0x3c1b50u: goto label_3c1b50;
        case 0x3c1b54u: goto label_3c1b54;
        default: break;
    }

    ctx->pc = 0x3c1610u;

label_3c1610:
    // 0x3c1610: 0x27bdfa30  addiu       $sp, $sp, -0x5D0
    ctx->pc = 0x3c1610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965808));
label_3c1614:
    // 0x3c1614: 0x7fb00580  sq          $s0, 0x580($sp)
    ctx->pc = 0x3c1614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 16));
label_3c1618:
    // 0x3c1618: 0x7fb10570  sq          $s1, 0x570($sp)
    ctx->pc = 0x3c1618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 17));
label_3c161c:
    // 0x3c161c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c161cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1620:
    // 0x3c1620: 0x7fb30550  sq          $s3, 0x550($sp)
    ctx->pc = 0x3c1620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 19));
label_3c1624:
    // 0x3c1624: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c1624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c1628:
    // 0x3c1628: 0x7fb60520  sq          $s6, 0x520($sp)
    ctx->pc = 0x3c1628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 22));
label_3c162c:
    // 0x3c162c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c162cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1630:
    // 0x3c1630: 0x7fb20560  sq          $s2, 0x560($sp)
    ctx->pc = 0x3c1630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 18));
label_3c1634:
    // 0x3c1634: 0x7fb40540  sq          $s4, 0x540($sp)
    ctx->pc = 0x3c1634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 20));
label_3c1638:
    // 0x3c1638: 0x7fb50530  sq          $s5, 0x530($sp)
    ctx->pc = 0x3c1638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 21));
label_3c163c:
    // 0x3c163c: 0x7fb70510  sq          $s7, 0x510($sp)
    ctx->pc = 0x3c163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 23));
label_3c1640:
    // 0x3c1640: 0x7fbe0500  sq          $fp, 0x500($sp)
    ctx->pc = 0x3c1640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 30));
label_3c1644:
    // 0x3c1644: 0xffbf04f0  sd          $ra, 0x4F0($sp)
    ctx->pc = 0x3c1644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 31));
label_3c1648:
    // 0x3c1648: 0xe7ba05c0  swc1        $f26, 0x5C0($sp)
    ctx->pc = 0x3c1648u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1472), bits); }
label_3c164c:
    // 0x3c164c: 0xe7b905b8  swc1        $f25, 0x5B8($sp)
    ctx->pc = 0x3c164cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1464), bits); }
label_3c1650:
    // 0x3c1650: 0xe7b805b0  swc1        $f24, 0x5B0($sp)
    ctx->pc = 0x3c1650u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1456), bits); }
label_3c1654:
    // 0x3c1654: 0xe7b705a8  swc1        $f23, 0x5A8($sp)
    ctx->pc = 0x3c1654u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1448), bits); }
label_3c1658:
    // 0x3c1658: 0xe7b605a0  swc1        $f22, 0x5A0($sp)
    ctx->pc = 0x3c1658u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_3c165c:
    // 0x3c165c: 0xe7b50598  swc1        $f21, 0x598($sp)
    ctx->pc = 0x3c165cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1432), bits); }
label_3c1660:
    // 0x3c1660: 0xe7b40590  swc1        $f20, 0x590($sp)
    ctx->pc = 0x3c1660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_3c1664:
    // 0x3c1664: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c1664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c1668:
    // 0x3c1668: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c1668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c166c:
    // 0x3c166c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c1670:
    // 0x3c1670: 0x40f809  jalr        $v0
label_3c1674:
    if (ctx->pc == 0x3C1674u) {
        ctx->pc = 0x3C1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1670u;
        // 0x3c1674: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1678u;
        goto label_3c1678;
    }
    ctx->pc = 0x3C1670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1678u);
        ctx->pc = 0x3C1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1670u;
        // 0x3c1674: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1670u, 0x3C1678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1678u;
label_3c1678:
    // 0x3c1678: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3c1678u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c167c:
    // 0x3c167c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3c167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3c1680:
    // 0x3c1680: 0x12020020  beq         $s0, $v0, . + 4 + (0x20 << 2)
label_3c1684:
    if (ctx->pc == 0x3C1684u) {
        ctx->pc = 0x3C1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1680u;
        // 0x3c1684: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1688u;
        goto label_3c1688;
    }
    ctx->pc = 0x3C1680u;
    {
        const bool branch_taken_0x3c1680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1680u;
        // 0x3c1684: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1680) {
            ctx->pc = 0x3C1704u;
            goto label_3c1704;
        }
    }
    ctx->pc = 0x3C1688u;
label_3c1688:
    // 0x3c1688: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c168c:
    if (ctx->pc == 0x3C168Cu) {
        ctx->pc = 0x3C168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1688u;
        // 0x3c168c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1690u;
        goto label_3c1690;
    }
    ctx->pc = 0x3C1688u;
    {
        const bool branch_taken_0x3c1688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1688u;
        // 0x3c168c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1688) {
            ctx->pc = 0x3C16A0u;
            goto label_3c16a0;
        }
    }
    ctx->pc = 0x3C1690u;
label_3c1690:
    // 0x3c1690: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_3c1694:
    if (ctx->pc == 0x3C1694u) {
        ctx->pc = 0x3C1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1690u;
        // 0x3c1694: 0x7bb00580  lq          $s0, 0x580($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1698u;
        goto label_3c1698;
    }
    ctx->pc = 0x3C1690u;
    {
        const bool branch_taken_0x3c1690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1690u;
        // 0x3c1694: 0x7bb00580  lq          $s0, 0x580($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1690) {
            ctx->pc = 0x3C16BCu;
            goto label_3c16bc;
        }
    }
    ctx->pc = 0x3C1698u;
label_3c1698:
    // 0x3c1698: 0x1000011e  b           . + 4 + (0x11E << 2)
label_3c169c:
    if (ctx->pc == 0x3C169Cu) {
        ctx->pc = 0x3C169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1698u;
        // 0x3c169c: 0x7bb10570  lq          $s1, 0x570($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16A0u;
        goto label_3c16a0;
    }
    ctx->pc = 0x3C1698u;
    {
        const bool branch_taken_0x3c1698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1698u;
        // 0x3c169c: 0x7bb10570  lq          $s1, 0x570($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1698) {
            ctx->pc = 0x3C1B14u;
            goto label_3c1b14;
        }
    }
    ctx->pc = 0x3C16A0u;
label_3c16a0:
    // 0x3c16a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3c16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3c16a4:
    // 0x3c16a4: 0x12020110  beq         $s0, $v0, . + 4 + (0x110 << 2)
label_3c16a8:
    if (ctx->pc == 0x3C16A8u) {
        ctx->pc = 0x3C16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16A4u;
        // 0x3c16a8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16ACu;
        goto label_3c16ac;
    }
    ctx->pc = 0x3C16A4u;
    {
        const bool branch_taken_0x3c16a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16A4u;
        // 0x3c16a8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c16a4) {
            ctx->pc = 0x3C1AE8u;
            goto label_3c1ae8;
        }
    }
    ctx->pc = 0x3C16ACu;
label_3c16ac:
    // 0x3c16ac: 0x12020031  beq         $s0, $v0, . + 4 + (0x31 << 2)
label_3c16b0:
    if (ctx->pc == 0x3C16B0u) {
        ctx->pc = 0x3C16B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16ACu;
        // 0x3c16b0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16B4u;
        goto label_3c16b4;
    }
    ctx->pc = 0x3C16ACu;
    {
        const bool branch_taken_0x3c16ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C16B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16ACu;
        // 0x3c16b0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c16ac) {
            ctx->pc = 0x3C1774u;
            goto label_3c1774;
        }
    }
    ctx->pc = 0x3C16B4u;
label_3c16b4:
    // 0x3c16b4: 0x10000116  b           . + 4 + (0x116 << 2)
label_3c16b8:
    if (ctx->pc == 0x3C16B8u) {
        ctx->pc = 0x3C16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16B4u;
        // 0x3c16b8: 0x7bb00580  lq          $s0, 0x580($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16BCu;
        goto label_3c16bc;
    }
    ctx->pc = 0x3C16B4u;
    {
        const bool branch_taken_0x3c16b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16B4u;
        // 0x3c16b8: 0x7bb00580  lq          $s0, 0x580($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c16b4) {
            ctx->pc = 0x3C1B10u;
            goto label_3c1b10;
        }
    }
    ctx->pc = 0x3C16BCu;
label_3c16bc:
    // 0x3c16bc: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x3c16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3c16c0:
    // 0x3c16c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c16c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c16c4:
    // 0x3c16c4: 0xaec3001c  sw          $v1, 0x1C($s6)
    ctx->pc = 0x3c16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 3));
label_3c16c8:
    // 0x3c16c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c16c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c16cc:
    // 0x3c16cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c16ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c16d0:
    // 0x3c16d0: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x3c16d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
label_3c16d4:
    // 0x3c16d4: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x3c16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
label_3c16d8:
    // 0x3c16d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c16dc:
    // 0x3c16dc: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x3c16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
label_3c16e0:
    // 0x3c16e0: 0xa3a00011  sb          $zero, 0x11($sp)
    ctx->pc = 0x3c16e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
label_3c16e4:
    // 0x3c16e4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3c16e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_3c16e8:
    // 0x3c16e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c16ec:
    // 0x3c16ec: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3c16ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3c16f0:
    // 0x3c16f0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3c16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3c16f4:
    // 0x3c16f4: 0x40f809  jalr        $v0
label_3c16f8:
    if (ctx->pc == 0x3C16F8u) {
        ctx->pc = 0x3C16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16F4u;
        // 0x3c16f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16FCu;
        goto label_3c16fc;
    }
    ctx->pc = 0x3C16F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C16FCu);
        ctx->pc = 0x3C16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16F4u;
        // 0x3c16f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C16F4u, 0x3C16FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C16FCu;
label_3c16fc:
    // 0x3c16fc: 0x10000104  b           . + 4 + (0x104 << 2)
label_3c1700:
    if (ctx->pc == 0x3C1700u) {
        ctx->pc = 0x3C1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16FCu;
        // 0x3c1700: 0x7bb00580  lq          $s0, 0x580($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1704u;
        goto label_3c1704;
    }
    ctx->pc = 0x3C16FCu;
    {
        const bool branch_taken_0x3c16fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16FCu;
        // 0x3c1700: 0x7bb00580  lq          $s0, 0x580($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c16fc) {
            ctx->pc = 0x3C1B10u;
            goto label_3c1b10;
        }
    }
    ctx->pc = 0x3C1704u;
label_3c1704:
    // 0x3c1704: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c1704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c1708:
    // 0x3c1708: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c1708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c170c:
    // 0x3c170c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3c170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3c1710:
    // 0x3c1710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1714:
    // 0x3c1714: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3c1714u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3c1718:
    // 0x3c1718: 0xc0ea158  jal         func_3A8560
label_3c171c:
    if (ctx->pc == 0x3C171Cu) {
        ctx->pc = 0x3C171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1718u;
        // 0x3c171c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1720u;
        goto label_3c1720;
    }
    ctx->pc = 0x3C1718u;
    SET_GPR_U32(ctx, 31, 0x3C1720u);
    ctx->pc = 0x3C171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1718u;
    // 0x3c171c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3C1718u, 0x3C1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1720u;
label_3c1720:
    // 0x3c1720: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c1720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c1724:
    // 0x3c1724: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3c1724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3c1728:
    // 0x3c1728: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c1728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c172c:
    // 0x3c172c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c172cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1730:
    // 0x3c1730: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3c1730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3c1734:
    // 0x3c1734: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c1734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c1738:
    // 0x3c1738: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c1738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c173c:
    // 0x3c173c: 0xc0cd518  jal         func_335460
label_3c1740:
    if (ctx->pc == 0x3C1740u) {
        ctx->pc = 0x3C1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C173Cu;
        // 0x3c1740: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1744u;
        goto label_3c1744;
    }
    ctx->pc = 0x3C173Cu;
    SET_GPR_U32(ctx, 31, 0x3C1744u);
    ctx->pc = 0x3C1740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C173Cu;
    // 0x3c1740: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C173Cu, 0x3C1744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1744u;
label_3c1744:
    // 0x3c1744: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c1744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c1748:
    // 0x3c1748: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c1748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c174c:
    // 0x3c174c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1750:
    // 0x3c1750: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3c1750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3c1754:
    // 0x3c1754: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c1754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c1758:
    // 0x3c1758: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x3c1758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3c175c:
    // 0x3c175c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3c175cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3c1760:
    // 0x3c1760: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3c1760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_3c1764:
    // 0x3c1764: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c1764u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1768:
    // 0x3c1768: 0xc0ea158  jal         func_3A8560
label_3c176c:
    if (ctx->pc == 0x3C176Cu) {
        ctx->pc = 0x3C176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1768u;
        // 0x3c176c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1770u;
        goto label_3c1770;
    }
    ctx->pc = 0x3C1768u;
    SET_GPR_U32(ctx, 31, 0x3C1770u);
    ctx->pc = 0x3C176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1768u;
    // 0x3c176c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3C1768u, 0x3C1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1770u;
label_3c1770:
    // 0x3c1770: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c1770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c1774:
    // 0x3c1774: 0xc0ea12a  jal         func_3A84A8
label_3c1778:
    if (ctx->pc == 0x3C1778u) {
        ctx->pc = 0x3C1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1774u;
        // 0x3c1778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C177Cu;
        goto label_3c177c;
    }
    ctx->pc = 0x3C1774u;
    SET_GPR_U32(ctx, 31, 0x3C177Cu);
    ctx->pc = 0x3C1778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1774u;
    // 0x3c1778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C1774u, 0x3C177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C177Cu;
label_3c177c:
    // 0x3c177c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c177cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c1780:
    // 0x3c1780: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c1780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c1784:
    // 0x3c1784: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c1784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1788:
    // 0x3c1788: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c1788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c178c:
    // 0x3c178c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c178cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1790:
    // 0x3c1790: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3c1790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3c1794:
    // 0x3c1794: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c1794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c1798:
    // 0x3c1798: 0xc0ea12a  jal         func_3A84A8
label_3c179c:
    if (ctx->pc == 0x3C179Cu) {
        ctx->pc = 0x3C179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1798u;
        // 0x3c179c: 0x2610b8b8  addiu       $s0, $s0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C17A0u;
        goto label_3c17a0;
    }
    ctx->pc = 0x3C1798u;
    SET_GPR_U32(ctx, 31, 0x3C17A0u);
    ctx->pc = 0x3C179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1798u;
    // 0x3c179c: 0x2610b8b8  addiu       $s0, $s0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C1798u, 0x3C17A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C17A0u;
label_3c17a0:
    // 0x3c17a0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3c17a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c17a4:
    // 0x3c17a4: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3c17a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3c17a8:
    // 0x3c17a8: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3c17a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3c17ac:
    // 0x3c17ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c17acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c17b0:
    // 0x3c17b0: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3c17b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c17b4:
    // 0x3c17b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c17b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3c17b8:
    // 0x3c17b8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3c17b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3c17bc:
    // 0x3c17bc: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3c17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3c17c0:
    // 0x3c17c0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3c17c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3c17c4:
    // 0x3c17c4: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3c17c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_3c17c8:
    // 0x3c17c8: 0x24a51720  addiu       $a1, $a1, 0x1720
    ctx->pc = 0x3c17c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
label_3c17cc:
    // 0x3c17cc: 0x24c61730  addiu       $a2, $a2, 0x1730
    ctx->pc = 0x3c17ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5936));
label_3c17d0:
    // 0x3c17d0: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x3c17d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c17d4:
    // 0x3c17d4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3c17d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3c17d8:
    // 0x3c17d8: 0x4600a686  mov.s       $f26, $f20
    ctx->pc = 0x3c17d8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[20]);
label_3c17dc:
    // 0x3c17dc: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3c17dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_3c17e0:
    // 0x3c17e0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3c17e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3c17e4:
    // 0x3c17e4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c17e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c17e8:
    // 0x3c17e8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c17e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c17ec:
    // 0x3c17ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c17ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c17f0:
    // 0x3c17f0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c17f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c17f4:
    // 0x3c17f4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x3c17f4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_3c17f8:
    // 0x3c17f8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3c17f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3c17fc:
    // 0x3c17fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3c17fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c1800:
    // 0x3c1800: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c1800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c1804:
    // 0x3c1804: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c1804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c1808:
    // 0x3c1808: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c1808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c180c:
    // 0x3c180c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x3c180cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_3c1810:
    // 0x3c1810: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c1810u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c1814:
    // 0x3c1814: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3c1814u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1818:
    // 0x3c1818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c181c:
    // 0x3c181c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3c181cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3c1820:
    // 0x3c1820: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3c1820u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1824:
    // 0x3c1824: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3c1824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3c1828:
    // 0x3c1828: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3c1828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3c182c:
    // 0x3c182c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3c182cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c1830:
    // 0x3c1830: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3c1830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3c1834:
    // 0x3c1834: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c1834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c1838:
    // 0x3c1838: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c1838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c183c:
    // 0x3c183c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c1840:
    // 0x3c1840: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c1840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c1844:
    // 0x3c1844: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3c1844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3c1848:
    // 0x3c1848: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x3c1848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3c184c:
    // 0x3c184c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3c184cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3c1850:
    // 0x3c1850: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c1850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1854:
    // 0x3c1854: 0x84700070  lh          $s0, 0x70($v1)
    ctx->pc = 0x3c1854u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3c1858:
    // 0x3c1858: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x3c1858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
label_3c185c:
    // 0x3c185c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3c185cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3c1860:
    // 0x3c1860: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3c1860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3c1864:
    // 0x3c1864: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3c1864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3c1868:
    // 0x3c1868: 0xc0cd518  jal         func_335460
label_3c186c:
    if (ctx->pc == 0x3C186Cu) {
        ctx->pc = 0x3C186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1868u;
        // 0x3c186c: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1870u;
        goto label_3c1870;
    }
    ctx->pc = 0x3C1868u;
    SET_GPR_U32(ctx, 31, 0x3C1870u);
    ctx->pc = 0x3C186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1868u;
    // 0x3c186c: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C1868u, 0x3C1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1870u;
label_3c1870:
    // 0x3c1870: 0x3c01bd75  lui         $at, 0xBD75
    ctx->pc = 0x3c1870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48501 << 16));
label_3c1874:
    // 0x3c1874: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3c1874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3c1878:
    // 0x3c1878: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3c1878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3c187c:
    // 0x3c187c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c187cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c1880:
    // 0x3c1880: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c1880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3c1884:
    // 0x3c1884: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x3c1884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_3c1888:
    // 0x3c1888: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3c1888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3c188c:
    // 0x3c188c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3c188cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3c1890:
    // 0x3c1890: 0xc136b24  jal         func_4DAC90
label_3c1894:
    if (ctx->pc == 0x3C1894u) {
        ctx->pc = 0x3C1894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1890u;
        // 0x3c1894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1898u;
        goto label_3c1898;
    }
    ctx->pc = 0x3C1890u;
    SET_GPR_U32(ctx, 31, 0x3C1898u);
    ctx->pc = 0x3C1894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1890u;
    // 0x3c1894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C1890u, 0x3C1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1898u;
label_3c1898:
    // 0x3c1898: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c1898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c189c:
    // 0x3c189c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3c189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c18a0:
    // 0x3c18a0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3c18a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3c18a4:
    // 0x3c18a4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c18a8:
    // 0x3c18a8: 0x40f809  jalr        $v0
label_3c18ac:
    if (ctx->pc == 0x3C18ACu) {
        ctx->pc = 0x3C18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C18A8u;
        // 0x3c18ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C18B0u;
        goto label_3c18b0;
    }
    ctx->pc = 0x3C18A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C18B0u);
        ctx->pc = 0x3C18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C18A8u;
        // 0x3c18ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C18A8u, 0x3C18B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C18B0u;
label_3c18b0:
    // 0x3c18b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c18b4:
    // 0x3c18b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c18b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c18b8:
    // 0x3c18b8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3c18b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3c18bc:
    // 0x3c18bc: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x3c18bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3c18c0:
    // 0x3c18c0: 0xc0f809  jalr        $a2
label_3c18c4:
    if (ctx->pc == 0x3C18C4u) {
        ctx->pc = 0x3C18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C18C0u;
        // 0x3c18c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C18C8u;
        goto label_3c18c8;
    }
    ctx->pc = 0x3C18C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3C18C8u);
        ctx->pc = 0x3C18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C18C0u;
        // 0x3c18c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C18C0u, 0x3C18C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C18C8u;
label_3c18c8:
    // 0x3c18c8: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3c18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3c18cc:
    // 0x3c18cc: 0x3c0304a0  lui         $v1, 0x4A0
    ctx->pc = 0x3c18ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1184 << 16));
label_3c18d0:
    // 0x3c18d0: 0x3c050b3d  lui         $a1, 0xB3D
    ctx->pc = 0x3c18d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2877 << 16));
label_3c18d4:
    // 0x3c18d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c18d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c18d8:
    // 0x3c18d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c18d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c18dc:
    // 0x3c18dc: 0x34a594d2  ori         $a1, $a1, 0x94D2
    ctx->pc = 0x3c18dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38098);
label_3c18e0:
    // 0x3c18e0: 0xc0e9132  jal         func_3A44C8
label_3c18e4:
    if (ctx->pc == 0x3C18E4u) {
        ctx->pc = 0x3C18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C18E0u;
        // 0x3c18e4: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C18E8u;
        goto label_3c18e8;
    }
    ctx->pc = 0x3C18E0u;
    SET_GPR_U32(ctx, 31, 0x3C18E8u);
    ctx->pc = 0x3C18E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C18E0u;
    // 0x3c18e4: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3C18E0u, 0x3C18E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C18E8u;
label_3c18e8:
    // 0x3c18e8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3c18e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c18ec:
    // 0x3c18ec: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x3c18ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3c18f0:
    // 0x3c18f0: 0xafa304e0  sw          $v1, 0x4E0($sp)
    ctx->pc = 0x3c18f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 3));
label_3c18f4:
    // 0x3c18f4: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x3c18f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c18f8:
    // 0x3c18f8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x3c18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_3c18fc:
    // 0x3c18fc: 0xae6200c4  sw          $v0, 0xC4($s3)
    ctx->pc = 0x3c18fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
label_3c1900:
    // 0x3c1900: 0x24622b90  addiu       $v0, $v1, 0x2B90
    ctx->pc = 0x3c1900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11152));
label_3c1904:
    // 0x3c1904: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x3c1904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3c1908:
    // 0x3c1908: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x3c1908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3c190c:
    // 0x3c190c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x3c190cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3c1910:
    // 0x3c1910: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x3c1910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3c1914:
    // 0x3c1914: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x3c1914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c1918:
    // 0x3c1918: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x3c1918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c191c:
    // 0x3c191c: 0xb3a5003f  sdl         $a1, 0x3F($sp)
    ctx->pc = 0x3c191cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c1920:
    // 0x3c1920: 0xb7a50038  sdr         $a1, 0x38($sp)
    ctx->pc = 0x3c1920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c1924:
    // 0x3c1924: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x3c1924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3c1928:
    // 0x3c1928: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x3c1928u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3c192c:
    // 0x3c192c: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x3c192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_3c1930:
    // 0x3c1930: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3c1934:
    if (ctx->pc == 0x3C1934u) {
        ctx->pc = 0x3C1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1930u;
        // 0x3c1934: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1938u;
        goto label_3c1938;
    }
    ctx->pc = 0x3C1930u;
    {
        const bool branch_taken_0x3c1930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1930u;
        // 0x3c1934: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1930) {
            ctx->pc = 0x3C194Cu;
            goto label_3c194c;
        }
    }
    ctx->pc = 0x3C1938u;
label_3c1938:
    // 0x3c1938: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c1938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c193c:
    // 0x3c193c: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x3c193cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_3c1940:
    // 0x3c1940: 0xc0cd4ee  jal         func_3353B8
label_3c1944:
    if (ctx->pc == 0x3C1944u) {
        ctx->pc = 0x3C1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1940u;
        // 0x3c1944: 0x2464b8b8  addiu       $a0, $v1, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1948u;
        goto label_3c1948;
    }
    ctx->pc = 0x3C1940u;
    SET_GPR_U32(ctx, 31, 0x3C1948u);
    ctx->pc = 0x3C1944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1940u;
    // 0x3c1944: 0x2464b8b8  addiu       $a0, $v1, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C1940u, 0x3C1948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1948u;
label_3c1948:
    // 0x3c1948: 0x245e0080  addiu       $fp, $v0, 0x80
    ctx->pc = 0x3c1948u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_3c194c:
    // 0x3c194c: 0x8fa404e0  lw          $a0, 0x4E0($sp)
    ctx->pc = 0x3c194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1248)));
label_3c1950:
    // 0x3c1950: 0xc0e911e  jal         func_3A4478
label_3c1954:
    if (ctx->pc == 0x3C1954u) {
        ctx->pc = 0x3C1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1950u;
        // 0x3c1954: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1958u;
        goto label_3c1958;
    }
    ctx->pc = 0x3C1950u;
    SET_GPR_U32(ctx, 31, 0x3C1958u);
    ctx->pc = 0x3C1954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1950u;
    // 0x3c1954: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3C1950u, 0x3C1958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1958u;
label_3c1958:
    // 0x3c1958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c1958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c195c:
    // 0x3c195c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3c195cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3c1960:
    // 0x3c1960: 0xc0cd518  jal         func_335460
label_3c1964:
    if (ctx->pc == 0x3C1964u) {
        ctx->pc = 0x3C1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1960u;
        // 0x3c1964: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1968u;
        goto label_3c1968;
    }
    ctx->pc = 0x3C1960u;
    SET_GPR_U32(ctx, 31, 0x3C1968u);
    ctx->pc = 0x3C1964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1960u;
    // 0x3c1964: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C1960u, 0x3C1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1968u;
label_3c1968:
    // 0x3c1968: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c1968u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c196c:
    // 0x3c196c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1970:
    // 0x3c1970: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3c1970u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3c1974:
    // 0x3c1974: 0xc0cd518  jal         func_335460
label_3c1978:
    if (ctx->pc == 0x3C1978u) {
        ctx->pc = 0x3C1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1974u;
        // 0x3c1978: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C197Cu;
        goto label_3c197c;
    }
    ctx->pc = 0x3C1974u;
    SET_GPR_U32(ctx, 31, 0x3C197Cu);
    ctx->pc = 0x3C1978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1974u;
    // 0x3c1978: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C1974u, 0x3C197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C197Cu;
label_3c197c:
    // 0x3c197c: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x3c197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_3c1980:
    // 0x3c1980: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c1980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c1984:
    // 0x3c1984: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c1984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1988:
    // 0x3c1988: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c1988u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c198c:
    // 0x3c198c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3c198cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3c1990:
    // 0x3c1990: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c1990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c1994:
    // 0x3c1994: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c1994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c1998:
    // 0x3c1998: 0xc0cd518  jal         func_335460
label_3c199c:
    if (ctx->pc == 0x3C199Cu) {
        ctx->pc = 0x3C199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1998u;
        // 0x3c199c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C19A0u;
        goto label_3c19a0;
    }
    ctx->pc = 0x3C1998u;
    SET_GPR_U32(ctx, 31, 0x3C19A0u);
    ctx->pc = 0x3C199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1998u;
    // 0x3c199c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C1998u, 0x3C19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C19A0u;
label_3c19a0:
    // 0x3c19a0: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x3c19a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3c19a4:
    // 0x3c19a4: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x3c19a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3c19a8:
    // 0x3c19a8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3c19a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3c19ac:
    // 0x3c19ac: 0xe65a000c  swc1        $f26, 0xC($s2)
    ctx->pc = 0x3c19acu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3c19b0:
    // 0x3c19b0: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3c19b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c19b4:
    // 0x3c19b4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c19b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c19b8:
    // 0x3c19b8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3c19b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3c19bc:
    // 0x3c19bc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3c19bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3c19c0:
    // 0x3c19c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c19c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c19c4:
    // 0x3c19c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c19c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c19c8:
    // 0x3c19c8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c19c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c19cc:
    // 0x3c19cc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c19ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c19d0:
    // 0x3c19d0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c19d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c19d4:
    // 0x3c19d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c19d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c19d8:
    // 0x3c19d8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c19d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c19dc:
    // 0x3c19dc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c19dcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c19e0:
    // 0x3c19e0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c19e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c19e4:
    // 0x3c19e4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c19e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c19e8:
    // 0x3c19e8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c19e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c19ec:
    // 0x3c19ec: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c19ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c19f0:
    // 0x3c19f0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c19f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c19f4:
    // 0x3c19f4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c19f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c19f8:
    // 0x3c19f8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c19f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c19fc:
    // 0x3c19fc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c19fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c1a00:
    // 0x3c1a00: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c1a00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c1a04:
    // 0x3c1a04: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c1a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c1a08:
    // 0x3c1a08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c1a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a0c:
    // 0x3c1a0c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c1a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3c1a10:
    // 0x3c1a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a14:
    // 0x3c1a14: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3c1a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3c1a18:
    // 0x3c1a18: 0xc0e90ca  jal         func_3A4328
label_3c1a1c:
    if (ctx->pc == 0x3C1A1Cu) {
        ctx->pc = 0x3C1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A18u;
        // 0x3c1a1c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A20u;
        goto label_3c1a20;
    }
    ctx->pc = 0x3C1A18u;
    SET_GPR_U32(ctx, 31, 0x3C1A20u);
    ctx->pc = 0x3C1A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A18u;
    // 0x3c1a1c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3C1A18u, 0x3C1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1A20u;
label_3c1a20:
    // 0x3c1a20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c1a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a24:
    // 0x3c1a24: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c1a24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c1a28:
    // 0x3c1a28: 0xc0cd518  jal         func_335460
label_3c1a2c:
    if (ctx->pc == 0x3C1A2Cu) {
        ctx->pc = 0x3C1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A28u;
        // 0x3c1a2c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A30u;
        goto label_3c1a30;
    }
    ctx->pc = 0x3C1A28u;
    SET_GPR_U32(ctx, 31, 0x3C1A30u);
    ctx->pc = 0x3C1A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A28u;
    // 0x3c1a2c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C1A28u, 0x3C1A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1A30u;
label_3c1a30:
    // 0x3c1a30: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c1a30u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c1a34:
    // 0x3c1a34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c1a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a38:
    // 0x3c1a38: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c1a38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c1a3c:
    // 0x3c1a3c: 0xc0cd518  jal         func_335460
label_3c1a40:
    if (ctx->pc == 0x3C1A40u) {
        ctx->pc = 0x3C1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A3Cu;
        // 0x3c1a40: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A44u;
        goto label_3c1a44;
    }
    ctx->pc = 0x3C1A3Cu;
    SET_GPR_U32(ctx, 31, 0x3C1A44u);
    ctx->pc = 0x3C1A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A3Cu;
    // 0x3c1a40: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C1A3Cu, 0x3C1A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1A44u;
label_3c1a44:
    // 0x3c1a44: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c1a44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c1a48:
    // 0x3c1a48: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3c1a48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3c1a4c:
    // 0x3c1a4c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c1a4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c1a50:
    // 0x3c1a50: 0xc0cd518  jal         func_335460
label_3c1a54:
    if (ctx->pc == 0x3C1A54u) {
        ctx->pc = 0x3C1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A50u;
        // 0x3c1a54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A58u;
        goto label_3c1a58;
    }
    ctx->pc = 0x3C1A50u;
    SET_GPR_U32(ctx, 31, 0x3C1A58u);
    ctx->pc = 0x3C1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A50u;
    // 0x3c1a54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C1A50u, 0x3C1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1A58u;
label_3c1a58:
    // 0x3c1a58: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3c1a58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3c1a5c:
    // 0x3c1a5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c1a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a60:
    // 0x3c1a60: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3c1a60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3c1a64:
    // 0x3c1a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a68:
    // 0x3c1a68: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3c1a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3c1a6c:
    // 0x3c1a6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a70:
    // 0x3c1a70: 0xe61a000c  swc1        $f26, 0xC($s0)
    ctx->pc = 0x3c1a70u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c1a74:
    // 0x3c1a74: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3c1a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c1a78:
    // 0x3c1a78: 0xc136b18  jal         func_4DAC60
label_3c1a7c:
    if (ctx->pc == 0x3C1A7Cu) {
        ctx->pc = 0x3C1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A78u;
        // 0x3c1a7c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A80u;
        goto label_3c1a80;
    }
    ctx->pc = 0x3C1A78u;
    SET_GPR_U32(ctx, 31, 0x3C1A80u);
    ctx->pc = 0x3C1A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A78u;
    // 0x3c1a7c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C1A78u, 0x3C1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1A80u;
label_3c1a80:
    // 0x3c1a80: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x3c1a80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c1a84:
    // 0x3c1a84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c1a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a88:
    // 0x3c1a88: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c1a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c1a8c:
    // 0x3c1a8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c1a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c1a90:
    // 0x3c1a90: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3c1a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3c1a94:
    // 0x3c1a94: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3c1a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3c1a98:
    // 0x3c1a98: 0xc0cd4ee  jal         func_3353B8
label_3c1a9c:
    if (ctx->pc == 0x3C1A9Cu) {
        ctx->pc = 0x3C1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A98u;
        // 0x3c1a9c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1AA0u;
        goto label_3c1aa0;
    }
    ctx->pc = 0x3C1A98u;
    SET_GPR_U32(ctx, 31, 0x3C1AA0u);
    ctx->pc = 0x3C1A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A98u;
    // 0x3c1a9c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C1A98u, 0x3C1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1AA0u;
label_3c1aa0:
    // 0x3c1aa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c1aa4:
    // 0x3c1aa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1aa8:
    // 0x3c1aa8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3c1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3c1aac:
    // 0x3c1aac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c1aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ab0:
    // 0x3c1ab0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3c1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_3c1ab4:
    // 0x3c1ab4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c1ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ab8:
    // 0x3c1ab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c1abc:
    // 0x3c1abc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c1abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ac0:
    // 0x3c1ac0: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x3c1ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
label_3c1ac4:
    // 0x3c1ac4: 0xc0e9fa6  jal         func_3A7E98
label_3c1ac8:
    if (ctx->pc == 0x3C1AC8u) {
        ctx->pc = 0x3C1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AC4u;
        // 0x3c1ac8: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1ACCu;
        goto label_3c1acc;
    }
    ctx->pc = 0x3C1AC4u;
    SET_GPR_U32(ctx, 31, 0x3C1ACCu);
    ctx->pc = 0x3C1AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1AC4u;
    // 0x3c1ac8: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C1AC4u, 0x3C1ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1ACCu;
label_3c1acc:
    // 0x3c1acc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c1accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c1ad0:
    // 0x3c1ad0: 0x24a42ba0  addiu       $a0, $a1, 0x2BA0
    ctx->pc = 0x3c1ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11168));
label_3c1ad4:
    // 0x3c1ad4: 0xc0f15bc  jal         func_3C56F0
label_3c1ad8:
    if (ctx->pc == 0x3C1AD8u) {
        ctx->pc = 0x3C1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AD4u;
        // 0x3c1ad8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1ADCu;
        goto label_3c1adc;
    }
    ctx->pc = 0x3C1AD4u;
    SET_GPR_U32(ctx, 31, 0x3C1ADCu);
    ctx->pc = 0x3C1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1AD4u;
    // 0x3c1ad8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C1AD4u, 0x3C1ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1ADCu;
label_3c1adc:
    // 0x3c1adc: 0x2ee3000f  sltiu       $v1, $s7, 0xF
    ctx->pc = 0x3c1adcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_3c1ae0:
    // 0x3c1ae0: 0x1460ff93  bnez        $v1, . + 4 + (-0x6D << 2)
label_3c1ae4:
    if (ctx->pc == 0x3C1AE4u) {
        ctx->pc = 0x3C1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AE0u;
        // 0x3c1ae4: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1AE8u;
        goto label_3c1ae8;
    }
    ctx->pc = 0x3C1AE0u;
    {
        const bool branch_taken_0x3c1ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AE0u;
        // 0x3c1ae4: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1ae0) {
            ctx->pc = 0x3C1930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1930;
        }
    }
    ctx->pc = 0x3C1AE8u;
label_3c1ae8:
    // 0x3c1ae8: 0x8ec5002c  lw          $a1, 0x2C($s6)
    ctx->pc = 0x3c1ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_3c1aec:
    // 0x3c1aec: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_3c1af0:
    if (ctx->pc == 0x3C1AF0u) {
        ctx->pc = 0x3C1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AECu;
        // 0x3c1af0: 0x7bb00580  lq          $s0, 0x580($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1AF4u;
        goto label_3c1af4;
    }
    ctx->pc = 0x3C1AECu;
    {
        const bool branch_taken_0x3c1aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AECu;
        // 0x3c1af0: 0x7bb00580  lq          $s0, 0x580($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1aec) {
            ctx->pc = 0x3C1B10u;
            goto label_3c1b10;
        }
    }
    ctx->pc = 0x3C1AF4u;
label_3c1af4:
    // 0x3c1af4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3c1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3c1af8:
    // 0x3c1af8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3c1af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3c1afc:
    // 0x3c1afc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3c1afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3c1b00:
    // 0x3c1b00: 0x60f809  jalr        $v1
label_3c1b04:
    if (ctx->pc == 0x3C1B04u) {
        ctx->pc = 0x3C1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B00u;
        // 0x3c1b04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B08u;
        goto label_3c1b08;
    }
    ctx->pc = 0x3C1B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C1B08u);
        ctx->pc = 0x3C1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B00u;
        // 0x3c1b04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1B00u, 0x3C1B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1B08u;
label_3c1b08:
    // 0x3c1b08: 0xaec0002c  sw          $zero, 0x2C($s6)
    ctx->pc = 0x3c1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 0));
label_3c1b0c:
    // 0x3c1b0c: 0x7bb00580  lq          $s0, 0x580($sp)
    ctx->pc = 0x3c1b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_3c1b10:
    // 0x3c1b10: 0x7bb10570  lq          $s1, 0x570($sp)
    ctx->pc = 0x3c1b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_3c1b14:
    // 0x3c1b14: 0x7bb20560  lq          $s2, 0x560($sp)
    ctx->pc = 0x3c1b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_3c1b18:
    // 0x3c1b18: 0x7bb30550  lq          $s3, 0x550($sp)
    ctx->pc = 0x3c1b18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3c1b1c:
    // 0x3c1b1c: 0x7bb40540  lq          $s4, 0x540($sp)
    ctx->pc = 0x3c1b1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3c1b20:
    // 0x3c1b20: 0x7bb50530  lq          $s5, 0x530($sp)
    ctx->pc = 0x3c1b20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3c1b24:
    // 0x3c1b24: 0x7bb60520  lq          $s6, 0x520($sp)
    ctx->pc = 0x3c1b24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3c1b28:
    // 0x3c1b28: 0x7bb70510  lq          $s7, 0x510($sp)
    ctx->pc = 0x3c1b28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c1b2c:
    // 0x3c1b2c: 0x7bbe0500  lq          $fp, 0x500($sp)
    ctx->pc = 0x3c1b2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3c1b30:
    // 0x3c1b30: 0xdfbf04f0  ld          $ra, 0x4F0($sp)
    ctx->pc = 0x3c1b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
label_3c1b34:
    // 0x3c1b34: 0xc7ba05c0  lwc1        $f26, 0x5C0($sp)
    ctx->pc = 0x3c1b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3c1b38:
    // 0x3c1b38: 0xc7b905b8  lwc1        $f25, 0x5B8($sp)
    ctx->pc = 0x3c1b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3c1b3c:
    // 0x3c1b3c: 0xc7b805b0  lwc1        $f24, 0x5B0($sp)
    ctx->pc = 0x3c1b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3c1b40:
    // 0x3c1b40: 0xc7b705a8  lwc1        $f23, 0x5A8($sp)
    ctx->pc = 0x3c1b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c1b44:
    // 0x3c1b44: 0xc7b605a0  lwc1        $f22, 0x5A0($sp)
    ctx->pc = 0x3c1b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c1b48:
    // 0x3c1b48: 0xc7b50598  lwc1        $f21, 0x598($sp)
    ctx->pc = 0x3c1b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c1b4c:
    // 0x3c1b4c: 0xc7b40590  lwc1        $f20, 0x590($sp)
    ctx->pc = 0x3c1b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c1b50:
    // 0x3c1b50: 0x3e00008  jr          $ra
label_3c1b54:
    if (ctx->pc == 0x3C1B54u) {
        ctx->pc = 0x3C1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B50u;
        // 0x3c1b54: 0x27bd05d0  addiu       $sp, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B58u;
        goto label_fallthrough_0x3c1b50;
    }
    ctx->pc = 0x3C1B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B50u;
        // 0x3c1b54: 0x27bd05d0  addiu       $sp, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c1b50:
    ctx->pc = 0x3C1B58u;
}
