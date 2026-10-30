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

// Function: sub_00122548
// Address: 0x122548 - 0x122728
void sub_00122548_0x122548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122548_0x122548");
#endif

    switch (ctx->pc) {
        case 0x122548u: goto label_122548;
        case 0x12254cu: goto label_12254c;
        case 0x122550u: goto label_122550;
        case 0x122554u: goto label_122554;
        case 0x122558u: goto label_122558;
        case 0x12255cu: goto label_12255c;
        case 0x122560u: goto label_122560;
        case 0x122564u: goto label_122564;
        case 0x122568u: goto label_122568;
        case 0x12256cu: goto label_12256c;
        case 0x122570u: goto label_122570;
        case 0x122574u: goto label_122574;
        case 0x122578u: goto label_122578;
        case 0x12257cu: goto label_12257c;
        case 0x122580u: goto label_122580;
        case 0x122584u: goto label_122584;
        case 0x122588u: goto label_122588;
        case 0x12258cu: goto label_12258c;
        case 0x122590u: goto label_122590;
        case 0x122594u: goto label_122594;
        case 0x122598u: goto label_122598;
        case 0x12259cu: goto label_12259c;
        case 0x1225a0u: goto label_1225a0;
        case 0x1225a4u: goto label_1225a4;
        case 0x1225a8u: goto label_1225a8;
        case 0x1225acu: goto label_1225ac;
        case 0x1225b0u: goto label_1225b0;
        case 0x1225b4u: goto label_1225b4;
        case 0x1225b8u: goto label_1225b8;
        case 0x1225bcu: goto label_1225bc;
        case 0x1225c0u: goto label_1225c0;
        case 0x1225c4u: goto label_1225c4;
        case 0x1225c8u: goto label_1225c8;
        case 0x1225ccu: goto label_1225cc;
        case 0x1225d0u: goto label_1225d0;
        case 0x1225d4u: goto label_1225d4;
        case 0x1225d8u: goto label_1225d8;
        case 0x1225dcu: goto label_1225dc;
        case 0x1225e0u: goto label_1225e0;
        case 0x1225e4u: goto label_1225e4;
        case 0x1225e8u: goto label_1225e8;
        case 0x1225ecu: goto label_1225ec;
        case 0x1225f0u: goto label_1225f0;
        case 0x1225f4u: goto label_1225f4;
        case 0x1225f8u: goto label_1225f8;
        case 0x1225fcu: goto label_1225fc;
        case 0x122600u: goto label_122600;
        case 0x122604u: goto label_122604;
        case 0x122608u: goto label_122608;
        case 0x12260cu: goto label_12260c;
        case 0x122610u: goto label_122610;
        case 0x122614u: goto label_122614;
        case 0x122618u: goto label_122618;
        case 0x12261cu: goto label_12261c;
        case 0x122620u: goto label_122620;
        case 0x122624u: goto label_122624;
        case 0x122628u: goto label_122628;
        case 0x12262cu: goto label_12262c;
        case 0x122630u: goto label_122630;
        case 0x122634u: goto label_122634;
        case 0x122638u: goto label_122638;
        case 0x12263cu: goto label_12263c;
        case 0x122640u: goto label_122640;
        case 0x122644u: goto label_122644;
        case 0x122648u: goto label_122648;
        case 0x12264cu: goto label_12264c;
        case 0x122650u: goto label_122650;
        case 0x122654u: goto label_122654;
        case 0x122658u: goto label_122658;
        case 0x12265cu: goto label_12265c;
        case 0x122660u: goto label_122660;
        case 0x122664u: goto label_122664;
        case 0x122668u: goto label_122668;
        case 0x12266cu: goto label_12266c;
        case 0x122670u: goto label_122670;
        case 0x122674u: goto label_122674;
        case 0x122678u: goto label_122678;
        case 0x12267cu: goto label_12267c;
        case 0x122680u: goto label_122680;
        case 0x122684u: goto label_122684;
        case 0x122688u: goto label_122688;
        case 0x12268cu: goto label_12268c;
        case 0x122690u: goto label_122690;
        case 0x122694u: goto label_122694;
        case 0x122698u: goto label_122698;
        case 0x12269cu: goto label_12269c;
        case 0x1226a0u: goto label_1226a0;
        case 0x1226a4u: goto label_1226a4;
        case 0x1226a8u: goto label_1226a8;
        case 0x1226acu: goto label_1226ac;
        case 0x1226b0u: goto label_1226b0;
        case 0x1226b4u: goto label_1226b4;
        case 0x1226b8u: goto label_1226b8;
        case 0x1226bcu: goto label_1226bc;
        case 0x1226c0u: goto label_1226c0;
        case 0x1226c4u: goto label_1226c4;
        case 0x1226c8u: goto label_1226c8;
        case 0x1226ccu: goto label_1226cc;
        case 0x1226d0u: goto label_1226d0;
        case 0x1226d4u: goto label_1226d4;
        case 0x1226d8u: goto label_1226d8;
        case 0x1226dcu: goto label_1226dc;
        case 0x1226e0u: goto label_1226e0;
        case 0x1226e4u: goto label_1226e4;
        case 0x1226e8u: goto label_1226e8;
        case 0x1226ecu: goto label_1226ec;
        case 0x1226f0u: goto label_1226f0;
        case 0x1226f4u: goto label_1226f4;
        case 0x1226f8u: goto label_1226f8;
        case 0x1226fcu: goto label_1226fc;
        case 0x122700u: goto label_122700;
        case 0x122704u: goto label_122704;
        case 0x122708u: goto label_122708;
        case 0x12270cu: goto label_12270c;
        case 0x122710u: goto label_122710;
        case 0x122714u: goto label_122714;
        case 0x122718u: goto label_122718;
        case 0x12271cu: goto label_12271c;
        case 0x122720u: goto label_122720;
        case 0x122724u: goto label_122724;
        default: break;
    }

    ctx->pc = 0x122548u;

label_122548:
    // 0x122548: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x122548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_12254c:
    // 0x12254c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x12254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_122550:
    // 0x122550: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x122550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_122554:
    // 0x122554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x122554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122558:
    // 0x122558: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x122558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_12255c:
    // 0x12255c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12255cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122560:
    // 0x122560: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x122560u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_122564:
    // 0x122564: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x122564u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_122568:
    // 0x122568: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x122568u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_12256c:
    // 0x12256c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x12256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_122570:
    // 0x122570: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x122570u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_122574:
    // 0x122574: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x122574u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_122578:
    // 0x122578: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12257c:
    // 0x12257c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x12257cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_122580:
    // 0x122580: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x122580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_122584:
    // 0x122584: 0x40f809  jalr        $v0
label_122588:
    if (ctx->pc == 0x122588u) {
        ctx->pc = 0x122588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122584u;
        // 0x122588: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12258Cu;
        goto label_12258c;
    }
    ctx->pc = 0x122584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12258Cu);
        ctx->pc = 0x122588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122584u;
        // 0x122588: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122584u, 0x12258Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12258Cu;
label_12258c:
    // 0x12258c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12258cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122590:
    // 0x122590: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x122590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122594:
    // 0x122594: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x122594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_122598:
    // 0x122598: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x122598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_12259c:
    // 0x12259c: 0x60f809  jalr        $v1
label_1225a0:
    if (ctx->pc == 0x1225A0u) {
        ctx->pc = 0x1225A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12259Cu;
        // 0x1225a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1225A4u;
        goto label_1225a4;
    }
    ctx->pc = 0x12259Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1225A4u);
        ctx->pc = 0x1225A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12259Cu;
        // 0x1225a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12259Cu, 0x1225A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1225A4u;
label_1225a4:
    // 0x1225a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1225a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1225a8:
    // 0x1225a8: 0x4600ad69  min.s       $f21, $f21, $f0
    ctx->pc = 0x1225a8u;
    ctx->f[21] = std::min(ctx->f[21], ctx->f[0]);
label_1225ac:
    // 0x1225ac: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x1225acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1225b0:
    // 0x1225b0: 0x0  nop
    ctx->pc = 0x1225b0u;
    // NOP
label_1225b4:
    // 0x1225b4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_1225b8:
    if (ctx->pc == 0x1225B8u) {
        ctx->pc = 0x1225B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225B4u;
        // 0x1225b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1225BCu;
        goto label_1225bc;
    }
    ctx->pc = 0x1225B4u;
    {
        const bool branch_taken_0x1225b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1225b4) {
            ctx->pc = 0x1225B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1225B4u;
            // 0x1225b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1225D8u;
            goto label_1225d8;
        }
    }
    ctx->pc = 0x1225BCu;
label_1225bc:
    // 0x1225bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1225bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1225c0:
    // 0x1225c0: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x1225c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_1225c4:
    // 0x1225c4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1225c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1225c8:
    // 0x1225c8: 0x60f809  jalr        $v1
label_1225cc:
    if (ctx->pc == 0x1225CCu) {
        ctx->pc = 0x1225CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225C8u;
        // 0x1225cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1225D0u;
        goto label_1225d0;
    }
    ctx->pc = 0x1225C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1225D0u);
        ctx->pc = 0x1225CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225C8u;
        // 0x1225cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1225C8u, 0x1225D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1225D0u;
label_1225d0:
    // 0x1225d0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1225d0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1225d4:
    // 0x1225d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1225d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1225d8:
    // 0x1225d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1225d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1225dc:
    // 0x1225dc: 0xc136afa  jal         func_4DABE8
label_1225e0:
    if (ctx->pc == 0x1225E0u) {
        ctx->pc = 0x1225E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225DCu;
        // 0x1225e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1225E4u;
        goto label_1225e4;
    }
    ctx->pc = 0x1225DCu;
    SET_GPR_U32(ctx, 31, 0x1225E4u);
    ctx->pc = 0x1225E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225DCu;
    // 0x1225e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1225DCu, 0x1225E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225E4u;
label_1225e4:
    // 0x1225e4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1225e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1225e8:
    // 0x1225e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1225e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1225ec:
    // 0x1225ec: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1225ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1225f0:
    // 0x1225f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1225f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1225f4:
    // 0x1225f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1225f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1225f8:
    // 0x1225f8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1225f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1225fc:
    // 0x1225fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1225fcu;
    // VWAITQ (Q already resolved in this runtime)
label_122600:
    // 0x122600: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x122600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_122604:
    // 0x122604: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x122604u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_122608:
    // 0x122608: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x122608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12260c:
    // 0x12260c: 0x0  nop
    ctx->pc = 0x12260cu;
    // NOP
label_122610:
    // 0x122610: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x122610u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_122614:
    // 0x122614: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x122614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122618:
    // 0x122618: 0x0  nop
    ctx->pc = 0x122618u;
    // NOP
label_12261c:
    // 0x12261c: 0x45010037  bc1t        . + 4 + (0x37 << 2)
label_122620:
    if (ctx->pc == 0x122620u) {
        ctx->pc = 0x122620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12261Cu;
        // 0x122620: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122624u;
        goto label_122624;
    }
    ctx->pc = 0x12261Cu;
    {
        const bool branch_taken_0x12261c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x122620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12261Cu;
        // 0x122620: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12261c) {
            ctx->pc = 0x1226FCu;
            goto label_1226fc;
        }
    }
    ctx->pc = 0x122624u;
label_122624:
    // 0x122624: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122628:
    // 0x122628: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12262c:
    // 0x12262c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x12262cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_122630:
    // 0x122630: 0x84640168  lh          $a0, 0x168($v1)
    ctx->pc = 0x122630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 360)));
label_122634:
    // 0x122634: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x122634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
label_122638:
    // 0x122638: 0x40f809  jalr        $v0
label_12263c:
    if (ctx->pc == 0x12263Cu) {
        ctx->pc = 0x12263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122638u;
        // 0x12263c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122640u;
        goto label_122640;
    }
    ctx->pc = 0x122638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122640u);
        ctx->pc = 0x12263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122638u;
        // 0x12263c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122638u, 0x122640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122640u;
label_122640:
    // 0x122640: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122644:
    // 0x122644: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
label_122648:
    if (ctx->pc == 0x122648u) {
        ctx->pc = 0x122648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122644u;
        // 0x122648: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12264Cu;
        goto label_12264c;
    }
    ctx->pc = 0x122644u;
    {
        const bool branch_taken_0x122644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x122648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122644u;
        // 0x122648: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122644) {
            ctx->pc = 0x1226FCu;
            goto label_1226fc;
        }
    }
    ctx->pc = 0x12264Cu;
label_12264c:
    // 0x12264c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x12264cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_122650:
    // 0x122650: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x122650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
label_122654:
    // 0x122654: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x122654u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_122658:
    // 0x122658: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x122658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12265c:
    // 0x12265c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12265cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_122660:
    // 0x122660: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x122660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_122664:
    // 0x122664: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x122664u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_122668:
    // 0x122668: 0x4a0003bf  vwaitq
    ctx->pc = 0x122668u;
    // VWAITQ (Q already resolved in this runtime)
label_12266c:
    // 0x12266c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x12266cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_122670:
    // 0x122670: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x122670u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_122674:
    // 0x122674: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x122674u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
label_122678:
    // 0x122678: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x122678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12267c:
    // 0x12267c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12267cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_122680:
    // 0x122680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122684:
    // 0x122684: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x122684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_122688:
    // 0x122688: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x122688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12268c:
    // 0x12268c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x12268cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_122690:
    // 0x122690: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x122690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_122694:
    // 0x122694: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x122694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_122698:
    // 0x122698: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x122698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_12269c:
    // 0x12269c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1226a0:
    // 0x1226a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1226a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1226a4:
    // 0x1226a4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1226a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_1226a8:
    // 0x1226a8: 0x25238838  addiu       $v1, $t1, -0x77C8
    ctx->pc = 0x1226a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936632));
label_1226ac:
    // 0x1226ac: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x1226acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1226b0:
    // 0x1226b0: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x1226b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1226b4:
    // 0x1226b4: 0x686b000f  ldl         $t3, 0xF($v1)
    ctx->pc = 0x1226b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_1226b8:
    // 0x1226b8: 0x6c6b0008  ldr         $t3, 0x8($v1)
    ctx->pc = 0x1226b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_1226bc:
    // 0x1226bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1226bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1226c0:
    // 0x1226c0: 0xb3aa00a7  sdl         $t2, 0xA7($sp)
    ctx->pc = 0x1226c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1226c4:
    // 0x1226c4: 0xb7aa00a0  sdr         $t2, 0xA0($sp)
    ctx->pc = 0x1226c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1226c8:
    // 0x1226c8: 0xb3ab00af  sdl         $t3, 0xAF($sp)
    ctx->pc = 0x1226c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1226cc:
    // 0x1226cc: 0xb7ab00a8  sdr         $t3, 0xA8($sp)
    ctx->pc = 0x1226ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1226d0:
    // 0x1226d0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1226d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1226d4:
    // 0x1226d4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1226d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1226d8:
    // 0x1226d8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1226d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1226dc:
    // 0x1226dc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1226dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1226e0:
    // 0x1226e0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1226e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_1226e4:
    // 0x1226e4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1226e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1226e8:
    // 0x1226e8: 0xc0d4336  jal         func_350CD8
label_1226ec:
    if (ctx->pc == 0x1226ECu) {
        ctx->pc = 0x1226ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226E8u;
        // 0x1226ec: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1226F0u;
        goto label_1226f0;
    }
    ctx->pc = 0x1226E8u;
    SET_GPR_U32(ctx, 31, 0x1226F0u);
    ctx->pc = 0x1226ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226E8u;
    // 0x1226ec: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x1226E8u, 0x1226F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226F0u;
label_1226f0:
    // 0x1226f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1226f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1226f4:
    // 0x1226f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1226f8:
    if (ctx->pc == 0x1226F8u) {
        ctx->pc = 0x1226F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226F4u;
        // 0x1226f8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1226FCu;
        goto label_1226fc;
    }
    ctx->pc = 0x1226F4u;
    {
        const bool branch_taken_0x1226f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226F4u;
        // 0x1226f8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226f4) {
            ctx->pc = 0x122700u;
            goto label_122700;
        }
    }
    ctx->pc = 0x1226FCu;
label_1226fc:
    // 0x1226fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1226fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122700:
    // 0x122700: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x122700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_122704:
    // 0x122704: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x122704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_122708:
    // 0x122708: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x122708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_12270c:
    // 0x12270c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x12270cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_122710:
    // 0x122710: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x122710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_122714:
    // 0x122714: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x122714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_122718:
    // 0x122718: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x122718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12271c:
    // 0x12271c: 0x3e00008  jr          $ra
label_122720:
    if (ctx->pc == 0x122720u) {
        ctx->pc = 0x122720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12271Cu;
        // 0x122720: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122724u;
        goto label_122724;
    }
    ctx->pc = 0x12271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12271Cu;
        // 0x122720: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12271Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122724u;
label_122724:
    // 0x122724: 0x0  nop
    ctx->pc = 0x122724u;
    // NOP
    ctx->pc = 0x122728u;
}
