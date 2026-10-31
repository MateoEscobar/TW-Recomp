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

// Function: sub_0024B3D8
// Address: 0x24b3d8 - 0x24b780
void sub_0024B3D8_0x24b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B3D8_0x24b3d8");
#endif

    switch (ctx->pc) {
        case 0x24b3d8u: goto label_24b3d8;
        case 0x24b3dcu: goto label_24b3dc;
        case 0x24b3e0u: goto label_24b3e0;
        case 0x24b3e4u: goto label_24b3e4;
        case 0x24b3e8u: goto label_24b3e8;
        case 0x24b3ecu: goto label_24b3ec;
        case 0x24b3f0u: goto label_24b3f0;
        case 0x24b3f4u: goto label_24b3f4;
        case 0x24b3f8u: goto label_24b3f8;
        case 0x24b3fcu: goto label_24b3fc;
        case 0x24b400u: goto label_24b400;
        case 0x24b404u: goto label_24b404;
        case 0x24b408u: goto label_24b408;
        case 0x24b40cu: goto label_24b40c;
        case 0x24b410u: goto label_24b410;
        case 0x24b414u: goto label_24b414;
        case 0x24b418u: goto label_24b418;
        case 0x24b41cu: goto label_24b41c;
        case 0x24b420u: goto label_24b420;
        case 0x24b424u: goto label_24b424;
        case 0x24b428u: goto label_24b428;
        case 0x24b42cu: goto label_24b42c;
        case 0x24b430u: goto label_24b430;
        case 0x24b434u: goto label_24b434;
        case 0x24b438u: goto label_24b438;
        case 0x24b43cu: goto label_24b43c;
        case 0x24b440u: goto label_24b440;
        case 0x24b444u: goto label_24b444;
        case 0x24b448u: goto label_24b448;
        case 0x24b44cu: goto label_24b44c;
        case 0x24b450u: goto label_24b450;
        case 0x24b454u: goto label_24b454;
        case 0x24b458u: goto label_24b458;
        case 0x24b45cu: goto label_24b45c;
        case 0x24b460u: goto label_24b460;
        case 0x24b464u: goto label_24b464;
        case 0x24b468u: goto label_24b468;
        case 0x24b46cu: goto label_24b46c;
        case 0x24b470u: goto label_24b470;
        case 0x24b474u: goto label_24b474;
        case 0x24b478u: goto label_24b478;
        case 0x24b47cu: goto label_24b47c;
        case 0x24b480u: goto label_24b480;
        case 0x24b484u: goto label_24b484;
        case 0x24b488u: goto label_24b488;
        case 0x24b48cu: goto label_24b48c;
        case 0x24b490u: goto label_24b490;
        case 0x24b494u: goto label_24b494;
        case 0x24b498u: goto label_24b498;
        case 0x24b49cu: goto label_24b49c;
        case 0x24b4a0u: goto label_24b4a0;
        case 0x24b4a4u: goto label_24b4a4;
        case 0x24b4a8u: goto label_24b4a8;
        case 0x24b4acu: goto label_24b4ac;
        case 0x24b4b0u: goto label_24b4b0;
        case 0x24b4b4u: goto label_24b4b4;
        case 0x24b4b8u: goto label_24b4b8;
        case 0x24b4bcu: goto label_24b4bc;
        case 0x24b4c0u: goto label_24b4c0;
        case 0x24b4c4u: goto label_24b4c4;
        case 0x24b4c8u: goto label_24b4c8;
        case 0x24b4ccu: goto label_24b4cc;
        case 0x24b4d0u: goto label_24b4d0;
        case 0x24b4d4u: goto label_24b4d4;
        case 0x24b4d8u: goto label_24b4d8;
        case 0x24b4dcu: goto label_24b4dc;
        case 0x24b4e0u: goto label_24b4e0;
        case 0x24b4e4u: goto label_24b4e4;
        case 0x24b4e8u: goto label_24b4e8;
        case 0x24b4ecu: goto label_24b4ec;
        case 0x24b4f0u: goto label_24b4f0;
        case 0x24b4f4u: goto label_24b4f4;
        case 0x24b4f8u: goto label_24b4f8;
        case 0x24b4fcu: goto label_24b4fc;
        case 0x24b500u: goto label_24b500;
        case 0x24b504u: goto label_24b504;
        case 0x24b508u: goto label_24b508;
        case 0x24b50cu: goto label_24b50c;
        case 0x24b510u: goto label_24b510;
        case 0x24b514u: goto label_24b514;
        case 0x24b518u: goto label_24b518;
        case 0x24b51cu: goto label_24b51c;
        case 0x24b520u: goto label_24b520;
        case 0x24b524u: goto label_24b524;
        case 0x24b528u: goto label_24b528;
        case 0x24b52cu: goto label_24b52c;
        case 0x24b530u: goto label_24b530;
        case 0x24b534u: goto label_24b534;
        case 0x24b538u: goto label_24b538;
        case 0x24b53cu: goto label_24b53c;
        case 0x24b540u: goto label_24b540;
        case 0x24b544u: goto label_24b544;
        case 0x24b548u: goto label_24b548;
        case 0x24b54cu: goto label_24b54c;
        case 0x24b550u: goto label_24b550;
        case 0x24b554u: goto label_24b554;
        case 0x24b558u: goto label_24b558;
        case 0x24b55cu: goto label_24b55c;
        case 0x24b560u: goto label_24b560;
        case 0x24b564u: goto label_24b564;
        case 0x24b568u: goto label_24b568;
        case 0x24b56cu: goto label_24b56c;
        case 0x24b570u: goto label_24b570;
        case 0x24b574u: goto label_24b574;
        case 0x24b578u: goto label_24b578;
        case 0x24b57cu: goto label_24b57c;
        case 0x24b580u: goto label_24b580;
        case 0x24b584u: goto label_24b584;
        case 0x24b588u: goto label_24b588;
        case 0x24b58cu: goto label_24b58c;
        case 0x24b590u: goto label_24b590;
        case 0x24b594u: goto label_24b594;
        case 0x24b598u: goto label_24b598;
        case 0x24b59cu: goto label_24b59c;
        case 0x24b5a0u: goto label_24b5a0;
        case 0x24b5a4u: goto label_24b5a4;
        case 0x24b5a8u: goto label_24b5a8;
        case 0x24b5acu: goto label_24b5ac;
        case 0x24b5b0u: goto label_24b5b0;
        case 0x24b5b4u: goto label_24b5b4;
        case 0x24b5b8u: goto label_24b5b8;
        case 0x24b5bcu: goto label_24b5bc;
        case 0x24b5c0u: goto label_24b5c0;
        case 0x24b5c4u: goto label_24b5c4;
        case 0x24b5c8u: goto label_24b5c8;
        case 0x24b5ccu: goto label_24b5cc;
        case 0x24b5d0u: goto label_24b5d0;
        case 0x24b5d4u: goto label_24b5d4;
        case 0x24b5d8u: goto label_24b5d8;
        case 0x24b5dcu: goto label_24b5dc;
        case 0x24b5e0u: goto label_24b5e0;
        case 0x24b5e4u: goto label_24b5e4;
        case 0x24b5e8u: goto label_24b5e8;
        case 0x24b5ecu: goto label_24b5ec;
        case 0x24b5f0u: goto label_24b5f0;
        case 0x24b5f4u: goto label_24b5f4;
        case 0x24b5f8u: goto label_24b5f8;
        case 0x24b5fcu: goto label_24b5fc;
        case 0x24b600u: goto label_24b600;
        case 0x24b604u: goto label_24b604;
        case 0x24b608u: goto label_24b608;
        case 0x24b60cu: goto label_24b60c;
        case 0x24b610u: goto label_24b610;
        case 0x24b614u: goto label_24b614;
        case 0x24b618u: goto label_24b618;
        case 0x24b61cu: goto label_24b61c;
        case 0x24b620u: goto label_24b620;
        case 0x24b624u: goto label_24b624;
        case 0x24b628u: goto label_24b628;
        case 0x24b62cu: goto label_24b62c;
        case 0x24b630u: goto label_24b630;
        case 0x24b634u: goto label_24b634;
        case 0x24b638u: goto label_24b638;
        case 0x24b63cu: goto label_24b63c;
        case 0x24b640u: goto label_24b640;
        case 0x24b644u: goto label_24b644;
        case 0x24b648u: goto label_24b648;
        case 0x24b64cu: goto label_24b64c;
        case 0x24b650u: goto label_24b650;
        case 0x24b654u: goto label_24b654;
        case 0x24b658u: goto label_24b658;
        case 0x24b65cu: goto label_24b65c;
        case 0x24b660u: goto label_24b660;
        case 0x24b664u: goto label_24b664;
        case 0x24b668u: goto label_24b668;
        case 0x24b66cu: goto label_24b66c;
        case 0x24b670u: goto label_24b670;
        case 0x24b674u: goto label_24b674;
        case 0x24b678u: goto label_24b678;
        case 0x24b67cu: goto label_24b67c;
        case 0x24b680u: goto label_24b680;
        case 0x24b684u: goto label_24b684;
        case 0x24b688u: goto label_24b688;
        case 0x24b68cu: goto label_24b68c;
        case 0x24b690u: goto label_24b690;
        case 0x24b694u: goto label_24b694;
        case 0x24b698u: goto label_24b698;
        case 0x24b69cu: goto label_24b69c;
        case 0x24b6a0u: goto label_24b6a0;
        case 0x24b6a4u: goto label_24b6a4;
        case 0x24b6a8u: goto label_24b6a8;
        case 0x24b6acu: goto label_24b6ac;
        case 0x24b6b0u: goto label_24b6b0;
        case 0x24b6b4u: goto label_24b6b4;
        case 0x24b6b8u: goto label_24b6b8;
        case 0x24b6bcu: goto label_24b6bc;
        case 0x24b6c0u: goto label_24b6c0;
        case 0x24b6c4u: goto label_24b6c4;
        case 0x24b6c8u: goto label_24b6c8;
        case 0x24b6ccu: goto label_24b6cc;
        case 0x24b6d0u: goto label_24b6d0;
        case 0x24b6d4u: goto label_24b6d4;
        case 0x24b6d8u: goto label_24b6d8;
        case 0x24b6dcu: goto label_24b6dc;
        case 0x24b6e0u: goto label_24b6e0;
        case 0x24b6e4u: goto label_24b6e4;
        case 0x24b6e8u: goto label_24b6e8;
        case 0x24b6ecu: goto label_24b6ec;
        case 0x24b6f0u: goto label_24b6f0;
        case 0x24b6f4u: goto label_24b6f4;
        case 0x24b6f8u: goto label_24b6f8;
        case 0x24b6fcu: goto label_24b6fc;
        case 0x24b700u: goto label_24b700;
        case 0x24b704u: goto label_24b704;
        case 0x24b708u: goto label_24b708;
        case 0x24b70cu: goto label_24b70c;
        case 0x24b710u: goto label_24b710;
        case 0x24b714u: goto label_24b714;
        case 0x24b718u: goto label_24b718;
        case 0x24b71cu: goto label_24b71c;
        case 0x24b720u: goto label_24b720;
        case 0x24b724u: goto label_24b724;
        case 0x24b728u: goto label_24b728;
        case 0x24b72cu: goto label_24b72c;
        case 0x24b730u: goto label_24b730;
        case 0x24b734u: goto label_24b734;
        case 0x24b738u: goto label_24b738;
        case 0x24b73cu: goto label_24b73c;
        case 0x24b740u: goto label_24b740;
        case 0x24b744u: goto label_24b744;
        case 0x24b748u: goto label_24b748;
        case 0x24b74cu: goto label_24b74c;
        case 0x24b750u: goto label_24b750;
        case 0x24b754u: goto label_24b754;
        case 0x24b758u: goto label_24b758;
        case 0x24b75cu: goto label_24b75c;
        case 0x24b760u: goto label_24b760;
        case 0x24b764u: goto label_24b764;
        case 0x24b768u: goto label_24b768;
        case 0x24b76cu: goto label_24b76c;
        case 0x24b770u: goto label_24b770;
        case 0x24b774u: goto label_24b774;
        case 0x24b778u: goto label_24b778;
        case 0x24b77cu: goto label_24b77c;
        default: break;
    }

    ctx->pc = 0x24b3d8u;

label_24b3d8:
    // 0x24b3d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24b3dc:
    // 0x24b3dc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24b3e0:
    // 0x24b3e0: 0x8c45b198  lw          $a1, -0x4E68($v0)
    ctx->pc = 0x24b3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_24b3e4:
    // 0x24b3e4: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24b3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_24b3e8:
    // 0x24b3e8: 0x8c62b19c  lw          $v0, -0x4E64($v1)
    ctx->pc = 0x24b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_24b3ec:
    // 0x24b3ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x24b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_24b3f0:
    // 0x24b3f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x24b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_24b3f4:
    // 0x24b3f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24b3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b3f8:
    // 0x24b3f8: 0x8c83deb8  lw          $v1, -0x2148($a0)
    ctx->pc = 0x24b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958776)));
label_24b3fc:
    // 0x24b3fc: 0xa2a021  addu        $s4, $a1, $v0
    ctx->pc = 0x24b3fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24b400:
    // 0x24b400: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x24b400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_24b404:
    // 0x24b404: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x24b404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_24b408:
    // 0x24b408: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x24b408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_24b40c:
    // 0x24b40c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x24b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_24b410:
    // 0x24b410: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x24b410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_24b414:
    // 0x24b414: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x24b414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_24b418:
    // 0x24b418: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x24b418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_24b41c:
    // 0x24b41c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x24b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_24b420:
    // 0x24b420: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_24b424:
    if (ctx->pc == 0x24B424u) {
        ctx->pc = 0x24B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B420u;
        // 0x24b424: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B428u;
        goto label_24b428;
    }
    ctx->pc = 0x24B420u;
    {
        const bool branch_taken_0x24b420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B420u;
        // 0x24b424: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b420) {
            ctx->pc = 0x24B470u;
            goto label_24b470;
        }
    }
    ctx->pc = 0x24B428u;
label_24b428:
    // 0x24b428: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x24b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_24b42c:
    // 0x24b42c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_24b430:
    if (ctx->pc == 0x24B430u) {
        ctx->pc = 0x24B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B42Cu;
        // 0x24b430: 0xc46101f0  lwc1        $f1, 0x1F0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B434u;
        goto label_24b434;
    }
    ctx->pc = 0x24B42Cu;
    {
        const bool branch_taken_0x24b42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b42c) {
            ctx->pc = 0x24B430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B42Cu;
            // 0x24b430: 0xc46101f0  lwc1        $f1, 0x1F0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B458u;
            goto label_24b458;
        }
    }
    ctx->pc = 0x24B434u;
label_24b434:
    // 0x24b434: 0xc46101ec  lwc1        $f1, 0x1EC($v1)
    ctx->pc = 0x24b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b438:
    // 0x24b438: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24b43c:
    // 0x24b43c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24b440:
    // 0x24b440: 0x0  nop
    ctx->pc = 0x24b440u;
    // NOP
label_24b444:
    // 0x24b444: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24b444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24b448:
    // 0x24b448: 0x0  nop
    ctx->pc = 0x24b448u;
    // NOP
label_24b44c:
    // 0x24b44c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_24b450:
    if (ctx->pc == 0x24B450u) {
        ctx->pc = 0x24B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B44Cu;
        // 0x24b450: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B454u;
        goto label_24b454;
    }
    ctx->pc = 0x24B44Cu;
    {
        const bool branch_taken_0x24b44c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B44Cu;
        // 0x24b450: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b44c) {
            ctx->pc = 0x24B474u;
            goto label_24b474;
        }
    }
    ctx->pc = 0x24B454u;
label_24b454:
    // 0x24b454: 0xc46101f0  lwc1        $f1, 0x1F0($v1)
    ctx->pc = 0x24b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b458:
    // 0x24b458: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24b458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24b45c:
    // 0x24b45c: 0x0  nop
    ctx->pc = 0x24b45cu;
    // NOP
label_24b460:
    // 0x24b460: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24b460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24b464:
    // 0x24b464: 0x0  nop
    ctx->pc = 0x24b464u;
    // NOP
label_24b468:
    // 0x24b468: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_24b46c:
    if (ctx->pc == 0x24B46Cu) {
        ctx->pc = 0x24B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B468u;
        // 0x24b46c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B470u;
        goto label_24b470;
    }
    ctx->pc = 0x24B468u;
    {
        const bool branch_taken_0x24b468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b468) {
            ctx->pc = 0x24B46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B468u;
            // 0x24b46c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B470u;
            goto label_24b470;
        }
    }
    ctx->pc = 0x24B470u;
label_24b470:
    // 0x24b470: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24b470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24b474:
    // 0x24b474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24b474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b478:
    // 0x24b478: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x24b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_24b47c:
    // 0x24b47c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24b480:
    // 0x24b480: 0x8c62054c  lw          $v0, 0x54C($v1)
    ctx->pc = 0x24b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1356)));
label_24b484:
    // 0x24b484: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x24b484u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24b488:
    // 0x24b488: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x24b488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_24b48c:
    // 0x24b48c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24b48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b490:
    // 0x24b490: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24b490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24b494:
    // 0x24b494: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x24b494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b498:
    // 0x24b498: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24b49c:
    if (ctx->pc == 0x24B49Cu) {
        ctx->pc = 0x24B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B498u;
        // 0x24b49c: 0x7200a  movz        $a0, $zero, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B4A0u;
        goto label_24b4a0;
    }
    ctx->pc = 0x24B498u;
    {
        const bool branch_taken_0x24b498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B498u;
        // 0x24b49c: 0x7200a  movz        $a0, $zero, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b498) {
            ctx->pc = 0x24B4BCu;
            goto label_24b4bc;
        }
    }
    ctx->pc = 0x24B4A0u;
label_24b4a0:
    // 0x24b4a0: 0x24430a50  addiu       $v1, $v0, 0xA50
    ctx->pc = 0x24b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
label_24b4a4:
    // 0x24b4a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24b4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24b4a8:
    // 0x24b4a8: 0x244214a0  addiu       $v0, $v0, 0x14A0
    ctx->pc = 0x24b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5280));
label_24b4ac:
    // 0x24b4ac: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x24b4acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_24b4b0:
    // 0x24b4b0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x24b4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24b4b4:
    // 0x24b4b4: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x24b4b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_24b4b8:
    // 0x24b4b8: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x24b4b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_24b4bc:
    // 0x24b4bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24b4c0:
    // 0x24b4c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24b4c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b4c4:
    // 0x24b4c4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x24b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_24b4c8:
    // 0x24b4c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24b4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b4cc:
    // 0x24b4cc: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x24b4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_24b4d0:
    // 0x24b4d0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x24b4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_24b4d4:
    // 0x24b4d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24b4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_24b4d8:
    // 0x24b4d8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_24b4dc:
    if (ctx->pc == 0x24B4DCu) {
        ctx->pc = 0x24B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4D8u;
        // 0x24b4dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B4E0u;
        goto label_24b4e0;
    }
    ctx->pc = 0x24B4D8u;
    {
        const bool branch_taken_0x24b4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4D8u;
        // 0x24b4dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b4d8) {
            ctx->pc = 0x24B544u;
            goto label_24b544;
        }
    }
    ctx->pc = 0x24B4E0u;
label_24b4e0:
    // 0x24b4e0: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
label_24b4e4:
    if (ctx->pc == 0x24B4E4u) {
        ctx->pc = 0x24B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4E0u;
        // 0x24b4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B4E8u;
        goto label_24b4e8;
    }
    ctx->pc = 0x24B4E0u;
    {
        const bool branch_taken_0x24b4e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4E0u;
        // 0x24b4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b4e0) {
            ctx->pc = 0x24B548u;
            goto label_24b548;
        }
    }
    ctx->pc = 0x24B4E8u;
label_24b4e8:
    // 0x24b4e8: 0x90620410  lbu         $v0, 0x410($v1)
    ctx->pc = 0x24b4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_24b4ec:
    // 0x24b4ec: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_24b4f0:
    if (ctx->pc == 0x24B4F0u) {
        ctx->pc = 0x24B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4ECu;
        // 0x24b4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B4F4u;
        goto label_24b4f4;
    }
    ctx->pc = 0x24B4ECu;
    {
        const bool branch_taken_0x24b4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4ECu;
        // 0x24b4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b4ec) {
            ctx->pc = 0x24B548u;
            goto label_24b548;
        }
    }
    ctx->pc = 0x24B4F4u;
label_24b4f4:
    // 0x24b4f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x24b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_24b4f8:
    // 0x24b4f8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x24b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_24b4fc:
    // 0x24b4fc: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x24b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_24b500:
    // 0x24b500: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24b504:
    // 0x24b504: 0x8c4377a0  lw          $v1, 0x77A0($v0)
    ctx->pc = 0x24b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30624)));
label_24b508:
    // 0x24b508: 0x1466000f  bne         $v1, $a2, . + 4 + (0xF << 2)
label_24b50c:
    if (ctx->pc == 0x24B50Cu) {
        ctx->pc = 0x24B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B508u;
        // 0x24b50c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B510u;
        goto label_24b510;
    }
    ctx->pc = 0x24B508u;
    {
        const bool branch_taken_0x24b508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x24B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B508u;
        // 0x24b50c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b508) {
            ctx->pc = 0x24B548u;
            goto label_24b548;
        }
    }
    ctx->pc = 0x24B510u;
label_24b510:
    // 0x24b510: 0xc047e6c  jal         func_11F9B0
label_24b514:
    if (ctx->pc == 0x24B514u) {
        ctx->pc = 0x24B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B510u;
        // 0x24b514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B518u;
        goto label_24b518;
    }
    ctx->pc = 0x24B510u;
    SET_GPR_U32(ctx, 31, 0x24B518u);
    ctx->pc = 0x24B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B510u;
    // 0x24b514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x24B510u, 0x24B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B518u;
label_24b518:
    // 0x24b518: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24b518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24b51c:
    // 0x24b51c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x24b51cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_24b520:
    // 0x24b520: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x24b520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_24b524:
    // 0x24b524: 0xa0f809  jalr        $a1
label_24b528:
    if (ctx->pc == 0x24B528u) {
        ctx->pc = 0x24B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B524u;
        // 0x24b528: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B52Cu;
        goto label_24b52c;
    }
    ctx->pc = 0x24B524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x24B52Cu);
        ctx->pc = 0x24B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B524u;
        // 0x24b528: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B524u, 0x24B52Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B52Cu;
label_24b52c:
    // 0x24b52c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x24b52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_24b530:
    // 0x24b530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24b534:
    if (ctx->pc == 0x24B534u) {
        ctx->pc = 0x24B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B530u;
        // 0x24b534: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B538u;
        goto label_24b538;
    }
    ctx->pc = 0x24B530u;
    {
        const bool branch_taken_0x24b530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B530u;
        // 0x24b534: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b530) {
            ctx->pc = 0x24B544u;
            goto label_24b544;
        }
    }
    ctx->pc = 0x24B538u;
label_24b538:
    // 0x24b538: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x24b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_24b53c:
    // 0x24b53c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_24b540:
    if (ctx->pc == 0x24B540u) {
        ctx->pc = 0x24B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B53Cu;
        // 0x24b540: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B544u;
        goto label_24b544;
    }
    ctx->pc = 0x24B53Cu;
    {
        const bool branch_taken_0x24b53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b53c) {
            ctx->pc = 0x24B540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B53Cu;
            // 0x24b540: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B550u;
            goto label_24b550;
        }
    }
    ctx->pc = 0x24B544u;
label_24b544:
    // 0x24b544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b548:
    // 0x24b548: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_24b54c:
    if (ctx->pc == 0x24B54Cu) {
        ctx->pc = 0x24B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B548u;
        // 0x24b54c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B550u;
        goto label_24b550;
    }
    ctx->pc = 0x24B548u;
    {
        const bool branch_taken_0x24b548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x24b548) {
            ctx->pc = 0x24B54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B548u;
            // 0x24b54c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B550u;
            goto label_24b550;
        }
    }
    ctx->pc = 0x24B550u;
label_24b550:
    // 0x24b550: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
label_24b554:
    if (ctx->pc == 0x24B554u) {
        ctx->pc = 0x24B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B550u;
        // 0x24b554: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B558u;
        goto label_24b558;
    }
    ctx->pc = 0x24B550u;
    {
        const bool branch_taken_0x24b550 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B550u;
        // 0x24b554: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b550) {
            ctx->pc = 0x24B674u;
            goto label_24b674;
        }
    }
    ctx->pc = 0x24B558u;
label_24b558:
    // 0x24b558: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_24b55c:
    if (ctx->pc == 0x24B55Cu) {
        ctx->pc = 0x24B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B558u;
        // 0x24b55c: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B560u;
        goto label_24b560;
    }
    ctx->pc = 0x24B558u;
    {
        const bool branch_taken_0x24b558 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B558u;
        // 0x24b55c: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b558) {
            ctx->pc = 0x24B56Cu;
            goto label_24b56c;
        }
    }
    ctx->pc = 0x24B560u;
label_24b560:
    // 0x24b560: 0x8ee20548  lw          $v0, 0x548($s7)
    ctx->pc = 0x24b560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1352)));
label_24b564:
    // 0x24b564: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
label_24b568:
    if (ctx->pc == 0x24B568u) {
        ctx->pc = 0x24B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B564u;
        // 0x24b568: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B56Cu;
        goto label_24b56c;
    }
    ctx->pc = 0x24B564u;
    {
        const bool branch_taken_0x24b564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x24B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B564u;
        // 0x24b568: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b564) {
            ctx->pc = 0x24B57Cu;
            goto label_24b57c;
        }
    }
    ctx->pc = 0x24B56Cu;
label_24b56c:
    // 0x24b56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b570:
    // 0x24b570: 0x5602003d  bnel        $s0, $v0, . + 4 + (0x3D << 2)
label_24b574:
    if (ctx->pc == 0x24B574u) {
        ctx->pc = 0x24B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B570u;
        // 0x24b574: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B578u;
        goto label_24b578;
    }
    ctx->pc = 0x24B570u;
    {
        const bool branch_taken_0x24b570 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b570) {
            ctx->pc = 0x24B574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B570u;
            // 0x24b574: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B668u;
            goto label_24b668;
        }
    }
    ctx->pc = 0x24B578u;
label_24b578:
    // 0x24b578: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x24b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_24b57c:
    // 0x24b57c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x24b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_24b580:
    // 0x24b580: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x24b580u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24b584:
    // 0x24b584: 0x8c43022c  lw          $v1, 0x22C($v0)
    ctx->pc = 0x24b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
label_24b588:
    // 0x24b588: 0x24440228  addiu       $a0, $v0, 0x228
    ctx->pc = 0x24b588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
label_24b58c:
    // 0x24b58c: 0x8c520228  lw          $s2, 0x228($v0)
    ctx->pc = 0x24b58cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
label_24b590:
    // 0x24b590: 0xc0e409a  jal         func_390268
label_24b594:
    if (ctx->pc == 0x24B594u) {
        ctx->pc = 0x24B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B590u;
        // 0x24b594: 0xaca37310  sw          $v1, 0x7310($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 29456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B598u;
        goto label_24b598;
    }
    ctx->pc = 0x24B590u;
    SET_GPR_U32(ctx, 31, 0x24B598u);
    ctx->pc = 0x24B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B590u;
    // 0x24b594: 0xaca37310  sw          $v1, 0x7310($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 29456), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24B590u, 0x24B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B598u;
label_24b598:
    // 0x24b598: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_24b59c:
    if (ctx->pc == 0x24B59Cu) {
        ctx->pc = 0x24B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B598u;
        // 0x24b59c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5A0u;
        goto label_24b5a0;
    }
    ctx->pc = 0x24B598u;
    {
        const bool branch_taken_0x24b598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B598u;
        // 0x24b59c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b598) {
            ctx->pc = 0x24B5E8u;
            goto label_24b5e8;
        }
    }
    ctx->pc = 0x24B5A0u;
label_24b5a0:
    // 0x24b5a0: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x24b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_24b5a4:
    // 0x24b5a4: 0xc0e409a  jal         func_390268
label_24b5a8:
    if (ctx->pc == 0x24B5A8u) {
        ctx->pc = 0x24B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5A4u;
        // 0x24b5a8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5ACu;
        goto label_24b5ac;
    }
    ctx->pc = 0x24B5A4u;
    SET_GPR_U32(ctx, 31, 0x24B5ACu);
    ctx->pc = 0x24B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5A4u;
    // 0x24b5a8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24B5A4u, 0x24B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5ACu;
label_24b5ac:
    // 0x24b5ac: 0xc089d02  jal         func_227408
label_24b5b0:
    if (ctx->pc == 0x24B5B0u) {
        ctx->pc = 0x24B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5ACu;
        // 0x24b5b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5B4u;
        goto label_24b5b4;
    }
    ctx->pc = 0x24B5ACu;
    SET_GPR_U32(ctx, 31, 0x24B5B4u);
    ctx->pc = 0x24B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5ACu;
    // 0x24b5b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227408u, 0x24B5ACu, 0x24B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5B4u;
label_24b5b4:
    // 0x24b5b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_24b5b8:
    if (ctx->pc == 0x24B5B8u) {
        ctx->pc = 0x24B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5B4u;
        // 0x24b5b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5BCu;
        goto label_24b5bc;
    }
    ctx->pc = 0x24B5B4u;
    {
        const bool branch_taken_0x24b5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5B4u;
        // 0x24b5b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5b4) {
            ctx->pc = 0x24B5E8u;
            goto label_24b5e8;
        }
    }
    ctx->pc = 0x24B5BCu;
label_24b5bc:
    // 0x24b5bc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x24b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_24b5c0:
    // 0x24b5c0: 0xc0e409a  jal         func_390268
label_24b5c4:
    if (ctx->pc == 0x24B5C4u) {
        ctx->pc = 0x24B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5C0u;
        // 0x24b5c4: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5C8u;
        goto label_24b5c8;
    }
    ctx->pc = 0x24B5C0u;
    SET_GPR_U32(ctx, 31, 0x24B5C8u);
    ctx->pc = 0x24B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5C0u;
    // 0x24b5c4: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24B5C0u, 0x24B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5C8u;
label_24b5c8:
    // 0x24b5c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_24b5cc:
    if (ctx->pc == 0x24B5CCu) {
        ctx->pc = 0x24B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5C8u;
        // 0x24b5cc: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5D0u;
        goto label_24b5d0;
    }
    ctx->pc = 0x24B5C8u;
    {
        const bool branch_taken_0x24b5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5C8u;
        // 0x24b5cc: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5c8) {
            ctx->pc = 0x24B5F0u;
            goto label_24b5f0;
        }
    }
    ctx->pc = 0x24B5D0u;
label_24b5d0:
    // 0x24b5d0: 0xc0e409a  jal         func_390268
label_24b5d4:
    if (ctx->pc == 0x24B5D4u) {
        ctx->pc = 0x24B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5D0u;
        // 0x24b5d4: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5D8u;
        goto label_24b5d8;
    }
    ctx->pc = 0x24B5D0u;
    SET_GPR_U32(ctx, 31, 0x24B5D8u);
    ctx->pc = 0x24B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5D0u;
    // 0x24b5d4: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24B5D0u, 0x24B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5D8u;
label_24b5d8:
    // 0x24b5d8: 0xc089d02  jal         func_227408
label_24b5dc:
    if (ctx->pc == 0x24B5DCu) {
        ctx->pc = 0x24B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5D8u;
        // 0x24b5dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5E0u;
        goto label_24b5e0;
    }
    ctx->pc = 0x24B5D8u;
    SET_GPR_U32(ctx, 31, 0x24B5E0u);
    ctx->pc = 0x24B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5D8u;
    // 0x24b5dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227408u, 0x24B5D8u, 0x24B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5E0u;
label_24b5e0:
    // 0x24b5e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24b5e4:
    if (ctx->pc == 0x24B5E4u) {
        ctx->pc = 0x24B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5E0u;
        // 0x24b5e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5E8u;
        goto label_24b5e8;
    }
    ctx->pc = 0x24B5E0u;
    {
        const bool branch_taken_0x24b5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5E0u;
        // 0x24b5e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5e0) {
            ctx->pc = 0x24B5F0u;
            goto label_24b5f0;
        }
    }
    ctx->pc = 0x24B5E8u;
label_24b5e8:
    // 0x24b5e8: 0x16020026  bne         $s0, $v0, . + 4 + (0x26 << 2)
label_24b5ec:
    if (ctx->pc == 0x24B5ECu) {
        ctx->pc = 0x24B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5E8u;
        // 0x24b5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5F0u;
        goto label_24b5f0;
    }
    ctx->pc = 0x24B5E8u;
    {
        const bool branch_taken_0x24b5e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5E8u;
        // 0x24b5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5e8) {
            ctx->pc = 0x24B684u;
            goto label_24b684;
        }
    }
    ctx->pc = 0x24B5F0u;
label_24b5f0:
    // 0x24b5f0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x24b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_24b5f4:
    // 0x24b5f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24b5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b5f8:
    // 0x24b5f8: 0x24a5ce88  addiu       $a1, $a1, -0x3178
    ctx->pc = 0x24b5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954632));
label_24b5fc:
    // 0x24b5fc: 0xc08e2a2  jal         func_238A88
label_24b600:
    if (ctx->pc == 0x24B600u) {
        ctx->pc = 0x24B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5FCu;
        // 0x24b600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B604u;
        goto label_24b604;
    }
    ctx->pc = 0x24B5FCu;
    SET_GPR_U32(ctx, 31, 0x24B604u);
    ctx->pc = 0x24B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5FCu;
    // 0x24b600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x24B5FCu, 0x24B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B604u;
label_24b604:
    // 0x24b604: 0x241000a0  addiu       $s0, $zero, 0xA0
    ctx->pc = 0x24b604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_24b608:
    // 0x24b608: 0xc107444  jal         func_41D110
label_24b60c:
    if (ctx->pc == 0x24B60Cu) {
        ctx->pc = 0x24B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B608u;
        // 0x24b60c: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B610u;
        goto label_24b610;
    }
    ctx->pc = 0x24B608u;
    SET_GPR_U32(ctx, 31, 0x24B610u);
    ctx->pc = 0x24B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B608u;
    // 0x24b60c: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x24B608u, 0x24B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B610u;
label_24b610:
    // 0x24b610: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x24b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_24b614:
    // 0x24b614: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x24b614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_24b618:
    // 0x24b618: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x24b618u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_24b61c:
    // 0x24b61c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24b620:
    // 0x24b620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24b620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24b624:
    // 0x24b624: 0xc08e2c6  jal         func_238B18
label_24b628:
    if (ctx->pc == 0x24B628u) {
        ctx->pc = 0x24B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B624u;
        // 0x24b628: 0x34c6ff00  ori         $a2, $a2, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B62Cu;
        goto label_24b62c;
    }
    ctx->pc = 0x24B624u;
    SET_GPR_U32(ctx, 31, 0x24B62Cu);
    ctx->pc = 0x24B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B624u;
    // 0x24b628: 0x34c6ff00  ori         $a2, $a2, 0xFF00 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B18u, 0x24B624u, 0x24B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B62Cu;
label_24b62c:
    // 0x24b62c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x24b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_24b630:
    // 0x24b630: 0x8ec47310  lw          $a0, 0x7310($s6)
    ctx->pc = 0x24b630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29456)));
label_24b634:
    // 0x24b634: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x24b634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_24b638:
    // 0x24b638: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_24b63c:
    if (ctx->pc == 0x24B63Cu) {
        ctx->pc = 0x24B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B638u;
        // 0x24b63c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B640u;
        goto label_24b640;
    }
    ctx->pc = 0x24B638u;
    {
        const bool branch_taken_0x24b638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B638u;
        // 0x24b63c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b638) {
            ctx->pc = 0x24B680u;
            goto label_24b680;
        }
    }
    ctx->pc = 0x24B640u;
label_24b640:
    // 0x24b640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24b640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b644:
    // 0x24b644: 0xc08e2a2  jal         func_238A88
label_24b648:
    if (ctx->pc == 0x24B648u) {
        ctx->pc = 0x24B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B644u;
        // 0x24b648: 0x24a5ce98  addiu       $a1, $a1, -0x3168 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B64Cu;
        goto label_24b64c;
    }
    ctx->pc = 0x24B644u;
    SET_GPR_U32(ctx, 31, 0x24B64Cu);
    ctx->pc = 0x24B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B644u;
    // 0x24b648: 0x24a5ce98  addiu       $a1, $a1, -0x3168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x24B644u, 0x24B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B64Cu;
label_24b64c:
    // 0x24b64c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x24b64cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_24b650:
    // 0x24b650: 0x8ec47310  lw          $a0, 0x7310($s6)
    ctx->pc = 0x24b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29456)));
label_24b654:
    // 0x24b654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24b654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24b658:
    // 0x24b658: 0xc08e2c6  jal         func_238B18
label_24b65c:
    if (ctx->pc == 0x24B65Cu) {
        ctx->pc = 0x24B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B658u;
        // 0x24b65c: 0x34c6ff00  ori         $a2, $a2, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B660u;
        goto label_24b660;
    }
    ctx->pc = 0x24B658u;
    SET_GPR_U32(ctx, 31, 0x24B660u);
    ctx->pc = 0x24B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B658u;
    // 0x24b65c: 0x34c6ff00  ori         $a2, $a2, 0xFF00 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B18u, 0x24B658u, 0x24B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B660u;
label_24b660:
    // 0x24b660: 0x10000008  b           . + 4 + (0x8 << 2)
label_24b664:
    if (ctx->pc == 0x24B664u) {
        ctx->pc = 0x24B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B660u;
        // 0x24b664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B668u;
        goto label_24b668;
    }
    ctx->pc = 0x24B660u;
    {
        const bool branch_taken_0x24b660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B660u;
        // 0x24b664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b660) {
            ctx->pc = 0x24B684u;
            goto label_24b684;
        }
    }
    ctx->pc = 0x24B668u;
label_24b668:
    // 0x24b668: 0x3a820003  xori        $v0, $s4, 0x3
    ctx->pc = 0x24b668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)3);
label_24b66c:
    // 0x24b66c: 0x10000004  b           . + 4 + (0x4 << 2)
label_24b670:
    if (ctx->pc == 0x24B670u) {
        ctx->pc = 0x24B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B66Cu;
        // 0x24b670: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B674u;
        goto label_24b674;
    }
    ctx->pc = 0x24B66Cu;
    {
        const bool branch_taken_0x24b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B66Cu;
        // 0x24b670: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b66c) {
            ctx->pc = 0x24B680u;
            goto label_24b680;
        }
    }
    ctx->pc = 0x24B674u;
label_24b674:
    // 0x24b674: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24b674u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b678:
    // 0x24b678: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x24b678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24b67c:
    // 0x24b67c: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x24b67cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_24b680:
    // 0x24b680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b684:
    // 0x24b684: 0x56620031  bnel        $s3, $v0, . + 4 + (0x31 << 2)
label_24b688:
    if (ctx->pc == 0x24B688u) {
        ctx->pc = 0x24B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B684u;
        // 0x24b688: 0xaef40548  sw          $s4, 0x548($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 1352), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B68Cu;
        goto label_24b68c;
    }
    ctx->pc = 0x24B684u;
    {
        const bool branch_taken_0x24b684 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b684) {
            ctx->pc = 0x24B688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B684u;
            // 0x24b688: 0xaef40548  sw          $s4, 0x548($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 1352), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B74Cu;
            goto label_24b74c;
        }
    }
    ctx->pc = 0x24B68Cu;
label_24b68c:
    // 0x24b68c: 0x56b3002f  bnel        $s5, $s3, . + 4 + (0x2F << 2)
label_24b690:
    if (ctx->pc == 0x24B690u) {
        ctx->pc = 0x24B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B68Cu;
        // 0x24b690: 0xaef40548  sw          $s4, 0x548($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 1352), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B694u;
        goto label_24b694;
    }
    ctx->pc = 0x24B68Cu;
    {
        const bool branch_taken_0x24b68c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 19));
        if (branch_taken_0x24b68c) {
            ctx->pc = 0x24B690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B68Cu;
            // 0x24b690: 0xaef40548  sw          $s4, 0x548($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 1352), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B74Cu;
            goto label_24b74c;
        }
    }
    ctx->pc = 0x24B694u;
label_24b694:
    // 0x24b694: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x24b694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_24b698:
    // 0x24b698: 0x3c121de2  lui         $s2, 0x1DE2
    ctx->pc = 0x24b698u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)7650 << 16));
label_24b69c:
    // 0x24b69c: 0x3c117644  lui         $s1, 0x7644
    ctx->pc = 0x24b69cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)30276 << 16));
label_24b6a0:
    // 0x24b6a0: 0xafc0054c  sw          $zero, 0x54C($fp)
    ctx->pc = 0x24b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1356), GPR_U32(ctx, 0));
label_24b6a4:
    // 0x24b6a4: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x24b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_24b6a8:
    // 0x24b6a8: 0x3631ee5d  ori         $s1, $s1, 0xEE5D
    ctx->pc = 0x24b6a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)61021);
label_24b6ac:
    // 0x24b6ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24b6b0:
    if (ctx->pc == 0x24B6B0u) {
        ctx->pc = 0x24B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6ACu;
        // 0x24b6b0: 0x3652e2ca  ori         $s2, $s2, 0xE2CA (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)58058);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B6B4u;
        goto label_24b6b4;
    }
    ctx->pc = 0x24B6ACu;
    {
        const bool branch_taken_0x24b6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6ACu;
        // 0x24b6b0: 0x3652e2ca  ori         $s2, $s2, 0xE2CA (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)58058);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6ac) {
            ctx->pc = 0x24B6C4u;
            goto label_24b6c4;
        }
    }
    ctx->pc = 0x24B6B4u;
label_24b6b4:
    // 0x24b6b4: 0x3c111a72  lui         $s1, 0x1A72
    ctx->pc = 0x24b6b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)6770 << 16));
label_24b6b8:
    // 0x24b6b8: 0x3c12687e  lui         $s2, 0x687E
    ctx->pc = 0x24b6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)26750 << 16));
label_24b6bc:
    // 0x24b6bc: 0x3631a32d  ori         $s1, $s1, 0xA32D
    ctx->pc = 0x24b6bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)41773);
label_24b6c0:
    // 0x24b6c0: 0x3652742b  ori         $s2, $s2, 0x742B
    ctx->pc = 0x24b6c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)29739);
label_24b6c4:
    // 0x24b6c4: 0xc0e409a  jal         func_390268
label_24b6c8:
    if (ctx->pc == 0x24B6C8u) {
        ctx->pc = 0x24B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6C4u;
        // 0x24b6c8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B6CCu;
        goto label_24b6cc;
    }
    ctx->pc = 0x24B6C4u;
    SET_GPR_U32(ctx, 31, 0x24B6CCu);
    ctx->pc = 0x24B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6C4u;
    // 0x24b6c8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24B6C4u, 0x24B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6CCu;
label_24b6cc:
    // 0x24b6cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24b6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b6d0:
    // 0x24b6d0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_24b6d4:
    if (ctx->pc == 0x24B6D4u) {
        ctx->pc = 0x24B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6D0u;
        // 0x24b6d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B6D8u;
        goto label_24b6d8;
    }
    ctx->pc = 0x24B6D0u;
    {
        const bool branch_taken_0x24b6d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6D0u;
        // 0x24b6d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6d0) {
            ctx->pc = 0x24B704u;
            goto label_24b704;
        }
    }
    ctx->pc = 0x24B6D8u;
label_24b6d8:
    // 0x24b6d8: 0xc089d0a  jal         func_227428
label_24b6dc:
    if (ctx->pc == 0x24B6DCu) {
        ctx->pc = 0x24B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6D8u;
        // 0x24b6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B6E0u;
        goto label_24b6e0;
    }
    ctx->pc = 0x24B6D8u;
    SET_GPR_U32(ctx, 31, 0x24B6E0u);
    ctx->pc = 0x24B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6D8u;
    // 0x24b6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227428u, 0x24B6D8u, 0x24B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6E0u;
label_24b6e0:
    // 0x24b6e0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_24b6e4:
    if (ctx->pc == 0x24B6E4u) {
        ctx->pc = 0x24B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6E0u;
        // 0x24b6e4: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B6E8u;
        goto label_24b6e8;
    }
    ctx->pc = 0x24B6E0u;
    {
        const bool branch_taken_0x24b6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b6e0) {
            ctx->pc = 0x24B6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B6E0u;
            // 0x24b6e4: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B708u;
            goto label_24b708;
        }
    }
    ctx->pc = 0x24B6E8u;
label_24b6e8:
    // 0x24b6e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24b6ec:
    // 0x24b6ec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24b6ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24b6f0:
    // 0x24b6f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24b6f4:
    // 0x24b6f4: 0x40f809  jalr        $v0
label_24b6f8:
    if (ctx->pc == 0x24B6F8u) {
        ctx->pc = 0x24B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6F4u;
        // 0x24b6f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B6FCu;
        goto label_24b6fc;
    }
    ctx->pc = 0x24B6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B6FCu);
        ctx->pc = 0x24B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6F4u;
        // 0x24b6f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B6F4u, 0x24B6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B6FCu;
label_24b6fc:
    // 0x24b6fc: 0xc08e2b8  jal         func_238AE0
label_24b700:
    if (ctx->pc == 0x24B700u) {
        ctx->pc = 0x24B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6FCu;
        // 0x24b700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B704u;
        goto label_24b704;
    }
    ctx->pc = 0x24B6FCu;
    SET_GPR_U32(ctx, 31, 0x24B704u);
    ctx->pc = 0x24B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6FCu;
    // 0x24b700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x24B6FCu, 0x24B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B704u;
label_24b704:
    // 0x24b704: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x24b704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_24b708:
    // 0x24b708: 0xc0e409a  jal         func_390268
label_24b70c:
    if (ctx->pc == 0x24B70Cu) {
        ctx->pc = 0x24B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B708u;
        // 0x24b70c: 0x24847310  addiu       $a0, $a0, 0x7310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B710u;
        goto label_24b710;
    }
    ctx->pc = 0x24B708u;
    SET_GPR_U32(ctx, 31, 0x24B710u);
    ctx->pc = 0x24B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B708u;
    // 0x24b70c: 0x24847310  addiu       $a0, $a0, 0x7310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24B708u, 0x24B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B710u;
label_24b710:
    // 0x24b710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24b710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b714:
    // 0x24b714: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_24b718:
    if (ctx->pc == 0x24B718u) {
        ctx->pc = 0x24B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B714u;
        // 0x24b718: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B71Cu;
        goto label_24b71c;
    }
    ctx->pc = 0x24B714u;
    {
        const bool branch_taken_0x24b714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B714u;
        // 0x24b718: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b714) {
            ctx->pc = 0x24B748u;
            goto label_24b748;
        }
    }
    ctx->pc = 0x24B71Cu;
label_24b71c:
    // 0x24b71c: 0xc089d0a  jal         func_227428
label_24b720:
    if (ctx->pc == 0x24B720u) {
        ctx->pc = 0x24B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B71Cu;
        // 0x24b720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B724u;
        goto label_24b724;
    }
    ctx->pc = 0x24B71Cu;
    SET_GPR_U32(ctx, 31, 0x24B724u);
    ctx->pc = 0x24B720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B71Cu;
    // 0x24b720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227428u, 0x24B71Cu, 0x24B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B724u;
label_24b724:
    // 0x24b724: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_24b728:
    if (ctx->pc == 0x24B728u) {
        ctx->pc = 0x24B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B724u;
        // 0x24b728: 0xaef40548  sw          $s4, 0x548($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 1352), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B72Cu;
        goto label_24b72c;
    }
    ctx->pc = 0x24B724u;
    {
        const bool branch_taken_0x24b724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b724) {
            ctx->pc = 0x24B728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B724u;
            // 0x24b728: 0xaef40548  sw          $s4, 0x548($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 1352), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B74Cu;
            goto label_24b74c;
        }
    }
    ctx->pc = 0x24B72Cu;
label_24b72c:
    // 0x24b72c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24b730:
    // 0x24b730: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24b730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24b734:
    // 0x24b734: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24b734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24b738:
    // 0x24b738: 0x40f809  jalr        $v0
label_24b73c:
    if (ctx->pc == 0x24B73Cu) {
        ctx->pc = 0x24B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B738u;
        // 0x24b73c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B740u;
        goto label_24b740;
    }
    ctx->pc = 0x24B738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B740u);
        ctx->pc = 0x24B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B738u;
        // 0x24b73c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B738u, 0x24B740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B740u;
label_24b740:
    // 0x24b740: 0xc08e2b8  jal         func_238AE0
label_24b744:
    if (ctx->pc == 0x24B744u) {
        ctx->pc = 0x24B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B740u;
        // 0x24b744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B748u;
        goto label_24b748;
    }
    ctx->pc = 0x24B740u;
    SET_GPR_U32(ctx, 31, 0x24B748u);
    ctx->pc = 0x24B744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B740u;
    // 0x24b744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x24B740u, 0x24B748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B748u;
label_24b748:
    // 0x24b748: 0xaef40548  sw          $s4, 0x548($s7)
    ctx->pc = 0x24b748u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1352), GPR_U32(ctx, 20));
label_24b74c:
    // 0x24b74c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x24b74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24b750:
    // 0x24b750: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x24b750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24b754:
    // 0x24b754: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x24b754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24b758:
    // 0x24b758: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x24b758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24b75c:
    // 0x24b75c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x24b75cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24b760:
    // 0x24b760: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x24b760u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24b764:
    // 0x24b764: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x24b764u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24b768:
    // 0x24b768: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x24b768u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24b76c:
    // 0x24b76c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x24b76cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24b770:
    // 0x24b770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24b774:
    // 0x24b774: 0x3e00008  jr          $ra
label_24b778:
    if (ctx->pc == 0x24B778u) {
        ctx->pc = 0x24B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B774u;
        // 0x24b778: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B77Cu;
        goto label_24b77c;
    }
    ctx->pc = 0x24B774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B774u;
        // 0x24b778: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B77Cu;
label_24b77c:
    // 0x24b77c: 0x0  nop
    ctx->pc = 0x24b77cu;
    // NOP
    ctx->pc = 0x24b780u;
}
