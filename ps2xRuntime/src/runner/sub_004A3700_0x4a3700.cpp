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

// Function: sub_004A3700
// Address: 0x4a3700 - 0x4a3838
void sub_004A3700_0x4a3700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3700_0x4a3700");
#endif

    switch (ctx->pc) {
        case 0x4a3700u: goto label_4a3700;
        case 0x4a3704u: goto label_4a3704;
        case 0x4a3708u: goto label_4a3708;
        case 0x4a370cu: goto label_4a370c;
        case 0x4a3710u: goto label_4a3710;
        case 0x4a3714u: goto label_4a3714;
        case 0x4a3718u: goto label_4a3718;
        case 0x4a371cu: goto label_4a371c;
        case 0x4a3720u: goto label_4a3720;
        case 0x4a3724u: goto label_4a3724;
        case 0x4a3728u: goto label_4a3728;
        case 0x4a372cu: goto label_4a372c;
        case 0x4a3730u: goto label_4a3730;
        case 0x4a3734u: goto label_4a3734;
        case 0x4a3738u: goto label_4a3738;
        case 0x4a373cu: goto label_4a373c;
        case 0x4a3740u: goto label_4a3740;
        case 0x4a3744u: goto label_4a3744;
        case 0x4a3748u: goto label_4a3748;
        case 0x4a374cu: goto label_4a374c;
        case 0x4a3750u: goto label_4a3750;
        case 0x4a3754u: goto label_4a3754;
        case 0x4a3758u: goto label_4a3758;
        case 0x4a375cu: goto label_4a375c;
        case 0x4a3760u: goto label_4a3760;
        case 0x4a3764u: goto label_4a3764;
        case 0x4a3768u: goto label_4a3768;
        case 0x4a376cu: goto label_4a376c;
        case 0x4a3770u: goto label_4a3770;
        case 0x4a3774u: goto label_4a3774;
        case 0x4a3778u: goto label_4a3778;
        case 0x4a377cu: goto label_4a377c;
        case 0x4a3780u: goto label_4a3780;
        case 0x4a3784u: goto label_4a3784;
        case 0x4a3788u: goto label_4a3788;
        case 0x4a378cu: goto label_4a378c;
        case 0x4a3790u: goto label_4a3790;
        case 0x4a3794u: goto label_4a3794;
        case 0x4a3798u: goto label_4a3798;
        case 0x4a379cu: goto label_4a379c;
        case 0x4a37a0u: goto label_4a37a0;
        case 0x4a37a4u: goto label_4a37a4;
        case 0x4a37a8u: goto label_4a37a8;
        case 0x4a37acu: goto label_4a37ac;
        case 0x4a37b0u: goto label_4a37b0;
        case 0x4a37b4u: goto label_4a37b4;
        case 0x4a37b8u: goto label_4a37b8;
        case 0x4a37bcu: goto label_4a37bc;
        case 0x4a37c0u: goto label_4a37c0;
        case 0x4a37c4u: goto label_4a37c4;
        case 0x4a37c8u: goto label_4a37c8;
        case 0x4a37ccu: goto label_4a37cc;
        case 0x4a37d0u: goto label_4a37d0;
        case 0x4a37d4u: goto label_4a37d4;
        case 0x4a37d8u: goto label_4a37d8;
        case 0x4a37dcu: goto label_4a37dc;
        case 0x4a37e0u: goto label_4a37e0;
        case 0x4a37e4u: goto label_4a37e4;
        case 0x4a37e8u: goto label_4a37e8;
        case 0x4a37ecu: goto label_4a37ec;
        case 0x4a37f0u: goto label_4a37f0;
        case 0x4a37f4u: goto label_4a37f4;
        case 0x4a37f8u: goto label_4a37f8;
        case 0x4a37fcu: goto label_4a37fc;
        case 0x4a3800u: goto label_4a3800;
        case 0x4a3804u: goto label_4a3804;
        case 0x4a3808u: goto label_4a3808;
        case 0x4a380cu: goto label_4a380c;
        case 0x4a3810u: goto label_4a3810;
        case 0x4a3814u: goto label_4a3814;
        case 0x4a3818u: goto label_4a3818;
        case 0x4a381cu: goto label_4a381c;
        case 0x4a3820u: goto label_4a3820;
        case 0x4a3824u: goto label_4a3824;
        case 0x4a3828u: goto label_4a3828;
        case 0x4a382cu: goto label_4a382c;
        case 0x4a3830u: goto label_4a3830;
        case 0x4a3834u: goto label_4a3834;
        default: break;
    }

    ctx->pc = 0x4a3700u;

label_4a3700:
    // 0x4a3700: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a3700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a3704:
    // 0x4a3704: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a3704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a3708:
    // 0x4a3708: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a3708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a370c:
    // 0x4a370c: 0x2445f940  addiu       $a1, $v0, -0x6C0
    ctx->pc = 0x4a370cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
label_4a3710:
    // 0x4a3710: 0x8c43f940  lw          $v1, -0x6C0($v0)
    ctx->pc = 0x4a3710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965568)));
label_4a3714:
    // 0x4a3714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a3714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a3718:
    // 0x4a3718: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_4a371c:
    if (ctx->pc == 0x4A371Cu) {
        ctx->pc = 0x4A371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3718u;
        // 0x4a371c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3720u;
        goto label_4a3720;
    }
    ctx->pc = 0x4A3718u;
    {
        const bool branch_taken_0x4a3718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3718u;
        // 0x4a371c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3718) {
            ctx->pc = 0x4A37ECu;
            goto label_4a37ec;
        }
    }
    ctx->pc = 0x4A3720u;
label_4a3720:
    // 0x4a3720: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x4a3720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4a3724:
    // 0x4a3724: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a3724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4a3728:
    // 0x4a3728: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
label_4a372c:
    if (ctx->pc == 0x4A372Cu) {
        ctx->pc = 0x4A372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3728u;
        // 0x4a372c: 0x8f868a20  lw          $a2, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3730u;
        goto label_4a3730;
    }
    ctx->pc = 0x4A3728u;
    {
        const bool branch_taken_0x4a3728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3728u;
        // 0x4a372c: 0x8f868a20  lw          $a2, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3728) {
            ctx->pc = 0x4A377Cu;
            goto label_4a377c;
        }
    }
    ctx->pc = 0x4A3730u;
label_4a3730:
    // 0x4a3730: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x4a3730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a3734:
    // 0x4a3734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a3734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3738:
    // 0x4a3738: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x4a3738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a373c:
    // 0x4a373c: 0x0  nop
    ctx->pc = 0x4a373cu;
    // NOP
label_4a3740:
    // 0x4a3740: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4a3740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_4a3744:
    // 0x4a3744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a3744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a3748:
    // 0x4a3748: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a3748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a374c:
    // 0x4a374c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a3750:
    if (ctx->pc == 0x4A3750u) {
        ctx->pc = 0x4A3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A374Cu;
        // 0x4a3750: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3754u;
        goto label_4a3754;
    }
    ctx->pc = 0x4A374Cu;
    {
        const bool branch_taken_0x4a374c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A374Cu;
        // 0x4a3750: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a374c) {
            ctx->pc = 0x4A3758u;
            goto label_4a3758;
        }
    }
    ctx->pc = 0x4A3754u;
label_4a3754:
    // 0x4a3754: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x4a3754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_4a3758:
    // 0x4a3758: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x4a3758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4a375c:
    // 0x4a375c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4a375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4a3760:
    // 0x4a3760: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4a3760u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4a3764:
    // 0x4a3764: 0x50670001  beql        $v1, $a3, . + 4 + (0x1 << 2)
label_4a3768:
    if (ctx->pc == 0x4A3768u) {
        ctx->pc = 0x4A3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3764u;
        // 0x4a3768: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A376Cu;
        goto label_4a376c;
    }
    ctx->pc = 0x4A3764u;
    {
        const bool branch_taken_0x4a3764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x4a3764) {
            ctx->pc = 0x4A3768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3764u;
            // 0x4a3768: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A376Cu;
            goto label_4a376c;
        }
    }
    ctx->pc = 0x4A376Cu;
label_4a376c:
    // 0x4a376c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4a3770:
    // 0x4a3770: 0x2010  mfhi        $a0
    ctx->pc = 0x4a3770u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4a3774:
    // 0x4a3774: 0x1482fff2  bne         $a0, $v0, . + 4 + (-0xE << 2)
label_4a3778:
    if (ctx->pc == 0x4A3778u) {
        ctx->pc = 0x4A3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3774u;
        // 0x4a3778: 0x881018  mult        $v0, $a0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A377Cu;
        goto label_4a377c;
    }
    ctx->pc = 0x4A3774u;
    {
        const bool branch_taken_0x4a3774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3774u;
        // 0x4a3778: 0x881018  mult        $v0, $a0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3774) {
            ctx->pc = 0x4A3740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3740;
        }
    }
    ctx->pc = 0x4A377Cu;
label_4a377c:
    // 0x4a377c: 0x2603f940  addiu       $v1, $s0, -0x6C0
    ctx->pc = 0x4a377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965568));
label_4a3780:
    // 0x4a3780: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x4a3780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4a3784:
    // 0x4a3784: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4a3784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4a3788:
    // 0x4a3788: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4a3788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a378c:
    // 0x4a378c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_4a3790:
    if (ctx->pc == 0x4A3790u) {
        ctx->pc = 0x4A3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A378Cu;
        // 0x4a3790: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3794u;
        goto label_4a3794;
    }
    ctx->pc = 0x4A378Cu;
    {
        const bool branch_taken_0x4a378c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A378Cu;
        // 0x4a3790: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a378c) {
            ctx->pc = 0x4A37D4u;
            goto label_4a37d4;
        }
    }
    ctx->pc = 0x4A3794u;
label_4a3794:
    // 0x4a3794: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4a3794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4a3798:
    // 0x4a3798: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x4a3798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4a379c:
    // 0x4a379c: 0x0  nop
    ctx->pc = 0x4a379cu;
    // NOP
label_4a37a0:
    // 0x4a37a0: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x4a37a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_4a37a4:
    // 0x4a37a4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4a37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a37a8:
    // 0x4a37a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a37ac:
    // 0x4a37ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4a37b0:
    if (ctx->pc == 0x4A37B0u) {
        ctx->pc = 0x4A37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A37ACu;
        // 0x4a37b0: 0x8f828a20  lw          $v0, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A37B4u;
        goto label_4a37b4;
    }
    ctx->pc = 0x4A37ACu;
    {
        const bool branch_taken_0x4a37ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A37ACu;
        // 0x4a37b0: 0x8f828a20  lw          $v0, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a37ac) {
            ctx->pc = 0x4A37C0u;
            goto label_4a37c0;
        }
    }
    ctx->pc = 0x4A37B4u;
label_4a37b4:
    // 0x4a37b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a37b8:
    // 0x4a37b8: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x4a37b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_4a37bc:
    // 0x4a37bc: 0xa0400017  sb          $zero, 0x17($v0)
    ctx->pc = 0x4a37bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23), (uint8_t)GPR_U32(ctx, 0));
label_4a37c0:
    // 0x4a37c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4a37c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4a37c4:
    // 0x4a37c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4a37c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4a37c8:
    // 0x4a37c8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4a37c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a37cc:
    // 0x4a37cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4a37d0:
    if (ctx->pc == 0x4A37D0u) {
        ctx->pc = 0x4A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A37CCu;
        // 0x4a37d0: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A37D4u;
        goto label_4a37d4;
    }
    ctx->pc = 0x4A37CCu;
    {
        const bool branch_taken_0x4a37cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A37CCu;
        // 0x4a37d0: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a37cc) {
            ctx->pc = 0x4A37A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a37a0;
        }
    }
    ctx->pc = 0x4A37D4u;
label_4a37d4:
    // 0x4a37d4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4a37d8:
    // 0x4a37d8: 0x2603f940  addiu       $v1, $s0, -0x6C0
    ctx->pc = 0x4a37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965568));
label_4a37dc:
    // 0x4a37dc: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4a37e0:
    // 0x4a37e0: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x4a37e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_4a37e4:
    // 0x4a37e4: 0xa0f809  jalr        $a1
label_4a37e8:
    if (ctx->pc == 0x4A37E8u) {
        ctx->pc = 0x4A37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A37E4u;
        // 0x4a37e8: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A37ECu;
        goto label_4a37ec;
    }
    ctx->pc = 0x4A37E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4A37ECu);
        ctx->pc = 0x4A37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A37E4u;
        // 0x4a37e8: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A37E4u, 0x4A37ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A37ECu;
label_4a37ec:
    // 0x4a37ec: 0x2603f940  addiu       $v1, $s0, -0x6C0
    ctx->pc = 0x4a37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965568));
label_4a37f0:
    // 0x4a37f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4a37f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a37f4:
    // 0x4a37f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a37f8:
    // 0x4a37f8: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x4a37f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_4a37fc:
    // 0x4a37fc: 0xae02f940  sw          $v0, -0x6C0($s0)
    ctx->pc = 0x4a37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965568), GPR_U32(ctx, 2));
label_4a3800:
    // 0x4a3800: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a3800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a3804:
    // 0x4a3804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a3804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a3808:
    // 0x4a3808: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x4a3808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
label_4a380c:
    // 0x4a380c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4a380cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_4a3810:
    // 0x4a3810: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x4a3810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_4a3814:
    // 0x4a3814: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x4a3814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_4a3818:
    // 0x4a3818: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x4a3818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_4a381c:
    // 0x4a381c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x4a381cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_4a3820:
    // 0x4a3820: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x4a3820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_4a3824:
    // 0x4a3824: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x4a3824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
label_4a3828:
    // 0x4a3828: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x4a3828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_4a382c:
    // 0x4a382c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x4a382cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_4a3830:
    // 0x4a3830: 0x3e00008  jr          $ra
label_4a3834:
    if (ctx->pc == 0x4A3834u) {
        ctx->pc = 0x4A3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3830u;
        // 0x4a3834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3838u;
        goto label_fallthrough_0x4a3830;
    }
    ctx->pc = 0x4A3830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3830u;
        // 0x4a3834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A3830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a3830:
    ctx->pc = 0x4A3838u;
}
