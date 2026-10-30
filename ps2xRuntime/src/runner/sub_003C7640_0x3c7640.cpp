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

// Function: sub_003C7640
// Address: 0x3c7640 - 0x3c7818
void sub_003C7640_0x3c7640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7640_0x3c7640");
#endif

    switch (ctx->pc) {
        case 0x3c7640u: goto label_3c7640;
        case 0x3c7644u: goto label_3c7644;
        case 0x3c7648u: goto label_3c7648;
        case 0x3c764cu: goto label_3c764c;
        case 0x3c7650u: goto label_3c7650;
        case 0x3c7654u: goto label_3c7654;
        case 0x3c7658u: goto label_3c7658;
        case 0x3c765cu: goto label_3c765c;
        case 0x3c7660u: goto label_3c7660;
        case 0x3c7664u: goto label_3c7664;
        case 0x3c7668u: goto label_3c7668;
        case 0x3c766cu: goto label_3c766c;
        case 0x3c7670u: goto label_3c7670;
        case 0x3c7674u: goto label_3c7674;
        case 0x3c7678u: goto label_3c7678;
        case 0x3c767cu: goto label_3c767c;
        case 0x3c7680u: goto label_3c7680;
        case 0x3c7684u: goto label_3c7684;
        case 0x3c7688u: goto label_3c7688;
        case 0x3c768cu: goto label_3c768c;
        case 0x3c7690u: goto label_3c7690;
        case 0x3c7694u: goto label_3c7694;
        case 0x3c7698u: goto label_3c7698;
        case 0x3c769cu: goto label_3c769c;
        case 0x3c76a0u: goto label_3c76a0;
        case 0x3c76a4u: goto label_3c76a4;
        case 0x3c76a8u: goto label_3c76a8;
        case 0x3c76acu: goto label_3c76ac;
        case 0x3c76b0u: goto label_3c76b0;
        case 0x3c76b4u: goto label_3c76b4;
        case 0x3c76b8u: goto label_3c76b8;
        case 0x3c76bcu: goto label_3c76bc;
        case 0x3c76c0u: goto label_3c76c0;
        case 0x3c76c4u: goto label_3c76c4;
        case 0x3c76c8u: goto label_3c76c8;
        case 0x3c76ccu: goto label_3c76cc;
        case 0x3c76d0u: goto label_3c76d0;
        case 0x3c76d4u: goto label_3c76d4;
        case 0x3c76d8u: goto label_3c76d8;
        case 0x3c76dcu: goto label_3c76dc;
        case 0x3c76e0u: goto label_3c76e0;
        case 0x3c76e4u: goto label_3c76e4;
        case 0x3c76e8u: goto label_3c76e8;
        case 0x3c76ecu: goto label_3c76ec;
        case 0x3c76f0u: goto label_3c76f0;
        case 0x3c76f4u: goto label_3c76f4;
        case 0x3c76f8u: goto label_3c76f8;
        case 0x3c76fcu: goto label_3c76fc;
        case 0x3c7700u: goto label_3c7700;
        case 0x3c7704u: goto label_3c7704;
        case 0x3c7708u: goto label_3c7708;
        case 0x3c770cu: goto label_3c770c;
        case 0x3c7710u: goto label_3c7710;
        case 0x3c7714u: goto label_3c7714;
        case 0x3c7718u: goto label_3c7718;
        case 0x3c771cu: goto label_3c771c;
        case 0x3c7720u: goto label_3c7720;
        case 0x3c7724u: goto label_3c7724;
        case 0x3c7728u: goto label_3c7728;
        case 0x3c772cu: goto label_3c772c;
        case 0x3c7730u: goto label_3c7730;
        case 0x3c7734u: goto label_3c7734;
        case 0x3c7738u: goto label_3c7738;
        case 0x3c773cu: goto label_3c773c;
        case 0x3c7740u: goto label_3c7740;
        case 0x3c7744u: goto label_3c7744;
        case 0x3c7748u: goto label_3c7748;
        case 0x3c774cu: goto label_3c774c;
        case 0x3c7750u: goto label_3c7750;
        case 0x3c7754u: goto label_3c7754;
        case 0x3c7758u: goto label_3c7758;
        case 0x3c775cu: goto label_3c775c;
        case 0x3c7760u: goto label_3c7760;
        case 0x3c7764u: goto label_3c7764;
        case 0x3c7768u: goto label_3c7768;
        case 0x3c776cu: goto label_3c776c;
        case 0x3c7770u: goto label_3c7770;
        case 0x3c7774u: goto label_3c7774;
        case 0x3c7778u: goto label_3c7778;
        case 0x3c777cu: goto label_3c777c;
        case 0x3c7780u: goto label_3c7780;
        case 0x3c7784u: goto label_3c7784;
        case 0x3c7788u: goto label_3c7788;
        case 0x3c778cu: goto label_3c778c;
        case 0x3c7790u: goto label_3c7790;
        case 0x3c7794u: goto label_3c7794;
        case 0x3c7798u: goto label_3c7798;
        case 0x3c779cu: goto label_3c779c;
        case 0x3c77a0u: goto label_3c77a0;
        case 0x3c77a4u: goto label_3c77a4;
        case 0x3c77a8u: goto label_3c77a8;
        case 0x3c77acu: goto label_3c77ac;
        case 0x3c77b0u: goto label_3c77b0;
        case 0x3c77b4u: goto label_3c77b4;
        case 0x3c77b8u: goto label_3c77b8;
        case 0x3c77bcu: goto label_3c77bc;
        case 0x3c77c0u: goto label_3c77c0;
        case 0x3c77c4u: goto label_3c77c4;
        case 0x3c77c8u: goto label_3c77c8;
        case 0x3c77ccu: goto label_3c77cc;
        case 0x3c77d0u: goto label_3c77d0;
        case 0x3c77d4u: goto label_3c77d4;
        case 0x3c77d8u: goto label_3c77d8;
        case 0x3c77dcu: goto label_3c77dc;
        case 0x3c77e0u: goto label_3c77e0;
        case 0x3c77e4u: goto label_3c77e4;
        case 0x3c77e8u: goto label_3c77e8;
        case 0x3c77ecu: goto label_3c77ec;
        case 0x3c77f0u: goto label_3c77f0;
        case 0x3c77f4u: goto label_3c77f4;
        case 0x3c77f8u: goto label_3c77f8;
        case 0x3c77fcu: goto label_3c77fc;
        case 0x3c7800u: goto label_3c7800;
        case 0x3c7804u: goto label_3c7804;
        case 0x3c7808u: goto label_3c7808;
        case 0x3c780cu: goto label_3c780c;
        case 0x3c7810u: goto label_3c7810;
        case 0x3c7814u: goto label_3c7814;
        default: break;
    }

    ctx->pc = 0x3c7640u;

label_3c7640:
    // 0x3c7640: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c7640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3c7644:
    // 0x3c7644: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3c7644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3c7648:
    // 0x3c7648: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c7648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c764c:
    // 0x3c764c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c764cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c7650:
    // 0x3c7650: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3c7650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3c7654:
    // 0x3c7654: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3c7654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3c7658:
    // 0x3c7658: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3c7658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3c765c:
    // 0x3c765c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c7660:
    // 0x3c7660: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c7660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c7664:
    // 0x3c7664: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c7664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c7668:
    // 0x3c7668: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c7668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c766c:
    // 0x3c766c: 0x40f809  jalr        $v0
label_3c7670:
    if (ctx->pc == 0x3C7670u) {
        ctx->pc = 0x3C7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C766Cu;
        // 0x3c7670: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7674u;
        goto label_3c7674;
    }
    ctx->pc = 0x3C766Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C7674u);
        ctx->pc = 0x3C7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C766Cu;
        // 0x3c7670: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C766Cu, 0x3C7674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C7674u;
label_3c7674:
    // 0x3c7674: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c7674u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7678:
    // 0x3c7678: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3c7678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c767c:
    // 0x3c767c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x3c767cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3c7680:
    // 0x3c7680: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c7684:
    if (ctx->pc == 0x3C7684u) {
        ctx->pc = 0x3C7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7680u;
        // 0x3c7684: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7688u;
        goto label_3c7688;
    }
    ctx->pc = 0x3C7680u;
    {
        const bool branch_taken_0x3c7680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7680u;
        // 0x3c7684: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7680) {
            ctx->pc = 0x3C7690u;
            goto label_3c7690;
        }
    }
    ctx->pc = 0x3C7688u;
label_3c7688:
    // 0x3c7688: 0x1000005b  b           . + 4 + (0x5B << 2)
label_3c768c:
    if (ctx->pc == 0x3C768Cu) {
        ctx->pc = 0x3C768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7688u;
        // 0x3c768c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7690u;
        goto label_3c7690;
    }
    ctx->pc = 0x3C7688u;
    {
        const bool branch_taken_0x3c7688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7688u;
        // 0x3c768c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7688) {
            ctx->pc = 0x3C77F8u;
            goto label_3c77f8;
        }
    }
    ctx->pc = 0x3C7690u;
label_3c7690:
    // 0x3c7690: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3c7690u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3c7694:
    // 0x3c7694: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3c7694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3c7698:
    // 0x3c7698: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3c7698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3c769c:
    // 0x3c769c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c769cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3c76a0:
    // 0x3c76a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c76a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c76a4:
    // 0x3c76a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c76a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c76a8:
    // 0x3c76a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c76a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c76ac:
    // 0x3c76ac: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x3c76acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_3c76b0:
    // 0x3c76b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c76b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c76b4:
    // 0x3c76b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c76b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c76b8:
    // 0x3c76b8: 0xc0cd508  jal         func_335420
label_3c76bc:
    if (ctx->pc == 0x3C76BCu) {
        ctx->pc = 0x3C76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C76B8u;
        // 0x3c76bc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C76C0u;
        goto label_3c76c0;
    }
    ctx->pc = 0x3C76B8u;
    SET_GPR_U32(ctx, 31, 0x3C76C0u);
    ctx->pc = 0x3C76BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C76B8u;
    // 0x3c76bc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C76B8u, 0x3C76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C76C0u;
label_3c76c0:
    // 0x3c76c0: 0xc66100bc  lwc1        $f1, 0xBC($s3)
    ctx->pc = 0x3c76c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c76c4:
    // 0x3c76c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c76c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c76c8:
    // 0x3c76c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3c76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c76cc:
    // 0x3c76cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c76ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c76d0:
    // 0x3c76d0: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x3c76d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_3c76d4:
    // 0x3c76d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3c76d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3c76d8:
    // 0x3c76d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c76d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c76dc:
    // 0x3c76dc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x3c76dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_3c76e0:
    // 0x3c76e0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x3c76e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_3c76e4:
    // 0x3c76e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c76e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c76e8:
    // 0x3c76e8: 0x24520070  addiu       $s2, $v0, 0x70
    ctx->pc = 0x3c76e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_3c76ec:
    // 0x3c76ec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3c76ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3c76f0:
    // 0x3c76f0: 0x84500070  lh          $s0, 0x70($v0)
    ctx->pc = 0x3c76f0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3c76f4:
    // 0x3c76f4: 0xc0cd508  jal         func_335420
label_3c76f8:
    if (ctx->pc == 0x3C76F8u) {
        ctx->pc = 0x3C76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C76F4u;
        // 0x3c76f8: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C76FCu;
        goto label_3c76fc;
    }
    ctx->pc = 0x3C76F4u;
    SET_GPR_U32(ctx, 31, 0x3C76FCu);
    ctx->pc = 0x3C76F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C76F4u;
    // 0x3c76f8: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C76F4u, 0x3C76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C76FCu;
label_3c76fc:
    // 0x3c76fc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3c76fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3c7700:
    // 0x3c7700: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c7700u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3c7704:
    // 0x3c7704: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c7704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c7708:
    // 0x3c7708: 0xc136b24  jal         func_4DAC90
label_3c770c:
    if (ctx->pc == 0x3C770Cu) {
        ctx->pc = 0x3C770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7708u;
        // 0x3c770c: 0x24a531a0  addiu       $a1, $a1, 0x31A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7710u;
        goto label_3c7710;
    }
    ctx->pc = 0x3C7708u;
    SET_GPR_U32(ctx, 31, 0x3C7710u);
    ctx->pc = 0x3C770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7708u;
    // 0x3c770c: 0x24a531a0  addiu       $a1, $a1, 0x31A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C7708u, 0x3C7710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7710u;
label_3c7710:
    // 0x3c7710: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c7710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7714:
    // 0x3c7714: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c7714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c7718:
    // 0x3c7718: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c7718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c771c:
    // 0x3c771c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c771cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c7720:
    // 0x3c7720: 0xc136b18  jal         func_4DAC60
label_3c7724:
    if (ctx->pc == 0x3C7724u) {
        ctx->pc = 0x3C7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7720u;
        // 0x3c7724: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7728u;
        goto label_3c7728;
    }
    ctx->pc = 0x3C7720u;
    SET_GPR_U32(ctx, 31, 0x3C7728u);
    ctx->pc = 0x3C7724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7720u;
    // 0x3c7724: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C7720u, 0x3C7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7728u;
label_3c7728:
    // 0x3c7728: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3c7728u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c772c:
    // 0x3c772c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7730:
    // 0x3c7730: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3c7730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3c7734:
    // 0x3c7734: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c7734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c7738:
    // 0x3c7738: 0x40f809  jalr        $v0
label_3c773c:
    if (ctx->pc == 0x3C773Cu) {
        ctx->pc = 0x3C773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7738u;
        // 0x3c773c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7740u;
        goto label_3c7740;
    }
    ctx->pc = 0x3C7738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C7740u);
        ctx->pc = 0x3C773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7738u;
        // 0x3c773c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7738u, 0x3C7740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C7740u;
label_3c7740:
    // 0x3c7740: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x3c7740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_3c7744:
    // 0x3c7744: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3c7744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3c7748:
    // 0x3c7748: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c774c:
    // 0x3c774c: 0x3c013fac  lui         $at, 0x3FAC
    ctx->pc = 0x3c774cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16300 << 16));
label_3c7750:
    // 0x3c7750: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c7750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c7754:
    // 0x3c7754: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c7754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c7758:
    // 0x3c7758: 0xc0cd508  jal         func_335420
label_3c775c:
    if (ctx->pc == 0x3C775Cu) {
        ctx->pc = 0x3C775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7758u;
        // 0x3c775c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7760u;
        goto label_3c7760;
    }
    ctx->pc = 0x3C7758u;
    SET_GPR_U32(ctx, 31, 0x3C7760u);
    ctx->pc = 0x3C775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7758u;
    // 0x3c775c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C7758u, 0x3C7760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7760u;
label_3c7760:
    // 0x3c7760: 0xc66100bc  lwc1        $f1, 0xBC($s3)
    ctx->pc = 0x3c7760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7764:
    // 0x3c7764: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c7764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7768:
    // 0x3c7768: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c7768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c776c:
    // 0x3c776c: 0xc0e9694  jal         func_3A5A50
label_3c7770:
    if (ctx->pc == 0x3C7770u) {
        ctx->pc = 0x3C7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C776Cu;
        // 0x3c7770: 0xe66100c0  swc1        $f1, 0xC0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7774u;
        goto label_3c7774;
    }
    ctx->pc = 0x3C776Cu;
    SET_GPR_U32(ctx, 31, 0x3C7774u);
    ctx->pc = 0x3C7770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C776Cu;
    // 0x3c7770: 0xe66100c0  swc1        $f1, 0xC0($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C776Cu, 0x3C7774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7774u;
label_3c7774:
    // 0x3c7774: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3c7778:
    if (ctx->pc == 0x3C7778u) {
        ctx->pc = 0x3C7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7774u;
        // 0x3c7778: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C777Cu;
        goto label_3c777c;
    }
    ctx->pc = 0x3C7774u;
    {
        const bool branch_taken_0x3c7774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7774) {
            ctx->pc = 0x3C7778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7774u;
            // 0x3c7778: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7788u;
            goto label_3c7788;
        }
    }
    ctx->pc = 0x3C777Cu;
label_3c777c:
    // 0x3c777c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c7780:
    // 0x3c7780: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3c7780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3c7784:
    // 0x3c7784: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3c7784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c7788:
    // 0x3c7788: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x3c7788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
label_3c778c:
    // 0x3c778c: 0xae6200b4  sw          $v0, 0xB4($s3)
    ctx->pc = 0x3c778cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
label_3c7790:
    // 0x3c7790: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3c7790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c7794:
    // 0x3c7794: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_3c7798:
    if (ctx->pc == 0x3C7798u) {
        ctx->pc = 0x3C7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7794u;
        // 0x3c7798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C779Cu;
        goto label_3c779c;
    }
    ctx->pc = 0x3C7794u;
    {
        const bool branch_taken_0x3c7794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7794u;
        // 0x3c7798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7794) {
            ctx->pc = 0x3C77C8u;
            goto label_3c77c8;
        }
    }
    ctx->pc = 0x3C779Cu;
label_3c779c:
    // 0x3c779c: 0xae6000bc  sw          $zero, 0xBC($s3)
    ctx->pc = 0x3c779cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
label_3c77a0:
    // 0x3c77a0: 0x3c024d4d  lui         $v0, 0x4D4D
    ctx->pc = 0x3c77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19789 << 16));
label_3c77a4:
    // 0x3c77a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c77a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c77a8:
    // 0x3c77a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c77a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c77ac:
    // 0x3c77ac: 0x34424d90  ori         $v0, $v0, 0x4D90
    ctx->pc = 0x3c77acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19856);
label_3c77b0:
    // 0x3c77b0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3c77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c77b4:
    // 0x3c77b4: 0xae6200b4  sw          $v0, 0xB4($s3)
    ctx->pc = 0x3c77b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
label_3c77b8:
    // 0x3c77b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c77b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c77bc:
    // 0x3c77bc: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x3c77bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_3c77c0:
    // 0x3c77c0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3c77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c77c4:
    // 0x3c77c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c77c8:
    // 0x3c77c8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3c77cc:
    if (ctx->pc == 0x3C77CCu) {
        ctx->pc = 0x3C77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C77C8u;
        // 0x3c77cc: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C77D0u;
        goto label_3c77d0;
    }
    ctx->pc = 0x3C77C8u;
    {
        const bool branch_taken_0x3c77c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c77c8) {
            ctx->pc = 0x3C77CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C77C8u;
            // 0x3c77cc: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C77DCu;
            goto label_3c77dc;
        }
    }
    ctx->pc = 0x3C77D0u;
label_3c77d0:
    // 0x3c77d0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3c77d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c77d4:
    // 0x3c77d4: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x3c77d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_3c77d8:
    // 0x3c77d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3c77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c77dc:
    // 0x3c77dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c77e0:
    // 0x3c77e0: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_3c77e4:
    if (ctx->pc == 0x3C77E4u) {
        ctx->pc = 0x3C77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C77E0u;
        // 0x3c77e4: 0xae6000b4  sw          $zero, 0xB4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C77E8u;
        goto label_3c77e8;
    }
    ctx->pc = 0x3C77E0u;
    {
        const bool branch_taken_0x3c77e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c77e0) {
            ctx->pc = 0x3C77E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C77E0u;
            // 0x3c77e4: 0xae6000b4  sw          $zero, 0xB4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C77E8u;
            goto label_3c77e8;
        }
    }
    ctx->pc = 0x3C77E8u;
label_3c77e8:
    // 0x3c77e8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3c77e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c77ec:
    // 0x3c77ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c77ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c77f0:
    // 0x3c77f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c77f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c77f4:
    // 0x3c77f4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3c77f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_3c77f8:
    // 0x3c77f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3c77f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c77fc:
    // 0x3c77fc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3c77fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c7800:
    // 0x3c7800: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3c7800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c7804:
    // 0x3c7804: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3c7804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c7808:
    // 0x3c7808: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c7808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c780c:
    // 0x3c780c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c780cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c7810:
    // 0x3c7810: 0x3e00008  jr          $ra
label_3c7814:
    if (ctx->pc == 0x3C7814u) {
        ctx->pc = 0x3C7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7810u;
        // 0x3c7814: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7818u;
        goto label_fallthrough_0x3c7810;
    }
    ctx->pc = 0x3C7810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7810u;
        // 0x3c7814: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c7810:
    ctx->pc = 0x3C7818u;
}
