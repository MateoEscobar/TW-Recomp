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

// Function: sub_00142368
// Address: 0x142368 - 0x142578
void sub_00142368_0x142368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142368_0x142368");
#endif

    switch (ctx->pc) {
        case 0x142368u: goto label_142368;
        case 0x14236cu: goto label_14236c;
        case 0x142370u: goto label_142370;
        case 0x142374u: goto label_142374;
        case 0x142378u: goto label_142378;
        case 0x14237cu: goto label_14237c;
        case 0x142380u: goto label_142380;
        case 0x142384u: goto label_142384;
        case 0x142388u: goto label_142388;
        case 0x14238cu: goto label_14238c;
        case 0x142390u: goto label_142390;
        case 0x142394u: goto label_142394;
        case 0x142398u: goto label_142398;
        case 0x14239cu: goto label_14239c;
        case 0x1423a0u: goto label_1423a0;
        case 0x1423a4u: goto label_1423a4;
        case 0x1423a8u: goto label_1423a8;
        case 0x1423acu: goto label_1423ac;
        case 0x1423b0u: goto label_1423b0;
        case 0x1423b4u: goto label_1423b4;
        case 0x1423b8u: goto label_1423b8;
        case 0x1423bcu: goto label_1423bc;
        case 0x1423c0u: goto label_1423c0;
        case 0x1423c4u: goto label_1423c4;
        case 0x1423c8u: goto label_1423c8;
        case 0x1423ccu: goto label_1423cc;
        case 0x1423d0u: goto label_1423d0;
        case 0x1423d4u: goto label_1423d4;
        case 0x1423d8u: goto label_1423d8;
        case 0x1423dcu: goto label_1423dc;
        case 0x1423e0u: goto label_1423e0;
        case 0x1423e4u: goto label_1423e4;
        case 0x1423e8u: goto label_1423e8;
        case 0x1423ecu: goto label_1423ec;
        case 0x1423f0u: goto label_1423f0;
        case 0x1423f4u: goto label_1423f4;
        case 0x1423f8u: goto label_1423f8;
        case 0x1423fcu: goto label_1423fc;
        case 0x142400u: goto label_142400;
        case 0x142404u: goto label_142404;
        case 0x142408u: goto label_142408;
        case 0x14240cu: goto label_14240c;
        case 0x142410u: goto label_142410;
        case 0x142414u: goto label_142414;
        case 0x142418u: goto label_142418;
        case 0x14241cu: goto label_14241c;
        case 0x142420u: goto label_142420;
        case 0x142424u: goto label_142424;
        case 0x142428u: goto label_142428;
        case 0x14242cu: goto label_14242c;
        case 0x142430u: goto label_142430;
        case 0x142434u: goto label_142434;
        case 0x142438u: goto label_142438;
        case 0x14243cu: goto label_14243c;
        case 0x142440u: goto label_142440;
        case 0x142444u: goto label_142444;
        case 0x142448u: goto label_142448;
        case 0x14244cu: goto label_14244c;
        case 0x142450u: goto label_142450;
        case 0x142454u: goto label_142454;
        case 0x142458u: goto label_142458;
        case 0x14245cu: goto label_14245c;
        case 0x142460u: goto label_142460;
        case 0x142464u: goto label_142464;
        case 0x142468u: goto label_142468;
        case 0x14246cu: goto label_14246c;
        case 0x142470u: goto label_142470;
        case 0x142474u: goto label_142474;
        case 0x142478u: goto label_142478;
        case 0x14247cu: goto label_14247c;
        case 0x142480u: goto label_142480;
        case 0x142484u: goto label_142484;
        case 0x142488u: goto label_142488;
        case 0x14248cu: goto label_14248c;
        case 0x142490u: goto label_142490;
        case 0x142494u: goto label_142494;
        case 0x142498u: goto label_142498;
        case 0x14249cu: goto label_14249c;
        case 0x1424a0u: goto label_1424a0;
        case 0x1424a4u: goto label_1424a4;
        case 0x1424a8u: goto label_1424a8;
        case 0x1424acu: goto label_1424ac;
        case 0x1424b0u: goto label_1424b0;
        case 0x1424b4u: goto label_1424b4;
        case 0x1424b8u: goto label_1424b8;
        case 0x1424bcu: goto label_1424bc;
        case 0x1424c0u: goto label_1424c0;
        case 0x1424c4u: goto label_1424c4;
        case 0x1424c8u: goto label_1424c8;
        case 0x1424ccu: goto label_1424cc;
        case 0x1424d0u: goto label_1424d0;
        case 0x1424d4u: goto label_1424d4;
        case 0x1424d8u: goto label_1424d8;
        case 0x1424dcu: goto label_1424dc;
        case 0x1424e0u: goto label_1424e0;
        case 0x1424e4u: goto label_1424e4;
        case 0x1424e8u: goto label_1424e8;
        case 0x1424ecu: goto label_1424ec;
        case 0x1424f0u: goto label_1424f0;
        case 0x1424f4u: goto label_1424f4;
        case 0x1424f8u: goto label_1424f8;
        case 0x1424fcu: goto label_1424fc;
        case 0x142500u: goto label_142500;
        case 0x142504u: goto label_142504;
        case 0x142508u: goto label_142508;
        case 0x14250cu: goto label_14250c;
        case 0x142510u: goto label_142510;
        case 0x142514u: goto label_142514;
        case 0x142518u: goto label_142518;
        case 0x14251cu: goto label_14251c;
        case 0x142520u: goto label_142520;
        case 0x142524u: goto label_142524;
        case 0x142528u: goto label_142528;
        case 0x14252cu: goto label_14252c;
        case 0x142530u: goto label_142530;
        case 0x142534u: goto label_142534;
        case 0x142538u: goto label_142538;
        case 0x14253cu: goto label_14253c;
        case 0x142540u: goto label_142540;
        case 0x142544u: goto label_142544;
        case 0x142548u: goto label_142548;
        case 0x14254cu: goto label_14254c;
        case 0x142550u: goto label_142550;
        case 0x142554u: goto label_142554;
        case 0x142558u: goto label_142558;
        case 0x14255cu: goto label_14255c;
        case 0x142560u: goto label_142560;
        case 0x142564u: goto label_142564;
        case 0x142568u: goto label_142568;
        case 0x14256cu: goto label_14256c;
        case 0x142570u: goto label_142570;
        case 0x142574u: goto label_142574;
        default: break;
    }

    ctx->pc = 0x142368u;

label_142368:
    // 0x142368: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x142368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_14236c:
    // 0x14236c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x14236cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_142370:
    // 0x142370: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x142370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_142374:
    // 0x142374: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x142374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_142378:
    // 0x142378: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x142378u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_14237c:
    // 0x14237c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_142380:
    // 0x142380: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x142380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_142384:
    // 0x142384: 0x4616a032  c.eq.s      $f20, $f22
    ctx->pc = 0x142384u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_142388:
    // 0x142388: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x142388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_14238c:
    // 0x14238c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14238cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_142390:
    // 0x142390: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x142390u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_142394:
    // 0x142394: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x142394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_142398:
    // 0x142398: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x142398u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_14239c:
    // 0x14239c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x14239cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_1423a0:
    // 0x1423a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1423a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1423a4:
    // 0x1423a4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1423a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1423a8:
    // 0x1423a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1423a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1423ac:
    // 0x1423ac: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x1423acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_1423b0:
    // 0x1423b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1423b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1423b4:
    // 0x1423b4: 0xae400340  sw          $zero, 0x340($s2)
    ctx->pc = 0x1423b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 832), GPR_U32(ctx, 0));
label_1423b8:
    // 0x1423b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1423bc:
    if (ctx->pc == 0x1423BCu) {
        ctx->pc = 0x1423BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423B8u;
        // 0x1423bc: 0xae5302e0  sw          $s3, 0x2E0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 736), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1423C0u;
        goto label_1423c0;
    }
    ctx->pc = 0x1423B8u;
    {
        const bool branch_taken_0x1423b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1423BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423B8u;
        // 0x1423bc: 0xae5302e0  sw          $s3, 0x2E0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 736), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423b8) {
            ctx->pc = 0x1423D8u;
            goto label_1423d8;
        }
    }
    ctx->pc = 0x1423C0u;
label_1423c0:
    // 0x1423c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1423c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1423c4:
    // 0x1423c4: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x1423c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_1423c8:
    // 0x1423c8: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x1423c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_1423cc:
    // 0x1423cc: 0x60f809  jalr        $v1
label_1423d0:
    if (ctx->pc == 0x1423D0u) {
        ctx->pc = 0x1423D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423CCu;
        // 0x1423d0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1423D4u;
        goto label_1423d4;
    }
    ctx->pc = 0x1423CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1423D4u);
        ctx->pc = 0x1423D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423CCu;
        // 0x1423d0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1423CCu, 0x1423D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1423D4u;
label_1423d4:
    // 0x1423d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1423d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1423d8:
    // 0x1423d8: 0x4616a832  c.eq.s      $f21, $f22
    ctx->pc = 0x1423d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1423dc:
    // 0x1423dc: 0x0  nop
    ctx->pc = 0x1423dcu;
    // NOP
label_1423e0:
    // 0x1423e0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_1423e4:
    if (ctx->pc == 0x1423E4u) {
        ctx->pc = 0x1423E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423E0u;
        // 0x1423e4: 0xe6540330  swc1        $f20, 0x330($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 816), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1423E8u;
        goto label_1423e8;
    }
    ctx->pc = 0x1423E0u;
    {
        const bool branch_taken_0x1423e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1423e0) {
            ctx->pc = 0x1423E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1423E0u;
            // 0x1423e4: 0xe6540330  swc1        $f20, 0x330($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 816), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x1423E8u;
label_1423e8:
    // 0x1423e8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1423e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1423ec:
    // 0x1423ec: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x1423ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_1423f0:
    // 0x1423f0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1423f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1423f4:
    // 0x1423f4: 0x60f809  jalr        $v1
label_1423f8:
    if (ctx->pc == 0x1423F8u) {
        ctx->pc = 0x1423F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423F4u;
        // 0x1423f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1423FCu;
        goto label_1423fc;
    }
    ctx->pc = 0x1423F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1423FCu);
        ctx->pc = 0x1423F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423F4u;
        // 0x1423f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1423F4u, 0x1423FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1423FCu;
label_1423fc:
    // 0x1423fc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1423fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_142400:
    // 0x142400: 0xe6540330  swc1        $f20, 0x330($s2)
    ctx->pc = 0x142400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 816), bits); }
label_142404:
    // 0x142404: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142404u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_142408:
    // 0x142408: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14240c:
    // 0x14240c: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x14240cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_142410:
    // 0x142410: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x142410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_142414:
    // 0x142414: 0x60f809  jalr        $v1
label_142418:
    if (ctx->pc == 0x142418u) {
        ctx->pc = 0x142418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142414u;
        // 0x142418: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14241Cu;
        goto label_14241c;
    }
    ctx->pc = 0x142414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14241Cu);
        ctx->pc = 0x142418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142414u;
        // 0x142418: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142414u, 0x14241Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14241Cu;
label_14241c:
    // 0x14241c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_142420:
    // 0x142420: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x142420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_142424:
    // 0x142424: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x142424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_142428:
    // 0x142428: 0x861101a0  lh          $s1, 0x1A0($s0)
    ctx->pc = 0x142428u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 416)));
label_14242c:
    // 0x14242c: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x14242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_142430:
    // 0x142430: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x142430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_142434:
    // 0x142434: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x142434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_142438:
    // 0x142438: 0x60f809  jalr        $v1
label_14243c:
    if (ctx->pc == 0x14243Cu) {
        ctx->pc = 0x14243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142438u;
        // 0x14243c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142440u;
        goto label_142440;
    }
    ctx->pc = 0x142438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142440u);
        ctx->pc = 0x14243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142438u;
        // 0x14243c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142438u, 0x142440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142440u;
label_142440:
    // 0x142440: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x142440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_142444:
    // 0x142444: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x142444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_142448:
    // 0x142448: 0xa0f809  jalr        $a1
label_14244c:
    if (ctx->pc == 0x14244Cu) {
        ctx->pc = 0x14244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142448u;
        // 0x14244c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142450u;
        goto label_142450;
    }
    ctx->pc = 0x142448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x142450u);
        ctx->pc = 0x14244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142448u;
        // 0x14244c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142448u, 0x142450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142450u;
label_142450:
    // 0x142450: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_142454:
    // 0x142454: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x142454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_142458:
    // 0x142458: 0x844401a8  lh          $a0, 0x1A8($v0)
    ctx->pc = 0x142458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
label_14245c:
    // 0x14245c: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x14245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
label_142460:
    // 0x142460: 0x60f809  jalr        $v1
label_142464:
    if (ctx->pc == 0x142464u) {
        ctx->pc = 0x142464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142460u;
        // 0x142464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142468u;
        goto label_142468;
    }
    ctx->pc = 0x142460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142468u);
        ctx->pc = 0x142464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142460u;
        // 0x142464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142460u, 0x142468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142468u;
label_142468:
    // 0x142468: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x142468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14246c:
    // 0x14246c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x14246cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_142470:
    // 0x142470: 0x844401f8  lh          $a0, 0x1F8($v0)
    ctx->pc = 0x142470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 504)));
label_142474:
    // 0x142474: 0x86110198  lh          $s1, 0x198($s0)
    ctx->pc = 0x142474u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 408)));
label_142478:
    // 0x142478: 0x8c4301fc  lw          $v1, 0x1FC($v0)
    ctx->pc = 0x142478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_14247c:
    // 0x14247c: 0x26100198  addiu       $s0, $s0, 0x198
    ctx->pc = 0x14247cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 408));
label_142480:
    // 0x142480: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x142480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_142484:
    // 0x142484: 0x60f809  jalr        $v1
label_142488:
    if (ctx->pc == 0x142488u) {
        ctx->pc = 0x142488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142484u;
        // 0x142488: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14248Cu;
        goto label_14248c;
    }
    ctx->pc = 0x142484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14248Cu);
        ctx->pc = 0x142488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142484u;
        // 0x142488: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142484u, 0x14248Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14248Cu;
label_14248c:
    // 0x14248c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_142490:
    // 0x142490: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x142490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_142494:
    // 0x142494: 0xa0f809  jalr        $a1
label_142498:
    if (ctx->pc == 0x142498u) {
        ctx->pc = 0x142498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142494u;
        // 0x142498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14249Cu;
        goto label_14249c;
    }
    ctx->pc = 0x142494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x14249Cu);
        ctx->pc = 0x142498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142494u;
        // 0x142498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142494u, 0x14249Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14249Cu;
label_14249c:
    // 0x14249c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1424a0:
    // 0x1424a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1424a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1424a4:
    // 0x1424a4: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1424a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1424a8:
    // 0x1424a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1424a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1424ac:
    // 0x1424ac: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1424acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1424b0:
    // 0x1424b0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1424b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1424b4:
    // 0x1424b4: 0x40f809  jalr        $v0
label_1424b8:
    if (ctx->pc == 0x1424B8u) {
        ctx->pc = 0x1424B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424B4u;
        // 0x1424b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1424BCu;
        goto label_1424bc;
    }
    ctx->pc = 0x1424B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1424BCu);
        ctx->pc = 0x1424B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424B4u;
        // 0x1424b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1424B4u, 0x1424BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1424BCu;
label_1424bc:
    // 0x1424bc: 0xe656032c  swc1        $f22, 0x32C($s2)
    ctx->pc = 0x1424bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 812), bits); }
label_1424c0:
    // 0x1424c0: 0xae4202e4  sw          $v0, 0x2E4($s2)
    ctx->pc = 0x1424c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 740), GPR_U32(ctx, 2));
label_1424c4:
    // 0x1424c4: 0xae40033c  sw          $zero, 0x33C($s2)
    ctx->pc = 0x1424c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 828), GPR_U32(ctx, 0));
label_1424c8:
    // 0x1424c8: 0xae400338  sw          $zero, 0x338($s2)
    ctx->pc = 0x1424c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 0));
label_1424cc:
    // 0x1424cc: 0xae400334  sw          $zero, 0x334($s2)
    ctx->pc = 0x1424ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 820), GPR_U32(ctx, 0));
label_1424d0:
    // 0x1424d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1424d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1424d4:
    // 0x1424d4: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1424d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1424d8:
    // 0x1424d8: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x1424d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1424dc:
    // 0x1424dc: 0x40f809  jalr        $v0
label_1424e0:
    if (ctx->pc == 0x1424E0u) {
        ctx->pc = 0x1424E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424DCu;
        // 0x1424e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1424E4u;
        goto label_1424e4;
    }
    ctx->pc = 0x1424DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1424E4u);
        ctx->pc = 0x1424E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424DCu;
        // 0x1424e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1424DCu, 0x1424E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1424E4u;
label_1424e4:
    // 0x1424e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1424e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1424e8:
    // 0x1424e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1424e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1424ec:
    // 0x1424ec: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1424ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1424f0:
    // 0x1424f0: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x1424f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1424f4:
    // 0x1424f4: 0x40f809  jalr        $v0
label_1424f8:
    if (ctx->pc == 0x1424F8u) {
        ctx->pc = 0x1424F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424F4u;
        // 0x1424f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1424FCu;
        goto label_1424fc;
    }
    ctx->pc = 0x1424F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1424FCu);
        ctx->pc = 0x1424F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424F4u;
        // 0x1424f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1424F4u, 0x1424FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1424FCu;
label_1424fc:
    // 0x1424fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1424fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142500:
    // 0x142500: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x142500u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_142504:
    // 0x142504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_142508:
    // 0x142508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14250c:
    // 0x14250c: 0xc050a96  jal         func_142A58
label_142510:
    if (ctx->pc == 0x142510u) {
        ctx->pc = 0x142510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14250Cu;
        // 0x142510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142514u;
        goto label_142514;
    }
    ctx->pc = 0x14250Cu;
    SET_GPR_U32(ctx, 31, 0x142514u);
    ctx->pc = 0x142510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14250Cu;
    // 0x142510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142A58u, 0x14250Cu, 0x142514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142514u;
label_142514:
    // 0x142514: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_142518:
    // 0x142518: 0x264501e0  addiu       $a1, $s2, 0x1E0
    ctx->pc = 0x142518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_14251c:
    // 0x14251c: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x14251cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_142520:
    // 0x142520: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x142520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_142524:
    // 0x142524: 0x60f809  jalr        $v1
label_142528:
    if (ctx->pc == 0x142528u) {
        ctx->pc = 0x142528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142524u;
        // 0x142528: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14252Cu;
        goto label_14252c;
    }
    ctx->pc = 0x142524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14252Cu);
        ctx->pc = 0x142528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142524u;
        // 0x142528: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142524u, 0x14252Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14252Cu;
label_14252c:
    // 0x14252c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_142530:
    // 0x142530: 0x26450260  addiu       $a1, $s2, 0x260
    ctx->pc = 0x142530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
label_142534:
    // 0x142534: 0x844401c0  lh          $a0, 0x1C0($v0)
    ctx->pc = 0x142534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
label_142538:
    // 0x142538: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x142538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
label_14253c:
    // 0x14253c: 0x60f809  jalr        $v1
label_142540:
    if (ctx->pc == 0x142540u) {
        ctx->pc = 0x142540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14253Cu;
        // 0x142540: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142544u;
        goto label_142544;
    }
    ctx->pc = 0x14253Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142544u);
        ctx->pc = 0x142540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14253Cu;
        // 0x142540: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14253Cu, 0x142544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142544u;
label_142544:
    // 0x142544: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x142544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_142548:
    // 0x142548: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x142548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14254c:
    // 0x14254c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14254cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_142550:
    // 0x142550: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x142550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_142554:
    // 0x142554: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x142554u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_142558:
    // 0x142558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14255c:
    // 0x14255c: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x14255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_142560:
    // 0x142560: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x142560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_142564:
    // 0x142564: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x142564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_142568:
    // 0x142568: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x142568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14256c:
    // 0x14256c: 0x3e00008  jr          $ra
label_142570:
    if (ctx->pc == 0x142570u) {
        ctx->pc = 0x142570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14256Cu;
        // 0x142570: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142574u;
        goto label_142574;
    }
    ctx->pc = 0x14256Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14256Cu;
        // 0x142570: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14256Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142574u;
label_142574:
    // 0x142574: 0x0  nop
    ctx->pc = 0x142574u;
    // NOP
    ctx->pc = 0x142578u;
}
