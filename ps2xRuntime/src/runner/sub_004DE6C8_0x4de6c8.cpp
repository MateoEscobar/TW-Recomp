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

// Function: sub_004DE6C8
// Address: 0x4de6c8 - 0x4de868
void sub_004DE6C8_0x4de6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE6C8_0x4de6c8");
#endif

    switch (ctx->pc) {
        case 0x4de6c8u: goto label_4de6c8;
        case 0x4de6ccu: goto label_4de6cc;
        case 0x4de6d0u: goto label_4de6d0;
        case 0x4de6d4u: goto label_4de6d4;
        case 0x4de6d8u: goto label_4de6d8;
        case 0x4de6dcu: goto label_4de6dc;
        case 0x4de6e0u: goto label_4de6e0;
        case 0x4de6e4u: goto label_4de6e4;
        case 0x4de6e8u: goto label_4de6e8;
        case 0x4de6ecu: goto label_4de6ec;
        case 0x4de6f0u: goto label_4de6f0;
        case 0x4de6f4u: goto label_4de6f4;
        case 0x4de6f8u: goto label_4de6f8;
        case 0x4de6fcu: goto label_4de6fc;
        case 0x4de700u: goto label_4de700;
        case 0x4de704u: goto label_4de704;
        case 0x4de708u: goto label_4de708;
        case 0x4de70cu: goto label_4de70c;
        case 0x4de710u: goto label_4de710;
        case 0x4de714u: goto label_4de714;
        case 0x4de718u: goto label_4de718;
        case 0x4de71cu: goto label_4de71c;
        case 0x4de720u: goto label_4de720;
        case 0x4de724u: goto label_4de724;
        case 0x4de728u: goto label_4de728;
        case 0x4de72cu: goto label_4de72c;
        case 0x4de730u: goto label_4de730;
        case 0x4de734u: goto label_4de734;
        case 0x4de738u: goto label_4de738;
        case 0x4de73cu: goto label_4de73c;
        case 0x4de740u: goto label_4de740;
        case 0x4de744u: goto label_4de744;
        case 0x4de748u: goto label_4de748;
        case 0x4de74cu: goto label_4de74c;
        case 0x4de750u: goto label_4de750;
        case 0x4de754u: goto label_4de754;
        case 0x4de758u: goto label_4de758;
        case 0x4de75cu: goto label_4de75c;
        case 0x4de760u: goto label_4de760;
        case 0x4de764u: goto label_4de764;
        case 0x4de768u: goto label_4de768;
        case 0x4de76cu: goto label_4de76c;
        case 0x4de770u: goto label_4de770;
        case 0x4de774u: goto label_4de774;
        case 0x4de778u: goto label_4de778;
        case 0x4de77cu: goto label_4de77c;
        case 0x4de780u: goto label_4de780;
        case 0x4de784u: goto label_4de784;
        case 0x4de788u: goto label_4de788;
        case 0x4de78cu: goto label_4de78c;
        case 0x4de790u: goto label_4de790;
        case 0x4de794u: goto label_4de794;
        case 0x4de798u: goto label_4de798;
        case 0x4de79cu: goto label_4de79c;
        case 0x4de7a0u: goto label_4de7a0;
        case 0x4de7a4u: goto label_4de7a4;
        case 0x4de7a8u: goto label_4de7a8;
        case 0x4de7acu: goto label_4de7ac;
        case 0x4de7b0u: goto label_4de7b0;
        case 0x4de7b4u: goto label_4de7b4;
        case 0x4de7b8u: goto label_4de7b8;
        case 0x4de7bcu: goto label_4de7bc;
        case 0x4de7c0u: goto label_4de7c0;
        case 0x4de7c4u: goto label_4de7c4;
        case 0x4de7c8u: goto label_4de7c8;
        case 0x4de7ccu: goto label_4de7cc;
        case 0x4de7d0u: goto label_4de7d0;
        case 0x4de7d4u: goto label_4de7d4;
        case 0x4de7d8u: goto label_4de7d8;
        case 0x4de7dcu: goto label_4de7dc;
        case 0x4de7e0u: goto label_4de7e0;
        case 0x4de7e4u: goto label_4de7e4;
        case 0x4de7e8u: goto label_4de7e8;
        case 0x4de7ecu: goto label_4de7ec;
        case 0x4de7f0u: goto label_4de7f0;
        case 0x4de7f4u: goto label_4de7f4;
        case 0x4de7f8u: goto label_4de7f8;
        case 0x4de7fcu: goto label_4de7fc;
        case 0x4de800u: goto label_4de800;
        case 0x4de804u: goto label_4de804;
        case 0x4de808u: goto label_4de808;
        case 0x4de80cu: goto label_4de80c;
        case 0x4de810u: goto label_4de810;
        case 0x4de814u: goto label_4de814;
        case 0x4de818u: goto label_4de818;
        case 0x4de81cu: goto label_4de81c;
        case 0x4de820u: goto label_4de820;
        case 0x4de824u: goto label_4de824;
        case 0x4de828u: goto label_4de828;
        case 0x4de82cu: goto label_4de82c;
        case 0x4de830u: goto label_4de830;
        case 0x4de834u: goto label_4de834;
        case 0x4de838u: goto label_4de838;
        case 0x4de83cu: goto label_4de83c;
        case 0x4de840u: goto label_4de840;
        case 0x4de844u: goto label_4de844;
        case 0x4de848u: goto label_4de848;
        case 0x4de84cu: goto label_4de84c;
        case 0x4de850u: goto label_4de850;
        case 0x4de854u: goto label_4de854;
        case 0x4de858u: goto label_4de858;
        case 0x4de85cu: goto label_4de85c;
        case 0x4de860u: goto label_4de860;
        case 0x4de864u: goto label_4de864;
        default: break;
    }

    ctx->pc = 0x4de6c8u;

label_4de6c8:
    // 0x4de6c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4de6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4de6cc:
    // 0x4de6cc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4de6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4de6d0:
    // 0x4de6d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4de6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4de6d4:
    // 0x4de6d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4de6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de6d8:
    // 0x4de6d8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4de6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4de6dc:
    // 0x4de6dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4de6dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de6e0:
    // 0x4de6e0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4de6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4de6e4:
    // 0x4de6e4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4de6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4de6e8:
    // 0x4de6e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4de6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4de6ec:
    // 0x4de6ec: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4de6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4de6f0:
    // 0x4de6f0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4de6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4de6f4:
    // 0x4de6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4de6f8:
    // 0x4de6f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4de6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4de6fc:
    // 0x4de6fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4de6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4de700:
    // 0x4de700: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4de704:
    if (ctx->pc == 0x4DE704u) {
        ctx->pc = 0x4DE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE700u;
        // 0x4de704: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE708u;
        goto label_4de708;
    }
    ctx->pc = 0x4DE700u;
    {
        const bool branch_taken_0x4de700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE700u;
        // 0x4de704: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de700) {
            ctx->pc = 0x4DE74Cu;
            goto label_4de74c;
        }
    }
    ctx->pc = 0x4DE708u;
label_4de708:
    // 0x4de708: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4de70c:
    if (ctx->pc == 0x4DE70Cu) {
        ctx->pc = 0x4DE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE708u;
        // 0x4de70c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE710u;
        goto label_4de710;
    }
    ctx->pc = 0x4DE708u;
    {
        const bool branch_taken_0x4de708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de708) {
            ctx->pc = 0x4DE70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE708u;
            // 0x4de70c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE71Cu;
            goto label_4de71c;
        }
    }
    ctx->pc = 0x4DE710u;
label_4de710:
    // 0x4de710: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4de710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4de714:
    // 0x4de714: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4de714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4de718:
    // 0x4de718: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4de718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4de71c:
    // 0x4de71c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4de71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4de720:
    // 0x4de720: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4de720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4de724:
    // 0x4de724: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4de724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4de728:
    // 0x4de728: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4de728u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4de72c:
    // 0x4de72c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4de72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4de730:
    // 0x4de730: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4de730u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4de734:
    // 0x4de734: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4de734u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4de738:
    // 0x4de738: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4de738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4de73c:
    // 0x4de73c: 0xc10c1bb  jal         func_4306EC
label_4de740:
    if (ctx->pc == 0x4DE740u) {
        ctx->pc = 0x4DE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE73Cu;
        // 0x4de740: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE744u;
        goto label_4de744;
    }
    ctx->pc = 0x4DE73Cu;
    SET_GPR_U32(ctx, 31, 0x4DE744u);
    ctx->pc = 0x4DE740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE73Cu;
    // 0x4de740: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DE73Cu, 0x4DE744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE744u;
label_4de744:
    // 0x4de744: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4de748:
    if (ctx->pc == 0x4DE748u) {
        ctx->pc = 0x4DE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE744u;
        // 0x4de748: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE74Cu;
        goto label_4de74c;
    }
    ctx->pc = 0x4DE744u;
    {
        const bool branch_taken_0x4de744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE744u;
        // 0x4de748: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de744) {
            ctx->pc = 0x4DE83Cu;
            goto label_4de83c;
        }
    }
    ctx->pc = 0x4DE74Cu;
label_4de74c:
    // 0x4de74c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4de74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4de750:
    // 0x4de750: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4de750u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4de754:
    // 0x4de754: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4de754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4de758:
    // 0x4de758: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4de758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4de75c:
    // 0x4de75c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4de75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4de760:
    // 0x4de760: 0x24961b80  addiu       $s6, $a0, 0x1B80
    ctx->pc = 0x4de760u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 7040));
label_4de764:
    // 0x4de764: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4de764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4de768:
    // 0x4de768: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4de768u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4de76c:
    // 0x4de76c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4de76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4de770:
    // 0x4de770: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4de770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4de774:
    // 0x4de774: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4de774u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4de778:
    // 0x4de778: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4de778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4de77c:
    // 0x4de77c: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4de77cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4de780:
    // 0x4de780: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4de780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4de784:
    // 0x4de784: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4de784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4de788:
    // 0x4de788: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4de788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4de78c:
    // 0x4de78c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4de78cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4de790:
    // 0x4de790: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4de790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4de794:
    // 0x4de794: 0x24a51b78  addiu       $a1, $a1, 0x1B78
    ctx->pc = 0x4de794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7032));
label_4de798:
    // 0x4de798: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4de798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4de79c:
    // 0x4de79c: 0x254a1ba8  addiu       $t2, $t2, 0x1BA8
    ctx->pc = 0x4de79cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7080));
label_4de7a0:
    // 0x4de7a0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4de7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4de7a4:
    // 0x4de7a4: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4de7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4de7a8:
    // 0x4de7a8: 0x40f809  jalr        $v0
label_4de7ac:
    if (ctx->pc == 0x4DE7ACu) {
        ctx->pc = 0x4DE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE7A8u;
        // 0x4de7ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE7B0u;
        goto label_4de7b0;
    }
    ctx->pc = 0x4DE7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DE7B0u);
        ctx->pc = 0x4DE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE7A8u;
        // 0x4de7ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE7A8u, 0x4DE7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE7B0u;
label_4de7b0:
    // 0x4de7b0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4de7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4de7b4:
    // 0x4de7b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4de7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4de7b8:
    // 0x4de7b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4de7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4de7bc:
    // 0x4de7bc: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4de7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4de7c0:
    // 0x4de7c0: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4de7c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4de7c4:
    // 0x4de7c4: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4de7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4de7c8:
    // 0x4de7c8: 0xc10c1bb  jal         func_4306EC
label_4de7cc:
    if (ctx->pc == 0x4DE7CCu) {
        ctx->pc = 0x4DE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE7C8u;
        // 0x4de7cc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE7D0u;
        goto label_4de7d0;
    }
    ctx->pc = 0x4DE7C8u;
    SET_GPR_U32(ctx, 31, 0x4DE7D0u);
    ctx->pc = 0x4DE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE7C8u;
    // 0x4de7cc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DE7C8u, 0x4DE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE7D0u;
label_4de7d0:
    // 0x4de7d0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4de7d4:
    if (ctx->pc == 0x4DE7D4u) {
        ctx->pc = 0x4DE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE7D0u;
        // 0x4de7d4: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE7D8u;
        goto label_4de7d8;
    }
    ctx->pc = 0x4DE7D0u;
    {
        const bool branch_taken_0x4de7d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de7d0) {
            ctx->pc = 0x4DE7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE7D0u;
            // 0x4de7d4: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE7E4u;
            goto label_4de7e4;
        }
    }
    ctx->pc = 0x4DE7D8u;
label_4de7d8:
    // 0x4de7d8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4de7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4de7dc:
    // 0x4de7dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4de7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4de7e0:
    // 0x4de7e0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4de7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4de7e4:
    // 0x4de7e4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4de7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4de7e8:
    // 0x4de7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4de7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de7ec:
    // 0x4de7ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4de7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4de7f0:
    // 0x4de7f0: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4de7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4de7f4:
    // 0x4de7f4: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4de7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4de7f8:
    // 0x4de7f8: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4de7f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4de7fc:
    // 0x4de7fc: 0xc10c1bb  jal         func_4306EC
label_4de800:
    if (ctx->pc == 0x4DE800u) {
        ctx->pc = 0x4DE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE7FCu;
        // 0x4de800: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE804u;
        goto label_4de804;
    }
    ctx->pc = 0x4DE7FCu;
    SET_GPR_U32(ctx, 31, 0x4DE804u);
    ctx->pc = 0x4DE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE7FCu;
    // 0x4de800: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DE7FCu, 0x4DE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE804u;
label_4de804:
    // 0x4de804: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4de804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4de808:
    // 0x4de808: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4de80c:
    if (ctx->pc == 0x4DE80Cu) {
        ctx->pc = 0x4DE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE808u;
        // 0x4de80c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE810u;
        goto label_4de810;
    }
    ctx->pc = 0x4DE808u;
    {
        const bool branch_taken_0x4de808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE808u;
        // 0x4de80c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de808) {
            ctx->pc = 0x4DE82Cu;
            goto label_4de82c;
        }
    }
    ctx->pc = 0x4DE810u;
label_4de810:
    // 0x4de810: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4de810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4de814:
    // 0x4de814: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4de814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4de818:
    // 0x4de818: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4de818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4de81c:
    // 0x4de81c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4de81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4de820:
    // 0x4de820: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4de820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4de824:
    // 0x4de824: 0x60f809  jalr        $v1
label_4de828:
    if (ctx->pc == 0x4DE828u) {
        ctx->pc = 0x4DE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE824u;
        // 0x4de828: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE82Cu;
        goto label_4de82c;
    }
    ctx->pc = 0x4DE824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE82Cu);
        ctx->pc = 0x4DE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE824u;
        // 0x4de828: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE824u, 0x4DE82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE82Cu;
label_4de82c:
    // 0x4de82c: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4de82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4de830:
    // 0x4de830: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4de830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4de834:
    // 0x4de834: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4de834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4de838:
    // 0x4de838: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4de838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4de83c:
    // 0x4de83c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4de83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4de840:
    // 0x4de840: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4de840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4de844:
    // 0x4de844: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4de844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4de848:
    // 0x4de848: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4de848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4de84c:
    // 0x4de84c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4de84cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4de850:
    // 0x4de850: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4de850u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4de854:
    // 0x4de854: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4de854u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4de858:
    // 0x4de858: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4de858u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de85c:
    // 0x4de85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4de860:
    // 0x4de860: 0x3e00008  jr          $ra
label_4de864:
    if (ctx->pc == 0x4DE864u) {
        ctx->pc = 0x4DE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE860u;
        // 0x4de864: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE868u;
        goto label_fallthrough_0x4de860;
    }
    ctx->pc = 0x4DE860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE860u;
        // 0x4de864: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4de860:
    ctx->pc = 0x4DE868u;
}
