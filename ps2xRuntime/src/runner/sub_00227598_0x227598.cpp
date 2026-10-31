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

// Function: sub_00227598
// Address: 0x227598 - 0x227738
void sub_00227598_0x227598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227598_0x227598");
#endif

    switch (ctx->pc) {
        case 0x227598u: goto label_227598;
        case 0x22759cu: goto label_22759c;
        case 0x2275a0u: goto label_2275a0;
        case 0x2275a4u: goto label_2275a4;
        case 0x2275a8u: goto label_2275a8;
        case 0x2275acu: goto label_2275ac;
        case 0x2275b0u: goto label_2275b0;
        case 0x2275b4u: goto label_2275b4;
        case 0x2275b8u: goto label_2275b8;
        case 0x2275bcu: goto label_2275bc;
        case 0x2275c0u: goto label_2275c0;
        case 0x2275c4u: goto label_2275c4;
        case 0x2275c8u: goto label_2275c8;
        case 0x2275ccu: goto label_2275cc;
        case 0x2275d0u: goto label_2275d0;
        case 0x2275d4u: goto label_2275d4;
        case 0x2275d8u: goto label_2275d8;
        case 0x2275dcu: goto label_2275dc;
        case 0x2275e0u: goto label_2275e0;
        case 0x2275e4u: goto label_2275e4;
        case 0x2275e8u: goto label_2275e8;
        case 0x2275ecu: goto label_2275ec;
        case 0x2275f0u: goto label_2275f0;
        case 0x2275f4u: goto label_2275f4;
        case 0x2275f8u: goto label_2275f8;
        case 0x2275fcu: goto label_2275fc;
        case 0x227600u: goto label_227600;
        case 0x227604u: goto label_227604;
        case 0x227608u: goto label_227608;
        case 0x22760cu: goto label_22760c;
        case 0x227610u: goto label_227610;
        case 0x227614u: goto label_227614;
        case 0x227618u: goto label_227618;
        case 0x22761cu: goto label_22761c;
        case 0x227620u: goto label_227620;
        case 0x227624u: goto label_227624;
        case 0x227628u: goto label_227628;
        case 0x22762cu: goto label_22762c;
        case 0x227630u: goto label_227630;
        case 0x227634u: goto label_227634;
        case 0x227638u: goto label_227638;
        case 0x22763cu: goto label_22763c;
        case 0x227640u: goto label_227640;
        case 0x227644u: goto label_227644;
        case 0x227648u: goto label_227648;
        case 0x22764cu: goto label_22764c;
        case 0x227650u: goto label_227650;
        case 0x227654u: goto label_227654;
        case 0x227658u: goto label_227658;
        case 0x22765cu: goto label_22765c;
        case 0x227660u: goto label_227660;
        case 0x227664u: goto label_227664;
        case 0x227668u: goto label_227668;
        case 0x22766cu: goto label_22766c;
        case 0x227670u: goto label_227670;
        case 0x227674u: goto label_227674;
        case 0x227678u: goto label_227678;
        case 0x22767cu: goto label_22767c;
        case 0x227680u: goto label_227680;
        case 0x227684u: goto label_227684;
        case 0x227688u: goto label_227688;
        case 0x22768cu: goto label_22768c;
        case 0x227690u: goto label_227690;
        case 0x227694u: goto label_227694;
        case 0x227698u: goto label_227698;
        case 0x22769cu: goto label_22769c;
        case 0x2276a0u: goto label_2276a0;
        case 0x2276a4u: goto label_2276a4;
        case 0x2276a8u: goto label_2276a8;
        case 0x2276acu: goto label_2276ac;
        case 0x2276b0u: goto label_2276b0;
        case 0x2276b4u: goto label_2276b4;
        case 0x2276b8u: goto label_2276b8;
        case 0x2276bcu: goto label_2276bc;
        case 0x2276c0u: goto label_2276c0;
        case 0x2276c4u: goto label_2276c4;
        case 0x2276c8u: goto label_2276c8;
        case 0x2276ccu: goto label_2276cc;
        case 0x2276d0u: goto label_2276d0;
        case 0x2276d4u: goto label_2276d4;
        case 0x2276d8u: goto label_2276d8;
        case 0x2276dcu: goto label_2276dc;
        case 0x2276e0u: goto label_2276e0;
        case 0x2276e4u: goto label_2276e4;
        case 0x2276e8u: goto label_2276e8;
        case 0x2276ecu: goto label_2276ec;
        case 0x2276f0u: goto label_2276f0;
        case 0x2276f4u: goto label_2276f4;
        case 0x2276f8u: goto label_2276f8;
        case 0x2276fcu: goto label_2276fc;
        case 0x227700u: goto label_227700;
        case 0x227704u: goto label_227704;
        case 0x227708u: goto label_227708;
        case 0x22770cu: goto label_22770c;
        case 0x227710u: goto label_227710;
        case 0x227714u: goto label_227714;
        case 0x227718u: goto label_227718;
        case 0x22771cu: goto label_22771c;
        case 0x227720u: goto label_227720;
        case 0x227724u: goto label_227724;
        case 0x227728u: goto label_227728;
        case 0x22772cu: goto label_22772c;
        case 0x227730u: goto label_227730;
        case 0x227734u: goto label_227734;
        default: break;
    }

    ctx->pc = 0x227598u;

label_227598:
    // 0x227598: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x227598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_22759c:
    // 0x22759c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x22759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2275a0:
    // 0x2275a0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2275a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_2275a4:
    // 0x2275a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2275a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2275a8:
    // 0x2275a8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2275a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2275ac:
    // 0x2275ac: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2275acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2275b0:
    // 0x2275b0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2275b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2275b4:
    // 0x2275b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2275b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2275b8:
    // 0x2275b8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2275b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2275bc:
    // 0x2275bc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2275bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2275c0:
    // 0x2275c0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2275c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2275c4:
    // 0x2275c4: 0x460c6542  mul.s       $f21, $f12, $f12
    ctx->pc = 0x2275c4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2275c8:
    // 0x2275c8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2275c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2275cc:
    // 0x2275cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2275ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2275d0:
    // 0x2275d0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2275d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2275d4:
    // 0x2275d4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2275d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2275d8:
    // 0x2275d8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2275d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2275dc:
    // 0x2275dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2275dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2275e0:
    // 0x2275e0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2275e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2275e4:
    // 0x2275e4: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2275e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_2275e8:
    // 0x2275e8: 0xc08a61a  jal         func_229868
label_2275ec:
    if (ctx->pc == 0x2275ECu) {
        ctx->pc = 0x2275ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275E8u;
        // 0x2275ec: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275F0u;
        goto label_2275f0;
    }
    ctx->pc = 0x2275E8u;
    SET_GPR_U32(ctx, 31, 0x2275F0u);
    ctx->pc = 0x2275ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275E8u;
    // 0x2275ec: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2275E8u, 0x2275F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275F0u;
label_2275f0:
    // 0x2275f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2275f4:
    if (ctx->pc == 0x2275F4u) {
        ctx->pc = 0x2275F8u;
        goto label_2275f8;
    }
    ctx->pc = 0x2275F0u;
    {
        const bool branch_taken_0x2275f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2275f0) {
            ctx->pc = 0x227604u;
            goto label_227604;
        }
    }
    ctx->pc = 0x2275F8u;
label_2275f8:
    // 0x2275f8: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x2275f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_2275fc:
    // 0x2275fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_227600:
    if (ctx->pc == 0x227600u) {
        ctx->pc = 0x227600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275FCu;
        // 0x227600: 0xc45400d8  lwc1        $f20, 0xD8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x227604u;
        goto label_227604;
    }
    ctx->pc = 0x2275FCu;
    {
        const bool branch_taken_0x2275fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275FCu;
        // 0x227600: 0xc45400d8  lwc1        $f20, 0xD8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275fc) {
            ctx->pc = 0x227608u;
            goto label_227608;
        }
    }
    ctx->pc = 0x227604u;
label_227604:
    // 0x227604: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x227604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_227608:
    // 0x227608: 0x0  nop
    ctx->pc = 0x227608u;
    // NOP
label_22760c:
    // 0x22760c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x22760cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_227610:
    // 0x227610: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x227610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_227614:
    // 0x227614: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x227614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_227618:
    // 0x227618: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x227618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_22761c:
    // 0x22761c: 0x24574b00  addiu       $s7, $v0, 0x4B00
    ctx->pc = 0x22761cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_227620:
    // 0x227620: 0x24765390  addiu       $s6, $v1, 0x5390
    ctx->pc = 0x227620u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 21392));
label_227624:
    // 0x227624: 0x24900c80  addiu       $s0, $a0, 0xC80
    ctx->pc = 0x227624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
label_227628:
    // 0x227628: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x227628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_22762c:
    // 0x22762c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22762cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227630:
    // 0x227630: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x227630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_227634:
    // 0x227634: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_227638:
    if (ctx->pc == 0x227638u) {
        ctx->pc = 0x227638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227634u;
        // 0x227638: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22763Cu;
        goto label_22763c;
    }
    ctx->pc = 0x227634u;
    {
        const bool branch_taken_0x227634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227634) {
            ctx->pc = 0x227638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227634u;
            // 0x227638: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2276E4u;
            goto label_2276e4;
        }
    }
    ctx->pc = 0x22763Cu;
label_22763c:
    // 0x22763c: 0x12130028  beq         $s0, $s3, . + 4 + (0x28 << 2)
label_227640:
    if (ctx->pc == 0x227640u) {
        ctx->pc = 0x227640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22763Cu;
        // 0x227640: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227644u;
        goto label_227644;
    }
    ctx->pc = 0x22763Cu;
    {
        const bool branch_taken_0x22763c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x227640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22763Cu;
        // 0x227640: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22763c) {
            ctx->pc = 0x2276E0u;
            goto label_2276e0;
        }
    }
    ctx->pc = 0x227644u;
label_227644:
    // 0x227644: 0x8c6201f8  lw          $v0, 0x1F8($v1)
    ctx->pc = 0x227644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
label_227648:
    // 0x227648: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
label_22764c:
    if (ctx->pc == 0x22764Cu) {
        ctx->pc = 0x22764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227648u;
        // 0x22764c: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227650u;
        goto label_227650;
    }
    ctx->pc = 0x227648u;
    {
        const bool branch_taken_0x227648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227648u;
        // 0x22764c: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227648) {
            ctx->pc = 0x2276E0u;
            goto label_2276e0;
        }
    }
    ctx->pc = 0x227650u;
label_227650:
    // 0x227650: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x227650u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_227654:
    // 0x227654: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x227654u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_227658:
    // 0x227658: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x227658u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_22765c:
    // 0x22765c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x22765cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_227660:
    // 0x227660: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x227660u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_227664:
    // 0x227664: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x227664u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_227668:
    // 0x227668: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x227668u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_22766c:
    // 0x22766c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x22766cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_227670:
    // 0x227670: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x227670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_227674:
    // 0x227674: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x227674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_227678:
    // 0x227678: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x227678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_22767c:
    // 0x22767c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x22767cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_227680:
    // 0x227680: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x227680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_227684:
    // 0x227684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227688:
    // 0x227688: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x227688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_22768c:
    // 0x22768c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x22768cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_227690:
    // 0x227690: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x227690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_227694:
    // 0x227694: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_227698:
    if (ctx->pc == 0x227698u) {
        ctx->pc = 0x227698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227694u;
        // 0x227698: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22769Cu;
        goto label_22769c;
    }
    ctx->pc = 0x227694u;
    {
        const bool branch_taken_0x227694 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x227698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227694u;
        // 0x227698: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227694) {
            ctx->pc = 0x2276E0u;
            goto label_2276e0;
        }
    }
    ctx->pc = 0x22769Cu;
label_22769c:
    // 0x22769c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22769cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2276a0:
    // 0x2276a0: 0x0  nop
    ctx->pc = 0x2276a0u;
    // NOP
label_2276a4:
    // 0x2276a4: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_2276a8:
    if (ctx->pc == 0x2276A8u) {
        ctx->pc = 0x2276A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276A4u;
        // 0x2276a8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276ACu;
        goto label_2276ac;
    }
    ctx->pc = 0x2276A4u;
    {
        const bool branch_taken_0x2276a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2276a4) {
            ctx->pc = 0x2276A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2276A4u;
            // 0x2276a8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2276E4u;
            goto label_2276e4;
        }
    }
    ctx->pc = 0x2276ACu;
label_2276ac:
    // 0x2276ac: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2276b0:
    if (ctx->pc == 0x2276B0u) {
        ctx->pc = 0x2276B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276ACu;
        // 0x2276b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276B4u;
        goto label_2276b4;
    }
    ctx->pc = 0x2276ACu;
    {
        const bool branch_taken_0x2276ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2276B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276ACu;
        // 0x2276b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276ac) {
            ctx->pc = 0x2276C4u;
            goto label_2276c4;
        }
    }
    ctx->pc = 0x2276B4u;
label_2276b4:
    // 0x2276b4: 0x2a0f809  jalr        $s5
label_2276b8:
    if (ctx->pc == 0x2276B8u) {
        ctx->pc = 0x2276B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276B4u;
        // 0x2276b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276BCu;
        goto label_2276bc;
    }
    ctx->pc = 0x2276B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2276BCu);
        ctx->pc = 0x2276B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276B4u;
        // 0x2276b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2276B4u, 0x2276BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2276BCu;
label_2276bc:
    // 0x2276bc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2276c0:
    if (ctx->pc == 0x2276C0u) {
        ctx->pc = 0x2276C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276BCu;
        // 0x2276c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276C4u;
        goto label_2276c4;
    }
    ctx->pc = 0x2276BCu;
    {
        const bool branch_taken_0x2276bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2276bc) {
            ctx->pc = 0x2276C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2276BCu;
            // 0x2276c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2276E4u;
            goto label_2276e4;
        }
    }
    ctx->pc = 0x2276C4u;
label_2276c4:
    // 0x2276c4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2276c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2276c8:
    // 0x2276c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2276c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2276cc:
    // 0x2276cc: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2276ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_2276d0:
    // 0x2276d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2276d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2276d4:
    // 0x2276d4: 0x244182b  sltu        $v1, $s2, $a0
    ctx->pc = 0x2276d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2276d8:
    // 0x2276d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2276dc:
    if (ctx->pc == 0x2276DCu) {
        ctx->pc = 0x2276DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276D8u;
        // 0x2276dc: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276E0u;
        goto label_2276e0;
    }
    ctx->pc = 0x2276D8u;
    {
        const bool branch_taken_0x2276d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2276DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276D8u;
        // 0x2276dc: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276d8) {
            ctx->pc = 0x2276F8u;
            goto label_2276f8;
        }
    }
    ctx->pc = 0x2276E0u;
label_2276e0:
    // 0x2276e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2276e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2276e4:
    // 0x2276e4: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x2276e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_2276e8:
    // 0x2276e8: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x2276e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_2276ec:
    // 0x2276ec: 0x2e82003c  sltiu       $v0, $s4, 0x3C
    ctx->pc = 0x2276ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_2276f0:
    // 0x2276f0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_2276f4:
    if (ctx->pc == 0x2276F4u) {
        ctx->pc = 0x2276F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276F0u;
        // 0x2276f4: 0x261006d0  addiu       $s0, $s0, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276F8u;
        goto label_2276f8;
    }
    ctx->pc = 0x2276F0u;
    {
        const bool branch_taken_0x2276f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2276F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276F0u;
        // 0x2276f4: 0x261006d0  addiu       $s0, $s0, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276f0) {
            ctx->pc = 0x227630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227630;
        }
    }
    ctx->pc = 0x2276F8u;
label_2276f8:
    // 0x2276f8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2276f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2276fc:
    // 0x2276fc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2276fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_227700:
    // 0x227700: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x227700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_227704:
    // 0x227704: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x227704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_227708:
    // 0x227708: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x227708u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22770c:
    // 0x22770c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x22770cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_227710:
    // 0x227710: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x227710u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_227714:
    // 0x227714: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x227714u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_227718:
    // 0x227718: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x227718u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22771c:
    // 0x22771c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x22771cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_227720:
    // 0x227720: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x227720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_227724:
    // 0x227724: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x227724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_227728:
    // 0x227728: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x227728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22772c:
    // 0x22772c: 0x3e00008  jr          $ra
label_227730:
    if (ctx->pc == 0x227730u) {
        ctx->pc = 0x227730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22772Cu;
        // 0x227730: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227734u;
        goto label_227734;
    }
    ctx->pc = 0x22772Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22772Cu;
        // 0x227730: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22772Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227734u;
label_227734:
    // 0x227734: 0x0  nop
    ctx->pc = 0x227734u;
    // NOP
    ctx->pc = 0x227738u;
}
