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

// Function: sub_0020D3A0
// Address: 0x20d3a0 - 0x20d7a8
void sub_0020D3A0_0x20d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D3A0_0x20d3a0");
#endif

    switch (ctx->pc) {
        case 0x20d3a0u: goto label_20d3a0;
        case 0x20d3a4u: goto label_20d3a4;
        case 0x20d3a8u: goto label_20d3a8;
        case 0x20d3acu: goto label_20d3ac;
        case 0x20d3b0u: goto label_20d3b0;
        case 0x20d3b4u: goto label_20d3b4;
        case 0x20d3b8u: goto label_20d3b8;
        case 0x20d3bcu: goto label_20d3bc;
        case 0x20d3c0u: goto label_20d3c0;
        case 0x20d3c4u: goto label_20d3c4;
        case 0x20d3c8u: goto label_20d3c8;
        case 0x20d3ccu: goto label_20d3cc;
        case 0x20d3d0u: goto label_20d3d0;
        case 0x20d3d4u: goto label_20d3d4;
        case 0x20d3d8u: goto label_20d3d8;
        case 0x20d3dcu: goto label_20d3dc;
        case 0x20d3e0u: goto label_20d3e0;
        case 0x20d3e4u: goto label_20d3e4;
        case 0x20d3e8u: goto label_20d3e8;
        case 0x20d3ecu: goto label_20d3ec;
        case 0x20d3f0u: goto label_20d3f0;
        case 0x20d3f4u: goto label_20d3f4;
        case 0x20d3f8u: goto label_20d3f8;
        case 0x20d3fcu: goto label_20d3fc;
        case 0x20d400u: goto label_20d400;
        case 0x20d404u: goto label_20d404;
        case 0x20d408u: goto label_20d408;
        case 0x20d40cu: goto label_20d40c;
        case 0x20d410u: goto label_20d410;
        case 0x20d414u: goto label_20d414;
        case 0x20d418u: goto label_20d418;
        case 0x20d41cu: goto label_20d41c;
        case 0x20d420u: goto label_20d420;
        case 0x20d424u: goto label_20d424;
        case 0x20d428u: goto label_20d428;
        case 0x20d42cu: goto label_20d42c;
        case 0x20d430u: goto label_20d430;
        case 0x20d434u: goto label_20d434;
        case 0x20d438u: goto label_20d438;
        case 0x20d43cu: goto label_20d43c;
        case 0x20d440u: goto label_20d440;
        case 0x20d444u: goto label_20d444;
        case 0x20d448u: goto label_20d448;
        case 0x20d44cu: goto label_20d44c;
        case 0x20d450u: goto label_20d450;
        case 0x20d454u: goto label_20d454;
        case 0x20d458u: goto label_20d458;
        case 0x20d45cu: goto label_20d45c;
        case 0x20d460u: goto label_20d460;
        case 0x20d464u: goto label_20d464;
        case 0x20d468u: goto label_20d468;
        case 0x20d46cu: goto label_20d46c;
        case 0x20d470u: goto label_20d470;
        case 0x20d474u: goto label_20d474;
        case 0x20d478u: goto label_20d478;
        case 0x20d47cu: goto label_20d47c;
        case 0x20d480u: goto label_20d480;
        case 0x20d484u: goto label_20d484;
        case 0x20d488u: goto label_20d488;
        case 0x20d48cu: goto label_20d48c;
        case 0x20d490u: goto label_20d490;
        case 0x20d494u: goto label_20d494;
        case 0x20d498u: goto label_20d498;
        case 0x20d49cu: goto label_20d49c;
        case 0x20d4a0u: goto label_20d4a0;
        case 0x20d4a4u: goto label_20d4a4;
        case 0x20d4a8u: goto label_20d4a8;
        case 0x20d4acu: goto label_20d4ac;
        case 0x20d4b0u: goto label_20d4b0;
        case 0x20d4b4u: goto label_20d4b4;
        case 0x20d4b8u: goto label_20d4b8;
        case 0x20d4bcu: goto label_20d4bc;
        case 0x20d4c0u: goto label_20d4c0;
        case 0x20d4c4u: goto label_20d4c4;
        case 0x20d4c8u: goto label_20d4c8;
        case 0x20d4ccu: goto label_20d4cc;
        case 0x20d4d0u: goto label_20d4d0;
        case 0x20d4d4u: goto label_20d4d4;
        case 0x20d4d8u: goto label_20d4d8;
        case 0x20d4dcu: goto label_20d4dc;
        case 0x20d4e0u: goto label_20d4e0;
        case 0x20d4e4u: goto label_20d4e4;
        case 0x20d4e8u: goto label_20d4e8;
        case 0x20d4ecu: goto label_20d4ec;
        case 0x20d4f0u: goto label_20d4f0;
        case 0x20d4f4u: goto label_20d4f4;
        case 0x20d4f8u: goto label_20d4f8;
        case 0x20d4fcu: goto label_20d4fc;
        case 0x20d500u: goto label_20d500;
        case 0x20d504u: goto label_20d504;
        case 0x20d508u: goto label_20d508;
        case 0x20d50cu: goto label_20d50c;
        case 0x20d510u: goto label_20d510;
        case 0x20d514u: goto label_20d514;
        case 0x20d518u: goto label_20d518;
        case 0x20d51cu: goto label_20d51c;
        case 0x20d520u: goto label_20d520;
        case 0x20d524u: goto label_20d524;
        case 0x20d528u: goto label_20d528;
        case 0x20d52cu: goto label_20d52c;
        case 0x20d530u: goto label_20d530;
        case 0x20d534u: goto label_20d534;
        case 0x20d538u: goto label_20d538;
        case 0x20d53cu: goto label_20d53c;
        case 0x20d540u: goto label_20d540;
        case 0x20d544u: goto label_20d544;
        case 0x20d548u: goto label_20d548;
        case 0x20d54cu: goto label_20d54c;
        case 0x20d550u: goto label_20d550;
        case 0x20d554u: goto label_20d554;
        case 0x20d558u: goto label_20d558;
        case 0x20d55cu: goto label_20d55c;
        case 0x20d560u: goto label_20d560;
        case 0x20d564u: goto label_20d564;
        case 0x20d568u: goto label_20d568;
        case 0x20d56cu: goto label_20d56c;
        case 0x20d570u: goto label_20d570;
        case 0x20d574u: goto label_20d574;
        case 0x20d578u: goto label_20d578;
        case 0x20d57cu: goto label_20d57c;
        case 0x20d580u: goto label_20d580;
        case 0x20d584u: goto label_20d584;
        case 0x20d588u: goto label_20d588;
        case 0x20d58cu: goto label_20d58c;
        case 0x20d590u: goto label_20d590;
        case 0x20d594u: goto label_20d594;
        case 0x20d598u: goto label_20d598;
        case 0x20d59cu: goto label_20d59c;
        case 0x20d5a0u: goto label_20d5a0;
        case 0x20d5a4u: goto label_20d5a4;
        case 0x20d5a8u: goto label_20d5a8;
        case 0x20d5acu: goto label_20d5ac;
        case 0x20d5b0u: goto label_20d5b0;
        case 0x20d5b4u: goto label_20d5b4;
        case 0x20d5b8u: goto label_20d5b8;
        case 0x20d5bcu: goto label_20d5bc;
        case 0x20d5c0u: goto label_20d5c0;
        case 0x20d5c4u: goto label_20d5c4;
        case 0x20d5c8u: goto label_20d5c8;
        case 0x20d5ccu: goto label_20d5cc;
        case 0x20d5d0u: goto label_20d5d0;
        case 0x20d5d4u: goto label_20d5d4;
        case 0x20d5d8u: goto label_20d5d8;
        case 0x20d5dcu: goto label_20d5dc;
        case 0x20d5e0u: goto label_20d5e0;
        case 0x20d5e4u: goto label_20d5e4;
        case 0x20d5e8u: goto label_20d5e8;
        case 0x20d5ecu: goto label_20d5ec;
        case 0x20d5f0u: goto label_20d5f0;
        case 0x20d5f4u: goto label_20d5f4;
        case 0x20d5f8u: goto label_20d5f8;
        case 0x20d5fcu: goto label_20d5fc;
        case 0x20d600u: goto label_20d600;
        case 0x20d604u: goto label_20d604;
        case 0x20d608u: goto label_20d608;
        case 0x20d60cu: goto label_20d60c;
        case 0x20d610u: goto label_20d610;
        case 0x20d614u: goto label_20d614;
        case 0x20d618u: goto label_20d618;
        case 0x20d61cu: goto label_20d61c;
        case 0x20d620u: goto label_20d620;
        case 0x20d624u: goto label_20d624;
        case 0x20d628u: goto label_20d628;
        case 0x20d62cu: goto label_20d62c;
        case 0x20d630u: goto label_20d630;
        case 0x20d634u: goto label_20d634;
        case 0x20d638u: goto label_20d638;
        case 0x20d63cu: goto label_20d63c;
        case 0x20d640u: goto label_20d640;
        case 0x20d644u: goto label_20d644;
        case 0x20d648u: goto label_20d648;
        case 0x20d64cu: goto label_20d64c;
        case 0x20d650u: goto label_20d650;
        case 0x20d654u: goto label_20d654;
        case 0x20d658u: goto label_20d658;
        case 0x20d65cu: goto label_20d65c;
        case 0x20d660u: goto label_20d660;
        case 0x20d664u: goto label_20d664;
        case 0x20d668u: goto label_20d668;
        case 0x20d66cu: goto label_20d66c;
        case 0x20d670u: goto label_20d670;
        case 0x20d674u: goto label_20d674;
        case 0x20d678u: goto label_20d678;
        case 0x20d67cu: goto label_20d67c;
        case 0x20d680u: goto label_20d680;
        case 0x20d684u: goto label_20d684;
        case 0x20d688u: goto label_20d688;
        case 0x20d68cu: goto label_20d68c;
        case 0x20d690u: goto label_20d690;
        case 0x20d694u: goto label_20d694;
        case 0x20d698u: goto label_20d698;
        case 0x20d69cu: goto label_20d69c;
        case 0x20d6a0u: goto label_20d6a0;
        case 0x20d6a4u: goto label_20d6a4;
        case 0x20d6a8u: goto label_20d6a8;
        case 0x20d6acu: goto label_20d6ac;
        case 0x20d6b0u: goto label_20d6b0;
        case 0x20d6b4u: goto label_20d6b4;
        case 0x20d6b8u: goto label_20d6b8;
        case 0x20d6bcu: goto label_20d6bc;
        case 0x20d6c0u: goto label_20d6c0;
        case 0x20d6c4u: goto label_20d6c4;
        case 0x20d6c8u: goto label_20d6c8;
        case 0x20d6ccu: goto label_20d6cc;
        case 0x20d6d0u: goto label_20d6d0;
        case 0x20d6d4u: goto label_20d6d4;
        case 0x20d6d8u: goto label_20d6d8;
        case 0x20d6dcu: goto label_20d6dc;
        case 0x20d6e0u: goto label_20d6e0;
        case 0x20d6e4u: goto label_20d6e4;
        case 0x20d6e8u: goto label_20d6e8;
        case 0x20d6ecu: goto label_20d6ec;
        case 0x20d6f0u: goto label_20d6f0;
        case 0x20d6f4u: goto label_20d6f4;
        case 0x20d6f8u: goto label_20d6f8;
        case 0x20d6fcu: goto label_20d6fc;
        case 0x20d700u: goto label_20d700;
        case 0x20d704u: goto label_20d704;
        case 0x20d708u: goto label_20d708;
        case 0x20d70cu: goto label_20d70c;
        case 0x20d710u: goto label_20d710;
        case 0x20d714u: goto label_20d714;
        case 0x20d718u: goto label_20d718;
        case 0x20d71cu: goto label_20d71c;
        case 0x20d720u: goto label_20d720;
        case 0x20d724u: goto label_20d724;
        case 0x20d728u: goto label_20d728;
        case 0x20d72cu: goto label_20d72c;
        case 0x20d730u: goto label_20d730;
        case 0x20d734u: goto label_20d734;
        case 0x20d738u: goto label_20d738;
        case 0x20d73cu: goto label_20d73c;
        case 0x20d740u: goto label_20d740;
        case 0x20d744u: goto label_20d744;
        case 0x20d748u: goto label_20d748;
        case 0x20d74cu: goto label_20d74c;
        case 0x20d750u: goto label_20d750;
        case 0x20d754u: goto label_20d754;
        case 0x20d758u: goto label_20d758;
        case 0x20d75cu: goto label_20d75c;
        case 0x20d760u: goto label_20d760;
        case 0x20d764u: goto label_20d764;
        case 0x20d768u: goto label_20d768;
        case 0x20d76cu: goto label_20d76c;
        case 0x20d770u: goto label_20d770;
        case 0x20d774u: goto label_20d774;
        case 0x20d778u: goto label_20d778;
        case 0x20d77cu: goto label_20d77c;
        case 0x20d780u: goto label_20d780;
        case 0x20d784u: goto label_20d784;
        case 0x20d788u: goto label_20d788;
        case 0x20d78cu: goto label_20d78c;
        case 0x20d790u: goto label_20d790;
        case 0x20d794u: goto label_20d794;
        case 0x20d798u: goto label_20d798;
        case 0x20d79cu: goto label_20d79c;
        case 0x20d7a0u: goto label_20d7a0;
        case 0x20d7a4u: goto label_20d7a4;
        default: break;
    }

    ctx->pc = 0x20d3a0u;

label_20d3a0:
    // 0x20d3a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20d3a4:
    // 0x20d3a4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x20d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_20d3a8:
    // 0x20d3a8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x20d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_20d3ac:
    // 0x20d3ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20d3acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d3b0:
    // 0x20d3b0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x20d3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_20d3b4:
    // 0x20d3b4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x20d3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_20d3b8:
    // 0x20d3b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20d3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20d3bc:
    // 0x20d3bc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x20d3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_20d3c0:
    // 0x20d3c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20d3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20d3c4:
    // 0x20d3c4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x20d3c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_20d3c8:
    // 0x20d3c8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x20d3c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_20d3cc:
    // 0x20d3cc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x20d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20d3d0:
    // 0x20d3d0: 0x144000eb  bnez        $v0, . + 4 + (0xEB << 2)
label_20d3d4:
    if (ctx->pc == 0x20D3D4u) {
        ctx->pc = 0x20D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3D0u;
        // 0x20d3d4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D3D8u;
        goto label_20d3d8;
    }
    ctx->pc = 0x20D3D0u;
    {
        const bool branch_taken_0x20d3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3D0u;
        // 0x20d3d4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3d0) {
            ctx->pc = 0x20D780u;
            goto label_20d780;
        }
    }
    ctx->pc = 0x20D3D8u;
label_20d3d8:
    // 0x20d3d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20d3dc:
    // 0x20d3dc: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x20d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_20d3e0:
    // 0x20d3e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d3e4:
    // 0x20d3e4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x20d3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_20d3e8:
    // 0x20d3e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_20d3ec:
    if (ctx->pc == 0x20D3ECu) {
        ctx->pc = 0x20D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3E8u;
        // 0x20d3ec: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D3F0u;
        goto label_20d3f0;
    }
    ctx->pc = 0x20D3E8u;
    {
        const bool branch_taken_0x20d3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3E8u;
        // 0x20d3ec: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3e8) {
            ctx->pc = 0x20D418u;
            goto label_20d418;
        }
    }
    ctx->pc = 0x20D3F0u;
label_20d3f0:
    // 0x20d3f0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x20d3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_20d3f4:
    // 0x20d3f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20d3f8:
    if (ctx->pc == 0x20D3F8u) {
        ctx->pc = 0x20D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3F4u;
        // 0x20d3f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D3FCu;
        goto label_20d3fc;
    }
    ctx->pc = 0x20D3F4u;
    {
        const bool branch_taken_0x20d3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3F4u;
        // 0x20d3f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3f4) {
            ctx->pc = 0x20D410u;
            goto label_20d410;
        }
    }
    ctx->pc = 0x20D3FCu;
label_20d3fc:
    // 0x20d3fc: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x20d3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_20d400:
    // 0x20d400: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x20d400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_20d404:
    // 0x20d404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20d404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d408:
    // 0x20d408: 0x10000008  b           . + 4 + (0x8 << 2)
label_20d40c:
    if (ctx->pc == 0x20D40Cu) {
        ctx->pc = 0x20D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D408u;
        // 0x20d40c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D410u;
        goto label_20d410;
    }
    ctx->pc = 0x20D408u;
    {
        const bool branch_taken_0x20d408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D408u;
        // 0x20d40c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d408) {
            ctx->pc = 0x20D42Cu;
            goto label_20d42c;
        }
    }
    ctx->pc = 0x20D410u;
label_20d410:
    // 0x20d410: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x20d410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_20d414:
    // 0x20d414: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x20d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_20d418:
    // 0x20d418: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x20d418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
label_20d41c:
    // 0x20d41c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x20d41cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_20d420:
    // 0x20d420: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20d420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d424:
    // 0x20d424: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20d424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20d428:
    // 0x20d428: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20d428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d42c:
    // 0x20d42c: 0xe440f684  swc1        $f0, -0x97C($v0)
    ctx->pc = 0x20d42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964868), bits); }
label_20d430:
    // 0x20d430: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x20d430u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_20d434:
    // 0x20d434: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x20d434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_20d438:
    // 0x20d438: 0x8ea827e4  lw          $t0, 0x27E4($s5)
    ctx->pc = 0x20d438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20d43c:
    // 0x20d43c: 0x24549490  addiu       $s4, $v0, -0x6B70
    ctx->pc = 0x20d43cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939792));
label_20d440:
    // 0x20d440: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20d440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20d444:
    // 0x20d444: 0x2409003d  addiu       $t1, $zero, 0x3D
    ctx->pc = 0x20d444u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_20d448:
    // 0x20d448: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x20d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_20d44c:
    // 0x20d44c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d44cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d450:
    // 0x20d450: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20d450u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d454:
    // 0x20d454: 0x24a59488  addiu       $a1, $a1, -0x6B78
    ctx->pc = 0x20d454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939784));
label_20d458:
    // 0x20d458: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20d458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20d45c:
    // 0x20d45c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x20d45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_20d460:
    // 0x20d460: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20d464:
    // 0x20d464: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20d464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20d468:
    // 0x20d468: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x20d468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_20d46c:
    // 0x20d46c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20d46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20d470:
    // 0x20d470: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x20d470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_20d474:
    // 0x20d474: 0x40f809  jalr        $v0
label_20d478:
    if (ctx->pc == 0x20D478u) {
        ctx->pc = 0x20D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D474u;
        // 0x20d478: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D47Cu;
        goto label_20d47c;
    }
    ctx->pc = 0x20D474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D47Cu);
        ctx->pc = 0x20D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D474u;
        // 0x20d478: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D474u, 0x20D47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D47Cu;
label_20d47c:
    // 0x20d47c: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x20d47cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_20d480:
    // 0x20d480: 0x240400c7  addiu       $a0, $zero, 0xC7
    ctx->pc = 0x20d480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_20d484:
    // 0x20d484: 0x261094d8  addiu       $s0, $s0, -0x6B28
    ctx->pc = 0x20d484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939864));
label_20d488:
    // 0x20d488: 0xc067b9c  jal         func_19EE70
label_20d48c:
    if (ctx->pc == 0x20D48Cu) {
        ctx->pc = 0x20D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D488u;
        // 0x20d48c: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D490u;
        goto label_20d490;
    }
    ctx->pc = 0x20D488u;
    SET_GPR_U32(ctx, 31, 0x20D490u);
    ctx->pc = 0x20D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D488u;
    // 0x20d48c: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20D488u, 0x20D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D490u;
label_20d490:
    // 0x20d490: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20d490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d494:
    // 0x20d494: 0xc067b9c  jal         func_19EE70
label_20d498:
    if (ctx->pc == 0x20D498u) {
        ctx->pc = 0x20D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D494u;
        // 0x20d498: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D49Cu;
        goto label_20d49c;
    }
    ctx->pc = 0x20D494u;
    SET_GPR_U32(ctx, 31, 0x20D49Cu);
    ctx->pc = 0x20D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D494u;
    // 0x20d498: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20D494u, 0x20D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D49Cu;
label_20d49c:
    // 0x20d49c: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x20d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20d4a0:
    // 0x20d4a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d4a4:
    // 0x20d4a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20d4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d4a8:
    // 0x20d4a8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x20d4a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d4ac:
    // 0x20d4ac: 0xc10ca28  jal         func_4328A0
label_20d4b0:
    if (ctx->pc == 0x20D4B0u) {
        ctx->pc = 0x20D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4ACu;
        // 0x20d4b0: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D4B4u;
        goto label_20d4b4;
    }
    ctx->pc = 0x20D4ACu;
    SET_GPR_U32(ctx, 31, 0x20D4B4u);
    ctx->pc = 0x20D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D4ACu;
    // 0x20d4b0: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x20D4ACu, 0x20D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4B4u;
label_20d4b4:
    // 0x20d4b4: 0xc080ebe  jal         func_203AF8
label_20d4b8:
    if (ctx->pc == 0x20D4B8u) {
        ctx->pc = 0x20D4BCu;
        goto label_20d4bc;
    }
    ctx->pc = 0x20D4B4u;
    SET_GPR_U32(ctx, 31, 0x20D4BCu);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20D4B4u, 0x20D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4BCu;
label_20d4bc:
    // 0x20d4bc: 0xc661f684  lwc1        $f1, -0x97C($s3)
    ctx->pc = 0x20d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294964868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d4c0:
    // 0x20d4c0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x20d4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20d4c4:
    // 0x20d4c4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x20d4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20d4c8:
    // 0x20d4c8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20d4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20d4cc:
    // 0x20d4cc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x20d4ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20d4d0:
    // 0x20d4d0: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x20d4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20d4d4:
    // 0x20d4d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20d4d8:
    // 0x20d4d8: 0x24a594e0  addiu       $a1, $a1, -0x6B20
    ctx->pc = 0x20d4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939872));
label_20d4dc:
    // 0x20d4dc: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x20d4dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20d4e0:
    // 0x20d4e0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20d4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20d4e4:
    // 0x20d4e4: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20d4e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20d4e8:
    // 0x20d4e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20d4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20d4ec:
    // 0x20d4ec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x20d4ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20d4f0:
    // 0x20d4f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d4f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d4f4:
    // 0x20d4f4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20d4f8:
    // 0x20d4f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20d4f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d4fc:
    // 0x20d4fc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20d4fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20d500:
    // 0x20d500: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20d504:
    // 0x20d504: 0x40f809  jalr        $v0
label_20d508:
    if (ctx->pc == 0x20D508u) {
        ctx->pc = 0x20D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D504u;
        // 0x20d508: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D50Cu;
        goto label_20d50c;
    }
    ctx->pc = 0x20D504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D50Cu);
        ctx->pc = 0x20D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D504u;
        // 0x20d508: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D504u, 0x20D50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D50Cu;
label_20d50c:
    // 0x20d50c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x20d50cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d510:
    // 0x20d510: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_20d514:
    if (ctx->pc == 0x20D514u) {
        ctx->pc = 0x20D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D510u;
        // 0x20d514: 0xae490090  sw          $t1, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D518u;
        goto label_20d518;
    }
    ctx->pc = 0x20D510u;
    {
        const bool branch_taken_0x20d510 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d510) {
            ctx->pc = 0x20D514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D510u;
            // 0x20d514: 0xae490090  sw          $t1, 0x90($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D528u;
            goto label_20d528;
        }
    }
    ctx->pc = 0x20D518u;
label_20d518:
    // 0x20d518: 0xc0705aa  jal         func_1C16A8
label_20d51c:
    if (ctx->pc == 0x20D51Cu) {
        ctx->pc = 0x20D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D518u;
        // 0x20d51c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D520u;
        goto label_20d520;
    }
    ctx->pc = 0x20D518u;
    SET_GPR_U32(ctx, 31, 0x20D520u);
    ctx->pc = 0x20D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D518u;
    // 0x20d51c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x20D518u, 0x20D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D520u;
label_20d520:
    // 0x20d520: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x20d520u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d524:
    // 0x20d524: 0xae490090  sw          $t1, 0x90($s2)
    ctx->pc = 0x20d524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 9));
label_20d528:
    // 0x20d528: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20d528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20d52c:
    // 0x20d52c: 0x8c51d328  lw          $s1, -0x2CD8($v0)
    ctx->pc = 0x20d52cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
label_20d530:
    // 0x20d530: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x20d530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20d534:
    // 0x20d534: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x20d534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_20d538:
    // 0x20d538: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x20d538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20d53c:
    // 0x20d53c: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x20d53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_20d540:
    // 0x20d540: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x20d540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_20d544:
    // 0x20d544: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20d544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20d548:
    // 0x20d548: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20d548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d54c:
    // 0x20d54c: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x20d54cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_20d550:
    // 0x20d550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d554:
    // 0x20d554: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x20d554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_20d558:
    // 0x20d558: 0x40f809  jalr        $v0
label_20d55c:
    if (ctx->pc == 0x20D55Cu) {
        ctx->pc = 0x20D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D558u;
        // 0x20d55c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D560u;
        goto label_20d560;
    }
    ctx->pc = 0x20D558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D560u);
        ctx->pc = 0x20D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D558u;
        // 0x20d55c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D558u, 0x20D560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D560u;
label_20d560:
    // 0x20d560: 0x8e460090  lw          $a2, 0x90($s2)
    ctx->pc = 0x20d560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20d564:
    // 0x20d564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20d564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d568:
    // 0x20d568: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20d56c:
    // 0x20d56c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x20d56cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_20d570:
    // 0x20d570: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x20d570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_20d574:
    // 0x20d574: 0x60f809  jalr        $v1
label_20d578:
    if (ctx->pc == 0x20D578u) {
        ctx->pc = 0x20D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D574u;
        // 0x20d578: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D57Cu;
        goto label_20d57c;
    }
    ctx->pc = 0x20D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D57Cu);
        ctx->pc = 0x20D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D574u;
        // 0x20d578: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D574u, 0x20D57Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D57Cu;
label_20d57c:
    // 0x20d57c: 0x8e470090  lw          $a3, 0x90($s2)
    ctx->pc = 0x20d57cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20d580:
    // 0x20d580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20d580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d584:
    // 0x20d584: 0x8e45008c  lw          $a1, 0x8C($s2)
    ctx->pc = 0x20d584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20d588:
    // 0x20d588: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20d588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20d58c:
    // 0x20d58c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x20d58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_20d590:
    // 0x20d590: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20d590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_20d594:
    // 0x20d594: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20d594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20d598:
    // 0x20d598: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x20d598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_20d59c:
    // 0x20d59c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x20d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_20d5a0:
    // 0x20d5a0: 0x60f809  jalr        $v1
label_20d5a4:
    if (ctx->pc == 0x20D5A4u) {
        ctx->pc = 0x20D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5A0u;
        // 0x20d5a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D5A8u;
        goto label_20d5a8;
    }
    ctx->pc = 0x20D5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D5A8u);
        ctx->pc = 0x20D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5A0u;
        // 0x20d5a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D5A0u, 0x20D5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D5A8u;
label_20d5a8:
    // 0x20d5a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d5ac:
    // 0x20d5ac: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20d5acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20d5b0:
    // 0x20d5b0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x20d5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_20d5b4:
    // 0x20d5b4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20d5b8:
    // 0x20d5b8: 0x24a594f8  addiu       $a1, $a1, -0x6B08
    ctx->pc = 0x20d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939896));
label_20d5bc:
    // 0x20d5bc: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20d5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20d5c0:
    // 0x20d5c0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20d5c4:
    // 0x20d5c4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20d5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20d5c8:
    // 0x20d5c8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x20d5c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20d5cc:
    // 0x20d5cc: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x20d5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_20d5d0:
    // 0x20d5d0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20d5d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20d5d4:
    // 0x20d5d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d5d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d5d8:
    // 0x20d5d8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20d5dc:
    // 0x20d5dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20d5dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d5e0:
    // 0x20d5e0: 0x40f809  jalr        $v0
label_20d5e4:
    if (ctx->pc == 0x20D5E4u) {
        ctx->pc = 0x20D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5E0u;
        // 0x20d5e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D5E8u;
        goto label_20d5e8;
    }
    ctx->pc = 0x20D5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D5E8u);
        ctx->pc = 0x20D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5E0u;
        // 0x20d5e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D5E0u, 0x20D5E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D5E8u;
label_20d5e8:
    // 0x20d5e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20d5ec:
    if (ctx->pc == 0x20D5ECu) {
        ctx->pc = 0x20D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5E8u;
        // 0x20d5ec: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D5F0u;
        goto label_20d5f0;
    }
    ctx->pc = 0x20D5E8u;
    {
        const bool branch_taken_0x20d5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d5e8) {
            ctx->pc = 0x20D5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D5E8u;
            // 0x20d5ec: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D5FCu;
            goto label_20d5fc;
        }
    }
    ctx->pc = 0x20D5F0u;
label_20d5f0:
    // 0x20d5f0: 0xc074fbc  jal         func_1D3EF0
label_20d5f4:
    if (ctx->pc == 0x20D5F4u) {
        ctx->pc = 0x20D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5F0u;
        // 0x20d5f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D5F8u;
        goto label_20d5f8;
    }
    ctx->pc = 0x20D5F0u;
    SET_GPR_U32(ctx, 31, 0x20D5F8u);
    ctx->pc = 0x20D5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D5F0u;
    // 0x20d5f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x20D5F0u, 0x20D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5F8u;
label_20d5f8:
    // 0x20d5f8: 0xae420094  sw          $v0, 0x94($s2)
    ctx->pc = 0x20d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
label_20d5fc:
    // 0x20d5fc: 0xc080ec6  jal         func_203B18
label_20d600:
    if (ctx->pc == 0x20D600u) {
        ctx->pc = 0x20D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5FCu;
        // 0x20d600: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D604u;
        goto label_20d604;
    }
    ctx->pc = 0x20D5FCu;
    SET_GPR_U32(ctx, 31, 0x20D604u);
    ctx->pc = 0x20D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D5FCu;
    // 0x20d600: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x20D5FCu, 0x20D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D604u;
label_20d604:
    // 0x20d604: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20d604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20d608:
    // 0x20d608: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d60c:
    // 0x20d60c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20d60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20d610:
    // 0x20d610: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x20d610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20d614:
    // 0x20d614: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20d614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d618:
    // 0x20d618: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20d618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20d61c:
    // 0x20d61c: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x20d61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_20d620:
    // 0x20d620: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20d620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20d624:
    // 0x20d624: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20d624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20d628:
    // 0x20d628: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x20d628u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20d62c:
    // 0x20d62c: 0xc075044  jal         func_1D4110
label_20d630:
    if (ctx->pc == 0x20D630u) {
        ctx->pc = 0x20D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D62Cu;
        // 0x20d630: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D634u;
        goto label_20d634;
    }
    ctx->pc = 0x20D62Cu;
    SET_GPR_U32(ctx, 31, 0x20D634u);
    ctx->pc = 0x20D630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D62Cu;
    // 0x20d630: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x20D62Cu, 0x20D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D634u;
label_20d634:
    // 0x20d634: 0xc080ebe  jal         func_203AF8
label_20d638:
    if (ctx->pc == 0x20D638u) {
        ctx->pc = 0x20D63Cu;
        goto label_20d63c;
    }
    ctx->pc = 0x20D634u;
    SET_GPR_U32(ctx, 31, 0x20D63Cu);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20D634u, 0x20D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D63Cu;
label_20d63c:
    // 0x20d63c: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x20d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20d640:
    // 0x20d640: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20d640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20d644:
    // 0x20d644: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x20d644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_20d648:
    // 0x20d648: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x20d648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_20d64c:
    // 0x20d64c: 0xac730088  sw          $s3, 0x88($v1)
    ctx->pc = 0x20d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 19));
label_20d650:
    // 0x20d650: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x20d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20d654:
    // 0x20d654: 0xc067b9c  jal         func_19EE70
label_20d658:
    if (ctx->pc == 0x20D658u) {
        ctx->pc = 0x20D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D654u;
        // 0x20d658: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D65Cu;
        goto label_20d65c;
    }
    ctx->pc = 0x20D654u;
    SET_GPR_U32(ctx, 31, 0x20D65Cu);
    ctx->pc = 0x20D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D654u;
    // 0x20d658: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20D654u, 0x20D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D65Cu;
label_20d65c:
    // 0x20d65c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20d65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20d660:
    // 0x20d660: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20d660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20d664:
    // 0x20d664: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20d664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20d668:
    // 0x20d668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20d668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d66c:
    // 0x20d66c: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x20d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20d670:
    // 0x20d670: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20d670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d674:
    // 0x20d674: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x20d674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_20d678:
    // 0x20d678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d67c:
    // 0x20d67c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20d67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20d680:
    // 0x20d680: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20d680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d684:
    // 0x20d684: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x20d684u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d688:
    // 0x20d688: 0xc07508c  jal         func_1D4230
label_20d68c:
    if (ctx->pc == 0x20D68Cu) {
        ctx->pc = 0x20D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D688u;
        // 0x20d68c: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D690u;
        goto label_20d690;
    }
    ctx->pc = 0x20D688u;
    SET_GPR_U32(ctx, 31, 0x20D690u);
    ctx->pc = 0x20D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D688u;
    // 0x20d68c: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20D688u, 0x20D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D690u;
label_20d690:
    // 0x20d690: 0xc067b9c  jal         func_19EE70
label_20d694:
    if (ctx->pc == 0x20D694u) {
        ctx->pc = 0x20D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D690u;
        // 0x20d694: 0x240400ca  addiu       $a0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D698u;
        goto label_20d698;
    }
    ctx->pc = 0x20D690u;
    SET_GPR_U32(ctx, 31, 0x20D698u);
    ctx->pc = 0x20D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D690u;
    // 0x20d694: 0x240400ca  addiu       $a0, $zero, 0xCA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20D690u, 0x20D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D698u;
label_20d698:
    // 0x20d698: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20d698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20d69c:
    // 0x20d69c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20d69cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20d6a0:
    // 0x20d6a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20d6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20d6a4:
    // 0x20d6a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20d6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d6a8:
    // 0x20d6a8: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x20d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20d6ac:
    // 0x20d6ac: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x20d6acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d6b0:
    // 0x20d6b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20d6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d6b4:
    // 0x20d6b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d6b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d6b8:
    // 0x20d6b8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20d6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20d6bc:
    // 0x20d6bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20d6bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d6c0:
    // 0x20d6c0: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x20d6c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20d6c4:
    // 0x20d6c4: 0xc07508c  jal         func_1D4230
label_20d6c8:
    if (ctx->pc == 0x20D6C8u) {
        ctx->pc = 0x20D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6C4u;
        // 0x20d6c8: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D6CCu;
        goto label_20d6cc;
    }
    ctx->pc = 0x20D6C4u;
    SET_GPR_U32(ctx, 31, 0x20D6CCu);
    ctx->pc = 0x20D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D6C4u;
    // 0x20d6c8: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20D6C4u, 0x20D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6CCu;
label_20d6cc:
    // 0x20d6cc: 0x8e450094  lw          $a1, 0x94($s2)
    ctx->pc = 0x20d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20d6d0:
    // 0x20d6d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d6d4:
    // 0x20d6d4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x20d6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_20d6d8:
    // 0x20d6d8: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x20d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_20d6dc:
    // 0x20d6dc: 0x60f809  jalr        $v1
label_20d6e0:
    if (ctx->pc == 0x20D6E0u) {
        ctx->pc = 0x20D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6DCu;
        // 0x20d6e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D6E4u;
        goto label_20d6e4;
    }
    ctx->pc = 0x20D6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D6E4u);
        ctx->pc = 0x20D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6DCu;
        // 0x20d6e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D6DCu, 0x20D6E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D6E4u;
label_20d6e4:
    // 0x20d6e4: 0xc080ebe  jal         func_203AF8
label_20d6e8:
    if (ctx->pc == 0x20D6E8u) {
        ctx->pc = 0x20D6ECu;
        goto label_20d6ec;
    }
    ctx->pc = 0x20D6E4u;
    SET_GPR_U32(ctx, 31, 0x20D6ECu);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20D6E4u, 0x20D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6ECu;
label_20d6ec:
    // 0x20d6ec: 0xc080ec2  jal         func_203B08
label_20d6f0:
    if (ctx->pc == 0x20D6F0u) {
        ctx->pc = 0x20D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6ECu;
        // 0x20d6f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D6F4u;
        goto label_20d6f4;
    }
    ctx->pc = 0x20D6ECu;
    SET_GPR_U32(ctx, 31, 0x20D6F4u);
    ctx->pc = 0x20D6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D6ECu;
    // 0x20d6f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x20D6ECu, 0x20D6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6F4u;
label_20d6f4:
    // 0x20d6f4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20d6f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20d6f8:
    // 0x20d6f8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20d6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20d6fc:
    // 0x20d6fc: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20d6fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20d700:
    // 0x20d700: 0x24a59508  addiu       $a1, $a1, -0x6AF8
    ctx->pc = 0x20d700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939912));
label_20d704:
    // 0x20d704: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20d704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20d708:
    // 0x20d708: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x20d708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20d70c:
    // 0x20d70c: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x20d70cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20d710:
    // 0x20d710: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x20d710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_20d714:
    // 0x20d714: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20d714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20d718:
    // 0x20d718: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20d718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20d71c:
    // 0x20d71c: 0x24090053  addiu       $t1, $zero, 0x53
    ctx->pc = 0x20d71cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_20d720:
    // 0x20d720: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d720u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d724:
    // 0x20d724: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20d724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20d728:
    // 0x20d728: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20d728u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d72c:
    // 0x20d72c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20d72cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20d730:
    // 0x20d730: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20d734:
    // 0x20d734: 0x40f809  jalr        $v0
label_20d738:
    if (ctx->pc == 0x20D738u) {
        ctx->pc = 0x20D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D734u;
        // 0x20d738: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D73Cu;
        goto label_20d73c;
    }
    ctx->pc = 0x20D734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D73Cu);
        ctx->pc = 0x20D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D734u;
        // 0x20d738: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D734u, 0x20D73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D73Cu;
label_20d73c:
    // 0x20d73c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20d740:
    if (ctx->pc == 0x20D740u) {
        ctx->pc = 0x20D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D73Cu;
        // 0x20d740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D744u;
        goto label_20d744;
    }
    ctx->pc = 0x20D73Cu;
    {
        const bool branch_taken_0x20d73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d73c) {
            ctx->pc = 0x20D740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D73Cu;
            // 0x20d740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D750u;
            goto label_20d750;
        }
    }
    ctx->pc = 0x20D744u;
label_20d744:
    // 0x20d744: 0xc073a9c  jal         func_1CEA70
label_20d748:
    if (ctx->pc == 0x20D748u) {
        ctx->pc = 0x20D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D744u;
        // 0x20d748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D74Cu;
        goto label_20d74c;
    }
    ctx->pc = 0x20D744u;
    SET_GPR_U32(ctx, 31, 0x20D74Cu);
    ctx->pc = 0x20D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D744u;
    // 0x20d748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x20D744u, 0x20D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D74Cu;
label_20d74c:
    // 0x20d74c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d750:
    // 0x20d750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d754:
    // 0x20d754: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20d754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d758:
    // 0x20d758: 0xc073ad0  jal         func_1CEB40
label_20d75c:
    if (ctx->pc == 0x20D75Cu) {
        ctx->pc = 0x20D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D758u;
        // 0x20d75c: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D760u;
        goto label_20d760;
    }
    ctx->pc = 0x20D758u;
    SET_GPR_U32(ctx, 31, 0x20D760u);
    ctx->pc = 0x20D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D758u;
    // 0x20d75c: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x20D758u, 0x20D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D760u;
label_20d760:
    // 0x20d760: 0xc067b9c  jal         func_19EE70
label_20d764:
    if (ctx->pc == 0x20D764u) {
        ctx->pc = 0x20D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D760u;
        // 0x20d764: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D768u;
        goto label_20d768;
    }
    ctx->pc = 0x20D760u;
    SET_GPR_U32(ctx, 31, 0x20D768u);
    ctx->pc = 0x20D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D760u;
    // 0x20d764: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20D760u, 0x20D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D768u;
label_20d768:
    // 0x20d768: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x20d768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_20d76c:
    // 0x20d76c: 0xc073b0a  jal         func_1CEC28
label_20d770:
    if (ctx->pc == 0x20D770u) {
        ctx->pc = 0x20D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D76Cu;
        // 0x20d770: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D774u;
        goto label_20d774;
    }
    ctx->pc = 0x20D76Cu;
    SET_GPR_U32(ctx, 31, 0x20D774u);
    ctx->pc = 0x20D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D76Cu;
    // 0x20d770: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x20D76Cu, 0x20D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D774u;
label_20d774:
    // 0x20d774: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x20d774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_20d778:
    // 0x20d778: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x20d778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_20d77c:
    // 0x20d77c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x20d77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d780:
    // 0x20d780: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x20d780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20d784:
    // 0x20d784: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x20d784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20d788:
    // 0x20d788: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x20d788u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20d78c:
    // 0x20d78c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20d78cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20d790:
    // 0x20d790: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x20d790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20d794:
    // 0x20d794: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20d794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20d798:
    // 0x20d798: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x20d798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20d79c:
    // 0x20d79c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x20d79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20d7a0:
    // 0x20d7a0: 0x3e00008  jr          $ra
label_20d7a4:
    if (ctx->pc == 0x20D7A4u) {
        ctx->pc = 0x20D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7A0u;
        // 0x20d7a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D7A8u;
        goto label_fallthrough_0x20d7a0;
    }
    ctx->pc = 0x20D7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7A0u;
        // 0x20d7a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20d7a0:
    ctx->pc = 0x20D7A8u;
}
