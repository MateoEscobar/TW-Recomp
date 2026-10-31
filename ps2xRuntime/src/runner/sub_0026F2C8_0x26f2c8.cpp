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

// Function: sub_0026F2C8
// Address: 0x26f2c8 - 0x26f758
void sub_0026F2C8_0x26f2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F2C8_0x26f2c8");
#endif

    switch (ctx->pc) {
        case 0x26f2c8u: goto label_26f2c8;
        case 0x26f2ccu: goto label_26f2cc;
        case 0x26f2d0u: goto label_26f2d0;
        case 0x26f2d4u: goto label_26f2d4;
        case 0x26f2d8u: goto label_26f2d8;
        case 0x26f2dcu: goto label_26f2dc;
        case 0x26f2e0u: goto label_26f2e0;
        case 0x26f2e4u: goto label_26f2e4;
        case 0x26f2e8u: goto label_26f2e8;
        case 0x26f2ecu: goto label_26f2ec;
        case 0x26f2f0u: goto label_26f2f0;
        case 0x26f2f4u: goto label_26f2f4;
        case 0x26f2f8u: goto label_26f2f8;
        case 0x26f2fcu: goto label_26f2fc;
        case 0x26f300u: goto label_26f300;
        case 0x26f304u: goto label_26f304;
        case 0x26f308u: goto label_26f308;
        case 0x26f30cu: goto label_26f30c;
        case 0x26f310u: goto label_26f310;
        case 0x26f314u: goto label_26f314;
        case 0x26f318u: goto label_26f318;
        case 0x26f31cu: goto label_26f31c;
        case 0x26f320u: goto label_26f320;
        case 0x26f324u: goto label_26f324;
        case 0x26f328u: goto label_26f328;
        case 0x26f32cu: goto label_26f32c;
        case 0x26f330u: goto label_26f330;
        case 0x26f334u: goto label_26f334;
        case 0x26f338u: goto label_26f338;
        case 0x26f33cu: goto label_26f33c;
        case 0x26f340u: goto label_26f340;
        case 0x26f344u: goto label_26f344;
        case 0x26f348u: goto label_26f348;
        case 0x26f34cu: goto label_26f34c;
        case 0x26f350u: goto label_26f350;
        case 0x26f354u: goto label_26f354;
        case 0x26f358u: goto label_26f358;
        case 0x26f35cu: goto label_26f35c;
        case 0x26f360u: goto label_26f360;
        case 0x26f364u: goto label_26f364;
        case 0x26f368u: goto label_26f368;
        case 0x26f36cu: goto label_26f36c;
        case 0x26f370u: goto label_26f370;
        case 0x26f374u: goto label_26f374;
        case 0x26f378u: goto label_26f378;
        case 0x26f37cu: goto label_26f37c;
        case 0x26f380u: goto label_26f380;
        case 0x26f384u: goto label_26f384;
        case 0x26f388u: goto label_26f388;
        case 0x26f38cu: goto label_26f38c;
        case 0x26f390u: goto label_26f390;
        case 0x26f394u: goto label_26f394;
        case 0x26f398u: goto label_26f398;
        case 0x26f39cu: goto label_26f39c;
        case 0x26f3a0u: goto label_26f3a0;
        case 0x26f3a4u: goto label_26f3a4;
        case 0x26f3a8u: goto label_26f3a8;
        case 0x26f3acu: goto label_26f3ac;
        case 0x26f3b0u: goto label_26f3b0;
        case 0x26f3b4u: goto label_26f3b4;
        case 0x26f3b8u: goto label_26f3b8;
        case 0x26f3bcu: goto label_26f3bc;
        case 0x26f3c0u: goto label_26f3c0;
        case 0x26f3c4u: goto label_26f3c4;
        case 0x26f3c8u: goto label_26f3c8;
        case 0x26f3ccu: goto label_26f3cc;
        case 0x26f3d0u: goto label_26f3d0;
        case 0x26f3d4u: goto label_26f3d4;
        case 0x26f3d8u: goto label_26f3d8;
        case 0x26f3dcu: goto label_26f3dc;
        case 0x26f3e0u: goto label_26f3e0;
        case 0x26f3e4u: goto label_26f3e4;
        case 0x26f3e8u: goto label_26f3e8;
        case 0x26f3ecu: goto label_26f3ec;
        case 0x26f3f0u: goto label_26f3f0;
        case 0x26f3f4u: goto label_26f3f4;
        case 0x26f3f8u: goto label_26f3f8;
        case 0x26f3fcu: goto label_26f3fc;
        case 0x26f400u: goto label_26f400;
        case 0x26f404u: goto label_26f404;
        case 0x26f408u: goto label_26f408;
        case 0x26f40cu: goto label_26f40c;
        case 0x26f410u: goto label_26f410;
        case 0x26f414u: goto label_26f414;
        case 0x26f418u: goto label_26f418;
        case 0x26f41cu: goto label_26f41c;
        case 0x26f420u: goto label_26f420;
        case 0x26f424u: goto label_26f424;
        case 0x26f428u: goto label_26f428;
        case 0x26f42cu: goto label_26f42c;
        case 0x26f430u: goto label_26f430;
        case 0x26f434u: goto label_26f434;
        case 0x26f438u: goto label_26f438;
        case 0x26f43cu: goto label_26f43c;
        case 0x26f440u: goto label_26f440;
        case 0x26f444u: goto label_26f444;
        case 0x26f448u: goto label_26f448;
        case 0x26f44cu: goto label_26f44c;
        case 0x26f450u: goto label_26f450;
        case 0x26f454u: goto label_26f454;
        case 0x26f458u: goto label_26f458;
        case 0x26f45cu: goto label_26f45c;
        case 0x26f460u: goto label_26f460;
        case 0x26f464u: goto label_26f464;
        case 0x26f468u: goto label_26f468;
        case 0x26f46cu: goto label_26f46c;
        case 0x26f470u: goto label_26f470;
        case 0x26f474u: goto label_26f474;
        case 0x26f478u: goto label_26f478;
        case 0x26f47cu: goto label_26f47c;
        case 0x26f480u: goto label_26f480;
        case 0x26f484u: goto label_26f484;
        case 0x26f488u: goto label_26f488;
        case 0x26f48cu: goto label_26f48c;
        case 0x26f490u: goto label_26f490;
        case 0x26f494u: goto label_26f494;
        case 0x26f498u: goto label_26f498;
        case 0x26f49cu: goto label_26f49c;
        case 0x26f4a0u: goto label_26f4a0;
        case 0x26f4a4u: goto label_26f4a4;
        case 0x26f4a8u: goto label_26f4a8;
        case 0x26f4acu: goto label_26f4ac;
        case 0x26f4b0u: goto label_26f4b0;
        case 0x26f4b4u: goto label_26f4b4;
        case 0x26f4b8u: goto label_26f4b8;
        case 0x26f4bcu: goto label_26f4bc;
        case 0x26f4c0u: goto label_26f4c0;
        case 0x26f4c4u: goto label_26f4c4;
        case 0x26f4c8u: goto label_26f4c8;
        case 0x26f4ccu: goto label_26f4cc;
        case 0x26f4d0u: goto label_26f4d0;
        case 0x26f4d4u: goto label_26f4d4;
        case 0x26f4d8u: goto label_26f4d8;
        case 0x26f4dcu: goto label_26f4dc;
        case 0x26f4e0u: goto label_26f4e0;
        case 0x26f4e4u: goto label_26f4e4;
        case 0x26f4e8u: goto label_26f4e8;
        case 0x26f4ecu: goto label_26f4ec;
        case 0x26f4f0u: goto label_26f4f0;
        case 0x26f4f4u: goto label_26f4f4;
        case 0x26f4f8u: goto label_26f4f8;
        case 0x26f4fcu: goto label_26f4fc;
        case 0x26f500u: goto label_26f500;
        case 0x26f504u: goto label_26f504;
        case 0x26f508u: goto label_26f508;
        case 0x26f50cu: goto label_26f50c;
        case 0x26f510u: goto label_26f510;
        case 0x26f514u: goto label_26f514;
        case 0x26f518u: goto label_26f518;
        case 0x26f51cu: goto label_26f51c;
        case 0x26f520u: goto label_26f520;
        case 0x26f524u: goto label_26f524;
        case 0x26f528u: goto label_26f528;
        case 0x26f52cu: goto label_26f52c;
        case 0x26f530u: goto label_26f530;
        case 0x26f534u: goto label_26f534;
        case 0x26f538u: goto label_26f538;
        case 0x26f53cu: goto label_26f53c;
        case 0x26f540u: goto label_26f540;
        case 0x26f544u: goto label_26f544;
        case 0x26f548u: goto label_26f548;
        case 0x26f54cu: goto label_26f54c;
        case 0x26f550u: goto label_26f550;
        case 0x26f554u: goto label_26f554;
        case 0x26f558u: goto label_26f558;
        case 0x26f55cu: goto label_26f55c;
        case 0x26f560u: goto label_26f560;
        case 0x26f564u: goto label_26f564;
        case 0x26f568u: goto label_26f568;
        case 0x26f56cu: goto label_26f56c;
        case 0x26f570u: goto label_26f570;
        case 0x26f574u: goto label_26f574;
        case 0x26f578u: goto label_26f578;
        case 0x26f57cu: goto label_26f57c;
        case 0x26f580u: goto label_26f580;
        case 0x26f584u: goto label_26f584;
        case 0x26f588u: goto label_26f588;
        case 0x26f58cu: goto label_26f58c;
        case 0x26f590u: goto label_26f590;
        case 0x26f594u: goto label_26f594;
        case 0x26f598u: goto label_26f598;
        case 0x26f59cu: goto label_26f59c;
        case 0x26f5a0u: goto label_26f5a0;
        case 0x26f5a4u: goto label_26f5a4;
        case 0x26f5a8u: goto label_26f5a8;
        case 0x26f5acu: goto label_26f5ac;
        case 0x26f5b0u: goto label_26f5b0;
        case 0x26f5b4u: goto label_26f5b4;
        case 0x26f5b8u: goto label_26f5b8;
        case 0x26f5bcu: goto label_26f5bc;
        case 0x26f5c0u: goto label_26f5c0;
        case 0x26f5c4u: goto label_26f5c4;
        case 0x26f5c8u: goto label_26f5c8;
        case 0x26f5ccu: goto label_26f5cc;
        case 0x26f5d0u: goto label_26f5d0;
        case 0x26f5d4u: goto label_26f5d4;
        case 0x26f5d8u: goto label_26f5d8;
        case 0x26f5dcu: goto label_26f5dc;
        case 0x26f5e0u: goto label_26f5e0;
        case 0x26f5e4u: goto label_26f5e4;
        case 0x26f5e8u: goto label_26f5e8;
        case 0x26f5ecu: goto label_26f5ec;
        case 0x26f5f0u: goto label_26f5f0;
        case 0x26f5f4u: goto label_26f5f4;
        case 0x26f5f8u: goto label_26f5f8;
        case 0x26f5fcu: goto label_26f5fc;
        case 0x26f600u: goto label_26f600;
        case 0x26f604u: goto label_26f604;
        case 0x26f608u: goto label_26f608;
        case 0x26f60cu: goto label_26f60c;
        case 0x26f610u: goto label_26f610;
        case 0x26f614u: goto label_26f614;
        case 0x26f618u: goto label_26f618;
        case 0x26f61cu: goto label_26f61c;
        case 0x26f620u: goto label_26f620;
        case 0x26f624u: goto label_26f624;
        case 0x26f628u: goto label_26f628;
        case 0x26f62cu: goto label_26f62c;
        case 0x26f630u: goto label_26f630;
        case 0x26f634u: goto label_26f634;
        case 0x26f638u: goto label_26f638;
        case 0x26f63cu: goto label_26f63c;
        case 0x26f640u: goto label_26f640;
        case 0x26f644u: goto label_26f644;
        case 0x26f648u: goto label_26f648;
        case 0x26f64cu: goto label_26f64c;
        case 0x26f650u: goto label_26f650;
        case 0x26f654u: goto label_26f654;
        case 0x26f658u: goto label_26f658;
        case 0x26f65cu: goto label_26f65c;
        case 0x26f660u: goto label_26f660;
        case 0x26f664u: goto label_26f664;
        case 0x26f668u: goto label_26f668;
        case 0x26f66cu: goto label_26f66c;
        case 0x26f670u: goto label_26f670;
        case 0x26f674u: goto label_26f674;
        case 0x26f678u: goto label_26f678;
        case 0x26f67cu: goto label_26f67c;
        case 0x26f680u: goto label_26f680;
        case 0x26f684u: goto label_26f684;
        case 0x26f688u: goto label_26f688;
        case 0x26f68cu: goto label_26f68c;
        case 0x26f690u: goto label_26f690;
        case 0x26f694u: goto label_26f694;
        case 0x26f698u: goto label_26f698;
        case 0x26f69cu: goto label_26f69c;
        case 0x26f6a0u: goto label_26f6a0;
        case 0x26f6a4u: goto label_26f6a4;
        case 0x26f6a8u: goto label_26f6a8;
        case 0x26f6acu: goto label_26f6ac;
        case 0x26f6b0u: goto label_26f6b0;
        case 0x26f6b4u: goto label_26f6b4;
        case 0x26f6b8u: goto label_26f6b8;
        case 0x26f6bcu: goto label_26f6bc;
        case 0x26f6c0u: goto label_26f6c0;
        case 0x26f6c4u: goto label_26f6c4;
        case 0x26f6c8u: goto label_26f6c8;
        case 0x26f6ccu: goto label_26f6cc;
        case 0x26f6d0u: goto label_26f6d0;
        case 0x26f6d4u: goto label_26f6d4;
        case 0x26f6d8u: goto label_26f6d8;
        case 0x26f6dcu: goto label_26f6dc;
        case 0x26f6e0u: goto label_26f6e0;
        case 0x26f6e4u: goto label_26f6e4;
        case 0x26f6e8u: goto label_26f6e8;
        case 0x26f6ecu: goto label_26f6ec;
        case 0x26f6f0u: goto label_26f6f0;
        case 0x26f6f4u: goto label_26f6f4;
        case 0x26f6f8u: goto label_26f6f8;
        case 0x26f6fcu: goto label_26f6fc;
        case 0x26f700u: goto label_26f700;
        case 0x26f704u: goto label_26f704;
        case 0x26f708u: goto label_26f708;
        case 0x26f70cu: goto label_26f70c;
        case 0x26f710u: goto label_26f710;
        case 0x26f714u: goto label_26f714;
        case 0x26f718u: goto label_26f718;
        case 0x26f71cu: goto label_26f71c;
        case 0x26f720u: goto label_26f720;
        case 0x26f724u: goto label_26f724;
        case 0x26f728u: goto label_26f728;
        case 0x26f72cu: goto label_26f72c;
        case 0x26f730u: goto label_26f730;
        case 0x26f734u: goto label_26f734;
        case 0x26f738u: goto label_26f738;
        case 0x26f73cu: goto label_26f73c;
        case 0x26f740u: goto label_26f740;
        case 0x26f744u: goto label_26f744;
        case 0x26f748u: goto label_26f748;
        case 0x26f74cu: goto label_26f74c;
        case 0x26f750u: goto label_26f750;
        case 0x26f754u: goto label_26f754;
        default: break;
    }

    ctx->pc = 0x26f2c8u;

label_26f2c8:
    // 0x26f2c8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x26f2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_26f2cc:
    // 0x26f2cc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x26f2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_26f2d0:
    // 0x26f2d0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x26f2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_26f2d4:
    // 0x26f2d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26f2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26f2d8:
    // 0x26f2d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26f2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26f2dc:
    // 0x26f2dc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x26f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_26f2e0:
    // 0x26f2e0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x26f2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_26f2e4:
    // 0x26f2e4: 0x264400c4  addiu       $a0, $s2, 0xC4
    ctx->pc = 0x26f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_26f2e8:
    // 0x26f2e8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x26f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_26f2ec:
    // 0x26f2ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x26f2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_26f2f0:
    // 0x26f2f0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x26f2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_26f2f4:
    // 0x26f2f4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x26f2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_26f2f8:
    // 0x26f2f8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x26f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_26f2fc:
    // 0x26f2fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26f2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26f300:
    // 0x26f300: 0xc0e409a  jal         func_390268
label_26f304:
    if (ctx->pc == 0x26F304u) {
        ctx->pc = 0x26F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F300u;
        // 0x26f304: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F308u;
        goto label_26f308;
    }
    ctx->pc = 0x26F300u;
    SET_GPR_U32(ctx, 31, 0x26F308u);
    ctx->pc = 0x26F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F300u;
    // 0x26f304: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26F300u, 0x26F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F308u;
label_26f308:
    // 0x26f308: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26f308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f30c:
    // 0x26f30c: 0x8e3e00d8  lw          $fp, 0xD8($s1)
    ctx->pc = 0x26f30cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26f310:
    // 0x26f310: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x26f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26f314:
    // 0x26f314: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x26f314u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_26f318:
    // 0x26f318: 0x2610e160  addiu       $s0, $s0, -0x1EA0
    ctx->pc = 0x26f318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959456));
label_26f31c:
    // 0x26f31c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_26f320:
    // 0x26f320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f324:
    // 0x26f324: 0x8e6200d8  lw          $v0, 0xD8($s3)
    ctx->pc = 0x26f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26f328:
    // 0x26f328: 0xc041532  jal         func_1054C8
label_26f32c:
    if (ctx->pc == 0x26F32Cu) {
        ctx->pc = 0x26F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F328u;
        // 0x26f32c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F330u;
        goto label_26f330;
    }
    ctx->pc = 0x26F328u;
    SET_GPR_U32(ctx, 31, 0x26F330u);
    ctx->pc = 0x26F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F328u;
    // 0x26f32c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F328u, 0x26F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F330u;
label_26f330:
    // 0x26f330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f334:
    // 0x26f334: 0xc041532  jal         func_1054C8
label_26f338:
    if (ctx->pc == 0x26F338u) {
        ctx->pc = 0x26F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F334u;
        // 0x26f338: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F33Cu;
        goto label_26f33c;
    }
    ctx->pc = 0x26F334u;
    SET_GPR_U32(ctx, 31, 0x26F33Cu);
    ctx->pc = 0x26F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F334u;
    // 0x26f338: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F334u, 0x26F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F33Cu;
label_26f33c:
    // 0x26f33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f340:
    // 0x26f340: 0xc041532  jal         func_1054C8
label_26f344:
    if (ctx->pc == 0x26F344u) {
        ctx->pc = 0x26F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F340u;
        // 0x26f344: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F348u;
        goto label_26f348;
    }
    ctx->pc = 0x26F340u;
    SET_GPR_U32(ctx, 31, 0x26F348u);
    ctx->pc = 0x26F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F340u;
    // 0x26f344: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F340u, 0x26F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F348u;
label_26f348:
    // 0x26f348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f34c:
    // 0x26f34c: 0xc041532  jal         func_1054C8
label_26f350:
    if (ctx->pc == 0x26F350u) {
        ctx->pc = 0x26F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F34Cu;
        // 0x26f350: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F354u;
        goto label_26f354;
    }
    ctx->pc = 0x26F34Cu;
    SET_GPR_U32(ctx, 31, 0x26F354u);
    ctx->pc = 0x26F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F34Cu;
    // 0x26f350: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F34Cu, 0x26F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F354u;
label_26f354:
    // 0x26f354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f358:
    // 0x26f358: 0xc041532  jal         func_1054C8
label_26f35c:
    if (ctx->pc == 0x26F35Cu) {
        ctx->pc = 0x26F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F358u;
        // 0x26f35c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F360u;
        goto label_26f360;
    }
    ctx->pc = 0x26F358u;
    SET_GPR_U32(ctx, 31, 0x26F360u);
    ctx->pc = 0x26F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F358u;
    // 0x26f35c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F358u, 0x26F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F360u;
label_26f360:
    // 0x26f360: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x26f360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_26f364:
    // 0x26f364: 0xc041532  jal         func_1054C8
label_26f368:
    if (ctx->pc == 0x26F368u) {
        ctx->pc = 0x26F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F364u;
        // 0x26f368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F36Cu;
        goto label_26f36c;
    }
    ctx->pc = 0x26F364u;
    SET_GPR_U32(ctx, 31, 0x26F36Cu);
    ctx->pc = 0x26F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F364u;
    // 0x26f368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F364u, 0x26F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F36Cu;
label_26f36c:
    // 0x26f36c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x26f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_26f370:
    // 0x26f370: 0xc041532  jal         func_1054C8
label_26f374:
    if (ctx->pc == 0x26F374u) {
        ctx->pc = 0x26F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F370u;
        // 0x26f374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F378u;
        goto label_26f378;
    }
    ctx->pc = 0x26F370u;
    SET_GPR_U32(ctx, 31, 0x26F378u);
    ctx->pc = 0x26F374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F370u;
    // 0x26f374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F370u, 0x26F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F378u;
label_26f378:
    // 0x26f378: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x26f378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_26f37c:
    // 0x26f37c: 0xc041532  jal         func_1054C8
label_26f380:
    if (ctx->pc == 0x26F380u) {
        ctx->pc = 0x26F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F37Cu;
        // 0x26f380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F384u;
        goto label_26f384;
    }
    ctx->pc = 0x26F37Cu;
    SET_GPR_U32(ctx, 31, 0x26F384u);
    ctx->pc = 0x26F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F37Cu;
    // 0x26f380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F37Cu, 0x26F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F384u;
label_26f384:
    // 0x26f384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f388:
    // 0x26f388: 0xc041532  jal         func_1054C8
label_26f38c:
    if (ctx->pc == 0x26F38Cu) {
        ctx->pc = 0x26F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F388u;
        // 0x26f38c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F390u;
        goto label_26f390;
    }
    ctx->pc = 0x26F388u;
    SET_GPR_U32(ctx, 31, 0x26F390u);
    ctx->pc = 0x26F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F388u;
    // 0x26f38c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F388u, 0x26F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F390u;
label_26f390:
    // 0x26f390: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x26f390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_26f394:
    // 0x26f394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f398:
    // 0x26f398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26f398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f39c:
    // 0x26f39c: 0xc099cb4  jal         func_2672D0
label_26f3a0:
    if (ctx->pc == 0x26F3A0u) {
        ctx->pc = 0x26F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F39Cu;
        // 0x26f3a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F3A4u;
        goto label_26f3a4;
    }
    ctx->pc = 0x26F39Cu;
    SET_GPR_U32(ctx, 31, 0x26F3A4u);
    ctx->pc = 0x26F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F39Cu;
    // 0x26f3a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x26F39Cu, 0x26F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3A4u;
label_26f3a4:
    // 0x26f3a4: 0x144000db  bnez        $v0, . + 4 + (0xDB << 2)
label_26f3a8:
    if (ctx->pc == 0x26F3A8u) {
        ctx->pc = 0x26F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3A4u;
        // 0x26f3a8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F3ACu;
        goto label_26f3ac;
    }
    ctx->pc = 0x26F3A4u;
    {
        const bool branch_taken_0x26f3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3A4u;
        // 0x26f3a8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3a4) {
            ctx->pc = 0x26F714u;
            goto label_26f714;
        }
    }
    ctx->pc = 0x26F3ACu;
label_26f3ac:
    // 0x26f3ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26f3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26f3b0:
    // 0x26f3b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26f3b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26f3b4:
    // 0x26f3b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26f3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26f3b8:
    // 0x26f3b8: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x26f3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_26f3bc:
    // 0x26f3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f3c0:
    // 0x26f3c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26f3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f3c4:
    // 0x26f3c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26f3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f3c8:
    // 0x26f3c8: 0xc09dbfc  jal         func_276FF0
label_26f3cc:
    if (ctx->pc == 0x26F3CCu) {
        ctx->pc = 0x26F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3C8u;
        // 0x26f3cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F3D0u;
        goto label_26f3d0;
    }
    ctx->pc = 0x26F3C8u;
    SET_GPR_U32(ctx, 31, 0x26F3D0u);
    ctx->pc = 0x26F3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F3C8u;
    // 0x26f3cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FF0u, 0x26F3C8u, 0x26F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3D0u;
label_26f3d0:
    // 0x26f3d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f3d4:
    // 0x26f3d4: 0xc08b0e2  jal         func_22C388
label_26f3d8:
    if (ctx->pc == 0x26F3D8u) {
        ctx->pc = 0x26F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3D4u;
        // 0x26f3d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F3DCu;
        goto label_26f3dc;
    }
    ctx->pc = 0x26F3D4u;
    SET_GPR_U32(ctx, 31, 0x26F3DCu);
    ctx->pc = 0x26F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F3D4u;
    // 0x26f3d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x26F3D4u, 0x26F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3DCu;
label_26f3dc:
    // 0x26f3dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f3e0:
    // 0x26f3e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26f3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f3e4:
    // 0x26f3e4: 0xc08b1cc  jal         func_22C730
label_26f3e8:
    if (ctx->pc == 0x26F3E8u) {
        ctx->pc = 0x26F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3E4u;
        // 0x26f3e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F3ECu;
        goto label_26f3ec;
    }
    ctx->pc = 0x26F3E4u;
    SET_GPR_U32(ctx, 31, 0x26F3ECu);
    ctx->pc = 0x26F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F3E4u;
    // 0x26f3e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C730u, 0x26F3E4u, 0x26F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3ECu;
label_26f3ec:
    // 0x26f3ec: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_26f3f0:
    if (ctx->pc == 0x26F3F0u) {
        ctx->pc = 0x26F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3ECu;
        // 0x26f3f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F3F4u;
        goto label_26f3f4;
    }
    ctx->pc = 0x26F3ECu;
    {
        const bool branch_taken_0x26f3ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3ECu;
        // 0x26f3f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3ec) {
            ctx->pc = 0x26F428u;
            goto label_26f428;
        }
    }
    ctx->pc = 0x26F3F4u;
label_26f3f4:
    // 0x26f3f4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26f3f8:
    // 0x26f3f8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26f3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f3fc:
    // 0x26f3fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f400:
    // 0x26f400: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26f400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26f404:
    // 0x26f404: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26f404u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f408:
    // 0x26f408: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26f408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26f40c:
    // 0x26f40c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26f40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26f410:
    // 0x26f410: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26f410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26f414:
    // 0x26f414: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f418:
    // 0x26f418: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26f418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26f41c:
    // 0x26f41c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26f41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26f420:
    // 0x26f420: 0xc041bd4  jal         func_106F50
label_26f424:
    if (ctx->pc == 0x26F424u) {
        ctx->pc = 0x26F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F420u;
        // 0x26f424: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F428u;
        goto label_26f428;
    }
    ctx->pc = 0x26F420u;
    SET_GPR_U32(ctx, 31, 0x26F428u);
    ctx->pc = 0x26F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F420u;
    // 0x26f424: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26F420u, 0x26F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F428u;
label_26f428:
    // 0x26f428: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x26f428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26f42c:
    // 0x26f42c: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26f430:
    // 0x26f430: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x26f430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26f434:
    // 0x26f434: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26f434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26f438:
    // 0x26f438: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26f43c:
    // 0x26f43c: 0x60f809  jalr        $v1
label_26f440:
    if (ctx->pc == 0x26F440u) {
        ctx->pc = 0x26F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F43Cu;
        // 0x26f440: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F444u;
        goto label_26f444;
    }
    ctx->pc = 0x26F43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26F444u);
        ctx->pc = 0x26F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F43Cu;
        // 0x26f440: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F43Cu, 0x26F444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F444u;
label_26f444:
    // 0x26f444: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26f444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26f448:
    // 0x26f448: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_26f44c:
    if (ctx->pc == 0x26F44Cu) {
        ctx->pc = 0x26F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F448u;
        // 0x26f44c: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F450u;
        goto label_26f450;
    }
    ctx->pc = 0x26F448u;
    {
        const bool branch_taken_0x26f448 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F448u;
        // 0x26f44c: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f448) {
            ctx->pc = 0x26F48Cu;
            goto label_26f48c;
        }
    }
    ctx->pc = 0x26F450u;
label_26f450:
    // 0x26f450: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26f450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26f454:
    // 0x26f454: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26f454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26f458:
    // 0x26f458: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26f45c:
    // 0x26f45c: 0x40f809  jalr        $v0
label_26f460:
    if (ctx->pc == 0x26F460u) {
        ctx->pc = 0x26F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F45Cu;
        // 0x26f460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F464u;
        goto label_26f464;
    }
    ctx->pc = 0x26F45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F464u);
        ctx->pc = 0x26F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F45Cu;
        // 0x26f460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F45Cu, 0x26F464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F464u;
label_26f464:
    // 0x26f464: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26f464u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26f468:
    // 0x26f468: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f46c:
    // 0x26f46c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26f46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f470:
    // 0x26f470: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26f470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f474:
    // 0x26f474: 0x254abad8  addiu       $t2, $t2, -0x4528
    ctx->pc = 0x26f474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949592));
label_26f478:
    // 0x26f478: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26f478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26f47c:
    // 0x26f47c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x26f47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26f480:
    // 0x26f480: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x26f480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_26f484:
    // 0x26f484: 0xc041664  jal         func_105990
label_26f488:
    if (ctx->pc == 0x26F488u) {
        ctx->pc = 0x26F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F484u;
        // 0x26f488: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F48Cu;
        goto label_26f48c;
    }
    ctx->pc = 0x26F484u;
    SET_GPR_U32(ctx, 31, 0x26F48Cu);
    ctx->pc = 0x26F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F484u;
    // 0x26f488: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26F484u, 0x26F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F48Cu;
label_26f48c:
    // 0x26f48c: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_26f490:
    if (ctx->pc == 0x26F490u) {
        ctx->pc = 0x26F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F48Cu;
        // 0x26f490: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F494u;
        goto label_26f494;
    }
    ctx->pc = 0x26F48Cu;
    {
        const bool branch_taken_0x26f48c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F48Cu;
        // 0x26f490: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f48c) {
            ctx->pc = 0x26F4ACu;
            goto label_26f4ac;
        }
    }
    ctx->pc = 0x26F494u;
label_26f494:
    // 0x26f494: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26f494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26f498:
    // 0x26f498: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26f498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f49c:
    // 0x26f49c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26f49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26f4a0:
    // 0x26f4a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26f4a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26f4a4:
    // 0x26f4a4: 0xc041b20  jal         func_106C80
label_26f4a8:
    if (ctx->pc == 0x26F4A8u) {
        ctx->pc = 0x26F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4A4u;
        // 0x26f4a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F4ACu;
        goto label_26f4ac;
    }
    ctx->pc = 0x26F4A4u;
    SET_GPR_U32(ctx, 31, 0x26F4ACu);
    ctx->pc = 0x26F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F4A4u;
    // 0x26f4a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26F4A4u, 0x26F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4ACu;
label_26f4ac:
    // 0x26f4ac: 0xc05d484  jal         func_175210
label_26f4b0:
    if (ctx->pc == 0x26F4B0u) {
        ctx->pc = 0x26F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4ACu;
        // 0x26f4b0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F4B4u;
        goto label_26f4b4;
    }
    ctx->pc = 0x26F4ACu;
    SET_GPR_U32(ctx, 31, 0x26F4B4u);
    ctx->pc = 0x26F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F4ACu;
    // 0x26f4b0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26F4ACu, 0x26F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4B4u;
label_26f4b4:
    // 0x26f4b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f4b8:
    // 0x26f4b8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26f4b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26f4bc:
    // 0x26f4bc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26f4c0:
    // 0x26f4c0: 0xa0f809  jalr        $a1
label_26f4c4:
    if (ctx->pc == 0x26F4C4u) {
        ctx->pc = 0x26F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4C0u;
        // 0x26f4c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F4C8u;
        goto label_26f4c8;
    }
    ctx->pc = 0x26F4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26F4C8u);
        ctx->pc = 0x26F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4C0u;
        // 0x26f4c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F4C0u, 0x26F4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F4C8u;
label_26f4c8:
    // 0x26f4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f4cc:
    // 0x26f4cc: 0xc087016  jal         func_21C058
label_26f4d0:
    if (ctx->pc == 0x26F4D0u) {
        ctx->pc = 0x26F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4CCu;
        // 0x26f4d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F4D4u;
        goto label_26f4d4;
    }
    ctx->pc = 0x26F4CCu;
    SET_GPR_U32(ctx, 31, 0x26F4D4u);
    ctx->pc = 0x26F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F4CCu;
    // 0x26f4d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26F4CCu, 0x26F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4D4u;
label_26f4d4:
    // 0x26f4d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26f4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26f4d8:
    // 0x26f4d8: 0xc05d53a  jal         func_1754E8
label_26f4dc:
    if (ctx->pc == 0x26F4DCu) {
        ctx->pc = 0x26F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4D8u;
        // 0x26f4dc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F4E0u;
        goto label_26f4e0;
    }
    ctx->pc = 0x26F4D8u;
    SET_GPR_U32(ctx, 31, 0x26F4E0u);
    ctx->pc = 0x26F4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F4D8u;
    // 0x26f4dc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26F4D8u, 0x26F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4E0u;
label_26f4e0:
    // 0x26f4e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26f4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26f4e4:
    // 0x26f4e4: 0xc05d4f6  jal         func_1753D8
label_26f4e8:
    if (ctx->pc == 0x26F4E8u) {
        ctx->pc = 0x26F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4E4u;
        // 0x26f4e8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F4ECu;
        goto label_26f4ec;
    }
    ctx->pc = 0x26F4E4u;
    SET_GPR_U32(ctx, 31, 0x26F4ECu);
    ctx->pc = 0x26F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F4E4u;
    // 0x26f4e8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26F4E4u, 0x26F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4ECu;
label_26f4ec:
    // 0x26f4ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f4f0:
    // 0x26f4f0: 0xc089990  jal         func_226640
label_26f4f4:
    if (ctx->pc == 0x26F4F4u) {
        ctx->pc = 0x26F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4F0u;
        // 0x26f4f4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F4F8u;
        goto label_26f4f8;
    }
    ctx->pc = 0x26F4F0u;
    SET_GPR_U32(ctx, 31, 0x26F4F8u);
    ctx->pc = 0x26F4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F4F0u;
    // 0x26f4f4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26F4F0u, 0x26F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4F8u;
label_26f4f8:
    // 0x26f4f8: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_26f4fc:
    if (ctx->pc == 0x26F4FCu) {
        ctx->pc = 0x26F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4F8u;
        // 0x26f4fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F500u;
        goto label_26f500;
    }
    ctx->pc = 0x26F4F8u;
    {
        const bool branch_taken_0x26f4f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4F8u;
        // 0x26f4fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4f8) {
            ctx->pc = 0x26F534u;
            goto label_26f534;
        }
    }
    ctx->pc = 0x26F500u;
label_26f500:
    // 0x26f500: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26f504:
    // 0x26f504: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26f504u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f508:
    // 0x26f508: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26f508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26f50c:
    // 0x26f50c: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26f50cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26f510:
    // 0x26f510: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26f510u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f514:
    // 0x26f514: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26f514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26f518:
    // 0x26f518: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26f518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26f51c:
    // 0x26f51c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26f51cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26f520:
    // 0x26f520: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f524:
    // 0x26f524: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26f524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26f528:
    // 0x26f528: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26f528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26f52c:
    // 0x26f52c: 0xc041bd4  jal         func_106F50
label_26f530:
    if (ctx->pc == 0x26F530u) {
        ctx->pc = 0x26F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F52Cu;
        // 0x26f530: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F534u;
        goto label_26f534;
    }
    ctx->pc = 0x26F52Cu;
    SET_GPR_U32(ctx, 31, 0x26F534u);
    ctx->pc = 0x26F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F52Cu;
    // 0x26f530: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26F52Cu, 0x26F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F534u;
label_26f534:
    // 0x26f534: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x26f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_26f538:
    // 0x26f538: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26f538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26f53c:
    // 0x26f53c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26f53cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26f540:
    // 0x26f540: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26f544:
    // 0x26f544: 0x60f809  jalr        $v1
label_26f548:
    if (ctx->pc == 0x26F548u) {
        ctx->pc = 0x26F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F544u;
        // 0x26f548: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F54Cu;
        goto label_26f54c;
    }
    ctx->pc = 0x26F544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26F54Cu);
        ctx->pc = 0x26F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F544u;
        // 0x26f548: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F544u, 0x26F54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F54Cu;
label_26f54c:
    // 0x26f54c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x26f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26f550:
    // 0x26f550: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x26f550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_26f554:
    // 0x26f554: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x26f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_26f558:
    // 0x26f558: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_26f55c:
    if (ctx->pc == 0x26F55Cu) {
        ctx->pc = 0x26F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F558u;
        // 0x26f55c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F560u;
        goto label_26f560;
    }
    ctx->pc = 0x26F558u;
    {
        const bool branch_taken_0x26f558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F558u;
        // 0x26f55c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f558) {
            ctx->pc = 0x26F5B8u;
            goto label_26f5b8;
        }
    }
    ctx->pc = 0x26F560u;
label_26f560:
    // 0x26f560: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26f560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26f564:
    // 0x26f564: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26f564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26f568:
    // 0x26f568: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26f56c:
    // 0x26f56c: 0x40f809  jalr        $v0
label_26f570:
    if (ctx->pc == 0x26F570u) {
        ctx->pc = 0x26F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F56Cu;
        // 0x26f570: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F574u;
        goto label_26f574;
    }
    ctx->pc = 0x26F56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F574u);
        ctx->pc = 0x26F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F56Cu;
        // 0x26f570: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F56Cu, 0x26F574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F574u;
label_26f574:
    // 0x26f574: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26f574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f578:
    // 0x26f578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f57c:
    // 0x26f57c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26f57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26f580:
    // 0x26f580: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26f580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26f584:
    // 0x26f584: 0x40f809  jalr        $v0
label_26f588:
    if (ctx->pc == 0x26F588u) {
        ctx->pc = 0x26F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F584u;
        // 0x26f588: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F58Cu;
        goto label_26f58c;
    }
    ctx->pc = 0x26F584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F58Cu);
        ctx->pc = 0x26F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F584u;
        // 0x26f588: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F584u, 0x26F58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F58Cu;
label_26f58c:
    // 0x26f58c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f590:
    // 0x26f590: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26f590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f594:
    // 0x26f594: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x26f594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_26f598:
    // 0x26f598: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x26f598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26f59c:
    // 0x26f59c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x26f59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26f5a0:
    // 0x26f5a0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26f5a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f5a4:
    // 0x26f5a4: 0x240700d7  addiu       $a3, $zero, 0xD7
    ctx->pc = 0x26f5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
label_26f5a8:
    // 0x26f5a8: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x26f5a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
label_26f5ac:
    // 0x26f5ac: 0xc04229e  jal         func_108A78
label_26f5b0:
    if (ctx->pc == 0x26F5B0u) {
        ctx->pc = 0x26F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5ACu;
        // 0x26f5b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F5B4u;
        goto label_26f5b4;
    }
    ctx->pc = 0x26F5ACu;
    SET_GPR_U32(ctx, 31, 0x26F5B4u);
    ctx->pc = 0x26F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5ACu;
    // 0x26f5b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26F5ACu, 0x26F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5B4u;
label_26f5b4:
    // 0x26f5b4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x26f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_26f5b8:
    // 0x26f5b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26f5bc:
    if (ctx->pc == 0x26F5BCu) {
        ctx->pc = 0x26F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5B8u;
        // 0x26f5bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F5C0u;
        goto label_26f5c0;
    }
    ctx->pc = 0x26F5B8u;
    {
        const bool branch_taken_0x26f5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5B8u;
        // 0x26f5bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5b8) {
            ctx->pc = 0x26F5D8u;
            goto label_26f5d8;
        }
    }
    ctx->pc = 0x26F5C0u;
label_26f5c0:
    // 0x26f5c0: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26f5c4:
    // 0x26f5c4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26f5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f5c8:
    // 0x26f5c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26f5c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26f5cc:
    // 0x26f5cc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x26f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_26f5d0:
    // 0x26f5d0: 0xc041b20  jal         func_106C80
label_26f5d4:
    if (ctx->pc == 0x26F5D4u) {
        ctx->pc = 0x26F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5D0u;
        // 0x26f5d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F5D8u;
        goto label_26f5d8;
    }
    ctx->pc = 0x26F5D0u;
    SET_GPR_U32(ctx, 31, 0x26F5D8u);
    ctx->pc = 0x26F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5D0u;
    // 0x26f5d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26F5D0u, 0x26F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5D8u;
label_26f5d8:
    // 0x26f5d8: 0xc05d484  jal         func_175210
label_26f5dc:
    if (ctx->pc == 0x26F5DCu) {
        ctx->pc = 0x26F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5D8u;
        // 0x26f5dc: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F5E0u;
        goto label_26f5e0;
    }
    ctx->pc = 0x26F5D8u;
    SET_GPR_U32(ctx, 31, 0x26F5E0u);
    ctx->pc = 0x26F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5D8u;
    // 0x26f5dc: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26F5D8u, 0x26F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5E0u;
label_26f5e0:
    // 0x26f5e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f5e4:
    // 0x26f5e4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26f5e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26f5e8:
    // 0x26f5e8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26f5ec:
    // 0x26f5ec: 0xa0f809  jalr        $a1
label_26f5f0:
    if (ctx->pc == 0x26F5F0u) {
        ctx->pc = 0x26F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5ECu;
        // 0x26f5f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F5F4u;
        goto label_26f5f4;
    }
    ctx->pc = 0x26F5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26F5F4u);
        ctx->pc = 0x26F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5ECu;
        // 0x26f5f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F5ECu, 0x26F5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F5F4u;
label_26f5f4:
    // 0x26f5f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f5f8:
    // 0x26f5f8: 0xc087016  jal         func_21C058
label_26f5fc:
    if (ctx->pc == 0x26F5FCu) {
        ctx->pc = 0x26F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5F8u;
        // 0x26f5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F600u;
        goto label_26f600;
    }
    ctx->pc = 0x26F5F8u;
    SET_GPR_U32(ctx, 31, 0x26F600u);
    ctx->pc = 0x26F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5F8u;
    // 0x26f5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26F5F8u, 0x26F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F600u;
label_26f600:
    // 0x26f600: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x26f600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_26f604:
    // 0x26f604: 0xc05d53a  jal         func_1754E8
label_26f608:
    if (ctx->pc == 0x26F608u) {
        ctx->pc = 0x26F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F604u;
        // 0x26f608: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F60Cu;
        goto label_26f60c;
    }
    ctx->pc = 0x26F604u;
    SET_GPR_U32(ctx, 31, 0x26F60Cu);
    ctx->pc = 0x26F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F604u;
    // 0x26f608: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26F604u, 0x26F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F60Cu;
label_26f60c:
    // 0x26f60c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x26f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26f610:
    // 0x26f610: 0xc05d4f6  jal         func_1753D8
label_26f614:
    if (ctx->pc == 0x26F614u) {
        ctx->pc = 0x26F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F610u;
        // 0x26f614: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F618u;
        goto label_26f618;
    }
    ctx->pc = 0x26F610u;
    SET_GPR_U32(ctx, 31, 0x26F618u);
    ctx->pc = 0x26F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F610u;
    // 0x26f614: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26F610u, 0x26F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F618u;
label_26f618:
    // 0x26f618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f61c:
    // 0x26f61c: 0xc089990  jal         func_226640
label_26f620:
    if (ctx->pc == 0x26F620u) {
        ctx->pc = 0x26F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F61Cu;
        // 0x26f620: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F624u;
        goto label_26f624;
    }
    ctx->pc = 0x26F61Cu;
    SET_GPR_U32(ctx, 31, 0x26F624u);
    ctx->pc = 0x26F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F61Cu;
    // 0x26f620: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26F61Cu, 0x26F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F624u;
label_26f624:
    // 0x26f624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_26f628:
    // 0x26f628: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_26f62c:
    if (ctx->pc == 0x26F62Cu) {
        ctx->pc = 0x26F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F628u;
        // 0x26f62c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F630u;
        goto label_26f630;
    }
    ctx->pc = 0x26F628u;
    {
        const bool branch_taken_0x26f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F628u;
        // 0x26f62c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f628) {
            ctx->pc = 0x26F650u;
            goto label_26f650;
        }
    }
    ctx->pc = 0x26F630u;
label_26f630:
    // 0x26f630: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26f630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26f634:
    // 0x26f634: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26f634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f638:
    // 0x26f638: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26f638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f63c:
    // 0x26f63c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_26f640:
    // 0x26f640: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26f640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26f644:
    // 0x26f644: 0xc04159e  jal         func_105678
label_26f648:
    if (ctx->pc == 0x26F648u) {
        ctx->pc = 0x26F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F644u;
        // 0x26f648: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F64Cu;
        goto label_26f64c;
    }
    ctx->pc = 0x26F644u;
    SET_GPR_U32(ctx, 31, 0x26F64Cu);
    ctx->pc = 0x26F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F644u;
    // 0x26f648: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26F644u, 0x26F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F64Cu;
label_26f64c:
    // 0x26f64c: 0x0  nop
    ctx->pc = 0x26f64cu;
    // NOP
label_26f650:
    // 0x26f650: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26f654:
    // 0x26f654: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26f654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26f658:
    // 0x26f658: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x26f658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_26f65c:
    // 0x26f65c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x26f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_26f660:
    // 0x26f660: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_26f664:
    if (ctx->pc == 0x26F664u) {
        ctx->pc = 0x26F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F660u;
        // 0x26f664: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F668u;
        goto label_26f668;
    }
    ctx->pc = 0x26F660u;
    {
        const bool branch_taken_0x26f660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F660u;
        // 0x26f664: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f660) {
            ctx->pc = 0x26F6A4u;
            goto label_26f6a4;
        }
    }
    ctx->pc = 0x26F668u;
label_26f668:
    // 0x26f668: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26f668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26f66c:
    // 0x26f66c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26f66cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26f670:
    // 0x26f670: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26f674:
    // 0x26f674: 0x40f809  jalr        $v0
label_26f678:
    if (ctx->pc == 0x26F678u) {
        ctx->pc = 0x26F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F674u;
        // 0x26f678: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F67Cu;
        goto label_26f67c;
    }
    ctx->pc = 0x26F674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F67Cu);
        ctx->pc = 0x26F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F674u;
        // 0x26f678: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F674u, 0x26F67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F67Cu;
label_26f67c:
    // 0x26f67c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f67cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f680:
    // 0x26f680: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26f680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f684:
    // 0x26f684: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x26f684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_26f688:
    // 0x26f688: 0x240600c7  addiu       $a2, $zero, 0xC7
    ctx->pc = 0x26f688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_26f68c:
    // 0x26f68c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x26f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_26f690:
    // 0x26f690: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x26f690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_26f694:
    // 0x26f694: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x26f694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26f698:
    // 0x26f698: 0xc041664  jal         func_105990
label_26f69c:
    if (ctx->pc == 0x26F69Cu) {
        ctx->pc = 0x26F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F698u;
        // 0x26f69c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6A0u;
        goto label_26f6a0;
    }
    ctx->pc = 0x26F698u;
    SET_GPR_U32(ctx, 31, 0x26F6A0u);
    ctx->pc = 0x26F69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F698u;
    // 0x26f69c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26F698u, 0x26F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6A0u;
label_26f6a0:
    // 0x26f6a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x26f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_26f6a4:
    // 0x26f6a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26f6a8:
    if (ctx->pc == 0x26F6A8u) {
        ctx->pc = 0x26F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6A4u;
        // 0x26f6a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6ACu;
        goto label_26f6ac;
    }
    ctx->pc = 0x26F6A4u;
    {
        const bool branch_taken_0x26f6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6A4u;
        // 0x26f6a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6a4) {
            ctx->pc = 0x26F6C4u;
            goto label_26f6c4;
        }
    }
    ctx->pc = 0x26F6ACu;
label_26f6ac:
    // 0x26f6ac: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26f6b0:
    // 0x26f6b0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26f6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f6b4:
    // 0x26f6b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26f6b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26f6b8:
    // 0x26f6b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x26f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_26f6bc:
    // 0x26f6bc: 0xc041b20  jal         func_106C80
label_26f6c0:
    if (ctx->pc == 0x26F6C0u) {
        ctx->pc = 0x26F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6BCu;
        // 0x26f6c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6C4u;
        goto label_26f6c4;
    }
    ctx->pc = 0x26F6BCu;
    SET_GPR_U32(ctx, 31, 0x26F6C4u);
    ctx->pc = 0x26F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6BCu;
    // 0x26f6c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26F6BCu, 0x26F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6C4u;
label_26f6c4:
    // 0x26f6c4: 0xc05d484  jal         func_175210
label_26f6c8:
    if (ctx->pc == 0x26F6C8u) {
        ctx->pc = 0x26F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6C4u;
        // 0x26f6c8: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6CCu;
        goto label_26f6cc;
    }
    ctx->pc = 0x26F6C4u;
    SET_GPR_U32(ctx, 31, 0x26F6CCu);
    ctx->pc = 0x26F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6C4u;
    // 0x26f6c8: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26F6C4u, 0x26F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6CCu;
label_26f6cc:
    // 0x26f6cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f6d0:
    // 0x26f6d0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26f6d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26f6d4:
    // 0x26f6d4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26f6d8:
    // 0x26f6d8: 0xa0f809  jalr        $a1
label_26f6dc:
    if (ctx->pc == 0x26F6DCu) {
        ctx->pc = 0x26F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6D8u;
        // 0x26f6dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6E0u;
        goto label_26f6e0;
    }
    ctx->pc = 0x26F6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26F6E0u);
        ctx->pc = 0x26F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6D8u;
        // 0x26f6dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F6D8u, 0x26F6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F6E0u;
label_26f6e0:
    // 0x26f6e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f6e4:
    // 0x26f6e4: 0xc087016  jal         func_21C058
label_26f6e8:
    if (ctx->pc == 0x26F6E8u) {
        ctx->pc = 0x26F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6E4u;
        // 0x26f6e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6ECu;
        goto label_26f6ec;
    }
    ctx->pc = 0x26F6E4u;
    SET_GPR_U32(ctx, 31, 0x26F6ECu);
    ctx->pc = 0x26F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6E4u;
    // 0x26f6e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26F6E4u, 0x26F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6ECu;
label_26f6ec:
    // 0x26f6ec: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x26f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_26f6f0:
    // 0x26f6f0: 0xc05d53a  jal         func_1754E8
label_26f6f4:
    if (ctx->pc == 0x26F6F4u) {
        ctx->pc = 0x26F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6F0u;
        // 0x26f6f4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6F8u;
        goto label_26f6f8;
    }
    ctx->pc = 0x26F6F0u;
    SET_GPR_U32(ctx, 31, 0x26F6F8u);
    ctx->pc = 0x26F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6F0u;
    // 0x26f6f4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26F6F0u, 0x26F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6F8u;
label_26f6f8:
    // 0x26f6f8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x26f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26f6fc:
    // 0x26f6fc: 0xc05d4f6  jal         func_1753D8
label_26f700:
    if (ctx->pc == 0x26F700u) {
        ctx->pc = 0x26F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6FCu;
        // 0x26f700: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F704u;
        goto label_26f704;
    }
    ctx->pc = 0x26F6FCu;
    SET_GPR_U32(ctx, 31, 0x26F704u);
    ctx->pc = 0x26F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6FCu;
    // 0x26f700: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26F6FCu, 0x26F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F704u;
label_26f704:
    // 0x26f704: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26f704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f708:
    // 0x26f708: 0xc089990  jal         func_226640
label_26f70c:
    if (ctx->pc == 0x26F70Cu) {
        ctx->pc = 0x26F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F708u;
        // 0x26f70c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F710u;
        goto label_26f710;
    }
    ctx->pc = 0x26F708u;
    SET_GPR_U32(ctx, 31, 0x26F710u);
    ctx->pc = 0x26F70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F708u;
    // 0x26f70c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26F708u, 0x26F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F710u;
label_26f710:
    // 0x26f710: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x26f710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_26f714:
    // 0x26f714: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x26f714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26f718:
    // 0x26f718: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x26f718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26f71c:
    // 0x26f71c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x26f71cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26f720:
    // 0x26f720: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x26f720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26f724:
    // 0x26f724: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x26f724u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26f728:
    // 0x26f728: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x26f728u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26f72c:
    // 0x26f72c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x26f72cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26f730:
    // 0x26f730: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x26f730u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26f734:
    // 0x26f734: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26f734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26f738:
    // 0x26f738: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x26f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26f73c:
    // 0x26f73c: 0x3e00008  jr          $ra
label_26f740:
    if (ctx->pc == 0x26F740u) {
        ctx->pc = 0x26F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F73Cu;
        // 0x26f740: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F744u;
        goto label_26f744;
    }
    ctx->pc = 0x26F73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F73Cu;
        // 0x26f740: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F744u;
label_26f744:
    // 0x26f744: 0x0  nop
    ctx->pc = 0x26f744u;
    // NOP
label_26f748:
    // 0x26f748: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26f748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26f74c:
    // 0x26f74c: 0x0  nop
    ctx->pc = 0x26f74cu;
    // NOP
label_26f750:
    // 0x26f750: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x26f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_26f754:
    // 0x26f754: 0x0  nop
    ctx->pc = 0x26f754u;
    // NOP
    ctx->pc = 0x26f758u;
}
