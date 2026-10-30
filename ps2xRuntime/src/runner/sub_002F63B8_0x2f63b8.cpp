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

// Function: sub_002F63B8
// Address: 0x2f63b8 - 0x2f6878
void sub_002F63B8_0x2f63b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F63B8_0x2f63b8");
#endif

    switch (ctx->pc) {
        case 0x2f63b8u: goto label_2f63b8;
        case 0x2f63bcu: goto label_2f63bc;
        case 0x2f63c0u: goto label_2f63c0;
        case 0x2f63c4u: goto label_2f63c4;
        case 0x2f63c8u: goto label_2f63c8;
        case 0x2f63ccu: goto label_2f63cc;
        case 0x2f63d0u: goto label_2f63d0;
        case 0x2f63d4u: goto label_2f63d4;
        case 0x2f63d8u: goto label_2f63d8;
        case 0x2f63dcu: goto label_2f63dc;
        case 0x2f63e0u: goto label_2f63e0;
        case 0x2f63e4u: goto label_2f63e4;
        case 0x2f63e8u: goto label_2f63e8;
        case 0x2f63ecu: goto label_2f63ec;
        case 0x2f63f0u: goto label_2f63f0;
        case 0x2f63f4u: goto label_2f63f4;
        case 0x2f63f8u: goto label_2f63f8;
        case 0x2f63fcu: goto label_2f63fc;
        case 0x2f6400u: goto label_2f6400;
        case 0x2f6404u: goto label_2f6404;
        case 0x2f6408u: goto label_2f6408;
        case 0x2f640cu: goto label_2f640c;
        case 0x2f6410u: goto label_2f6410;
        case 0x2f6414u: goto label_2f6414;
        case 0x2f6418u: goto label_2f6418;
        case 0x2f641cu: goto label_2f641c;
        case 0x2f6420u: goto label_2f6420;
        case 0x2f6424u: goto label_2f6424;
        case 0x2f6428u: goto label_2f6428;
        case 0x2f642cu: goto label_2f642c;
        case 0x2f6430u: goto label_2f6430;
        case 0x2f6434u: goto label_2f6434;
        case 0x2f6438u: goto label_2f6438;
        case 0x2f643cu: goto label_2f643c;
        case 0x2f6440u: goto label_2f6440;
        case 0x2f6444u: goto label_2f6444;
        case 0x2f6448u: goto label_2f6448;
        case 0x2f644cu: goto label_2f644c;
        case 0x2f6450u: goto label_2f6450;
        case 0x2f6454u: goto label_2f6454;
        case 0x2f6458u: goto label_2f6458;
        case 0x2f645cu: goto label_2f645c;
        case 0x2f6460u: goto label_2f6460;
        case 0x2f6464u: goto label_2f6464;
        case 0x2f6468u: goto label_2f6468;
        case 0x2f646cu: goto label_2f646c;
        case 0x2f6470u: goto label_2f6470;
        case 0x2f6474u: goto label_2f6474;
        case 0x2f6478u: goto label_2f6478;
        case 0x2f647cu: goto label_2f647c;
        case 0x2f6480u: goto label_2f6480;
        case 0x2f6484u: goto label_2f6484;
        case 0x2f6488u: goto label_2f6488;
        case 0x2f648cu: goto label_2f648c;
        case 0x2f6490u: goto label_2f6490;
        case 0x2f6494u: goto label_2f6494;
        case 0x2f6498u: goto label_2f6498;
        case 0x2f649cu: goto label_2f649c;
        case 0x2f64a0u: goto label_2f64a0;
        case 0x2f64a4u: goto label_2f64a4;
        case 0x2f64a8u: goto label_2f64a8;
        case 0x2f64acu: goto label_2f64ac;
        case 0x2f64b0u: goto label_2f64b0;
        case 0x2f64b4u: goto label_2f64b4;
        case 0x2f64b8u: goto label_2f64b8;
        case 0x2f64bcu: goto label_2f64bc;
        case 0x2f64c0u: goto label_2f64c0;
        case 0x2f64c4u: goto label_2f64c4;
        case 0x2f64c8u: goto label_2f64c8;
        case 0x2f64ccu: goto label_2f64cc;
        case 0x2f64d0u: goto label_2f64d0;
        case 0x2f64d4u: goto label_2f64d4;
        case 0x2f64d8u: goto label_2f64d8;
        case 0x2f64dcu: goto label_2f64dc;
        case 0x2f64e0u: goto label_2f64e0;
        case 0x2f64e4u: goto label_2f64e4;
        case 0x2f64e8u: goto label_2f64e8;
        case 0x2f64ecu: goto label_2f64ec;
        case 0x2f64f0u: goto label_2f64f0;
        case 0x2f64f4u: goto label_2f64f4;
        case 0x2f64f8u: goto label_2f64f8;
        case 0x2f64fcu: goto label_2f64fc;
        case 0x2f6500u: goto label_2f6500;
        case 0x2f6504u: goto label_2f6504;
        case 0x2f6508u: goto label_2f6508;
        case 0x2f650cu: goto label_2f650c;
        case 0x2f6510u: goto label_2f6510;
        case 0x2f6514u: goto label_2f6514;
        case 0x2f6518u: goto label_2f6518;
        case 0x2f651cu: goto label_2f651c;
        case 0x2f6520u: goto label_2f6520;
        case 0x2f6524u: goto label_2f6524;
        case 0x2f6528u: goto label_2f6528;
        case 0x2f652cu: goto label_2f652c;
        case 0x2f6530u: goto label_2f6530;
        case 0x2f6534u: goto label_2f6534;
        case 0x2f6538u: goto label_2f6538;
        case 0x2f653cu: goto label_2f653c;
        case 0x2f6540u: goto label_2f6540;
        case 0x2f6544u: goto label_2f6544;
        case 0x2f6548u: goto label_2f6548;
        case 0x2f654cu: goto label_2f654c;
        case 0x2f6550u: goto label_2f6550;
        case 0x2f6554u: goto label_2f6554;
        case 0x2f6558u: goto label_2f6558;
        case 0x2f655cu: goto label_2f655c;
        case 0x2f6560u: goto label_2f6560;
        case 0x2f6564u: goto label_2f6564;
        case 0x2f6568u: goto label_2f6568;
        case 0x2f656cu: goto label_2f656c;
        case 0x2f6570u: goto label_2f6570;
        case 0x2f6574u: goto label_2f6574;
        case 0x2f6578u: goto label_2f6578;
        case 0x2f657cu: goto label_2f657c;
        case 0x2f6580u: goto label_2f6580;
        case 0x2f6584u: goto label_2f6584;
        case 0x2f6588u: goto label_2f6588;
        case 0x2f658cu: goto label_2f658c;
        case 0x2f6590u: goto label_2f6590;
        case 0x2f6594u: goto label_2f6594;
        case 0x2f6598u: goto label_2f6598;
        case 0x2f659cu: goto label_2f659c;
        case 0x2f65a0u: goto label_2f65a0;
        case 0x2f65a4u: goto label_2f65a4;
        case 0x2f65a8u: goto label_2f65a8;
        case 0x2f65acu: goto label_2f65ac;
        case 0x2f65b0u: goto label_2f65b0;
        case 0x2f65b4u: goto label_2f65b4;
        case 0x2f65b8u: goto label_2f65b8;
        case 0x2f65bcu: goto label_2f65bc;
        case 0x2f65c0u: goto label_2f65c0;
        case 0x2f65c4u: goto label_2f65c4;
        case 0x2f65c8u: goto label_2f65c8;
        case 0x2f65ccu: goto label_2f65cc;
        case 0x2f65d0u: goto label_2f65d0;
        case 0x2f65d4u: goto label_2f65d4;
        case 0x2f65d8u: goto label_2f65d8;
        case 0x2f65dcu: goto label_2f65dc;
        case 0x2f65e0u: goto label_2f65e0;
        case 0x2f65e4u: goto label_2f65e4;
        case 0x2f65e8u: goto label_2f65e8;
        case 0x2f65ecu: goto label_2f65ec;
        case 0x2f65f0u: goto label_2f65f0;
        case 0x2f65f4u: goto label_2f65f4;
        case 0x2f65f8u: goto label_2f65f8;
        case 0x2f65fcu: goto label_2f65fc;
        case 0x2f6600u: goto label_2f6600;
        case 0x2f6604u: goto label_2f6604;
        case 0x2f6608u: goto label_2f6608;
        case 0x2f660cu: goto label_2f660c;
        case 0x2f6610u: goto label_2f6610;
        case 0x2f6614u: goto label_2f6614;
        case 0x2f6618u: goto label_2f6618;
        case 0x2f661cu: goto label_2f661c;
        case 0x2f6620u: goto label_2f6620;
        case 0x2f6624u: goto label_2f6624;
        case 0x2f6628u: goto label_2f6628;
        case 0x2f662cu: goto label_2f662c;
        case 0x2f6630u: goto label_2f6630;
        case 0x2f6634u: goto label_2f6634;
        case 0x2f6638u: goto label_2f6638;
        case 0x2f663cu: goto label_2f663c;
        case 0x2f6640u: goto label_2f6640;
        case 0x2f6644u: goto label_2f6644;
        case 0x2f6648u: goto label_2f6648;
        case 0x2f664cu: goto label_2f664c;
        case 0x2f6650u: goto label_2f6650;
        case 0x2f6654u: goto label_2f6654;
        case 0x2f6658u: goto label_2f6658;
        case 0x2f665cu: goto label_2f665c;
        case 0x2f6660u: goto label_2f6660;
        case 0x2f6664u: goto label_2f6664;
        case 0x2f6668u: goto label_2f6668;
        case 0x2f666cu: goto label_2f666c;
        case 0x2f6670u: goto label_2f6670;
        case 0x2f6674u: goto label_2f6674;
        case 0x2f6678u: goto label_2f6678;
        case 0x2f667cu: goto label_2f667c;
        case 0x2f6680u: goto label_2f6680;
        case 0x2f6684u: goto label_2f6684;
        case 0x2f6688u: goto label_2f6688;
        case 0x2f668cu: goto label_2f668c;
        case 0x2f6690u: goto label_2f6690;
        case 0x2f6694u: goto label_2f6694;
        case 0x2f6698u: goto label_2f6698;
        case 0x2f669cu: goto label_2f669c;
        case 0x2f66a0u: goto label_2f66a0;
        case 0x2f66a4u: goto label_2f66a4;
        case 0x2f66a8u: goto label_2f66a8;
        case 0x2f66acu: goto label_2f66ac;
        case 0x2f66b0u: goto label_2f66b0;
        case 0x2f66b4u: goto label_2f66b4;
        case 0x2f66b8u: goto label_2f66b8;
        case 0x2f66bcu: goto label_2f66bc;
        case 0x2f66c0u: goto label_2f66c0;
        case 0x2f66c4u: goto label_2f66c4;
        case 0x2f66c8u: goto label_2f66c8;
        case 0x2f66ccu: goto label_2f66cc;
        case 0x2f66d0u: goto label_2f66d0;
        case 0x2f66d4u: goto label_2f66d4;
        case 0x2f66d8u: goto label_2f66d8;
        case 0x2f66dcu: goto label_2f66dc;
        case 0x2f66e0u: goto label_2f66e0;
        case 0x2f66e4u: goto label_2f66e4;
        case 0x2f66e8u: goto label_2f66e8;
        case 0x2f66ecu: goto label_2f66ec;
        case 0x2f66f0u: goto label_2f66f0;
        case 0x2f66f4u: goto label_2f66f4;
        case 0x2f66f8u: goto label_2f66f8;
        case 0x2f66fcu: goto label_2f66fc;
        case 0x2f6700u: goto label_2f6700;
        case 0x2f6704u: goto label_2f6704;
        case 0x2f6708u: goto label_2f6708;
        case 0x2f670cu: goto label_2f670c;
        case 0x2f6710u: goto label_2f6710;
        case 0x2f6714u: goto label_2f6714;
        case 0x2f6718u: goto label_2f6718;
        case 0x2f671cu: goto label_2f671c;
        case 0x2f6720u: goto label_2f6720;
        case 0x2f6724u: goto label_2f6724;
        case 0x2f6728u: goto label_2f6728;
        case 0x2f672cu: goto label_2f672c;
        case 0x2f6730u: goto label_2f6730;
        case 0x2f6734u: goto label_2f6734;
        case 0x2f6738u: goto label_2f6738;
        case 0x2f673cu: goto label_2f673c;
        case 0x2f6740u: goto label_2f6740;
        case 0x2f6744u: goto label_2f6744;
        case 0x2f6748u: goto label_2f6748;
        case 0x2f674cu: goto label_2f674c;
        case 0x2f6750u: goto label_2f6750;
        case 0x2f6754u: goto label_2f6754;
        case 0x2f6758u: goto label_2f6758;
        case 0x2f675cu: goto label_2f675c;
        case 0x2f6760u: goto label_2f6760;
        case 0x2f6764u: goto label_2f6764;
        case 0x2f6768u: goto label_2f6768;
        case 0x2f676cu: goto label_2f676c;
        case 0x2f6770u: goto label_2f6770;
        case 0x2f6774u: goto label_2f6774;
        case 0x2f6778u: goto label_2f6778;
        case 0x2f677cu: goto label_2f677c;
        case 0x2f6780u: goto label_2f6780;
        case 0x2f6784u: goto label_2f6784;
        case 0x2f6788u: goto label_2f6788;
        case 0x2f678cu: goto label_2f678c;
        case 0x2f6790u: goto label_2f6790;
        case 0x2f6794u: goto label_2f6794;
        case 0x2f6798u: goto label_2f6798;
        case 0x2f679cu: goto label_2f679c;
        case 0x2f67a0u: goto label_2f67a0;
        case 0x2f67a4u: goto label_2f67a4;
        case 0x2f67a8u: goto label_2f67a8;
        case 0x2f67acu: goto label_2f67ac;
        case 0x2f67b0u: goto label_2f67b0;
        case 0x2f67b4u: goto label_2f67b4;
        case 0x2f67b8u: goto label_2f67b8;
        case 0x2f67bcu: goto label_2f67bc;
        case 0x2f67c0u: goto label_2f67c0;
        case 0x2f67c4u: goto label_2f67c4;
        case 0x2f67c8u: goto label_2f67c8;
        case 0x2f67ccu: goto label_2f67cc;
        case 0x2f67d0u: goto label_2f67d0;
        case 0x2f67d4u: goto label_2f67d4;
        case 0x2f67d8u: goto label_2f67d8;
        case 0x2f67dcu: goto label_2f67dc;
        case 0x2f67e0u: goto label_2f67e0;
        case 0x2f67e4u: goto label_2f67e4;
        case 0x2f67e8u: goto label_2f67e8;
        case 0x2f67ecu: goto label_2f67ec;
        case 0x2f67f0u: goto label_2f67f0;
        case 0x2f67f4u: goto label_2f67f4;
        case 0x2f67f8u: goto label_2f67f8;
        case 0x2f67fcu: goto label_2f67fc;
        case 0x2f6800u: goto label_2f6800;
        case 0x2f6804u: goto label_2f6804;
        case 0x2f6808u: goto label_2f6808;
        case 0x2f680cu: goto label_2f680c;
        case 0x2f6810u: goto label_2f6810;
        case 0x2f6814u: goto label_2f6814;
        case 0x2f6818u: goto label_2f6818;
        case 0x2f681cu: goto label_2f681c;
        case 0x2f6820u: goto label_2f6820;
        case 0x2f6824u: goto label_2f6824;
        case 0x2f6828u: goto label_2f6828;
        case 0x2f682cu: goto label_2f682c;
        case 0x2f6830u: goto label_2f6830;
        case 0x2f6834u: goto label_2f6834;
        case 0x2f6838u: goto label_2f6838;
        case 0x2f683cu: goto label_2f683c;
        case 0x2f6840u: goto label_2f6840;
        case 0x2f6844u: goto label_2f6844;
        case 0x2f6848u: goto label_2f6848;
        case 0x2f684cu: goto label_2f684c;
        case 0x2f6850u: goto label_2f6850;
        case 0x2f6854u: goto label_2f6854;
        case 0x2f6858u: goto label_2f6858;
        case 0x2f685cu: goto label_2f685c;
        case 0x2f6860u: goto label_2f6860;
        case 0x2f6864u: goto label_2f6864;
        case 0x2f6868u: goto label_2f6868;
        case 0x2f686cu: goto label_2f686c;
        case 0x2f6870u: goto label_2f6870;
        case 0x2f6874u: goto label_2f6874;
        default: break;
    }

    ctx->pc = 0x2f63b8u;

label_2f63b8:
    // 0x2f63b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f63b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2f63bc:
    // 0x2f63bc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f63c0:
    // 0x2f63c0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f63c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2f63c4:
    // 0x2f63c4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2f63c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2f63c8:
    // 0x2f63c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2f63c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2f63cc:
    // 0x2f63cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f63ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f63d0:
    // 0x2f63d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f63d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f63d4:
    // 0x2f63d4: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2f63d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f63d8:
    // 0x2f63d8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2f63d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2f63dc:
    // 0x2f63dc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2f63dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2f63e0:
    // 0x2f63e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f63e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2f63e4:
    // 0x2f63e4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f63e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2f63e8:
    // 0x2f63e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f63ec:
    // 0x2f63ec: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2f63ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f63f0:
    // 0x2f63f0: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x2f63f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2f63f4:
    // 0x2f63f4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2f63f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2f63f8:
    // 0x2f63f8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f63fc:
    // 0x2f63fc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2f63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2f6400:
    // 0x2f6400: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f6400u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f6404:
    // 0x2f6404: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f6404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2f6408:
    // 0x2f6408: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2f6408u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2f640c:
    // 0x2f640c: 0x1c40010f  bgtz        $v0, . + 4 + (0x10F << 2)
label_2f6410:
    if (ctx->pc == 0x2F6410u) {
        ctx->pc = 0x2F6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F640Cu;
        // 0x2f6410: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6414u;
        goto label_2f6414;
    }
    ctx->pc = 0x2F640Cu;
    {
        const bool branch_taken_0x2f640c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F640Cu;
        // 0x2f6410: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f640c) {
            ctx->pc = 0x2F684Cu;
            goto label_2f684c;
        }
    }
    ctx->pc = 0x2F6414u;
label_2f6414:
    // 0x2f6414: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2f6414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2f6418:
    // 0x2f6418: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2f641c:
    if (ctx->pc == 0x2F641Cu) {
        ctx->pc = 0x2F641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6418u;
        // 0x2f641c: 0xac800284  sw          $zero, 0x284($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6420u;
        goto label_2f6420;
    }
    ctx->pc = 0x2F6418u;
    {
        const bool branch_taken_0x2f6418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6418) {
            ctx->pc = 0x2F641Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6418u;
            // 0x2f641c: 0xac800284  sw          $zero, 0x284($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6420u;
            goto label_2f6420;
        }
    }
    ctx->pc = 0x2F6420u;
label_2f6420:
    // 0x2f6420: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x2f6420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_2f6424:
    // 0x2f6424: 0x54550037  bnel        $v0, $s5, . + 4 + (0x37 << 2)
label_2f6428:
    if (ctx->pc == 0x2F6428u) {
        ctx->pc = 0x2F6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6424u;
        // 0x2f6428: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F642Cu;
        goto label_2f642c;
    }
    ctx->pc = 0x2F6424u;
    {
        const bool branch_taken_0x2f6424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2f6424) {
            ctx->pc = 0x2F6428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6424u;
            // 0x2f6428: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6504u;
            goto label_2f6504;
        }
    }
    ctx->pc = 0x2F642Cu;
label_2f642c:
    // 0x2f642c: 0xc047e6c  jal         func_11F9B0
label_2f6430:
    if (ctx->pc == 0x2F6430u) {
        ctx->pc = 0x2F6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F642Cu;
        // 0x2f6430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6434u;
        goto label_2f6434;
    }
    ctx->pc = 0x2F642Cu;
    SET_GPR_U32(ctx, 31, 0x2F6434u);
    ctx->pc = 0x2F6430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F642Cu;
    // 0x2f6430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2F642Cu, 0x2F6434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6434u;
label_2f6434:
    // 0x2f6434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f6434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6438:
    // 0x2f6438: 0x50a00104  beql        $a1, $zero, . + 4 + (0x104 << 2)
label_2f643c:
    if (ctx->pc == 0x2F643Cu) {
        ctx->pc = 0x2F643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6438u;
        // 0x2f643c: 0xa2200010  sb          $zero, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6440u;
        goto label_2f6440;
    }
    ctx->pc = 0x2F6438u;
    {
        const bool branch_taken_0x2f6438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6438) {
            ctx->pc = 0x2F643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6438u;
            // 0x2f643c: 0xa2200010  sb          $zero, 0x10($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F684Cu;
            goto label_2f684c;
        }
    }
    ctx->pc = 0x2F6440u;
label_2f6440:
    // 0x2f6440: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f6440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f6444:
    // 0x2f6444: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x2f6444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_2f6448:
    // 0x2f6448: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x2f6448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_2f644c:
    // 0x2f644c: 0x40f809  jalr        $v0
label_2f6450:
    if (ctx->pc == 0x2F6450u) {
        ctx->pc = 0x2F6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F644Cu;
        // 0x2f6450: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6454u;
        goto label_2f6454;
    }
    ctx->pc = 0x2F644Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F6454u);
        ctx->pc = 0x2F6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F644Cu;
        // 0x2f6450: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F644Cu, 0x2F6454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6454u;
label_2f6454:
    // 0x2f6454: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f6454u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f6458:
    // 0x2f6458: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f645c:
    // 0x2f645c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2f6460:
    // 0x2f6460: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f6460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6464:
    // 0x2f6464: 0xc0a367c  jal         func_28D9F0
label_2f6468:
    if (ctx->pc == 0x2F6468u) {
        ctx->pc = 0x2F6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6464u;
        // 0x2f6468: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F646Cu;
        goto label_2f646c;
    }
    ctx->pc = 0x2F6464u;
    SET_GPR_U32(ctx, 31, 0x2F646Cu);
    ctx->pc = 0x2F6468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6464u;
    // 0x2f6468: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F6464u, 0x2F646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F646Cu;
label_2f646c:
    // 0x2f646c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f646cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6470:
    // 0x2f6470: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2f6474:
    if (ctx->pc == 0x2F6474u) {
        ctx->pc = 0x2F6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6470u;
        // 0x2f6474: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6478u;
        goto label_2f6478;
    }
    ctx->pc = 0x2F6470u;
    {
        const bool branch_taken_0x2f6470 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6470u;
        // 0x2f6474: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6470) {
            ctx->pc = 0x2F6498u;
            goto label_2f6498;
        }
    }
    ctx->pc = 0x2F6478u;
label_2f6478:
    // 0x2f6478: 0xc0884f6  jal         func_2213D8
label_2f647c:
    if (ctx->pc == 0x2F647Cu) {
        ctx->pc = 0x2F647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6478u;
        // 0x2f647c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6480u;
        goto label_2f6480;
    }
    ctx->pc = 0x2F6478u;
    SET_GPR_U32(ctx, 31, 0x2F6480u);
    ctx->pc = 0x2F647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6478u;
    // 0x2f647c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2F6478u, 0x2F6480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6480u;
label_2f6480:
    // 0x2f6480: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f6480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6484:
    // 0x2f6484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f6484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f6488:
    // 0x2f6488: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f6488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f648c:
    // 0x2f648c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f648cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2f6490:
    // 0x2f6490: 0xc0bf800  jal         func_2FE000
label_2f6494:
    if (ctx->pc == 0x2F6494u) {
        ctx->pc = 0x2F6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6490u;
        // 0x2f6494: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6498u;
        goto label_2f6498;
    }
    ctx->pc = 0x2F6490u;
    SET_GPR_U32(ctx, 31, 0x2F6498u);
    ctx->pc = 0x2F6494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6490u;
    // 0x2f6494: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2F6490u, 0x2F6498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6498u;
label_2f6498:
    // 0x2f6498: 0xc0a367c  jal         func_28D9F0
label_2f649c:
    if (ctx->pc == 0x2F649Cu) {
        ctx->pc = 0x2F649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6498u;
        // 0x2f649c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F64A0u;
        goto label_2f64a0;
    }
    ctx->pc = 0x2F6498u;
    SET_GPR_U32(ctx, 31, 0x2F64A0u);
    ctx->pc = 0x2F649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6498u;
    // 0x2f649c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F6498u, 0x2F64A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64A0u;
label_2f64a0:
    // 0x2f64a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f64a4:
    if (ctx->pc == 0x2F64A4u) {
        ctx->pc = 0x2F64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64A0u;
        // 0x2f64a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F64A8u;
        goto label_2f64a8;
    }
    ctx->pc = 0x2F64A0u;
    {
        const bool branch_taken_0x2f64a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64A0u;
        // 0x2f64a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64a0) {
            ctx->pc = 0x2F64C4u;
            goto label_2f64c4;
        }
    }
    ctx->pc = 0x2F64A8u;
label_2f64a8:
    // 0x2f64a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f64a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f64ac:
    // 0x2f64ac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f64acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f64b0:
    // 0x2f64b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f64b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f64b4:
    // 0x2f64b4: 0x24060057  addiu       $a2, $zero, 0x57
    ctx->pc = 0x2f64b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_2f64b8:
    // 0x2f64b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f64b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f64bc:
    // 0x2f64bc: 0xc0bee1a  jal         func_2FB868
label_2f64c0:
    if (ctx->pc == 0x2F64C0u) {
        ctx->pc = 0x2F64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64BCu;
        // 0x2f64c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F64C4u;
        goto label_2f64c4;
    }
    ctx->pc = 0x2F64BCu;
    SET_GPR_U32(ctx, 31, 0x2F64C4u);
    ctx->pc = 0x2F64C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F64BCu;
    // 0x2f64c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB868u, 0x2F64BCu, 0x2F64C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64C4u;
label_2f64c4:
    // 0x2f64c4: 0xc0a367c  jal         func_28D9F0
label_2f64c8:
    if (ctx->pc == 0x2F64C8u) {
        ctx->pc = 0x2F64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64C4u;
        // 0x2f64c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F64CCu;
        goto label_2f64cc;
    }
    ctx->pc = 0x2F64C4u;
    SET_GPR_U32(ctx, 31, 0x2F64CCu);
    ctx->pc = 0x2F64C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F64C4u;
    // 0x2f64c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F64C4u, 0x2F64CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64CCu;
label_2f64cc:
    // 0x2f64cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f64d0:
    if (ctx->pc == 0x2F64D0u) {
        ctx->pc = 0x2F64D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64CCu;
        // 0x2f64d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F64D4u;
        goto label_2f64d4;
    }
    ctx->pc = 0x2F64CCu;
    {
        const bool branch_taken_0x2f64cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64CCu;
        // 0x2f64d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64cc) {
            ctx->pc = 0x2F64FCu;
            goto label_2f64fc;
        }
    }
    ctx->pc = 0x2F64D4u;
label_2f64d4:
    // 0x2f64d4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2f64d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2f64d8:
    // 0x2f64d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f64d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f64dc:
    // 0x2f64dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f64dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f64e0:
    // 0x2f64e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f64e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f64e4:
    // 0x2f64e4: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2f64e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2f64e8:
    // 0x2f64e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f64e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f64ec:
    // 0x2f64ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f64ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f64f0:
    // 0x2f64f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f64f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f64f4:
    // 0x2f64f4: 0xc0be968  jal         func_2FA5A0
label_2f64f8:
    if (ctx->pc == 0x2F64F8u) {
        ctx->pc = 0x2F64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64F4u;
        // 0x2f64f8: 0x240900c8  addiu       $t1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F64FCu;
        goto label_2f64fc;
    }
    ctx->pc = 0x2F64F4u;
    SET_GPR_U32(ctx, 31, 0x2F64FCu);
    ctx->pc = 0x2F64F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F64F4u;
    // 0x2f64f8: 0x240900c8  addiu       $t1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F64F4u, 0x2F64FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64FCu;
label_2f64fc:
    // 0x2f64fc: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_2f6500:
    if (ctx->pc == 0x2F6500u) {
        ctx->pc = 0x2F6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64FCu;
        // 0x2f6500: 0xa2200010  sb          $zero, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6504u;
        goto label_2f6504;
    }
    ctx->pc = 0x2F64FCu;
    {
        const bool branch_taken_0x2f64fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64FCu;
        // 0x2f6500: 0xa2200010  sb          $zero, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64fc) {
            ctx->pc = 0x2F684Cu;
            goto label_2f684c;
        }
    }
    ctx->pc = 0x2F6504u;
label_2f6504:
    // 0x2f6504: 0xc0e409a  jal         func_390268
label_2f6508:
    if (ctx->pc == 0x2F6508u) {
        ctx->pc = 0x2F6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6504u;
        // 0x2f6508: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F650Cu;
        goto label_2f650c;
    }
    ctx->pc = 0x2F6504u;
    SET_GPR_U32(ctx, 31, 0x2F650Cu);
    ctx->pc = 0x2F6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6504u;
    // 0x2f6508: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F6504u, 0x2F650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F650Cu;
label_2f650c:
    // 0x2f650c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6510:
    // 0x2f6510: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f6510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6514:
    // 0x2f6514: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2f6514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f6518:
    // 0x2f6518: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2f6518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2f651c:
    // 0x2f651c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f6520:
    if (ctx->pc == 0x2F6520u) {
        ctx->pc = 0x2F6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F651Cu;
        // 0x2f6520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6524u;
        goto label_2f6524;
    }
    ctx->pc = 0x2F651Cu;
    {
        const bool branch_taken_0x2f651c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F651Cu;
        // 0x2f6520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f651c) {
            ctx->pc = 0x2F6534u;
            goto label_2f6534;
        }
    }
    ctx->pc = 0x2F6524u;
label_2f6524:
    // 0x2f6524: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f6524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f6528:
    // 0x2f6528: 0xc0a7c8c  jal         func_29F230
label_2f652c:
    if (ctx->pc == 0x2F652Cu) {
        ctx->pc = 0x2F652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6528u;
        // 0x2f652c: 0x34a5fbf9  ori         $a1, $a1, 0xFBF9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64505);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6530u;
        goto label_2f6530;
    }
    ctx->pc = 0x2F6528u;
    SET_GPR_U32(ctx, 31, 0x2F6530u);
    ctx->pc = 0x2F652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6528u;
    // 0x2f652c: 0x34a5fbf9  ori         $a1, $a1, 0xFBF9 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2F6528u, 0x2F6530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6530u;
label_2f6530:
    // 0x2f6530: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f6530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6534:
    // 0x2f6534: 0x524000a7  beql        $s2, $zero, . + 4 + (0xA7 << 2)
label_2f6538:
    if (ctx->pc == 0x2F6538u) {
        ctx->pc = 0x2F6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6534u;
        // 0x2f6538: 0x86050002  lh          $a1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F653Cu;
        goto label_2f653c;
    }
    ctx->pc = 0x2F6534u;
    {
        const bool branch_taken_0x2f6534 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6534) {
            ctx->pc = 0x2F6538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6534u;
            // 0x2f6538: 0x86050002  lh          $a1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F67D4u;
            goto label_2f67d4;
        }
    }
    ctx->pc = 0x2F653Cu;
label_2f653c:
    // 0x2f653c: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2f653cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2f6540:
    // 0x2f6540: 0x264400c4  addiu       $a0, $s2, 0xC4
    ctx->pc = 0x2f6540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_2f6544:
    // 0x2f6544: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f6544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f6548:
    // 0x2f6548: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2f6548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2f654c:
    // 0x2f654c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f654cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f6550:
    // 0x2f6550: 0xc0e409a  jal         func_390268
label_2f6554:
    if (ctx->pc == 0x2F6554u) {
        ctx->pc = 0x2F6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6550u;
        // 0x2f6554: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6558u;
        goto label_2f6558;
    }
    ctx->pc = 0x2F6550u;
    SET_GPR_U32(ctx, 31, 0x2F6558u);
    ctx->pc = 0x2F6554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6550u;
    // 0x2f6554: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F6550u, 0x2F6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6558u;
label_2f6558:
    // 0x2f6558: 0x10530058  beq         $v0, $s3, . + 4 + (0x58 << 2)
label_2f655c:
    if (ctx->pc == 0x2F655Cu) {
        ctx->pc = 0x2F655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6558u;
        // 0x2f655c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6560u;
        goto label_2f6560;
    }
    ctx->pc = 0x2F6558u;
    {
        const bool branch_taken_0x2f6558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6558u;
        // 0x2f655c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6558) {
            ctx->pc = 0x2F66BCu;
            goto label_2f66bc;
        }
    }
    ctx->pc = 0x2F6560u;
label_2f6560:
    // 0x2f6560: 0xc0cdb38  jal         func_336CE0
label_2f6564:
    if (ctx->pc == 0x2F6564u) {
        ctx->pc = 0x2F6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6560u;
        // 0x2f6564: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6568u;
        goto label_2f6568;
    }
    ctx->pc = 0x2F6560u;
    SET_GPR_U32(ctx, 31, 0x2F6568u);
    ctx->pc = 0x2F6564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6560u;
    // 0x2f6564: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F6560u, 0x2F6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6568u;
label_2f6568:
    // 0x2f6568: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f6568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f656c:
    // 0x2f656c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2f656cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2f6570:
    // 0x2f6570: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f6570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f6574:
    // 0x2f6574: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f6574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f6578:
    // 0x2f6578: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2f6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f657c:
    // 0x2f657c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f657cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2f6580:
    // 0x2f6580: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2f6580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2f6584:
    // 0x2f6584: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f6584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6588:
    // 0x2f6588: 0x0  nop
    ctx->pc = 0x2f6588u;
    // NOP
label_2f658c:
    // 0x2f658c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2f6590:
    if (ctx->pc == 0x2F6590u) {
        ctx->pc = 0x2F6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F658Cu;
        // 0x2f6590: 0xafb50030  sw          $s5, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6594u;
        goto label_2f6594;
    }
    ctx->pc = 0x2F658Cu;
    {
        const bool branch_taken_0x2f658c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F658Cu;
        // 0x2f6590: 0xafb50030  sw          $s5, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f658c) {
            ctx->pc = 0x2F65B0u;
            goto label_2f65b0;
        }
    }
    ctx->pc = 0x2F6594u;
label_2f6594:
    // 0x2f6594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f6594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f6598:
    // 0x2f6598: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f6598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f659c:
    // 0x2f659c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f659cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f65a0:
    // 0x2f65a0: 0xc0888a2  jal         func_222288
label_2f65a4:
    if (ctx->pc == 0x2F65A4u) {
        ctx->pc = 0x2F65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65A0u;
        // 0x2f65a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65A8u;
        goto label_2f65a8;
    }
    ctx->pc = 0x2F65A0u;
    SET_GPR_U32(ctx, 31, 0x2F65A8u);
    ctx->pc = 0x2F65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65A0u;
    // 0x2f65a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2F65A0u, 0x2F65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65A8u;
label_2f65a8:
    // 0x2f65a8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2f65ac:
    if (ctx->pc == 0x2F65ACu) {
        ctx->pc = 0x2F65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65A8u;
        // 0x2f65ac: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65B0u;
        goto label_2f65b0;
    }
    ctx->pc = 0x2F65A8u;
    {
        const bool branch_taken_0x2f65a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65A8u;
        // 0x2f65ac: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65a8) {
            ctx->pc = 0x2F6600u;
            goto label_2f6600;
        }
    }
    ctx->pc = 0x2F65B0u;
label_2f65b0:
    // 0x2f65b0: 0xc0a4e54  jal         func_293950
label_2f65b4:
    if (ctx->pc == 0x2F65B4u) {
        ctx->pc = 0x2F65B8u;
        goto label_2f65b8;
    }
    ctx->pc = 0x2F65B0u;
    SET_GPR_U32(ctx, 31, 0x2F65B8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2F65B0u, 0x2F65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65B8u;
label_2f65b8:
    // 0x2f65b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f65b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f65bc:
    // 0x2f65bc: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2f65c0:
    if (ctx->pc == 0x2F65C0u) {
        ctx->pc = 0x2F65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65BCu;
        // 0x2f65c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65C4u;
        goto label_2f65c4;
    }
    ctx->pc = 0x2F65BCu;
    {
        const bool branch_taken_0x2f65bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f65bc) {
            ctx->pc = 0x2F65C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F65BCu;
            // 0x2f65c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F65F0u;
            goto label_2f65f0;
        }
    }
    ctx->pc = 0x2F65C4u;
label_2f65c4:
    // 0x2f65c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2f65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f65c8:
    // 0x2f65c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f65c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f65cc:
    // 0x2f65cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f65d0:
    // 0x2f65d0: 0x40f809  jalr        $v0
label_2f65d4:
    if (ctx->pc == 0x2F65D4u) {
        ctx->pc = 0x2F65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65D0u;
        // 0x2f65d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65D8u;
        goto label_2f65d8;
    }
    ctx->pc = 0x2F65D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F65D8u);
        ctx->pc = 0x2F65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65D0u;
        // 0x2f65d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F65D0u, 0x2F65D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F65D8u;
label_2f65d8:
    // 0x2f65d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f65d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f65dc:
    // 0x2f65dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f65dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f65e0:
    // 0x2f65e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f65e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f65e4:
    // 0x2f65e4: 0xc0abd6c  jal         func_2AF5B0
label_2f65e8:
    if (ctx->pc == 0x2F65E8u) {
        ctx->pc = 0x2F65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65E4u;
        // 0x2f65e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65ECu;
        goto label_2f65ec;
    }
    ctx->pc = 0x2F65E4u;
    SET_GPR_U32(ctx, 31, 0x2F65ECu);
    ctx->pc = 0x2F65E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65E4u;
    // 0x2f65e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2F65E4u, 0x2F65ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65ECu;
label_2f65ec:
    // 0x2f65ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f65f0:
    // 0x2f65f0: 0xc0a35d6  jal         func_28D758
label_2f65f4:
    if (ctx->pc == 0x2F65F4u) {
        ctx->pc = 0x2F65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65F0u;
        // 0x2f65f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65F8u;
        goto label_2f65f8;
    }
    ctx->pc = 0x2F65F0u;
    SET_GPR_U32(ctx, 31, 0x2F65F8u);
    ctx->pc = 0x2F65F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65F0u;
    // 0x2f65f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2F65F0u, 0x2F65F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65F8u;
label_2f65f8:
    // 0x2f65f8: 0x10000095  b           . + 4 + (0x95 << 2)
label_2f65fc:
    if (ctx->pc == 0x2F65FCu) {
        ctx->pc = 0x2F65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65F8u;
        // 0x2f65fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6600u;
        goto label_2f6600;
    }
    ctx->pc = 0x2F65F8u;
    {
        const bool branch_taken_0x2f65f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65F8u;
        // 0x2f65fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65f8) {
            ctx->pc = 0x2F6850u;
            goto label_2f6850;
        }
    }
    ctx->pc = 0x2F6600u;
label_2f6600:
    // 0x2f6600: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2f6600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f6604:
    // 0x2f6604: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2f6608:
    if (ctx->pc == 0x2F6608u) {
        ctx->pc = 0x2F6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6604u;
        // 0x2f6608: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F660Cu;
        goto label_2f660c;
    }
    ctx->pc = 0x2F6604u;
    {
        const bool branch_taken_0x2f6604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6604u;
        // 0x2f6608: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6604) {
            ctx->pc = 0x2F662Cu;
            goto label_2f662c;
        }
    }
    ctx->pc = 0x2F660Cu;
label_2f660c:
    // 0x2f660c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2f6610:
    if (ctx->pc == 0x2F6610u) {
        ctx->pc = 0x2F6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F660Cu;
        // 0x2f6610: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6614u;
        goto label_2f6614;
    }
    ctx->pc = 0x2F660Cu;
    {
        const bool branch_taken_0x2f660c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F660Cu;
        // 0x2f6610: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f660c) {
            ctx->pc = 0x2F662Cu;
            goto label_2f662c;
        }
    }
    ctx->pc = 0x2F6614u;
label_2f6614:
    // 0x2f6614: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f6618:
    if (ctx->pc == 0x2F6618u) {
        ctx->pc = 0x2F6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6614u;
        // 0x2f6618: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F661Cu;
        goto label_2f661c;
    }
    ctx->pc = 0x2F6614u;
    {
        const bool branch_taken_0x2f6614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6614u;
        // 0x2f6618: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6614) {
            ctx->pc = 0x2F662Cu;
            goto label_2f662c;
        }
    }
    ctx->pc = 0x2F661Cu;
label_2f661c:
    // 0x2f661c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f6620:
    if (ctx->pc == 0x2F6620u) {
        ctx->pc = 0x2F6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F661Cu;
        // 0x2f6620: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6624u;
        goto label_2f6624;
    }
    ctx->pc = 0x2F661Cu;
    {
        const bool branch_taken_0x2f661c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F661Cu;
        // 0x2f6620: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f661c) {
            ctx->pc = 0x2F662Cu;
            goto label_2f662c;
        }
    }
    ctx->pc = 0x2F6624u;
label_2f6624:
    // 0x2f6624: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_2f6628:
    if (ctx->pc == 0x2F6628u) {
        ctx->pc = 0x2F662Cu;
        goto label_2f662c;
    }
    ctx->pc = 0x2F6624u;
    {
        const bool branch_taken_0x2f6624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6624) {
            ctx->pc = 0x2F6684u;
            goto label_2f6684;
        }
    }
    ctx->pc = 0x2F662Cu;
label_2f662c:
    // 0x2f662c: 0xc0a367c  jal         func_28D9F0
label_2f6630:
    if (ctx->pc == 0x2F6630u) {
        ctx->pc = 0x2F6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F662Cu;
        // 0x2f6630: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6634u;
        goto label_2f6634;
    }
    ctx->pc = 0x2F662Cu;
    SET_GPR_U32(ctx, 31, 0x2F6634u);
    ctx->pc = 0x2F6630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F662Cu;
    // 0x2f6630: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F662Cu, 0x2F6634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6634u;
label_2f6634:
    // 0x2f6634: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6638:
    // 0x2f6638: 0x12000085  beqz        $s0, . + 4 + (0x85 << 2)
label_2f663c:
    if (ctx->pc == 0x2F663Cu) {
        ctx->pc = 0x2F663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6638u;
        // 0x2f663c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6640u;
        goto label_2f6640;
    }
    ctx->pc = 0x2F6638u;
    {
        const bool branch_taken_0x2f6638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6638u;
        // 0x2f663c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6638) {
            ctx->pc = 0x2F6850u;
            goto label_2f6850;
        }
    }
    ctx->pc = 0x2F6640u;
label_2f6640:
    // 0x2f6640: 0xc087420  jal         func_21D080
label_2f6644:
    if (ctx->pc == 0x2F6644u) {
        ctx->pc = 0x2F6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6640u;
        // 0x2f6644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6648u;
        goto label_2f6648;
    }
    ctx->pc = 0x2F6640u;
    SET_GPR_U32(ctx, 31, 0x2F6648u);
    ctx->pc = 0x2F6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6640u;
    // 0x2f6644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2F6640u, 0x2F6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6648u;
label_2f6648:
    // 0x2f6648: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2f6648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2f664c:
    // 0x2f664c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f664cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6650:
    // 0x2f6650: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2f6650u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2f6654:
    // 0x2f6654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6658:
    // 0x2f6658: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2f6658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2f665c:
    // 0x2f665c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2f665cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2f6660:
    // 0x2f6660: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f6660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f6664:
    // 0x2f6664: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f6664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6668:
    // 0x2f6668: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2f6668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f666c:
    // 0x2f666c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f666cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6670:
    // 0x2f6670: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f6670u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6674:
    // 0x2f6674: 0xc0bee7a  jal         func_2FB9E8
label_2f6678:
    if (ctx->pc == 0x2F6678u) {
        ctx->pc = 0x2F6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6674u;
        // 0x2f6678: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F667Cu;
        goto label_2f667c;
    }
    ctx->pc = 0x2F6674u;
    SET_GPR_U32(ctx, 31, 0x2F667Cu);
    ctx->pc = 0x2F6678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6674u;
    // 0x2f6678: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2F6674u, 0x2F667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F667Cu;
label_2f667c:
    // 0x2f667c: 0x10000074  b           . + 4 + (0x74 << 2)
label_2f6680:
    if (ctx->pc == 0x2F6680u) {
        ctx->pc = 0x2F6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F667Cu;
        // 0x2f6680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6684u;
        goto label_2f6684;
    }
    ctx->pc = 0x2F667Cu;
    {
        const bool branch_taken_0x2f667c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F667Cu;
        // 0x2f6680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f667c) {
            ctx->pc = 0x2F6850u;
            goto label_2f6850;
        }
    }
    ctx->pc = 0x2F6684u;
label_2f6684:
    // 0x2f6684: 0xc0a4e54  jal         func_293950
label_2f6688:
    if (ctx->pc == 0x2F6688u) {
        ctx->pc = 0x2F668Cu;
        goto label_2f668c;
    }
    ctx->pc = 0x2F6684u;
    SET_GPR_U32(ctx, 31, 0x2F668Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2F6684u, 0x2F668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F668Cu;
label_2f668c:
    // 0x2f668c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f668cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6690:
    // 0x2f6690: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2f6694:
    if (ctx->pc == 0x2F6694u) {
        ctx->pc = 0x2F6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6690u;
        // 0x2f6694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6698u;
        goto label_2f6698;
    }
    ctx->pc = 0x2F6690u;
    {
        const bool branch_taken_0x2f6690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6690u;
        // 0x2f6694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6690) {
            ctx->pc = 0x2F66A8u;
            goto label_2f66a8;
        }
    }
    ctx->pc = 0x2F6698u;
label_2f6698:
    // 0x2f6698: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f6698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f669c:
    // 0x2f669c: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2f669cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2f66a0:
    // 0x2f66a0: 0xc0acb08  jal         func_2B2C20
label_2f66a4:
    if (ctx->pc == 0x2F66A4u) {
        ctx->pc = 0x2F66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66A0u;
        // 0x2f66a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66A8u;
        goto label_2f66a8;
    }
    ctx->pc = 0x2F66A0u;
    SET_GPR_U32(ctx, 31, 0x2F66A8u);
    ctx->pc = 0x2F66A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66A0u;
    // 0x2f66a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2F66A0u, 0x2F66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66A8u;
label_2f66a8:
    // 0x2f66a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f66a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f66ac:
    // 0x2f66ac: 0xc0a35d6  jal         func_28D758
label_2f66b0:
    if (ctx->pc == 0x2F66B0u) {
        ctx->pc = 0x2F66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66ACu;
        // 0x2f66b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66B4u;
        goto label_2f66b4;
    }
    ctx->pc = 0x2F66ACu;
    SET_GPR_U32(ctx, 31, 0x2F66B4u);
    ctx->pc = 0x2F66B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66ACu;
    // 0x2f66b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2F66ACu, 0x2F66B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66B4u;
label_2f66b4:
    // 0x2f66b4: 0x10000066  b           . + 4 + (0x66 << 2)
label_2f66b8:
    if (ctx->pc == 0x2F66B8u) {
        ctx->pc = 0x2F66B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66B4u;
        // 0x2f66b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66BCu;
        goto label_2f66bc;
    }
    ctx->pc = 0x2F66B4u;
    {
        const bool branch_taken_0x2f66b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66B4u;
        // 0x2f66b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66b4) {
            ctx->pc = 0x2F6850u;
            goto label_2f6850;
        }
    }
    ctx->pc = 0x2F66BCu;
label_2f66bc:
    // 0x2f66bc: 0xc088e70  jal         func_2239C0
label_2f66c0:
    if (ctx->pc == 0x2F66C0u) {
        ctx->pc = 0x2F66C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66BCu;
        // 0x2f66c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66C4u;
        goto label_2f66c4;
    }
    ctx->pc = 0x2F66BCu;
    SET_GPR_U32(ctx, 31, 0x2F66C4u);
    ctx->pc = 0x2F66C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66BCu;
    // 0x2f66c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x2F66BCu, 0x2F66C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66C4u;
label_2f66c4:
    // 0x2f66c4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2f66c8:
    if (ctx->pc == 0x2F66C8u) {
        ctx->pc = 0x2F66CCu;
        goto label_2f66cc;
    }
    ctx->pc = 0x2F66C4u;
    {
        const bool branch_taken_0x2f66c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f66c4) {
            ctx->pc = 0x2F6718u;
            goto label_2f6718;
        }
    }
    ctx->pc = 0x2F66CCu;
label_2f66cc:
    // 0x2f66cc: 0xc088e40  jal         func_223900
label_2f66d0:
    if (ctx->pc == 0x2F66D0u) {
        ctx->pc = 0x2F66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66CCu;
        // 0x2f66d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66D4u;
        goto label_2f66d4;
    }
    ctx->pc = 0x2F66CCu;
    SET_GPR_U32(ctx, 31, 0x2F66D4u);
    ctx->pc = 0x2F66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66CCu;
    // 0x2f66d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2F66CCu, 0x2F66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66D4u;
label_2f66d4:
    // 0x2f66d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f66d8:
    if (ctx->pc == 0x2F66D8u) {
        ctx->pc = 0x2F66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66D4u;
        // 0x2f66d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66DCu;
        goto label_2f66dc;
    }
    ctx->pc = 0x2F66D4u;
    {
        const bool branch_taken_0x2f66d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66D4u;
        // 0x2f66d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66d4) {
            ctx->pc = 0x2F66ECu;
            goto label_2f66ec;
        }
    }
    ctx->pc = 0x2F66DCu;
label_2f66dc:
    // 0x2f66dc: 0xc08c424  jal         func_231090
label_2f66e0:
    if (ctx->pc == 0x2F66E0u) {
        ctx->pc = 0x2F66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66DCu;
        // 0x2f66e0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66E4u;
        goto label_2f66e4;
    }
    ctx->pc = 0x2F66DCu;
    SET_GPR_U32(ctx, 31, 0x2F66E4u);
    ctx->pc = 0x2F66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66DCu;
    // 0x2f66e0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231090u, 0x2F66DCu, 0x2F66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66E4u;
label_2f66e4:
    // 0x2f66e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f66e8:
    if (ctx->pc == 0x2F66E8u) {
        ctx->pc = 0x2F66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66E4u;
        // 0x2f66e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66ECu;
        goto label_2f66ec;
    }
    ctx->pc = 0x2F66E4u;
    {
        const bool branch_taken_0x2f66e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66E4u;
        // 0x2f66e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66e4) {
            ctx->pc = 0x2F66F0u;
            goto label_2f66f0;
        }
    }
    ctx->pc = 0x2F66ECu;
label_2f66ec:
    // 0x2f66ec: 0x24100019  addiu       $s0, $zero, 0x19
    ctx->pc = 0x2f66ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2f66f0:
    // 0x2f66f0: 0xc0a367c  jal         func_28D9F0
label_2f66f4:
    if (ctx->pc == 0x2F66F4u) {
        ctx->pc = 0x2F66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66F0u;
        // 0x2f66f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66F8u;
        goto label_2f66f8;
    }
    ctx->pc = 0x2F66F0u;
    SET_GPR_U32(ctx, 31, 0x2F66F8u);
    ctx->pc = 0x2F66F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66F0u;
    // 0x2f66f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F66F0u, 0x2F66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66F8u;
label_2f66f8:
    // 0x2f66f8: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_2f66fc:
    if (ctx->pc == 0x2F66FCu) {
        ctx->pc = 0x2F66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66F8u;
        // 0x2f66fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6700u;
        goto label_2f6700;
    }
    ctx->pc = 0x2F66F8u;
    {
        const bool branch_taken_0x2f66f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66F8u;
        // 0x2f66fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66f8) {
            ctx->pc = 0x2F684Cu;
            goto label_2f684c;
        }
    }
    ctx->pc = 0x2F6700u;
label_2f6700:
    // 0x2f6700: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f6700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6704:
    // 0x2f6704: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f6704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6708:
    // 0x2f6708: 0xc0bebac  jal         func_2FAEB0
label_2f670c:
    if (ctx->pc == 0x2F670Cu) {
        ctx->pc = 0x2F670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6708u;
        // 0x2f670c: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6710u;
        goto label_2f6710;
    }
    ctx->pc = 0x2F6708u;
    SET_GPR_U32(ctx, 31, 0x2F6710u);
    ctx->pc = 0x2F670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6708u;
    // 0x2f670c: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAEB0u, 0x2F6708u, 0x2F6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6710u;
label_2f6710:
    // 0x2f6710: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2f6714:
    if (ctx->pc == 0x2F6714u) {
        ctx->pc = 0x2F6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6710u;
        // 0x2f6714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6718u;
        goto label_2f6718;
    }
    ctx->pc = 0x2F6710u;
    {
        const bool branch_taken_0x2f6710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6710u;
        // 0x2f6714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6710) {
            ctx->pc = 0x2F6850u;
            goto label_2f6850;
        }
    }
    ctx->pc = 0x2F6718u;
label_2f6718:
    // 0x2f6718: 0xc0bd888  jal         func_2F6220
label_2f671c:
    if (ctx->pc == 0x2F671Cu) {
        ctx->pc = 0x2F671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6718u;
        // 0x2f671c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6720u;
        goto label_2f6720;
    }
    ctx->pc = 0x2F6718u;
    SET_GPR_U32(ctx, 31, 0x2F6720u);
    ctx->pc = 0x2F671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6718u;
    // 0x2f671c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6220u, 0x2F6718u, 0x2F6720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6720u;
label_2f6720:
    // 0x2f6720: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_2f6724:
    if (ctx->pc == 0x2F6724u) {
        ctx->pc = 0x2F6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6720u;
        // 0x2f6724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6728u;
        goto label_2f6728;
    }
    ctx->pc = 0x2F6720u;
    {
        const bool branch_taken_0x2f6720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6720) {
            ctx->pc = 0x2F6724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6720u;
            // 0x2f6724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6850u;
            goto label_2f6850;
        }
    }
    ctx->pc = 0x2F6728u;
label_2f6728:
    // 0x2f6728: 0x84420092  lh          $v0, 0x92($v0)
    ctx->pc = 0x2f6728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2f672c:
    // 0x2f672c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f672cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f6730:
    // 0x2f6730: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2f6730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2f6734:
    // 0x2f6734: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f6734u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f6738:
    // 0x2f6738: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f6738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2f673c:
    // 0x2f673c: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2f673cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2f6740:
    // 0x2f6740: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f6740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f6744:
    // 0x2f6744: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2f6744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2f6748:
    // 0x2f6748: 0xc0cd7d2  jal         func_335F48
label_2f674c:
    if (ctx->pc == 0x2F674Cu) {
        ctx->pc = 0x2F674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6748u;
        // 0x2f674c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6750u;
        goto label_2f6750;
    }
    ctx->pc = 0x2F6748u;
    SET_GPR_U32(ctx, 31, 0x2F6750u);
    ctx->pc = 0x2F674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6748u;
    // 0x2f674c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2F6748u, 0x2F6750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6750u;
label_2f6750:
    // 0x2f6750: 0xc0cd742  jal         func_335D08
label_2f6754:
    if (ctx->pc == 0x2F6754u) {
        ctx->pc = 0x2F6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6750u;
        // 0x2f6754: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6758u;
        goto label_2f6758;
    }
    ctx->pc = 0x2F6750u;
    SET_GPR_U32(ctx, 31, 0x2F6758u);
    ctx->pc = 0x2F6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6750u;
    // 0x2f6754: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2F6750u, 0x2F6758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6758u;
label_2f6758:
    // 0x2f6758: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2f6758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f675c:
    // 0x2f675c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f675cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2f6760:
    // 0x2f6760: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f6764:
    // 0x2f6764: 0xc0cd780  jal         func_335E00
label_2f6768:
    if (ctx->pc == 0x2F6768u) {
        ctx->pc = 0x2F6768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6764u;
        // 0x2f6768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F676Cu;
        goto label_2f676c;
    }
    ctx->pc = 0x2F6764u;
    SET_GPR_U32(ctx, 31, 0x2F676Cu);
    ctx->pc = 0x2F6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6764u;
    // 0x2f6768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2F6764u, 0x2F676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F676Cu;
label_2f676c:
    // 0x2f676c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f676cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f6770:
    // 0x2f6770: 0xc0cdd2e  jal         func_3374B8
label_2f6774:
    if (ctx->pc == 0x2F6774u) {
        ctx->pc = 0x2F6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6770u;
        // 0x2f6774: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6778u;
        goto label_2f6778;
    }
    ctx->pc = 0x2F6770u;
    SET_GPR_U32(ctx, 31, 0x2F6778u);
    ctx->pc = 0x2F6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6770u;
    // 0x2f6774: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2F6770u, 0x2F6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6778u;
label_2f6778:
    // 0x2f6778: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2f6778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_2f677c:
    // 0x2f677c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f677cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f6780:
    // 0x2f6780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f6780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f6784:
    // 0x2f6784: 0x0  nop
    ctx->pc = 0x2f6784u;
    // NOP
label_2f6788:
    // 0x2f6788: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f6788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f678c:
    // 0x2f678c: 0x0  nop
    ctx->pc = 0x2f678cu;
    // NOP
label_2f6790:
    // 0x2f6790: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_2f6794:
    if (ctx->pc == 0x2F6794u) {
        ctx->pc = 0x2F6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6790u;
        // 0x2f6794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6798u;
        goto label_2f6798;
    }
    ctx->pc = 0x2F6790u;
    {
        const bool branch_taken_0x2f6790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6790u;
        // 0x2f6794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6790) {
            ctx->pc = 0x2F6850u;
            goto label_2f6850;
        }
    }
    ctx->pc = 0x2F6798u;
label_2f6798:
    // 0x2f6798: 0xc0a367c  jal         func_28D9F0
label_2f679c:
    if (ctx->pc == 0x2F679Cu) {
        ctx->pc = 0x2F679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6798u;
        // 0x2f679c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67A0u;
        goto label_2f67a0;
    }
    ctx->pc = 0x2F6798u;
    SET_GPR_U32(ctx, 31, 0x2F67A0u);
    ctx->pc = 0x2F679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6798u;
    // 0x2f679c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F6798u, 0x2F67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67A0u;
label_2f67a0:
    // 0x2f67a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f67a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f67a4:
    // 0x2f67a4: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_2f67a8:
    if (ctx->pc == 0x2F67A8u) {
        ctx->pc = 0x2F67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67A4u;
        // 0x2f67a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67ACu;
        goto label_2f67ac;
    }
    ctx->pc = 0x2F67A4u;
    {
        const bool branch_taken_0x2f67a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67A4u;
        // 0x2f67a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f67a4) {
            ctx->pc = 0x2F6850u;
            goto label_2f6850;
        }
    }
    ctx->pc = 0x2F67ACu;
label_2f67ac:
    // 0x2f67ac: 0xc0884f6  jal         func_2213D8
label_2f67b0:
    if (ctx->pc == 0x2F67B0u) {
        ctx->pc = 0x2F67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67ACu;
        // 0x2f67b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67B4u;
        goto label_2f67b4;
    }
    ctx->pc = 0x2F67ACu;
    SET_GPR_U32(ctx, 31, 0x2F67B4u);
    ctx->pc = 0x2F67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F67ACu;
    // 0x2f67b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2F67ACu, 0x2F67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67B4u;
label_2f67b4:
    // 0x2f67b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f67b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f67b8:
    // 0x2f67b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f67b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f67bc:
    // 0x2f67bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f67bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f67c0:
    // 0x2f67c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f67c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2f67c4:
    // 0x2f67c4: 0xc0bf800  jal         func_2FE000
label_2f67c8:
    if (ctx->pc == 0x2F67C8u) {
        ctx->pc = 0x2F67C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67C4u;
        // 0x2f67c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67CCu;
        goto label_2f67cc;
    }
    ctx->pc = 0x2F67C4u;
    SET_GPR_U32(ctx, 31, 0x2F67CCu);
    ctx->pc = 0x2F67C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F67C4u;
    // 0x2f67c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2F67C4u, 0x2F67CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67CCu;
label_2f67cc:
    // 0x2f67cc: 0x10000020  b           . + 4 + (0x20 << 2)
label_2f67d0:
    if (ctx->pc == 0x2F67D0u) {
        ctx->pc = 0x2F67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67CCu;
        // 0x2f67d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67D4u;
        goto label_2f67d4;
    }
    ctx->pc = 0x2F67CCu;
    {
        const bool branch_taken_0x2f67cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67CCu;
        // 0x2f67d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f67cc) {
            ctx->pc = 0x2F6850u;
            goto label_2f6850;
        }
    }
    ctx->pc = 0x2F67D4u;
label_2f67d4:
    // 0x2f67d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f67d8:
    // 0x2f67d8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f67d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f67dc:
    // 0x2f67dc: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2f67dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2f67e0:
    // 0x2f67e0: 0xc13b782  jal         func_4EDE08
label_2f67e4:
    if (ctx->pc == 0x2F67E4u) {
        ctx->pc = 0x2F67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67E0u;
        // 0x2f67e4: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67E8u;
        goto label_2f67e8;
    }
    ctx->pc = 0x2F67E0u;
    SET_GPR_U32(ctx, 31, 0x2F67E8u);
    ctx->pc = 0x2F67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F67E0u;
    // 0x2f67e4: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2F67E0u, 0x2F67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67E8u;
label_2f67e8:
    // 0x2f67e8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2f67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_2f67ec:
    // 0x2f67ec: 0xc0e409a  jal         func_390268
label_2f67f0:
    if (ctx->pc == 0x2F67F0u) {
        ctx->pc = 0x2F67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67ECu;
        // 0x2f67f0: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67F4u;
        goto label_2f67f4;
    }
    ctx->pc = 0x2F67ECu;
    SET_GPR_U32(ctx, 31, 0x2F67F4u);
    ctx->pc = 0x2F67F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F67ECu;
    // 0x2f67f0: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F67ECu, 0x2F67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67F4u;
label_2f67f4:
    // 0x2f67f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f67f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f67f8:
    // 0x2f67f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f67f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f67fc:
    // 0x2f67fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f67fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f6800:
    // 0x2f6800: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f6800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6804:
    // 0x2f6804: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2f6804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6808:
    // 0x2f6808: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2f680c:
    if (ctx->pc == 0x2F680Cu) {
        ctx->pc = 0x2F680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6808u;
        // 0x2f680c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6810u;
        goto label_2f6810;
    }
    ctx->pc = 0x2F6808u;
    {
        const bool branch_taken_0x2f6808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6808u;
        // 0x2f680c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6808) {
            ctx->pc = 0x2F684Cu;
            goto label_2f684c;
        }
    }
    ctx->pc = 0x2F6810u;
label_2f6810:
    // 0x2f6810: 0xc08bfa0  jal         func_22FE80
label_2f6814:
    if (ctx->pc == 0x2F6814u) {
        ctx->pc = 0x2F6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6810u;
        // 0x2f6814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6818u;
        goto label_2f6818;
    }
    ctx->pc = 0x2F6810u;
    SET_GPR_U32(ctx, 31, 0x2F6818u);
    ctx->pc = 0x2F6814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6810u;
    // 0x2f6814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F6810u, 0x2F6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6818u;
label_2f6818:
    // 0x2f6818: 0xc0a367c  jal         func_28D9F0
label_2f681c:
    if (ctx->pc == 0x2F681Cu) {
        ctx->pc = 0x2F681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6818u;
        // 0x2f681c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6820u;
        goto label_2f6820;
    }
    ctx->pc = 0x2F6818u;
    SET_GPR_U32(ctx, 31, 0x2F6820u);
    ctx->pc = 0x2F681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6818u;
    // 0x2f681c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F6818u, 0x2F6820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6820u;
label_2f6820:
    // 0x2f6820: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2f6824:
    if (ctx->pc == 0x2F6824u) {
        ctx->pc = 0x2F6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6820u;
        // 0x2f6824: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6828u;
        goto label_2f6828;
    }
    ctx->pc = 0x2F6820u;
    {
        const bool branch_taken_0x2f6820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6820u;
        // 0x2f6824: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6820) {
            ctx->pc = 0x2F684Cu;
            goto label_2f684c;
        }
    }
    ctx->pc = 0x2F6828u;
label_2f6828:
    // 0x2f6828: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f682c:
    // 0x2f682c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f682cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f6830:
    // 0x2f6830: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f6830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6834:
    // 0x2f6834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f6834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6838:
    // 0x2f6838: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2f6838u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2f683c:
    // 0x2f683c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f683cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6840:
    // 0x2f6840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6844:
    // 0x2f6844: 0xc0bf3d4  jal         func_2FCF50
label_2f6848:
    if (ctx->pc == 0x2F6848u) {
        ctx->pc = 0x2F6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6844u;
        // 0x2f6848: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F684Cu;
        goto label_2f684c;
    }
    ctx->pc = 0x2F6844u;
    SET_GPR_U32(ctx, 31, 0x2F684Cu);
    ctx->pc = 0x2F6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6844u;
    // 0x2f6848: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2F6844u, 0x2F684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F684Cu;
label_2f684c:
    // 0x2f684c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f684cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6850:
    // 0x2f6850: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f6850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f6854:
    // 0x2f6854: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2f6854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f6858:
    // 0x2f6858: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2f6858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f685c:
    // 0x2f685c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2f685cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f6860:
    // 0x2f6860: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2f6860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f6864:
    // 0x2f6864: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f6864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f6868:
    // 0x2f6868: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f6868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f686c:
    // 0x2f686c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f6870:
    // 0x2f6870: 0x3e00008  jr          $ra
label_2f6874:
    if (ctx->pc == 0x2F6874u) {
        ctx->pc = 0x2F6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6870u;
        // 0x2f6874: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6878u;
        goto label_fallthrough_0x2f6870;
    }
    ctx->pc = 0x2F6870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6870u;
        // 0x2f6874: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f6870:
    ctx->pc = 0x2F6878u;
}
