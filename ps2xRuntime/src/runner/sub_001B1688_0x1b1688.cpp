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

// Function: sub_001B1688
// Address: 0x1b1688 - 0x1b1f38
void sub_001B1688_0x1b1688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1688_0x1b1688");
#endif

    switch (ctx->pc) {
        case 0x1b1688u: goto label_1b1688;
        case 0x1b168cu: goto label_1b168c;
        case 0x1b1690u: goto label_1b1690;
        case 0x1b1694u: goto label_1b1694;
        case 0x1b1698u: goto label_1b1698;
        case 0x1b169cu: goto label_1b169c;
        case 0x1b16a0u: goto label_1b16a0;
        case 0x1b16a4u: goto label_1b16a4;
        case 0x1b16a8u: goto label_1b16a8;
        case 0x1b16acu: goto label_1b16ac;
        case 0x1b16b0u: goto label_1b16b0;
        case 0x1b16b4u: goto label_1b16b4;
        case 0x1b16b8u: goto label_1b16b8;
        case 0x1b16bcu: goto label_1b16bc;
        case 0x1b16c0u: goto label_1b16c0;
        case 0x1b16c4u: goto label_1b16c4;
        case 0x1b16c8u: goto label_1b16c8;
        case 0x1b16ccu: goto label_1b16cc;
        case 0x1b16d0u: goto label_1b16d0;
        case 0x1b16d4u: goto label_1b16d4;
        case 0x1b16d8u: goto label_1b16d8;
        case 0x1b16dcu: goto label_1b16dc;
        case 0x1b16e0u: goto label_1b16e0;
        case 0x1b16e4u: goto label_1b16e4;
        case 0x1b16e8u: goto label_1b16e8;
        case 0x1b16ecu: goto label_1b16ec;
        case 0x1b16f0u: goto label_1b16f0;
        case 0x1b16f4u: goto label_1b16f4;
        case 0x1b16f8u: goto label_1b16f8;
        case 0x1b16fcu: goto label_1b16fc;
        case 0x1b1700u: goto label_1b1700;
        case 0x1b1704u: goto label_1b1704;
        case 0x1b1708u: goto label_1b1708;
        case 0x1b170cu: goto label_1b170c;
        case 0x1b1710u: goto label_1b1710;
        case 0x1b1714u: goto label_1b1714;
        case 0x1b1718u: goto label_1b1718;
        case 0x1b171cu: goto label_1b171c;
        case 0x1b1720u: goto label_1b1720;
        case 0x1b1724u: goto label_1b1724;
        case 0x1b1728u: goto label_1b1728;
        case 0x1b172cu: goto label_1b172c;
        case 0x1b1730u: goto label_1b1730;
        case 0x1b1734u: goto label_1b1734;
        case 0x1b1738u: goto label_1b1738;
        case 0x1b173cu: goto label_1b173c;
        case 0x1b1740u: goto label_1b1740;
        case 0x1b1744u: goto label_1b1744;
        case 0x1b1748u: goto label_1b1748;
        case 0x1b174cu: goto label_1b174c;
        case 0x1b1750u: goto label_1b1750;
        case 0x1b1754u: goto label_1b1754;
        case 0x1b1758u: goto label_1b1758;
        case 0x1b175cu: goto label_1b175c;
        case 0x1b1760u: goto label_1b1760;
        case 0x1b1764u: goto label_1b1764;
        case 0x1b1768u: goto label_1b1768;
        case 0x1b176cu: goto label_1b176c;
        case 0x1b1770u: goto label_1b1770;
        case 0x1b1774u: goto label_1b1774;
        case 0x1b1778u: goto label_1b1778;
        case 0x1b177cu: goto label_1b177c;
        case 0x1b1780u: goto label_1b1780;
        case 0x1b1784u: goto label_1b1784;
        case 0x1b1788u: goto label_1b1788;
        case 0x1b178cu: goto label_1b178c;
        case 0x1b1790u: goto label_1b1790;
        case 0x1b1794u: goto label_1b1794;
        case 0x1b1798u: goto label_1b1798;
        case 0x1b179cu: goto label_1b179c;
        case 0x1b17a0u: goto label_1b17a0;
        case 0x1b17a4u: goto label_1b17a4;
        case 0x1b17a8u: goto label_1b17a8;
        case 0x1b17acu: goto label_1b17ac;
        case 0x1b17b0u: goto label_1b17b0;
        case 0x1b17b4u: goto label_1b17b4;
        case 0x1b17b8u: goto label_1b17b8;
        case 0x1b17bcu: goto label_1b17bc;
        case 0x1b17c0u: goto label_1b17c0;
        case 0x1b17c4u: goto label_1b17c4;
        case 0x1b17c8u: goto label_1b17c8;
        case 0x1b17ccu: goto label_1b17cc;
        case 0x1b17d0u: goto label_1b17d0;
        case 0x1b17d4u: goto label_1b17d4;
        case 0x1b17d8u: goto label_1b17d8;
        case 0x1b17dcu: goto label_1b17dc;
        case 0x1b17e0u: goto label_1b17e0;
        case 0x1b17e4u: goto label_1b17e4;
        case 0x1b17e8u: goto label_1b17e8;
        case 0x1b17ecu: goto label_1b17ec;
        case 0x1b17f0u: goto label_1b17f0;
        case 0x1b17f4u: goto label_1b17f4;
        case 0x1b17f8u: goto label_1b17f8;
        case 0x1b17fcu: goto label_1b17fc;
        case 0x1b1800u: goto label_1b1800;
        case 0x1b1804u: goto label_1b1804;
        case 0x1b1808u: goto label_1b1808;
        case 0x1b180cu: goto label_1b180c;
        case 0x1b1810u: goto label_1b1810;
        case 0x1b1814u: goto label_1b1814;
        case 0x1b1818u: goto label_1b1818;
        case 0x1b181cu: goto label_1b181c;
        case 0x1b1820u: goto label_1b1820;
        case 0x1b1824u: goto label_1b1824;
        case 0x1b1828u: goto label_1b1828;
        case 0x1b182cu: goto label_1b182c;
        case 0x1b1830u: goto label_1b1830;
        case 0x1b1834u: goto label_1b1834;
        case 0x1b1838u: goto label_1b1838;
        case 0x1b183cu: goto label_1b183c;
        case 0x1b1840u: goto label_1b1840;
        case 0x1b1844u: goto label_1b1844;
        case 0x1b1848u: goto label_1b1848;
        case 0x1b184cu: goto label_1b184c;
        case 0x1b1850u: goto label_1b1850;
        case 0x1b1854u: goto label_1b1854;
        case 0x1b1858u: goto label_1b1858;
        case 0x1b185cu: goto label_1b185c;
        case 0x1b1860u: goto label_1b1860;
        case 0x1b1864u: goto label_1b1864;
        case 0x1b1868u: goto label_1b1868;
        case 0x1b186cu: goto label_1b186c;
        case 0x1b1870u: goto label_1b1870;
        case 0x1b1874u: goto label_1b1874;
        case 0x1b1878u: goto label_1b1878;
        case 0x1b187cu: goto label_1b187c;
        case 0x1b1880u: goto label_1b1880;
        case 0x1b1884u: goto label_1b1884;
        case 0x1b1888u: goto label_1b1888;
        case 0x1b188cu: goto label_1b188c;
        case 0x1b1890u: goto label_1b1890;
        case 0x1b1894u: goto label_1b1894;
        case 0x1b1898u: goto label_1b1898;
        case 0x1b189cu: goto label_1b189c;
        case 0x1b18a0u: goto label_1b18a0;
        case 0x1b18a4u: goto label_1b18a4;
        case 0x1b18a8u: goto label_1b18a8;
        case 0x1b18acu: goto label_1b18ac;
        case 0x1b18b0u: goto label_1b18b0;
        case 0x1b18b4u: goto label_1b18b4;
        case 0x1b18b8u: goto label_1b18b8;
        case 0x1b18bcu: goto label_1b18bc;
        case 0x1b18c0u: goto label_1b18c0;
        case 0x1b18c4u: goto label_1b18c4;
        case 0x1b18c8u: goto label_1b18c8;
        case 0x1b18ccu: goto label_1b18cc;
        case 0x1b18d0u: goto label_1b18d0;
        case 0x1b18d4u: goto label_1b18d4;
        case 0x1b18d8u: goto label_1b18d8;
        case 0x1b18dcu: goto label_1b18dc;
        case 0x1b18e0u: goto label_1b18e0;
        case 0x1b18e4u: goto label_1b18e4;
        case 0x1b18e8u: goto label_1b18e8;
        case 0x1b18ecu: goto label_1b18ec;
        case 0x1b18f0u: goto label_1b18f0;
        case 0x1b18f4u: goto label_1b18f4;
        case 0x1b18f8u: goto label_1b18f8;
        case 0x1b18fcu: goto label_1b18fc;
        case 0x1b1900u: goto label_1b1900;
        case 0x1b1904u: goto label_1b1904;
        case 0x1b1908u: goto label_1b1908;
        case 0x1b190cu: goto label_1b190c;
        case 0x1b1910u: goto label_1b1910;
        case 0x1b1914u: goto label_1b1914;
        case 0x1b1918u: goto label_1b1918;
        case 0x1b191cu: goto label_1b191c;
        case 0x1b1920u: goto label_1b1920;
        case 0x1b1924u: goto label_1b1924;
        case 0x1b1928u: goto label_1b1928;
        case 0x1b192cu: goto label_1b192c;
        case 0x1b1930u: goto label_1b1930;
        case 0x1b1934u: goto label_1b1934;
        case 0x1b1938u: goto label_1b1938;
        case 0x1b193cu: goto label_1b193c;
        case 0x1b1940u: goto label_1b1940;
        case 0x1b1944u: goto label_1b1944;
        case 0x1b1948u: goto label_1b1948;
        case 0x1b194cu: goto label_1b194c;
        case 0x1b1950u: goto label_1b1950;
        case 0x1b1954u: goto label_1b1954;
        case 0x1b1958u: goto label_1b1958;
        case 0x1b195cu: goto label_1b195c;
        case 0x1b1960u: goto label_1b1960;
        case 0x1b1964u: goto label_1b1964;
        case 0x1b1968u: goto label_1b1968;
        case 0x1b196cu: goto label_1b196c;
        case 0x1b1970u: goto label_1b1970;
        case 0x1b1974u: goto label_1b1974;
        case 0x1b1978u: goto label_1b1978;
        case 0x1b197cu: goto label_1b197c;
        case 0x1b1980u: goto label_1b1980;
        case 0x1b1984u: goto label_1b1984;
        case 0x1b1988u: goto label_1b1988;
        case 0x1b198cu: goto label_1b198c;
        case 0x1b1990u: goto label_1b1990;
        case 0x1b1994u: goto label_1b1994;
        case 0x1b1998u: goto label_1b1998;
        case 0x1b199cu: goto label_1b199c;
        case 0x1b19a0u: goto label_1b19a0;
        case 0x1b19a4u: goto label_1b19a4;
        case 0x1b19a8u: goto label_1b19a8;
        case 0x1b19acu: goto label_1b19ac;
        case 0x1b19b0u: goto label_1b19b0;
        case 0x1b19b4u: goto label_1b19b4;
        case 0x1b19b8u: goto label_1b19b8;
        case 0x1b19bcu: goto label_1b19bc;
        case 0x1b19c0u: goto label_1b19c0;
        case 0x1b19c4u: goto label_1b19c4;
        case 0x1b19c8u: goto label_1b19c8;
        case 0x1b19ccu: goto label_1b19cc;
        case 0x1b19d0u: goto label_1b19d0;
        case 0x1b19d4u: goto label_1b19d4;
        case 0x1b19d8u: goto label_1b19d8;
        case 0x1b19dcu: goto label_1b19dc;
        case 0x1b19e0u: goto label_1b19e0;
        case 0x1b19e4u: goto label_1b19e4;
        case 0x1b19e8u: goto label_1b19e8;
        case 0x1b19ecu: goto label_1b19ec;
        case 0x1b19f0u: goto label_1b19f0;
        case 0x1b19f4u: goto label_1b19f4;
        case 0x1b19f8u: goto label_1b19f8;
        case 0x1b19fcu: goto label_1b19fc;
        case 0x1b1a00u: goto label_1b1a00;
        case 0x1b1a04u: goto label_1b1a04;
        case 0x1b1a08u: goto label_1b1a08;
        case 0x1b1a0cu: goto label_1b1a0c;
        case 0x1b1a10u: goto label_1b1a10;
        case 0x1b1a14u: goto label_1b1a14;
        case 0x1b1a18u: goto label_1b1a18;
        case 0x1b1a1cu: goto label_1b1a1c;
        case 0x1b1a20u: goto label_1b1a20;
        case 0x1b1a24u: goto label_1b1a24;
        case 0x1b1a28u: goto label_1b1a28;
        case 0x1b1a2cu: goto label_1b1a2c;
        case 0x1b1a30u: goto label_1b1a30;
        case 0x1b1a34u: goto label_1b1a34;
        case 0x1b1a38u: goto label_1b1a38;
        case 0x1b1a3cu: goto label_1b1a3c;
        case 0x1b1a40u: goto label_1b1a40;
        case 0x1b1a44u: goto label_1b1a44;
        case 0x1b1a48u: goto label_1b1a48;
        case 0x1b1a4cu: goto label_1b1a4c;
        case 0x1b1a50u: goto label_1b1a50;
        case 0x1b1a54u: goto label_1b1a54;
        case 0x1b1a58u: goto label_1b1a58;
        case 0x1b1a5cu: goto label_1b1a5c;
        case 0x1b1a60u: goto label_1b1a60;
        case 0x1b1a64u: goto label_1b1a64;
        case 0x1b1a68u: goto label_1b1a68;
        case 0x1b1a6cu: goto label_1b1a6c;
        case 0x1b1a70u: goto label_1b1a70;
        case 0x1b1a74u: goto label_1b1a74;
        case 0x1b1a78u: goto label_1b1a78;
        case 0x1b1a7cu: goto label_1b1a7c;
        case 0x1b1a80u: goto label_1b1a80;
        case 0x1b1a84u: goto label_1b1a84;
        case 0x1b1a88u: goto label_1b1a88;
        case 0x1b1a8cu: goto label_1b1a8c;
        case 0x1b1a90u: goto label_1b1a90;
        case 0x1b1a94u: goto label_1b1a94;
        case 0x1b1a98u: goto label_1b1a98;
        case 0x1b1a9cu: goto label_1b1a9c;
        case 0x1b1aa0u: goto label_1b1aa0;
        case 0x1b1aa4u: goto label_1b1aa4;
        case 0x1b1aa8u: goto label_1b1aa8;
        case 0x1b1aacu: goto label_1b1aac;
        case 0x1b1ab0u: goto label_1b1ab0;
        case 0x1b1ab4u: goto label_1b1ab4;
        case 0x1b1ab8u: goto label_1b1ab8;
        case 0x1b1abcu: goto label_1b1abc;
        case 0x1b1ac0u: goto label_1b1ac0;
        case 0x1b1ac4u: goto label_1b1ac4;
        case 0x1b1ac8u: goto label_1b1ac8;
        case 0x1b1accu: goto label_1b1acc;
        case 0x1b1ad0u: goto label_1b1ad0;
        case 0x1b1ad4u: goto label_1b1ad4;
        case 0x1b1ad8u: goto label_1b1ad8;
        case 0x1b1adcu: goto label_1b1adc;
        case 0x1b1ae0u: goto label_1b1ae0;
        case 0x1b1ae4u: goto label_1b1ae4;
        case 0x1b1ae8u: goto label_1b1ae8;
        case 0x1b1aecu: goto label_1b1aec;
        case 0x1b1af0u: goto label_1b1af0;
        case 0x1b1af4u: goto label_1b1af4;
        case 0x1b1af8u: goto label_1b1af8;
        case 0x1b1afcu: goto label_1b1afc;
        case 0x1b1b00u: goto label_1b1b00;
        case 0x1b1b04u: goto label_1b1b04;
        case 0x1b1b08u: goto label_1b1b08;
        case 0x1b1b0cu: goto label_1b1b0c;
        case 0x1b1b10u: goto label_1b1b10;
        case 0x1b1b14u: goto label_1b1b14;
        case 0x1b1b18u: goto label_1b1b18;
        case 0x1b1b1cu: goto label_1b1b1c;
        case 0x1b1b20u: goto label_1b1b20;
        case 0x1b1b24u: goto label_1b1b24;
        case 0x1b1b28u: goto label_1b1b28;
        case 0x1b1b2cu: goto label_1b1b2c;
        case 0x1b1b30u: goto label_1b1b30;
        case 0x1b1b34u: goto label_1b1b34;
        case 0x1b1b38u: goto label_1b1b38;
        case 0x1b1b3cu: goto label_1b1b3c;
        case 0x1b1b40u: goto label_1b1b40;
        case 0x1b1b44u: goto label_1b1b44;
        case 0x1b1b48u: goto label_1b1b48;
        case 0x1b1b4cu: goto label_1b1b4c;
        case 0x1b1b50u: goto label_1b1b50;
        case 0x1b1b54u: goto label_1b1b54;
        case 0x1b1b58u: goto label_1b1b58;
        case 0x1b1b5cu: goto label_1b1b5c;
        case 0x1b1b60u: goto label_1b1b60;
        case 0x1b1b64u: goto label_1b1b64;
        case 0x1b1b68u: goto label_1b1b68;
        case 0x1b1b6cu: goto label_1b1b6c;
        case 0x1b1b70u: goto label_1b1b70;
        case 0x1b1b74u: goto label_1b1b74;
        case 0x1b1b78u: goto label_1b1b78;
        case 0x1b1b7cu: goto label_1b1b7c;
        case 0x1b1b80u: goto label_1b1b80;
        case 0x1b1b84u: goto label_1b1b84;
        case 0x1b1b88u: goto label_1b1b88;
        case 0x1b1b8cu: goto label_1b1b8c;
        case 0x1b1b90u: goto label_1b1b90;
        case 0x1b1b94u: goto label_1b1b94;
        case 0x1b1b98u: goto label_1b1b98;
        case 0x1b1b9cu: goto label_1b1b9c;
        case 0x1b1ba0u: goto label_1b1ba0;
        case 0x1b1ba4u: goto label_1b1ba4;
        case 0x1b1ba8u: goto label_1b1ba8;
        case 0x1b1bacu: goto label_1b1bac;
        case 0x1b1bb0u: goto label_1b1bb0;
        case 0x1b1bb4u: goto label_1b1bb4;
        case 0x1b1bb8u: goto label_1b1bb8;
        case 0x1b1bbcu: goto label_1b1bbc;
        case 0x1b1bc0u: goto label_1b1bc0;
        case 0x1b1bc4u: goto label_1b1bc4;
        case 0x1b1bc8u: goto label_1b1bc8;
        case 0x1b1bccu: goto label_1b1bcc;
        case 0x1b1bd0u: goto label_1b1bd0;
        case 0x1b1bd4u: goto label_1b1bd4;
        case 0x1b1bd8u: goto label_1b1bd8;
        case 0x1b1bdcu: goto label_1b1bdc;
        case 0x1b1be0u: goto label_1b1be0;
        case 0x1b1be4u: goto label_1b1be4;
        case 0x1b1be8u: goto label_1b1be8;
        case 0x1b1becu: goto label_1b1bec;
        case 0x1b1bf0u: goto label_1b1bf0;
        case 0x1b1bf4u: goto label_1b1bf4;
        case 0x1b1bf8u: goto label_1b1bf8;
        case 0x1b1bfcu: goto label_1b1bfc;
        case 0x1b1c00u: goto label_1b1c00;
        case 0x1b1c04u: goto label_1b1c04;
        case 0x1b1c08u: goto label_1b1c08;
        case 0x1b1c0cu: goto label_1b1c0c;
        case 0x1b1c10u: goto label_1b1c10;
        case 0x1b1c14u: goto label_1b1c14;
        case 0x1b1c18u: goto label_1b1c18;
        case 0x1b1c1cu: goto label_1b1c1c;
        case 0x1b1c20u: goto label_1b1c20;
        case 0x1b1c24u: goto label_1b1c24;
        case 0x1b1c28u: goto label_1b1c28;
        case 0x1b1c2cu: goto label_1b1c2c;
        case 0x1b1c30u: goto label_1b1c30;
        case 0x1b1c34u: goto label_1b1c34;
        case 0x1b1c38u: goto label_1b1c38;
        case 0x1b1c3cu: goto label_1b1c3c;
        case 0x1b1c40u: goto label_1b1c40;
        case 0x1b1c44u: goto label_1b1c44;
        case 0x1b1c48u: goto label_1b1c48;
        case 0x1b1c4cu: goto label_1b1c4c;
        case 0x1b1c50u: goto label_1b1c50;
        case 0x1b1c54u: goto label_1b1c54;
        case 0x1b1c58u: goto label_1b1c58;
        case 0x1b1c5cu: goto label_1b1c5c;
        case 0x1b1c60u: goto label_1b1c60;
        case 0x1b1c64u: goto label_1b1c64;
        case 0x1b1c68u: goto label_1b1c68;
        case 0x1b1c6cu: goto label_1b1c6c;
        case 0x1b1c70u: goto label_1b1c70;
        case 0x1b1c74u: goto label_1b1c74;
        case 0x1b1c78u: goto label_1b1c78;
        case 0x1b1c7cu: goto label_1b1c7c;
        case 0x1b1c80u: goto label_1b1c80;
        case 0x1b1c84u: goto label_1b1c84;
        case 0x1b1c88u: goto label_1b1c88;
        case 0x1b1c8cu: goto label_1b1c8c;
        case 0x1b1c90u: goto label_1b1c90;
        case 0x1b1c94u: goto label_1b1c94;
        case 0x1b1c98u: goto label_1b1c98;
        case 0x1b1c9cu: goto label_1b1c9c;
        case 0x1b1ca0u: goto label_1b1ca0;
        case 0x1b1ca4u: goto label_1b1ca4;
        case 0x1b1ca8u: goto label_1b1ca8;
        case 0x1b1cacu: goto label_1b1cac;
        case 0x1b1cb0u: goto label_1b1cb0;
        case 0x1b1cb4u: goto label_1b1cb4;
        case 0x1b1cb8u: goto label_1b1cb8;
        case 0x1b1cbcu: goto label_1b1cbc;
        case 0x1b1cc0u: goto label_1b1cc0;
        case 0x1b1cc4u: goto label_1b1cc4;
        case 0x1b1cc8u: goto label_1b1cc8;
        case 0x1b1cccu: goto label_1b1ccc;
        case 0x1b1cd0u: goto label_1b1cd0;
        case 0x1b1cd4u: goto label_1b1cd4;
        case 0x1b1cd8u: goto label_1b1cd8;
        case 0x1b1cdcu: goto label_1b1cdc;
        case 0x1b1ce0u: goto label_1b1ce0;
        case 0x1b1ce4u: goto label_1b1ce4;
        case 0x1b1ce8u: goto label_1b1ce8;
        case 0x1b1cecu: goto label_1b1cec;
        case 0x1b1cf0u: goto label_1b1cf0;
        case 0x1b1cf4u: goto label_1b1cf4;
        case 0x1b1cf8u: goto label_1b1cf8;
        case 0x1b1cfcu: goto label_1b1cfc;
        case 0x1b1d00u: goto label_1b1d00;
        case 0x1b1d04u: goto label_1b1d04;
        case 0x1b1d08u: goto label_1b1d08;
        case 0x1b1d0cu: goto label_1b1d0c;
        case 0x1b1d10u: goto label_1b1d10;
        case 0x1b1d14u: goto label_1b1d14;
        case 0x1b1d18u: goto label_1b1d18;
        case 0x1b1d1cu: goto label_1b1d1c;
        case 0x1b1d20u: goto label_1b1d20;
        case 0x1b1d24u: goto label_1b1d24;
        case 0x1b1d28u: goto label_1b1d28;
        case 0x1b1d2cu: goto label_1b1d2c;
        case 0x1b1d30u: goto label_1b1d30;
        case 0x1b1d34u: goto label_1b1d34;
        case 0x1b1d38u: goto label_1b1d38;
        case 0x1b1d3cu: goto label_1b1d3c;
        case 0x1b1d40u: goto label_1b1d40;
        case 0x1b1d44u: goto label_1b1d44;
        case 0x1b1d48u: goto label_1b1d48;
        case 0x1b1d4cu: goto label_1b1d4c;
        case 0x1b1d50u: goto label_1b1d50;
        case 0x1b1d54u: goto label_1b1d54;
        case 0x1b1d58u: goto label_1b1d58;
        case 0x1b1d5cu: goto label_1b1d5c;
        case 0x1b1d60u: goto label_1b1d60;
        case 0x1b1d64u: goto label_1b1d64;
        case 0x1b1d68u: goto label_1b1d68;
        case 0x1b1d6cu: goto label_1b1d6c;
        case 0x1b1d70u: goto label_1b1d70;
        case 0x1b1d74u: goto label_1b1d74;
        case 0x1b1d78u: goto label_1b1d78;
        case 0x1b1d7cu: goto label_1b1d7c;
        case 0x1b1d80u: goto label_1b1d80;
        case 0x1b1d84u: goto label_1b1d84;
        case 0x1b1d88u: goto label_1b1d88;
        case 0x1b1d8cu: goto label_1b1d8c;
        case 0x1b1d90u: goto label_1b1d90;
        case 0x1b1d94u: goto label_1b1d94;
        case 0x1b1d98u: goto label_1b1d98;
        case 0x1b1d9cu: goto label_1b1d9c;
        case 0x1b1da0u: goto label_1b1da0;
        case 0x1b1da4u: goto label_1b1da4;
        case 0x1b1da8u: goto label_1b1da8;
        case 0x1b1dacu: goto label_1b1dac;
        case 0x1b1db0u: goto label_1b1db0;
        case 0x1b1db4u: goto label_1b1db4;
        case 0x1b1db8u: goto label_1b1db8;
        case 0x1b1dbcu: goto label_1b1dbc;
        case 0x1b1dc0u: goto label_1b1dc0;
        case 0x1b1dc4u: goto label_1b1dc4;
        case 0x1b1dc8u: goto label_1b1dc8;
        case 0x1b1dccu: goto label_1b1dcc;
        case 0x1b1dd0u: goto label_1b1dd0;
        case 0x1b1dd4u: goto label_1b1dd4;
        case 0x1b1dd8u: goto label_1b1dd8;
        case 0x1b1ddcu: goto label_1b1ddc;
        case 0x1b1de0u: goto label_1b1de0;
        case 0x1b1de4u: goto label_1b1de4;
        case 0x1b1de8u: goto label_1b1de8;
        case 0x1b1decu: goto label_1b1dec;
        case 0x1b1df0u: goto label_1b1df0;
        case 0x1b1df4u: goto label_1b1df4;
        case 0x1b1df8u: goto label_1b1df8;
        case 0x1b1dfcu: goto label_1b1dfc;
        case 0x1b1e00u: goto label_1b1e00;
        case 0x1b1e04u: goto label_1b1e04;
        case 0x1b1e08u: goto label_1b1e08;
        case 0x1b1e0cu: goto label_1b1e0c;
        case 0x1b1e10u: goto label_1b1e10;
        case 0x1b1e14u: goto label_1b1e14;
        case 0x1b1e18u: goto label_1b1e18;
        case 0x1b1e1cu: goto label_1b1e1c;
        case 0x1b1e20u: goto label_1b1e20;
        case 0x1b1e24u: goto label_1b1e24;
        case 0x1b1e28u: goto label_1b1e28;
        case 0x1b1e2cu: goto label_1b1e2c;
        case 0x1b1e30u: goto label_1b1e30;
        case 0x1b1e34u: goto label_1b1e34;
        case 0x1b1e38u: goto label_1b1e38;
        case 0x1b1e3cu: goto label_1b1e3c;
        case 0x1b1e40u: goto label_1b1e40;
        case 0x1b1e44u: goto label_1b1e44;
        case 0x1b1e48u: goto label_1b1e48;
        case 0x1b1e4cu: goto label_1b1e4c;
        case 0x1b1e50u: goto label_1b1e50;
        case 0x1b1e54u: goto label_1b1e54;
        case 0x1b1e58u: goto label_1b1e58;
        case 0x1b1e5cu: goto label_1b1e5c;
        case 0x1b1e60u: goto label_1b1e60;
        case 0x1b1e64u: goto label_1b1e64;
        case 0x1b1e68u: goto label_1b1e68;
        case 0x1b1e6cu: goto label_1b1e6c;
        case 0x1b1e70u: goto label_1b1e70;
        case 0x1b1e74u: goto label_1b1e74;
        case 0x1b1e78u: goto label_1b1e78;
        case 0x1b1e7cu: goto label_1b1e7c;
        case 0x1b1e80u: goto label_1b1e80;
        case 0x1b1e84u: goto label_1b1e84;
        case 0x1b1e88u: goto label_1b1e88;
        case 0x1b1e8cu: goto label_1b1e8c;
        case 0x1b1e90u: goto label_1b1e90;
        case 0x1b1e94u: goto label_1b1e94;
        case 0x1b1e98u: goto label_1b1e98;
        case 0x1b1e9cu: goto label_1b1e9c;
        case 0x1b1ea0u: goto label_1b1ea0;
        case 0x1b1ea4u: goto label_1b1ea4;
        case 0x1b1ea8u: goto label_1b1ea8;
        case 0x1b1eacu: goto label_1b1eac;
        case 0x1b1eb0u: goto label_1b1eb0;
        case 0x1b1eb4u: goto label_1b1eb4;
        case 0x1b1eb8u: goto label_1b1eb8;
        case 0x1b1ebcu: goto label_1b1ebc;
        case 0x1b1ec0u: goto label_1b1ec0;
        case 0x1b1ec4u: goto label_1b1ec4;
        case 0x1b1ec8u: goto label_1b1ec8;
        case 0x1b1eccu: goto label_1b1ecc;
        case 0x1b1ed0u: goto label_1b1ed0;
        case 0x1b1ed4u: goto label_1b1ed4;
        case 0x1b1ed8u: goto label_1b1ed8;
        case 0x1b1edcu: goto label_1b1edc;
        case 0x1b1ee0u: goto label_1b1ee0;
        case 0x1b1ee4u: goto label_1b1ee4;
        case 0x1b1ee8u: goto label_1b1ee8;
        case 0x1b1eecu: goto label_1b1eec;
        case 0x1b1ef0u: goto label_1b1ef0;
        case 0x1b1ef4u: goto label_1b1ef4;
        case 0x1b1ef8u: goto label_1b1ef8;
        case 0x1b1efcu: goto label_1b1efc;
        case 0x1b1f00u: goto label_1b1f00;
        case 0x1b1f04u: goto label_1b1f04;
        case 0x1b1f08u: goto label_1b1f08;
        case 0x1b1f0cu: goto label_1b1f0c;
        case 0x1b1f10u: goto label_1b1f10;
        case 0x1b1f14u: goto label_1b1f14;
        case 0x1b1f18u: goto label_1b1f18;
        case 0x1b1f1cu: goto label_1b1f1c;
        case 0x1b1f20u: goto label_1b1f20;
        case 0x1b1f24u: goto label_1b1f24;
        case 0x1b1f28u: goto label_1b1f28;
        case 0x1b1f2cu: goto label_1b1f2c;
        case 0x1b1f30u: goto label_1b1f30;
        case 0x1b1f34u: goto label_1b1f34;
        default: break;
    }

    ctx->pc = 0x1b1688u;

label_1b1688:
    // 0x1b1688: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b1688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1b168c:
    // 0x1b168c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1b168cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1b1690:
    // 0x1b1690: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1694:
    // 0x1b1694: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1b1694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1b1698:
    // 0x1b1698: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1b1698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1b169c:
    // 0x1b169c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1b169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1b16a0:
    // 0x1b16a0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1b16a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1b16a4:
    // 0x1b16a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b16a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b16a8:
    // 0x1b16a8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1b16a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1b16ac:
    // 0x1b16ac: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1b16acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1b16b0:
    // 0x1b16b0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1b16b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1b16b4:
    // 0x1b16b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b16b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b16b8:
    // 0x1b16b8: 0xc06c590  jal         func_1B1640
label_1b16bc:
    if (ctx->pc == 0x1B16BCu) {
        ctx->pc = 0x1B16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16B8u;
        // 0x1b16bc: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16C0u;
        goto label_1b16c0;
    }
    ctx->pc = 0x1B16B8u;
    SET_GPR_U32(ctx, 31, 0x1B16C0u);
    ctx->pc = 0x1B16BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B16B8u;
    // 0x1b16bc: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1B16B8u, 0x1B16C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16C0u;
label_1b16c0:
    // 0x1b16c0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1b16c4:
    if (ctx->pc == 0x1B16C4u) {
        ctx->pc = 0x1B16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16C0u;
        // 0x1b16c4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16C8u;
        goto label_1b16c8;
    }
    ctx->pc = 0x1B16C0u;
    {
        const bool branch_taken_0x1b16c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16C0u;
        // 0x1b16c4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16c0) {
            ctx->pc = 0x1B16F4u;
            goto label_1b16f4;
        }
    }
    ctx->pc = 0x1B16C8u;
label_1b16c8:
    // 0x1b16c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b16cc:
    // 0x1b16cc: 0x8c62b194  lw          $v0, -0x4E6C($v1)
    ctx->pc = 0x1b16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947220)));
label_1b16d0:
    // 0x1b16d0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b16d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b16d4:
    // 0x1b16d4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1b16d8:
    if (ctx->pc == 0x1B16D8u) {
        ctx->pc = 0x1B16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16D4u;
        // 0x1b16d8: 0x3c140060  lui         $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16DCu;
        goto label_1b16dc;
    }
    ctx->pc = 0x1B16D4u;
    {
        const bool branch_taken_0x1b16d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16D4u;
        // 0x1b16d8: 0x3c140060  lui         $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16d4) {
            ctx->pc = 0x1B174Cu;
            goto label_1b174c;
        }
    }
    ctx->pc = 0x1B16DCu;
label_1b16dc:
    // 0x1b16dc: 0xc047ab8  jal         func_11EAE0
label_1b16e0:
    if (ctx->pc == 0x1B16E0u) {
        ctx->pc = 0x1B16E4u;
        goto label_1b16e4;
    }
    ctx->pc = 0x1B16DCu;
    SET_GPR_U32(ctx, 31, 0x1B16E4u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1B16DCu, 0x1B16E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16E4u;
label_1b16e4:
    // 0x1b16e4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b16e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b16e8:
    // 0x1b16e8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1b16ec:
    if (ctx->pc == 0x1B16ECu) {
        ctx->pc = 0x1B16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16E8u;
        // 0x1b16ec: 0x8e83deb8  lw          $v1, -0x2148($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16F0u;
        goto label_1b16f0;
    }
    ctx->pc = 0x1B16E8u;
    {
        const bool branch_taken_0x1b16e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16E8u;
        // 0x1b16ec: 0x8e83deb8  lw          $v1, -0x2148($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16e8) {
            ctx->pc = 0x1B1750u;
            goto label_1b1750;
        }
    }
    ctx->pc = 0x1B16F0u;
label_1b16f0:
    // 0x1b16f0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1b16f4:
    // 0x1b16f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b16f8:
    // 0x1b16f8: 0x8c4325d8  lw          $v1, 0x25D8($v0)
    ctx->pc = 0x1b16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9688)));
label_1b16fc:
    // 0x1b16fc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1b1700:
    if (ctx->pc == 0x1B1700u) {
        ctx->pc = 0x1B1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16FCu;
        // 0x1b1700: 0x3c140060  lui         $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1704u;
        goto label_1b1704;
    }
    ctx->pc = 0x1B16FCu;
    {
        const bool branch_taken_0x1b16fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16FCu;
        // 0x1b1700: 0x3c140060  lui         $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16fc) {
            ctx->pc = 0x1B174Cu;
            goto label_1b174c;
        }
    }
    ctx->pc = 0x1B1704u;
label_1b1704:
    // 0x1b1704: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b1704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b1708:
    // 0x1b1708: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b1708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b170c:
    // 0x1b170c: 0x344237e0  ori         $v0, $v0, 0x37E0
    ctx->pc = 0x1b170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14304);
label_1b1710:
    // 0x1b1710: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1b1710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1714:
    // 0x1b1714: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b1714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1718:
    // 0x1b1718: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b1718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b171c:
    // 0x1b171c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b171cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b1720:
    // 0x1b1720: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1b1720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1b1724:
    // 0x1b1724: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1b1724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1b1728:
    // 0x1b1728: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1b1728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1b172c:
    // 0x1b172c: 0x40f809  jalr        $v0
label_1b1730:
    if (ctx->pc == 0x1B1730u) {
        ctx->pc = 0x1B1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B172Cu;
        // 0x1b1730: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1734u;
        goto label_1b1734;
    }
    ctx->pc = 0x1B172Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1734u);
        ctx->pc = 0x1B1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B172Cu;
        // 0x1b1730: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B172Cu, 0x1B1734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1734u;
label_1b1734:
    // 0x1b1734: 0x2e620013  sltiu       $v0, $s3, 0x13
    ctx->pc = 0x1b1734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1b1738:
    // 0x1b1738: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1b173c:
    if (ctx->pc == 0x1B173Cu) {
        ctx->pc = 0x1B173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1738u;
        // 0x1b173c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1740u;
        goto label_1b1740;
    }
    ctx->pc = 0x1B1738u;
    {
        const bool branch_taken_0x1b1738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1738u;
        // 0x1b173c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1738) {
            ctx->pc = 0x1B1718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1718;
        }
    }
    ctx->pc = 0x1B1740u;
label_1b1740:
    // 0x1b1740: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b1740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1b1744:
    // 0x1b1744: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b1744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1748:
    // 0x1b1748: 0xac4025d8  sw          $zero, 0x25D8($v0)
    ctx->pc = 0x1b1748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9688), GPR_U32(ctx, 0));
label_1b174c:
    // 0x1b174c: 0x8e83deb8  lw          $v1, -0x2148($s4)
    ctx->pc = 0x1b174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958776)));
label_1b1750:
    // 0x1b1750: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x1b1750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_1b1754:
    // 0x1b1754: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1b1758:
    if (ctx->pc == 0x1B1758u) {
        ctx->pc = 0x1B1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1754u;
        // 0x1b1758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B175Cu;
        goto label_1b175c;
    }
    ctx->pc = 0x1B1754u;
    {
        const bool branch_taken_0x1b1754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1754u;
        // 0x1b1758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1754) {
            ctx->pc = 0x1B177Cu;
            goto label_1b177c;
        }
    }
    ctx->pc = 0x1B175Cu;
label_1b175c:
    // 0x1b175c: 0xc46101ec  lwc1        $f1, 0x1EC($v1)
    ctx->pc = 0x1b175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1760:
    // 0x1b1760: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1764:
    // 0x1b1764: 0x0  nop
    ctx->pc = 0x1b1764u;
    // NOP
label_1b1768:
    // 0x1b1768: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b1768u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b176c:
    // 0x1b176c: 0x0  nop
    ctx->pc = 0x1b176cu;
    // NOP
label_1b1770:
    // 0x1b1770: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_1b1774:
    if (ctx->pc == 0x1B1774u) {
        ctx->pc = 0x1B1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1770u;
        // 0x1b1774: 0x34049350  ori         $a0, $zero, 0x9350 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37712);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1778u;
        goto label_1b1778;
    }
    ctx->pc = 0x1B1770u;
    {
        const bool branch_taken_0x1b1770 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1770u;
        // 0x1b1774: 0x34049350  ori         $a0, $zero, 0x9350 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37712);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1770) {
            ctx->pc = 0x1B17D8u;
            goto label_1b17d8;
        }
    }
    ctx->pc = 0x1B1778u;
label_1b1778:
    // 0x1b1778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b177c:
    // 0x1b177c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b177cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b1780:
    // 0x1b1780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1784:
    // 0x1b1784: 0xae423f14  sw          $v0, 0x3F14($s2)
    ctx->pc = 0x1b1784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16148), GPR_U32(ctx, 2));
label_1b1788:
    // 0x1b1788: 0xae4215d4  sw          $v0, 0x15D4($s2)
    ctx->pc = 0x1b1788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5588), GPR_U32(ctx, 2));
label_1b178c:
    // 0x1b178c: 0xc06c996  jal         func_1B2658
label_1b1790:
    if (ctx->pc == 0x1B1790u) {
        ctx->pc = 0x1B1790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B178Cu;
        // 0x1b1790: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1794u;
        goto label_1b1794;
    }
    ctx->pc = 0x1B178Cu;
    SET_GPR_U32(ctx, 31, 0x1B1794u);
    ctx->pc = 0x1B1790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B178Cu;
    // 0x1b1790: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1B178Cu, 0x1B1794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1794u;
label_1b1794:
    // 0x1b1794: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b1794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1798:
    // 0x1b1798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b1798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b179c:
    // 0x1b179c: 0xc06c996  jal         func_1B2658
label_1b17a0:
    if (ctx->pc == 0x1B17A0u) {
        ctx->pc = 0x1B17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B179Cu;
        // 0x1b17a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17A4u;
        goto label_1b17a4;
    }
    ctx->pc = 0x1B179Cu;
    SET_GPR_U32(ctx, 31, 0x1B17A4u);
    ctx->pc = 0x1B17A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B179Cu;
    // 0x1b17a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1B179Cu, 0x1B17A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17A4u;
label_1b17a4:
    // 0x1b17a4: 0x0  nop
    ctx->pc = 0x1b17a4u;
    // NOP
label_1b17a8:
    // 0x1b17a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b17a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b17ac:
    // 0x1b17ac: 0x24441ef0  addiu       $a0, $v0, 0x1EF0
    ctx->pc = 0x1b17acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_1b17b0:
    // 0x1b17b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b17b4:
    // 0x1b17b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1b17b8:
    if (ctx->pc == 0x1B17B8u) {
        ctx->pc = 0x1B17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17B4u;
        // 0x1b17b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17BCu;
        goto label_1b17bc;
    }
    ctx->pc = 0x1B17B4u;
    {
        const bool branch_taken_0x1b17b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17B4u;
        // 0x1b17b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17b4) {
            ctx->pc = 0x1B17C4u;
            goto label_1b17c4;
        }
    }
    ctx->pc = 0x1B17BCu;
label_1b17bc:
    // 0x1b17bc: 0xc069b16  jal         func_1A6C58
label_1b17c0:
    if (ctx->pc == 0x1B17C0u) {
        ctx->pc = 0x1B17C4u;
        goto label_1b17c4;
    }
    ctx->pc = 0x1B17BCu;
    SET_GPR_U32(ctx, 31, 0x1B17C4u);
    ctx->pc = 0x1A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6C58u, 0x1B17BCu, 0x1B17C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17C4u;
label_1b17c4:
    // 0x1b17c4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1b17c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b17c8:
    // 0x1b17c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1b17cc:
    if (ctx->pc == 0x1B17CCu) {
        ctx->pc = 0x1B17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17C8u;
        // 0x1b17cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17D0u;
        goto label_1b17d0;
    }
    ctx->pc = 0x1B17C8u;
    {
        const bool branch_taken_0x1b17c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17C8u;
        // 0x1b17cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17c8) {
            ctx->pc = 0x1B17A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b17a8;
        }
    }
    ctx->pc = 0x1B17D0u;
label_1b17d0:
    // 0x1b17d0: 0x100001cc  b           . + 4 + (0x1CC << 2)
label_1b17d4:
    if (ctx->pc == 0x1B17D4u) {
        ctx->pc = 0x1B17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17D0u;
        // 0x1b17d4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17D8u;
        goto label_1b17d8;
    }
    ctx->pc = 0x1B17D0u;
    {
        const bool branch_taken_0x1b17d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17D0u;
        // 0x1b17d4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17d0) {
            ctx->pc = 0x1B1F04u;
            goto label_1b1f04;
        }
    }
    ctx->pc = 0x1B17D8u;
label_1b17d8:
    // 0x1b17d8: 0xc06ec70  jal         func_1BB1C0
label_1b17dc:
    if (ctx->pc == 0x1B17DCu) {
        ctx->pc = 0x1B17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17D8u;
        // 0x1b17dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17E0u;
        goto label_1b17e0;
    }
    ctx->pc = 0x1B17D8u;
    SET_GPR_U32(ctx, 31, 0x1B17E0u);
    ctx->pc = 0x1B17DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17D8u;
    // 0x1b17dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1B17D8u, 0x1B17E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17E0u;
label_1b17e0:
    // 0x1b17e0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b17e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b17e4:
    // 0x1b17e4: 0x34848e60  ori         $a0, $a0, 0x8E60
    ctx->pc = 0x1b17e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36448);
label_1b17e8:
    // 0x1b17e8: 0xc072d06  jal         func_1CB418
label_1b17ec:
    if (ctx->pc == 0x1B17ECu) {
        ctx->pc = 0x1B17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17E8u;
        // 0x1b17ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17F0u;
        goto label_1b17f0;
    }
    ctx->pc = 0x1B17E8u;
    SET_GPR_U32(ctx, 31, 0x1B17F0u);
    ctx->pc = 0x1B17ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17E8u;
    // 0x1b17ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB418u, 0x1B17E8u, 0x1B17F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17F0u;
label_1b17f0:
    // 0x1b17f0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b17f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b17f4:
    // 0x1b17f4: 0x34848d30  ori         $a0, $a0, 0x8D30
    ctx->pc = 0x1b17f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36144);
label_1b17f8:
    // 0x1b17f8: 0xc072b96  jal         func_1CAE58
label_1b17fc:
    if (ctx->pc == 0x1B17FCu) {
        ctx->pc = 0x1B17FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17F8u;
        // 0x1b17fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1800u;
        goto label_1b1800;
    }
    ctx->pc = 0x1B17F8u;
    SET_GPR_U32(ctx, 31, 0x1B1800u);
    ctx->pc = 0x1B17FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17F8u;
    // 0x1b17fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAE58u, 0x1B17F8u, 0x1B1800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1800u;
label_1b1800:
    // 0x1b1800: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_1b1804:
    if (ctx->pc == 0x1B1804u) {
        ctx->pc = 0x1B1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1800u;
        // 0x1b1804: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1808u;
        goto label_1b1808;
    }
    ctx->pc = 0x1B1800u;
    {
        const bool branch_taken_0x1b1800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1800u;
        // 0x1b1804: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1800) {
            ctx->pc = 0x1B1938u;
            goto label_1b1938;
        }
    }
    ctx->pc = 0x1B1808u;
label_1b1808:
    // 0x1b1808: 0xc080ffa  jal         func_203FE8
label_1b180c:
    if (ctx->pc == 0x1B180Cu) {
        ctx->pc = 0x1B1810u;
        goto label_1b1810;
    }
    ctx->pc = 0x1B1808u;
    SET_GPR_U32(ctx, 31, 0x1B1810u);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x1B1808u, 0x1B1810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1810u;
label_1b1810:
    // 0x1b1810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1814:
    // 0x1b1814: 0x14430048  bne         $v0, $v1, . + 4 + (0x48 << 2)
label_1b1818:
    if (ctx->pc == 0x1B1818u) {
        ctx->pc = 0x1B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1814u;
        // 0x1b1818: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B181Cu;
        goto label_1b181c;
    }
    ctx->pc = 0x1B1814u;
    {
        const bool branch_taken_0x1b1814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1814u;
        // 0x1b1818: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1814) {
            ctx->pc = 0x1B1938u;
            goto label_1b1938;
        }
    }
    ctx->pc = 0x1B181Cu;
label_1b181c:
    // 0x1b181c: 0x3402ea30  ori         $v0, $zero, 0xEA30
    ctx->pc = 0x1b181cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59952);
label_1b1820:
    // 0x1b1820: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b1820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1824:
    // 0x1b1824: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b1824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b1828:
    // 0x1b1828: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_1b182c:
    if (ctx->pc == 0x1B182Cu) {
        ctx->pc = 0x1B182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1828u;
        // 0x1b182c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1830u;
        goto label_1b1830;
    }
    ctx->pc = 0x1B1828u;
    {
        const bool branch_taken_0x1b1828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1828u;
        // 0x1b182c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1828) {
            ctx->pc = 0x1B1938u;
            goto label_1b1938;
        }
    }
    ctx->pc = 0x1B1830u;
label_1b1830:
    // 0x1b1830: 0x3402e530  ori         $v0, $zero, 0xE530
    ctx->pc = 0x1b1830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58672);
label_1b1834:
    // 0x1b1834: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b1834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1838:
    // 0x1b1838: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b1838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b183c:
    // 0x1b183c: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_1b1840:
    if (ctx->pc == 0x1B1840u) {
        ctx->pc = 0x1B1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B183Cu;
        // 0x1b1840: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1844u;
        goto label_1b1844;
    }
    ctx->pc = 0x1B183Cu;
    {
        const bool branch_taken_0x1b183c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B183Cu;
        // 0x1b1840: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b183c) {
            ctx->pc = 0x1B1938u;
            goto label_1b1938;
        }
    }
    ctx->pc = 0x1B1844u;
label_1b1844:
    // 0x1b1844: 0x8e82deb8  lw          $v0, -0x2148($s4)
    ctx->pc = 0x1b1844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958776)));
label_1b1848:
    // 0x1b1848: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b184c:
    // 0x1b184c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b184cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b1850:
    // 0x1b1850: 0xc44001d8  lwc1        $f0, 0x1D8($v0)
    ctx->pc = 0x1b1850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1854:
    // 0x1b1854: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b1854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1858:
    // 0x1b1858: 0x0  nop
    ctx->pc = 0x1b1858u;
    // NOP
label_1b185c:
    // 0x1b185c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
label_1b1860:
    if (ctx->pc == 0x1B1860u) {
        ctx->pc = 0x1B1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B185Cu;
        // 0x1b1860: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1864u;
        goto label_1b1864;
    }
    ctx->pc = 0x1B185Cu;
    {
        const bool branch_taken_0x1b185c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B185Cu;
        // 0x1b1860: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b185c) {
            ctx->pc = 0x1B1938u;
            goto label_1b1938;
        }
    }
    ctx->pc = 0x1B1864u;
label_1b1864:
    // 0x1b1864: 0xc0579c6  jal         func_15E718
label_1b1868:
    if (ctx->pc == 0x1B1868u) {
        ctx->pc = 0x1B186Cu;
        goto label_1b186c;
    }
    ctx->pc = 0x1B1864u;
    SET_GPR_U32(ctx, 31, 0x1B186Cu);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x1B1864u, 0x1B186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B186Cu;
label_1b186c:
    // 0x1b186c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1b186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1b1870:
    // 0x1b1870: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1b1870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1b1874:
    // 0x1b1874: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x1b1874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1b1878:
    // 0x1b1878: 0xa0f809  jalr        $a1
label_1b187c:
    if (ctx->pc == 0x1B187Cu) {
        ctx->pc = 0x1B187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1878u;
        // 0x1b187c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1880u;
        goto label_1b1880;
    }
    ctx->pc = 0x1B1878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B1880u);
        ctx->pc = 0x1B187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1878u;
        // 0x1b187c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1878u, 0x1B1880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1880u;
label_1b1880:
    // 0x1b1880: 0x38420014  xori        $v0, $v0, 0x14
    ctx->pc = 0x1b1880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)20);
label_1b1884:
    // 0x1b1884: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1b1888:
    if (ctx->pc == 0x1B1888u) {
        ctx->pc = 0x1B1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1884u;
        // 0x1b1888: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B188Cu;
        goto label_1b188c;
    }
    ctx->pc = 0x1B1884u;
    {
        const bool branch_taken_0x1b1884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1884u;
        // 0x1b1888: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1884) {
            ctx->pc = 0x1B1938u;
            goto label_1b1938;
        }
    }
    ctx->pc = 0x1B188Cu;
label_1b188c:
    // 0x1b188c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1b188cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1b1890:
    // 0x1b1890: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b1890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b1894:
    // 0x1b1894: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1b1894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1b1898:
    // 0x1b1898: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1b1898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1b189c:
    // 0x1b189c: 0x40f809  jalr        $v0
label_1b18a0:
    if (ctx->pc == 0x1B18A0u) {
        ctx->pc = 0x1B18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B189Cu;
        // 0x1b18a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B18A4u;
        goto label_1b18a4;
    }
    ctx->pc = 0x1B189Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B18A4u);
        ctx->pc = 0x1B18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B189Cu;
        // 0x1b18a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B189Cu, 0x1B18A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B18A4u;
label_1b18a4:
    // 0x1b18a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b18a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b18a8:
    // 0x1b18a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b18a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b18ac:
    // 0x1b18ac: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1b18b0:
    if (ctx->pc == 0x1B18B0u) {
        ctx->pc = 0x1B18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18ACu;
        // 0x1b18b0: 0xac44d53c  sw          $a0, -0x2AC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B18B4u;
        goto label_1b18b4;
    }
    ctx->pc = 0x1B18ACu;
    {
        const bool branch_taken_0x1b18ac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18ACu;
        // 0x1b18b0: 0xac44d53c  sw          $a0, -0x2AC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18ac) {
            ctx->pc = 0x1B18C8u;
            goto label_1b18c8;
        }
    }
    ctx->pc = 0x1B18B4u;
label_1b18b4:
    // 0x1b18b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b18b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b18b8:
    // 0x1b18b8: 0x0  nop
    ctx->pc = 0x1b18b8u;
    // NOP
label_1b18bc:
    // 0x1b18bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b18bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b18c0:
    // 0x1b18c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1b18c4:
    if (ctx->pc == 0x1B18C4u) {
        ctx->pc = 0x1B18C8u;
        goto label_1b18c8;
    }
    ctx->pc = 0x1B18C0u;
    {
        const bool branch_taken_0x1b18c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b18c0) {
            ctx->pc = 0x1B18E4u;
            goto label_1b18e4;
        }
    }
    ctx->pc = 0x1B18C8u;
label_1b18c8:
    // 0x1b18c8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1b18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1b18cc:
    // 0x1b18cc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1b18ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1b18d0:
    // 0x1b18d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b18d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b18d4:
    // 0x1b18d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b18d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b18d8:
    // 0x1b18d8: 0x0  nop
    ctx->pc = 0x1b18d8u;
    // NOP
label_1b18dc:
    // 0x1b18dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b18dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b18e0:
    // 0x1b18e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b18e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b18e4:
    // 0x1b18e4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b18e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1b18e8:
    // 0x1b18e8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b18e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1b18ec:
    // 0x1b18ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b18ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b18f0:
    // 0x1b18f0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b18f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1b18f4:
    // 0x1b18f4: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x1b18f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_1b18f8:
    // 0x1b18f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b18fc:
    // 0x1b18fc: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x1b18fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1b1900:
    // 0x1b1900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1904:
    // 0x1b1904: 0xc06c934  jal         func_1B24D0
label_1b1908:
    if (ctx->pc == 0x1B1908u) {
        ctx->pc = 0x1B1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1904u;
        // 0x1b1908: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B190Cu;
        goto label_1b190c;
    }
    ctx->pc = 0x1B1904u;
    SET_GPR_U32(ctx, 31, 0x1B190Cu);
    ctx->pc = 0x1B1908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1904u;
    // 0x1b1908: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24D0u, 0x1B1904u, 0x1B190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B190Cu;
label_1b190c:
    // 0x1b190c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1b190cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_1b1910:
    // 0x1b1910: 0xc06886e  jal         func_1A21B8
label_1b1914:
    if (ctx->pc == 0x1B1914u) {
        ctx->pc = 0x1B1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1910u;
        // 0x1b1914: 0x2484e890  addiu       $a0, $a0, -0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1918u;
        goto label_1b1918;
    }
    ctx->pc = 0x1B1910u;
    SET_GPR_U32(ctx, 31, 0x1B1918u);
    ctx->pc = 0x1B1914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1910u;
    // 0x1b1914: 0x2484e890  addiu       $a0, $a0, -0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1B1910u, 0x1B1918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1918u;
label_1b1918:
    // 0x1b1918: 0xc0584fc  jal         func_1613F0
label_1b191c:
    if (ctx->pc == 0x1B191Cu) {
        ctx->pc = 0x1B1920u;
        goto label_1b1920;
    }
    ctx->pc = 0x1B1918u;
    SET_GPR_U32(ctx, 31, 0x1B1920u);
    ctx->pc = 0x1613F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1613F0u, 0x1B1918u, 0x1B1920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1920u;
label_1b1920:
    // 0x1b1920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1924:
    // 0x1b1924: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b1924u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b1928:
    // 0x1b1928: 0xc06c934  jal         func_1B24D0
label_1b192c:
    if (ctx->pc == 0x1B192Cu) {
        ctx->pc = 0x1B192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1928u;
        // 0x1b192c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1930u;
        goto label_1b1930;
    }
    ctx->pc = 0x1B1928u;
    SET_GPR_U32(ctx, 31, 0x1B1930u);
    ctx->pc = 0x1B192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1928u;
    // 0x1b192c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24D0u, 0x1B1928u, 0x1B1930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1930u;
label_1b1930:
    // 0x1b1930: 0x10000174  b           . + 4 + (0x174 << 2)
label_1b1934:
    if (ctx->pc == 0x1B1934u) {
        ctx->pc = 0x1B1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1930u;
        // 0x1b1934: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1938u;
        goto label_1b1938;
    }
    ctx->pc = 0x1B1930u;
    {
        const bool branch_taken_0x1b1930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1930u;
        // 0x1b1934: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1930) {
            ctx->pc = 0x1B1F04u;
            goto label_1b1f04;
        }
    }
    ctx->pc = 0x1B1938u;
label_1b1938:
    // 0x1b1938: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1b1938u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1b193c:
    // 0x1b193c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1b193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1b1940:
    // 0x1b1940: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b1940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b1944:
    // 0x1b1944: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1b1944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1b1948:
    // 0x1b1948: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1b1948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1b194c:
    // 0x1b194c: 0x40f809  jalr        $v0
label_1b1950:
    if (ctx->pc == 0x1B1950u) {
        ctx->pc = 0x1B1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B194Cu;
        // 0x1b1950: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1954u;
        goto label_1b1954;
    }
    ctx->pc = 0x1B194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1954u);
        ctx->pc = 0x1B1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B194Cu;
        // 0x1b1950: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B194Cu, 0x1B1954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1954u;
label_1b1954:
    // 0x1b1954: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b1954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b1958:
    // 0x1b1958: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1b1958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1b195c:
    // 0x1b195c: 0xc107444  jal         func_41D110
label_1b1960:
    if (ctx->pc == 0x1B1960u) {
        ctx->pc = 0x1B1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B195Cu;
        // 0x1b1960: 0xac62c7d8  sw          $v0, -0x3828($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1964u;
        goto label_1b1964;
    }
    ctx->pc = 0x1B195Cu;
    SET_GPR_U32(ctx, 31, 0x1B1964u);
    ctx->pc = 0x1B1960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B195Cu;
    // 0x1b1960: 0xac62c7d8  sw          $v0, -0x3828($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952920), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1B195Cu, 0x1B1964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1964u;
label_1b1964:
    // 0x1b1964: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1b1968:
    if (ctx->pc == 0x1B1968u) {
        ctx->pc = 0x1B1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1964u;
        // 0x1b1968: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B196Cu;
        goto label_1b196c;
    }
    ctx->pc = 0x1B1964u;
    {
        const bool branch_taken_0x1b1964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1964u;
        // 0x1b1968: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1964) {
            ctx->pc = 0x1B19B8u;
            goto label_1b19b8;
        }
    }
    ctx->pc = 0x1B196Cu;
label_1b196c:
    // 0x1b196c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1b196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1b1970:
    // 0x1b1970: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b1970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1974:
    // 0x1b1974: 0x8c45111c  lw          $a1, 0x111C($v0)
    ctx->pc = 0x1b1974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_1b1978:
    // 0x1b1978: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_1b197c:
    if (ctx->pc == 0x1B197Cu) {
        ctx->pc = 0x1B197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1978u;
        // 0x1b197c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1980u;
        goto label_1b1980;
    }
    ctx->pc = 0x1B1978u;
    {
        const bool branch_taken_0x1b1978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1978u;
        // 0x1b197c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1978) {
            ctx->pc = 0x1B19BCu;
            goto label_1b19bc;
        }
    }
    ctx->pc = 0x1B1980u;
label_1b1980:
    // 0x1b1980: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b1980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b1984:
    // 0x1b1984: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x1b1984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_1b1988:
    // 0x1b1988: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b1988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b198c:
    // 0x1b198c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b1990:
    if (ctx->pc == 0x1B1990u) {
        ctx->pc = 0x1B1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B198Cu;
        // 0x1b1990: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1994u;
        goto label_1b1994;
    }
    ctx->pc = 0x1B198Cu;
    {
        const bool branch_taken_0x1b198c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B198Cu;
        // 0x1b1990: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b198c) {
            ctx->pc = 0x1B199Cu;
            goto label_1b199c;
        }
    }
    ctx->pc = 0x1B1994u;
label_1b1994:
    // 0x1b1994: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1b1994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1b1998:
    // 0x1b1998: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1b1998u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b199c:
    // 0x1b199c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1b19a0:
    if (ctx->pc == 0x1B19A0u) {
        ctx->pc = 0x1B19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B199Cu;
        // 0x1b19a0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19A4u;
        goto label_1b19a4;
    }
    ctx->pc = 0x1B199Cu;
    {
        const bool branch_taken_0x1b199c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B199Cu;
        // 0x1b19a0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b199c) {
            ctx->pc = 0x1B19BCu;
            goto label_1b19bc;
        }
    }
    ctx->pc = 0x1B19A4u;
label_1b19a4:
    // 0x1b19a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b19a8:
    // 0x1b19a8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1b19a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1b19ac:
    // 0x1b19ac: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1b19acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1b19b0:
    // 0x1b19b0: 0x60f809  jalr        $v1
label_1b19b4:
    if (ctx->pc == 0x1B19B4u) {
        ctx->pc = 0x1B19B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19B0u;
        // 0x1b19b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19B8u;
        goto label_1b19b8;
    }
    ctx->pc = 0x1B19B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B19B8u);
        ctx->pc = 0x1B19B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19B0u;
        // 0x1b19b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B19B0u, 0x1B19B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B19B8u;
label_1b19b8:
    // 0x1b19b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b19bc:
    // 0x1b19bc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1b19bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b19c0:
    // 0x1b19c0: 0x8e0377a0  lw          $v1, 0x77A0($s0)
    ctx->pc = 0x1b19c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30624)));
label_1b19c4:
    // 0x1b19c4: 0x10600146  beqz        $v1, . + 4 + (0x146 << 2)
label_1b19c8:
    if (ctx->pc == 0x1B19C8u) {
        ctx->pc = 0x1B19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19C4u;
        // 0x1b19c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19CCu;
        goto label_1b19cc;
    }
    ctx->pc = 0x1B19C4u;
    {
        const bool branch_taken_0x1b19c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19C4u;
        // 0x1b19c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19c4) {
            ctx->pc = 0x1B1EE0u;
            goto label_1b1ee0;
        }
    }
    ctx->pc = 0x1B19CCu;
label_1b19cc:
    // 0x1b19cc: 0xc107444  jal         func_41D110
label_1b19d0:
    if (ctx->pc == 0x1B19D0u) {
        ctx->pc = 0x1B19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19CCu;
        // 0x1b19d0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19D4u;
        goto label_1b19d4;
    }
    ctx->pc = 0x1B19CCu;
    SET_GPR_U32(ctx, 31, 0x1B19D4u);
    ctx->pc = 0x1B19D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19CCu;
    // 0x1b19d0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1B19CCu, 0x1B19D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19D4u;
label_1b19d4:
    // 0x1b19d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b19d8:
    if (ctx->pc == 0x1B19D8u) {
        ctx->pc = 0x1B19DCu;
        goto label_1b19dc;
    }
    ctx->pc = 0x1B19D4u;
    {
        const bool branch_taken_0x1b19d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b19d4) {
            ctx->pc = 0x1B19F8u;
            goto label_1b19f8;
        }
    }
    ctx->pc = 0x1B19DCu;
label_1b19dc:
    // 0x1b19dc: 0x3404e650  ori         $a0, $zero, 0xE650
    ctx->pc = 0x1b19dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58960);
label_1b19e0:
    // 0x1b19e0: 0xc067b4a  jal         func_19ED28
label_1b19e4:
    if (ctx->pc == 0x1B19E4u) {
        ctx->pc = 0x1B19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19E0u;
        // 0x1b19e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19E8u;
        goto label_1b19e8;
    }
    ctx->pc = 0x1B19E0u;
    SET_GPR_U32(ctx, 31, 0x1B19E8u);
    ctx->pc = 0x1B19E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19E0u;
    // 0x1b19e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19ED28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ED28u, 0x1B19E0u, 0x1B19E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19E8u;
label_1b19e8:
    // 0x1b19e8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b19e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b19ec:
    // 0x1b19ec: 0x34848ee0  ori         $a0, $a0, 0x8EE0
    ctx->pc = 0x1b19ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36576);
label_1b19f0:
    // 0x1b19f0: 0xc06ec70  jal         func_1BB1C0
label_1b19f4:
    if (ctx->pc == 0x1B19F4u) {
        ctx->pc = 0x1B19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19F0u;
        // 0x1b19f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19F8u;
        goto label_1b19f8;
    }
    ctx->pc = 0x1B19F0u;
    SET_GPR_U32(ctx, 31, 0x1B19F8u);
    ctx->pc = 0x1B19F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19F0u;
    // 0x1b19f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1B19F0u, 0x1B19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19F8u;
label_1b19f8:
    // 0x1b19f8: 0xc07182c  jal         func_1C60B0
label_1b19fc:
    if (ctx->pc == 0x1B19FCu) {
        ctx->pc = 0x1B19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19F8u;
        // 0x1b19fc: 0x264415d0  addiu       $a0, $s2, 0x15D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A00u;
        goto label_1b1a00;
    }
    ctx->pc = 0x1B19F8u;
    SET_GPR_U32(ctx, 31, 0x1B1A00u);
    ctx->pc = 0x1B19FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19F8u;
    // 0x1b19fc: 0x264415d0  addiu       $a0, $s2, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C60B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C60B0u, 0x1B19F8u, 0x1B1A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A00u;
label_1b1a00:
    // 0x1b1a00: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b1a04:
    // 0x1b1a04: 0x348477d0  ori         $a0, $a0, 0x77D0
    ctx->pc = 0x1b1a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30672);
label_1b1a08:
    // 0x1b1a08: 0xc06aaea  jal         func_1AABA8
label_1b1a0c:
    if (ctx->pc == 0x1B1A0Cu) {
        ctx->pc = 0x1B1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A08u;
        // 0x1b1a0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A10u;
        goto label_1b1a10;
    }
    ctx->pc = 0x1B1A08u;
    SET_GPR_U32(ctx, 31, 0x1B1A10u);
    ctx->pc = 0x1B1A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A08u;
    // 0x1b1a0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AABA8u, 0x1B1A08u, 0x1B1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A10u;
label_1b1a10:
    // 0x1b1a10: 0xc06c590  jal         func_1B1640
label_1b1a14:
    if (ctx->pc == 0x1B1A14u) {
        ctx->pc = 0x1B1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A10u;
        // 0x1b1a14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A18u;
        goto label_1b1a18;
    }
    ctx->pc = 0x1B1A10u;
    SET_GPR_U32(ctx, 31, 0x1B1A18u);
    ctx->pc = 0x1B1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A10u;
    // 0x1b1a14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1B1A10u, 0x1B1A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A18u;
label_1b1a18:
    // 0x1b1a18: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1b1a1c:
    if (ctx->pc == 0x1B1A1Cu) {
        ctx->pc = 0x1B1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A18u;
        // 0x1b1a1c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A20u;
        goto label_1b1a20;
    }
    ctx->pc = 0x1B1A18u;
    {
        const bool branch_taken_0x1b1a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a18) {
            ctx->pc = 0x1B1A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1A18u;
            // 0x1b1a1c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1A3Cu;
            goto label_1b1a3c;
        }
    }
    ctx->pc = 0x1B1A20u;
label_1b1a20:
    // 0x1b1a20: 0xc07182c  jal         func_1C60B0
label_1b1a24:
    if (ctx->pc == 0x1B1A24u) {
        ctx->pc = 0x1B1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A20u;
        // 0x1b1a24: 0x26443f10  addiu       $a0, $s2, 0x3F10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A28u;
        goto label_1b1a28;
    }
    ctx->pc = 0x1B1A20u;
    SET_GPR_U32(ctx, 31, 0x1B1A28u);
    ctx->pc = 0x1B1A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A20u;
    // 0x1b1a24: 0x26443f10  addiu       $a0, $s2, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C60B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C60B0u, 0x1B1A20u, 0x1B1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A28u;
label_1b1a28:
    // 0x1b1a28: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b1a2c:
    // 0x1b1a2c: 0x34848280  ori         $a0, $a0, 0x8280
    ctx->pc = 0x1b1a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33408);
label_1b1a30:
    // 0x1b1a30: 0xc06aaea  jal         func_1AABA8
label_1b1a34:
    if (ctx->pc == 0x1B1A34u) {
        ctx->pc = 0x1B1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A30u;
        // 0x1b1a34: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A38u;
        goto label_1b1a38;
    }
    ctx->pc = 0x1B1A30u;
    SET_GPR_U32(ctx, 31, 0x1B1A38u);
    ctx->pc = 0x1B1A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A30u;
    // 0x1b1a34: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AABA8u, 0x1B1A30u, 0x1B1A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A38u;
label_1b1a38:
    // 0x1b1a38: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b1a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b1a3c:
    // 0x1b1a3c: 0x348434a0  ori         $a0, $a0, 0x34A0
    ctx->pc = 0x1b1a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13472);
label_1b1a40:
    // 0x1b1a40: 0xc068998  jal         func_1A2660
label_1b1a44:
    if (ctx->pc == 0x1B1A44u) {
        ctx->pc = 0x1B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A40u;
        // 0x1b1a44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A48u;
        goto label_1b1a48;
    }
    ctx->pc = 0x1B1A40u;
    SET_GPR_U32(ctx, 31, 0x1B1A48u);
    ctx->pc = 0x1B1A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A40u;
    // 0x1b1a44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1B1A40u, 0x1B1A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A48u;
label_1b1a48:
    // 0x1b1a48: 0x3404e050  ori         $a0, $zero, 0xE050
    ctx->pc = 0x1b1a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
label_1b1a4c:
    // 0x1b1a4c: 0xc068998  jal         func_1A2660
label_1b1a50:
    if (ctx->pc == 0x1B1A50u) {
        ctx->pc = 0x1B1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A4Cu;
        // 0x1b1a50: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A54u;
        goto label_1b1a54;
    }
    ctx->pc = 0x1B1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B1A54u);
    ctx->pc = 0x1B1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A4Cu;
    // 0x1b1a50: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1B1A4Cu, 0x1B1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A54u;
label_1b1a54:
    // 0x1b1a54: 0x34029640  ori         $v0, $zero, 0x9640
    ctx->pc = 0x1b1a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38464);
label_1b1a58:
    // 0x1b1a58: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1b1a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1a5c:
    // 0x1b1a5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b1a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b1a60:
    // 0x1b1a60: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1b1a64:
    if (ctx->pc == 0x1B1A64u) {
        ctx->pc = 0x1B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A60u;
        // 0x1b1a64: 0x26437660  addiu       $v1, $s2, 0x7660 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 30304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A68u;
        goto label_1b1a68;
    }
    ctx->pc = 0x1B1A60u;
    {
        const bool branch_taken_0x1b1a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A60u;
        // 0x1b1a64: 0x26437660  addiu       $v1, $s2, 0x7660 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 30304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a60) {
            ctx->pc = 0x1B1A74u;
            goto label_1b1a74;
        }
    }
    ctx->pc = 0x1B1A68u;
label_1b1a68:
    // 0x1b1a68: 0xc0690f6  jal         func_1A43D8
label_1b1a6c:
    if (ctx->pc == 0x1B1A6Cu) {
        ctx->pc = 0x1B1A70u;
        goto label_1b1a70;
    }
    ctx->pc = 0x1B1A68u;
    SET_GPR_U32(ctx, 31, 0x1B1A70u);
    ctx->pc = 0x1A43D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43D8u, 0x1B1A68u, 0x1B1A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A70u;
label_1b1a70:
    // 0x1b1a70: 0x26437660  addiu       $v1, $s2, 0x7660
    ctx->pc = 0x1b1a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 30304));
label_1b1a74:
    // 0x1b1a74: 0x34029970  ori         $v0, $zero, 0x9970
    ctx->pc = 0x1b1a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39280);
label_1b1a78:
    // 0x1b1a78: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1b1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_1b1a7c:
    // 0x1b1a7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b1a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1a80:
    // 0x1b1a80: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1b1a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1a84:
    // 0x1b1a84: 0x26560008  addiu       $s6, $s2, 0x8
    ctx->pc = 0x1b1a84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1b1a88:
    // 0x1b1a88: 0x26556850  addiu       $s5, $s2, 0x6850
    ctx->pc = 0x1b1a88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 26704));
label_1b1a8c:
    // 0x1b1a8c: 0x0  nop
    ctx->pc = 0x1b1a8cu;
    // NOP
label_1b1a90:
    // 0x1b1a90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b1a94:
    // 0x1b1a94: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1b1a98:
    if (ctx->pc == 0x1B1A98u) {
        ctx->pc = 0x1B1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A94u;
        // 0x1b1a98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A9Cu;
        goto label_1b1a9c;
    }
    ctx->pc = 0x1B1A94u;
    {
        const bool branch_taken_0x1b1a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a94) {
            ctx->pc = 0x1B1A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1A94u;
            // 0x1b1a98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1AB4u;
            goto label_1b1ab4;
        }
    }
    ctx->pc = 0x1B1A9Cu;
label_1b1a9c:
    // 0x1b1a9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1aa0:
    // 0x1b1aa0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1b1aa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1b1aa4:
    // 0x1b1aa4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1b1aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1b1aa8:
    // 0x1b1aa8: 0x60f809  jalr        $v1
label_1b1aac:
    if (ctx->pc == 0x1B1AACu) {
        ctx->pc = 0x1B1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AA8u;
        // 0x1b1aac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1AB0u;
        goto label_1b1ab0;
    }
    ctx->pc = 0x1B1AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B1AB0u);
        ctx->pc = 0x1B1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AA8u;
        // 0x1b1aac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1AA8u, 0x1B1AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1AB0u;
label_1b1ab0:
    // 0x1b1ab0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b1ab4:
    // 0x1b1ab4: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1b1ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1b1ab8:
    // 0x1b1ab8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1b1abc:
    if (ctx->pc == 0x1B1ABCu) {
        ctx->pc = 0x1B1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AB8u;
        // 0x1b1abc: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1AC0u;
        goto label_1b1ac0;
    }
    ctx->pc = 0x1B1AB8u;
    {
        const bool branch_taken_0x1b1ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AB8u;
        // 0x1b1abc: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ab8) {
            ctx->pc = 0x1B1A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1a90;
        }
    }
    ctx->pc = 0x1B1AC0u;
label_1b1ac0:
    // 0x1b1ac0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b1ac4:
    // 0x1b1ac4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b1ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ac8:
    // 0x1b1ac8: 0x34424ae0  ori         $v0, $v0, 0x4AE0
    ctx->pc = 0x1b1ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19168);
label_1b1acc:
    // 0x1b1acc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1b1accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1ad0:
    // 0x1b1ad0: 0x8e020434  lw          $v0, 0x434($s0)
    ctx->pc = 0x1b1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
label_1b1ad4:
    // 0x1b1ad4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1b1ad8:
    if (ctx->pc == 0x1B1AD8u) {
        ctx->pc = 0x1B1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AD4u;
        // 0x1b1ad8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1ADCu;
        goto label_1b1adc;
    }
    ctx->pc = 0x1B1AD4u;
    {
        const bool branch_taken_0x1b1ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ad4) {
            ctx->pc = 0x1B1AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1AD4u;
            // 0x1b1ad8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1AF4u;
            goto label_1b1af4;
        }
    }
    ctx->pc = 0x1B1ADCu;
label_1b1adc:
    // 0x1b1adc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1ae0:
    // 0x1b1ae0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1b1ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1b1ae4:
    // 0x1b1ae4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1b1ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1b1ae8:
    // 0x1b1ae8: 0x60f809  jalr        $v1
label_1b1aec:
    if (ctx->pc == 0x1B1AECu) {
        ctx->pc = 0x1B1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AE8u;
        // 0x1b1aec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1AF0u;
        goto label_1b1af0;
    }
    ctx->pc = 0x1B1AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B1AF0u);
        ctx->pc = 0x1B1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AE8u;
        // 0x1b1aec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1AE8u, 0x1B1AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1AF0u;
label_1b1af0:
    // 0x1b1af0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b1af4:
    // 0x1b1af4: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x1b1af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1b1af8:
    // 0x1b1af8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1b1afc:
    if (ctx->pc == 0x1B1AFCu) {
        ctx->pc = 0x1B1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AF8u;
        // 0x1b1afc: 0x26100560  addiu       $s0, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B00u;
        goto label_1b1b00;
    }
    ctx->pc = 0x1B1AF8u;
    {
        const bool branch_taken_0x1b1af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AF8u;
        // 0x1b1afc: 0x26100560  addiu       $s0, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1af8) {
            ctx->pc = 0x1B1AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1ad0;
        }
    }
    ctx->pc = 0x1B1B00u;
label_1b1b00:
    // 0x1b1b00: 0x3402a940  ori         $v0, $zero, 0xA940
    ctx->pc = 0x1b1b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43328);
label_1b1b04:
    // 0x1b1b04: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1b1b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1b08:
    // 0x1b1b08: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b1b0c:
    // 0x1b1b0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1b1b10:
    if (ctx->pc == 0x1B1B10u) {
        ctx->pc = 0x1B1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B0Cu;
        // 0x1b1b10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B14u;
        goto label_1b1b14;
    }
    ctx->pc = 0x1B1B0Cu;
    {
        const bool branch_taken_0x1b1b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B0Cu;
        // 0x1b1b10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b0c) {
            ctx->pc = 0x1B1B20u;
            goto label_1b1b20;
        }
    }
    ctx->pc = 0x1B1B14u;
label_1b1b14:
    // 0x1b1b14: 0xc068f00  jal         func_1A3C00
label_1b1b18:
    if (ctx->pc == 0x1B1B18u) {
        ctx->pc = 0x1B1B1Cu;
        goto label_1b1b1c;
    }
    ctx->pc = 0x1B1B14u;
    SET_GPR_U32(ctx, 31, 0x1B1B1Cu);
    ctx->pc = 0x1A3C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3C00u, 0x1B1B14u, 0x1B1B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B1Cu;
label_1b1b1c:
    // 0x1b1b1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b1b20:
    // 0x1b1b20: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1b1b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1b1b24:
    // 0x1b1b24: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1b1b24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1b1b28:
    // 0x1b1b28: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1b1b2c:
    if (ctx->pc == 0x1B1B2Cu) {
        ctx->pc = 0x1B1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B28u;
        // 0x1b1b2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B30u;
        goto label_1b1b30;
    }
    ctx->pc = 0x1B1B28u;
    {
        const bool branch_taken_0x1b1b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B28u;
        // 0x1b1b2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b28) {
            ctx->pc = 0x1B1B90u;
            goto label_1b1b90;
        }
    }
    ctx->pc = 0x1B1B30u;
label_1b1b30:
    // 0x1b1b30: 0x34149540  ori         $s4, $zero, 0x9540
    ctx->pc = 0x1b1b30u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38208);
label_1b1b34:
    // 0x1b1b34: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x1b1b34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_1b1b38:
    // 0x1b1b38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b1b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b1b3c:
    // 0x1b1b3c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1b1b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1b1b40:
    // 0x1b1b40: 0xc0e409a  jal         func_390268
label_1b1b44:
    if (ctx->pc == 0x1B1B44u) {
        ctx->pc = 0x1B1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B40u;
        // 0x1b1b44: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B48u;
        goto label_1b1b48;
    }
    ctx->pc = 0x1B1B40u;
    SET_GPR_U32(ctx, 31, 0x1B1B48u);
    ctx->pc = 0x1B1B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B40u;
    // 0x1b1b44: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B1B40u, 0x1B1B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B48u;
label_1b1b48:
    // 0x1b1b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b4c:
    // 0x1b1b4c: 0xc088e30  jal         func_2238C0
label_1b1b50:
    if (ctx->pc == 0x1B1B50u) {
        ctx->pc = 0x1B1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B4Cu;
        // 0x1b1b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B54u;
        goto label_1b1b54;
    }
    ctx->pc = 0x1B1B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B1B54u);
    ctx->pc = 0x1B1B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B4Cu;
    // 0x1b1b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x1B1B4Cu, 0x1B1B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B54u;
label_1b1b54:
    // 0x1b1b54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b1b58:
    if (ctx->pc == 0x1B1B58u) {
        ctx->pc = 0x1B1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B54u;
        // 0x1b1b58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B5Cu;
        goto label_1b1b5c;
    }
    ctx->pc = 0x1B1B54u;
    {
        const bool branch_taken_0x1b1b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B54u;
        // 0x1b1b58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b54) {
            ctx->pc = 0x1B1B78u;
            goto label_1b1b78;
        }
    }
    ctx->pc = 0x1B1B5Cu;
label_1b1b5c:
    // 0x1b1b5c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x1b1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_1b1b60:
    // 0x1b1b60: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x1b1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_1b1b64:
    // 0x1b1b64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1b1b68:
    if (ctx->pc == 0x1B1B68u) {
        ctx->pc = 0x1B1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B64u;
        // 0x1b1b68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B6Cu;
        goto label_1b1b6c;
    }
    ctx->pc = 0x1B1B64u;
    {
        const bool branch_taken_0x1b1b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B64u;
        // 0x1b1b68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b64) {
            ctx->pc = 0x1B1B74u;
            goto label_1b1b74;
        }
    }
    ctx->pc = 0x1B1B6Cu;
label_1b1b6c:
    // 0x1b1b6c: 0xc072de6  jal         func_1CB798
label_1b1b70:
    if (ctx->pc == 0x1B1B70u) {
        ctx->pc = 0x1B1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B6Cu;
        // 0x1b1b70: 0x2542021  addu        $a0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B74u;
        goto label_1b1b74;
    }
    ctx->pc = 0x1B1B6Cu;
    SET_GPR_U32(ctx, 31, 0x1B1B74u);
    ctx->pc = 0x1B1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B6Cu;
    // 0x1b1b70: 0x2542021  addu        $a0, $s2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB798u, 0x1B1B6Cu, 0x1B1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B74u;
label_1b1b74:
    // 0x1b1b74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b1b78:
    // 0x1b1b78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b1b7c:
    // 0x1b1b7c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1b1b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1b1b80:
    // 0x1b1b80: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1b1b80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1b1b84:
    // 0x1b1b84: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1b1b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b1b88:
    // 0x1b1b88: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1b1b8c:
    if (ctx->pc == 0x1B1B8Cu) {
        ctx->pc = 0x1B1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B88u;
        // 0x1b1b8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B90u;
        goto label_1b1b90;
    }
    ctx->pc = 0x1B1B88u;
    {
        const bool branch_taken_0x1b1b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B88u;
        // 0x1b1b8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b88) {
            ctx->pc = 0x1B1B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1b38;
        }
    }
    ctx->pc = 0x1B1B90u;
label_1b1b90:
    // 0x1b1b90: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1b1b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b94:
    // 0x1b1b94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b1b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1b98:
    // 0x1b1b98: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b1b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1b9c:
    // 0x1b1b9c: 0x0  nop
    ctx->pc = 0x1b1b9cu;
    // NOP
label_1b1ba0:
    // 0x1b1ba0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b1ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b1ba4:
    // 0x1b1ba4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b1ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1b1ba8:
    // 0x1b1ba8: 0x8ca24120  lw          $v0, 0x4120($a1)
    ctx->pc = 0x1b1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_1b1bac:
    // 0x1b1bac: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1b1bacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1b1bb0:
    // 0x1b1bb0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1b1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1b1bb4:
    // 0x1b1bb4: 0x60f809  jalr        $v1
label_1b1bb8:
    if (ctx->pc == 0x1B1BB8u) {
        ctx->pc = 0x1B1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BB4u;
        // 0x1b1bb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BBCu;
        goto label_1b1bbc;
    }
    ctx->pc = 0x1B1BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B1BBCu);
        ctx->pc = 0x1B1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BB4u;
        // 0x1b1bb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1BB4u, 0x1B1BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1BBCu;
label_1b1bbc:
    // 0x1b1bbc: 0x623fff8  bgezl       $s1, . + 4 + (-0x8 << 2)
label_1b1bc0:
    if (ctx->pc == 0x1B1BC0u) {
        ctx->pc = 0x1B1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BBCu;
        // 0x1b1bc0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BC4u;
        goto label_1b1bc4;
    }
    ctx->pc = 0x1B1BBCu;
    {
        const bool branch_taken_0x1b1bbc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1b1bbc) {
            ctx->pc = 0x1B1BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1BBCu;
            // 0x1b1bc0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1ba0;
        }
    }
    ctx->pc = 0x1B1BC4u;
label_1b1bc4:
    // 0x1b1bc4: 0xc06ec70  jal         func_1BB1C0
label_1b1bc8:
    if (ctx->pc == 0x1B1BC8u) {
        ctx->pc = 0x1B1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BC4u;
        // 0x1b1bc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BCCu;
        goto label_1b1bcc;
    }
    ctx->pc = 0x1B1BC4u;
    SET_GPR_U32(ctx, 31, 0x1B1BCCu);
    ctx->pc = 0x1B1BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BC4u;
    // 0x1b1bc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1B1BC4u, 0x1B1BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BCCu;
label_1b1bcc:
    // 0x1b1bcc: 0x3402e340  ori         $v0, $zero, 0xE340
    ctx->pc = 0x1b1bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58176);
label_1b1bd0:
    // 0x1b1bd0: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1b1bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1bd4:
    // 0x1b1bd4: 0xc06ec70  jal         func_1BB1C0
label_1b1bd8:
    if (ctx->pc == 0x1B1BD8u) {
        ctx->pc = 0x1B1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BD4u;
        // 0x1b1bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BDCu;
        goto label_1b1bdc;
    }
    ctx->pc = 0x1B1BD4u;
    SET_GPR_U32(ctx, 31, 0x1B1BDCu);
    ctx->pc = 0x1B1BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BD4u;
    // 0x1b1bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1B1BD4u, 0x1B1BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BDCu;
label_1b1bdc:
    // 0x1b1bdc: 0xc06ecbc  jal         func_1BB2F0
label_1b1be0:
    if (ctx->pc == 0x1B1BE0u) {
        ctx->pc = 0x1B1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BDCu;
        // 0x1b1be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BE4u;
        goto label_1b1be4;
    }
    ctx->pc = 0x1B1BDCu;
    SET_GPR_U32(ctx, 31, 0x1B1BE4u);
    ctx->pc = 0x1B1BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BDCu;
    // 0x1b1be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB2F0u, 0x1B1BDCu, 0x1B1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BE4u;
label_1b1be4:
    // 0x1b1be4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1b1be8:
    if (ctx->pc == 0x1B1BE8u) {
        ctx->pc = 0x1B1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BE4u;
        // 0x1b1be8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BECu;
        goto label_1b1bec;
    }
    ctx->pc = 0x1B1BE4u;
    {
        const bool branch_taken_0x1b1be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1be4) {
            ctx->pc = 0x1B1BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1BE4u;
            // 0x1b1be8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1BECu;
            goto label_1b1bec;
        }
    }
    ctx->pc = 0x1B1BECu;
label_1b1bec:
    // 0x1b1bec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b1becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b1bf0:
    // 0x1b1bf0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1b1bf4:
    // 0x1b1bf4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1bf8:
    // 0x1b1bf8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1b1bf8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1b1bfc:
    // 0x1b1bfc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b1bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1b1c00:
    // 0x1b1c00: 0x904325d5  lbu         $v1, 0x25D5($v0)
    ctx->pc = 0x1b1c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9685)));
label_1b1c04:
    // 0x1b1c04: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_1b1c08:
    if (ctx->pc == 0x1B1C08u) {
        ctx->pc = 0x1B1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C04u;
        // 0x1b1c08: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C0Cu;
        goto label_1b1c0c;
    }
    ctx->pc = 0x1B1C04u;
    {
        const bool branch_taken_0x1b1c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C04u;
        // 0x1b1c08: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c04) {
            ctx->pc = 0x1B1C50u;
            goto label_1b1c50;
        }
    }
    ctx->pc = 0x1B1C0Cu;
label_1b1c0c:
    // 0x1b1c0c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b1c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b1c10:
    // 0x1b1c10: 0x8c71489c  lw          $s1, 0x489C($v1)
    ctx->pc = 0x1b1c10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1b1c14:
    // 0x1b1c14: 0xc136ad6  jal         func_4DAB58
label_1b1c18:
    if (ctx->pc == 0x1B1C18u) {
        ctx->pc = 0x1B1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C14u;
        // 0x1b1c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C1Cu;
        goto label_1b1c1c;
    }
    ctx->pc = 0x1B1C14u;
    SET_GPR_U32(ctx, 31, 0x1B1C1Cu);
    ctx->pc = 0x1B1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C14u;
    // 0x1b1c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1B1C14u, 0x1B1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C1Cu;
label_1b1c1c:
    // 0x1b1c1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c20:
    // 0x1b1c20: 0xc136ad4  jal         func_4DAB50
label_1b1c24:
    if (ctx->pc == 0x1B1C24u) {
        ctx->pc = 0x1B1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C20u;
        // 0x1b1c24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C28u;
        goto label_1b1c28;
    }
    ctx->pc = 0x1B1C20u;
    SET_GPR_U32(ctx, 31, 0x1B1C28u);
    ctx->pc = 0x1B1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C20u;
    // 0x1b1c24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1B1C20u, 0x1B1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C28u;
label_1b1c28:
    // 0x1b1c28: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1b1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1b1c2c:
    // 0x1b1c2c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1b1c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b1c30:
    // 0x1b1c30: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b1c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b1c34:
    // 0x1b1c34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b1c38:
    // 0x1b1c38: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x1b1c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_1b1c3c:
    // 0x1b1c3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b1c40:
    if (ctx->pc == 0x1B1C40u) {
        ctx->pc = 0x1B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C3Cu;
        // 0x1b1c40: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C44u;
        goto label_1b1c44;
    }
    ctx->pc = 0x1B1C3Cu;
    {
        const bool branch_taken_0x1b1c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C3Cu;
        // 0x1b1c40: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c3c) {
            ctx->pc = 0x1B1C50u;
            goto label_1b1c50;
        }
    }
    ctx->pc = 0x1B1C44u;
label_1b1c44:
    // 0x1b1c44: 0xc0680ea  jal         func_1A03A8
label_1b1c48:
    if (ctx->pc == 0x1B1C48u) {
        ctx->pc = 0x1B1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C44u;
        // 0x1b1c48: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C4Cu;
        goto label_1b1c4c;
    }
    ctx->pc = 0x1B1C44u;
    SET_GPR_U32(ctx, 31, 0x1B1C4Cu);
    ctx->pc = 0x1B1C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C44u;
    // 0x1b1c48: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03A8u, 0x1B1C44u, 0x1B1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C4Cu;
label_1b1c4c:
    // 0x1b1c4c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b1c50:
    // 0x1b1c50: 0x3c150001  lui         $s5, 0x1
    ctx->pc = 0x1b1c50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1 << 16));
label_1b1c54:
    // 0x1b1c54: 0x344235e0  ori         $v0, $v0, 0x35E0
    ctx->pc = 0x1b1c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13792);
label_1b1c58:
    // 0x1b1c58: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1b1c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c5c:
    // 0x1b1c5c: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x1b1c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1c60:
    // 0x1b1c60: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b1c60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c64:
    // 0x1b1c64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c68:
    // 0x1b1c68: 0x3417ebc0  ori         $s7, $zero, 0xEBC0
    ctx->pc = 0x1b1c68u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60352);
label_1b1c6c:
    // 0x1b1c6c: 0x36b514c0  ori         $s5, $s5, 0x14C0
    ctx->pc = 0x1b1c6cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)5312);
label_1b1c70:
    // 0x1b1c70: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1b1c70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c74:
    // 0x1b1c74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b1c78:
    // 0x1b1c78: 0x24441ef0  addiu       $a0, $v0, 0x1EF0
    ctx->pc = 0x1b1c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_1b1c7c:
    // 0x1b1c7c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b1c80:
    // 0x1b1c80: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1b1c84:
    if (ctx->pc == 0x1B1C84u) {
        ctx->pc = 0x1B1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C80u;
        // 0x1b1c84: 0x8e860000  lw          $a2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C88u;
        goto label_1b1c88;
    }
    ctx->pc = 0x1B1C80u;
    {
        const bool branch_taken_0x1b1c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c80) {
            ctx->pc = 0x1B1C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1C80u;
            // 0x1b1c84: 0x8e860000  lw          $a2, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1C94u;
            goto label_1b1c94;
        }
    }
    ctx->pc = 0x1B1C88u;
label_1b1c88:
    // 0x1b1c88: 0xc06a164  jal         func_1A8590
label_1b1c8c:
    if (ctx->pc == 0x1B1C8Cu) {
        ctx->pc = 0x1B1C90u;
        goto label_1b1c90;
    }
    ctx->pc = 0x1B1C88u;
    SET_GPR_U32(ctx, 31, 0x1B1C90u);
    ctx->pc = 0x1A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8590u, 0x1B1C88u, 0x1B1C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C90u;
label_1b1c90:
    // 0x1b1c90: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1b1c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b1c94:
    // 0x1b1c94: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1b1c94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1c98:
    // 0x1b1c98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b1c9c:
    // 0x1b1c9c: 0x84c40038  lh          $a0, 0x38($a2)
    ctx->pc = 0x1b1c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 56)));
label_1b1ca0:
    // 0x1b1ca0: 0x8c433448  lw          $v1, 0x3448($v0)
    ctx->pc = 0x1b1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13384)));
label_1b1ca4:
    // 0x1b1ca4: 0x8cc5003c  lw          $a1, 0x3C($a2)
    ctx->pc = 0x1b1ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_1b1ca8:
    // 0x1b1ca8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1b1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1b1cac:
    // 0x1b1cac: 0xa0f809  jalr        $a1
label_1b1cb0:
    if (ctx->pc == 0x1B1CB0u) {
        ctx->pc = 0x1B1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CACu;
        // 0x1b1cb0: 0x3c3b00b  movn        $s6, $fp, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CB4u;
        goto label_1b1cb4;
    }
    ctx->pc = 0x1B1CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B1CB4u);
        ctx->pc = 0x1B1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CACu;
        // 0x1b1cb0: 0x3c3b00b  movn        $s6, $fp, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1CACu, 0x1B1CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1CB4u;
label_1b1cb4:
    // 0x1b1cb4: 0x24040430  addiu       $a0, $zero, 0x430
    ctx->pc = 0x1b1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
label_1b1cb8:
    // 0x1b1cb8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1b1cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b1cbc:
    // 0x1b1cbc: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1b1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1b1cc0:
    // 0x1b1cc0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1b1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1b1cc4:
    // 0x1b1cc4: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x1b1cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_1b1cc8:
    // 0x1b1cc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1ccc:
    // 0x1b1ccc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1b1cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1b1cd0:
    // 0x1b1cd0: 0x84650038  lh          $a1, 0x38($v1)
    ctx->pc = 0x1b1cd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1b1cd4:
    // 0x1b1cd4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1b1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1b1cd8:
    // 0x1b1cd8: 0x40f809  jalr        $v0
label_1b1cdc:
    if (ctx->pc == 0x1B1CDCu) {
        ctx->pc = 0x1B1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CD8u;
        // 0x1b1cdc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CE0u;
        goto label_1b1ce0;
    }
    ctx->pc = 0x1B1CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1CE0u);
        ctx->pc = 0x1B1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CD8u;
        // 0x1b1cdc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1CD8u, 0x1B1CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1CE0u;
label_1b1ce0:
    // 0x1b1ce0: 0x24040540  addiu       $a0, $zero, 0x540
    ctx->pc = 0x1b1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
label_1b1ce4:
    // 0x1b1ce4: 0x3405f420  ori         $a1, $zero, 0xF420
    ctx->pc = 0x1b1ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62496);
label_1b1ce8:
    // 0x1b1ce8: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x1b1ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1b1cec:
    // 0x1b1cec: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1b1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1b1cf0:
    // 0x1b1cf0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b1cf4:
    // 0x1b1cf4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b1cf8:
    // 0x1b1cf8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1b1cfc:
    if (ctx->pc == 0x1B1CFCu) {
        ctx->pc = 0x1B1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CF8u;
        // 0x1b1cfc: 0x2042018  mult        $a0, $s0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D00u;
        goto label_1b1d00;
    }
    ctx->pc = 0x1B1CF8u;
    {
        const bool branch_taken_0x1b1cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CF8u;
        // 0x1b1cfc: 0x2042018  mult        $a0, $s0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1cf8) {
            ctx->pc = 0x1B1D24u;
            goto label_1b1d24;
        }
    }
    ctx->pc = 0x1B1D00u;
label_1b1d00:
    // 0x1b1d00: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1b1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1b1d04:
    // 0x1b1d04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b1d08:
    // 0x1b1d08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b1d0c:
    // 0x1b1d0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1d10:
    // 0x1b1d10: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1b1d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1b1d14:
    // 0x1b1d14: 0x84650038  lh          $a1, 0x38($v1)
    ctx->pc = 0x1b1d14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1b1d18:
    // 0x1b1d18: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1b1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1b1d1c:
    // 0x1b1d1c: 0x40f809  jalr        $v0
label_1b1d20:
    if (ctx->pc == 0x1B1D20u) {
        ctx->pc = 0x1B1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D1Cu;
        // 0x1b1d20: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D24u;
        goto label_1b1d24;
    }
    ctx->pc = 0x1B1D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1D24u);
        ctx->pc = 0x1B1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D1Cu;
        // 0x1b1d20: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1D1Cu, 0x1B1D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1D24u;
label_1b1d24:
    // 0x1b1d24: 0x24040b10  addiu       $a0, $zero, 0xB10
    ctx->pc = 0x1b1d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
label_1b1d28:
    // 0x1b1d28: 0x3405fea0  ori         $a1, $zero, 0xFEA0
    ctx->pc = 0x1b1d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65184);
label_1b1d2c:
    // 0x1b1d2c: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x1b1d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1b1d30:
    // 0x1b1d30: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1b1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1b1d34:
    // 0x1b1d34: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b1d38:
    // 0x1b1d38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b1d3c:
    // 0x1b1d3c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_1b1d40:
    if (ctx->pc == 0x1B1D40u) {
        ctx->pc = 0x1B1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D3Cu;
        // 0x1b1d40: 0x24040450  addiu       $a0, $zero, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D44u;
        goto label_1b1d44;
    }
    ctx->pc = 0x1B1D3Cu;
    {
        const bool branch_taken_0x1b1d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d3c) {
            ctx->pc = 0x1B1D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1D3Cu;
            // 0x1b1d40: 0x24040450  addiu       $a0, $zero, 0x450 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1D70u;
            goto label_1b1d70;
        }
    }
    ctx->pc = 0x1B1D44u;
label_1b1d44:
    // 0x1b1d44: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1b1d44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b1d48:
    // 0x1b1d48: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1b1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1b1d4c:
    // 0x1b1d4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b1d50:
    // 0x1b1d50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b1d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b1d54:
    // 0x1b1d54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1d58:
    // 0x1b1d58: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1b1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1b1d5c:
    // 0x1b1d5c: 0x84650038  lh          $a1, 0x38($v1)
    ctx->pc = 0x1b1d5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1b1d60:
    // 0x1b1d60: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1b1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1b1d64:
    // 0x1b1d64: 0x40f809  jalr        $v0
label_1b1d68:
    if (ctx->pc == 0x1B1D68u) {
        ctx->pc = 0x1B1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D64u;
        // 0x1b1d68: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D6Cu;
        goto label_1b1d6c;
    }
    ctx->pc = 0x1B1D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1D6Cu);
        ctx->pc = 0x1B1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D64u;
        // 0x1b1d68: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1D64u, 0x1B1D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1D6Cu;
label_1b1d6c:
    // 0x1b1d6c: 0x24040450  addiu       $a0, $zero, 0x450
    ctx->pc = 0x1b1d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
label_1b1d70:
    // 0x1b1d70: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x1b1d70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_1b1d74:
    // 0x1b1d74: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1b1d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b1d78:
    // 0x1b1d78: 0x26940100  addiu       $s4, $s4, 0x100
    ctx->pc = 0x1b1d78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_1b1d7c:
    // 0x1b1d7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1d80:
    // 0x1b1d80: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b1d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1b1d84:
    // 0x1b1d84: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1b1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1b1d88:
    // 0x1b1d88: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1b1d8c:
    // 0x1b1d8c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x1b1d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_1b1d90:
    // 0x1b1d90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b1d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1d94:
    // 0x1b1d94: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1b1d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1b1d98:
    // 0x1b1d98: 0x84650038  lh          $a1, 0x38($v1)
    ctx->pc = 0x1b1d98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1b1d9c:
    // 0x1b1d9c: 0x8c66003c  lw          $a2, 0x3C($v1)
    ctx->pc = 0x1b1d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1b1da0:
    // 0x1b1da0: 0xc0f809  jalr        $a2
label_1b1da4:
    if (ctx->pc == 0x1B1DA4u) {
        ctx->pc = 0x1B1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DA0u;
        // 0x1b1da4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DA8u;
        goto label_1b1da8;
    }
    ctx->pc = 0x1B1DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B1DA8u);
        ctx->pc = 0x1B1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DA0u;
        // 0x1b1da4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1DA0u, 0x1B1DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1DA8u;
label_1b1da8:
    // 0x1b1da8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1b1da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b1dac:
    // 0x1b1dac: 0x5440ffb2  bnel        $v0, $zero, . + 4 + (-0x4E << 2)
label_1b1db0:
    if (ctx->pc == 0x1B1DB0u) {
        ctx->pc = 0x1B1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DACu;
        // 0x1b1db0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DB4u;
        goto label_1b1db4;
    }
    ctx->pc = 0x1B1DACu;
    {
        const bool branch_taken_0x1b1dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1dac) {
            ctx->pc = 0x1B1DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1DACu;
            // 0x1b1db0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1c78;
        }
    }
    ctx->pc = 0x1B1DB4u;
label_1b1db4:
    // 0x1b1db4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b1db8:
    // 0x1b1db8: 0xc107458  jal         func_41D160
label_1b1dbc:
    if (ctx->pc == 0x1B1DBCu) {
        ctx->pc = 0x1B1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DB8u;
        // 0x1b1dbc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DC0u;
        goto label_1b1dc0;
    }
    ctx->pc = 0x1B1DB8u;
    SET_GPR_U32(ctx, 31, 0x1B1DC0u);
    ctx->pc = 0x1B1DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DB8u;
    // 0x1b1dbc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1B1DB8u, 0x1B1DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DC0u;
label_1b1dc0:
    // 0x1b1dc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1b1dc4:
    if (ctx->pc == 0x1B1DC4u) {
        ctx->pc = 0x1B1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DC0u;
        // 0x1b1dc4: 0x34049350  ori         $a0, $zero, 0x9350 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37712);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DC8u;
        goto label_1b1dc8;
    }
    ctx->pc = 0x1B1DC0u;
    {
        const bool branch_taken_0x1b1dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1dc0) {
            ctx->pc = 0x1B1DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1DC0u;
            // 0x1b1dc4: 0x34049350  ori         $a0, $zero, 0x9350 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37712);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1DDCu;
            goto label_1b1ddc;
        }
    }
    ctx->pc = 0x1B1DC8u;
label_1b1dc8:
    // 0x1b1dc8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b1dcc:
    // 0x1b1dcc: 0x34846b30  ori         $a0, $a0, 0x6B30
    ctx->pc = 0x1b1dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27440);
label_1b1dd0:
    // 0x1b1dd0: 0xc06dae8  jal         func_1B6BA0
label_1b1dd4:
    if (ctx->pc == 0x1B1DD4u) {
        ctx->pc = 0x1B1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DD0u;
        // 0x1b1dd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DD8u;
        goto label_1b1dd8;
    }
    ctx->pc = 0x1B1DD0u;
    SET_GPR_U32(ctx, 31, 0x1B1DD8u);
    ctx->pc = 0x1B1DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DD0u;
    // 0x1b1dd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1B1DD0u, 0x1B1DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DD8u;
label_1b1dd8:
    // 0x1b1dd8: 0x34049350  ori         $a0, $zero, 0x9350
    ctx->pc = 0x1b1dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37712);
label_1b1ddc:
    // 0x1b1ddc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1de0:
    // 0x1b1de0: 0xc06ec70  jal         func_1BB1C0
label_1b1de4:
    if (ctx->pc == 0x1B1DE4u) {
        ctx->pc = 0x1B1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DE0u;
        // 0x1b1de4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DE8u;
        goto label_1b1de8;
    }
    ctx->pc = 0x1B1DE0u;
    SET_GPR_U32(ctx, 31, 0x1B1DE8u);
    ctx->pc = 0x1B1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DE0u;
    // 0x1b1de4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1B1DE0u, 0x1B1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DE8u;
label_1b1de8:
    // 0x1b1de8: 0x3404e150  ori         $a0, $zero, 0xE150
    ctx->pc = 0x1b1de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57680);
label_1b1dec:
    // 0x1b1dec: 0xc06ec70  jal         func_1BB1C0
label_1b1df0:
    if (ctx->pc == 0x1B1DF0u) {
        ctx->pc = 0x1B1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DECu;
        // 0x1b1df0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DF4u;
        goto label_1b1df4;
    }
    ctx->pc = 0x1B1DECu;
    SET_GPR_U32(ctx, 31, 0x1B1DF4u);
    ctx->pc = 0x1B1DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DECu;
    // 0x1b1df0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1B1DECu, 0x1B1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DF4u;
label_1b1df4:
    // 0x1b1df4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b1df8:
    // 0x1b1df8: 0x34841d60  ori         $a0, $a0, 0x1D60
    ctx->pc = 0x1b1df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7520);
label_1b1dfc:
    // 0x1b1dfc: 0xc06de24  jal         func_1B7890
label_1b1e00:
    if (ctx->pc == 0x1B1E00u) {
        ctx->pc = 0x1B1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DFCu;
        // 0x1b1e00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E04u;
        goto label_1b1e04;
    }
    ctx->pc = 0x1B1DFCu;
    SET_GPR_U32(ctx, 31, 0x1B1E04u);
    ctx->pc = 0x1B1E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DFCu;
    // 0x1b1e00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1B1DFCu, 0x1B1E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E04u;
label_1b1e04:
    // 0x1b1e04: 0xc06ee2a  jal         func_1BB8A8
label_1b1e08:
    if (ctx->pc == 0x1B1E08u) {
        ctx->pc = 0x1B1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E04u;
        // 0x1b1e08: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E0Cu;
        goto label_1b1e0c;
    }
    ctx->pc = 0x1B1E04u;
    SET_GPR_U32(ctx, 31, 0x1B1E0Cu);
    ctx->pc = 0x1B1E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E04u;
    // 0x1b1e08: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8A8u, 0x1B1E04u, 0x1B1E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E0Cu;
label_1b1e0c:
    // 0x1b1e0c: 0x3404acb0  ori         $a0, $zero, 0xACB0
    ctx->pc = 0x1b1e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44208);
label_1b1e10:
    // 0x1b1e10: 0xc070dfe  jal         func_1C37F8
label_1b1e14:
    if (ctx->pc == 0x1B1E14u) {
        ctx->pc = 0x1B1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E10u;
        // 0x1b1e14: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E18u;
        goto label_1b1e18;
    }
    ctx->pc = 0x1B1E10u;
    SET_GPR_U32(ctx, 31, 0x1B1E18u);
    ctx->pc = 0x1B1E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E10u;
    // 0x1b1e14: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C37F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C37F8u, 0x1B1E10u, 0x1B1E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E18u;
label_1b1e18:
    // 0x1b1e18: 0x16c0000b  bnez        $s6, . + 4 + (0xB << 2)
label_1b1e1c:
    if (ctx->pc == 0x1B1E1Cu) {
        ctx->pc = 0x1B1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E18u;
        // 0x1b1e1c: 0x34048dd0  ori         $a0, $zero, 0x8DD0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E20u;
        goto label_1b1e20;
    }
    ctx->pc = 0x1B1E18u;
    {
        const bool branch_taken_0x1b1e18 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E18u;
        // 0x1b1e1c: 0x34048dd0  ori         $a0, $zero, 0x8DD0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36304);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e18) {
            ctx->pc = 0x1B1E48u;
            goto label_1b1e48;
        }
    }
    ctx->pc = 0x1B1E20u;
label_1b1e20:
    // 0x1b1e20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1e24:
    // 0x1b1e24: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1b1e28:
    if (ctx->pc == 0x1B1E28u) {
        ctx->pc = 0x1B1E2Cu;
        goto label_1b1e2c;
    }
    ctx->pc = 0x1B1E24u;
    {
        const bool branch_taken_0x1b1e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e24) {
            ctx->pc = 0x1B1E48u;
            goto label_1b1e48;
        }
    }
    ctx->pc = 0x1B1E2Cu;
label_1b1e2c:
    // 0x1b1e2c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x1b1e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e30:
    // 0x1b1e30: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1b1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1b1e34:
    // 0x1b1e34: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b1e38:
    // 0x1b1e38: 0xc07258a  jal         func_1C9628
label_1b1e3c:
    if (ctx->pc == 0x1B1E3Cu) {
        ctx->pc = 0x1B1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E38u;
        // 0x1b1e3c: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E40u;
        goto label_1b1e40;
    }
    ctx->pc = 0x1B1E38u;
    SET_GPR_U32(ctx, 31, 0x1B1E40u);
    ctx->pc = 0x1B1E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E38u;
    // 0x1b1e3c: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9628u, 0x1B1E38u, 0x1B1E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E40u;
label_1b1e40:
    // 0x1b1e40: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1e44:
    if (ctx->pc == 0x1B1E44u) {
        ctx->pc = 0x1B1E48u;
        goto label_1b1e48;
    }
    ctx->pc = 0x1B1E40u;
    {
        const bool branch_taken_0x1b1e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e40) {
            ctx->pc = 0x1B1E50u;
            goto label_1b1e50;
        }
    }
    ctx->pc = 0x1B1E48u;
label_1b1e48:
    // 0x1b1e48: 0xc07236c  jal         func_1C8DB0
label_1b1e4c:
    if (ctx->pc == 0x1B1E4Cu) {
        ctx->pc = 0x1B1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E48u;
        // 0x1b1e4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E50u;
        goto label_1b1e50;
    }
    ctx->pc = 0x1B1E48u;
    SET_GPR_U32(ctx, 31, 0x1B1E50u);
    ctx->pc = 0x1B1E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E48u;
    // 0x1b1e4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DB0u, 0x1B1E48u, 0x1B1E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E50u;
label_1b1e50:
    // 0x1b1e50: 0x56c0000a  bnel        $s6, $zero, . + 4 + (0xA << 2)
label_1b1e54:
    if (ctx->pc == 0x1B1E54u) {
        ctx->pc = 0x1B1E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E50u;
        // 0x1b1e54: 0x34048a10  ori         $a0, $zero, 0x8A10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35344);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E58u;
        goto label_1b1e58;
    }
    ctx->pc = 0x1B1E50u;
    {
        const bool branch_taken_0x1b1e50 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e50) {
            ctx->pc = 0x1B1E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1E50u;
            // 0x1b1e54: 0x34048a10  ori         $a0, $zero, 0x8A10 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35344);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E7Cu;
            goto label_1b1e7c;
        }
    }
    ctx->pc = 0x1B1E58u;
label_1b1e58:
    // 0x1b1e58: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_1b1e5c:
    if (ctx->pc == 0x1B1E5Cu) {
        ctx->pc = 0x1B1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E58u;
        // 0x1b1e5c: 0x34048a10  ori         $a0, $zero, 0x8A10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35344);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E60u;
        goto label_1b1e60;
    }
    ctx->pc = 0x1B1E58u;
    {
        const bool branch_taken_0x1b1e58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E58u;
        // 0x1b1e5c: 0x34048a10  ori         $a0, $zero, 0x8A10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35344);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e58) {
            ctx->pc = 0x1B1E7Cu;
            goto label_1b1e7c;
        }
    }
    ctx->pc = 0x1B1E60u;
label_1b1e60:
    // 0x1b1e60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1e64:
    // 0x1b1e64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b1e68:
    if (ctx->pc == 0x1B1E68u) {
        ctx->pc = 0x1B1E6Cu;
        goto label_1b1e6c;
    }
    ctx->pc = 0x1B1E64u;
    {
        const bool branch_taken_0x1b1e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e64) {
            ctx->pc = 0x1B1E7Cu;
            goto label_1b1e7c;
        }
    }
    ctx->pc = 0x1B1E6Cu;
label_1b1e6c:
    // 0x1b1e6c: 0xc073a2e  jal         func_1CE8B8
label_1b1e70:
    if (ctx->pc == 0x1B1E70u) {
        ctx->pc = 0x1B1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E6Cu;
        // 0x1b1e70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E74u;
        goto label_1b1e74;
    }
    ctx->pc = 0x1B1E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E74u);
    ctx->pc = 0x1B1E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E6Cu;
    // 0x1b1e70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE8B8u, 0x1B1E6Cu, 0x1B1E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E74u;
label_1b1e74:
    // 0x1b1e74: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1e78:
    if (ctx->pc == 0x1B1E78u) {
        ctx->pc = 0x1B1E7Cu;
        goto label_1b1e7c;
    }
    ctx->pc = 0x1B1E74u;
    {
        const bool branch_taken_0x1b1e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e74) {
            ctx->pc = 0x1B1E84u;
            goto label_1b1e84;
        }
    }
    ctx->pc = 0x1B1E7Cu;
label_1b1e7c:
    // 0x1b1e7c: 0xc06ecac  jal         func_1BB2B0
label_1b1e80:
    if (ctx->pc == 0x1B1E80u) {
        ctx->pc = 0x1B1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E7Cu;
        // 0x1b1e80: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E84u;
        goto label_1b1e84;
    }
    ctx->pc = 0x1B1E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E84u);
    ctx->pc = 0x1B1E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E7Cu;
    // 0x1b1e80: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB2B0u, 0x1B1E7Cu, 0x1B1E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E84u;
label_1b1e84:
    // 0x1b1e84: 0x16c0001f  bnez        $s6, . + 4 + (0x1F << 2)
label_1b1e88:
    if (ctx->pc == 0x1B1E88u) {
        ctx->pc = 0x1B1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E84u;
        // 0x1b1e88: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E8Cu;
        goto label_1b1e8c;
    }
    ctx->pc = 0x1B1E84u;
    {
        const bool branch_taken_0x1b1e84 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E84u;
        // 0x1b1e88: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e84) {
            ctx->pc = 0x1B1F04u;
            goto label_1b1f04;
        }
    }
    ctx->pc = 0x1B1E8Cu;
label_1b1e8c:
    // 0x1b1e8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1e90:
    // 0x1b1e90: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_1b1e94:
    if (ctx->pc == 0x1B1E94u) {
        ctx->pc = 0x1B1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E90u;
        // 0x1b1e94: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E98u;
        goto label_1b1e98;
    }
    ctx->pc = 0x1B1E90u;
    {
        const bool branch_taken_0x1b1e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E90u;
        // 0x1b1e94: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e90) {
            ctx->pc = 0x1B1F08u;
            goto label_1b1f08;
        }
    }
    ctx->pc = 0x1B1E98u;
label_1b1e98:
    // 0x1b1e98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b1e9c:
    // 0x1b1e9c: 0xc107444  jal         func_41D110
label_1b1ea0:
    if (ctx->pc == 0x1B1EA0u) {
        ctx->pc = 0x1B1EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E9Cu;
        // 0x1b1ea0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1EA4u;
        goto label_1b1ea4;
    }
    ctx->pc = 0x1B1E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B1EA4u);
    ctx->pc = 0x1B1EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E9Cu;
    // 0x1b1ea0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1B1E9Cu, 0x1B1EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EA4u;
label_1b1ea4:
    // 0x1b1ea4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_1b1ea8:
    if (ctx->pc == 0x1B1EA8u) {
        ctx->pc = 0x1B1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EA4u;
        // 0x1b1ea8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1EACu;
        goto label_1b1eac;
    }
    ctx->pc = 0x1B1EA4u;
    {
        const bool branch_taken_0x1b1ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ea4) {
            ctx->pc = 0x1B1EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1EA4u;
            // 0x1b1ea8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1F04u;
            goto label_1b1f04;
        }
    }
    ctx->pc = 0x1B1EACu;
label_1b1eac:
    // 0x1b1eac: 0x26506b40  addiu       $s0, $s2, 0x6B40
    ctx->pc = 0x1b1eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 27456));
label_1b1eb0:
    // 0x1b1eb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b1eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1eb4:
    // 0x1b1eb4: 0x0  nop
    ctx->pc = 0x1b1eb4u;
    // NOP
label_1b1eb8:
    // 0x1b1eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ebc:
    // 0x1b1ebc: 0xc067e4a  jal         func_19F928
label_1b1ec0:
    if (ctx->pc == 0x1B1EC0u) {
        ctx->pc = 0x1B1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EBCu;
        // 0x1b1ec0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1EC4u;
        goto label_1b1ec4;
    }
    ctx->pc = 0x1B1EBCu;
    SET_GPR_U32(ctx, 31, 0x1B1EC4u);
    ctx->pc = 0x1B1EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EBCu;
    // 0x1b1ec0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F928u, 0x1B1EBCu, 0x1B1EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EC4u;
label_1b1ec4:
    // 0x1b1ec4: 0xc067e2e  jal         func_19F8B8
label_1b1ec8:
    if (ctx->pc == 0x1B1EC8u) {
        ctx->pc = 0x1B1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EC4u;
        // 0x1b1ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1ECCu;
        goto label_1b1ecc;
    }
    ctx->pc = 0x1B1EC4u;
    SET_GPR_U32(ctx, 31, 0x1B1ECCu);
    ctx->pc = 0x1B1EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EC4u;
    // 0x1b1ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F8B8u, 0x1B1EC4u, 0x1B1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1ECCu;
label_1b1ecc:
    // 0x1b1ecc: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1b1eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b1ed0:
    // 0x1b1ed0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1b1ed4:
    if (ctx->pc == 0x1B1ED4u) {
        ctx->pc = 0x1B1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ED0u;
        // 0x1b1ed4: 0x26100590  addiu       $s0, $s0, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1ED8u;
        goto label_1b1ed8;
    }
    ctx->pc = 0x1B1ED0u;
    {
        const bool branch_taken_0x1b1ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ED0u;
        // 0x1b1ed4: 0x26100590  addiu       $s0, $s0, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ed0) {
            ctx->pc = 0x1B1EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1eb8;
        }
    }
    ctx->pc = 0x1B1ED8u;
label_1b1ed8:
    // 0x1b1ed8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b1edc:
    if (ctx->pc == 0x1B1EDCu) {
        ctx->pc = 0x1B1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ED8u;
        // 0x1b1edc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1EE0u;
        goto label_1b1ee0;
    }
    ctx->pc = 0x1B1ED8u;
    {
        const bool branch_taken_0x1b1ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ED8u;
        // 0x1b1edc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ed8) {
            ctx->pc = 0x1B1F04u;
            goto label_1b1f04;
        }
    }
    ctx->pc = 0x1B1EE0u;
label_1b1ee0:
    // 0x1b1ee0: 0xc06c8e0  jal         func_1B2380
label_1b1ee4:
    if (ctx->pc == 0x1B1EE4u) {
        ctx->pc = 0x1B1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EE0u;
        // 0x1b1ee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1EE8u;
        goto label_1b1ee8;
    }
    ctx->pc = 0x1B1EE0u;
    SET_GPR_U32(ctx, 31, 0x1B1EE8u);
    ctx->pc = 0x1B1EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EE0u;
    // 0x1b1ee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x1B1EE0u, 0x1B1EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EE8u;
label_1b1ee8:
    // 0x1b1ee8: 0x8e0277a8  lw          $v0, 0x77A8($s0)
    ctx->pc = 0x1b1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30632)));
label_1b1eec:
    // 0x1b1eec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b1ef0:
    if (ctx->pc == 0x1B1EF0u) {
        ctx->pc = 0x1B1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EECu;
        // 0x1b1ef0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1EF4u;
        goto label_1b1ef4;
    }
    ctx->pc = 0x1B1EECu;
    {
        const bool branch_taken_0x1b1eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EECu;
        // 0x1b1ef0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1eec) {
            ctx->pc = 0x1B1F04u;
            goto label_1b1f04;
        }
    }
    ctx->pc = 0x1B1EF4u;
label_1b1ef4:
    // 0x1b1ef4: 0x3404e150  ori         $a0, $zero, 0xE150
    ctx->pc = 0x1b1ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57680);
label_1b1ef8:
    // 0x1b1ef8: 0xc06ec70  jal         func_1BB1C0
label_1b1efc:
    if (ctx->pc == 0x1B1EFCu) {
        ctx->pc = 0x1B1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EF8u;
        // 0x1b1efc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F00u;
        goto label_1b1f00;
    }
    ctx->pc = 0x1B1EF8u;
    SET_GPR_U32(ctx, 31, 0x1B1F00u);
    ctx->pc = 0x1B1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EF8u;
    // 0x1b1efc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1B1EF8u, 0x1B1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F00u;
label_1b1f00:
    // 0x1b1f00: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1b1f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b1f04:
    // 0x1b1f04: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1b1f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b1f08:
    // 0x1b1f08: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1b1f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1f0c:
    // 0x1b1f0c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1b1f0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b1f10:
    // 0x1b1f10: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b1f10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1f14:
    // 0x1b1f14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b1f14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1f18:
    // 0x1b1f18: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1b1f18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1f1c:
    // 0x1b1f1c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1b1f1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1f20:
    // 0x1b1f20: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1b1f20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1f24:
    // 0x1b1f24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1f28:
    // 0x1b1f28: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1b1f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b1f2c:
    // 0x1b1f2c: 0x3e00008  jr          $ra
label_1b1f30:
    if (ctx->pc == 0x1B1F30u) {
        ctx->pc = 0x1B1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F2Cu;
        // 0x1b1f30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F34u;
        goto label_1b1f34;
    }
    ctx->pc = 0x1B1F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F2Cu;
        // 0x1b1f30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1F34u;
label_1b1f34:
    // 0x1b1f34: 0x0  nop
    ctx->pc = 0x1b1f34u;
    // NOP
    ctx->pc = 0x1b1f38u;
}
