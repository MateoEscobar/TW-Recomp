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

// Function: sub_002A75B8
// Address: 0x2a75b8 - 0x2a7810
void sub_002A75B8_0x2a75b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A75B8_0x2a75b8");
#endif

    switch (ctx->pc) {
        case 0x2a75b8u: goto label_2a75b8;
        case 0x2a75bcu: goto label_2a75bc;
        case 0x2a75c0u: goto label_2a75c0;
        case 0x2a75c4u: goto label_2a75c4;
        case 0x2a75c8u: goto label_2a75c8;
        case 0x2a75ccu: goto label_2a75cc;
        case 0x2a75d0u: goto label_2a75d0;
        case 0x2a75d4u: goto label_2a75d4;
        case 0x2a75d8u: goto label_2a75d8;
        case 0x2a75dcu: goto label_2a75dc;
        case 0x2a75e0u: goto label_2a75e0;
        case 0x2a75e4u: goto label_2a75e4;
        case 0x2a75e8u: goto label_2a75e8;
        case 0x2a75ecu: goto label_2a75ec;
        case 0x2a75f0u: goto label_2a75f0;
        case 0x2a75f4u: goto label_2a75f4;
        case 0x2a75f8u: goto label_2a75f8;
        case 0x2a75fcu: goto label_2a75fc;
        case 0x2a7600u: goto label_2a7600;
        case 0x2a7604u: goto label_2a7604;
        case 0x2a7608u: goto label_2a7608;
        case 0x2a760cu: goto label_2a760c;
        case 0x2a7610u: goto label_2a7610;
        case 0x2a7614u: goto label_2a7614;
        case 0x2a7618u: goto label_2a7618;
        case 0x2a761cu: goto label_2a761c;
        case 0x2a7620u: goto label_2a7620;
        case 0x2a7624u: goto label_2a7624;
        case 0x2a7628u: goto label_2a7628;
        case 0x2a762cu: goto label_2a762c;
        case 0x2a7630u: goto label_2a7630;
        case 0x2a7634u: goto label_2a7634;
        case 0x2a7638u: goto label_2a7638;
        case 0x2a763cu: goto label_2a763c;
        case 0x2a7640u: goto label_2a7640;
        case 0x2a7644u: goto label_2a7644;
        case 0x2a7648u: goto label_2a7648;
        case 0x2a764cu: goto label_2a764c;
        case 0x2a7650u: goto label_2a7650;
        case 0x2a7654u: goto label_2a7654;
        case 0x2a7658u: goto label_2a7658;
        case 0x2a765cu: goto label_2a765c;
        case 0x2a7660u: goto label_2a7660;
        case 0x2a7664u: goto label_2a7664;
        case 0x2a7668u: goto label_2a7668;
        case 0x2a766cu: goto label_2a766c;
        case 0x2a7670u: goto label_2a7670;
        case 0x2a7674u: goto label_2a7674;
        case 0x2a7678u: goto label_2a7678;
        case 0x2a767cu: goto label_2a767c;
        case 0x2a7680u: goto label_2a7680;
        case 0x2a7684u: goto label_2a7684;
        case 0x2a7688u: goto label_2a7688;
        case 0x2a768cu: goto label_2a768c;
        case 0x2a7690u: goto label_2a7690;
        case 0x2a7694u: goto label_2a7694;
        case 0x2a7698u: goto label_2a7698;
        case 0x2a769cu: goto label_2a769c;
        case 0x2a76a0u: goto label_2a76a0;
        case 0x2a76a4u: goto label_2a76a4;
        case 0x2a76a8u: goto label_2a76a8;
        case 0x2a76acu: goto label_2a76ac;
        case 0x2a76b0u: goto label_2a76b0;
        case 0x2a76b4u: goto label_2a76b4;
        case 0x2a76b8u: goto label_2a76b8;
        case 0x2a76bcu: goto label_2a76bc;
        case 0x2a76c0u: goto label_2a76c0;
        case 0x2a76c4u: goto label_2a76c4;
        case 0x2a76c8u: goto label_2a76c8;
        case 0x2a76ccu: goto label_2a76cc;
        case 0x2a76d0u: goto label_2a76d0;
        case 0x2a76d4u: goto label_2a76d4;
        case 0x2a76d8u: goto label_2a76d8;
        case 0x2a76dcu: goto label_2a76dc;
        case 0x2a76e0u: goto label_2a76e0;
        case 0x2a76e4u: goto label_2a76e4;
        case 0x2a76e8u: goto label_2a76e8;
        case 0x2a76ecu: goto label_2a76ec;
        case 0x2a76f0u: goto label_2a76f0;
        case 0x2a76f4u: goto label_2a76f4;
        case 0x2a76f8u: goto label_2a76f8;
        case 0x2a76fcu: goto label_2a76fc;
        case 0x2a7700u: goto label_2a7700;
        case 0x2a7704u: goto label_2a7704;
        case 0x2a7708u: goto label_2a7708;
        case 0x2a770cu: goto label_2a770c;
        case 0x2a7710u: goto label_2a7710;
        case 0x2a7714u: goto label_2a7714;
        case 0x2a7718u: goto label_2a7718;
        case 0x2a771cu: goto label_2a771c;
        case 0x2a7720u: goto label_2a7720;
        case 0x2a7724u: goto label_2a7724;
        case 0x2a7728u: goto label_2a7728;
        case 0x2a772cu: goto label_2a772c;
        case 0x2a7730u: goto label_2a7730;
        case 0x2a7734u: goto label_2a7734;
        case 0x2a7738u: goto label_2a7738;
        case 0x2a773cu: goto label_2a773c;
        case 0x2a7740u: goto label_2a7740;
        case 0x2a7744u: goto label_2a7744;
        case 0x2a7748u: goto label_2a7748;
        case 0x2a774cu: goto label_2a774c;
        case 0x2a7750u: goto label_2a7750;
        case 0x2a7754u: goto label_2a7754;
        case 0x2a7758u: goto label_2a7758;
        case 0x2a775cu: goto label_2a775c;
        case 0x2a7760u: goto label_2a7760;
        case 0x2a7764u: goto label_2a7764;
        case 0x2a7768u: goto label_2a7768;
        case 0x2a776cu: goto label_2a776c;
        case 0x2a7770u: goto label_2a7770;
        case 0x2a7774u: goto label_2a7774;
        case 0x2a7778u: goto label_2a7778;
        case 0x2a777cu: goto label_2a777c;
        case 0x2a7780u: goto label_2a7780;
        case 0x2a7784u: goto label_2a7784;
        case 0x2a7788u: goto label_2a7788;
        case 0x2a778cu: goto label_2a778c;
        case 0x2a7790u: goto label_2a7790;
        case 0x2a7794u: goto label_2a7794;
        case 0x2a7798u: goto label_2a7798;
        case 0x2a779cu: goto label_2a779c;
        case 0x2a77a0u: goto label_2a77a0;
        case 0x2a77a4u: goto label_2a77a4;
        case 0x2a77a8u: goto label_2a77a8;
        case 0x2a77acu: goto label_2a77ac;
        case 0x2a77b0u: goto label_2a77b0;
        case 0x2a77b4u: goto label_2a77b4;
        case 0x2a77b8u: goto label_2a77b8;
        case 0x2a77bcu: goto label_2a77bc;
        case 0x2a77c0u: goto label_2a77c0;
        case 0x2a77c4u: goto label_2a77c4;
        case 0x2a77c8u: goto label_2a77c8;
        case 0x2a77ccu: goto label_2a77cc;
        case 0x2a77d0u: goto label_2a77d0;
        case 0x2a77d4u: goto label_2a77d4;
        case 0x2a77d8u: goto label_2a77d8;
        case 0x2a77dcu: goto label_2a77dc;
        case 0x2a77e0u: goto label_2a77e0;
        case 0x2a77e4u: goto label_2a77e4;
        case 0x2a77e8u: goto label_2a77e8;
        case 0x2a77ecu: goto label_2a77ec;
        case 0x2a77f0u: goto label_2a77f0;
        case 0x2a77f4u: goto label_2a77f4;
        case 0x2a77f8u: goto label_2a77f8;
        case 0x2a77fcu: goto label_2a77fc;
        case 0x2a7800u: goto label_2a7800;
        case 0x2a7804u: goto label_2a7804;
        case 0x2a7808u: goto label_2a7808;
        case 0x2a780cu: goto label_2a780c;
        default: break;
    }

    ctx->pc = 0x2a75b8u;

label_2a75b8:
    // 0x2a75b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2a75b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2a75bc:
    // 0x2a75bc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2a75bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2a75c0:
    // 0x2a75c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a75c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a75c4:
    // 0x2a75c4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2a75c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2a75c8:
    // 0x2a75c8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2a75c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2a75cc:
    // 0x2a75cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a75d0:
    // 0x2a75d0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2a75d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2a75d4:
    // 0x2a75d4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2a75d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_2a75d8:
    // 0x2a75d8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2a75d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2a75dc:
    // 0x2a75dc: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x2a75dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_2a75e0:
    // 0x2a75e0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2a75e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2a75e4:
    // 0x2a75e4: 0x26529440  addiu       $s2, $s2, -0x6BC0
    ctx->pc = 0x2a75e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939712));
label_2a75e8:
    // 0x2a75e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2a75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2a75ec:
    // 0x2a75ec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2a75ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a75f0:
    // 0x2a75f0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2a75f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2a75f4:
    // 0x2a75f4: 0x3c150001  lui         $s5, 0x1
    ctx->pc = 0x2a75f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1 << 16));
label_2a75f8:
    // 0x2a75f8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2a75f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_2a75fc:
    // 0x2a75fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a75fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7600:
    // 0x2a7600: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a7600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a7604:
    // 0x2a7604: 0xc0e409a  jal         func_390268
label_2a7608:
    if (ctx->pc == 0x2A7608u) {
        ctx->pc = 0x2A7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7604u;
        // 0x2a7608: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A760Cu;
        goto label_2a760c;
    }
    ctx->pc = 0x2A7604u;
    SET_GPR_U32(ctx, 31, 0x2A760Cu);
    ctx->pc = 0x2A7608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7604u;
    // 0x2a7608: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A7604u, 0x2A760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A760Cu;
label_2a760c:
    // 0x2a760c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2a760cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2a7610:
    // 0x2a7610: 0xc0a9cea  jal         func_2A73A8
label_2a7614:
    if (ctx->pc == 0x2A7614u) {
        ctx->pc = 0x2A7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7610u;
        // 0x2a7614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7618u;
        goto label_2a7618;
    }
    ctx->pc = 0x2A7610u;
    SET_GPR_U32(ctx, 31, 0x2A7618u);
    ctx->pc = 0x2A7614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7610u;
    // 0x2a7614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A73A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A73A8u, 0x2A7610u, 0x2A7618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7618u;
label_2a7618:
    // 0x2a7618: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a7618u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a761c:
    // 0x2a761c: 0x26109e40  addiu       $s0, $s0, -0x61C0
    ctx->pc = 0x2a761cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942272));
label_2a7620:
    // 0x2a7620: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x2a7620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_2a7624:
    // 0x2a7624: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x2a7624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a7628:
    // 0x2a7628: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a7628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a762c:
    // 0x2a762c: 0x2d18818  mult        $s1, $s6, $s1
    ctx->pc = 0x2a762cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2a7630:
    // 0x2a7630: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2a7630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2a7634:
    // 0x2a7634: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2a7634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2a7638:
    // 0x2a7638: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2a7638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2a763c:
    // 0x2a763c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a7640:
    // 0x2a7640: 0x8c4400cc  lw          $a0, 0xCC($v0)
    ctx->pc = 0x2a7640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_2a7644:
    // 0x2a7644: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a7644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a7648:
    // 0x2a7648: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a7648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2a764c:
    // 0x2a764c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2a7650:
    // 0x2a7650: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a7650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a7654:
    // 0x2a7654: 0xc0a9d4e  jal         func_2A7538
label_2a7658:
    if (ctx->pc == 0x2A7658u) {
        ctx->pc = 0x2A7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7654u;
        // 0x2a7658: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A765Cu;
        goto label_2a765c;
    }
    ctx->pc = 0x2A7654u;
    SET_GPR_U32(ctx, 31, 0x2A765Cu);
    ctx->pc = 0x2A7658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7654u;
    // 0x2a7658: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7538u, 0x2A7654u, 0x2A765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A765Cu;
label_2a765c:
    // 0x2a765c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a765cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7660:
    // 0x2a7660: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2a7660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2a7664:
    // 0x2a7664: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x2a7664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_2a7668:
    // 0x2a7668: 0x3a820020  xori        $v0, $s4, 0x20
    ctx->pc = 0x2a7668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)32);
label_2a766c:
    // 0x2a766c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2a766cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_2a7670:
    // 0x2a7670: 0x27be0024  addiu       $fp, $sp, 0x24
    ctx->pc = 0x2a7670u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_2a7674:
    // 0x2a7674: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a7674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2a7678:
    // 0x2a7678: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x2a7678u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a767c:
    // 0x2a767c: 0x27b0fffe  addiu       $s0, $sp, -0x2
    ctx->pc = 0x2a767cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967294));
label_2a7680:
    // 0x2a7680: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a7680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7684:
    // 0x2a7684: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a7684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a7688:
    // 0x2a7688: 0xc0e40a2  jal         func_390288
label_2a768c:
    if (ctx->pc == 0x2A768Cu) {
        ctx->pc = 0x2A768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7688u;
        // 0x2a768c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7690u;
        goto label_2a7690;
    }
    ctx->pc = 0x2A7688u;
    SET_GPR_U32(ctx, 31, 0x2A7690u);
    ctx->pc = 0x2A768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7688u;
    // 0x2a768c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A7688u, 0x2A7690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7690u;
label_2a7690:
    // 0x2a7690: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a7690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7694:
    // 0x2a7694: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2a7698:
    if (ctx->pc == 0x2A7698u) {
        ctx->pc = 0x2A7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7694u;
        // 0x2a7698: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A769Cu;
        goto label_2a769c;
    }
    ctx->pc = 0x2A7694u;
    {
        const bool branch_taken_0x2a7694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7694u;
        // 0x2a7698: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7694) {
            ctx->pc = 0x2A76F4u;
            goto label_2a76f4;
        }
    }
    ctx->pc = 0x2A769Cu;
label_2a769c:
    // 0x2a769c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2a769cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2a76a0:
    // 0x2a76a0: 0x50440015  beql        $v0, $a0, . + 4 + (0x15 << 2)
label_2a76a4:
    if (ctx->pc == 0x2A76A4u) {
        ctx->pc = 0x2A76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76A0u;
        // 0x2a76a4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A76A8u;
        goto label_2a76a8;
    }
    ctx->pc = 0x2A76A0u;
    {
        const bool branch_taken_0x2a76a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a76a0) {
            ctx->pc = 0x2A76A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A76A0u;
            // 0x2a76a4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A76F8u;
            goto label_2a76f8;
        }
    }
    ctx->pc = 0x2A76A8u;
label_2a76a8:
    // 0x2a76a8: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x2a76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_2a76ac:
    // 0x2a76ac: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2a76b0:
    if (ctx->pc == 0x2A76B0u) {
        ctx->pc = 0x2A76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76ACu;
        // 0x2a76b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A76B4u;
        goto label_2a76b4;
    }
    ctx->pc = 0x2A76ACu;
    {
        const bool branch_taken_0x2a76ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a76ac) {
            ctx->pc = 0x2A76B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A76ACu;
            // 0x2a76b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A76F8u;
            goto label_2a76f8;
        }
    }
    ctx->pc = 0x2A76B4u;
label_2a76b4:
    // 0x2a76b4: 0x8c6200d8  lw          $v0, 0xD8($v1)
    ctx->pc = 0x2a76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_2a76b8:
    // 0x2a76b8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2a76bc:
    if (ctx->pc == 0x2A76BCu) {
        ctx->pc = 0x2A76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76B8u;
        // 0x2a76bc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A76C0u;
        goto label_2a76c0;
    }
    ctx->pc = 0x2A76B8u;
    {
        const bool branch_taken_0x2a76b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a76b8) {
            ctx->pc = 0x2A76BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A76B8u;
            // 0x2a76bc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A76E0u;
            goto label_2a76e0;
        }
    }
    ctx->pc = 0x2A76C0u;
label_2a76c0:
    // 0x2a76c0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2a76c4:
    if (ctx->pc == 0x2A76C4u) {
        ctx->pc = 0x2A76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76C0u;
        // 0x2a76c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A76C8u;
        goto label_2a76c8;
    }
    ctx->pc = 0x2A76C0u;
    {
        const bool branch_taken_0x2a76c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76C0u;
        // 0x2a76c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76c0) {
            ctx->pc = 0x2A76D4u;
            goto label_2a76d4;
        }
    }
    ctx->pc = 0x2A76C8u;
label_2a76c8:
    // 0x2a76c8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2a76c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_2a76cc:
    // 0x2a76cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a76d0:
    // 0x2a76d0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2a76d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2a76d4:
    // 0x2a76d4: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_2a76d8:
    if (ctx->pc == 0x2A76D8u) {
        ctx->pc = 0x2A76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76D4u;
        // 0x2a76d8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A76DCu;
        goto label_2a76dc;
    }
    ctx->pc = 0x2A76D4u;
    {
        const bool branch_taken_0x2a76d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a76d4) {
            ctx->pc = 0x2A76D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A76D4u;
            // 0x2a76d8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A76F8u;
            goto label_2a76f8;
        }
    }
    ctx->pc = 0x2A76DCu;
label_2a76dc:
    // 0x2a76dc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2a76dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a76e0:
    // 0x2a76e0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2a76e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2a76e4:
    // 0x2a76e4: 0x2bc03  sra         $s7, $v0, 16
    ctx->pc = 0x2a76e4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 16));
label_2a76e8:
    // 0x2a76e8: 0xa6130000  sh          $s3, 0x0($s0)
    ctx->pc = 0x2a76e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 19));
label_2a76ec:
    // 0x2a76ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a76ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2a76f0:
    // 0x2a76f0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2a76f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2a76f4:
    // 0x2a76f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a76f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a76f8:
    // 0x2a76f8: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x2a76f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_2a76fc:
    // 0x2a76fc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_2a7700:
    if (ctx->pc == 0x2A7700u) {
        ctx->pc = 0x2A7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76FCu;
        // 0x2a7700: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7704u;
        goto label_2a7704;
    }
    ctx->pc = 0x2A76FCu;
    {
        const bool branch_taken_0x2a76fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76FCu;
        // 0x2a7700: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76fc) {
            ctx->pc = 0x2A7680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7680;
        }
    }
    ctx->pc = 0x2A7704u;
label_2a7704:
    // 0x2a7704: 0x1ae00008  blez        $s7, . + 4 + (0x8 << 2)
label_2a7708:
    if (ctx->pc == 0x2A7708u) {
        ctx->pc = 0x2A7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7704u;
        // 0x2a7708: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A770Cu;
        goto label_2a770c;
    }
    ctx->pc = 0x2A7704u;
    {
        const bool branch_taken_0x2a7704 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2A7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7704u;
        // 0x2a7708: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7704) {
            ctx->pc = 0x2A7728u;
            goto label_2a7728;
        }
    }
    ctx->pc = 0x2A770Cu;
label_2a770c:
    // 0x2a770c: 0x26e5ffff  addiu       $a1, $s7, -0x1
    ctx->pc = 0x2a770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_2a7710:
    // 0x2a7710: 0xc0cd4ee  jal         func_3353B8
label_2a7714:
    if (ctx->pc == 0x2A7714u) {
        ctx->pc = 0x2A7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7710u;
        // 0x2a7714: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7718u;
        goto label_2a7718;
    }
    ctx->pc = 0x2A7710u;
    SET_GPR_U32(ctx, 31, 0x2A7718u);
    ctx->pc = 0x2A7714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7710u;
    // 0x2a7714: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2A7710u, 0x2A7718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7718u;
label_2a7718:
    // 0x2a7718: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2a7718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2a771c:
    // 0x2a771c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2a771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2a7720:
    // 0x2a7720: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a7724:
    if (ctx->pc == 0x2A7724u) {
        ctx->pc = 0x2A7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7720u;
        // 0x2a7724: 0x84670000  lh          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7728u;
        goto label_2a7728;
    }
    ctx->pc = 0x2A7720u;
    {
        const bool branch_taken_0x2a7720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7720u;
        // 0x2a7724: 0x84670000  lh          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7720) {
            ctx->pc = 0x2A772Cu;
            goto label_2a772c;
        }
    }
    ctx->pc = 0x2A7728u;
label_2a7728:
    // 0x2a7728: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x2a7728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a772c:
    // 0x2a772c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a772cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a7730:
    // 0x2a7730: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2a7730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a7734:
    // 0x2a7734: 0x24859440  addiu       $a1, $a0, -0x6BC0
    ctx->pc = 0x2a7734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939712));
label_2a7738:
    // 0x2a7738: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x2a7738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a773c:
    // 0x2a773c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a773cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a7740:
    // 0x2a7740: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x2a7740u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2a7744:
    // 0x2a7744: 0x24449e40  addiu       $a0, $v0, -0x61C0
    ctx->pc = 0x2a7744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942272));
label_2a7748:
    // 0x2a7748: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x2a7748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_2a774c:
    // 0x2a774c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a7750:
    // 0x2a7750: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a7750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2a7754:
    // 0x2a7754: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2a7754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2a7758:
    // 0x2a7758: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a7758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2a775c:
    // 0x2a775c: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x2a775cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_2a7760:
    // 0x2a7760: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a7760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a7764:
    // 0x2a7764: 0xc0e40a2  jal         func_390288
label_2a7768:
    if (ctx->pc == 0x2A7768u) {
        ctx->pc = 0x2A7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7764u;
        // 0x2a7768: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A776Cu;
        goto label_2a776c;
    }
    ctx->pc = 0x2A7764u;
    SET_GPR_U32(ctx, 31, 0x2A776Cu);
    ctx->pc = 0x2A7768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7764u;
    // 0x2a7768: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A7764u, 0x2A776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A776Cu;
label_2a776c:
    // 0x2a776c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x2a776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_2a7770:
    // 0x2a7770: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_2a7774:
    if (ctx->pc == 0x2A7774u) {
        ctx->pc = 0x2A7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7770u;
        // 0x2a7774: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7778u;
        goto label_2a7778;
    }
    ctx->pc = 0x2A7770u;
    {
        const bool branch_taken_0x2a7770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7770u;
        // 0x2a7774: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7770) {
            ctx->pc = 0x2A77DCu;
            goto label_2a77dc;
        }
    }
    ctx->pc = 0x2A7778u;
label_2a7778:
    // 0x2a7778: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2a7778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2a777c:
    // 0x2a777c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2a777cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2a7780:
    // 0x2a7780: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2a7780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2a7784:
    // 0x2a7784: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a7784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7788:
    // 0x2a7788: 0x84830092  lh          $v1, 0x92($a0)
    ctx->pc = 0x2a7788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_2a778c:
    // 0x2a778c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a778cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7790:
    // 0x2a7790: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a7790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a7794:
    // 0x2a7794: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2a7794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2a7798:
    // 0x2a7798: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a7798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a779c:
    // 0x2a779c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a779cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a77a0:
    // 0x2a77a0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2a77a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2a77a4:
    // 0x2a77a4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2a77a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2a77a8:
    // 0x2a77a8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2a77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2a77ac:
    // 0x2a77ac: 0xc0ab6b0  jal         func_2ADAC0
label_2a77b0:
    if (ctx->pc == 0x2A77B0u) {
        ctx->pc = 0x2A77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77ACu;
        // 0x2a77b0: 0x8c4600cc  lw          $a2, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A77B4u;
        goto label_2a77b4;
    }
    ctx->pc = 0x2A77ACu;
    SET_GPR_U32(ctx, 31, 0x2A77B4u);
    ctx->pc = 0x2A77B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A77ACu;
    // 0x2a77b0: 0x8c4600cc  lw          $a2, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADAC0u, 0x2A77ACu, 0x2A77B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77B4u;
label_2a77b4:
    // 0x2a77b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a77b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a77b8:
    // 0x2a77b8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2a77bc:
    if (ctx->pc == 0x2A77BCu) {
        ctx->pc = 0x2A77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77B8u;
        // 0x2a77bc: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A77C0u;
        goto label_2a77c0;
    }
    ctx->pc = 0x2A77B8u;
    {
        const bool branch_taken_0x2a77b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77B8u;
        // 0x2a77bc: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a77b8) {
            ctx->pc = 0x2A77DCu;
            goto label_2a77dc;
        }
    }
    ctx->pc = 0x2A77C0u;
label_2a77c0:
    // 0x2a77c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a77c4:
    // 0x2a77c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a77c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a77c8:
    // 0x2a77c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a77cc:
    // 0x2a77cc: 0x40f809  jalr        $v0
label_2a77d0:
    if (ctx->pc == 0x2A77D0u) {
        ctx->pc = 0x2A77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77CCu;
        // 0x2a77d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A77D4u;
        goto label_2a77d4;
    }
    ctx->pc = 0x2A77CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A77D4u);
        ctx->pc = 0x2A77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77CCu;
        // 0x2a77d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A77CCu, 0x2A77D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A77D4u;
label_2a77d4:
    // 0x2a77d4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2a77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_2a77d8:
    // 0x2a77d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2a77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2a77dc:
    // 0x2a77dc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2a77dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2a77e0:
    // 0x2a77e0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2a77e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2a77e4:
    // 0x2a77e4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2a77e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a77e8:
    // 0x2a77e8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2a77e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a77ec:
    // 0x2a77ec: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2a77ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a77f0:
    // 0x2a77f0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2a77f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a77f4:
    // 0x2a77f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2a77f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a77f8:
    // 0x2a77f8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2a77f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a77fc:
    // 0x2a77fc: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2a77fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7800:
    // 0x2a7800: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a7800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a7804:
    // 0x2a7804: 0x3e00008  jr          $ra
label_2a7808:
    if (ctx->pc == 0x2A7808u) {
        ctx->pc = 0x2A7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7804u;
        // 0x2a7808: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A780Cu;
        goto label_2a780c;
    }
    ctx->pc = 0x2A7804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7804u;
        // 0x2a7808: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A780Cu;
label_2a780c:
    // 0x2a780c: 0x0  nop
    ctx->pc = 0x2a780cu;
    // NOP
    ctx->pc = 0x2a7810u;
}
