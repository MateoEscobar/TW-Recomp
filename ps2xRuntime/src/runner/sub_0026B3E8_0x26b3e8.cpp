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

// Function: sub_0026B3E8
// Address: 0x26b3e8 - 0x26b848
void sub_0026B3E8_0x26b3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B3E8_0x26b3e8");
#endif

    switch (ctx->pc) {
        case 0x26b3e8u: goto label_26b3e8;
        case 0x26b3ecu: goto label_26b3ec;
        case 0x26b3f0u: goto label_26b3f0;
        case 0x26b3f4u: goto label_26b3f4;
        case 0x26b3f8u: goto label_26b3f8;
        case 0x26b3fcu: goto label_26b3fc;
        case 0x26b400u: goto label_26b400;
        case 0x26b404u: goto label_26b404;
        case 0x26b408u: goto label_26b408;
        case 0x26b40cu: goto label_26b40c;
        case 0x26b410u: goto label_26b410;
        case 0x26b414u: goto label_26b414;
        case 0x26b418u: goto label_26b418;
        case 0x26b41cu: goto label_26b41c;
        case 0x26b420u: goto label_26b420;
        case 0x26b424u: goto label_26b424;
        case 0x26b428u: goto label_26b428;
        case 0x26b42cu: goto label_26b42c;
        case 0x26b430u: goto label_26b430;
        case 0x26b434u: goto label_26b434;
        case 0x26b438u: goto label_26b438;
        case 0x26b43cu: goto label_26b43c;
        case 0x26b440u: goto label_26b440;
        case 0x26b444u: goto label_26b444;
        case 0x26b448u: goto label_26b448;
        case 0x26b44cu: goto label_26b44c;
        case 0x26b450u: goto label_26b450;
        case 0x26b454u: goto label_26b454;
        case 0x26b458u: goto label_26b458;
        case 0x26b45cu: goto label_26b45c;
        case 0x26b460u: goto label_26b460;
        case 0x26b464u: goto label_26b464;
        case 0x26b468u: goto label_26b468;
        case 0x26b46cu: goto label_26b46c;
        case 0x26b470u: goto label_26b470;
        case 0x26b474u: goto label_26b474;
        case 0x26b478u: goto label_26b478;
        case 0x26b47cu: goto label_26b47c;
        case 0x26b480u: goto label_26b480;
        case 0x26b484u: goto label_26b484;
        case 0x26b488u: goto label_26b488;
        case 0x26b48cu: goto label_26b48c;
        case 0x26b490u: goto label_26b490;
        case 0x26b494u: goto label_26b494;
        case 0x26b498u: goto label_26b498;
        case 0x26b49cu: goto label_26b49c;
        case 0x26b4a0u: goto label_26b4a0;
        case 0x26b4a4u: goto label_26b4a4;
        case 0x26b4a8u: goto label_26b4a8;
        case 0x26b4acu: goto label_26b4ac;
        case 0x26b4b0u: goto label_26b4b0;
        case 0x26b4b4u: goto label_26b4b4;
        case 0x26b4b8u: goto label_26b4b8;
        case 0x26b4bcu: goto label_26b4bc;
        case 0x26b4c0u: goto label_26b4c0;
        case 0x26b4c4u: goto label_26b4c4;
        case 0x26b4c8u: goto label_26b4c8;
        case 0x26b4ccu: goto label_26b4cc;
        case 0x26b4d0u: goto label_26b4d0;
        case 0x26b4d4u: goto label_26b4d4;
        case 0x26b4d8u: goto label_26b4d8;
        case 0x26b4dcu: goto label_26b4dc;
        case 0x26b4e0u: goto label_26b4e0;
        case 0x26b4e4u: goto label_26b4e4;
        case 0x26b4e8u: goto label_26b4e8;
        case 0x26b4ecu: goto label_26b4ec;
        case 0x26b4f0u: goto label_26b4f0;
        case 0x26b4f4u: goto label_26b4f4;
        case 0x26b4f8u: goto label_26b4f8;
        case 0x26b4fcu: goto label_26b4fc;
        case 0x26b500u: goto label_26b500;
        case 0x26b504u: goto label_26b504;
        case 0x26b508u: goto label_26b508;
        case 0x26b50cu: goto label_26b50c;
        case 0x26b510u: goto label_26b510;
        case 0x26b514u: goto label_26b514;
        case 0x26b518u: goto label_26b518;
        case 0x26b51cu: goto label_26b51c;
        case 0x26b520u: goto label_26b520;
        case 0x26b524u: goto label_26b524;
        case 0x26b528u: goto label_26b528;
        case 0x26b52cu: goto label_26b52c;
        case 0x26b530u: goto label_26b530;
        case 0x26b534u: goto label_26b534;
        case 0x26b538u: goto label_26b538;
        case 0x26b53cu: goto label_26b53c;
        case 0x26b540u: goto label_26b540;
        case 0x26b544u: goto label_26b544;
        case 0x26b548u: goto label_26b548;
        case 0x26b54cu: goto label_26b54c;
        case 0x26b550u: goto label_26b550;
        case 0x26b554u: goto label_26b554;
        case 0x26b558u: goto label_26b558;
        case 0x26b55cu: goto label_26b55c;
        case 0x26b560u: goto label_26b560;
        case 0x26b564u: goto label_26b564;
        case 0x26b568u: goto label_26b568;
        case 0x26b56cu: goto label_26b56c;
        case 0x26b570u: goto label_26b570;
        case 0x26b574u: goto label_26b574;
        case 0x26b578u: goto label_26b578;
        case 0x26b57cu: goto label_26b57c;
        case 0x26b580u: goto label_26b580;
        case 0x26b584u: goto label_26b584;
        case 0x26b588u: goto label_26b588;
        case 0x26b58cu: goto label_26b58c;
        case 0x26b590u: goto label_26b590;
        case 0x26b594u: goto label_26b594;
        case 0x26b598u: goto label_26b598;
        case 0x26b59cu: goto label_26b59c;
        case 0x26b5a0u: goto label_26b5a0;
        case 0x26b5a4u: goto label_26b5a4;
        case 0x26b5a8u: goto label_26b5a8;
        case 0x26b5acu: goto label_26b5ac;
        case 0x26b5b0u: goto label_26b5b0;
        case 0x26b5b4u: goto label_26b5b4;
        case 0x26b5b8u: goto label_26b5b8;
        case 0x26b5bcu: goto label_26b5bc;
        case 0x26b5c0u: goto label_26b5c0;
        case 0x26b5c4u: goto label_26b5c4;
        case 0x26b5c8u: goto label_26b5c8;
        case 0x26b5ccu: goto label_26b5cc;
        case 0x26b5d0u: goto label_26b5d0;
        case 0x26b5d4u: goto label_26b5d4;
        case 0x26b5d8u: goto label_26b5d8;
        case 0x26b5dcu: goto label_26b5dc;
        case 0x26b5e0u: goto label_26b5e0;
        case 0x26b5e4u: goto label_26b5e4;
        case 0x26b5e8u: goto label_26b5e8;
        case 0x26b5ecu: goto label_26b5ec;
        case 0x26b5f0u: goto label_26b5f0;
        case 0x26b5f4u: goto label_26b5f4;
        case 0x26b5f8u: goto label_26b5f8;
        case 0x26b5fcu: goto label_26b5fc;
        case 0x26b600u: goto label_26b600;
        case 0x26b604u: goto label_26b604;
        case 0x26b608u: goto label_26b608;
        case 0x26b60cu: goto label_26b60c;
        case 0x26b610u: goto label_26b610;
        case 0x26b614u: goto label_26b614;
        case 0x26b618u: goto label_26b618;
        case 0x26b61cu: goto label_26b61c;
        case 0x26b620u: goto label_26b620;
        case 0x26b624u: goto label_26b624;
        case 0x26b628u: goto label_26b628;
        case 0x26b62cu: goto label_26b62c;
        case 0x26b630u: goto label_26b630;
        case 0x26b634u: goto label_26b634;
        case 0x26b638u: goto label_26b638;
        case 0x26b63cu: goto label_26b63c;
        case 0x26b640u: goto label_26b640;
        case 0x26b644u: goto label_26b644;
        case 0x26b648u: goto label_26b648;
        case 0x26b64cu: goto label_26b64c;
        case 0x26b650u: goto label_26b650;
        case 0x26b654u: goto label_26b654;
        case 0x26b658u: goto label_26b658;
        case 0x26b65cu: goto label_26b65c;
        case 0x26b660u: goto label_26b660;
        case 0x26b664u: goto label_26b664;
        case 0x26b668u: goto label_26b668;
        case 0x26b66cu: goto label_26b66c;
        case 0x26b670u: goto label_26b670;
        case 0x26b674u: goto label_26b674;
        case 0x26b678u: goto label_26b678;
        case 0x26b67cu: goto label_26b67c;
        case 0x26b680u: goto label_26b680;
        case 0x26b684u: goto label_26b684;
        case 0x26b688u: goto label_26b688;
        case 0x26b68cu: goto label_26b68c;
        case 0x26b690u: goto label_26b690;
        case 0x26b694u: goto label_26b694;
        case 0x26b698u: goto label_26b698;
        case 0x26b69cu: goto label_26b69c;
        case 0x26b6a0u: goto label_26b6a0;
        case 0x26b6a4u: goto label_26b6a4;
        case 0x26b6a8u: goto label_26b6a8;
        case 0x26b6acu: goto label_26b6ac;
        case 0x26b6b0u: goto label_26b6b0;
        case 0x26b6b4u: goto label_26b6b4;
        case 0x26b6b8u: goto label_26b6b8;
        case 0x26b6bcu: goto label_26b6bc;
        case 0x26b6c0u: goto label_26b6c0;
        case 0x26b6c4u: goto label_26b6c4;
        case 0x26b6c8u: goto label_26b6c8;
        case 0x26b6ccu: goto label_26b6cc;
        case 0x26b6d0u: goto label_26b6d0;
        case 0x26b6d4u: goto label_26b6d4;
        case 0x26b6d8u: goto label_26b6d8;
        case 0x26b6dcu: goto label_26b6dc;
        case 0x26b6e0u: goto label_26b6e0;
        case 0x26b6e4u: goto label_26b6e4;
        case 0x26b6e8u: goto label_26b6e8;
        case 0x26b6ecu: goto label_26b6ec;
        case 0x26b6f0u: goto label_26b6f0;
        case 0x26b6f4u: goto label_26b6f4;
        case 0x26b6f8u: goto label_26b6f8;
        case 0x26b6fcu: goto label_26b6fc;
        case 0x26b700u: goto label_26b700;
        case 0x26b704u: goto label_26b704;
        case 0x26b708u: goto label_26b708;
        case 0x26b70cu: goto label_26b70c;
        case 0x26b710u: goto label_26b710;
        case 0x26b714u: goto label_26b714;
        case 0x26b718u: goto label_26b718;
        case 0x26b71cu: goto label_26b71c;
        case 0x26b720u: goto label_26b720;
        case 0x26b724u: goto label_26b724;
        case 0x26b728u: goto label_26b728;
        case 0x26b72cu: goto label_26b72c;
        case 0x26b730u: goto label_26b730;
        case 0x26b734u: goto label_26b734;
        case 0x26b738u: goto label_26b738;
        case 0x26b73cu: goto label_26b73c;
        case 0x26b740u: goto label_26b740;
        case 0x26b744u: goto label_26b744;
        case 0x26b748u: goto label_26b748;
        case 0x26b74cu: goto label_26b74c;
        case 0x26b750u: goto label_26b750;
        case 0x26b754u: goto label_26b754;
        case 0x26b758u: goto label_26b758;
        case 0x26b75cu: goto label_26b75c;
        case 0x26b760u: goto label_26b760;
        case 0x26b764u: goto label_26b764;
        case 0x26b768u: goto label_26b768;
        case 0x26b76cu: goto label_26b76c;
        case 0x26b770u: goto label_26b770;
        case 0x26b774u: goto label_26b774;
        case 0x26b778u: goto label_26b778;
        case 0x26b77cu: goto label_26b77c;
        case 0x26b780u: goto label_26b780;
        case 0x26b784u: goto label_26b784;
        case 0x26b788u: goto label_26b788;
        case 0x26b78cu: goto label_26b78c;
        case 0x26b790u: goto label_26b790;
        case 0x26b794u: goto label_26b794;
        case 0x26b798u: goto label_26b798;
        case 0x26b79cu: goto label_26b79c;
        case 0x26b7a0u: goto label_26b7a0;
        case 0x26b7a4u: goto label_26b7a4;
        case 0x26b7a8u: goto label_26b7a8;
        case 0x26b7acu: goto label_26b7ac;
        case 0x26b7b0u: goto label_26b7b0;
        case 0x26b7b4u: goto label_26b7b4;
        case 0x26b7b8u: goto label_26b7b8;
        case 0x26b7bcu: goto label_26b7bc;
        case 0x26b7c0u: goto label_26b7c0;
        case 0x26b7c4u: goto label_26b7c4;
        case 0x26b7c8u: goto label_26b7c8;
        case 0x26b7ccu: goto label_26b7cc;
        case 0x26b7d0u: goto label_26b7d0;
        case 0x26b7d4u: goto label_26b7d4;
        case 0x26b7d8u: goto label_26b7d8;
        case 0x26b7dcu: goto label_26b7dc;
        case 0x26b7e0u: goto label_26b7e0;
        case 0x26b7e4u: goto label_26b7e4;
        case 0x26b7e8u: goto label_26b7e8;
        case 0x26b7ecu: goto label_26b7ec;
        case 0x26b7f0u: goto label_26b7f0;
        case 0x26b7f4u: goto label_26b7f4;
        case 0x26b7f8u: goto label_26b7f8;
        case 0x26b7fcu: goto label_26b7fc;
        case 0x26b800u: goto label_26b800;
        case 0x26b804u: goto label_26b804;
        case 0x26b808u: goto label_26b808;
        case 0x26b80cu: goto label_26b80c;
        case 0x26b810u: goto label_26b810;
        case 0x26b814u: goto label_26b814;
        case 0x26b818u: goto label_26b818;
        case 0x26b81cu: goto label_26b81c;
        case 0x26b820u: goto label_26b820;
        case 0x26b824u: goto label_26b824;
        case 0x26b828u: goto label_26b828;
        case 0x26b82cu: goto label_26b82c;
        case 0x26b830u: goto label_26b830;
        case 0x26b834u: goto label_26b834;
        case 0x26b838u: goto label_26b838;
        case 0x26b83cu: goto label_26b83c;
        case 0x26b840u: goto label_26b840;
        case 0x26b844u: goto label_26b844;
        default: break;
    }

    ctx->pc = 0x26b3e8u;

label_26b3e8:
    // 0x26b3e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26b3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_26b3ec:
    // 0x26b3ec: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_26b3f0:
    // 0x26b3f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26b3f4:
    // 0x26b3f4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x26b3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_26b3f8:
    // 0x26b3f8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x26b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_26b3fc:
    // 0x26b3fc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x26b3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_26b400:
    // 0x26b400: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26b400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26b404:
    // 0x26b404: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x26b404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_26b408:
    // 0x26b408: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x26b408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_26b40c:
    // 0x26b40c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x26b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_26b410:
    // 0x26b410: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x26b410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_26b414:
    // 0x26b414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26b418:
    // 0x26b418: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x26b418u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_26b41c:
    // 0x26b41c: 0xc088edc  jal         func_223B70
label_26b420:
    if (ctx->pc == 0x26B420u) {
        ctx->pc = 0x26B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B41Cu;
        // 0x26b420: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B424u;
        goto label_26b424;
    }
    ctx->pc = 0x26B41Cu;
    SET_GPR_U32(ctx, 31, 0x26B424u);
    ctx->pc = 0x26B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B41Cu;
    // 0x26b420: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x26B41Cu, 0x26B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B424u;
label_26b424:
    // 0x26b424: 0x144000fa  bnez        $v0, . + 4 + (0xFA << 2)
label_26b428:
    if (ctx->pc == 0x26B428u) {
        ctx->pc = 0x26B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B424u;
        // 0x26b428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B42Cu;
        goto label_26b42c;
    }
    ctx->pc = 0x26B424u;
    {
        const bool branch_taken_0x26b424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B424u;
        // 0x26b428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b424) {
            ctx->pc = 0x26B810u;
            goto label_26b810;
        }
    }
    ctx->pc = 0x26B42Cu;
label_26b42c:
    // 0x26b42c: 0xc089f98  jal         func_227E60
label_26b430:
    if (ctx->pc == 0x26B430u) {
        ctx->pc = 0x26B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B42Cu;
        // 0x26b430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B434u;
        goto label_26b434;
    }
    ctx->pc = 0x26B42Cu;
    SET_GPR_U32(ctx, 31, 0x26B434u);
    ctx->pc = 0x26B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B42Cu;
    // 0x26b430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x26B42Cu, 0x26B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B434u;
label_26b434:
    // 0x26b434: 0x144000f6  bnez        $v0, . + 4 + (0xF6 << 2)
label_26b438:
    if (ctx->pc == 0x26B438u) {
        ctx->pc = 0x26B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B434u;
        // 0x26b438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B43Cu;
        goto label_26b43c;
    }
    ctx->pc = 0x26B434u;
    {
        const bool branch_taken_0x26b434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B434u;
        // 0x26b438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b434) {
            ctx->pc = 0x26B810u;
            goto label_26b810;
        }
    }
    ctx->pc = 0x26B43Cu;
label_26b43c:
    // 0x26b43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b440:
    // 0x26b440: 0xc089998  jal         func_226660
label_26b444:
    if (ctx->pc == 0x26B444u) {
        ctx->pc = 0x26B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B440u;
        // 0x26b444: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B448u;
        goto label_26b448;
    }
    ctx->pc = 0x26B440u;
    SET_GPR_U32(ctx, 31, 0x26B448u);
    ctx->pc = 0x26B444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B440u;
    // 0x26b444: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26B440u, 0x26B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B448u;
label_26b448:
    // 0x26b448: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
label_26b44c:
    if (ctx->pc == 0x26B44Cu) {
        ctx->pc = 0x26B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B448u;
        // 0x26b44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B450u;
        goto label_26b450;
    }
    ctx->pc = 0x26B448u;
    {
        const bool branch_taken_0x26b448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B448u;
        // 0x26b44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b448) {
            ctx->pc = 0x26B810u;
            goto label_26b810;
        }
    }
    ctx->pc = 0x26B450u;
label_26b450:
    // 0x26b450: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26b450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26b454:
    // 0x26b454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b458:
    // 0x26b458: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x26b458u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_26b45c:
    // 0x26b45c: 0xc0962a2  jal         func_258A88
label_26b460:
    if (ctx->pc == 0x26B460u) {
        ctx->pc = 0x26B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B45Cu;
        // 0x26b460: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B464u;
        goto label_26b464;
    }
    ctx->pc = 0x26B45Cu;
    SET_GPR_U32(ctx, 31, 0x26B464u);
    ctx->pc = 0x26B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B45Cu;
    // 0x26b460: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x26B45Cu, 0x26B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B464u;
label_26b464:
    // 0x26b464: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x26b464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_26b468:
    // 0x26b468: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26b468u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_26b46c:
    // 0x26b46c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_26b470:
    if (ctx->pc == 0x26B470u) {
        ctx->pc = 0x26B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B46Cu;
        // 0x26b470: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B474u;
        goto label_26b474;
    }
    ctx->pc = 0x26B46Cu;
    {
        const bool branch_taken_0x26b46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B46Cu;
        // 0x26b470: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b46c) {
            ctx->pc = 0x26B4D0u;
            goto label_26b4d0;
        }
    }
    ctx->pc = 0x26B474u;
label_26b474:
    // 0x26b474: 0xc088ee6  jal         func_223B98
label_26b478:
    if (ctx->pc == 0x26B478u) {
        ctx->pc = 0x26B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B474u;
        // 0x26b478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B47Cu;
        goto label_26b47c;
    }
    ctx->pc = 0x26B474u;
    SET_GPR_U32(ctx, 31, 0x26B47Cu);
    ctx->pc = 0x26B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B474u;
    // 0x26b478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x26B474u, 0x26B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B47Cu;
label_26b47c:
    // 0x26b47c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_26b480:
    if (ctx->pc == 0x26B480u) {
        ctx->pc = 0x26B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B47Cu;
        // 0x26b480: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B484u;
        goto label_26b484;
    }
    ctx->pc = 0x26B47Cu;
    {
        const bool branch_taken_0x26b47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B47Cu;
        // 0x26b480: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b47c) {
            ctx->pc = 0x26B4D0u;
            goto label_26b4d0;
        }
    }
    ctx->pc = 0x26B484u;
label_26b484:
    // 0x26b484: 0x26f0b898  addiu       $s0, $s7, -0x4768
    ctx->pc = 0x26b484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949016));
label_26b488:
    // 0x26b488: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x26b488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26b48c:
    // 0x26b48c: 0xc0cd526  jal         func_335498
label_26b490:
    if (ctx->pc == 0x26B490u) {
        ctx->pc = 0x26B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B48Cu;
        // 0x26b490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B494u;
        goto label_26b494;
    }
    ctx->pc = 0x26B48Cu;
    SET_GPR_U32(ctx, 31, 0x26B494u);
    ctx->pc = 0x26B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B48Cu;
    // 0x26b490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x26B48Cu, 0x26B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B494u;
label_26b494:
    // 0x26b494: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_26b498:
    if (ctx->pc == 0x26B498u) {
        ctx->pc = 0x26B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B494u;
        // 0x26b498: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B49Cu;
        goto label_26b49c;
    }
    ctx->pc = 0x26B494u;
    {
        const bool branch_taken_0x26b494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b494) {
            ctx->pc = 0x26B498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B494u;
            // 0x26b498: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B4D0u;
            goto label_26b4d0;
        }
    }
    ctx->pc = 0x26B49Cu;
label_26b49c:
    // 0x26b49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b4a0:
    // 0x26b4a0: 0xc0cd526  jal         func_335498
label_26b4a4:
    if (ctx->pc == 0x26B4A4u) {
        ctx->pc = 0x26B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4A0u;
        // 0x26b4a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B4A8u;
        goto label_26b4a8;
    }
    ctx->pc = 0x26B4A0u;
    SET_GPR_U32(ctx, 31, 0x26B4A8u);
    ctx->pc = 0x26B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4A0u;
    // 0x26b4a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x26B4A0u, 0x26B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4A8u;
label_26b4a8:
    // 0x26b4a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b4ac:
    // 0x26b4ac: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x26b4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_26b4b0:
    // 0x26b4b0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26b4b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_26b4b4:
    // 0x26b4b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b4b8:
    // 0x26b4b8: 0x24460122  addiu       $a2, $v0, 0x122
    ctx->pc = 0x26b4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 290));
label_26b4bc:
    // 0x26b4bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26b4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26b4c0:
    // 0x26b4c0: 0xc09a9b4  jal         func_26A6D0
label_26b4c4:
    if (ctx->pc == 0x26B4C4u) {
        ctx->pc = 0x26B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4C0u;
        // 0x26b4c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B4C8u;
        goto label_26b4c8;
    }
    ctx->pc = 0x26B4C0u;
    SET_GPR_U32(ctx, 31, 0x26B4C8u);
    ctx->pc = 0x26B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4C0u;
    // 0x26b4c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A6D0u, 0x26B4C0u, 0x26B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4C8u;
label_26b4c8:
    // 0x26b4c8: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_26b4cc:
    if (ctx->pc == 0x26B4CCu) {
        ctx->pc = 0x26B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4C8u;
        // 0x26b4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B4D0u;
        goto label_26b4d0;
    }
    ctx->pc = 0x26B4C8u;
    {
        const bool branch_taken_0x26b4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4C8u;
        // 0x26b4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4c8) {
            ctx->pc = 0x26B810u;
            goto label_26b810;
        }
    }
    ctx->pc = 0x26B4D0u;
label_26b4d0:
    // 0x26b4d0: 0x8e3500d8  lw          $s5, 0xD8($s1)
    ctx->pc = 0x26b4d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26b4d4:
    // 0x26b4d4: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x26b4d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b4d8:
    // 0x26b4d8: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x26b4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_26b4dc:
    // 0x26b4dc: 0xc041532  jal         func_1054C8
label_26b4e0:
    if (ctx->pc == 0x26B4E0u) {
        ctx->pc = 0x26B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4DCu;
        // 0x26b4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B4E4u;
        goto label_26b4e4;
    }
    ctx->pc = 0x26B4DCu;
    SET_GPR_U32(ctx, 31, 0x26B4E4u);
    ctx->pc = 0x26B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4DCu;
    // 0x26b4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26B4DCu, 0x26B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4E4u;
label_26b4e4:
    // 0x26b4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b4e8:
    // 0x26b4e8: 0xc041532  jal         func_1054C8
label_26b4ec:
    if (ctx->pc == 0x26B4ECu) {
        ctx->pc = 0x26B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4E8u;
        // 0x26b4ec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B4F0u;
        goto label_26b4f0;
    }
    ctx->pc = 0x26B4E8u;
    SET_GPR_U32(ctx, 31, 0x26B4F0u);
    ctx->pc = 0x26B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4E8u;
    // 0x26b4ec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26B4E8u, 0x26B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4F0u;
label_26b4f0:
    // 0x26b4f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26b4f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b4f4:
    // 0x26b4f4: 0xc041532  jal         func_1054C8
label_26b4f8:
    if (ctx->pc == 0x26B4F8u) {
        ctx->pc = 0x26B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4F4u;
        // 0x26b4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B4FCu;
        goto label_26b4fc;
    }
    ctx->pc = 0x26B4F4u;
    SET_GPR_U32(ctx, 31, 0x26B4FCu);
    ctx->pc = 0x26B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4F4u;
    // 0x26b4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26B4F4u, 0x26B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4FCu;
label_26b4fc:
    // 0x26b4fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26b4fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b500:
    // 0x26b500: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_26b504:
    if (ctx->pc == 0x26B504u) {
        ctx->pc = 0x26B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B500u;
        // 0x26b504: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B508u;
        goto label_26b508;
    }
    ctx->pc = 0x26B500u;
    {
        const bool branch_taken_0x26b500 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B500u;
        // 0x26b504: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b500) {
            ctx->pc = 0x26B528u;
            goto label_26b528;
        }
    }
    ctx->pc = 0x26B508u;
label_26b508:
    // 0x26b508: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26b508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26b50c:
    // 0x26b50c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26b50cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26b510:
    // 0x26b510: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26b510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26b514:
    // 0x26b514: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x26b514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_26b518:
    // 0x26b518: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26b518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_26b51c:
    // 0x26b51c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b520:
    // 0x26b520: 0xc041b20  jal         func_106C80
label_26b524:
    if (ctx->pc == 0x26B524u) {
        ctx->pc = 0x26B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B520u;
        // 0x26b524: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B528u;
        goto label_26b528;
    }
    ctx->pc = 0x26B520u;
    SET_GPR_U32(ctx, 31, 0x26B528u);
    ctx->pc = 0x26B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B520u;
    // 0x26b524: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26B520u, 0x26B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B528u;
label_26b528:
    // 0x26b528: 0xc05d484  jal         func_175210
label_26b52c:
    if (ctx->pc == 0x26B52Cu) {
        ctx->pc = 0x26B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B528u;
        // 0x26b52c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B530u;
        goto label_26b530;
    }
    ctx->pc = 0x26B528u;
    SET_GPR_U32(ctx, 31, 0x26B530u);
    ctx->pc = 0x26B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B528u;
    // 0x26b52c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26B528u, 0x26B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B530u;
label_26b530:
    // 0x26b530: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26b534:
    // 0x26b534: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26b534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26b538:
    // 0x26b538: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26b538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26b53c:
    // 0x26b53c: 0xa0f809  jalr        $a1
label_26b540:
    if (ctx->pc == 0x26B540u) {
        ctx->pc = 0x26B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B53Cu;
        // 0x26b540: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B544u;
        goto label_26b544;
    }
    ctx->pc = 0x26B53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26B544u);
        ctx->pc = 0x26B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B53Cu;
        // 0x26b540: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B53Cu, 0x26B544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B544u;
label_26b544:
    // 0x26b544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b548:
    // 0x26b548: 0xc087016  jal         func_21C058
label_26b54c:
    if (ctx->pc == 0x26B54Cu) {
        ctx->pc = 0x26B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B548u;
        // 0x26b54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B550u;
        goto label_26b550;
    }
    ctx->pc = 0x26B548u;
    SET_GPR_U32(ctx, 31, 0x26B550u);
    ctx->pc = 0x26B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B548u;
    // 0x26b54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26B548u, 0x26B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B550u;
label_26b550:
    // 0x26b550: 0xc088ee6  jal         func_223B98
label_26b554:
    if (ctx->pc == 0x26B554u) {
        ctx->pc = 0x26B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B550u;
        // 0x26b554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B558u;
        goto label_26b558;
    }
    ctx->pc = 0x26B550u;
    SET_GPR_U32(ctx, 31, 0x26B558u);
    ctx->pc = 0x26B554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B550u;
    // 0x26b554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x26B550u, 0x26B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B558u;
label_26b558:
    // 0x26b558: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_26b55c:
    if (ctx->pc == 0x26B55Cu) {
        ctx->pc = 0x26B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B558u;
        // 0x26b55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B560u;
        goto label_26b560;
    }
    ctx->pc = 0x26B558u;
    {
        const bool branch_taken_0x26b558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B558u;
        // 0x26b55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b558) {
            ctx->pc = 0x26B5A4u;
            goto label_26b5a4;
        }
    }
    ctx->pc = 0x26B560u;
label_26b560:
    // 0x26b560: 0xc094fb4  jal         func_253ED0
label_26b564:
    if (ctx->pc == 0x26B564u) {
        ctx->pc = 0x26B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B560u;
        // 0x26b564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B568u;
        goto label_26b568;
    }
    ctx->pc = 0x26B560u;
    SET_GPR_U32(ctx, 31, 0x26B568u);
    ctx->pc = 0x26B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B560u;
    // 0x26b564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x26B560u, 0x26B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B568u;
label_26b568:
    // 0x26b568: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_26b56c:
    if (ctx->pc == 0x26B56Cu) {
        ctx->pc = 0x26B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B568u;
        // 0x26b56c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B570u;
        goto label_26b570;
    }
    ctx->pc = 0x26B568u;
    {
        const bool branch_taken_0x26b568 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B568u;
        // 0x26b56c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b568) {
            ctx->pc = 0x26B58Cu;
            goto label_26b58c;
        }
    }
    ctx->pc = 0x26B570u;
label_26b570:
    // 0x26b570: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26b570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26b574:
    // 0x26b574: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26b574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26b578:
    // 0x26b578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26b578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26b57c:
    // 0x26b57c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26b57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26b580:
    // 0x26b580: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26b580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b584:
    // 0x26b584: 0xc04159e  jal         func_105678
label_26b588:
    if (ctx->pc == 0x26B588u) {
        ctx->pc = 0x26B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B584u;
        // 0x26b588: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B58Cu;
        goto label_26b58c;
    }
    ctx->pc = 0x26B584u;
    SET_GPR_U32(ctx, 31, 0x26B58Cu);
    ctx->pc = 0x26B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B584u;
    // 0x26b588: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26B584u, 0x26B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B58Cu;
label_26b58c:
    // 0x26b58c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26b590:
    // 0x26b590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b594:
    // 0x26b594: 0xc094fca  jal         func_253F28
label_26b598:
    if (ctx->pc == 0x26B598u) {
        ctx->pc = 0x26B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B594u;
        // 0x26b598: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B59Cu;
        goto label_26b59c;
    }
    ctx->pc = 0x26B594u;
    SET_GPR_U32(ctx, 31, 0x26B59Cu);
    ctx->pc = 0x26B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B594u;
    // 0x26b598: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x26B594u, 0x26B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B59Cu;
label_26b59c:
    // 0x26b59c: 0x1000000d  b           . + 4 + (0xD << 2)
label_26b5a0:
    if (ctx->pc == 0x26B5A0u) {
        ctx->pc = 0x26B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B59Cu;
        // 0x26b5a0: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B5A4u;
        goto label_26b5a4;
    }
    ctx->pc = 0x26B59Cu;
    {
        const bool branch_taken_0x26b59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B59Cu;
        // 0x26b5a0: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b59c) {
            ctx->pc = 0x26B5D4u;
            goto label_26b5d4;
        }
    }
    ctx->pc = 0x26B5A4u;
label_26b5a4:
    // 0x26b5a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_26b5a8:
    if (ctx->pc == 0x26B5A8u) {
        ctx->pc = 0x26B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5A4u;
        // 0x26b5a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B5ACu;
        goto label_26b5ac;
    }
    ctx->pc = 0x26B5A4u;
    {
        const bool branch_taken_0x26b5a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5A4u;
        // 0x26b5a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5a4) {
            ctx->pc = 0x26B5C8u;
            goto label_26b5c8;
        }
    }
    ctx->pc = 0x26B5ACu;
label_26b5ac:
    // 0x26b5ac: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26b5b0:
    // 0x26b5b0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26b5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26b5b4:
    // 0x26b5b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26b5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26b5b8:
    // 0x26b5b8: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26b5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26b5bc:
    // 0x26b5bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26b5bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b5c0:
    // 0x26b5c0: 0xc04159e  jal         func_105678
label_26b5c4:
    if (ctx->pc == 0x26B5C4u) {
        ctx->pc = 0x26B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5C0u;
        // 0x26b5c4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B5C8u;
        goto label_26b5c8;
    }
    ctx->pc = 0x26B5C0u;
    SET_GPR_U32(ctx, 31, 0x26B5C8u);
    ctx->pc = 0x26B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B5C0u;
    // 0x26b5c4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26B5C0u, 0x26B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5C8u;
label_26b5c8:
    // 0x26b5c8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26b5cc:
    // 0x26b5cc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x26b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_26b5d0:
    // 0x26b5d0: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x26b5d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_26b5d4:
    // 0x26b5d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26b5d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_26b5d8:
    // 0x26b5d8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_26b5dc:
    if (ctx->pc == 0x26B5DCu) {
        ctx->pc = 0x26B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5D8u;
        // 0x26b5dc: 0x27d0df28  addiu       $s0, $fp, -0x20D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B5E0u;
        goto label_26b5e0;
    }
    ctx->pc = 0x26B5D8u;
    {
        const bool branch_taken_0x26b5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5D8u;
        // 0x26b5dc: 0x27d0df28  addiu       $s0, $fp, -0x20D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5d8) {
            ctx->pc = 0x26B654u;
            goto label_26b654;
        }
    }
    ctx->pc = 0x26B5E0u;
label_26b5e0:
    // 0x26b5e0: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_26b5e4:
    if (ctx->pc == 0x26B5E4u) {
        ctx->pc = 0x26B5E8u;
        goto label_26b5e8;
    }
    ctx->pc = 0x26B5E0u;
    {
        const bool branch_taken_0x26b5e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b5e0) {
            ctx->pc = 0x26B628u;
            goto label_26b628;
        }
    }
    ctx->pc = 0x26B5E8u;
label_26b5e8:
    // 0x26b5e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26b5ec:
    // 0x26b5ec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26b5ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26b5f0:
    // 0x26b5f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26b5f4:
    // 0x26b5f4: 0x40f809  jalr        $v0
label_26b5f8:
    if (ctx->pc == 0x26B5F8u) {
        ctx->pc = 0x26B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5F4u;
        // 0x26b5f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B5FCu;
        goto label_26b5fc;
    }
    ctx->pc = 0x26B5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B5FCu);
        ctx->pc = 0x26B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5F4u;
        // 0x26b5f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B5F4u, 0x26B5FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B5FCu;
label_26b5fc:
    // 0x26b5fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26b5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26b600:
    // 0x26b600: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26b600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26b604:
    // 0x26b604: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b608:
    // 0x26b608: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x26b608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26b60c:
    // 0x26b60c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26b60cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b610:
    // 0x26b610: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26b610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26b614:
    // 0x26b614: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26b614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26b618:
    // 0x26b618: 0x2406013c  addiu       $a2, $zero, 0x13C
    ctx->pc = 0x26b618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
label_26b61c:
    // 0x26b61c: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x26b61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26b620:
    // 0x26b620: 0xc041664  jal         func_105990
label_26b624:
    if (ctx->pc == 0x26B624u) {
        ctx->pc = 0x26B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B620u;
        // 0x26b624: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B628u;
        goto label_26b628;
    }
    ctx->pc = 0x26B620u;
    SET_GPR_U32(ctx, 31, 0x26B628u);
    ctx->pc = 0x26B624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B620u;
    // 0x26b624: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26B620u, 0x26B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B628u;
label_26b628:
    // 0x26b628: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x26b628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_26b62c:
    // 0x26b62c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b630:
    // 0x26b630: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26b630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_26b634:
    // 0x26b634: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26b634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b638:
    // 0x26b638: 0xc0cd508  jal         func_335420
label_26b63c:
    if (ctx->pc == 0x26B63Cu) {
        ctx->pc = 0x26B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B638u;
        // 0x26b63c: 0x26e4b898  addiu       $a0, $s7, -0x4768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B640u;
        goto label_26b640;
    }
    ctx->pc = 0x26B638u;
    SET_GPR_U32(ctx, 31, 0x26B640u);
    ctx->pc = 0x26B63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B638u;
    // 0x26b63c: 0x26e4b898  addiu       $a0, $s7, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x26B638u, 0x26B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B640u;
label_26b640:
    // 0x26b640: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26b640u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26b644:
    // 0x26b644: 0xc0420f4  jal         func_1083D0
label_26b648:
    if (ctx->pc == 0x26B648u) {
        ctx->pc = 0x26B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B644u;
        // 0x26b648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B64Cu;
        goto label_26b64c;
    }
    ctx->pc = 0x26B644u;
    SET_GPR_U32(ctx, 31, 0x26B64Cu);
    ctx->pc = 0x26B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B644u;
    // 0x26b648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x26B644u, 0x26B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B64Cu;
label_26b64c:
    // 0x26b64c: 0x10000048  b           . + 4 + (0x48 << 2)
label_26b650:
    if (ctx->pc == 0x26B650u) {
        ctx->pc = 0x26B654u;
        goto label_26b654;
    }
    ctx->pc = 0x26B64Cu;
    {
        const bool branch_taken_0x26b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b64c) {
            ctx->pc = 0x26B770u;
            goto label_26b770;
        }
    }
    ctx->pc = 0x26B654u;
label_26b654:
    // 0x26b654: 0xc041532  jal         func_1054C8
label_26b658:
    if (ctx->pc == 0x26B658u) {
        ctx->pc = 0x26B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B654u;
        // 0x26b658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B65Cu;
        goto label_26b65c;
    }
    ctx->pc = 0x26B654u;
    SET_GPR_U32(ctx, 31, 0x26B65Cu);
    ctx->pc = 0x26B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B654u;
    // 0x26b658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26B654u, 0x26B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B65Cu;
label_26b65c:
    // 0x26b65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b660:
    // 0x26b660: 0xc041532  jal         func_1054C8
label_26b664:
    if (ctx->pc == 0x26B664u) {
        ctx->pc = 0x26B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B660u;
        // 0x26b664: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B668u;
        goto label_26b668;
    }
    ctx->pc = 0x26B660u;
    SET_GPR_U32(ctx, 31, 0x26B668u);
    ctx->pc = 0x26B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B660u;
    // 0x26b664: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26B660u, 0x26B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B668u;
label_26b668:
    // 0x26b668: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_26b66c:
    if (ctx->pc == 0x26B66Cu) {
        ctx->pc = 0x26B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B668u;
        // 0x26b66c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B670u;
        goto label_26b670;
    }
    ctx->pc = 0x26B668u;
    {
        const bool branch_taken_0x26b668 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B668u;
        // 0x26b66c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b668) {
            ctx->pc = 0x26B6B0u;
            goto label_26b6b0;
        }
    }
    ctx->pc = 0x26B670u;
label_26b670:
    // 0x26b670: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26b670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26b674:
    // 0x26b674: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26b674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26b678:
    // 0x26b678: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26b67c:
    // 0x26b67c: 0x40f809  jalr        $v0
label_26b680:
    if (ctx->pc == 0x26B680u) {
        ctx->pc = 0x26B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B67Cu;
        // 0x26b680: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B684u;
        goto label_26b684;
    }
    ctx->pc = 0x26B67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B684u);
        ctx->pc = 0x26B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B67Cu;
        // 0x26b680: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B67Cu, 0x26B684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B684u;
label_26b684:
    // 0x26b684: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26b684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26b688:
    // 0x26b688: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26b688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26b68c:
    // 0x26b68c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b690:
    // 0x26b690: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x26b690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26b694:
    // 0x26b694: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26b694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b698:
    // 0x26b698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26b69c:
    // 0x26b69c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26b69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26b6a0:
    // 0x26b6a0: 0x2406013e  addiu       $a2, $zero, 0x13E
    ctx->pc = 0x26b6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_26b6a4:
    // 0x26b6a4: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x26b6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26b6a8:
    // 0x26b6a8: 0xc041664  jal         func_105990
label_26b6ac:
    if (ctx->pc == 0x26B6ACu) {
        ctx->pc = 0x26B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6A8u;
        // 0x26b6ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6B0u;
        goto label_26b6b0;
    }
    ctx->pc = 0x26B6A8u;
    SET_GPR_U32(ctx, 31, 0x26B6B0u);
    ctx->pc = 0x26B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B6A8u;
    // 0x26b6ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26B6A8u, 0x26B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6B0u;
label_26b6b0:
    // 0x26b6b0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x26b6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_26b6b4:
    // 0x26b6b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26b6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_26b6b8:
    // 0x26b6b8: 0x26f3b898  addiu       $s3, $s7, -0x4768
    ctx->pc = 0x26b6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949016));
label_26b6bc:
    // 0x26b6bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26b6c0:
    // 0x26b6c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b6c4:
    // 0x26b6c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26b6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26b6c8:
    // 0x26b6c8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26b6c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_26b6cc:
    // 0x26b6cc: 0xc0cd508  jal         func_335420
label_26b6d0:
    if (ctx->pc == 0x26B6D0u) {
        ctx->pc = 0x26B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6CCu;
        // 0x26b6d0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6D4u;
        goto label_26b6d4;
    }
    ctx->pc = 0x26B6CCu;
    SET_GPR_U32(ctx, 31, 0x26B6D4u);
    ctx->pc = 0x26B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B6CCu;
    // 0x26b6d0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x26B6CCu, 0x26B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6D4u;
label_26b6d4:
    // 0x26b6d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26b6d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26b6d8:
    // 0x26b6d8: 0xc0420f4  jal         func_1083D0
label_26b6dc:
    if (ctx->pc == 0x26B6DCu) {
        ctx->pc = 0x26B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6D8u;
        // 0x26b6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6E0u;
        goto label_26b6e0;
    }
    ctx->pc = 0x26B6D8u;
    SET_GPR_U32(ctx, 31, 0x26B6E0u);
    ctx->pc = 0x26B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B6D8u;
    // 0x26b6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x26B6D8u, 0x26B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6E0u;
label_26b6e0:
    // 0x26b6e0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_26b6e4:
    if (ctx->pc == 0x26B6E4u) {
        ctx->pc = 0x26B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6E0u;
        // 0x26b6e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6E8u;
        goto label_26b6e8;
    }
    ctx->pc = 0x26B6E0u;
    {
        const bool branch_taken_0x26b6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6E0u;
        // 0x26b6e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6e0) {
            ctx->pc = 0x26B70Cu;
            goto label_26b70c;
        }
    }
    ctx->pc = 0x26B6E8u;
label_26b6e8:
    // 0x26b6e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b6e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b6ec:
    // 0x26b6ec: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x26b6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26b6f0:
    // 0x26b6f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26b6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26b6f4:
    // 0x26b6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b6f8:
    // 0x26b6f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26b6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26b6fc:
    // 0x26b6fc: 0x2406013d  addiu       $a2, $zero, 0x13D
    ctx->pc = 0x26b6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
label_26b700:
    // 0x26b700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26b700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b704:
    // 0x26b704: 0xc041664  jal         func_105990
label_26b708:
    if (ctx->pc == 0x26B708u) {
        ctx->pc = 0x26B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B704u;
        // 0x26b708: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B70Cu;
        goto label_26b70c;
    }
    ctx->pc = 0x26B704u;
    SET_GPR_U32(ctx, 31, 0x26B70Cu);
    ctx->pc = 0x26B708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B704u;
    // 0x26b708: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26B704u, 0x26B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B70Cu;
label_26b70c:
    // 0x26b70c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26b70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26b710:
    // 0x26b710: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26b710u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_26b714:
    // 0x26b714: 0xc0cd508  jal         func_335420
label_26b718:
    if (ctx->pc == 0x26B718u) {
        ctx->pc = 0x26B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B714u;
        // 0x26b718: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B71Cu;
        goto label_26b71c;
    }
    ctx->pc = 0x26B714u;
    SET_GPR_U32(ctx, 31, 0x26B71Cu);
    ctx->pc = 0x26B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B714u;
    // 0x26b718: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x26B714u, 0x26B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B71Cu;
label_26b71c:
    // 0x26b71c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26b71cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26b720:
    // 0x26b720: 0xc0420f4  jal         func_1083D0
label_26b724:
    if (ctx->pc == 0x26B724u) {
        ctx->pc = 0x26B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B720u;
        // 0x26b724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B728u;
        goto label_26b728;
    }
    ctx->pc = 0x26B720u;
    SET_GPR_U32(ctx, 31, 0x26B728u);
    ctx->pc = 0x26B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B720u;
    // 0x26b724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x26B720u, 0x26B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B728u;
label_26b728:
    // 0x26b728: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_26b72c:
    if (ctx->pc == 0x26B72Cu) {
        ctx->pc = 0x26B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B728u;
        // 0x26b72c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B730u;
        goto label_26b730;
    }
    ctx->pc = 0x26B728u;
    {
        const bool branch_taken_0x26b728 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B728u;
        // 0x26b72c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b728) {
            ctx->pc = 0x26B754u;
            goto label_26b754;
        }
    }
    ctx->pc = 0x26B730u;
label_26b730:
    // 0x26b730: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b734:
    // 0x26b734: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x26b734u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26b738:
    // 0x26b738: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26b738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b73c:
    // 0x26b73c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26b73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26b740:
    // 0x26b740: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26b740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26b744:
    // 0x26b744: 0x2406013c  addiu       $a2, $zero, 0x13C
    ctx->pc = 0x26b744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
label_26b748:
    // 0x26b748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26b748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b74c:
    // 0x26b74c: 0xc041664  jal         func_105990
label_26b750:
    if (ctx->pc == 0x26B750u) {
        ctx->pc = 0x26B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B74Cu;
        // 0x26b750: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B754u;
        goto label_26b754;
    }
    ctx->pc = 0x26B74Cu;
    SET_GPR_U32(ctx, 31, 0x26B754u);
    ctx->pc = 0x26B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B74Cu;
    // 0x26b750: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26B74Cu, 0x26B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B754u;
label_26b754:
    // 0x26b754: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26b754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26b758:
    // 0x26b758: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26b758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_26b75c:
    // 0x26b75c: 0xc0cd508  jal         func_335420
label_26b760:
    if (ctx->pc == 0x26B760u) {
        ctx->pc = 0x26B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B75Cu;
        // 0x26b760: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B764u;
        goto label_26b764;
    }
    ctx->pc = 0x26B75Cu;
    SET_GPR_U32(ctx, 31, 0x26B764u);
    ctx->pc = 0x26B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B75Cu;
    // 0x26b760: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x26B75Cu, 0x26B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B764u;
label_26b764:
    // 0x26b764: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26b764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26b768:
    // 0x26b768: 0xc0420f4  jal         func_1083D0
label_26b76c:
    if (ctx->pc == 0x26B76Cu) {
        ctx->pc = 0x26B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B768u;
        // 0x26b76c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B770u;
        goto label_26b770;
    }
    ctx->pc = 0x26B768u;
    SET_GPR_U32(ctx, 31, 0x26B770u);
    ctx->pc = 0x26B76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B768u;
    // 0x26b76c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x26B768u, 0x26B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B770u;
label_26b770:
    // 0x26b770: 0xc088ee6  jal         func_223B98
label_26b774:
    if (ctx->pc == 0x26B774u) {
        ctx->pc = 0x26B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B770u;
        // 0x26b774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B778u;
        goto label_26b778;
    }
    ctx->pc = 0x26B770u;
    SET_GPR_U32(ctx, 31, 0x26B778u);
    ctx->pc = 0x26B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B770u;
    // 0x26b774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x26B770u, 0x26B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B778u;
label_26b778:
    // 0x26b778: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_26b77c:
    if (ctx->pc == 0x26B77Cu) {
        ctx->pc = 0x26B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B778u;
        // 0x26b77c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B780u;
        goto label_26b780;
    }
    ctx->pc = 0x26B778u;
    {
        const bool branch_taken_0x26b778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B778u;
        // 0x26b77c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b778) {
            ctx->pc = 0x26B7ECu;
            goto label_26b7ec;
        }
    }
    ctx->pc = 0x26B780u;
label_26b780:
    // 0x26b780: 0xc041532  jal         func_1054C8
label_26b784:
    if (ctx->pc == 0x26B784u) {
        ctx->pc = 0x26B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B780u;
        // 0x26b784: 0x27c4df28  addiu       $a0, $fp, -0x20D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B788u;
        goto label_26b788;
    }
    ctx->pc = 0x26B780u;
    SET_GPR_U32(ctx, 31, 0x26B788u);
    ctx->pc = 0x26B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B780u;
    // 0x26b784: 0x27c4df28  addiu       $a0, $fp, -0x20D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26B780u, 0x26B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B788u;
label_26b788:
    // 0x26b788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26b788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b78c:
    // 0x26b78c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_26b790:
    if (ctx->pc == 0x26B790u) {
        ctx->pc = 0x26B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B78Cu;
        // 0x26b790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B794u;
        goto label_26b794;
    }
    ctx->pc = 0x26B78Cu;
    {
        const bool branch_taken_0x26b78c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B78Cu;
        // 0x26b790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b78c) {
            ctx->pc = 0x26B7DCu;
            goto label_26b7dc;
        }
    }
    ctx->pc = 0x26B794u;
label_26b794:
    // 0x26b794: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26b794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26b798:
    // 0x26b798: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26b798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26b79c:
    // 0x26b79c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26b7a0:
    // 0x26b7a0: 0x40f809  jalr        $v0
label_26b7a4:
    if (ctx->pc == 0x26B7A4u) {
        ctx->pc = 0x26B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7A0u;
        // 0x26b7a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7A8u;
        goto label_26b7a8;
    }
    ctx->pc = 0x26B7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B7A8u);
        ctx->pc = 0x26B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7A0u;
        // 0x26b7a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B7A0u, 0x26B7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B7A8u;
label_26b7a8:
    // 0x26b7a8: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x26b7a8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_26b7ac:
    // 0x26b7ac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26b7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26b7b0:
    // 0x26b7b0: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26b7b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26b7b4:
    // 0x26b7b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b7b8:
    // 0x26b7b8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26b7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26b7bc:
    // 0x26b7bc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26b7bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b7c0:
    // 0x26b7c0: 0x254ae250  addiu       $t2, $t2, -0x1DB0
    ctx->pc = 0x26b7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959696));
label_26b7c4:
    // 0x26b7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b7c8:
    // 0x26b7c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26b7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26b7cc:
    // 0x26b7cc: 0x240600c7  addiu       $a2, $zero, 0xC7
    ctx->pc = 0x26b7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_26b7d0:
    // 0x26b7d0: 0xc041664  jal         func_105990
label_26b7d4:
    if (ctx->pc == 0x26B7D4u) {
        ctx->pc = 0x26B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7D0u;
        // 0x26b7d4: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7D8u;
        goto label_26b7d8;
    }
    ctx->pc = 0x26B7D0u;
    SET_GPR_U32(ctx, 31, 0x26B7D8u);
    ctx->pc = 0x26B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7D0u;
    // 0x26b7d4: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26B7D0u, 0x26B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7D8u;
label_26b7d8:
    // 0x26b7d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26b7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b7dc:
    // 0x26b7dc: 0xc05d53a  jal         func_1754E8
label_26b7e0:
    if (ctx->pc == 0x26B7E0u) {
        ctx->pc = 0x26B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7DCu;
        // 0x26b7e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7E4u;
        goto label_26b7e4;
    }
    ctx->pc = 0x26B7DCu;
    SET_GPR_U32(ctx, 31, 0x26B7E4u);
    ctx->pc = 0x26B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7DCu;
    // 0x26b7e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26B7DCu, 0x26B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7E4u;
label_26b7e4:
    // 0x26b7e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_26b7e8:
    if (ctx->pc == 0x26B7E8u) {
        ctx->pc = 0x26B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7E4u;
        // 0x26b7e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7ECu;
        goto label_26b7ec;
    }
    ctx->pc = 0x26B7E4u;
    {
        const bool branch_taken_0x26b7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7E4u;
        // 0x26b7e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7e4) {
            ctx->pc = 0x26B7F8u;
            goto label_26b7f8;
        }
    }
    ctx->pc = 0x26B7ECu;
label_26b7ec:
    // 0x26b7ec: 0xc05d53a  jal         func_1754E8
label_26b7f0:
    if (ctx->pc == 0x26B7F0u) {
        ctx->pc = 0x26B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7ECu;
        // 0x26b7f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7F4u;
        goto label_26b7f4;
    }
    ctx->pc = 0x26B7ECu;
    SET_GPR_U32(ctx, 31, 0x26B7F4u);
    ctx->pc = 0x26B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7ECu;
    // 0x26b7f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26B7ECu, 0x26B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7F4u;
label_26b7f4:
    // 0x26b7f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b7f8:
    // 0x26b7f8: 0xc089990  jal         func_226640
label_26b7fc:
    if (ctx->pc == 0x26B7FCu) {
        ctx->pc = 0x26B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7F8u;
        // 0x26b7fc: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B800u;
        goto label_26b800;
    }
    ctx->pc = 0x26B7F8u;
    SET_GPR_U32(ctx, 31, 0x26B800u);
    ctx->pc = 0x26B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7F8u;
    // 0x26b7fc: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26B7F8u, 0x26B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B800u;
label_26b800:
    // 0x26b800: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26b800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26b804:
    // 0x26b804: 0xc05d4f6  jal         func_1753D8
label_26b808:
    if (ctx->pc == 0x26B808u) {
        ctx->pc = 0x26B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B804u;
        // 0x26b808: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B80Cu;
        goto label_26b80c;
    }
    ctx->pc = 0x26B804u;
    SET_GPR_U32(ctx, 31, 0x26B80Cu);
    ctx->pc = 0x26B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B804u;
    // 0x26b808: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26B804u, 0x26B80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B80Cu;
label_26b80c:
    // 0x26b80c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b810:
    // 0x26b810: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x26b810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26b814:
    // 0x26b814: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x26b814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26b818:
    // 0x26b818: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26b818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26b81c:
    // 0x26b81c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x26b81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26b820:
    // 0x26b820: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26b820u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26b824:
    // 0x26b824: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x26b824u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26b828:
    // 0x26b828: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x26b828u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26b82c:
    // 0x26b82c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x26b82cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26b830:
    // 0x26b830: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x26b830u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26b834:
    // 0x26b834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26b838:
    // 0x26b838: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x26b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_26b83c:
    // 0x26b83c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x26b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26b840:
    // 0x26b840: 0x3e00008  jr          $ra
label_26b844:
    if (ctx->pc == 0x26B844u) {
        ctx->pc = 0x26B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B840u;
        // 0x26b844: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B848u;
        goto label_fallthrough_0x26b840;
    }
    ctx->pc = 0x26B840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B840u;
        // 0x26b844: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26b840:
    ctx->pc = 0x26B848u;
}
